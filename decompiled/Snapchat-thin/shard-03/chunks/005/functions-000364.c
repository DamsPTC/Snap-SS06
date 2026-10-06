/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029e184c; end: 1029e1877;  */

void FUN_1029e184c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029e1878; end: 1029e18fb;  */

void FUN_1029e1878(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1029e1aa0;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1029e18fc; end: 1029e191f;  */

undefined8 FUN_1029e18fc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029e1920; end: 1029e1953;  */

void FUN_1029e1920(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c420a8(param_1,lVar2,1,0);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1029df8d4(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1029e1954; end: 1029e19cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e1954(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  lStack_50 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined1 *)(lStack_50 + _DAT_112ed57c8) = 0;
  lStack_30 = lStack_50;
  func_0x00010399dc78(uVar1,0x1029e19b0,auStack_40,FUN_1029e19d0,auStack_60);
  return;
}



/* Entry: 1029e19d0; end: 1029e19ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e19d0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112ed57b0;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + _DAT_112ed57b0,auStack_48,0x21,0);
  uVar4 = *(undefined8 *)(lVar1 + lVar3);
  func_0x000107c61558(uVar4);
  uVar5 = *(undefined8 *)(lVar1 + lVar3);
  *(undefined8 *)(lVar1 + lVar3) = 0x8000000000000000;
  FUN_1029e0cdc(1,uVar2,uVar4);
  *(undefined8 *)(lVar1 + lVar3) = uVar5;
  func_0x000107c614a8(auStack_48);
  FUN_1029df054();
  return;
}



/* Entry: 1029e19f0; end: 1029e1a6f;  */

void FUN_1029e19f0(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1029e1a70; end: 1029e1adf;  */

void FUN_1029e1a70(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029e1ae0; end: 1029e1edb;  */

undefined1  [16] FUN_1029e1ae0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0d6a10);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010daff280);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e1bac);
  (*pcVar1)();
}



/* Entry: 1029e1edc; end: 1029e1eff;  */

undefined1  [16] FUN_1029e1edc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x615f64656b6e696c;
  func_0x000107c5fadc(0x615f64656b6e696c,0xef73746e756f6363);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010daff280);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e1fb0);
  (*pcVar1)();
}



/* Entry: 1029e1f00; end: 1029e207f;  */

undefined1  [16] FUN_1029e1f00(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010daff280);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e1fb0);
  (*pcVar1)();
}



/* Entry: 1029e2080; end: 1029e208f;  */

undefined1  [16] FUN_1029e2080(void)

{
  return ZEXT816(0x110580378);
}



/* Entry: 1029e2090; end: 1029e20fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e2090(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029e2484();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed5880) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029e20fc; end: 1029e2167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e20fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed5880) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029e2168; end: 1029e21c7; -[_TtC42DreamsFeedbackScopedFactoryServiceProvider30SCDreamsFeedbackScopedServices init] */

void FUN_1029e2168(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DreamsFeedbackScopedFactoryServiceProvider.SCDreamsFeedbackScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e2194);
  (*pcVar1)();
}



/* Entry: 1029e21c8; end: 1029e21d7; -[_TtC42DreamsFeedbackScopedFactoryServiceProvider30SCDreamsFeedbackScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e21c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed5880));
  return;
}



/* Entry: 1029e21d8; end: 1029e2243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e21d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110580550;
  func_0x000107c613fc(&UNK_110580550,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1029e251c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1029e2244; end: 1029e22df;  */

void FUN_1029e2244(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110580460;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110580460;
  return;
}



/* Entry: 1029e22e0; end: 1029e2317;  */

void FUN_1029e22e0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1029e2318; end: 1029e231f;  */

undefined8 FUN_1029e2318(void)

{
  return 0x1b;
}



/* Entry: 1029e2320; end: 1029e2453;  */

