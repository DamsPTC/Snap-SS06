/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101232968; end: 101232a13; -[SCAppAppearanceSettingsEntryPoint setValue:forIvarName:] */

void FUN_101232968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012325ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101232a14; end: 101232adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101232a14(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d6a358,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a360,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a368,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a370,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a378,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6a380) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6a388) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6a390) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101232adc; end: 101232afb; -[SCAppAppearanceSettingsEntryPoint init] */

void FUN_101232adc(void)

{
  FUN_101232a14();
  return;
}



/* Entry: 101232afc; end: 101232b2f;  */

void FUN_101232afc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101232b30; end: 101232bc7; -[SCAppAppearanceSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101232b30(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6a358);
  func_0x000107c61610(param_1 + _DAT_112d6a360);
  func_0x000107c61610(param_1 + _DAT_112d6a368);
  func_0x000107c61610(param_1 + _DAT_112d6a370);
  func_0x000107c61610(param_1 + _DAT_112d6a378);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a380));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a388));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6a390));
  return;
}



/* Entry: 101232bc8; end: 101232be7;  */

void FUN_101232bc8(void)

{
  func_0x000107c61168(&PTR_PTR_1127bd980);
  return;
}



/* Entry: 101232be8; end: 101232cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101232be8(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lStack_28;
  
  if ((param_2 == 0) ||
     (((uVar2 = 0, param_1 != 0x70616e735f747366 || (param_2 != -0x12ffff8c8a938fa1)) &&
      (func_0x000107c605b8(), (uVar2 & 1) == 0)))) {
    bVar1 = false;
  }
  else {
    func_0x0001000d224c(&lStack_28);
    lVar3 = lStack_28;
    func_0x000107c4b6fc(lStack_28);
    func_0x000107c615e8(lVar3);
    func_0x0001000d224c(&lStack_28);
    lVar3 = lStack_28;
    func_0x000107c3d0fc();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_28);
    bVar1 = lVar3 != 0;
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
    }
  }
  return bVar1;
}



/* Entry: 101232cc8; end: 101232d3f; -[_TtC33PlusBillboardFSTHalfSheetProvider33PlusBillboardFSTHalfSheetProvider canShowCampaign:] */

uint FUN_101232cc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_101232be8(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 101232d40; end: 101233233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101232d40(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  long *plVar18;
  long unaff_x20;
  undefined8 uVar19;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d6a3c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112d6a3c8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      if (lVar6 != 0) {
        lVar5 = *(long *)(unaff_x20 + _DAT_112d6a3e0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar4);
          lVar4 = lVar6;
        }
        else {
          func_0x0001000d224c(&puStack_a8);
          puVar7 = puStack_a8;
          func_0x000107c3d0fc();
          func_0x000107c61180();
          func_0x000107c615e8(puStack_a8);
          if (puVar7 != (undefined *)0x0) {
            if (param_1 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101233230);
              (*pcVar3)();
            }
            uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d6a3e8);
            lVar8 = 0;
            FUN_101233d04();
            lVar9 = lVar8;
            func_0x000107c610f8();
            lVar10 = lVar9 + _DAT_112d6a4f0;
            *(undefined8 *)(lVar10 + 8) = 0;
            func_0x000107c61614(lVar10,0);
            *(undefined ***)(lVar10 + 8) = &PTR_DAT_110396788;
            func_0x000107c61604();
            puVar11 = PTR_PTR_1126afe50;
            func_0x000107c610f8();
            func_0x000107c61434(uVar19);
            func_0x000107c61174();
            func_0x000107c615f0(lVar5);
            func_0x000107c615f0(lVar6);
            func_0x000107c615f0(lVar4);
            func_0x000107c61174();
            func_0x000107c4842c();
            puVar12 = PTR_PTR_1126b34f0;
            func_0x000107c610f8();
            func_0x000107c46444();
            puVar13 = &UNK_110396820;
            func_0x000107c613fc(&UNK_110396820,0x28,7);
            *(long *)(puVar13 + 0x10) = lVar4;
            *(long *)(puVar13 + 0x18) = param_1;
            *(undefined8 *)(puVar13 + 0x20) = uVar19;
            puVar14 = PTR_PTR_1126a6710;
            func_0x000107c610f8();
            pcStack_88 = (code *)0x101233560;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_10123356c;
            puStack_90 = &UNK_110396838;
            ppuVar15 = &puStack_a8;
            puStack_80 = puVar13;
            func_0x000107c60bc4(ppuVar15);
            func_0x000107c615f0(lVar4);
            func_0x000107c61174();
            func_0x000107c6157c(puVar13);
            func_0x000107c45cbc();
            func_0x000107c60bd0(ppuVar15);
            func_0x000107c61574(puStack_80);
            puVar16 = &UNK_110396870;
            func_0x000107c613fc(&UNK_110396870,0x20,7);
            *(undefined **)(puVar16 + 0x10) = puVar11;
            *(undefined **)(puVar16 + 0x18) = puVar12;
            puVar17 = PTR_PTR_1126a6718;
            func_0x000107c610f8();
            pcStack_88 = FUN_1012335a8;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_100c75f50;
            puStack_90 = &UNK_110396888;
            ppuVar15 = &puStack_a8;
            puStack_80 = puVar16;
            func_0x000107c60bc4(ppuVar15);
            func_0x000107c61174(puVar11);
            func_0x000107c61174();
            func_0x000107c479fc();
            func_0x000107c60bd0(ppuVar15);
            func_0x000107c61574(puStack_80);
            puVar16 = PTR_PTR_1126a6720;
            func_0x000107c610f8(PTR_PTR_1126a6720);
            func_0x000107c49520();
            plVar18 = &lStack_b8;
            lStack_b8 = lVar9;
            lStack_b0 = lVar8;
            func_0x000107c61154(plVar18,PTR_s_initWithValdiView_presentationTy_1125272a0,puVar16,4);
            func_0x000107c61180();
            func_0x000107c561c0(puVar11);
            func_0x000107c61170(plVar18);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(param_1);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar6);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar12);
            func_0x000107c61574(puVar13);
            func_0x000107c61170(puVar14);
            func_0x000107c61170(puVar17);
            func_0x000107c61170(puVar16);
            if (param_2 != 0) {
              func_0x000107c3e2c0(param_2);
              func_0x000107c61170(plVar18);
              func_0x000107c61170(puVar7);
              func_0x000107c615e8(lVar5);
              func_0x000107c615e8(lVar6);
              func_0x000107c615e8(lVar4);
              puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6a3f0);
              uVar19 = *puVar1;
              uVar2 = puVar1[1];
              *puVar1 = param_3;
              puVar1[1] = param_4;
              func_0x000100b64c10(param_3,param_4);
              func_0x00010058d43c(uVar19,uVar2);
              uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d6a3f8);
              *(long *)(unaff_x20 + _DAT_112d6a3f8) = param_2;
              func_0x000107c615f0(param_2);
              func_0x000107c615e8(uVar19);
              return;
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101233234);
            (*pcVar3)();
          }
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar6);
          lVar4 = lVar5;
        }
      }
    }
    func_0x000107c615e8(lVar4);
  }
  if (param_3 != (code *)0x0) {
    (*param_3)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10123322c);
  (*pcVar3)();
}



