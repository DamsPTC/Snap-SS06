/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10247178c; end: 1024717d3; -[SCLegacyLiveLensPreviewPageLauncherHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10247178c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c6e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c6f0));
  param_1 = param_1 + _DAT_112e9c6e0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024717d4; end: 1024718db;  */

/* WARNING: Possible PIC construction at 0x000102471858: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024717d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112e9c6f0);
  lVar1 = lVar4;
  func_0x000107c4b6dc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = _DAT_112e9c6e0;
  if (lVar2 != 0) {
    if ((param_1 != 0) && (lVar2 == param_1)) {
      lVar3 = unaff_x20 + _DAT_112e9c6e0;
      func_0x000107c61618();
      if (lVar3 == 0) {
        func_0x000107c61604(unaff_x20 + lVar1,0);
        lVar1 = lVar4;
        func_0x000107c4b6dc();
        func_0x000107c61180();
        lVar3 = lVar1;
        func_0x000107c49f74();
        func_0x000107c61170(lVar1);
        if ((int)lVar3 != 0) {
          func_0x000107c4b6dc(lVar4);
          func_0x000107c61180();
          func_0x000107c4283c();
          func_0x000107c61170(lVar4);
        }
      }
      else {
        func_0x000107c42030();
        lVar2 = lVar3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1024718dc; end: 1024718fb;  */

void FUN_1024718dc(void)

{
  func_0x000107c61168(&PTR_PTR_112843668);
  return;
}



/* Entry: 1024718fc; end: 10247194f; -[SCLegacyLiveLensPreviewPageLauncherHandler dismissCameraScope:] */

/* WARNING: Possible PIC construction at 0x000102471938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247193c) */

void FUN_1024718fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1024717d4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102471950; end: 102471957;  */

void FUN_102471950(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 102471958; end: 1024719a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471958(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9c720) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024719a4; end: 102471a03; -[_TtC35SCLegacyLiveLensPreviewPageLauncher39LegacyLiveLensPreviewPageLauncherPlugin init] */

void FUN_1024719a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLegacyLiveLensPreviewPageLauncher.LegacyLiveLensPreviewPageLauncherPlugin",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024719d0);
  (*pcVar1)();
}



/* Entry: 102471a04; end: 102471a13; -[_TtC35SCLegacyLiveLensPreviewPageLauncher39LegacyLiveLensPreviewPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9c720));
  return;
}



/* Entry: 102471a14; end: 102471aa3; -[_TtC35SCLegacyLiveLensPreviewPageLauncher39LegacyLiveLensPreviewPageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471a14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112e9c720);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102471aa4; end: 102471aa7; -[_TtC35SCLegacyLiveLensPreviewPageLauncher39LegacyLiveLensPreviewPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_102471aa4(void)

{
  return;
}



/* Entry: 102471aa8; end: 102471b27;  */

void FUN_102471aa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_11050d3a0;
  func_0x000107c613fc(&UNK_11050d3a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102471c04,puVar1);
  return;
}



/* Entry: 102471b28; end: 102471c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471b28(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pplVar6 = &plStack_70;
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar1 = 0;
  FUN_1024718dc();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c61614(lVar2 + _DAT_112e9c6e0,0);
  *(undefined8 *)(lVar2 + _DAT_112e9c6e8) = uStack_48;
  *(undefined8 *)(lVar2 + _DAT_112e9c6f0) = uStack_50;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  plVar4 = plVar3;
  FUN_102471c0c();
  plVar5 = plVar4;
  func_0x000107c610f8();
  *(long **)((long)plVar5 + _DAT_112e9c720) = plVar3;
  plStack_70 = plVar5;
  plStack_68 = plVar4;
  func_0x000107c61154(&plStack_70,PTR_s_init_1125d9248);
  *param_1 = pplVar6;
  return;
}



/* Entry: 102471c04; end: 102471c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471c04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long unaff_x20;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pplVar6 = &plStack_70;
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_50);
  lVar1 = 0;
  FUN_1024718dc();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c61614(lVar2 + _DAT_112e9c6e0,0);
  *(undefined8 *)(lVar2 + _DAT_112e9c6e8) = uStack_48;
  *(undefined8 *)(lVar2 + _DAT_112e9c6f0) = uStack_50;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  plVar4 = plVar3;
  FUN_102471c0c();
  plVar5 = plVar4;
  func_0x000107c610f8();
  *(long **)((long)plVar5 + _DAT_112e9c720) = plVar3;
  plStack_70 = plVar5;
  plStack_68 = plVar4;
  func_0x000107c61154(&plStack_70,PTR_s_init_1125d9248);
  *param_1 = pplVar6;
  return;
}



/* Entry: 102471c0c; end: 102471c2b;  */

