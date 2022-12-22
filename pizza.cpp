    #include <iostream>
    #include <iomanip>                               //to use setw during menu display
    #include <windows.h>                             //to use the Sleep() function
    #include <vector>
    #include <random>                                //to generate random numbers for invoice and order
    using namespace std;
    void mainMenu();
    void contact();
    void menu();
    void m_veg();
    void m_nveg();
    void m_mania();
    void m_sides();
    void bill_Summary();
    void order_v();
    void order_nv();
    void order_m();
    void order_s();
    vector <string> order_v_names;
    vector <int> order_v_price;
    vector <int> order_v_qty;
    vector <char> order_v_size;
    vector <string> order_nv_names;
    vector <int> order_nv_price;
    vector <int> order_nv_qty;
    vector <char> order_nv_size;
    vector <string> order_m_names;
    vector <int> order_m_price;
    vector <int> order_m_qty;
    vector <string> order_s_names;
    vector <int> order_s_price;
    vector <int> order_s_qty;
    int size1, size2, size3, size4;
    string Name1[]={"Margherita", "Double Cheese Margherita", "Farmhouse", "Peppy Paneer", "Mexican Green Wave", "Deluxe Veggie", "Veg Extravaganza",
                    "Veggie Paradise", "Cheese n Corn", "Fresh Veggie", "Paneer Makhani", "Indi Tandoori Paneer", "Cheese n Tomato", "Achari Do Pyaza",
                    "Kadhai Paneer", "The Unthinkable Pizza", "Creamy Tomato Pasta Pizza", "Moroccan Spice Pasta Pizza" };
    int price_v_r[]= {99, 185, 215, 215, 215, 235, 235, 215, 165, 185, 215, 235, 165, 165, 235, 235, 215, 165};
    int price_v_m[]= {199, 335, 395, 395, 395, 450, 450, 395, 305, 335, 395, 450, 305, 305, 450, 450, 395, 305};
    int price_v_l[]= {395, 535, 595, 595, 595, 695, 695, 595, 495, 535, 595, 695, 495, 495, 695, 695, 595, 495};
    string Name2[]= {"Chicken Golden Delight", "Non Veg Supreme", "Chicken Pepperoni", "Chicken Fiesta", "Chicken Dominator", "Pepper Barbecue Chicken",
                     "Chicken Sausage", "Pepper Barbecue & Onion", "Indi Chicken Tikka", "Creamy Tomato Pasta Pizza (Non-Veg)", "Moroccan Spice Pasta Pizza (Non-Veg)"};
    int price_nv_r[]= {235, 305, 305, 235, 305, 185, 165, 215, 305, 215, 185};
    int price_nv_m[]= {450, 570, 570, 450, 570, 335, 305, 395, 570, 395, 335};
    int price_nv_l[]= {695, 835, 835, 695, 835, 535, 495, 595, 835, 595, 535};
    string Name3[]= {"Non Veg Loaded", "Veg Loaded", "Cheesy", "Paneer & Onion", "Golden Corn", "Capsicum", "Onion", "Tomato"};
    int price_m[]= {155, 135, 99, 95, 79, 75, 59, 59};
    string Name4[]= {"Garlic Breadsticks", "Classic Stuffed Garlic Bread", "Creamy Tomato Pasta Veg", "Cheesy Jalapeno Pasta Veg", "Tikka Masala Pasta Veg",
                     "Creamy Tomato Pasta Non Veg", "Cheesy Jalapeno Pasta Non Veg", "Tikka Masala Pasta Non Veg", "Cheesy Jalapeno Dip", "Cheesy Dip", "Choco Lava Cake",
                     "Butterscotch Mousse Cake", "Taco Mexicana Non Veg", "Taco Mexicana Veg", "Chicken Parcel", "Veg Parcel", "Burger Pizza - Classic Veg",
                     "Burger Pizza - Premium Veg", "Burger Pizza - Classic Non Veg", "Potato Cheese Shots", "Crinkle Fries", "Brownie Fantasy", "Pepsi (500ml)",
                     "Slice (350ml)", "7Up (500ml)", "Mirinda (500ml)", "Lipton Ice Tea (250ml)", "Pepsi Black Can", "NIMBOOZ (250ml)", "Bailley One Drinking Water (500ml)"};
    int price_s[]= {99, 145, 129, 129, 129, 139, 139, 139, 25, 25, 99, 99, 135, 118, 45, 39, 105, 135, 145, 59, 59, 59, 60, 50, 60, 60, 50, 60, 50, 20};
    int main()
        {
            cout<<endl<<endl;
            cout<<" ######                                                                            #####                                       ######                                ### \n";
            cout<<" #     #   ##   #####  ##### #  ####  #    # #        ##   #####  #      #   #    #     # #    # ###### ######  ####  #   #    #     # # ###### ######   ##    ####  ### \n";
            cout<<" #     #  #  #  #    #   #   # #    # #    # #       #  #  #    # #       # #     #       #    # #      #      #       # #     #     # #     #      #   #  #  #      ### \n";
            cout<<" ######  #    # #    #   #   # #      #    # #      #    # #    # #        #      #       ###### #####  #####   ####    #      ######  #    #      #   #    #  ####   #  \n";
            cout<<" #       ###### #####    #   # #      #    # #      ###### #####  #        #      #       #    # #      #           #   #      #       #   #      #    ######      #     \n";
            cout<<" #       #    # #   #    #   # #    # #    # #      #    # #   #  #        #      #     # #    # #      #      #    #   #      #       #  #      #     #    # #    # ### \n";
            cout<<" #       #    # #    #   #   #  ####   ####  ###### #    # #    # ######   #       #####  #    # ###### ######  ####    #      #       # ###### ###### #    #  ####  ### \n";
            cout<<endl<<endl;
            string msg = "Nothing's better than having a crispy creamy pizza. Indulge into the divine bliss of our \"particularly cheesy pizzas!\".\nFounded by a bunch of foodies who love pizza so much that they decided to make a business out of it!\nGO ON! Dive right into the menu and choose all that your heart desires! For inquiries, feedbacks and complaints, contact us.\nOur pizzas are made in approved hygiene conditions, with farm fresh items of the best quality.\n";
            for(int i=0; i<msg.length();i++)
            {
                cout<<msg[i];
                Sleep(5);
            }
            cout<<"\n"<<"\n";
            mainMenu();
            return 0;

        }
        void mainMenu()
        {
            int choice;
            cout<<"\t\t\t\t                                                     * * * W E L C O M E ! * * *\n";
            cout<<"\t\t\t\t==============================================================================================================================================\n";
            cout<<endl;
            cout<<"1. OUR MENU\n";
            cout<<"2. CONTACT US\n";
            cout<<"Enter 1 or 2. To exit, enter 0 : ";
            cin>>choice;
            if (choice == 1)
            menu();
            else if(choice == 2)
            contact();
            else if(choice == 0)
            exit(0);
            else
            mainMenu();
        }
        void contact()
        {
            cout<<endl<<endl;
            cout<<"\t\t\t\t                                             * * * We'd love to hear from you! * * *\n";
            cout<<"\t\t\t\t==============================================================================================================================================\n";
            cout<<endl;
            cout<<"Our contact address:\n";
            cout<<"Tower-D, Plot No. 5,\n";
            cout<<"5th Floor, Logix Techno Park,\n";
            cout<<"Sector 127, Noida - 201304, U.P.\n";
            cout<<endl;
            cout<<"Write to us at customercarepcp@gmail.com\n";
            cin.ignore();
            cout<<"To return to the main menu, press enter.\n";
            cin.get();
            mainMenu();
        }
        void menu()
        {
            int cat1;
            cout<<endl<<endl;
            cout<<"\t\t\t\t                                                         * * * M E N U * * *\n";
            cout<<"\t\t\t\t==============================================================================================================================================\n";
            cout<<endl;
            cout<<"1. Veg Pizzas\n";
            cout<<"2. Non-veg Pizzas\n";
            cout<<"3. Pizza Mania\n";
            cout<<"4. Sides and Beverages\n";
            cout<<"5. Return to Main Menu\n";
            cout<<"Choose a category: ";
            cin>>cat1;
            if(cat1 == 1)
            m_veg();
            else if(cat1==2)
            m_nveg();
            else if(cat1==3)
            m_mania();
            else if(cat1==4)
            m_sides();
            else if(cat1==5)
            mainMenu();
            else
            {
                cin.ignore();
                cout<<"Invalid choice. Press enter to try again.\n";
                cin.get();
                menu();
            }


        }
        void m_veg()
        {
            cout<<endl<<endl;
            string desc_v[]= {"A classic delight with 100% Real mozzarella cheese", "A classic delight loaded with extra 100% real mozzarella cheese",
                            "Delightful combination of onion, capsicum, tomato & grilled mushroom", "Flavorful trio of juicy paneer, crisp capsicum with spicy red paprika",
                            "Mexican herbs sprinkled on onion, capsicum, tomato & jalapeno", "Veg delight - onion, capsicum, grilled mushroom, corn & paneer",
                            "Black olives, capsicum, onion, grilled mushroom, corn, tomato, jalapeno & extra cheese",
                            "The awesome foursome! Golden corn, black olives, capsicum, red paprika", "Sweet & Juicy Golden corn and 100% real mozzarella cheese in a delectable combination !",
                            "Delectable combination of onion & capsicum, a veggie lovers pick", "Flavorful twist of spicy makhani sauce topped with paneer & capsicum",
                            "It is hot. It is spicy. It is oh-so-Indian. Tandoori paneer with capsicum, red paprika & mint mayo", "A delectable combination of cheese and juicy tomato",
                            "Tangy & spicy achari flavours on a super cheesy onion pizza- as desi as it gets!", "Paneer chunks in your favourite spicy kadhai masala flavors, with toppings of onion & capsicum",
                            "Loaded with Plant Based Protein topping along with Black Olives & Red Paprika", "Loaded with a tomato pasta topping, green capsicum, red and yellow bell peppers, black olives",
                            "A pizza loaded with a spicy combination of Harissa sauce and delicious pasta"};

            size1= sizeof(Name1)/sizeof(Name1[0]);
            cout<<"\t\t\t\t                                                      ~~~ V E G  P I Z Z A S ~~~\n";
            cout<<"\t\t\t\t==============================================================================================================================================\n";
            cout<<"\t\t\t\tSr. No.                                                                                                                        Price\n";
            cout<<"\t\t\t\t                                                                                                                       Regular Medium Large   \n";
            for(int i=0; i<size1; i++)
            {
                cout<<"\t\t\t\t"<<i+1<<"\t"<<setw(112)<<left<<Name1[i]<<setw(7)<<price_v_r[i]<<" "<<setw(6)<<price_v_m[i]<<" "<<setw(5)<<price_v_l[i]<<endl;
                cout<<"\t\t\t\t\t"<<desc_v[i]<<endl;
                cout<<"\t\t\t\t______________________________________________________________________________________________________________________________________________\n";
                cout<<endl;
            }
                char cat2;
                cout<<"To choose from here, press 'P'. To return to menu, press 'R'.\n";
                cin>>cat2;
                if(cat2=='P')
                {
                    cout<<"Enter the following details for each pizza you want. For example, to order 2 medium sized Moroccan Spice Pasta Pizzas, first enter '18'(Sr. No.),\n"<<
                    "then 'M'(Medium), and lastly '2'(Quantity) as prompted.\n";
                    order_v();
                }
                else if (cat2 =='R')
                menu();
                else
                {
                    cin.ignore();
                    cout<<"Invalid choice. Press enter to return to the main menu.\n";
                    cin.get();
                    mainMenu();
                }
        }
        void order_v()
        {
            int c1;
            char s1;
            int n1;
            int c2;
            cout<<"Enter the Sr. No. of the pizza you wish to order.\n";
            cin>>c1;
            if(c1>size1)
            {
                cin.ignore();
                cout<<"Invalid choice. Press enter to try again .\n";
                cin.get();
                order_v();
            }
            else
            {
                order_v_names.push_back(Name1[c1-1]);
                cout<<"Enter no. of pizzas\n";
                cin>>n1;
                order_v_qty.push_back(n1);
                cout<<"Enter size ('R' for regular, 'M' for medium and 'L' for large).\n";
                cin>>s1;
                if(s1=='R')
                {
                    order_v_price.push_back(price_v_r[c1-1]*n1);
                    order_v_size.push_back('R');
                }
                else if(s1=='M')
                {
                    order_v_price.push_back(price_v_m[c1-1]*n1);
                    order_v_size.push_back('M');
                }
                else if(s1=='L')
                {
                    order_v_price.push_back(price_v_l[c1-1]*n1);
                    order_v_size.push_back('L');
                }
                else
                {
                    cin.ignore();
                    cout<<"Invalid choice. Press enter to try again.\n";
                    order_v_names.erase(order_v_names.end());
                    order_v_price.erase(order_v_price.end());
                    order_v_size.erase(order_v_size.end());
                    cin.get();
                    order_v();
                }

                cout<<"To add more, press '1'. To choose from other categories, press '2'. To proceed to checkout, press '3'.\n";
                cout<<"Beware! If you make an incorrect choice here, whatever you've entered till now will be deleted!\n";
                cin>>c2;
                if(c2==1)
                order_v();
                else if(c2==2)
                menu();
                else if(c2==3)
                {
                    bill_Summary();
                }
                else
                {
                    cin.ignore();
                    cout<<"Invalid choice. Press enter to return to the main menu.\n";
                    order_v_names.clear();
                    order_v_price.clear();
                    order_v_qty.clear();
                    order_v_size.clear();
                    cin.get();
                    mainMenu();
               }
            }
        }
        void m_nveg()
        {
            cout<<endl<<endl;

            string desc_nv[]= {"Double pepper barbecue chicken, golden corn and extra cheese, true delight",
                               "Supreme combination of black olives, onion, capsicum, grilled mushroom, pepper barbecue chicken,\n\t\t\t\t\tperi-peri chicken & grilled chicken rashers",
                               "A classic American taste! Relish the delectable flavor of Chicken Pepperoni, topped with extra cheese",
                               "Grilled chicken rashers, peri-peri chicken, onion & capsicum, a complete fiesta",
                               "Loaded with double pepper barbecue chicken, peri-peri chicken, chicken tikka & grilled chicken rashers","Pepper barbecue chicken for that extra zing",
                               "American classic! Spicy, herbed chicken sausage on pizza", "A classic favourite with pepper barbeque chicken & onion",
                               "The wholesome flavour of tandoori masala with Chicken tikka, onion, red paprika & mint mayo",
                               "Loaded with a delicious creamy tomato pasta topping, BBQ pepper chicken, green capsicum,\n\t\t\t\t\tcrunchy red and yellow bell peppers",
                               "A pizza loaded with a spicy combination of Harissa sauce, Peri Peri chicken chunks and delicious pasta"};
            size2 = sizeof(Name2)/sizeof(Name2[0]);
            cout<<"\t\t\t\t                                                 ~~~ N O N - V E G  P I Z Z A S ~~~\n";
            cout<<"\t\t\t\t==============================================================================================================================================\n";
            cout<<"\t\t\t\tSr. No.                                                                                                                        Price\n";
            cout<<"\t\t\t\t                                                                                                                       Regular Medium Large   \n";
            for(int i=0; i<size2;i++)
            {
                cout<<"\t\t\t\t"<<i+1<<"\t"<<setw(112)<<left<<Name2[i]<<setw(7)<<price_nv_r[i]<<" "<<setw(6)<<price_nv_m[i]<<" "<<setw(5)<<price_nv_l[i]<<endl;
                cout<<"\t\t\t\t\t"<<desc_nv[i]<<endl;
                cout<<"\t\t\t\t______________________________________________________________________________________________________________________________________________\n";
                cout<<endl;
            }
            char cat3;
                cout<<"To choose from here, press 'P'. To return to menu, press 'R'.\n";
                cin>>cat3;
                if(cat3=='P')
                {
                    cout<<"Enter the following details for each pizza you want. For example, to order 2 medium sized Moroccan Spice Pasta Pizzas (Non-Veg), first enter '11'(Sr. No.),\n"<<
                    "then 'M'(Medium), and lastly '2'(Quantity) as prompted.\n";
                    order_nv();
                }
                else if (cat3 =='R')
                menu();
                else
                {
                    cin.ignore();
                    cout<<"Invalid choice. Press enter to return to the main menu.\n";
                    cin.get();
                    mainMenu();
                }
        }
        void order_nv()
        {
            int c3;
            char s2;
            int n2;
            int c4;
            cout<<"Enter the Sr. No. of the pizza you wish to order.\n";
            cin>>c3;
            if(c3>size2)
            {
                cin.ignore();
                cout<<"Invalid choice. Press enter to try again.\n";
                cin.get();
                order_nv();
            }
            else
            {
                order_nv_names.push_back(Name2[c3-1]);
                cout<<"Enter no. of pizzas\n";
                cin>>n2;
                order_nv_qty.push_back(n2);
                cout<<"Enter size ('R' for regular, 'M' for medium and 'L' for large).\n";
                cin>>s2;
                if(s2=='R')
                {
                    order_nv_price.push_back(price_nv_r[c3-1]*n2);
                    order_nv_size.push_back('R');
                }
                else if(s2=='M')
                {
                    order_nv_price.push_back(price_nv_m[c3-1]*n2);
                    order_nv_size.push_back('M');
                }
                else if(s2=='L')
                {
                    order_nv_price.push_back(price_nv_l[c3-1]*n2);
                    order_nv_size.push_back('L');
                }
                else
                {
                    cin.ignore();
                    cout<<"Invalid choice. Press enter to try again.\n";
                    order_nv_names.erase(order_nv_names.end());
                    order_nv_size.erase(order_nv_size.end());
                    cin.get();
                    order_nv();
                }

                cout<<"To add more, press '1'. To choose from other categories, press '2'. To proceed to checkout, press '3'.\n";
                cout<<"Beware! If you make an incorrect choice here, whatever you've entered till now will be deleted!\n";
                cin>>c4;
                if(c4==1)
                order_nv();
                else if(c4==2)
                menu();
                else if(c4==3)
                {
                    bill_Summary();
                }
                else
                {
                    cin.ignore();
                    cout<<"Invalid choice. Press enter to return to the main menu.\n";
                    order_nv_names.clear();
                    order_nv_price.clear();
                    order_nv_qty.clear();
                    order_nv_size.clear();
                    cin.get();
                    mainMenu();
               }
            }
        }
        void m_mania()
        {
            char s3= 'R';         //Manias are only offered in this size!
            string desc_m[]= {"Chicken sausage, pepper barbecue chicken & peri-peri chicken in a fresh pan crust",
                              "Tomato, Jalapeno, Corn, Grilled Mushroom & crushed Aranchini Patty in a fresh pan crust", "Cheese lovers paradise, loaded with mozzarella, cheddar & gouda cheese",
                              "Creamy Paneer & Onion", "Sweet & juicy golden corn for that lipsmacking taste", "Fresh & crisp capsicum for the perfect crunch in pizza",
                              "Crunchy onion on a cheesy base. The pizza mania classic", "Juicy tomato in a flavourful combination with cheese & tangy sauce"};
            size3 = sizeof(Name3)/sizeof(Name3[0]);
            cout<<"\t\t\t\t                                                     ~~~ P I Z Z A  M A N I A ~~~\n";
            cout<<"\t\t\t\t==============================================================================================================================================\n";
            cout<<"\t\t\t\tSr. No.                                                                                                                        Price\n";
            for(int i=0; i<size3;i++)
            {
                cout<<"\t\t\t\t"<<i+1<<"\t"<<setw(120)<<left<<Name3[i]<<setw(7)<<price_m[i]<<endl;
                cout<<"\t\t\t\t\t"<<desc_m[i]<<endl;
                cout<<"\t\t\t\t______________________________________________________________________________________________________________________________________________\n";
                cout<<endl;
            }
            char cat4;
                cout<<"To choose from here, press 'P'. To return to menu, press 'R'.\n";
                cin>>cat4;
                if(cat4=='P')
                {
                    cout<<"Enter the following details for each pizza you want. For example, to order 2 Cheesy pizzas, first enter '3'(Sr. No.),\n"<<
                    "and then '2'(Quantity) as prompted.\n";
                    order_m();
                }
                else if (cat4 =='R')
                menu();
                else
                {
                    cin.ignore();
                    cout<<"Invalid choice. Press enter to return to the main menu.\n";
                    cin.get();
                    mainMenu();
                }
        }
        void order_m()
        {
            int c5;
            int n3;
            int c6;
            cout<<"Enter the Sr. No. of the pizza you wish to order.\n";
            cin>>c5;
            if(c5>size3)
            {
                cin.ignore();
                cout<<"Invalid choice. Press enter to try again.\n";
                cin.get();
                order_m();
            }
            else
            {
                order_m_names.push_back(Name3[c5-1]);
                cout<<"Enter no. of pizzas\n";
                cin>>n3;
                order_m_qty.push_back(n3);
                order_m_price.push_back(price_m[c5-1]*n3);
                cout<<"To add more, press '1'. To choose from other categories, press '2'. To proceed to checkout, press '3'.\n";
                cout<<"Beware! If you make an incorrect choice here, whatever you've entered till now will be deleted!\n";
                cin>>c6;
                if(c6==1)
                order_m();
                else if(c6==2)
                menu();
                else if(c6==3)
                {
                    bill_Summary();
                }
                else
                {
                    cin.ignore();
                    cout<<"Invalid choice. Press enter to return to the main menu.\n";
                    order_m_names.clear();
                    order_m_price.clear();
                    order_m_qty.clear();
                    cin.get();
                    mainMenu();
               }
            }
        }
        void m_sides()
        {
            cout<<endl<<endl;
            string desc_s[]= {"Baked to perfection. Your perfect pizza partner! Tastes best with dip", "Freshly baked garlic bread with cheese, juicy corn & tangy jalapeno",
                              "Instant Fusilli Pasta, Creamy Culinary Dressing, Onion, Olive, Green Capsicum, Parsley sprinkle",
                              "Instant Fusilli Pasta, Cheesy Jalapeno Sauce, Onion, Jalapeno, Parsley sprinkle", "Instant Fusilli Pasta, Spicy Red dressing, Onion, Paneer Tikka, Parsley sprinkle",
                              "Instant Fusilli Pasta, Creamy Culinary Dressing, Onion, Olives, BBQ Pepper Chicken, Parsley sprinkle",
                              "Instant Fusilli Pasta, Cheesy Jalapeno Sauce, Onion, Jalapeno, BBQ Pepper Chicken, Parsley sprinkle",
                              "Instant Fusilli Pasta, Spicy Red dressing, Onion, Chicken Tikka, Parsley sprinkle", "A spicy, tangy flavored cheese dip is a an absolute delight with your favourite Garlic Breadsticks",
                              "An all-time favorite with your Garlic Breadsticks for a cheesy indulgence", "Chocolate lovers delight! Indulgent, gooey molten lava inside chocolate cake",
                              "Sweet temptation! Butterscotch flavored mousse", "Truly irresistible! Crispy taco with non-veg patty & creamy harissa sauce",
                              "Truly irresistible! Crispy taco with veg patty & creamy harissa sauce", "Snacky bites! Pizza rolls with chicken sausage & creamy harissa sauce",
                              "Snacky bites! Pizza rolls with paneer & creamy harissa sauce", "Oven-baked buns with cheese, tomato & capsicum in creamy mayo",
                              "Oven-baked buns with cheese, paneer, tomato, capsicum & red paprika in creamy mayo", "Oven-baked buns with cheese, peri-peri chicken, tomato & capsicum in creamy mayo",
                              "Crisp and golden outside, flavorful burst of cheese, potato & spice inside", "Crispy wavy masala coated fries served with a spicy tomato chilli sauce",
                              "Sweet Temptation! Hot Chocolate Brownie drizzled with chocolate fudge sauce", " ", " ", " ", " ", " ", " ", " ", " " };
            size4= sizeof(Name4)/sizeof(Name4[0]);
            cout<<"\t\t\t\t                                       ~~~ S I D E S,  D E S S E R T S  &  B E V E R A G E S ~~~\n";
            cout<<"\t\t\t\t==============================================================================================================================================\n";
            cout<<"\t\t\t\tSr. No.                                                                                                                        Price\n";
            for(int i=0; i<size4;i++)
            {
                cout<<"\t\t\t\t"<<i+1<<"\t"<<setw(120)<<left<<Name4[i]<<setw(7)<<price_s[i]<<endl;
                cout<<"\t\t\t\t\t"<<desc_s[i]<<endl;
                cout<<"\t\t\t\t______________________________________________________________________________________________________________________________________________\n";
                cout<<endl;
            }
            char cat5;
            cout<<"To choose from here, press 'P'. To return to menu, press 'R'.\n";
            cin>>cat5;
            if(cat5=='P')
            {
                cout<<"Enter the following details for each item you want. For example, to order 2 Choco Lava cakes, first enter '11'(Sr. No.),\n"<<
                "and then '2'(Quantity) as prompted.\n";
                order_s();
            }
            else if (cat5 =='R')
            menu();
            else
            {
                cin.ignore();
                cout<<"Invalid choice. Press enter to return to the main menu.\n";
                cin.get();
                mainMenu();
            }
        }
        void order_s()
        {
            int c7;
            int n4;
            int c8;
            cout<<"Enter the Sr. No. of the item you wish to order.\n";
            cin>>c7;
            if(c7>size4)
            {
                cin.ignore();
                cout<<"Invalid choice. Press enter to try again.\n";
                cin.get();
                order_s();
            }
            else
            {
                order_s_names.push_back(Name4[c7-1]);
                cout<<"Enter no. of items\n";
                cin>>n4;
                order_s_qty.push_back(n4);
                order_s_price.push_back(price_s[c7-1]*n4);
                cout<<"To add more, press '1'. To choose from other categories, press '2'. To proceed to checkout, press '3'.\n";
                cout<<"Beware! If you make an incorrect choice here, whatever you've entered till now will be deleted!\n";
                cin>>c8;
                if(c8==1)
                order_s();
                else if(c8==2)
                menu();
                else if(c8==3)
                {
                    bill_Summary();
                }
                else
                {
                    cin.ignore();
                    cout<<"Invalid choice. Press enter to return to the main menu.\n";
                    order_s_names.clear();
                    order_s_price.clear();
                    order_s_qty.clear();
                    cin.get();
                    mainMenu();
               }
            }
        }

        void bill_Summary()
        {
            double final_cost_v =0, final_cost_nv=0, final_cost_m=0, final_cost_s=0;
            default_random_engine en(time(0));
            cout<<endl<<endl;
            cout<<"\t\t\t\t                                                     *** T A X  I N V O I C E ***\n";
            cout<<"\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------\n";
            cout<<"\t\t\t\t                                                       Rainbow Foodworks Limited\n";
            cout<<"\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------\n";
            cout<<"\t\t\t\tShop no. 6, Ground Floor, Unity heights Plot No. 22, Beside, HP Petrol Pump & State Bank of India Nadiadwala colony, SV Rd, Malad West,\n\t\t\t\tMumbai, Maharashtra 400064\n";
            uniform_int_distribution <int> dist(10000, 999999);
            uniform_int_distribution <int> tdig(10, 99);
            cout<<"\t\t\t\t\t\t\t\t\t\t    Invoice Number: "<< dist(en)<<"/"<<tdig(en)<<"/"<<dist(en)<<endl;
            cout<<"\t\t\t\tOrder: "<<tdig(en)<<endl;
            time_t now = time(0);
            char* date_time = ctime(&now);
            cout<<"\t\t\t\t"<<date_time;
            cout<<"\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------\n";
            cout<<"\t\t\t\t Qty  Size  Name                                                                                                                       Price\n";
            if(order_v_names.size()>0)
            {
                for(int x=0;x<order_v_names.size();x++)
                {
                    final_cost_v += order_v_price[x];
                    cout<<"\t\t\t\t "<<setw(3)<<left<<order_v_qty[x]<<"  "<<setw(4)<<left<<order_v_size[x]<<"  "<<setw(123)<<left<<order_v_names[x]<<setw(7)<<order_v_price[x]<<endl;

                }

            }
            if(order_nv_names.size()>0)
            {
                for(int w=0;w<order_nv_names.size();w++)
                {
                    final_cost_nv += order_nv_price[w];
                    cout<<"\t\t\t\t "<<setw(3)<<left<<order_nv_qty[w]<<"  "<<setw(4)<<left<<order_nv_size[w]<<"  "<<setw(123)<<left<<order_nv_names[w]<<setw(7)<<order_nv_price[w]<<endl;

                }

            }
            if(order_m_names.size()>0)
            {
                for(int y= 0;y<order_m_names.size();y++)
                {
                    final_cost_m += order_m_price[y];
                    cout<<"\t\t\t\t "<<setw(3)<<left<<order_m_qty[y]<<"  "<<setw(4)<<left<<"R"<<"  "<<setw(123)<<left<<order_m_names[y]<<setw(7)<<order_m_price[y]<<endl;
                }
            }
            if (order_s_names.size()>0)
            {
                for(int z= 0;z<order_s_names.size();z++)
                {
                    final_cost_s += order_s_price[z];
                    cout<<"\t\t\t\t "<<setw(3)<<left<<order_s_qty[z]<<"  "<<setw(4)<<left<<" "<<"  "<<setw(123)<<left<<order_s_names[z]<<setw(7)<<order_s_price[z]<<endl;
                }
            }
            double subt = final_cost_v+ final_cost_nv+ final_cost_m+ final_cost_s;
            double gst= 0.05*subt;
            double tot = subt+gst;
            cout<<"\t\t\t\t                                                                                                                                     ---------\n";

            cout<<"\t\t\t\tSub Total:                                                                                                                             "<<setw(7)<<left<<subt<<endl;
            cout<<"\t\t\t\tG S T (5%):                                                                                                                            "<<setw(7)<<left<<gst<<endl;
            cout<<"\t\t\t\t                                                                                                                                     ---------\n";
            cout<<"\t\t\t\tTOTAL:                                                                                                                                 "<<setw(7)<<left<<tot<<endl;
            cout<<"\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------\n";
            cout<<"\t\t\t\t                                                     *** Thank You! Visit Again! ***\n";
            cout<<"\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------\n";
            cout<<endl<<endl<<endl<<endl;
            cout<<"\t\t\t\tCoded by: Rhea Rajput\n";
            cout<<"\t\t\t\tCompleted on: 15/01/2021.\n";
        }
