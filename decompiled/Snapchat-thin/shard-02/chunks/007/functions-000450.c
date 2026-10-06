/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10200fd68; end: 10200fd87;  */

void FUN_10200fd68(void)

{
  func_0x000107c61168(&PTR_PTR_112816cb0);
  return;
}



/* Entry: 10200fd88; end: 10200fe0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10200fd88(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4fd68) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4fd70);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10200fe10);
  (*pcVar2)();
}



/* Entry: 10200fe10; end: 10200fef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10200fe10(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4fd68);
  *(undefined **)(unaff_x20 + _DAT_112e4fd68) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4fd70);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4fd70))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bc310;
  func_0x000107c613fc(&UNK_1104bc310,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10200fefc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10200fef8; end: 10200ff03;  */

void FUN_10200fef8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10200ff04; end: 10200ff63; -[_TtC31MyStorySettingsScopeGraphBridge46SCMyStorySettingsScopedServicesSaberEntryPoint init] */

void FUN_10200ff04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyStorySettingsScopeGraphBridge.SCMyStorySettingsScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200ff30);
  (*pcVar1)();
}



/* Entry: 10200ff64; end: 10200ff9b; -[_TtC31MyStorySettingsScopeGraphBridge46SCMyStorySettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200ff64(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4fd70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4fd68));
  return;
}



/* Entry: 10200ff9c; end: 10200ff9f;  */

void FUN_10200ff9c(void)

{
  return;
}



/* Entry: 10200ffa0; end: 10200ffbf;  */

void FUN_10200ffa0(void)

{
  FUN_10200fe10();
  return;
}



/* Entry: 10200ffc0; end: 10200ffdf;  */

void FUN_10200ffc0(void)

{
  func_0x000107c61168(&PTR_PTR_112816d78);
  return;
}



/* Entry: 10200ffe0; end: 1020100af;  */

undefined8 FUN_10200ffe0(void)

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
  
  func_0x000107c61428(0x112e4fda0,&uStack_40,0x20,0);
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
    FUN_1020100b0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1020100b0; end: 1020100cf;  */

void FUN_1020100b0(void)

{
  func_0x000107c61168(&PTR_PTR_112816e40);
  return;
}



/* Entry: 1020100d0; end: 1020100eb;  */

void FUN_1020100d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4fda8,&UNK_10da4d5f8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102010158,param_1);
  return;
}



/* Entry: 1020100ec; end: 102010157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020100ec(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1020100b0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e4fdb0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102010158; end: 10201015f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010158(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1020100b0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e4fdb0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102010160; end: 1020101ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010160(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4fdb0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020101ac; end: 10201020b; -[_TtC31MyStorySettingsScopeGraphBridge39MyStorySettingsScopeGraphBridgeServices init] */

void FUN_1020101ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyStorySettingsScopeGraphBridge.MyStorySettingsScopeGraphBridgeServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020101d8);
  (*pcVar1)();
}



/* Entry: 10201020c; end: 10201021b; -[_TtC31MyStorySettingsScopeGraphBridge39MyStorySettingsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201020c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4fdb0));
  return;
}



/* Entry: 10201021c; end: 1020102a7;  */

void FUN_10201021c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10201025c,0);
  return;
}



/* Entry: 1020102a8; end: 1020102c3;  */

void FUN_1020102a8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102010314,param_1);
  return;
}



/* Entry: 1020102c4; end: 102010313;  */

void FUN_1020102c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102010314; end: 102010347;  */

void FUN_102010314(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102010348; end: 10201034f;  */

undefined8 FUN_102010348(void)

{
  return 0x1b;
}



/* Entry: 102010350; end: 1020104c7;  */

void FUN_102010350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bc358;
  func_0x000107c613fc(&UNK_1104bc358,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1020104c8,puVar1);
  return;
}



/* Entry: 1020104c8; end: 1020104cf;  */

