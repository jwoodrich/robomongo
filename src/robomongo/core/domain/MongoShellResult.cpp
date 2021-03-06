#include "robomongo/core/domain/MongoShellResult.h"

namespace Robomongo
{
    MongoShellResult::MongoShellResult(const std::string &type, const std::string &response, 
                                       const MongoDocumentPtrContainerType &documents,
                                       const MongoQueryInfo &queryInfo, qint64 elapsedms,
                                       bool isAggregate /*= false*/, AggrInfo aggrInfo /*= AggrInfo()*/) :
        _type(type),
        _response(response),
        _documents(documents),
        _queryInfo(queryInfo),
        _elapsedms(elapsedms),
        _isAggregate(isAggregate),
        _aggrInfo(aggrInfo)
        { }

    MongoShellExecResult::MongoShellExecResult(const std::vector<MongoShellResult> &results,
                         const std::string &currentServer, bool isCurrentServerValid,
                         const std::string &currentDatabase, bool isCurrentDatabaseValid,
                         bool timeoutReached /* = false */) :
        _results(results),
        _currentServer(currentServer),
        _currentDatabase(currentDatabase),
        _isCurrentServerValid(isCurrentServerValid),
        _isCurrentDatabaseValid(isCurrentDatabaseValid),
        _timeoutReached(timeoutReached) 
        { }
}