void FUN_102471c0c(void)

{
  func_0x000107c61168(&PTR_PTR_112843738);
  return;
}



/* Entry: 102471c2c; end: 102471c5b;  */

undefined1  [16] FUN_102471c2c(void)

{
  return ZEXT816(0x11050d3c8);
}



/* Entry: 102471c5c; end: 102471d1b; -[_TtC28ComposerSearchV2ServicesImpl35ComposerSearchV2PageLauncherFactory searchPageLauncherWithPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112e9c760);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112e9c768);
  lVar3 = 0;
  FUN_102472020();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112e9c7a8;
  func_0x000107c61614(lVar4 + _DAT_112e9c7a8,0);
  *(undefined8 *)(lVar4 + _DAT_112e9c798) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112e9c7a0) = uVar6;
  func_0x000107c61604(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61154(&lStack_50,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102471d1c; end: 102471d7b; -[_TtC28ComposerSearchV2ServicesImpl35ComposerSearchV2PageLauncherFactory init] */

void FUN_102471d1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSearchV2ServicesImpl.ComposerSearchV2PageLauncherFactory",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102471d48);
  (*pcVar1)();
}



/* Entry: 102471d7c; end: 102471db3; -[_TtC28ComposerSearchV2ServicesImpl35ComposerSearchV2PageLauncherFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102471d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102471d9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9c760));
  return;
}



/* Entry: 102471db4; end: 102471dd3;  */

void FUN_102471db4(void)

{
  func_0x000107c61168(&PTR_PTR_1128437f8);
  return;
}



/* Entry: 102471dd4; end: 102471ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471dd4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112e9c7a8;
    func_0x000107c61618();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b5f80;
      func_0x000107c610f8(PTR_PTR_1126b5f80);
      func_0x000107c4807c();
      lVar3 = *(long *)(param_1 + _DAT_112e9c7a0);
      func_0x000107c3edac(lVar3);
      func_0x000107c61180();
      func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112e9c798));
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(puVar2);
      param_1 = lVar3;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102471ec0; end: 102471ee7; -[_TtC28ComposerSearchV2ServicesImpl34ComposerSearchV2SearchPageLauncher launchWithFlavorContext:] */

void FUN_102471ec0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102472040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102471ee8; end: 102471ef3; -[_TtC28ComposerSearchV2ServicesImpl34ComposerSearchV2SearchPageLauncher pushToValdiMarshaller:] */

undefined8 FUN_102471ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af9b828(param_3,param_1);
  func_0x00010af9b820();
  func_0x00010af9b7f8();
  func_0x00010af9b808();
  return param_3;
}



/* Entry: 102471ef4; end: 102471f77; -[_TtC28ComposerSearchV2ServicesImpl34ComposerSearchV2SearchPageLauncher searchWorkflowDidEnd] */

/* WARNING: Possible PIC construction at 0x000102471f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102471f4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102471f34) */
/* WARNING: Removing unreachable block (ram,0x000102471f50) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471ef4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102471f78; end: 102471fd7; -[_TtC28ComposerSearchV2ServicesImpl34ComposerSearchV2SearchPageLauncher init] */

void FUN_102471f78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSearchV2ServicesImpl.ComposerSearchV2SearchPageLauncher",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102471fa4);
  (*pcVar1)();
}



/* Entry: 102471fd8; end: 10247201f; -[_TtC28ComposerSearchV2ServicesImpl34ComposerSearchV2SearchPageLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102471fd8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c798));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c7a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112e9c7a8);
  return;
}



/* Entry: 102472020; end: 10247203f;  */

void FUN_102472020(void)

{
  func_0x000107c61168(&PTR_PTR_1128438c0);
  return;
}



/* Entry: 102472040; end: 10247210b;  */

