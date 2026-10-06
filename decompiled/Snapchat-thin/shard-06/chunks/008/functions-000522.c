/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104dfd1ac; end: 104dfd213; +[SCReportPoll descriptor] */

void FUN_104dfd1ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8fa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe600,
                        &PTR____CFConstantStringClassReference_110db56d8,
                        &PTR_s_snapchat_abuse_support_1130b5a40,&PTR_s_question_1130b5c58,3,0x20,
                        0x1c);
    puRam00000001136b8fa8 = puVar1;
  }
  return;
}



/* Entry: 104dfd214; end: 104dfd2f7; +[SCReportSoundShare descriptor] */

void FUN_104dfd214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8fb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe650,
                        &PTR____CFConstantStringClassReference_110db56f8,
                        &PTR_s_snapchat_abuse_support_1130b5a40,&PTR_s_trackId_1130b5bb8,1,0x10,0x1c
                       );
    puRam00000001136b8fb0 = puVar1;
  }
  return;
}



/* Entry: 104dfd2f8; end: 104dfd303;  */

bool FUN_104dfd2f8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 104dfd304; end: 104dfd37f;  */

undefined * FUN_104dfd304(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8fc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db5738,
                        &UNK_10dd8bff4,&UNK_10dd8c044,4,FUN_104dfd380,0);
    do {
      if (puRam00000001136b8fc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8fc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8fc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8fc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8fc0;
}



/* Entry: 104dfd380; end: 104dfd38b;  */

bool FUN_104dfd380(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 104dfd38c; end: 104dfd407;  */

undefined * FUN_104dfd38c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8fc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db5758,
                        &UNK_10dd8c054,&UNK_10dd8c354,0x15,FUN_104dfd408,0);
    do {
      if (puRam00000001136b8fc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8fc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8fc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8fc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8fc8;
}



/* Entry: 104dfd408; end: 104dfd413;  */

bool FUN_104dfd408(uint param_1)

{
  return param_1 < 0x15;
}



/* Entry: 104dfd414; end: 104dfd48f;  */

undefined * FUN_104dfd414(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8fd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db5778,
                        &UNK_10dd8c3a8,&UNK_10dd8c438,4,FUN_104dfd490,0);
    do {
      if (puRam00000001136b8fd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8fd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8fd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8fd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8fd0;
}



/* Entry: 104dfd490; end: 104dfd49b;  */

bool FUN_104dfd490(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 104dfd49c; end: 104dfd503; +[SCSpecsReportingDeviceContext descriptor] */

void FUN_104dfd49c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8fd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe740,
                        &PTR____CFConstantStringClassReference_110db5798,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_firmwareVersion_1130b6488,6,
                        0x38,0x1c);
    puRam00000001136b8fd8 = puVar1;
  }
  return;
}



/* Entry: 104dfd504; end: 104dfd57f; +[SCSpecsReportingMediaPointer descriptor] */

undefined * FUN_104dfd504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8fe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe790,
                        &PTR____CFConstantStringClassReference_110db57b8,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_mediaURL_1130b6348,5,0x30,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001136b8fe0 = puVar1;
  }
  return puRam00000001136b8fe0;
}



/* Entry: 104dfd580; end: 104dfd60b; +[SCSpecsReportingReportReason descriptor] */

undefined * FUN_104dfd580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8fe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe7e0,
                        &PTR____CFConstantStringClassReference_110db57d8,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_safetyReason_1130b6208,2,0x10
                        ,0x1c);
    func_0x00010c229040();
    puRam00000001136b8fe8 = puVar1;
  }
  return puRam00000001136b8fe8;
}



/* Entry: 104dfd60c; end: 104dfd673; +[SCSpecsReportingContentReportTarget descriptor] */

void FUN_104dfd60c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe830,
                        &PTR____CFConstantStringClassReference_110db57f8,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_lensId_1130b6548,6,0x38,0x1c)
    ;
    puRam00000001136b8ff0 = puVar1;
  }
  return;
}



/* Entry: 104dfd674; end: 104dfd6db; +[SCSpecsReportingLensComplianceReportTarget descriptor] */

void FUN_104dfd674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe880,
                        &PTR____CFConstantStringClassReference_110db5818,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_lensId_1130b6248,2,0x18,0x1c)
    ;
    puRam00000001136b8ff8 = puVar1;
  }
  return;
}



/* Entry: 104dfd6dc; end: 104dfd767; +[SCSpecsReportingReportTarget descriptor] */

undefined * FUN_104dfd6dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe8d0,
                        &PTR____CFConstantStringClassReference_110db5838,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_content_1130b6288,2,0x18,0x1c
                       );
    func_0x00010c229040();
    puRam00000001136b9000 = puVar1;
  }
  return puRam00000001136b9000;
}



/* Entry: 104dfd768; end: 104dfd7cf; +[SCSpecsReportingLensReportTarget descriptor] */

void FUN_104dfd768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe920,
                        &PTR____CFConstantStringClassReference_110db5858,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_lensId_1130b62c8,2,0x18,0x1c)
    ;
    puRam00000001136b9008 = puVar1;
  }
  return;
}



/* Entry: 104dfd7d0; end: 104dfd837; +[SCSpecsReportingPurchaseReportTarget descriptor] */

void FUN_104dfd7d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe970,
                        &PTR____CFConstantStringClassReference_110db5878,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_transactionId_1130b6308,2,
                        0x18,0x1c);
    puRam00000001136b9010 = puVar1;
  }
  return;
}



/* Entry: 104dfd838; end: 104dfd89f; +[SCSpecsReportingDeviceIssueReportTarget descriptor] */

void FUN_104dfd838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fe9c0,
                        &PTR____CFConstantStringClassReference_110db5898,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_attributes_1130b61c8,1,0x10,
                        0x1c);
    puRam00000001136b9018 = puVar1;
  }
  return;
}



/* Entry: 104dfd8a0; end: 104dfd907; +[SCSpecsReportingGeneralReportTarget descriptor] */

void FUN_104dfd8a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fea10,
                        &PTR____CFConstantStringClassReference_110db58b8,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_attributes_1130b61e8,1,0x10,
                        0x1c);
    puRam00000001136b9020 = puVar1;
  }
  return;
}