void FUN_1020104c8(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4fda0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4fda0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bc430;
  func_0x000107c613fc(&UNK_1104bc430,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10201059c;
  func_0x00010058fa64(0x10201059c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1020104d0; end: 10201052b;  */

void FUN_1020104d0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4fda0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4fda0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10201052c; end: 1020105a3;  */

undefined ** FUN_10201052c(void)

{
  return &PTR_DAT_112ff1a58;
}



/* Entry: 1020105a4; end: 1020105eb; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020105a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4fe08;
  func_0x000107c61428(param_1 + _DAT_112e4fe08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1020105ec; end: 102010643; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020105ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4fe08;
  func_0x000107c61428(param_1 + _DAT_112e4fe08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102010644; end: 10201068b; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint sCStoryPrivacySettingsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010644(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4fe10;
  func_0x000107c61428(param_1 + _DAT_112e4fe10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10201068c; end: 102010697; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint setSCStoryPrivacySettingsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201068c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4fe10;
  func_0x000107c61428(param_1 + _DAT_112e4fe10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102010698; end: 1020106df; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint myStorySettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4fe18;
  func_0x000107c61428(param_1 + _DAT_112e4fe18,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1020106e0; end: 1020106eb; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint setMyStorySettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020106e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4fe18;
  func_0x000107c61428(param_1 + _DAT_112e4fe18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1020106ec; end: 10201074b;  */

void FUN_1020106ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10201074c; end: 102010907;  */

/* WARNING: Possible PIC construction at 0x000102010864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102010888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102010898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020108dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201089c) */
/* WARNING: Removing unreachable block (ram,0x00010201088c) */
/* WARNING: Removing unreachable block (ram,0x000102010868) */
/* WARNING: Removing unreachable block (ram,0x0001020108e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201074c(void)

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
  func_0x000107c51470();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4d3c0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10200fd68();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10200ffe0();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102010908);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e4fd30) = lVar5;
      *(long *)(lVar3 + _DAT_112e4fd38) = unaff_x20;
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



/* Entry: 102010908; end: 10201092f; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102010908(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10201074c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102010930; end: 102010973; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_102010930(undefined8 param_1)

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



/* Entry: 102010974; end: 102010b77;  */

void FUN_102010974(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0fa9100)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f056f00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0fa90d0)) &&
           (func_0x000107c605b8(0xd00000000000002e,0x800000010f056f30,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MyStorySettingsScopeGraphBridge/SCMyStorySettingsScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x56,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102010b78);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5692c();
        goto LAB_102010a00;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58a18();
  }
LAB_102010a00:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102010b78; end: 102010c23; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102010b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102010974(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102010c24; end: 102010c9b; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010c24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4fe08,0);
  *(undefined8 *)(param_1 + _DAT_112e4fe10) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4fe18) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4fe20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102010c9c; end: 102010ccf;  */

void FUN_102010c9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102010cd0; end: 102010d27; -[SCMyStorySettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102010cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102010d00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010cd0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4fe08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4fe10));
  return;
}



/* Entry: 102010d28; end: 102010d47;  */

void FUN_102010d28(void)

{
  func_0x000107c61168(&PTR_PTR_112816f00);
  return;
}



/* Entry: 102010d48; end: 102010d8f; -[SCSCMyStorySettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010d48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4fe50;
  func_0x000107c61428(param_1 + _DAT_112e4fe50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102010d90; end: 102010de7; -[SCSCMyStorySettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4fe50;
  func_0x000107c61428(param_1 + _DAT_112e4fe50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102010de8; end: 102010ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010de8(undefined8 param_1,long param_2)

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
    FUN_10200ffc0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4fd68) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102010ec0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4fd70);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4fe58);
    *(long **)(unaff_x20 + _DAT_112e4fe58) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102010ec0; end: 102010ee7; -[SCSCMyStorySettingsScopedServicesSaberEntryPoint begin] */

void FUN_102010ec0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102010de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102010ee8; end: 10201105f;  */

/* WARNING: Possible PIC construction at 0x000102010f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102010fe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102010f54) */
/* WARNING: Removing unreachable block (ram,0x000102010fec) */
/* WARNING: Removing unreachable block (ram,0x000102011004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102010ee8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4fe58);
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



/* Entry: 102011060; end: 102011067;  */

