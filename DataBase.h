#pragma once
namespace DataServer
{
	/*Class used to access the databse. It executes the queries*/
	ref class Database
	{
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		Database(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
		System::Object^ getScalar(System::String^);
	};
}