/* Entry: 104dfd908; end: 104dfd993; +[SCSpecsReportingWebReportTarget descriptor] */

undefined * FUN_104dfd908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fea60,
                        &PTR____CFConstantStringClassReference_110db58d8,
                        &PTR_s_com_specs_reporting_v1_1130b61b0,&PTR_s_content_1130b63e8,5,0x30,0x1c
                       );
    func_0x00010c229040();
    puRam00000001136b9028 = puVar1;
  }
  return puRam00000001136b9028;
}



/* Entry: 104dfd994; end: 104dfda0f;  */

undefined * FUN_104dfd994(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b9030 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db58f8,
                        &UNK_10dd8c448,&UNK_10dd8c784,0x28,FUN_104dfda10,0);
    do {
      if (puRam00000001136b9030 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b9030;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b9030,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b9030 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b9030;
}



/* Entry: 104dfda10; end: 104dfda2f;  */

uint FUN_104dfda10(ulong param_1)

{
  return (uint)((uint)param_1 < 0x2b) & (uint)(0x7fffff7febf >> (param_1 & 0x3f));
}



/* Entry: 104dfda30; end: 104dfdabb; +[SCReportReportReasonId descriptor] */

undefined * FUN_104dfda30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129feb00,
                        &PTR____CFConstantStringClassReference_110db5918,
                        &PTR_s_snapchat_abuse_support_1130b6610,&PTR_s_safetyReasonId_1130b6628,6,
                        0x38,0x1c);
    func_0x00010c229040();
    puRam00000001136b9038 = puVar1;
  }
  return puRam00000001136b9038;
}



/* Entry: 104dfdabc; end: 104dfdb37;  */

undefined * FUN_104dfdabc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b9040 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db5938,
                        &UNK_10dd8c824,&UNK_10dd8cb90,0x2a,FUN_104dfdb38,0);
    do {
      if (puRam00000001136b9040 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b9040;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b9040,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b9040 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b9040;
}



/* Entry: 104dfdb38; end: 104dfdb57;  */

uint FUN_104dfdb38(ulong param_1)

{
  return (uint)((uint)param_1 < 0x2e) & (uint)(0x3ffdfff7febf >> (param_1 & 0x3f));
}



/* Entry: 104dfdb58; end: 104dfdc3b; +[SCReportSafetyReasonId descriptor] */

void FUN_104dfdb58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129feba0,
                        &PTR____CFConstantStringClassReference_110db5958,
                        &PTR_s_snapchat_abuse_support_1130b66e8,&PTR_s_reasonId_1130b6700,1,8,0x1c);
    puRam00000001136b9048 = puVar1;
  }
  return;
}



/* Entry: 104dfdc3c; end: 104dfdc47;  */

bool FUN_104dfdc3c(int param_1)

{
  return param_1 == 0;
}



/* Entry: 104dfdc48; end: 104dfdd2b; +[SCReportStoreItemReasonId descriptor] */

void FUN_104dfdc48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fec40,
                        &PTR____CFConstantStringClassReference_110db5998,
                        &PTR_s_snapchat_abuse_support_1130b6720,&PTR_s_reasonId_1130b6738,1,8,0x1c);
    puRam00000001136b9058 = puVar1;
  }
  return;
}



/* Entry: 104dfdd2c; end: 104dfdd37;  */

bool FUN_104dfdd2c(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 104dfdd38; end: 104dfde1b; +[SCReportCameosReasonId descriptor] */

void FUN_104dfdd38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fece0,
                        &PTR____CFConstantStringClassReference_110db59d8,
                        &PTR_s_snapchat_abuse_support_1130b6758,&PTR_s_reasonId_1130b6770,1,8,0x1c);
    puRam00000001136b9068 = puVar1;
  }
  return;
}



/* Entry: 104dfde1c; end: 104dfde27;  */

bool FUN_104dfde1c(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 104dfde28; end: 104dfdf1f; +[SCReportGenerativeContentReasonId descriptor] */

void FUN_104dfde28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fed80,
                        &PTR____CFConstantStringClassReference_110db5a18,
                        &PTR_s_snapchat_abuse_support_1130b6790,&PTR_s_reasonId_1130b67a8,1,8,0x1c);
    puRam00000001136b9078 = puVar1;
  }
  return;
}



/* Entry: 104dfdf20; end: 104dfdf2b;  */

bool FUN_104dfdf20(uint param_1)

{
  return param_1 < 0x1b;
}



/* Entry: 104dfdf2c; end: 104dfe00f; +[SCReportLensReasonId descriptor] */

void FUN_104dfdf2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fee20,
                        &PTR____CFConstantStringClassReference_110db5a58,
                        &PTR_s_snapchat_abuse_support_1130b67c8,&PTR_s_reasonId_1130b67e0,1,8,0x1c);
    puRam00000001136b9088 = puVar1;
  }
  return;
}



/* Entry: 104dfe010; end: 104dfe01b;  */

bool FUN_104dfe010(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 104dfe01c; end: 104dfe083; +[SCReportSoundReasonId descriptor] */

void FUN_104dfe01c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129feec0,
                        &PTR____CFConstantStringClassReference_110db5a98,
                        &PTR_s_snapchat_abuse_support_1130b6800,&PTR_s_reasonId_1130b6818,1,8,0x1c);
    puRam00000001136b9098 = puVar1;
  }
  return;
}