void FUN_102472040(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "launch(with:)";
  func_0x0001000c10c0("launch(with:)");
  func_0x000107c61180();
  puVar2 = &UNK_11050d550;
  func_0x000107c613fc(&UNK_11050d550,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_10247210c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11050d568;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10247210c; end: 10247212f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247210c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112e9c7a8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126b5f80;
      func_0x000107c610f8(PTR_PTR_1126b5f80);
      func_0x000107c4807c();
      lVar4 = *(long *)(lVar1 + _DAT_112e9c7a0);
      func_0x000107c3edac(lVar4);
      func_0x000107c61180();
      func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112e9c798));
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar3);
      lVar1 = lVar4;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102472130; end: 1024721a3;  */

void FUN_102472130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1024721a4; end: 102472227;  */

void FUN_1024721a4(void)

{
  code *pcVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112e9c7d8,&UNK_10daaa860);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_1024722ac;
  func_0x0001000bdd8c(FUN_1024722ac);
  pcVar2 = pcVar1;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar1);
  func_0x000100356c9c(0);
  func_0x000107c610f8();
  func_0x00010247248c(pcVar2);
  return;
}



/* Entry: 102472228; end: 1024722ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102472228(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = 0;
  FUN_102471db4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e9c760) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112e9c768) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1024722ac; end: 1024722b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024722ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_102471db4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e9c760) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112e9c768) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1024722b4; end: 1024722cf;  */

/* WARNING: Possible PIC construction at 0x0001024722c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024722c4) */

void FUN_1024722b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024722d0; end: 10247231b;  */

void FUN_1024722d0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10247231c; end: 102472397;  */

void FUN_10247231c(undefined8 param_1)

{
  if (lRam0000000112e9c808 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6da564);
  return;
}



/* Entry: 102472398; end: 10247242b;  */

void FUN_102472398(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112e9c7d8,&UNK_10daaa860);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_10247242c;
  func_0x0001000bdd8c();
  pcVar2 = pcVar1;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar1);
  func_0x000100356c9c(0);
  func_0x000107c610f8();
  func_0x00010247248c();
  *param_1 = pcVar2;
  return;
}



/* Entry: 10247242c; end: 10247242f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247242c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_102471db4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e9c760) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112e9c768) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102472430; end: 10247243f; -[ComposerSearchV2Services searchPageLauncherFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102472430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e9c8b8));
  return;
}



/* Entry: 102472440; end: 1024724d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102472440(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9c8b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024724d8; end: 10247252f; -[ComposerSearchV2Services initWithSearchPageLauncherFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024724d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e9c8b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102472530; end: 102472563;  */

void FUN_102472530(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102472564; end: 102472573; -[ComposerSearchV2Services .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102472564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9c8b8));
  return;
}



/* Entry: 102472574; end: 102472663;  */

void FUN_102472574(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_10247267c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1024726a0;
  puStack_58 = &UNK_11050d6f8;
  uStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  uVar3 = uStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000ad7c4();
  uVar3 = 0;
  func_0x00010033d098(0);
  func_0x000107c610f8();
  func_0x0001039351d4(puVar1,ppuVar2,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 102472664; end: 10247267b;  */

void FUN_102472664(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720,*(undefined8 *)(unaff_x20 + 0x18));
  pcStack_50 = FUN_10247267c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1024726a0;
  puStack_58 = &UNK_11050d6f8;
  uStack_48 = uVar4;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000ad7c4();
  uVar4 = 0;
  func_0x00010033d098(0);
  func_0x000107c610f8();
  func_0x0001039351d4(puVar2,ppuVar3,uVar4);
  *param_1 = puVar2;
  return;
}



/* Entry: 10247267c; end: 10247269f;  */

undefined8 FUN_10247267c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1024726a0; end: 1024726d7;  */

void FUN_1024726a0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1024726d8; end: 1024726f3;  */

void FUN_1024726d8(long param_1,long param_2)

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



/* Entry: 1024726f4; end: 102472783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024726f4(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar3 = *(long *)(lStack_38 + _DAT_11307edc0);
  lVar1 = lVar3;
  func_0x000107c61174(lVar3);
  func_0x000107c61170(lStack_38);
  if (lVar3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b6500;
    func_0x000107c610f8();
    func_0x000107c48a54();
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 102472784; end: 10247279b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102472784(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar3 = *(long *)(lStack_38 + _DAT_11307edc0);
  lVar1 = lVar3;
  func_0x000107c61174(lVar3);
  func_0x000107c61170(lStack_38);
  if (lVar3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b6500;
    func_0x000107c610f8();
    func_0x000107c48a54();
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 10247279c; end: 10247281f;  */

void FUN_10247279c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c5bf44();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b6420;
    func_0x000107c610f8();
    func_0x000107c48a40();
    func_0x000107c61170(lVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102472820);
  (*pcVar1)();
}