void FUN_1029e2320(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110580578;
  func_0x000107c613fc(&UNK_110580578,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029e24f4;
  func_0x00010058fa64(FUN_1029e24f4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e2454; end: 1029e2483;  */

undefined ** FUN_1029e2454(void)

{
  return &PTR_DAT_113066b08;
}



/* Entry: 1029e2484; end: 1029e24a3;  */

void FUN_1029e2484(void)

{
  func_0x000107c61168(&PTR_PTR_11287b3f8);
  return;
}



/* Entry: 1029e24a4; end: 1029e24f3;  */

undefined1  [16] FUN_1029e24a4(void)

{
  return ZEXT816(0x1105804b0);
}



/* Entry: 1029e24f4; end: 1029e251b;  */

void FUN_1029e24f4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1029e251c; end: 1029e251f;  */

void FUN_1029e251c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029e2520; end: 1029e258b;  */

void FUN_1029e2520(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ed58f0,&UNK_10daff520);
  func_0x000107c613fc();
  pcVar1 = FUN_1029e259c;
  func_0x0001000841fc(FUN_1029e259c,0);
  func_0x000100084214(&UNK_10daff4f0,0x2c,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1029e258c; end: 1029e259b;  */

undefined1  [16] FUN_1029e258c(void)

{
  return ZEXT816(0x1105805b8);
}



/* Entry: 1029e259c; end: 1029e28f3;  */

void FUN_1029e259c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112ed58f8,&UNK_10daff528);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029e3704();
  func_0x000100082720("SCGenerativeContentReportScopeExposerSubjectServiceProvider",0x3b,2);
  puVar3 = puVar2;
  FUN_1029e3790();
  func_0x000100082720("SCGenerativeContentReportScopeExposerObservableServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029e22e0;
  func_0x0001000823a8(FUN_1029e22e0,0);
  func_0x000100082720("SCDreamsFeedbackScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ed5900,&UNK_10daff540);
  puVar5 = &UNK_1105805d8;
  func_0x000107c613fc(&UNK_1105805d8,0x20,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 **)(puVar5 + 0x18) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar3);
  pcVar6 = FUN_1029e28f4;
  func_0x0001000823a8(FUN_1029e28f4,puVar5);
  func_0x000100082720("DreamsFeedbackEntryPointWrapperServiceProvider",0x2e,2);
  puVar7 = puVar2;
  FUN_1029e35b8();
  func_0x000100082720("DreamsFeedbackScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ed5908,&UNK_10daff530);
  puVar5 = &UNK_110580600;
  func_0x000107c613fc(&UNK_110580600,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar6;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar7;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(pcVar4);
  uVar11 = 0x1029e28fc;
  func_0x0001000823a8(0x1029e28fc,puVar5);
  func_0x000100082720("SCDreamsFeedbackScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ed5888,&UNK_10daff2f0);
  func_0x000107c6157c(uVar11);
  uVar8 = 0x1029e2908;
  func_0x0001000823a8(0x1029e2908,uVar11);
  func_0x000100082720("SCDreamsFeedbackScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112ed5878,&UNK_10daff2e0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1029e2910;
  func_0x0001000823a8(0x1029e2910,uVar8);
  func_0x000100082720("SCDreamsFeedbackScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110580628;
  func_0x000107c613fc(&UNK_110580628,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1029e2944;
  func_0x0001000823a8(FUN_1029e2944,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCDreamsFeedbackScopeEntryPointProvider",0x27,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 1029e28f4; end: 1029e2917;  */

void FUN_1029e28f4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  FUN_1029e2c4c();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e01b58,&UNK_10da8e210);
  func_0x000107c610f8();
  uVar2 = uStack_50;
  func_0x000107c6157c(uStack_50);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(lVar1 + 0x18) = puVar3;
  FUN_1029e49a8(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar3);
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar2;
  func_0x0001029e48c4();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_1029e4938();
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_50);
  func_0x000107c61574(uVar4);
  *param_1 = lVar1;
  return;
}



/* Entry: 1029e2918; end: 1029e2943;  */

void FUN_1029e2918(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029e2944; end: 1029e294b;  */

void FUN_1029e2944(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110580460;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110580460;
  return;
}



/* Entry: 1029e294c; end: 1029e2b63;  */

void FUN_1029e294c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1029e2c4c();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e01b58,&UNK_10da8e210);
  func_0x000107c610f8();
  uVar1 = uStack_50;
  func_0x000107c6157c(uStack_50);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(param_2 + 0x18) = puVar2;
  FUN_1029e49a8(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar1;
  func_0x0001029e48c4();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  func_0x000107c6157c();
  FUN_1029e4938();
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uStack_50);
  func_0x000107c61574(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 1029e2b64; end: 1029e2b8f;  */

void FUN_1029e2b64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029e2b90; end: 1029e2b97;  */

undefined8 FUN_1029e2b90(void)

{
  return 0x1b;
}



/* Entry: 1029e2b98; end: 1029e2c1b;  */

void FUN_1029e2b98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1029e2c8c,param_2,FUN_1029e2c90,param_2,0x1029e2cb8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1029e2c1c; end: 1029e2c4b;  */

undefined ** FUN_1029e2c1c(void)

{
  return &PTR_DAT_113066b08;
}



/* Entry: 1029e2c4c; end: 1029e2c6b;  */

void FUN_1029e2c4c(void)

{
  func_0x000107c61168(&PTR_PTR_112ed5978);
  return;
}



/* Entry: 1029e2c6c; end: 1029e2c8f;  */

undefined1  [16] FUN_1029e2c6c(void)

{
  return ZEXT816(0x110580680);
}



/* Entry: 1029e2c90; end: 1029e2ce3;  */

void FUN_1029e2c90(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029e2ce4; end: 1029e2d1f;  */

void FUN_1029e2ce4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029e2d20();
  func_0x0001000a7f38("SCDreamsFeedbackScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1029e2d20; end: 1029e2f0b;  */

void FUN_1029e2d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d4d8;
  ppuVar4 = &PTR_DAT_113066b08;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed59e0;
  func_0x0001000285a8(0x112ed59e0,&UNK_10daff658);
  func_0x0001000a6ee8(&UNK_110580680,"DreamsFeedbackEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,FUN_1029e2f80,param_1,uVar2,&UNK_110580680,&PTR_DAT_112ed5910);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1105806d0;
  func_0x000107c613fc(&UNK_1105806d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110580920,"DreamsFeedbackScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_1029e2f88,puVar3,uVar2,&UNK_110580920,&PTR_DAT_112ed5a78);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105806f8;
  func_0x000107c613fc(&UNK_1105806f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105804f0,"SCDreamsFeedbackScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_1029e3070,puVar3,uVar2,&UNK_1105804f0,&PTR_DAT_112ed5890);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed59e8;
  func_0x0001000285a8(0x112ed59e8,&UNK_10daff660);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1029e2f0c; end: 1029e2f7f;  */

void FUN_1029e2f0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029e30ac;
  func_0x0001000823a8(0x1029e30ac,param_3);
  func_0x000100082720("DreamsFeedbackEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e2f80; end: 1029e2f87;  */

void FUN_1029e2f80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029e30ac;
  func_0x0001000823a8();
  func_0x000100082720("DreamsFeedbackEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e2f88; end: 1029e2fc7;  */

void FUN_1029e2f88(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029e3838(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DreamsFeedbackScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e2fc8; end: 1029e306f;  */

void FUN_1029e2fc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110580720;
  func_0x000107c613fc(&UNK_110580720,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1029e30a4;
  func_0x0001000823a8(FUN_1029e30a4,puVar1);
  func_0x000100082720("SCDreamsFeedbackScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1029e3070; end: 1029e3077;  */

void FUN_1029e3070(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110580720;
  func_0x000107c613fc(&UNK_110580720,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1029e30a4;
  func_0x0001000823a8(FUN_1029e30a4,puVar3);
  func_0x000100082720("SCDreamsFeedbackScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1029e3078; end: 1029e30a3;  */

void FUN_1029e3078(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029e30a4; end: 1029e30b3;  */

void FUN_1029e30a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110580578;
  func_0x000107c613fc(&UNK_110580578,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029e24f4;
  func_0x00010058fa64(FUN_1029e24f4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e30b4; end: 1029e318f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029e30b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1029e34c8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ed59f0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed59f8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e3190);
  (*pcVar1)();
}



/* Entry: 1029e3190; end: 1029e31ef; -[_TtC30DreamsFeedbackScopeGraphBridge45DreamsFeedbackScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029e3190(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DreamsFeedbackScopeGraphBridge.DreamsFeedbackScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e31bc);
  (*pcVar1)();
}



/* Entry: 1029e31f0; end: 1029e3227; -[_TtC30DreamsFeedbackScopeGraphBridge45DreamsFeedbackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029e320c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e3210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e31f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed59f0));
  return;
}



/* Entry: 1029e3228; end: 1029e324f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3228(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed59f8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed59f0));
  return;
}



/* Entry: 1029e3250; end: 1029e326f;  */

void FUN_1029e3250(void)

{
  func_0x000107c61168(&PTR_PTR_11287b4b8);
  return;
}



/* Entry: 1029e3270; end: 1029e32f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029e3270(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed5a28) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed5a30);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e32f8);
  (*pcVar2)();
}



/* Entry: 1029e32f8; end: 1029e33df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029e32f8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed5a28);
  *(undefined **)(unaff_x20 + _DAT_112ed5a28) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed5a30);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed5a30))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110580840;
  func_0x000107c613fc(&UNK_110580840,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029e33e4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1029e33e0; end: 1029e33eb;  */

void FUN_1029e33e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029e33ec; end: 1029e344b; -[_TtC30DreamsFeedbackScopeGraphBridge45SCDreamsFeedbackScopedServicesSaberEntryPoint init] */

void FUN_1029e33ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DreamsFeedbackScopeGraphBridge.SCDreamsFeedbackScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e3418);
  (*pcVar1)();
}



/* Entry: 1029e344c; end: 1029e3483; -[_TtC30DreamsFeedbackScopeGraphBridge45SCDreamsFeedbackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e344c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed5a30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5a28));
  return;
}



/* Entry: 1029e3484; end: 1029e3487;  */

void FUN_1029e3484(void)

{
  return;
}



/* Entry: 1029e3488; end: 1029e34a7;  */

void FUN_1029e3488(void)

{
  FUN_1029e32f8();
  return;
}



/* Entry: 1029e34a8; end: 1029e34c7;  */

void FUN_1029e34a8(void)

{
  func_0x000107c61168(&PTR_PTR_11287b580);
  return;
}



/* Entry: 1029e34c8; end: 1029e3597;  */

undefined8 FUN_1029e34c8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ed5a60,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1029e3598();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029e3598; end: 1029e35b7;  */

void FUN_1029e3598(void)

{
  func_0x000107c61168(&PTR_PTR_11287b648);
  return;
}



/* Entry: 1029e35b8; end: 1029e35d3;  */

void FUN_1029e35b8(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed5a68,&UNK_10daff718);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029e3640,param_1);
  return;
}



/* Entry: 1029e35d4; end: 1029e363f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e35d4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1029e3598();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed5a70) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1029e3640; end: 1029e3647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3640(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1029e3598();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed5a70) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1029e3648; end: 1029e3693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3648(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed5a70) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029e3694; end: 1029e36f3; -[_TtC30DreamsFeedbackScopeGraphBridge38DreamsFeedbackScopeGraphBridgeServices init] */

void FUN_1029e3694(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DreamsFeedbackScopeGraphBridge.DreamsFeedbackScopeGraphBridgeServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e36c0);
  (*pcVar1)();
}



/* Entry: 1029e36f4; end: 1029e3703; -[_TtC30DreamsFeedbackScopeGraphBridge38DreamsFeedbackScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e36f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed5a70));
  return;
}



/* Entry: 1029e3704; end: 1029e378f;  */

void FUN_1029e3704(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1029e3744,0);
  return;
}



/* Entry: 1029e3790; end: 1029e37ab;  */

void FUN_1029e3790(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029e37fc,param_1);
  return;
}



/* Entry: 1029e37ac; end: 1029e37fb;  */

void FUN_1029e37ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1029e37fc; end: 1029e382f;  */

void FUN_1029e37fc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029e3830; end: 1029e3837;  */

undefined8 FUN_1029e3830(void)

{
  return 0x1b;
}



/* Entry: 1029e3838; end: 1029e39af;  */

void FUN_1029e3838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110580888;
  func_0x000107c613fc(&UNK_110580888,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029e39b0,puVar1);
  return;
}



/* Entry: 1029e39b0; end: 1029e39b7;  */

void FUN_1029e39b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ed5a60,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed5a60,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110580960;
  func_0x000107c613fc(&UNK_110580960,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029e3a84;
  func_0x00010058fa64(0x1029e3a84,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e39b8; end: 1029e3a13;  */

void FUN_1029e39b8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed5a60,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed5a60,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029e3a14; end: 1029e3a8b;  */

undefined ** FUN_1029e3a14(void)

{
  return &PTR_DAT_113066b08;
}



/* Entry: 1029e3a8c; end: 1029e3ad3; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3a8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5ac8;
  func_0x000107c61428(param_1 + _DAT_112ed5ac8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029e3ad4; end: 1029e3b2b; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5ac8;
  func_0x000107c61428(param_1 + _DAT_112ed5ac8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029e3b2c; end: 1029e3b73; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint sCGenerativeContentReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3b2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5ad0;
  func_0x000107c61428(param_1 + _DAT_112ed5ad0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029e3b74; end: 1029e3b7f; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint setSCGenerativeContentReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5ad0;
  func_0x000107c61428(param_1 + _DAT_112ed5ad0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029e3b80; end: 1029e3bc7; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint dreamsFeedbackScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3b80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5ad8;
  func_0x000107c61428(param_1 + _DAT_112ed5ad8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029e3bc8; end: 1029e3bd3; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint setDreamsFeedbackScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5ad8;
  func_0x000107c61428(param_1 + _DAT_112ed5ad8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029e3bd4; end: 1029e3c33;  */

void FUN_1029e3bd4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1029e3c34; end: 1029e3def;  */

/* WARNING: Possible PIC construction at 0x0001029e3d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e3d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e3d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e3dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e3d84) */
/* WARNING: Removing unreachable block (ram,0x0001029e3d74) */
/* WARNING: Removing unreachable block (ram,0x0001029e3d50) */
/* WARNING: Removing unreachable block (ram,0x0001029e3dc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e3c34(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50dd0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c422f0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1029e3250();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1029e34c8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e3df0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ed59f0) = lVar5;
      *(long *)(lVar3 + _DAT_112ed59f8) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1029e3df0; end: 1029e3e17; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1029e3df0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029e3c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029e3e18; end: 1029e3e5b; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029e3e18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029e3e5c; end: 1029e405f;  */

void FUN_1029e3e5c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef1002a90)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010effd570,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002d;
        if (((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0f29100)) &&
           (func_0x000107c605b8(0xd00000000000002d,0x800000010f0d6f00,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DreamsFeedbackScopeGraphBridge/SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x54,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e4060);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c542e8();
        goto LAB_1029e3ee8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58378();
  }
LAB_1029e3ee8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1029e4060; end: 1029e410b; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1029e4060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1029e3e5c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029e410c; end: 1029e4183; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e410c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed5ac8,0);
  *(undefined8 *)(param_1 + _DAT_112ed5ad0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed5ad8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed5ae0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029e4184; end: 1029e41b7;  */

void FUN_1029e4184(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029e41b8; end: 1029e420f; -[SCDreamsFeedbackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029e41e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e41e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e41b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed5ac8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5ad0));
  return;
}



/* Entry: 1029e4210; end: 1029e422f;  */

void FUN_1029e4210(void)

{
  func_0x000107c61168(&PTR_PTR_11287b708);
  return;
}



/* Entry: 1029e4230; end: 1029e4277; -[SCSCDreamsFeedbackScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e4230(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed5b10;
  func_0x000107c61428(param_1 + _DAT_112ed5b10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029e4278; end: 1029e42cf; -[SCSCDreamsFeedbackScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e4278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed5b10;
  func_0x000107c61428(param_1 + _DAT_112ed5b10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029e42d0; end: 1029e43a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e42d0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1029e34a8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed5a28) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e43a8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed5a30);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed5b18);
    *(long **)(unaff_x20 + _DAT_112ed5b18) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029e43a8; end: 1029e43cf; -[SCSCDreamsFeedbackScopedServicesSaberEntryPoint begin] */

void FUN_1029e43a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029e42d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029e43d0; end: 1029e4547;  */

/* WARNING: Possible PIC construction at 0x0001029e4438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e44d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e443c) */
/* WARNING: Removing unreachable block (ram,0x0001029e44d4) */
/* WARNING: Removing unreachable block (ram,0x0001029e44ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e43d0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed5b18);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}