/* Entry: 104dfe084; end: 104dfe3ab; -[SCCommerceReviewOrderHalfEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dfe084(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  
  puVar1 = PTR_PTR_1126b0a60;
  _objc_alloc();
  lVar27 = (long)_DAT_112713720;
  lVar2 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf32e00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar27;
  _objc_loadWeakRetained();
  func_0x00010c10f640();
  lVar5 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112713724;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf32e80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112713728;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf45480();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar15 = lVar27;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271372c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112713734;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112713738;
  lVar21 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010beed500();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar24 = lVar28;
  func_0x00010c0f6880();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffce20();
  lVar29 = (long)_DAT_11271373c;
  uVar26 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar1;
  _objc_release(uVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar28);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar27);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar29),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 104dfe3ac; end: 104dfe433; -[SCCommerceReviewOrderHalfEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dfe3ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713730,0);
  _objc_destroyWeak(param_1 + _DAT_112713738);
  _objc_destroyWeak(param_1 + _DAT_112713734);
  _objc_destroyWeak(param_1 + _DAT_11271372c);
  _objc_destroyWeak(param_1 + _DAT_112713724);
  _objc_destroyWeak(param_1 + _DAT_112713728);
  _objc_destroyWeak(param_1 + _DAT_112713720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271373c,0);
  return;
}



/* Entry: 104dfe434; end: 104dfe727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104dfe434(long param_1,uint param_2,undefined8 *param_3,undefined1 *param_4,undefined1 param_5,
             undefined *param_6,undefined8 param_7,ulong param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *unaff_x20;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined *unaff_x26;
  undefined8 *unaff_x27;
  undefined1 *unaff_x28;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  uint uStack_13c;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_13c = param_2;
  _objc_retain();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010bf529e0(param_1);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puStack_138 = puVar7;
    _objc_retain(param_1);
    param_3 = &uStack_130;
    param_4 = auStack_f0;
    uVar4 = 0x10;
    lVar5 = param_1;
    func_0x00010bf52a60();
    param_5 = (undefined1)uVar4;
    if (lVar5 != 0) {
      lVar6 = *plStack_120;
      unaff_x22 = lVar5;
      do {
        lVar5 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x24 = *(undefined1 **)(lStack_128 + lVar5 * 8);
          unaff_x23 = unaff_x24;
          func_0x00010c2579e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          param_5 = (undefined1)uVar4;
          if (unaff_x23 == (undefined1 *)0x0) {
            _objc_release(param_1);
            puVar7 = (undefined *)0x0;
            unaff_x20 = puStack_138;
            goto LAB_104dfe6d0;
          }
          puVar1 = unaff_x24;
          func_0x00010c0deea0();
          if (puVar1 != (undefined1 *)0x0) {
            puVar1 = unaff_x24;
            func_0x00010c2579e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            func_0x00010bfe5be0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = puVar2;
            func_0x000106d772a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            _objc_release(puVar1);
            unaff_x25 = unaff_x24;
            func_0x00010c0deea0();
            if (unaff_x25 == (undefined1 *)0x1) {
              func_0x000104e052bc();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000104e052d4();
              _objc_retainAutoreleasedReturnValue();
            }
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            unaff_x26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0deea0(unaff_x24);
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            puStack_150 = puVar7;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            unaff_x27 = (undefined8 *)PTR_PTR_1126b0a68;
            _objc_alloc();
            func_0x00010c2579e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = unaff_x24;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = 0x14;
            param_7 = 0x17;
            param_8 = (ulong)uStack_13c;
            param_4 = unaff_x28;
            param_6 = unaff_x26;
            func_0x00010c051e20();
            param_3 = unaff_x27;
            func_0x00010befa120(puStack_138);
            _objc_release(unaff_x27);
            _objc_release(unaff_x28);
            _objc_release(unaff_x24);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            _objc_release(unaff_x23);
          }
          lVar5 = lVar5 + 1;
        } while (unaff_x22 != lVar5);
        param_3 = &uStack_130;
        param_4 = auStack_f0;
        uVar4 = 0x10;
        unaff_x22 = param_1;
        func_0x00010bf52a60();
        param_5 = (undefined1)uVar4;
      } while (unaff_x22 != 0);
    }
    _objc_release(param_1);
    puVar7 = puStack_138;
    _objc_retain(puStack_138);
    unaff_x20 = puVar7;
LAB_104dfe6d0:
    _objc_release(unaff_x20);
  }
  lVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  plVar3 = &lStack_1c0;
  pcStack_158 = FUN_104dfe728;
  puStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  lStack_180 = unaff_x22;
  puStack_178 = puVar7;
  puStack_170 = unaff_x20;
  lStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_1b8 = PTR_PTR_1126e4498;
  lStack_1c0 = lVar5;
  _objc_msgSendSuper2(&lStack_1c0,PTR_s_init_1125d9248);
  if (plVar3 != (long *)0x0) {
    _objc_storeWeak((undefined1 *)((long)plVar3 + (long)_DAT_112713740),param_4);
    _objc_storeWeak((undefined1 *)((long)plVar3 + (long)_DAT_112713744),param_6);
    _objc_storeWeak((undefined1 *)((long)plVar3 + (long)_DAT_112713748),param_7);
    lVar5 = (long)_DAT_11271374c;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)plVar3 + lVar5);
    *(undefined8 **)((long)plVar3 + lVar5) = param_3;
    _objc_release(uVar4);
    *(undefined1 *)((long)plVar3 + (long)_DAT_112713750) = param_5;
    *(undefined1 *)((long)plVar3 + (long)_DAT_112713754) = 1;
    lVar5 = (long)_DAT_112713758;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)plVar3 + lVar5);
    *(ulong *)((long)plVar3 + lVar5) = param_8;
    _objc_release(uVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 104dfe728; end: 104dfe877; -[SCCommerceReviewOrderBusinessLogic initWithCart:cartCoordinator:isModal:delegate:eventLogger:commerceConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104dfe728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e4498;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112713740),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112713744),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112713748),param_7);
    lVar3 = (long)_DAT_11271374c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112713750) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112713754) = 1;
    lVar3 = (long)_DAT_112713758;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dfe878; end: 104dfe8e3; -[SCCommerceReviewOrderBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dfe878(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4498;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010bedac60(param_1);
  param_1 = param_1 + _DAT_112713740;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef9980();
  _objc_release(param_1);
  return;
}



/* Entry: 104dfe8e4; end: 104dfe92b; -[SCCommerceReviewOrderBusinessLogic _logButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dfe8e4(long param_1)

{
  param_1 = param_1 + _DAT_112713748;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a1d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dfe92c; end: 104dfea13; -[SCCommerceReviewOrderBusinessLogic _updateLineItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dfe92c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1 + _DAT_112713740;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271374c);
  func_0x00010c2579e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bfc7100(lVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11271375c;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (*(long *)(param_1 + lVar6) != 0) {
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104dfea14; end: 104dfeadb; -[SCCommerceReviewOrderBusinessLogic _updateCart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dfea14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_112713740;
  _objc_loadWeakRetained();
  lVar7 = (long)_DAT_11271374c;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2579e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bfc3800(lVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  if (lVar4 == 0) {
    lVar6 = *(long *)(param_1 + lVar7);
  }
  _objc_retain(lVar6);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = lVar6;
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dfeadc; end: 104dfeb6f; -[SCCommerceReviewOrderBusinessLogic _isCartValid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dfeadc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + _DAT_112713740;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271374c);
  func_0x00010c2579e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf2c400(lVar1,param_2,uVar3);
  *(char *)(param_1 + _DAT_112713754) = (char)lVar4;
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dfeb70; end: 104dff10f; -[SCCommerceReviewOrderBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dfeb70(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined1 auStack_2b0 [8];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined1 auStack_280 [8];
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined1 auStack_228 [8];
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if ((*(byte *)(param_1 + _DAT_112713750) & 1) == 0) {
    func_0x000104e052a4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_104e0528c();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar20 = (long)_DAT_11271374c;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_104dfe434();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3ebe0(param_1);
  uVar4 = *(ulong *)(param_1 + _DAT_112713758);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c117280();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b0a70;
  _objc_alloc();
  lVar18 = (long)_DAT_11271375c;
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  func_0x000100504554(uVar7,&PTR___NSConcreteGlobalBlock_110851118);
  lVar20 = *(long *)(param_1 + lVar20);
  puVar22 = *(undefined **)(param_1 + lVar18);
  _objc_retain(lVar20);
  puVar8 = puVar22;
  _objc_retain();
  func_0x000104e0537c();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  if ((uVar5 & 1) == 0) {
    func_0x000104e05394();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  _objc_retain(puVar22);
  puVar8 = puVar22;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  if (puVar8 == (undefined *)0x0) {
    lVar21 = 0;
  }
  else {
    lVar21 = 0;
    do {
      puVar23 = (undefined *)0x0;
      lVar11 = lVar21;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(puVar22);
        }
        lVar19 = *(long *)((long)puVar23 * 8);
        lVar21 = lVar19;
        func_0x00010c0993e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 != 0) {
          lVar10 = lVar11;
          func_0x000106d782a0(lVar11,lVar21);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          _objc_release(lVar21);
          lVar21 = lVar10;
        }
        lVar11 = lVar19;
        func_0x00010c11cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar11;
        func_0x00010c282760();
        lVar12 = lVar19;
        func_0x00010c0c2a60();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c282760();
        _objc_release(lVar12);
        _objc_release(lVar11);
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((uint)lVar13 < (uint)lVar10) {
          func_0x000104e053ac();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0c2a60(lVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c282760();
          func_0x00010c0df860();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          _objc_release(puVar14);
          _objc_release(lVar19);
          _objc_release(lVar11);
          puVar9 = puVar15;
        }
        puVar23 = puVar23 + 1;
        lVar11 = lVar21;
      } while (puVar8 != puVar23);
      puVar8 = puVar22;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar22);
  lVar18 = lVar20;
  func_0x00010c2579e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar18;
  func_0x00010c13fc20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    lVar19 = lVar20;
    func_0x00010c10a740();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar19;
    func_0x00010c257c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
  }
  else {
    _objc_retain(lVar11);
    lVar10 = lVar11;
  }
  _objc_release(lVar11);
  _objc_release(lVar18);
  puVar8 = PTR_PTR_1126b0a80;
  _objc_alloc();
  puVar23 = puVar8;
  func_0x000104e052ec();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar21;
  func_0x000106d785f4();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar18;
  func_0x000104e05304();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar11;
  func_0x000104e05364();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f300();
  _objc_release(lVar19);
  _objc_release(lVar11);
  _objc_release(lVar18);
  _objc_release(puVar23);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(lVar21);
  _objc_release(puVar22);
  _objc_release(lVar20);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112713764);
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar1;
  func_0x00010c01a0e0();
  _objc_release(uVar16);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_retain(lVar18);
    _objc_initWeak(auStack_228,lVar1);
    puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_248 = 0xc2000000;
    pcStack_240 = FUN_104dff28c;
    puStack_238 = &UNK_110842e18;
    puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_270 = 0xc2000000;
    pcStack_268 = FUN_104dff360;
    puStack_260 = &UNK_110842e18;
    puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2a0 = 0xc2000000;
    pcStack_298 = FUN_104dff410;
    puStack_290 = &UNK_1108510b8;
    lStack_288 = lVar1;
    lStack_258 = lVar1;
    lStack_230 = lVar1;
    _objc_copyWeak(auStack_280,auStack_228);
    _objc_copyWeak(auStack_2b0,auStack_228);
    func_0x00010c0bca40(lVar18);
    _objc_destroyWeak(auStack_2b0);
    _objc_destroyWeak(auStack_280);
    _objc_destroyWeak(auStack_228);
    _objc_release(lVar18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104dff110; end: 104dff28b; -[SCCommerceReviewOrderBusinessLogic handleAction:] */

