#pragma once
#include "BaseController.h"
#include "PlayerScoreModel.h"
#include "HandsModel.h"
#include "FileUploadData.h"
#include "GamesByDateForPlayersRequest.h"
#include <string>
#include <vector>

class Controller : public BaseController
{
public:
	virtual HttpResponse Execute();

private:
	bool IsAction(const std::string& name) const;

	HttpResponse InternalExecute();

	HttpResponse Index();
	HttpResponse LookupNames(const std::string& query);
	HttpResponse SubmitScores(const std::vector<PlayerScoreModel>& playerScores);
	HttpResponse SubmitHands(const HandsModel& handsModel);
	HttpResponse ReportMTD(const std::string& requestedDate);
	HttpResponse ReportYTD(const std::string& requestedDate);
	HttpResponse ReportHistory();
	HttpResponse LoadHistory(int skip);
	HttpResponse ReportPlayer(const std::string& player, const std::string& date);
	HttpResponse UploadScores();
	HttpResponse UploadScores(const FileUploadData& fileUpload);
	HttpResponse DeleteGame(int gameId);
	HttpResponse GetGamesByDateForPlayers(const GamesByDateForPlayersRequest& requestModel);
	HttpResponse GetScoresByDate(const std::string& period);
};