/* Entry: 102472820; end: 102472837;  */

void FUN_102472820(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c5bf44();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b6420;
    func_0x000107c610f8();
    func_0x000107c48a40();
    func_0x000107c61170(lVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102472820);
  (*pcVar1)();
}



/* Entry: 102472838; end: 1024728a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102472838(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102472c2c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9c908) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024728a4; end: 10247290f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024728a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9c908) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102472910; end: 10247296f; -[_TtC48CreatorsProfileImageScopedFactoryServiceProvider36SCCreatorsProfileImageScopedServices init] */

void FUN_102472910(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsProfileImageScopedFactoryServiceProvider.SCCreatorsProfileImageScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10247293c);
  (*pcVar1)();
}



/* Entry: 102472970; end: 10247297f; -[_TtC48CreatorsProfileImageScopedFactoryServiceProvider36SCCreatorsProfileImageScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102472970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9c908));
  return;
}



/* Entry: 102472980; end: 1024729eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102472980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11050d928;
  func_0x000107c613fc(&UNK_11050d928,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102472cc4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1024729ec; end: 102472a87;  */

void FUN_1024729ec(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11050d838;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11050d838;
  return;
}



/* Entry: 102472a88; end: 102472abf;  */

void FUN_102472a88(long *param_1)

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



/* Entry: 102472ac0; end: 102472ac7;  */

undefined8 FUN_102472ac0(void)

{
  return 0x1b;
}



/* Entry: 102472ac8; end: 102472bfb;  */