void FUN_104dff110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104dff28c;
  puStack_78 = &UNK_110842e18;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104dff360;
  puStack_a0 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104dff410;
  puStack_d0 = &UNK_1108510b8;
  uStack_c8 = param_1;
  uStack_98 = param_1;
  uStack_70 = param_1;
  _objc_copyWeak(auStack_c0,auStack_68);
  _objc_copyWeak(auStack_f0,auStack_68);
  func_0x00010c0bca40(param_3);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 104dff28c; end: 104dff35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dff28c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010be50ea0(*(undefined8 *)(param_1 + 0x20),param_2,0x10);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112713740;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12cf80();
  _objc_release(lVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104dff328;
  puStack_30 = &UNK_110842e18;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  return;
}



/* Entry: 104dff360; end: 104dff3bb;  */

void FUN_104dff360(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104dff3bc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 104dff3bc; end: 104dff40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dff3bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112713744;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c140460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dff410; end: 104dff50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dff410(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  func_0x00010be50ea0(*(undefined8 *)(param_1 + 0x20),param_2,6);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112713740;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271375c);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010bf8c3c0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104dff510; end: 104dff53b;  */

void FUN_104dff510(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedac60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dff53c; end: 104dff643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dff53c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  
  func_0x00010be50ea0(*(undefined8 *)(param_1 + 0x20),param_2,7);
  lVar4 = (long)_DAT_11271375c;
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010bf529e0();
  if (param_2 < uVar1) {
    lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112713740;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    func_0x00010bf8c3c0(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104dff644; end: 104dff6e3;  */

void FUN_104dff644(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedac60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dff6e4; end: 104dff737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dff6e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112713744;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c140440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dff738; end: 104dff77b; -[SCCommerceReviewOrderBusinessLogic showLoadingSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dff738(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112713760) = 1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dff77c; end: 104dff7bb; -[SCCommerceReviewOrderBusinessLogic hideLoadingSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dff77c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112713760) = 0;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dff7bc; end: 104dff83f; -[SCCommerceReviewOrderBusinessLogic showError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dff7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112713764;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dff840; end: 104dff84f; -[SCCommerceReviewOrderBusinessLogic isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104dff840(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112713760);
}



/* Entry: 104dff850; end: 104dff97f; -[SCCommerceReviewOrderBusinessLogic didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_104dff850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104dff980;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    (**(code **)(param_1 + 0x10))(param_1,&puStack_70);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104dff980; end: 104dff9c7;  */

void FUN_104dff980(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed4ec0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedac60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dff9c8; end: 104dffa4b; -[SCCommerceReviewOrderBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dff9c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713758,0);
  _objc_storeStrong(param_1 + _DAT_112713764,0);
  _objc_storeStrong(param_1 + _DAT_11271375c,0);
  _objc_storeStrong(param_1 + _DAT_11271374c,0);
  _objc_destroyWeak(param_1 + _DAT_112713748);
  _objc_destroyWeak(param_1 + _DAT_112713744);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112713740);
  return;
}



/* Entry: 104dffa4c; end: 104dffc8b;  */

void FUN_104dffa4c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c297440();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar11 = 0;
    goto LAB_104dffb1c;
  }
  uVar2 = param_2;
  func_0x00010c297440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  uVar11 = uVar3;
  func_0x00010c0720c0();
  if ((uVar11 & 1) == 0) {
    uVar11 = 0;
    func_0x00010c0720c0();
    if ((uVar11 & 1) != 0) goto LAB_104dffae4;
    _objc_retain(uVar2);
    uVar11 = uVar2;
  }
  else {
LAB_104dffae4:
    uVar11 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_104dffb1c:
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b0a78;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010c26de80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c25cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000106d785f4();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0993e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000106d785f4();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c11cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x000104e0531c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0520e0();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar11);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104dffc8c; end: 104dffc93; -[SCReviewOrderViewController pageViewName] */

undefined8 FUN_104dffc8c(void)

{
  return 0x30;
}



/* Entry: 104dffc94; end: 104dffdcb; -[SCReviewOrderViewController initWithScreen:compositeImageFetcher:fullscreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104dffc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  puStack_48 = PTR_PTR_1126e44a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithCollectionViewLayout__1125dd830,puVar1);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713768);
    *(undefined **)((long)puVar2 + (long)_DAT_112713768) = puVar1;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11271376c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_112713770),param_4);
    puVar1 = PTR_PTR_1126af080;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713774);
    *(undefined **)((long)puVar2 + (long)_DAT_112713774) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104dffdcc; end: 104dfff17; -[SCReviewOrderViewController _showPopUp:] */

void FUN_104dffdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000104e0534c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000104e0528c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104dfff18; end: 104dfff27;  */

void FUN_104dfff18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104dfff28; end: 104e001ab; -[SCReviewOrderViewController _addFooter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dfff28(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_112713778;
  puVar1 = param_1;
  if (*(long *)(param_1 + lVar16) == 0) {
    puVar1 = PTR_PTR_1126b0a88;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar14 = *(undefined8 *)(param_1 + lVar16);
    *(undefined **)(param_1 + lVar16) = puVar1;
    _objc_release(uVar14);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar16));
    puVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(param_1);
    _objc_release(uVar8);
    _objc_release(uVar15);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = (long)_DAT_112713780;
  lVar13 = *(long *)(puVar1 + lVar16);
  func_0x00010bfb4580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 != 0) {
    lVar11 = *(long *)(puVar1 + lVar16);
    func_0x00010c099360();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf529e0();
    _objc_release(lVar11);
    _objc_release(lVar13);
    if (lVar12 != 0) {
      func_0x00010bdc6d40(puVar1);
      uVar15 = *(undefined8 *)(puVar1 + _DAT_112713778);
      uVar14 = *(undefined8 *)(puVar1 + lVar16);
      func_0x00010bfb4580(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar14);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s__removeFooter_112580a20);
  return;
}



/* Entry: 104e001ac; end: 104e00277; -[SCReviewOrderViewController _updateFooter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e001ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112713780;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bfb4580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c099360();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      func_0x00010bdc6d40(param_1);
      uVar5 = *(undefined8 *)(param_1 + _DAT_112713778);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bfb4580(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeFooter_112580a20);
  return;
}



/* Entry: 104e00278; end: 104e002ab; -[SCReviewOrderViewController _removeFooter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e00278(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713778;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e002ac; end: 104e0033f; -[SCReviewOrderViewController _setupHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e002ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112713774;
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar2),param_2,0);
  lVar3 = (long)_DAT_112713780;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfe0100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar2));
  _objc_release(uVar1);
  func_0x00010bf84de0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18f820(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1677c0(0x3fd999999999999a,*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setDelegate__112640798,param_1);
  return;
}



/* Entry: 104e00340; end: 104e0038f; -[SCReviewOrderViewController _updateUserInteractionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e00340(long param_1)

{
  func_0x00010bf1d360(*(undefined8 *)(param_1 + _DAT_112713780));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e00390; end: 104e003f3; -[SCReviewOrderViewController _safeBottomAnchor] */

void FUN_104e00390(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e003f4; end: 104e00983; -[SCReviewOrderViewController _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e003f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7d00(*(undefined8 *)(param_1 + _DAT_112713774));
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b580();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar9;
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_d0 = lVar1;
  lStack_b0 = lVar1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_e0 = lVar2;
  func_0x00010be98400();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_f0 = lVar2;
  lStack_a8 = lVar2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_108 = lVar1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  lStack_a0 = lVar1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_98 = lVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f8);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lStack_108);
  _objc_release(lStack_100);
  _objc_release(lStack_f0);
  _objc_release(lStack_e8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d8);
  _objc_release(lStack_d0);
  _objc_release(lStack_c8);
  _objc_release(lStack_c0);
  puVar6 = PTR_PTR_1126b09a8;
  _objc_alloc();
  uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  dVar17 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar14,uVar15,uVar16,dVar17);
  lVar9 = (long)_DAT_112713784;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar6;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08c0e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402e000000000000);
  _objc_release(uVar8);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar10 = (long)_DAT_112713788;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar6;
  _objc_release(uVar8);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar10));
  puVar6 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar15,uVar16,dVar17);
  lVar11 = (long)_DAT_11271377c;
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar6;
  _objc_release(uVar8);
  puVar6 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar6);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar11));
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0();
  _objc_release(lVar2);
  lVar1 = lStack_b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_104e00984;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_180 = uVar15;
  uStack_178 = uVar14;
  lStack_170 = lVar5;
  lStack_168 = lVar4;
  lStack_160 = lVar3;
  lStack_158 = lVar13;
  lStack_150 = lVar12;
  lStack_148 = lVar11;
  lStack_140 = lVar10;
  lStack_138 = lVar9;
  lStack_130 = lVar2;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  puStack_1d8 = puVar6;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar2);
  lVar13 = (long)_DAT_112713784;
  uVar14 = *(undefined8 *)(lVar1 + lVar13);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar1 + _DAT_11271378c);
  *(undefined8 *)(lVar1 + _DAT_11271378c) = uVar8;
  _objc_release(uVar15);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(lVar1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112713790;
  uVar15 = *(undefined8 *)(lVar1 + lVar12);
  *(undefined8 *)(lVar1 + lVar12) = uVar8;
  _objc_release(uVar15);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(uVar14);
  uStack_1b0 = *(undefined8 *)(lVar1 + lVar12);
  uVar8 = *(undefined8 *)(lVar1 + lVar13);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e0 = uVar8;
  func_0x00010bf49420(dVar17 * 0.4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar1 + lVar13);
  uStack_1e8 = uVar8;
  uStack_1a8 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar1 + lVar13);
  uStack_1a0 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_198 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_1d8);
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(uVar15);
  _objc_release(uStack_1e8);
  _objc_release(lStack_1e0);
  lVar12 = (long)_DAT_11271377c;
  uVar8 = *(undefined8 *)(lVar1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  uStack_1e8 = uVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e0 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar1 + lVar12);
  uStack_1f8 = uVar8;
  uStack_1d0 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  uStack_208 = uVar14;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_200 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_210 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar1 + lVar12);
  uStack_218 = uVar14;
  uStack_1c8 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar1 + lVar12);
  uStack_1c0 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b8 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puStack_1d8;
  func_0x00010befa160(puStack_1d8);
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(uVar15);
  _objc_release(uStack_218);
  _objc_release(lStack_210);
  _objc_release(lStack_200);
  _objc_release(uStack_208);
  _objc_release(uStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e0);
  _objc_release(uStack_1e8);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar7 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  puStack_238 = puVar6;
  pcStack_228 = FUN_104e00ed8;
  puStack_248 = PTR_PTR_1126e44a0;
  puStack_250 = puVar7;
  lStack_240 = lVar1;
  ppuStack_230 = &puStack_120;
  _objc_msgSendSuper2(&puStack_250,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb0340(puVar7);
  func_0x00010bdc6d40(puVar7);
  func_0x00010beabac0(puVar7);
  func_0x00010be89340(puVar7);
  func_0x00010bec1580(puVar7);
  return;
}



