#pragma once

namespace libSrtpTests
{
  //=============================================================================
  //         class: CRtpwTest
  //   Description: class executes rtpw test project, 
  //                see chromium\src\third_party\libsrtp\rtpw.vcxproj
  // History: 
  // 2015/02/27 TP: created
  //=============================================================================
  class CRtpwTest :
    public CTestBase
  {
    AUTO_ADD_TEST(SingleInstanceTestSolutionProvider, CRtpwTest);
  protected:
    int InterchangeableExecute();
  public:
    virtual ~CRtpwTest() {};
    TEST_NAME_METHOD_IMPL(CRtpwTest);
  };
}