void FUN_102472ac8(undefined8 *param_1)

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
  puVar1 = &UNK_11050d950;
  func_0x000107c613fc(&UNK_11050d950,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102472c9c;
  func_0x00010058fa64(FUN_102472c9c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102472bfc; end: 102472c2b;  */

undefined ** FUN_102472bfc(void)

{
  return &PTR_DAT_112ff2cf0;
}



/* Entry: 102472c2c; end: 102472c4b;  */

void FUN_102472c2c(void)

{
  func_0x000107c61168(&PTR_PTR_112843a50);
  return;
}



/* Entry: 102472c4c; end: 102472c9b;  */

undefined1  [16] FUN_102472c4c(void)

{
  return ZEXT816(0x11050d888);
}



/* Entry: 102472c9c; end: 102472cc3;  */

void FUN_102472c9c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102472cc4; end: 102472cc7;  */

void FUN_102472cc4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102472cc8; end: 102472d87;  */

/* WARNING: Possible PIC construction at 0x000102472d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102472d68) */

void FUN_102472cc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11050d9d8;
  func_0x000107c613fc(&UNK_11050d9d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112e9c978;
  func_0x0001000285a8(0x112e9c978,&UNK_10daaac38);
  func_0x000107c613fc();
  pcVar3 = FUN_1024730f0;
  func_0x0001000841fc(FUN_1024730f0,puVar1,uVar2);
  func_0x000100084214(&UNK_10daaac00,0x32,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102472d88; end: 102472da3;  */

/* WARNING: Possible PIC construction at 0x000102472d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102472d68) */

void FUN_102472d88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11050d9d8;
  func_0x000107c613fc(&UNK_11050d9d8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112e9c978;
  func_0x0001000285a8(0x112e9c978,&UNK_10daaac38);
  func_0x000107c613fc();
  pcVar4 = FUN_1024730f0;
  func_0x0001000841fc(FUN_1024730f0,puVar2,uVar3);
  func_0x000100084214(&UNK_10daaac00,0x32,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102472da4; end: 1024730bb;  */

void FUN_102472da4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e9c980,&UNK_10daaac40);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1024740dc();
  func_0x000100082720("CreatorsProfileImageScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e9c988,&UNK_10daaac50);
  puVar3 = &UNK_11050da00;
  func_0x000107c613fc(&UNK_11050da00,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x1024730fc;
  func_0x0001000823a8(0x1024730fc,puVar3);
  func_0x000100082720("SCCreatorsProfileImageEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102472a88;
  func_0x0001000823a8(FUN_102472a88,0);
  func_0x000100082720("SCCreatorsProfileImageScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e9c990,&UNK_10daaac48);
  puVar3 = &UNK_11050da28;
  func_0x000107c613fc(&UNK_11050da28,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_102473144;
  func_0x0001000823a8(FUN_102473144,puVar3);
  func_0x000100082720("SCCreatorsProfileImageScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e9c910,&UNK_10daaa9a0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102473150;
  func_0x0001000823a8(0x102473150,pcVar5);
  func_0x000100082720("SCCreatorsProfileImageScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e9c900,&UNK_10daaa990);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102473158;
  func_0x0001000823a8(0x102473158,uVar6);
  func_0x000100082720("SCCreatorsProfileImageScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11050da50;
  func_0x000107c613fc(&UNK_11050da50,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102473160;
  func_0x0001000823a8(0x102473160,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCCreatorsProfileImageScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1024730bc; end: 1024730ef;  */

void FUN_1024730bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024730f0; end: 102473107;  */

void FUN_1024730f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e9c980,&UNK_10daaac40);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1024740dc();
  func_0x000100082720("CreatorsProfileImageScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e9c988,&UNK_10daaac50);
  puVar3 = &UNK_11050da00;
  func_0x000107c613fc(&UNK_11050da00,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x1024730fc;
  func_0x0001000823a8(0x1024730fc,puVar3);
  func_0x000100082720("SCCreatorsProfileImageEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102472a88;
  func_0x0001000823a8(FUN_102472a88,0);
  func_0x000100082720("SCCreatorsProfileImageScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e9c990,&UNK_10daaac48);
  puVar3 = &UNK_11050da28;
  func_0x000107c613fc(&UNK_11050da28,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_102473144;
  func_0x0001000823a8(FUN_102473144,puVar3);
  func_0x000100082720("SCCreatorsProfileImageScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e9c910,&UNK_10daaa9a0);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x102473150;
  func_0x0001000823a8(0x102473150,pcVar6);
  func_0x000100082720("SCCreatorsProfileImageScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e9c900,&UNK_10daaa990);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102473158;
  func_0x0001000823a8(0x102473158,uVar7);
  func_0x000100082720("SCCreatorsProfileImageScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11050da50;
  func_0x000107c613fc(&UNK_11050da50,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x102473160;
  func_0x0001000823a8(0x102473160,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCCreatorsProfileImageScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 102473108; end: 102473143;  */

void FUN_102473108(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102473144; end: 102473167;  */

void FUN_102473144(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102473898(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCCreatorsProfileImageScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102473168; end: 1024733fb;  */

void FUN_102473168(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_1024737e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126aa8c0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f09ff30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1024733fc; end: 102473483;  */

undefined8
FUN_1024733fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1024735b0(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 102473484; end: 1024734bf;  */

void FUN_102473484(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024734c0; end: 1024734c7;  */

undefined8 FUN_1024734c0(void)

{
  return 0x1b;
}



/* Entry: 1024734c8; end: 10247354b;  */

void FUN_1024734c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102473828,param_2,FUN_10247382c,param_2,FUN_102473854,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10247354c; end: 10247359b;  */

undefined8 FUN_10247354c(void)

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



/* Entry: 10247359c; end: 1024735af;  */

void FUN_10247359c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11050da68;
  return;
}



/* Entry: 1024735b0; end: 1024737cb;  */

void FUN_1024735b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126aa8c0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f09ff30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024737cc; end: 1024737e7;  */

undefined ** FUN_1024737cc(void)

{
  return &PTR_DAT_112ff2cf0;
}



/* Entry: 1024737e8; end: 102473807;  */

void FUN_1024737e8(void)

{
  func_0x000107c61168(&PTR_PTR_112e9ca00);
  return;
}



/* Entry: 102473808; end: 10247382b;  */

undefined1  [16] FUN_102473808(void)

{
  return ZEXT816(0x11050daa8);
}



/* Entry: 10247382c; end: 102473853;  */

void FUN_10247382c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102473854; end: 10247385b;  */

undefined8 FUN_102473854(void)

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



/* Entry: 10247385c; end: 102473897;  */

void FUN_10247385c(undefined8 *param_1,undefined8 param_2)

{
  FUN_102473898();
  func_0x0001000a7f38("SCCreatorsProfileImageScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 102473898; end: 102473a83;  */

void FUN_102473898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106df388;
  ppuVar4 = &PTR_DAT_112ff2cf0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11050daf8;
  func_0x000107c613fc(&UNK_11050daf8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e9ca78;
  func_0x0001000285a8(0x112e9ca78,&UNK_10daaadb0);
  func_0x0001000a6ee8(&UNK_11050dcb0,
                      "CreatorsProfileImageScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_102473a84,puVar2,uVar3,&UNK_11050dcb0,&PTR_DAT_112e9cb08);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11050daa8,
                      "SCCreatorsProfileImageEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_102473b38,param_3,uVar3,&UNK_11050daa8,&PTR_DAT_112e9c998);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11050db20;
  func_0x000107c613fc(&UNK_11050db20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11050d8c8,
                      "SCCreatorsProfileImageScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_102473be8,puVar2,uVar3,&UNK_11050d8c8,&PTR_DAT_112e9c918);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e9ca80;
  func_0x0001000285a8(0x112e9ca80,&UNK_10daaadb8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102473a84; end: 102473ac3;  */

void FUN_102473a84(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024741c0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CreatorsProfileImageScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 102473ac4; end: 102473b37;  */

void FUN_102473ac4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102473c24;
  func_0x0001000823a8(0x102473c24,param_3);
  func_0x000100082720("SCCreatorsProfileImageEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102473b38; end: 102473b3f;  */

void FUN_102473b38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102473c24;
  func_0x0001000823a8();
  func_0x000100082720("SCCreatorsProfileImageEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102473b40; end: 102473be7;  */

void FUN_102473b40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050db48;
  func_0x000107c613fc(&UNK_11050db48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102473c1c;
  func_0x0001000823a8(FUN_102473c1c,puVar1);
  func_0x000100082720("SCCreatorsProfileImageScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 102473be8; end: 102473bef;  */

void FUN_102473be8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11050db48;
  func_0x000107c613fc(&UNK_11050db48,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102473c1c;
  func_0x0001000823a8(FUN_102473c1c,puVar3);
  func_0x000100082720("SCCreatorsProfileImageScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 102473bf0; end: 102473c1b;  */

void FUN_102473bf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102473c1c; end: 102473c2b;  */

void FUN_102473c1c(undefined8 *param_1)

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
  puVar1 = &UNK_11050d950;
  func_0x000107c613fc(&UNK_11050d950,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102472c9c;
  func_0x00010058fa64(FUN_102472c9c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102473c2c; end: 102473cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102473c2c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102473fec();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e9ca88) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e9ca90) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102473cb4);
  (*pcVar1)();
}



/* Entry: 102473cb4; end: 102473d13; -[_TtC36CreatorsProfileImageScopeGraphBridge51CreatorsProfileImageScopeGraphBridgeSaberEntryPoint init] */

void FUN_102473cb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsProfileImageScopeGraphBridge.CreatorsProfileImageScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102473ce0);
  (*pcVar1)();
}



/* Entry: 102473d14; end: 102473d4b; -[_TtC36CreatorsProfileImageScopeGraphBridge51CreatorsProfileImageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102473d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102473d34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102473d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9ca88));
  return;
}



/* Entry: 102473d4c; end: 102473d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102473d4c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9ca90),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9ca88));
  return;
}



/* Entry: 102473d74; end: 102473d93;  */

void FUN_102473d74(void)

{
  func_0x000107c61168(&PTR_PTR_112843b10);
  return;
}



/* Entry: 102473d94; end: 102473e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102473d94(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9cac0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9cac8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102473e1c);
  (*pcVar2)();
}