void FUN_102011060(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102011068; end: 10201109b; -[SCSCMyStorySettingsScopedServicesSaberEntryPoint end] */

void FUN_102011068(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102010ee8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10201109c; end: 1020111bb;  */

void FUN_10201109c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "MyStorySettingsScopeGraphBridge/SCSCMyStorySettingsScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020111bc);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1020111bc; end: 102011267; -[SCSCMyStorySettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1020111bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10201109c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102011268; end: 1020112c7; -[SCSCMyStorySettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102011268(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4fe50,0);
  *(undefined8 *)(param_1 + _DAT_112e4fe58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020112c8; end: 1020112fb;  */

void FUN_1020112c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020112fc; end: 102011333; -[SCSCMyStorySettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020112fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4fe50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4fe58));
  return;
}



/* Entry: 102011334; end: 102011353;  */

void FUN_102011334(void)

{
  func_0x000107c61168(&PTR_PTR_112816fd0);
  return;
}



/* Entry: 102011354; end: 1020113bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102011354(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102011748();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4fe90) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1020113c0; end: 10201142b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020113c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4fe90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10201142c; end: 10201148b; -[_TtC43SharedStoryMenuScopedFactoryServiceProvider31SCSharedStoryMenuScopedServices init] */

void FUN_10201142c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryMenuScopedFactoryServiceProvider.SCSharedStoryMenuScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102011458);
  (*pcVar1)();
}



/* Entry: 10201148c; end: 10201149b; -[_TtC43SharedStoryMenuScopedFactoryServiceProvider31SCSharedStoryMenuScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201148c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4fe90));
  return;
}



/* Entry: 10201149c; end: 102011507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201149c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bc648;
  func_0x000107c613fc(&UNK_1104bc648,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1020117e0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102011508; end: 1020115a3;  */

void FUN_102011508(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bc558;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bc558;
  return;
}



/* Entry: 1020115a4; end: 1020115db;  */

void FUN_1020115a4(long *param_1)

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



/* Entry: 1020115dc; end: 1020115e3;  */

undefined8 FUN_1020115dc(void)

{
  return 0x1b;
}



/* Entry: 1020115e4; end: 102011717;  */