/* Entry: 101233234; end: 1012332fb; -[_TtC33PlusBillboardFSTHalfSheetProvider33PlusBillboardFSTHalfSheetProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x0001012332d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012332dc) */

void FUN_101233234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1103967f8;
    func_0x000107c613fc(&UNK_1103967f8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x101233554;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101232d40(param_3,param_4,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012332fc; end: 10123335b; -[_TtC33PlusBillboardFSTHalfSheetProvider33PlusBillboardFSTHalfSheetProvider init] */

void FUN_1012332fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusBillboardFSTHalfSheetProvider.PlusBillboardFSTHalfSheetProvider",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101233328);
  (*pcVar1)();
}



/* Entry: 10123335c; end: 1012333f7; -[_TtC33PlusBillboardFSTHalfSheetProvider33PlusBillboardFSTHalfSheetProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123335c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a3c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a3c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a3d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6a3d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a3e0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6a3e8));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112d6a3f0),
                      ((undefined8 *)(param_1 + _DAT_112d6a3f0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d6a3f8));
  return;
}



/* Entry: 1012333f8; end: 1012334f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012333f8(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "plusBillboardFSTHalfSheetViewControllerDidDismiss()";
  func_0x0001000c10c0("plusBillboardFSTHalfSheetViewControllerDidDismiss()");
  func_0x000107c61180();
  puVar2 = &UNK_1103967a8;
  func_0x000107c613fc(&UNK_1103967a8,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  pcStack_40 = FUN_101233518;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103967c0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  pcVar4 = *(code **)(unaff_x20 + _DAT_112d6a3f0);
  if (pcVar4 != (code *)0x0) {
    uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d6a3f0))[1];
    func_0x000107c6157c(uVar5);
    (*pcVar4)();
    func_0x00010058d43c(pcVar4,uVar5);
  }
  return;
}



/* Entry: 1012334f8; end: 101233517;  */

void FUN_1012334f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127bda70);
  return;
}



/* Entry: 101233518; end: 10123356b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233518(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d6a3f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 10123356c; end: 1012335a7;  */

void FUN_10123356c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1012335a8; end: 1012335bf;  */