/* Entry: 104e00984; end: 104e00ed7; -[SCReviewOrderViewController _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e00984(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double in_d3;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  puStack_c8 = puVar1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar2);
  lVar10 = (long)_DAT_112713784;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11271378c);
  *(undefined8 *)(param_1 + _DAT_11271378c) = uVar5;
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112713790;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = uVar5;
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  uStack_a0 = *(undefined8 *)(param_1 + lVar9);
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = uVar5;
  func_0x00010bf49420(in_d3 * 0.4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  uStack_d8 = uVar5;
  uStack_98 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  uStack_90 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_c8);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar8);
  _objc_release(uStack_d8);
  _objc_release(lStack_d0);
  lVar9 = (long)_DAT_11271377c;
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_d8 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  uStack_e8 = uVar5;
  uStack_c0 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_f8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  uStack_108 = uVar3;
  uStack_b8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  uStack_b0 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_c8;
  func_0x00010befa160(puStack_c8);
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar8);
  _objc_release(uStack_108);
  _objc_release(lStack_100);
  _objc_release(lStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_e8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  _objc_release(uStack_d8);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puStack_128 = puVar1;
  pcStack_118 = FUN_104e00ed8;
  puStack_138 = PTR_PTR_1126e44a0;
  puStack_140 = puVar7;
  lStack_130 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_140,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb0340(puVar7);
  func_0x00010bdc6d40(puVar7);
  func_0x00010beabac0(puVar7);
  func_0x00010be89340(puVar7);
  func_0x00010bec1580(puVar7);
  return;
}



/* Entry: 104e00ed8; end: 104e00f3f; -[SCReviewOrderViewController viewDidLoad] */

