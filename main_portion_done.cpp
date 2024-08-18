int main() {		
	int i, k, z;

	while (true) {  // Loop to run until the user chooses to exit
		cout << "Welcome\n\n";
		cout << "1. Admin\n2. User\n3. Exit\n";
		cin >> i;

		if (i == 1) {
			cout << "Admin mode\n";
			alogin ad;
			k = ad.adlogin();
			if (k == 1) {
				fnmanage();
			} else {
				cout << "Can't access admin mode\n";
			}

		} else if (i == 2) {
			cout << "User mode\n";
			cout << "1. Register\n2. Login\n";
			cin >> z;

			if (z == 1) {
				s1.save_member();
			} else if (z == 2) {
				s1.log();
			} else {
				cout << "\nInvalid option\n";
			}

		} else if (i == 3) {
			exit(0);  // Exit the program
		} else {
			cout << "\nInvalid input, please try again.\n";
		}

		cout << "\n";  
	}