void FUN_1020115e4(undefined8 *param_1)

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
  puVar1 = &UNK_1104bc670;
  func_0x000107c613fc(&UNK_1104bc670,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1020117b8;
  func_0x00010058fa64(FUN_1020117b8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102011718; end: 102011747;  */

undefined ** FUN_102011718(void)

{
  return &PTR_DAT_11306f260;
}



/* Entry: 102011748; end: 102011767;  */

void FUN_102011748(void)

{
  func_0x000107c61168(&PTR_PTR_112817090);
  return;
}



/* Entry: 102011768; end: 1020117b7;  */

undefined1  [16] FUN_102011768(void)

{
  return ZEXT816(0x1104bc5a8);
}



/* Entry: 1020117b8; end: 1020117df;  */

void FUN_1020117b8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1020117e0; end: 1020117e3;  */

void FUN_1020117e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020117e4; end: 1020118eb;  */

/* WARNING: Possible PIC construction at 0x0001020118a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020118b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020118c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020118b4) */
/* WARNING: Removing unreachable block (ram,0x0001020118a4) */
/* WARNING: Removing unreachable block (ram,0x0001020118c4) */

void FUN_1020117e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104bc6f8;
  func_0x000107c613fc(&UNK_1104bc6f8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  uVar2 = 0x112e4ff00;
  func_0x0001000285a8(0x112e4ff00,&UNK_10da4da80);
  func_0x000107c613fc();
  pcVar3 = FUN_102011d9c;
  func_0x0001000841fc(FUN_102011d9c,puVar1,uVar2);
  func_0x000100084214(&UNK_10da4da50,0x2d,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1020118ec; end: 10201190f;  */

/* WARNING: Possible PIC construction at 0x0001020118a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020118b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020118c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020118b4) */
/* WARNING: Removing unreachable block (ram,0x0001020118a4) */
/* WARNING: Removing unreachable block (ram,0x0001020118c4) */

void FUN_1020118ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_1104bc6f8;
  func_0x000107c613fc(&UNK_1104bc6f8,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112e4ff00;
  func_0x0001000285a8(0x112e4ff00,&UNK_10da4da80);
  func_0x000107c613fc();
  pcVar8 = FUN_102011d9c;
  func_0x0001000841fc(FUN_102011d9c,puVar6,uVar7);
  func_0x000100084214(&UNK_10da4da50,0x2d,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102011910; end: 102011d47;  */

void FUN_102011910(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e4ff08,&UNK_10da4da88);
  puVar1 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102013700();
  pcVar3 = "SCCustomStoryMembersScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCustomStoryMembersScopeExposerSubjectServiceProvider",0x36,2);
  FUN_10201374c();
  func_0x000100082720("SCSaveStoryScopeExposerSubjectServiceProvider",0x2d,2);
  puVar4 = puVar2;
  FUN_102013740();
  func_0x000100082720("SCCustomStoryMembersScopeExposerObservableServiceProvider",0x39,2);
  pcVar5 = pcVar3;
  FUN_1020137d8();
  func_0x000100082720("SCSaveStoryScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1020115a4;
  func_0x0001000823a8(FUN_1020115a4,0);
  func_0x000100082720("SCSharedStoryMenuScopedServicesCleanupRelayServiceProvider",0x3a,2);
  puVar7 = puVar2;
  FUN_102013554(puVar2,pcVar3);
  func_0x000100082720("SharedStoryMenuScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4ff10,&UNK_10da4daa0);
  puVar8 = &UNK_1104bc720;
  func_0x000107c613fc(&UNK_1104bc720,0x60,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(undefined8 *)(puVar8 + 0x28) = param_5;
  *(undefined8 *)(puVar8 + 0x30) = param_6;
  *(undefined8 *)(puVar8 + 0x38) = param_7;
  *(undefined8 *)(puVar8 + 0x40) = param_8;
  *(undefined8 *)(puVar8 + 0x48) = param_9;
  *(undefined8 **)(puVar8 + 0x50) = puVar4;
  *(char **)(puVar8 + 0x58) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  pcVar9 = FUN_102011db0;
  func_0x0001000823a8(FUN_102011db0,puVar8);
  func_0x000100082720("SCSharedStoryProfileActionMenuEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e4ff18,&UNK_10da4da90);
  puVar8 = &UNK_1104bc748;
  func_0x000107c613fc(&UNK_1104bc748,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(code **)(puVar8 + 0x18) = pcVar6;
  *(code **)(puVar8 + 0x20) = pcVar9;
  *(undefined8 **)(puVar8 + 0x28) = puVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(puVar7);
  pcVar10 = FUN_102011de4;
  func_0x0001000823a8(FUN_102011de4,puVar8);
  func_0x000100082720("SCSharedStoryMenuScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e4fe98,&UNK_10da4d840);
  func_0x000107c6157c(pcVar10);
  uVar12 = 0x102011df0;
  func_0x0001000823a8(0x102011df0,pcVar10);
  func_0x000100082720("SCSharedStoryMenuScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e4fe88,&UNK_10da4d830);
  func_0x000107c6157c(uVar12);
  uVar11 = 0x102011df8;
  func_0x0001000823a8(0x102011df8,uVar12);
  func_0x000100082720("SCSharedStoryMenuScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_1104bc770;
  func_0x000107c613fc(&UNK_1104bc770,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x102011e00;
  func_0x0001000823a8(0x102011e00,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCSharedStoryMenuScopeEntryPointProvider",0x28,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 102011d48; end: 102011d9b;  */

void FUN_102011d48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102011d9c; end: 102011daf;  */

void FUN_102011d9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  code *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar18 = *param_2;
  func_0x0001000285a8(0x112e4ff08,&UNK_10da4da88);
  puVar5 = &uStack_68;
  uStack_68 = uVar18;
  func_0x0001000838ec();
  puVar6 = puVar5;
  func_0x000102013700();
  pcVar7 = "SCCustomStoryMembersScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCustomStoryMembersScopeExposerSubjectServiceProvider",0x36,2);
  FUN_10201374c();
  func_0x000100082720("SCSaveStoryScopeExposerSubjectServiceProvider",0x2d,2);
  puVar8 = puVar6;
  FUN_102013740();
  func_0x000100082720("SCCustomStoryMembersScopeExposerObservableServiceProvider",0x39,2);
  pcVar9 = pcVar7;
  FUN_1020137d8();
  func_0x000100082720("SCSaveStoryScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_1020115a4;
  func_0x0001000823a8(FUN_1020115a4,0);
  func_0x000100082720("SCSharedStoryMenuScopedServicesCleanupRelayServiceProvider",0x3a,2);
  puVar11 = puVar6;
  FUN_102013554(puVar6,pcVar7);
  func_0x000100082720("SharedStoryMenuScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4ff10,&UNK_10da4daa0);
  puVar12 = &UNK_1104bc720;
  func_0x000107c613fc(&UNK_1104bc720,0x60,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar5;
  *(undefined8 *)(puVar12 + 0x18) = uVar15;
  *(undefined8 *)(puVar12 + 0x20) = uVar2;
  *(undefined8 *)(puVar12 + 0x28) = uVar16;
  *(undefined8 *)(puVar12 + 0x30) = uVar3;
  *(undefined8 *)(puVar12 + 0x38) = uVar1;
  *(undefined8 *)(puVar12 + 0x40) = uVar4;
  *(undefined8 *)(puVar12 + 0x48) = uVar17;
  *(undefined8 **)(puVar12 + 0x50) = puVar8;
  *(char **)(puVar12 + 0x58) = pcVar9;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(pcVar9);
  pcVar13 = FUN_102011db0;
  func_0x0001000823a8(FUN_102011db0,puVar12);
  func_0x000100082720("SCSharedStoryProfileActionMenuEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e4ff18,&UNK_10da4da90);
  puVar12 = &UNK_1104bc748;
  func_0x000107c613fc(&UNK_1104bc748,0x30,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar5;
  *(code **)(puVar12 + 0x18) = pcVar10;
  *(code **)(puVar12 + 0x20) = pcVar13;
  *(undefined8 **)(puVar12 + 0x28) = puVar11;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(puVar11);
  pcVar14 = FUN_102011de4;
  func_0x0001000823a8(FUN_102011de4,puVar12);
  func_0x000100082720("SCSharedStoryMenuScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e4fe98,&UNK_10da4d840);
  func_0x000107c6157c(pcVar14);
  uVar15 = 0x102011df0;
  func_0x0001000823a8(0x102011df0,pcVar14);
  func_0x000100082720("SCSharedStoryMenuScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e4fe88,&UNK_10da4d830);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x102011df8;
  func_0x0001000823a8(0x102011df8,uVar15);
  func_0x000100082720("SCSharedStoryMenuScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar12 = &UNK_1104bc770;
  func_0x000107c613fc(&UNK_1104bc770,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar16;
  *(code **)(puVar12 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  uVar16 = 0x102011e00;
  func_0x0001000823a8(0x102011e00,puVar12);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000100082720("SCSharedStoryMenuScopeEntryPointProvider",0x28,2);
  *param_1 = uVar16;
  return;
}



/* Entry: 102011db0; end: 102011de3;  */

void FUN_102011db0(void)

{
  long unaff_x20;
  
  FUN_102011e08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102011de4; end: 102011e07;  */

void FUN_102011de4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102012c80(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSharedStoryMenuScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102011e08; end: 102012a3f;  */

void FUN_102011e08(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  FUN_102012bd0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  func_0x0001000285a8(0x112e4f090,&UNK_10dbc4da0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar8;
  func_0x0001000285a8(0x112e4f098,&UNK_10da4bc30);
  func_0x000107c610f8();
  uVar10 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x20) = puVar8;
  puVar8 = PTR_PTR_1126a9de8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = auStack_70[0];
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f057220);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar10 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar12);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar12);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar12);
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f055790);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0557f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f055830);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar10);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21c40);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uStack_b8);
  *param_1 = param_2;
  return;
}



/* Entry: 102012a40; end: 102012ac3;  */

void FUN_102012a40(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102012ac4; end: 102012acb;  */

undefined8 FUN_102012ac4(void)

{
  return 0x1b;
}



/* Entry: 102012acc; end: 102012b4f;  */

void FUN_102012acc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102012c10,param_2,FUN_102012c14,param_2,FUN_102012c3c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102012b50; end: 102012b9f;  */

undefined8 FUN_102012b50(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102012ba0; end: 102012bcf;  */

undefined ** FUN_102012ba0(void)

{
  return &PTR_DAT_11306f260;
}



/* Entry: 102012bd0; end: 102012bef;  */

void FUN_102012bd0(void)

{
  func_0x000107c61168(&PTR_PTR_112e4ff88);
  return;
}



/* Entry: 102012bf0; end: 102012c13;  */

undefined1  [16] FUN_102012bf0(void)

{
  return ZEXT816(0x1104bc7c8);
}



/* Entry: 102012c14; end: 102012c3b;  */

void FUN_102012c14(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102012c3c; end: 102012c43;  */

undefined8 FUN_102012c3c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102012c44; end: 102012c7f;  */

void FUN_102012c44(undefined8 *param_1,undefined8 param_2)

{
  FUN_102012c80();
  func_0x0001000a7f38("SCSharedStoryMenuScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102012c80; end: 102012f13;  */

void FUN_102012c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11075abf8;
  ppuVar4 = &PTR_DAT_11306f260;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104bc818;
  func_0x000107c613fc(&UNK_1104bc818,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e50030;
  func_0x0001000285a8(0x112e50030,&UNK_10da4dc38);
  func_0x0001000a6ee8(&UNK_1104bc5e8,"SCSharedStoryMenuScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_102012f14,puVar2,uVar3,&UNK_1104bc5e8,&PTR_DAT_112e4fea0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bc7c8,
                      "SCSharedStoryProfileActionMenuEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_102012f90,param_3,uVar3,&UNK_1104bc7c8,&PTR_DAT_112e4ff20);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104bc840;
  func_0x000107c613fc(&UNK_1104bc840,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bca80,"SharedStoryMenuScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_102012f98,puVar2,uVar3,&UNK_1104bca80,&PTR_DAT_112e500d0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e50038;
  func_0x0001000285a8(0x112e50038,&UNK_10da4dc40);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102012f14; end: 102012f1b;  */

void FUN_102012f14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bc868;
  func_0x000107c613fc(&UNK_1104bc868,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10201300c;
  func_0x0001000823a8(FUN_10201300c,puVar3);
  func_0x000100082720("SCSharedStoryMenuScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102012f1c; end: 102012f8f;  */

void FUN_102012f1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_102012fd8;
  func_0x0001000823a8(FUN_102012fd8,param_3);
  func_0x000100082720("SCSharedStoryProfileActionMenuEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102012f90; end: 102012f97;  */

void FUN_102012f90(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  pcVar1 = FUN_102012fd8;
  func_0x0001000823a8();
  func_0x000100082720("SCSharedStoryProfileActionMenuEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102012f98; end: 102012fd7;  */

void FUN_102012f98(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102013878(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SharedStoryMenuScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102012fd8; end: 102012fdf;  */

void FUN_102012fd8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102012c10);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102012fe0; end: 10201300b;  */

void FUN_102012fe0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10201300c; end: 102013013;  */

void FUN_10201300c(undefined8 *param_1)

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
  puVar1 = &UNK_1104bc670;
  func_0x000107c613fc(&UNK_1104bc670,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1020117b8;
  func_0x00010058fa64(FUN_1020117b8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102013014; end: 10201312b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102013014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102013464();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e50040) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e50048) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10201312c);
  (*pcVar2)();
}



/* Entry: 10201312c; end: 10201318b; -[_TtC31SharedStoryMenuScopeGraphBridge46SharedStoryMenuScopeGraphBridgeSaberEntryPoint init] */

void FUN_10201312c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryMenuScopeGraphBridge.SharedStoryMenuScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102013158);
  (*pcVar1)();
}



/* Entry: 10201318c; end: 1020131c3; -[_TtC31SharedStoryMenuScopeGraphBridge46SharedStoryMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020131a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020131ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201318c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50040));
  return;
}



/* Entry: 1020131c4; end: 1020131eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020131c4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e50048),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e50040));
  return;
}



/* Entry: 1020131ec; end: 10201320b;  */

void FUN_1020131ec(void)

{
  func_0x000107c61168(&PTR_PTR_112817150);
  return;
}