void FUN_104e00ed8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e44a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb0340(param_1);
  func_0x00010bdc6d40(param_1);
  func_0x00010beabac0(param_1);
  func_0x00010be89340(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104e00f40; end: 104e00fef; -[SCReviewOrderViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e00f40(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271376c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e00ff0; end: 104e01037;  */

void FUN_104e00ff0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e01038; end: 104e01453; -[SCReviewOrderViewController _setupEmptyReviewOrder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01038(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_112713768;
  lVar15 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar15);
  puVar13 = *(undefined **)(param_1 + lVar16);
  lVar15 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar15);
  lVar14 = (long)_DAT_112713780;
  lVar16 = *(long *)(param_1 + lVar14);
  func_0x00010c099360();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar16;
  func_0x00010bf529e0();
  if (lVar15 == 0) {
    lVar15 = (long)_DAT_112713794;
    lVar17 = *(long *)(param_1 + lVar15);
    _objc_release(lVar16);
    if (lVar17 != 0) goto LAB_104e01108;
    puVar13 = PTR_PTR_1126b0a90;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar12 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar13;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15),param_2,param_1);
    lVar16 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar16);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = *(undefined **)(param_1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf493c0(0x4060400000000000,puVar2,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar15);
    puStack_88 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar15);
    uStack_80 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010be98400();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar15);
    uStack_78 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,lVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(lVar15);
    _objc_release(param_1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar12);
    _objc_release(lVar5);
    _objc_release(lVar17);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(lVar14);
    _objc_release(lVar16);
    _objc_release();