void FUN_1012335a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  pcVar3 = 
  "init(activeCampaign:billboardCampaign:additionalData:campaignDataProvider:composerRuntime:deepLinkHandlingServices:blizzardLogger:delegate:)"
  ;
  func_0x0001000c10c0(
                     "init(activeCampaign:billboardCampaign:additionalData:campaignDataProvider:composerRuntime:deepLinkHandlingServices:blizzardLogger:delegate:)"
                     );
  func_0x000107c61180();
  puVar4 = &UNK_1103968e8;
  func_0x000107c613fc(&UNK_1103968e8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  pcStack_50 = FUN_101233d48;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110396900;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c4e590(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 1012335c0; end: 1012337d3;  */

void FUN_1012335c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  return;
}



/* Entry: 1012337d4; end: 10123381f;  */

void FUN_1012337d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101233820; end: 10123383f;  */

void FUN_101233820(void)

{
  func_0x000101233624();
  return;
}



/* Entry: 101233840; end: 101233847;  */

undefined8 FUN_101233840(void)

{
  return 0;
}



/* Entry: 101233848; end: 101233867;  */

void FUN_101233848(void)

{
  func_0x000107c61168(&PTR_PTR_112d6a468);
  return;
}



/* Entry: 101233868; end: 101233a03;  */

void FUN_101233868(int param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_1 == 2) {
    puVar1 = param_4;
    if (param_4 == (undefined *)0x0) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    func_0x000107c61434(param_4);
    puVar2 = puVar1;
    func_0x000107c5f9dc(puVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar1);
    func_0x000107c4c4b8(param_2);
  }
  else if (param_1 == 1) {
    puVar1 = param_4;
    if (param_4 == (undefined *)0x0) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    func_0x000107c61434(param_4);
    puVar2 = puVar1;
    func_0x000107c5f9dc(puVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar1);
    func_0x000107c4c4c0(param_2);
  }
  else {
    if (param_1 != 0) {
      return;
    }
    puVar1 = param_4;
    if (param_4 == (undefined *)0x0) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    func_0x000107c61434(param_4);
    puVar2 = puVar1;
    func_0x000107c5f9dc(puVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar1);
    func_0x000107c4c4bc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101233a04; end: 101233be7;  */

void FUN_101233a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = 
  "init(activeCampaign:billboardCampaign:additionalData:campaignDataProvider:composerRuntime:deepLinkHandlingServices:blizzardLogger:delegate:)"
  ;
  func_0x0001000c10c0(
                     "init(activeCampaign:billboardCampaign:additionalData:campaignDataProvider:composerRuntime:deepLinkHandlingServices:blizzardLogger:delegate:)"
                     );
  func_0x000107c61180();
  puVar2 = &UNK_1103968e8;
  func_0x000107c613fc(&UNK_1103968e8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  pcStack_50 = FUN_101233d48;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110396900;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101233be8; end: 101233c37;  */

/* WARNING: Possible PIC construction at 0x000101233c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101233c28) */

void FUN_101233be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c4de80(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101233c38; end: 101233c93; -[_TtC33PlusBillboardFSTHalfSheetProvider39PlusBillboardFSTHalfSheetViewController didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233c38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112d6a4f0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_1012333f8();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101233c94; end: 101233cf3; -[_TtC33PlusBillboardFSTHalfSheetProvider39PlusBillboardFSTHalfSheetViewController initWithValdiView:presentationType:] */

void FUN_101233c94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusBillboardFSTHalfSheetProvider.PlusBillboardFSTHalfSheetViewController",
                      0x49,"init(valdiView:presentationType:)",0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101233cc0);
  (*pcVar1)();
}



/* Entry: 101233cf4; end: 101233d03; -[_TtC33PlusBillboardFSTHalfSheetProvider39PlusBillboardFSTHalfSheetViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101233cf4(long param_1)

{
  param_1 = param_1 + _DAT_112d6a4f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101233d04; end: 101233d23;  */

void FUN_101233d04(void)

{
  func_0x000107c61168(&PTR_PTR_1127bdb68);
  return;
}



/* Entry: 101233d24; end: 101233d47;  */

undefined8 FUN_101233d24(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101233d48; end: 101233d83;  */

void FUN_101233d48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar6 = &puStack_70;
  func_0x000107c4c250();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar5 = &UNK_110396938;
    func_0x000107c613fc(&UNK_110396938,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar2;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    *(undefined8 *)(puVar5 + 0x20) = uVar3;
    uStack_50 = 0x101233d70;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110396950;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c61174(uVar2);
    func_0x000107c61434(uVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c420a8(lVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 101233d84; end: 101233d8f; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233d84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a520;
  func_0x000107c61428(param_1 + _DAT_112d6a520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101233d90; end: 101233d9b; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a520;
  func_0x000107c61428(param_1 + _DAT_112d6a520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101233d9c; end: 101233da7; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233d9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a528;
  func_0x000107c61428(param_1 + _DAT_112d6a528,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101233da8; end: 101233db3; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a528;
  func_0x000107c61428(param_1 + _DAT_112d6a528,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101233db4; end: 101233dbf; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233db4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a530;
  func_0x000107c61428(param_1 + _DAT_112d6a530,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101233dc0; end: 101233dcb; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a530;
  func_0x000107c61428(param_1 + _DAT_112d6a530,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101233dcc; end: 101233dd7; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint deepLinkHandlingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233dcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a538;
  func_0x000107c61428(param_1 + _DAT_112d6a538,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101233dd8; end: 101233de3; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint setDeepLinkHandlingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a538;
  func_0x000107c61428(param_1 + _DAT_112d6a538,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101233de4; end: 101233def; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233de4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a540;
  func_0x000107c61428(param_1 + _DAT_112d6a540,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101233df0; end: 101233dfb; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a540;
  func_0x000107c61428(param_1 + _DAT_112d6a540,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101233dfc; end: 101233e07; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint syncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233dfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a548;
  func_0x000107c61428(param_1 + _DAT_112d6a548,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101233e08; end: 101233e4b;  */

void FUN_101233e08(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101233e4c; end: 101233e57; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint setSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101233e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a548;
  func_0x000107c61428(param_1 + _DAT_112d6a548,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101233e58; end: 101233eab;  */

void FUN_101233e58(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101233eac; end: 1012340d7;  */

/* WARNING: Possible PIC construction at 0x000101233fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101233fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101233ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123409c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012340ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123407c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123408c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123406c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101234090) */
/* WARNING: Removing unreachable block (ram,0x000101234080) */
/* WARNING: Removing unreachable block (ram,0x0001012340b0) */
/* WARNING: Removing unreachable block (ram,0x0001012340a0) */
/* WARNING: Removing unreachable block (ram,0x000101233ff8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101233fe8) */
/* WARNING: Removing unreachable block (ram,0x000101233fd8) */
/* WARNING: Removing unreachable block (ram,0x000101234070) */

void FUN_101233eac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3e8cc();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c40014();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c414f0();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5dbac();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c5c598();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_101233848();
              func_0x000107c613fc();
              *(long *)(lVar6 + 0x10) = lVar1;
              *(long *)(lVar6 + 0x18) = lVar2;
              *(long *)(lVar6 + 0x20) = lVar3;
              *(long *)(lVar6 + 0x28) = lVar4;
              *(long *)(lVar6 + 0x30) = unaff_x20;
              *(long *)(lVar6 + 0x38) = lVar5;
              func_0x000107c61174(lVar1);
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(unaff_x20);
              func_0x000101233624();
              lVar1 = unaff_x20;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012340d8; end: 1012340ff; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint begin] */

void FUN_1012340d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101233eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101234100; end: 101234143; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint end] */

void FUN_101234100(undefined8 param_1)

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



/* Entry: 101234144; end: 101234497;  */

void FUN_101234144(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10eeea0)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10d5b50)) ||
               (func_0x000107c605b8(0xd000000000000018,0x800000010ef2a4b0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53f10();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e4100)) ||
                 (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1bf00,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5a46c();
              }
              else {
                uVar2 = 0x76726553636e7973;
                if (((param_2 != 0x76726553636e7973) || (param_3 != -0x13ffffff8c9a9c97)) &&
                   (func_0x000107c605b8(0x76726553636e7973,0xec00000073656369,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "PlusBillboardFSTHalfSheetProvider/SCPlusBillboardFSTHalfSheetProviderEntryPoint.swift"
                                      ,0x55,2,0x3a,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101234498);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c59b28();
              }
            }
            goto LAB_1012341d0;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c536e0();
        goto LAB_1012341d0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c50();
  }
LAB_1012341d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101234498; end: 101234543; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint setValue:forIvarName:] */

void FUN_101234498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101234144(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101234544; end: 101234607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234544(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d6a520,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a528,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a530,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a538,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a540,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a548,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6a550) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101234608; end: 101234627; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint init] */

void FUN_101234608(void)

{
  FUN_101234544();
  return;
}



/* Entry: 101234628; end: 10123465b;  */

void FUN_101234628(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10123465c; end: 1012346e3; -[SCPlusBillboardFSTHalfSheetProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123465c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6a520);
  func_0x000107c61610(param_1 + _DAT_112d6a528);
  func_0x000107c61610(param_1 + _DAT_112d6a530);
  func_0x000107c61610(param_1 + _DAT_112d6a538);
  func_0x000107c61610(param_1 + _DAT_112d6a540);
  func_0x000107c61610(param_1 + _DAT_112d6a548);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6a550));
  return;
}



/* Entry: 1012346e4; end: 101234703;  */

void FUN_1012346e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127bdc30);
  return;
}



/* Entry: 101234704; end: 101234927;  */

/* WARNING: Possible PIC construction at 0x0001012347c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012347e8) */
/* WARNING: Removing unreachable block (ram,0x0001012347d8) */
/* WARNING: Removing unreachable block (ram,0x0001012347c8) */
/* WARNING: Removing unreachable block (ram,0x0001012347f8) */

void FUN_101234704(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110396a28;
  func_0x000107c613fc(&UNK_110396a28,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  uVar2 = 0x112d6a588;
  func_0x0001000285a8(0x112d6a588,&UNK_10d92daf8);
  func_0x000107c613fc();
  uVar3 = 0x101234994;
  func_0x0001000841fc(0x101234994,puVar1,uVar2);
  func_0x000100084214(&UNK_10d92dac0,0x33,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101234928; end: 101234937;  */

undefined1  [16] FUN_101234928(void)

{
  return ZEXT816(0x110396a08);
}



/* Entry: 101234938; end: 1012349c3;  */

void FUN_101234938(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012349c4; end: 101234c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1012349c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  func_0x0001000285a8(0x112d6a598,&UNK_10d92db10);
  puVar2 = &uStack_68;
  uStack_68 = param_2;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5a0,&UNK_10d942680);
  puVar3 = &uStack_68;
  uStack_68 = param_3;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5a8,&UNK_10d92db20);
  puVar4 = &uStack_68;
  uStack_68 = param_4;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5b0,&UNK_10d97b460);
  puVar5 = &uStack_68;
  uStack_68 = param_5;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5b8,&UNK_10d92db30);
  puVar6 = &uStack_68;
  uStack_68 = param_6;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5c0,&UNK_10d92db38);
  puVar7 = &uStack_68;
  uStack_68 = param_7;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d37ec8,&UNK_10d901d30);
  puVar8 = &uStack_68;
  uStack_68 = param_8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5c8,&UNK_10d92db48);
  uStack_68 = param_9;
  puVar9 = &uStack_68;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a580,&UNK_10d92dab0);
  puVar10 = &UNK_110396a50;
  func_0x000107c613fc(&UNK_110396a50,0x50,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar9;
  *(undefined8 **)(puVar10 + 0x18) = puVar4;
  *(undefined8 **)(puVar10 + 0x20) = puVar5;
  *(undefined8 **)(puVar10 + 0x28) = puVar6;
  *(undefined8 **)(puVar10 + 0x30) = puVar7;
  *(undefined8 **)(puVar10 + 0x38) = puVar2;
  *(undefined8 **)(puVar10 + 0x40) = puVar8;
  *(undefined8 **)(puVar10 + 0x48) = puVar3;
  pcVar11 = FUN_101234c98;
  func_0x0001000823a8(FUN_101234c98,puVar10);
  func_0x000100083b20(&uStack_70);
  func_0x000107c61574(pcVar11);
  uVar1 = uStack_70;
  uStack_78 = param_1;
  func_0x00010008a7c8(&uStack_68,&uStack_78);
  func_0x000107c61574(uVar1);
  uVar1 = uStack_68;
  func_0x000100083b20(&uStack_70);
  func_0x000107c61574(uVar1);
  *(undefined8 *)(unaff_x20 + _DAT_112d6a5d0) = uStack_70;
  puVar12 = auStack_88;
  func_0x000107c61154(puVar12,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_9);
  return puVar12;
}



/* Entry: 101234c98; end: 101234c9b;  */

/* WARNING: Possible PIC construction at 0x0001012347c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012347e8) */
/* WARNING: Removing unreachable block (ram,0x0001012347d8) */
/* WARNING: Removing unreachable block (ram,0x0001012347c8) */
/* WARNING: Removing unreachable block (ram,0x0001012347f8) */

void FUN_101234c98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_110396a28;
  func_0x000107c613fc(&UNK_110396a28,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112d6a588;
  func_0x0001000285a8(0x112d6a588,&UNK_10d92daf8);
  func_0x000107c613fc();
  uVar9 = 0x101234994;
  func_0x0001000841fc(0x101234994,puVar7,uVar8);
  func_0x000100084214(&UNK_10d92dac0,0x33,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101234c9c; end: 101234cf7;  */

void FUN_101234c9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101234cf8; end: 101234d0b;  */

/* WARNING: Possible PIC construction at 0x0001012347c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012347e8) */
/* WARNING: Removing unreachable block (ram,0x0001012347d8) */
/* WARNING: Removing unreachable block (ram,0x0001012347c8) */
/* WARNING: Removing unreachable block (ram,0x0001012347f8) */

void FUN_101234cf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_110396a28;
  func_0x000107c613fc(&UNK_110396a28,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112d6a588;
  func_0x0001000285a8(0x112d6a588,&UNK_10d92daf8);
  func_0x000107c613fc();
  uVar9 = 0x101234994;
  func_0x0001000841fc(0x101234994,puVar7,uVar8);
  func_0x000100084214(&UNK_10d92dac0,0x33,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101234d0c; end: 101234d6b; -[_TtC51PlusSendFriendBuddyPassScopedFactoryServiceProvider66PlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint init] */

void FUN_101234d0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusSendFriendBuddyPassScopedFactoryServiceProvider.PlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint"
                      ,0x76,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101234d38);
  (*pcVar1)();
}



/* Entry: 101234d6c; end: 101234d87; -[_TtC51PlusSendFriendBuddyPassScopedFactoryServiceProvider66PlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6a5d0));
  return;
}



/* Entry: 101234d88; end: 101234da7;  */

void FUN_101234d88(void)

{
  func_0x000107c61168(&PTR_PTR_1127bdd18);
  return;
}



/* Entry: 101234da8; end: 101234db3; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234da8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a600;
  func_0x000107c61428(param_1 + _DAT_112d6a600,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234db4; end: 101234dbf; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a600;
  func_0x000107c61428(param_1 + _DAT_112d6a600,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234dc0; end: 101234dcb; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint plusStoreKitServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234dc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a608;
  func_0x000107c61428(param_1 + _DAT_112d6a608,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234dcc; end: 101234dd7; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setPlusStoreKitServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a608;
  func_0x000107c61428(param_1 + _DAT_112d6a608,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234dd8; end: 101234de3; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint sCAttributionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234dd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a610;
  func_0x000107c61428(param_1 + _DAT_112d6a610,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234de4; end: 101234def; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setSCAttributionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a610;
  func_0x000107c61428(param_1 + _DAT_112d6a610,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234df0; end: 101234dfb; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint sCComposerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234df0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a618;
  func_0x000107c61428(param_1 + _DAT_112d6a618,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234dfc; end: 101234e07; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setSCComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a618;
  func_0x000107c61428(param_1 + _DAT_112d6a618,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234e08; end: 101234e13; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint sCComposerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234e08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a620;
  func_0x000107c61428(param_1 + _DAT_112d6a620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234e14; end: 101234e1f; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setSCComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a620;
  func_0x000107c61428(param_1 + _DAT_112d6a620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234e20; end: 101234e2b; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint sCComposerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234e20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a628;
  func_0x000107c61428(param_1 + _DAT_112d6a628,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234e2c; end: 101234e37; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setSCComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a628;
  func_0x000107c61428(param_1 + _DAT_112d6a628,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234e38; end: 101234e43; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint sCPlusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234e38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a630;
  func_0x000107c61428(param_1 + _DAT_112d6a630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234e44; end: 101234e4f; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setSCPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a630;
  func_0x000107c61428(param_1 + _DAT_112d6a630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234e50; end: 101234e5b; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint sCTaskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234e50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a638;
  func_0x000107c61428(param_1 + _DAT_112d6a638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234e5c; end: 101234e67; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setSCTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a638;
  func_0x000107c61428(param_1 + _DAT_112d6a638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234e68; end: 101234e73; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint sIGCardTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234e68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a640;
  func_0x000107c61428(param_1 + _DAT_112d6a640,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234e74; end: 101234eb7;  */

void FUN_101234e74(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101234eb8; end: 101234ec3; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setSIGCardTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a640;
  func_0x000107c61428(param_1 + _DAT_112d6a640,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234ec4; end: 101234f17;  */

void FUN_101234ec4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101234f18; end: 1012353bb;  */

/* WARNING: Possible PIC construction at 0x000101235248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123529c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012352f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101235304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012352e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101235308) */
/* WARNING: Removing unreachable block (ram,0x0001012352f8) */
/* WARNING: Removing unreachable block (ram,0x000101235328) */
/* WARNING: Removing unreachable block (ram,0x000101235318) */
/* WARNING: Removing unreachable block (ram,0x000101235358) */
/* WARNING: Removing unreachable block (ram,0x000101235348) */
/* WARNING: Removing unreachable block (ram,0x000101235398) */
/* WARNING: Removing unreachable block (ram,0x000101235388) */
/* WARNING: Removing unreachable block (ram,0x000101235378) */
/* WARNING: Removing unreachable block (ram,0x00010123527c) */
/* WARNING: Removing unreachable block (ram,0x00010123526c) */
/* WARNING: Removing unreachable block (ram,0x00010123525c) */
/* WARNING: Removing unreachable block (ram,0x00010123524c) */
/* WARNING: Removing unreachable block (ram,0x0001012352e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101234f18(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  code *pcVar14;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4eaa0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c50a50();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c50c00();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar4 = unaff_x20;
          func_0x000107c50c0c();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar4 = unaff_x20;
            func_0x000107c50c1c();
            func_0x000107c61180();
            if (lVar4 != 0) {
              lVar4 = unaff_x20;
              func_0x000107c51184();
              func_0x000107c61180();
              if (lVar4 == 0) {
                func_0x000107c61170(lVar2);
                lVar2 = lVar3;
              }
              else {
                lVar4 = unaff_x20;
                func_0x000107c51498();
                func_0x000107c61180();
                if (lVar4 == 0) {
                  func_0x000107c61170(lVar2);
                  lVar2 = lVar3;
                }
                else {
                  func_0x000107c51590();
                  func_0x000107c61180();
                  lVar4 = 0;
                  FUN_101234d88();
                  lVar3 = lVar4;
                  func_0x000107c610f8();
                  func_0x0001000285a8(0x112d6a598,&UNK_10d92db10);
                  plVar5 = &lStack_68;
                  func_0x0001000838ec();
                  func_0x0001000285a8(0x112d6a5a0,&UNK_10d942680);
                  plVar6 = &lStack_68;
                  func_0x0001000838ec();
                  func_0x0001000285a8(0x112d6a5a8,&UNK_10d92db20);
                  plVar7 = &lStack_68;
                  func_0x0001000838ec();
                  func_0x0001000285a8(0x112d6a5b0,&UNK_10d97b460);
                  plVar8 = &lStack_68;
                  func_0x0001000838ec();
                  func_0x0001000285a8(0x112d6a5b8,&UNK_10d92db30);
                  plVar9 = &lStack_68;
                  func_0x0001000838ec();
                  func_0x0001000285a8(0x112d6a5c0,&UNK_10d92db38);
                  plVar10 = &lStack_68;
                  func_0x0001000838ec();
                  func_0x0001000285a8(0x112d37ec8,&UNK_10d901d30);
                  plVar11 = &lStack_68;
                  func_0x0001000838ec();
                  func_0x0001000285a8(0x112d6a5c8,&UNK_10d92db48);
                  plVar12 = &lStack_68;
                  lStack_68 = unaff_x20;
                  func_0x0001000838ec();
                  func_0x0001000285a8(0x112d6a580,&UNK_10d92dab0);
                  puVar13 = &UNK_110396a98;
                  func_0x000107c613fc(&UNK_110396a98,0x50,7);
                  *(long **)(puVar13 + 0x10) = plVar12;
                  *(long **)(puVar13 + 0x18) = plVar7;
                  *(long **)(puVar13 + 0x20) = plVar8;
                  *(long **)(puVar13 + 0x28) = plVar9;
                  *(long **)(puVar13 + 0x30) = plVar10;
                  *(long **)(puVar13 + 0x38) = plVar5;
                  *(long **)(puVar13 + 0x40) = plVar11;
                  *(long **)(puVar13 + 0x48) = plVar6;
                  pcVar14 = FUN_1012353bc;
                  func_0x0001000823a8(FUN_1012353bc,puVar13);
                  func_0x000100083b20(&uStack_70);
                  func_0x000107c61574(pcVar14);
                  uVar1 = uStack_70;
                  func_0x00010008a7c8(&lStack_68,auStack_78);
                  func_0x000107c61574(uVar1);
                  func_0x000100083b20(&uStack_70);
                  func_0x000107c61574(lStack_68);
                  *(undefined8 *)(lVar3 + _DAT_112d6a5d0) = uStack_70;
                  lStack_88 = lVar3;
                  lStack_80 = lVar4;
                  func_0x000107c61154(&lStack_88,PTR_s_init_1125d9248);
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1012353bc; end: 1012353cf;  */

/* WARNING: Possible PIC construction at 0x0001012347c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012347f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012347e8) */
/* WARNING: Removing unreachable block (ram,0x0001012347d8) */
/* WARNING: Removing unreachable block (ram,0x0001012347c8) */
/* WARNING: Removing unreachable block (ram,0x0001012347f8) */

void FUN_1012353bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_110396a28;
  func_0x000107c613fc(&UNK_110396a28,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112d6a588;
  func_0x0001000285a8(0x112d6a588,&UNK_10d92daf8);
  func_0x000107c613fc();
  uVar9 = 0x101234994;
  func_0x0001000841fc(0x101234994,puVar7,uVar8);
  func_0x000100084214(&UNK_10d92dac0,0x33,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1012353d0; end: 1012353f7; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint begin] */

void FUN_1012353d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101234f18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012353f8; end: 10123543b; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint end] */

void FUN_1012353f8(undefined8 param_1)

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



/* Entry: 10123543c; end: 1012358c7;  */

void FUN_10123543c(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10cfd90)) ||
       (func_0x000107c605b8(0xd000000000000014,0x800000010ef30270,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57590();
    }
    else {
      uVar2 = 0xd000000000000015;
      if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10cfd70)) ||
         (func_0x000107c605b8(0xd000000000000015,0x800000010ef30290,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57ff8();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef10cfd50)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000018,0x800000010ef302b0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef10cfd30)) ||
               (func_0x000107c605b8(0xd000000000000022,0x800000010ef302d0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c581b4();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10cfd00)) ||
                 (func_0x000107c605b8(0xd000000000000012,0x800000010ef30300,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c581c4();
              }
              else {
                uVar2 = 0x655373756c504373;
                if (((param_2 == 0x655373756c504373) && (param_3 == -0x11ff8c9a9c96898e)) ||
                   (func_0x000107c605b8(0x655373756c504373,0xee00736563697672,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5872c();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef10ee6a0)) {
                    uVar2 = 0;
                    func_0x000107c605b8(0xd000000000000018,0x800000010ef11960,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = 0xd000000000000011;
                      if (((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10cfce0)) &&
                         (func_0x000107c605b8(0xd000000000000011,0x800000010ef30320,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "PlusSendFriendBuddyPassScopedFactoryServiceProvider/SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint.swift"
                                            ,0x7e,2,0x4d,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012358c8);
                        (*pcVar1)();
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c58b38();
                      goto LAB_1012354c8;
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c58a40();
                }
              }
            }
            goto LAB_1012354c8;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c581a8();
      }
    }
  }
LAB_1012354c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012358c8; end: 101235973; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint setValue:forIvarName:] */

void FUN_1012358c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10123543c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101235974; end: 101235a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101235974(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d6a600,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a608,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a610,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a618,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a620,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a628,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a630,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a638,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a640,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6a648) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101235a74; end: 101235a93; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint init] */

void FUN_101235a74(void)

{
  FUN_101235974();
  return;
}



/* Entry: 101235a94; end: 101235ac7;  */

void FUN_101235a94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101235ac8; end: 101235ba3; -[SCPlusSendFriendBuddyPassScopedFactoryServiceProviderSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101235ac8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6a600);
  func_0x000107c61610(param_1 + _DAT_112d6a608);
  func_0x000107c61610(param_1 + _DAT_112d6a610);
  func_0x000107c61610(param_1 + _DAT_112d6a618);
  func_0x000107c61610(param_1 + _DAT_112d6a620);
  func_0x000107c61610(param_1 + _DAT_112d6a628);
  func_0x000107c61610(param_1 + _DAT_112d6a630);
  func_0x000107c61610(param_1 + _DAT_112d6a638);
  func_0x000101235b80(param_1 + _DAT_112d6a640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6a648));
  return;
}



/* Entry: 101235ba4; end: 101235bc3;  */

void FUN_101235ba4(void)

{
  func_0x000107c61168(&PTR_PTR_1127bddd8);
  return;
}



/* Entry: 101235bc4; end: 101235da3;  */

void FUN_101235bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6a678,&UNK_10d92dc10);
  puVar1 = &UNK_110396b40;
  func_0x000107c613fc(&UNK_110396b40,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x101235c5c,puVar1);
  return;
}



/* Entry: 101235da4; end: 101236133;  */

void FUN_101235da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6a680,&UNK_10d92dc18);
  puVar1 = &UNK_110396b68;
  func_0x000107c613fc(&UNK_110396b68,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(0x101235e90,puVar1);
  return;
}



/* Entry: 101236134; end: 101236aef;  */

/* WARNING: Possible PIC construction at 0x0001012361ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012361d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123634c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012363c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012364ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012366a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012366f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012367a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012367f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012368bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012368cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012368dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012368ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012368fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101236908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101236944) */
/* WARNING: Removing unreachable block (ram,0x00010123695c) */
/* WARNING: Removing unreachable block (ram,0x000101236a60) */
/* WARNING: Removing unreachable block (ram,0x000101236a50) */
/* WARNING: Removing unreachable block (ram,0x000101236a28) */
/* WARNING: Removing unreachable block (ram,0x000101236aa4) */
/* WARNING: Removing unreachable block (ram,0x000101236a94) */
/* WARNING: Removing unreachable block (ram,0x000101236a84) */
/* WARNING: Removing unreachable block (ram,0x000101236a74) */
/* WARNING: Removing unreachable block (ram,0x000101236900) */
/* WARNING: Removing unreachable block (ram,0x000101236ab0) */
/* WARNING: Removing unreachable block (ram,0x000101236ab8) */
/* WARNING: Removing unreachable block (ram,0x0001012368f0) */
/* WARNING: Removing unreachable block (ram,0x0001012368e0) */
/* WARNING: Removing unreachable block (ram,0x0001012368d0) */
/* WARNING: Removing unreachable block (ram,0x0001012368c0) */
/* WARNING: Removing unreachable block (ram,0x0001012367f4) */
/* WARNING: Removing unreachable block (ram,0x000101236a6c) */
/* WARNING: Removing unreachable block (ram,0x000101236818) */
/* WARNING: Removing unreachable block (ram,0x0001012367a4) */
/* WARNING: Removing unreachable block (ram,0x000101236784) */
/* WARNING: Removing unreachable block (ram,0x000101236718) */
/* WARNING: Removing unreachable block (ram,0x000101236aec) */
/* WARNING: Removing unreachable block (ram,0x000101236750) */
/* WARNING: Removing unreachable block (ram,0x0001012366f8) */
/* WARNING: Removing unreachable block (ram,0x0001012366a8) */
/* WARNING: Removing unreachable block (ram,0x000101236ae8) */
/* WARNING: Removing unreachable block (ram,0x0001012366dc) */
/* WARNING: Removing unreachable block (ram,0x000101236688) */
/* WARNING: Removing unreachable block (ram,0x000101236638) */
/* WARNING: Removing unreachable block (ram,0x000101236ae4) */
/* WARNING: Removing unreachable block (ram,0x00010123666c) */
/* WARNING: Removing unreachable block (ram,0x000101236618) */
/* WARNING: Removing unreachable block (ram,0x000101236584) */
/* WARNING: Removing unreachable block (ram,0x000101236ae0) */
/* WARNING: Removing unreachable block (ram,0x0001012365fc) */
/* WARNING: Removing unreachable block (ram,0x000101236544) */
/* WARNING: Removing unreachable block (ram,0x000101236adc) */
/* WARNING: Removing unreachable block (ram,0x00010123656c) */
/* WARNING: Removing unreachable block (ram,0x00010123652c) */
/* WARNING: Removing unreachable block (ram,0x00010123698c) */
/* WARNING: Removing unreachable block (ram,0x000101236530) */
/* WARNING: Removing unreachable block (ram,0x0001012364f0) */
/* WARNING: Removing unreachable block (ram,0x000101236414) */
/* WARNING: Removing unreachable block (ram,0x0001012363c8) */
/* WARNING: Removing unreachable block (ram,0x00010123641c) */
/* WARNING: Removing unreachable block (ram,0x0001012363e8) */
/* WARNING: Removing unreachable block (ram,0x000101236350) */
/* WARNING: Removing unreachable block (ram,0x000101236304) */
/* WARNING: Removing unreachable block (ram,0x000101236284) */
/* WARNING: Removing unreachable block (ram,0x000101236288) */
/* WARNING: Removing unreachable block (ram,0x00010123693c) */
/* WARNING: Removing unreachable block (ram,0x00010123628c) */
/* WARNING: Removing unreachable block (ram,0x000101236954) */
/* WARNING: Removing unreachable block (ram,0x000101236290) */
/* WARNING: Removing unreachable block (ram,0x000101236264) */
/* WARNING: Removing unreachable block (ram,0x000101236904) */
/* WARNING: Removing unreachable block (ram,0x000101236268) */
/* WARNING: Removing unreachable block (ram,0x000101236228) */
/* WARNING: Removing unreachable block (ram,0x000101236208) */
/* WARNING: Removing unreachable block (ram,0x00010123622c) */
/* WARNING: Removing unreachable block (ram,0x000101236230) */
/* WARNING: Removing unreachable block (ram,0x00010123620c) */
/* WARNING: Removing unreachable block (ram,0x0001012361d4) */
/* WARNING: Removing unreachable block (ram,0x0001012361b0) */
/* WARNING: Removing unreachable block (ram,0x0001012361d8) */
/* WARNING: Removing unreachable block (ram,0x0001012361dc) */
/* WARNING: Removing unreachable block (ram,0x0001012361b4) */
/* WARNING: Removing unreachable block (ram,0x00010123690c) */
/* WARNING: Removing unreachable block (ram,0x000101236918) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101236134(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d6a698);
  func_0x000107c3dae4(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101236af0; end: 101236b53; -[_TtC37PlusSendFriendBuddyPassImplementation37PlusSendFriendBuddyPassViewController viewDidLoad] */

void FUN_101236af0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x000107c53dec();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  FUN_101236134();
  func_0x000107c61170(param_1);
  return;
}