LAB_104e01418:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    _objc_release(lVar16);
LAB_104e01108:
    puVar1 = *(undefined **)(param_1 + lVar14);
    func_0x00010c099360();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto code_r0x00010bdbf3e4;
    }
    else {
      lVar15 = (long)_DAT_112713794;
      lVar16 = *(long *)(param_1 + lVar15);
      _objc_release();
      puVar2 = puVar1;
      if (lVar16 == 0) goto LAB_104e01418;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar15));
      puVar2 = *(undefined **)(param_1 + lVar15);
      *(undefined8 *)(param_1 + lVar15) = 0;
      puVar1 = puVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto code_r0x00010bdbf3e4;
    }
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  puVar1 = puVar13;
  func_0x00010bfb4580(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf38960();
  puVar3 = puVar2;
  func_0x00010bf40120(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar16 = (long)_DAT_112713780;
  _objc_retain(puVar13);
  uVar12 = *(undefined8 *)(puVar2 + lVar16);
  *(undefined **)(puVar2 + lVar16) = puVar13;
  _objc_release(uVar12);
  lVar15 = *(long *)(puVar2 + lVar16);
  func_0x00010bf98d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar15 != 0) {
    uVar12 = *(undefined8 *)(puVar2 + lVar16);
    func_0x00010bf98d60(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba5a0(puVar2,param_2,uVar12);
    _objc_release(uVar12);
  }
  func_0x00010beacec0(puVar2);
  func_0x00010bed83a0(puVar2);
  func_0x00010beac520(puVar2);
  func_0x00010bee3040(puVar2);
  func_0x00010bf40120(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(puVar2);
  puVar1 = puVar13;
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e01454; end: 104e01577; -[SCReviewOrderViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb4580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf38960();
  lVar2 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar2);
  _objc_release(uVar1);
  lVar3 = (long)_DAT_112713780;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010bf98d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf98d60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba5a0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  func_0x00010beacec0(param_1);
  func_0x00010bed83a0(param_1);
  func_0x00010beac520(param_1);
  func_0x00010bee3040(param_1);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e01578; end: 104e01603; -[SCReviewOrderViewController _registerCollectionViewCells] */

void FUN_104e01578(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0a98;
  _objc_opt_class(PTR_PTR_1126b0a98);
  func_0x00010c126000(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110db5ad8);
  _objc_release(uVar1);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0aa0;
  _objc_opt_class(PTR_PTR_1126b0aa0);
  func_0x00010c126000(param_1,param_2,puVar2,&PTR____CFConstantStringClassReference_110db5af8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e01604; end: 104e01807; -[SCReviewOrderViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01604(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = param_4;
  func_0x00010c1554e0();
  lVar6 = param_3;
  if (lVar7 == 1) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112713780);
    func_0x00010c099360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c142240(param_4);
    uVar2 = uVar3;
    func_0x00010c0dfd40(uVar3,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db5af8,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112713770;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c1aa200(lVar6,param_2,lVar7);
    _objc_release(lVar7);
    func_0x00010c18b5e0(lVar6,param_2,param_1);
    lVar7 = param_4;
    func_0x00010c142240(param_4);
    func_0x00010c211780(lVar6,param_2,lVar7);
    func_0x00010c2226c0(lVar6,param_2,uVar2);
    lVar7 = -1;
    lVar8 = 2;
  }
  else {
    if (lVar7 != 0) {
      lVar6 = 0;
      goto LAB_104e017dc;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_112713780);
    func_0x00010c257e20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db5ad8,param_4);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112713770;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1aa200(lVar6,param_2,param_1);
    _objc_release(param_1);
    func_0x00010c2226c0(lVar6,param_2,uVar2);
    lVar7 = 0;
    lVar8 = 1;
  }
  lVar4 = param_3;
  func_0x00010c0deec0(param_3,param_2,1);
  lVar5 = param_4;
  func_0x00010c142240();
  uVar1 = 0;
  if (lVar4 + 1U <= (ulong)(lVar5 + lVar8)) {
    uVar1 = 4;
  }
  if (lVar5 == lVar7) {
    uVar1 = uVar1 + 1;
  }
  func_0x00010c20eaa0(lVar6,param_2,1,uVar1 | 10);
  _objc_release(uVar2);
LAB_104e017dc:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 104e01808; end: 104e01a27; -[SCReviewOrderViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_104e01808(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar7 = param_8;
  func_0x00010c1554e0();
  if (lVar7 == 1) {
    lVar7 = (long)_DAT_112713780;
    uVar2 = *(ulong *)(param_4 + lVar7);
    func_0x00010c099360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142240(param_8);
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0a78;
    _objc_opt_class(PTR_PTR_1126b0a78);
    uVar1 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b0aa0;
    func_0x00010bfb68e0(param_6);
    dVar8 = 1.79769313486232e+308;
    func_0x00010c23d6e0(param_3,0x7fefffffffffffff,puVar4);
    _objc_release(uVar2);
    lVar5 = param_8;
    func_0x00010c142240();
    lVar6 = *(long *)(param_4 + lVar7);
    func_0x00010c099360();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf529e0();
    dVar9 = 10.0;
    if (lVar5 != lVar7 + -1) {
      dVar9 = 0.0;
    }
    _objc_release(lVar6);
    func_0x00010bfb68e0(param_6);
    dVar8 = dVar8 + dVar9;
  }
  else if (lVar7 == 0) {
    uVar1 = *(ulong *)(param_4 + _DAT_112713780);
    func_0x00010c257e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0a68;
    _objc_opt_class(PTR_PTR_1126b0a68);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar4);
    uVar2 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b0a98;
    func_0x00010bfb68e0(param_6);
    dVar8 = 1.79769313486232e+308;
    func_0x00010c23d6e0(param_3,0x7fefffffffffffff,puVar4);
    _objc_release(uVar2);
    func_0x00010bfb68e0(param_6);
    dVar8 = dVar8 + 10.0;
  }
  else {
    param_3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    dVar8 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  auVar10._8_8_ = dVar8;
  auVar10._0_8_ = param_3;
  return auVar10;
}



/* Entry: 104e01a28; end: 104e01a2f; -[SCReviewOrderViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_104e01a28(void)

{
  return 2;
}



/* Entry: 104e01a30; end: 104e01adb; -[SCReviewOrderViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104e01a30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    uVar1 = *(ulong *)(param_1 + _DAT_112713780);
    func_0x00010c099360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
  }
  else {
    if (param_4 != 0) {
      uVar2 = 0;
      goto LAB_104e01ac0;
    }
    uVar1 = *(ulong *)(param_1 + _DAT_112713780);
    func_0x00010c099360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    uVar2 = (ulong)(uVar2 != 0);
  }
  _objc_release(uVar1);
LAB_104e01ac0:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104e01adc; end: 104e01ae3; -[SCReviewOrderViewController collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_104e01adc(void)

{
  return 0;
}



/* Entry: 104e01ae4; end: 104e01b4f; -[SCReviewOrderViewController collectionView:layout:insetForSectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e01ae4(long param_1)

{
  long in_x4;
  
  if (in_x4 == 0) {
    return 0x4014000000000000;
  }
  if (in_x4 == 1) {
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_112713778));
    _CGRectGetHeight();
    return 0;
  }
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 104e01b50; end: 104e01bb7; -[SCReviewOrderViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01b50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c1554e0();
  if (param_4 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271376c);
  puVar1 = PTR_PTR_1126b0aa8;
  func_0x00010c257c20(PTR_PTR_1126b0aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e01bb8; end: 104e01c03; -[SCReviewOrderViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01bb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271376c);
  puVar1 = PTR_PTR_1126b0aa8;
  func_0x00010bf13820(PTR_PTR_1126b0aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e01c04; end: 104e01c4f; -[SCReviewOrderViewController didTapRemoveLineItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01c04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271376c);
  puVar1 = PTR_PTR_1126b0aa8;
  func_0x00010c12cf60(PTR_PTR_1126b0aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e01c50; end: 104e01c57; -[SCReviewOrderViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_104e01c50(void)

{
  return 0;
}



/* Entry: 104e01c58; end: 104e01d07; -[SCReviewOrderViewController _closeQuantitySelector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01c58(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_11271378c),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_112713790),param_2,1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e01d08;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03460(0x3fe0000000000000,0x3fb99999a0000000,0x3fecccccc0000000,0x4010666660000000,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_48,0);
  return;
}



/* Entry: 104e01d08; end: 104e01d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01d08(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271377c));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713788),
             PTR_s_setEnabled__112642f38,0);
  return;
}



/* Entry: 104e01d78; end: 104e01df7; -[SCReviewOrderViewController _showQuantitySelector] */

void FUN_104e01d78(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e01df8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03460(0x3fe0000000000000,0x3fb99999a0000000,0x3fecccccc0000000,0x4010666660000000,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_38,0);
  return;
}



/* Entry: 104e01df8; end: 104e01e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01df8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c162480(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713790),param_2,0);
  func_0x00010c162480(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271378c));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  func_0x00010c195460(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713788));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe3333333333333,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271377c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 104e01e94; end: 104e02003; -[SCReviewOrderViewController didTapQuantitySelector:currentQuantity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e01e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_112713784;
  func_0x00010c1524e0(*(undefined8 *)(param_1 + lVar5),param_2,param_4,0);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar6 = 1;
  do {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daf4f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0860;
    _objc_alloc(PTR_PTR_1126b0860);
    func_0x00010c032160();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xb);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c1d5e80(uVar4,param_2,puVar1);
  func_0x000104e05334();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb200(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010beba7e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e02004; end: 104e020bf; -[SCReviewOrderViewController productOptionPickerView:didSelectOption:selectedItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e02004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b0aa8;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271376c);
  _objc_retain(param_4);
  func_0x00010c067fc0(param_5);
  uVar1 = param_4;
  func_0x00010c0ec580(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c067fc0(uVar1);
  func_0x00010c11cfa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde16d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeQuantitySelector_112555f50);
  return;
}



/* Entry: 104e020c0; end: 104e0210b; -[SCReviewOrderViewController checkoutButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e020c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271376c);
  puVar1 = PTR_PTR_1126b0aa8;
  func_0x00010bf38920(PTR_PTR_1126b0aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e0210c; end: 104e02157; -[SCReviewOrderViewController SCCommerceReviewOrderEmptyViewDidCallClose:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0210c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271376c);
  puVar1 = PTR_PTR_1126b0aa8;
  func_0x00010bf13820(PTR_PTR_1126b0aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e02158; end: 104e0215b; -[SCReviewOrderViewController footerReturnLabelTapped:] */

void FUN_104e02158(void)

{
  return;
}


