/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037c5904; end: 1037c5937; -[SCSponsoredLensLaunchServicesSaberServiceProvider __safeProvide] */

void FUN_1037c5904(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037c57e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c5938; end: 1037c597b; -[SCSponsoredLensLaunchServicesSaberServiceProvider end] */

void FUN_1037c5938(undefined8 param_1)

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



/* Entry: 1037c597c; end: 1037c5b13;  */

void FUN_1037c597c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e97100)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f168f00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AradsUserNavigationScopeGraphBridge/SCSponsoredLensLaunchServicesSaberServiceProvider.swift"
                            ,0x5b,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c5b14);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c528bc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037c5b14; end: 1037c5bbf; -[SCSponsoredLensLaunchServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037c5b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037c597c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037c5bc0; end: 1037c5c33; -[SCSponsoredLensLaunchServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5bc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f95e20,0);
  func_0x000107c61614(param_1 + _DAT_112f95e28,0);
  *(undefined8 *)(param_1 + _DAT_112f95e30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c5c34; end: 1037c5c67;  */

void FUN_1037c5c34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c5c68; end: 1037c5caf; -[SCSponsoredLensLaunchServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5c68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f95e20);
  func_0x000107c61610(param_1 + _DAT_112f95e28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f95e30));
  return;
}



/* Entry: 1037c5cb0; end: 1037c5ccf;  */

void FUN_1037c5cb0(void)

{
  func_0x000107c61168(&PTR_PTR_112f95e78);
  return;
}



/* Entry: 1037c5cd0; end: 1037c5ce3;  */

bool FUN_1037c5cd0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1037c5ce4; end: 1037c5d8f;  */

void FUN_1037c5ce4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037c5d90; end: 1037c5db7;  */

void FUN_1037c5d90(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1037c5db8; end: 1037c5e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5db8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f95ee8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f95ef0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f95ee0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c5e80; end: 1037c5edf; -[SCSponsoredLensLaunchParams init] */

void FUN_1037c5e80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensLaunchScopeAPI.SponsoredLensLaunchParams",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c5eac);
  (*pcVar1)();
}



/* Entry: 1037c5ee0; end: 1037c5f17; -[SCSponsoredLensLaunchParams .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c5efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c5f00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5ee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95ee8));
  return;
}



/* Entry: 1037c5f18; end: 1037c5f1b;  */

void FUN_1037c5f18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f95ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0eb90;
  func_0x000107c61520(&UNK_10dc0eb90,&UNK_110696538);
  puRam0000000112f95ef8 = puVar1;
  return;
}



/* Entry: 1037c5f1c; end: 1037c5f5b;  */

void FUN_1037c5f1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f95ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0eb90;
  func_0x000107c61520(&UNK_10dc0eb90,&UNK_110696538);
  puRam0000000112f95ef8 = puVar1;
  return;
}



/* Entry: 1037c5f5c; end: 1037c5f6b;  */

undefined1  [16] FUN_1037c5f5c(void)

{
  return ZEXT816(0x110696538);
}



/* Entry: 1037c5f6c; end: 1037c5f8b;  */

void FUN_1037c5f6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ed1f0);
  return;
}



/* Entry: 1037c5f8c; end: 1037c5fb7; -[SponsoredLensLaunchScope init] */

void FUN_1037c5f8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensLaunchScopeAPI.SponsoredLensLaunchScope",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c5fb8);
  (*pcVar1)();
}



/* Entry: 1037c5fb8; end: 1037c5fbb;  */

void FUN_1037c5fb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c5fbc; end: 1037c5ff3; -[SponsoredLensLaunchScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5fbc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f95f28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95f38));
  return;
}



/* Entry: 1037c5ff4; end: 1037c605f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5ff4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100372540();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f95f48) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1037c6060; end: 1037c6067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c6060(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100372540();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f95f48) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1037c6068; end: 1037c60b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c6068(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f95f48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c60b4; end: 1037c6187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1037c60b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_68 [2];
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x0001003724d4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f95f28) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112f95f30) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f95f38) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1);
  aplStack_68[0] = plVar4;
  func_0x00010008a7c8(&uStack_58,aplStack_68);
  func_0x000100083b20(aplStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c615e8(aplStack_68[0]);
  return plVar4;
}



/* Entry: 1037c6188; end: 1037c620f; -[_TtC27SponsoredLensLaunchScopeAPI32SponsoredLensLaunchScopeServices buildWithUiContainer:params:snapSource:] */

void FUN_1037c6188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1037c60b4(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c6210; end: 1037c626f; -[_TtC27SponsoredLensLaunchScopeAPI32SponsoredLensLaunchScopeServices init] */

void FUN_1037c6210(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensLaunchScopeAPI.SponsoredLensLaunchScopeServices",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c623c);
  (*pcVar1)();
}



/* Entry: 1037c6270; end: 1037c62a3; -[_TtC27SponsoredLensLaunchScopeAPI32SponsoredLensLaunchScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c6270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f95f48));
  return;
}



/* Entry: 1037c62a4; end: 1037c62c3; -[_TtC27SponsoredLensLaunchScopeAPI27SponsoredLensLaunchServices launcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c62a4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f95fb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c62c4; end: 1037c62d3; -[_TtC27SponsoredLensLaunchScopeAPI27SponsoredLensLaunchServices sponsoredLensLaunchScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c62c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f95fc0));
  return;
}



/* Entry: 1037c62d4; end: 1037c639b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c62d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f95fb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f95fc0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c639c; end: 1037c63fb; -[_TtC27SponsoredLensLaunchScopeAPI27SponsoredLensLaunchServices init] */

void FUN_1037c639c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensLaunchScopeAPI.SponsoredLensLaunchServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c63c8);
  (*pcVar1)();
}



/* Entry: 1037c63fc; end: 1037c6433; -[_TtC27SponsoredLensLaunchScopeAPI27SponsoredLensLaunchServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c63fc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f95fb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95fc0));
  return;
}



/* Entry: 1037c6434; end: 1037c69b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1037c6434(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c610f8();
  lVar7 = _DAT_11380bb50;
  func_0x000107c61614(unaff_x20 + _DAT_11380bb50,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bb58);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(unaff_x20 + _DAT_11380bb68,0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11380bb70);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_11380bb78);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_11380bb88);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f95ff0) = param_1;
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112f95ff8);
  uVar9 = param_2[8];
  uVar13 = param_2[0xb];
  uVar12 = param_2[10];
  puVar5[9] = param_2[9];
  puVar5[8] = uVar9;
  puVar5[0xb] = uVar13;
  puVar5[10] = uVar12;
  uVar9 = param_2[0xc];
  puVar5[0xd] = param_2[0xd];
  puVar5[0xc] = uVar9;
  uVar9 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  puVar5[1] = param_2[1];
  *puVar5 = uVar9;
  puVar5[3] = uVar13;
  puVar5[2] = uVar12;
  uVar13 = param_2[4];
  uVar12 = param_2[7];
  uVar9 = param_2[6];
  puVar5[5] = param_2[5];
  puVar5[4] = uVar13;
  puVar5[7] = uVar12;
  puVar5[6] = uVar9;
  func_0x000107c61428(unaff_x20 + lVar7,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar7,param_3);
  lVar7 = _DAT_11380bb48;
  lVar8 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar8 + -8);
  (**(code **)(lVar11 + 0x10))(unaff_x20 + lVar7,param_4,lVar8);
  func_0x000107c61428(puVar1,auStack_98,1,0);
  uVar9 = *puVar1;
  uVar12 = puVar1[1];
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_7);
  func_0x000100e3c674(uVar9,uVar12);
  *(undefined1 *)(unaff_x20 + _DAT_11380bb60) = param_5;
  func_0x000107c61428(puVar2,auStack_b0,1,0);
  uVar9 = *puVar2;
  uVar13 = puVar2[1];
  uVar12 = puVar2[2];
  uVar6 = puVar2[3];
  *puVar2 = param_8;
  puVar2[2] = param_10;
  puVar2[1] = param_9;
  puVar2[3] = param_11;
  FUN_1030bb6f8(uVar9,uVar13,uVar12,uVar6);
  func_0x000107c61428(puVar3,auStack_c8,1,0);
  uVar9 = puVar3[1];
  *puVar3 = param_12;
  puVar3[1] = param_13;
  func_0x000107c6142c(uVar9);
  *(undefined1 *)(unaff_x20 + _DAT_11380bb80) = param_14;
  func_0x000107c61428(puVar4,auStack_e0,1,0);
  uVar9 = puVar4[1];
  *puVar4 = param_16;
  puVar4[1] = param_17;
  func_0x000107c6142c(uVar9);
  puVar10 = auStack_f0;
  func_0x000107c61154(puVar10,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_7);
  func_0x000107c615e8(param_3);
  (**(code **)(lVar11 + 8))(param_4,lVar8);
  return puVar10;
}



/* Entry: 1037c69b8; end: 1037c6a17; -[SCSponsoredLensNorthstarParams init] */

void FUN_1037c69b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensLaunchScopeAPI.SponsoredLensNorthstarParams",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c69e4);
  (*pcVar1)();
}



/* Entry: 1037c6a18; end: 1037c6b17; -[SCSponsoredLensNorthstarParams .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c6a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c6a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c6af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c6a6c) */
/* WARNING: Removing unreachable block (ram,0x0001037c6a5c) */
/* WARNING: Removing unreachable block (ram,0x0001037c6af8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c6a18(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f95ff0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f95ff8 + 8))
  ;
  return;
}



/* Entry: 1037c6b18; end: 1037c6b3b;  */

undefined8 FUN_1037c6b18(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1037c6b3c; end: 1037c6b43;  */

void FUN_1037c6b3c(void)

{
  if (lRam0000000112f96028 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e77e2f8);
  return;
}



/* Entry: 1037c6b44; end: 1037c6b7b;  */

void FUN_1037c6b44(undefined8 param_1)

{
  if (lRam0000000112f96028 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77e2f8);
  return;
}



/* Entry: 1037c6b7c; end: 1037c6c2f;  */

void FUN_1037c6b7c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_78 = PTR___sBOWV_11034d658 + 0x40;
  puStack_70 = &UNK_10dc0edc0;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10dc0edd8;
    puStack_58 = &UNK_10dc0edf0;
    puStack_50 = &UNK_10dc0ee08;
    puStack_48 = &UNK_10dc0edd8;
    puStack_40 = &UNK_10dc0ee20;
    puStack_38 = &UNK_10dc0edf0;
    puStack_30 = &UNK_10dc0ee08;
    puStack_28 = &UNK_10dc0edf0;
    func_0x000107c61630(param_1,0x100,0xb,&puStack_78,param_1 + 0x50);
  }
  return;
}



/* Entry: 1037c6c30; end: 1037c6e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1037c6c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar4 = auStack_a0;
  func_0x000107c610f8();
  lVar2 = _DAT_112f96048;
  func_0x000107c61614(unaff_x20 + _DAT_112f96048,0);
  lVar3 = _DAT_112f96050;
  *(undefined8 *)(unaff_x20 + _DAT_112f96050) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f96038) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f96040);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = param_5;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  func_0x000107c61170(uVar5);
  func_0x000107c61154(auStack_a0,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  return puVar4;
}



/* Entry: 1037c6e88; end: 1037c6ee7; -[SCSponsoredLensVideoToArParams init] */

void FUN_1037c6e88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensLaunchScopeAPI.SponsoredLensVideoToArParams",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c6eb4);
  (*pcVar1)();
}



/* Entry: 1037c6ee8; end: 1037c6f43; -[SCSponsoredLensVideoToArParams .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c6f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c6f08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c6ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f96038));
  return;
}



/* Entry: 1037c6f44; end: 1037c6f63;  */

void FUN_1037c6f44(void)

{
  func_0x000107c61168(&PTR_PTR_1128ed630);
  return;
}



/* Entry: 1037c6f64; end: 1037c6f7f;  */

bool FUN_1037c6f64(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1037c6f80; end: 1037c7197;  */

void FUN_1037c6f80(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x800000010f1538a0;
  uVar7 = 0xd000000000000014;
  if (param_1 != 4) {
    uVar1 = 0xed00006174635f74;
    uVar7 = 0x6e65697069636572;
  }
  uVar2 = 0x800000010f1538c0;
  uVar5 = 0xd000000000000013;
  if (param_1 != 3) {
    uVar2 = uVar1;
    uVar5 = uVar7;
  }
  uVar7 = 0xd00000000000001f;
  pcVar3 = "talk_carousel_sponsored_lens";
  if (param_1 != 1) {
    uVar7 = 0xd00000000000001c;
    pcVar3 = "selfie_settings_cta";
  }
  pcVar4 = "preview_carousel_sponsored_lens";
  uVar6 = 0xd00000000000001c;
  if (param_1 != 0) {
    pcVar4 = pcVar3;
    uVar6 = uVar7;
  }
  if (param_1 < 3) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037c7198; end: 1037c719f;  */

void FUN_1037c7198(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x800000010f1538a0;
  uVar8 = 0xd000000000000014;
  if (bVar3 != 4) {
    uVar1 = 0xed00006174635f74;
    uVar8 = 0x6e65697069636572;
  }
  uVar2 = 0x800000010f1538c0;
  uVar6 = 0xd000000000000013;
  if (bVar3 != 3) {
    uVar2 = uVar1;
    uVar6 = uVar8;
  }
  uVar8 = 0xd00000000000001f;
  pcVar4 = "talk_carousel_sponsored_lens";
  if (bVar3 != 1) {
    uVar8 = 0xd00000000000001c;
    pcVar4 = "selfie_settings_cta";
  }
  pcVar5 = "preview_carousel_sponsored_lens";
  uVar7 = 0xd00000000000001c;
  if (bVar3 != 0) {
    pcVar5 = pcVar4;
    uVar7 = uVar8;
  }
  if (bVar3 < 3) {
    uVar2 = (ulong)pcVar5 | 0x8000000000000000;
    uVar6 = uVar7;
  }
  func_0x000107c5fb58(auStack_68,uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037c71a0; end: 1037c72e7;  */

void FUN_1037c71a0(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x800000010f1538a0;
  uVar7 = 0xd000000000000014;
  if (param_2 != 4) {
    uVar1 = 0xed00006174635f74;
    uVar7 = 0x6e65697069636572;
  }
  uVar2 = 0x800000010f1538c0;
  uVar5 = 0xd000000000000013;
  if (param_2 != 3) {
    uVar2 = uVar1;
    uVar5 = uVar7;
  }
  uVar7 = 0xd00000000000001f;
  pcVar3 = "talk_carousel_sponsored_lens";
  if (param_2 != 1) {
    uVar7 = 0xd00000000000001c;
    pcVar3 = "selfie_settings_cta";
  }
  pcVar4 = "preview_carousel_sponsored_lens";
  uVar6 = 0xd00000000000001c;
  if (param_2 != 0) {
    pcVar4 = pcVar3;
    uVar6 = uVar7;
  }
  if (param_2 < 3) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037c72e8; end: 1037c73c3;  */

void FUN_1037c72e8(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar1 = 0x800000010f1538a0;
  uVar8 = 0xd000000000000014;
  if (bVar3 != 4) {
    uVar1 = 0xed00006174635f74;
    uVar8 = 0x6e65697069636572;
  }
  uVar2 = 0x800000010f1538c0;
  uVar6 = 0xd000000000000013;
  if (bVar3 != 3) {
    uVar2 = uVar1;
    uVar6 = uVar8;
  }
  uVar8 = 0xd00000000000001f;
  pcVar4 = "talk_carousel_sponsored_lens";
  if (bVar3 != 1) {
    uVar8 = 0xd00000000000001c;
    pcVar4 = "selfie_settings_cta";
  }
  pcVar5 = "preview_carousel_sponsored_lens";
  uVar7 = 0xd00000000000001c;
  if (bVar3 != 0) {
    pcVar5 = pcVar4;
    uVar7 = uVar8;
  }
  if (bVar3 < 3) {
    uVar2 = (ulong)pcVar5 | 0x8000000000000000;
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1037c73c4; end: 1037c7427;  */

ulong FUN_1037c73c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 1037c7428; end: 1037c742b;  */

void FUN_1037c7428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f96080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ee60;
  func_0x000107c61520(&UNK_10dc0ee60,&UNK_110696720);
  puRam0000000112f96080 = puVar1;
  return;
}



/* Entry: 1037c742c; end: 1037c746b;  */

void FUN_1037c742c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f96080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ee60;
  func_0x000107c61520(&UNK_10dc0ee60,&UNK_110696720);
  puRam0000000112f96080 = puVar1;
  return;
}



/* Entry: 1037c746c; end: 1037c75e7;  */

int FUN_1037c746c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1037c74e8;
        goto LAB_1037c74cc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1037c74cc:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1037c74e8:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1037c75e8; end: 1037c7627;  */

void FUN_1037c75e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f96140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ef40;
  func_0x000107c61520(&UNK_10dc0ef40,&UNK_110696798);
  puRam0000000112f96140 = puVar1;
  return;
}



/* Entry: 1037c7628; end: 1037c76d3;  */

void FUN_1037c7628(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037c76d4; end: 1037c76fb;  */

void FUN_1037c76d4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1037c76fc; end: 1037c7733;  */

void FUN_1037c76fc(undefined8 param_1)

{
  if (lRam0000000112f961a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77e3c0);
  return;
}



/* Entry: 1037c7734; end: 1037c7783;  */

undefined8 FUN_1037c7734(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f71a98;
  func_0x0001000285a8(0x112f71a98,&UNK_10dc0f000);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1037c7784; end: 1037c79b7;  */

long * FUN_1037c7784(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    iVar6 = *(int *)(param_3 + 0x14);
    lVar7 = 0;
    func_0x000107c5ede0();
    pcVar11 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
    func_0x000107c61434(lVar8);
    (*pcVar11)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar7);
    iVar6 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    lVar8 = puVar2[2];
    if (lVar8 == 1) {
      uVar12 = puVar2[4];
      uVar13 = puVar2[7];
      uVar10 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar12;
      puVar1[7] = uVar13;
      puVar1[6] = uVar10;
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
      uVar13 = *puVar2;
      uVar10 = puVar2[3];
      uVar12 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar13;
      puVar1[3] = uVar10;
      puVar1[2] = uVar12;
    }
    else {
      *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = lVar8;
      uVar12 = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[3] = uVar12;
      uVar12 = puVar2[5];
      uVar10 = puVar2[6];
      puVar1[5] = uVar12;
      puVar1[6] = uVar10;
      uVar10 = puVar2[7];
      puVar1[7] = uVar10;
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
      func_0x000107c61434();
      func_0x000107c61434(uVar12);
      func_0x000107c61434(uVar10);
    }
    iVar6 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    uVar12 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar12;
    uVar10 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar10;
    uVar13 = puVar2[6];
    puVar1[7] = puVar2[7];
    puVar1[6] = uVar13;
    *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
    uVar13 = puVar2[0xb];
    puVar1[10] = puVar2[10];
    puVar1[0xb] = uVar13;
    uVar13 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar13;
    puVar1[0xd] = puVar2[0xd];
    plVar3 = (long *)((long)param_1 + (long)iVar6);
    plVar4 = (long *)((long)param_2 + (long)iVar6);
    lVar8 = *plVar4;
    func_0x000107c61434();
    func_0x000107c61434(uVar12);
    func_0x000107c61434(uVar10);
    func_0x000107c61434(uVar13);
    if (lVar8 == 0) {
      lVar8 = *plVar4;
      plVar3[1] = plVar4[1];
      *plVar3 = lVar8;
    }
    else {
      lVar7 = plVar4[1];
      *plVar3 = lVar8;
      plVar3[1] = lVar7;
      func_0x000107c6157c();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    lVar8 = puVar2[1];
    if (lVar8 == 0) {
      uVar12 = *puVar2;
      uVar13 = puVar2[3];
      uVar10 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar12;
      puVar1[3] = uVar13;
      puVar1[2] = uVar10;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar8;
      uVar12 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar12;
      func_0x000107c61434();
      func_0x000107c61434(uVar12);
    }
    iVar6 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    func_0x000107c61434();
    func_0x000107c61434(uVar12);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1037c79b8; end: 1037c7aa7;  */

/* WARNING: Possible PIC construction at 0x0001037c79d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c7a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c7a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c7a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c7a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c7a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c7a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c7a74) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a48) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a58) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a60) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a7c) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a70) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a38) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a10) */
/* WARNING: Removing unreachable block (ram,0x0001037c79d8) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a20) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a0c) */
/* WARNING: Removing unreachable block (ram,0x0001037c7a8c) */

void FUN_1037c79b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1037c7aa8; end: 1037c7caf;  */

undefined8 * FUN_1037c7aa8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  iVar5 = *(int *)(param_3 + 0x14);
  lVar6 = 0;
  func_0x000107c5ede0();
  pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
  func_0x000107c61434(uVar10);
  (*pcVar9)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
  iVar5 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  lVar6 = puVar2[2];
  if (lVar6 == 1) {
    uVar10 = puVar2[4];
    uVar11 = puVar2[7];
    uVar8 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar10;
    puVar1[7] = uVar11;
    puVar1[6] = uVar8;
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
    uVar11 = *puVar2;
    uVar8 = puVar2[3];
    uVar10 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    puVar1[3] = uVar8;
    puVar1[2] = uVar10;
  }
  else {
    *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = lVar6;
    uVar10 = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[3] = uVar10;
    uVar10 = puVar2[5];
    uVar8 = puVar2[6];
    puVar1[5] = uVar10;
    puVar1[6] = uVar8;
    uVar8 = puVar2[7];
    puVar1[7] = uVar8;
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
    func_0x000107c61434();
    func_0x000107c61434(uVar10);
    func_0x000107c61434(uVar8);
  }
  iVar5 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar10 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  uVar10 = puVar2[3];
  puVar1[2] = puVar2[2];
  puVar1[3] = uVar10;
  uVar8 = puVar2[5];
  puVar1[4] = puVar2[4];
  puVar1[5] = uVar8;
  uVar11 = puVar2[6];
  puVar1[7] = puVar2[7];
  puVar1[6] = uVar11;
  *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
  uVar11 = puVar2[0xb];
  puVar1[10] = puVar2[10];
  puVar1[0xb] = uVar11;
  uVar11 = puVar2[9];
  puVar1[8] = puVar2[8];
  puVar1[9] = uVar11;
  puVar1[0xd] = puVar2[0xd];
  plVar3 = (long *)((long)param_1 + (long)iVar5);
  plVar4 = (long *)((long)param_2 + (long)iVar5);
  lVar6 = *plVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar11);
  if (lVar6 == 0) {
    lVar6 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar6;
  }
  else {
    lVar7 = plVar4[1];
    *plVar3 = lVar6;
    plVar3[1] = lVar7;
    func_0x000107c6157c();
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar6 = puVar2[1];
  if (lVar6 == 0) {
    uVar10 = *puVar2;
    uVar11 = puVar2[3];
    uVar8 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar10;
    puVar1[3] = uVar11;
    puVar1[2] = uVar8;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar6;
    uVar10 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar10;
    func_0x000107c61434();
    func_0x000107c61434(uVar10);
  }
  iVar5 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar10 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar10 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar10;
  func_0x000107c61434();
  func_0x000107c61434(uVar10);
  return param_1;
}



/* Entry: 1037c7cb0; end: 1037c80e7;  */

undefined8 * FUN_1037c7cb0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  uVar8 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar8);
  iVar5 = *(int *)(param_3 + 0x14);
  lVar6 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar6 + -8) + 0x18))
            ((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar6 = puVar1[2];
  if (lVar6 == 1) {
    if (puVar2[2] == 1) {
      uVar8 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar8;
      uVar10 = puVar2[3];
      uVar8 = puVar2[2];
      uVar12 = puVar2[5];
      uVar11 = puVar2[4];
      uVar14 = puVar2[7];
      uVar13 = puVar2[6];
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
      puVar1[5] = uVar12;
      puVar1[4] = uVar11;
      puVar1[7] = uVar14;
      puVar1[6] = uVar13;
      puVar1[3] = uVar10;
      puVar1[2] = uVar8;
    }
    else {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
      *(undefined1 *)((long)puVar1 + 1) = *(undefined1 *)((long)puVar2 + 1);
      *(undefined1 *)((long)puVar1 + 2) = *(undefined1 *)((long)puVar2 + 2);
      *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)puVar2 + 3);
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      uVar8 = puVar2[5];
      puVar1[5] = uVar8;
      puVar1[6] = puVar2[6];
      uVar10 = puVar2[7];
      puVar1[7] = uVar10;
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
      func_0x000107c61434();
      func_0x000107c61434(uVar8);
      func_0x000107c61434(uVar10);
    }
  }
  else if (puVar2[2] == 1) {
    FUN_1037c80e8(puVar1);
    uVar8 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar8;
    uVar12 = puVar2[5];
    uVar11 = puVar2[4];
    uVar10 = puVar2[7];
    uVar8 = puVar2[6];
    uVar14 = puVar2[3];
    uVar13 = puVar2[2];
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
    puVar1[5] = uVar12;
    puVar1[4] = uVar11;
    puVar1[7] = uVar10;
    puVar1[6] = uVar8;
    puVar1[3] = uVar14;
    puVar1[2] = uVar13;
  }
  else {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
    *(undefined1 *)((long)puVar1 + 1) = *(undefined1 *)((long)puVar2 + 1);
    *(undefined1 *)((long)puVar1 + 2) = *(undefined1 *)((long)puVar2 + 2);
    *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)puVar2 + 3);
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    func_0x000107c61434();
    func_0x000107c6142c(lVar6);
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    uVar8 = puVar1[5];
    puVar1[5] = puVar2[5];
    func_0x000107c61434();
    func_0x000107c6142c(uVar8);
    puVar1[6] = puVar2[6];
    uVar8 = puVar1[7];
    puVar1[7] = puVar2[7];
    func_0x000107c61434();
    func_0x000107c6142c(uVar8);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar8);
  puVar1[2] = puVar2[2];
  uVar8 = puVar1[3];
  puVar1[3] = puVar2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar8);
  puVar1[4] = puVar2[4];
  uVar8 = puVar1[5];
  puVar1[5] = puVar2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar8);
  puVar1[6] = puVar2[6];
  puVar1[7] = puVar2[7];
  puVar1[8] = puVar2[8];
  uVar8 = puVar1[9];
  puVar1[9] = puVar2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar8);
  puVar1[10] = puVar2[10];
  uVar8 = puVar2[0xb];
  *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
  puVar1[0xb] = uVar8;
  puVar1[0xd] = puVar2[0xd];
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  lVar6 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar6 != 0) {
      lVar7 = plVar4[1];
      *plVar3 = lVar6;
      plVar3[1] = lVar7;
      func_0x000107c6157c();
      goto LAB_1037c7fbc;
    }
  }
  else {
    if (lVar6 != 0) {
      lVar7 = plVar4[1];
      lVar9 = plVar3[1];
      *plVar3 = lVar6;
      plVar3[1] = lVar7;
      func_0x000107c6157c();
      func_0x000107c61574(lVar9);
      goto LAB_1037c7fbc;
    }
    func_0x000107c61574(plVar3[1]);
  }
  lVar6 = *plVar4;
  plVar3[1] = plVar4[1];
  *plVar3 = lVar6;
LAB_1037c7fbc:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    if (puVar2[1] == 0) {
      uVar8 = *puVar2;
      uVar11 = puVar2[3];
      uVar10 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar8;
      puVar1[3] = uVar11;
      puVar1[2] = uVar10;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      uVar8 = puVar2[3];
      puVar1[3] = uVar8;
      func_0x000107c61434();
      func_0x000107c61434(uVar8);
    }
  }
  else if (puVar2[1] == 0) {
    func_0x0001017b66d8(puVar1);
    uVar11 = *puVar2;
    uVar10 = puVar2[3];
    uVar8 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    puVar1[3] = uVar10;
    puVar1[2] = uVar8;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    func_0x000107c61434();
    func_0x000107c6142c(lVar6);
    puVar1[2] = puVar2[2];
    uVar8 = puVar1[3];
    puVar1[3] = puVar2[3];
    func_0x000107c61434();
    func_0x000107c6142c(uVar8);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar1 = *param_2;
  uVar8 = puVar1[1];
  puVar1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar8);
  return param_1;
}



/* Entry: 1037c80e8; end: 1037c811b;  */

undefined8 FUN_1037c80e8(undefined8 param_1)

{
  (*(code *)&DAT_1041b6b34)();
  return param_1;
}



/* Entry: 1037c811c; end: 1037c8207;  */

undefined8 * FUN_1037c811c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  iVar3 = *(int *)(param_3 + 0x14);
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  iVar3 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
  uVar7 = puVar2[4];
  uVar6 = puVar2[7];
  uVar5 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar7;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  uVar5 = *puVar2;
  uVar7 = puVar2[3];
  uVar6 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  iVar3 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar5 = *puVar2;
  uVar7 = puVar2[3];
  uVar6 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  uVar5 = puVar2[10];
  uVar7 = puVar2[0xd];
  uVar6 = puVar2[0xc];
  puVar1[0xb] = puVar2[0xb];
  puVar1[10] = uVar5;
  puVar1[0xd] = uVar7;
  puVar1[0xc] = uVar6;
  uVar5 = puVar2[6];
  uVar7 = puVar2[9];
  uVar6 = puVar2[8];
  puVar1[7] = puVar2[7];
  puVar1[6] = uVar5;
  puVar1[9] = uVar7;
  puVar1[8] = uVar6;
  uVar5 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar5;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar5 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar5;
  iVar3 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar5 = *puVar2;
  uVar7 = puVar2[3];
  uVar6 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar5 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar5;
  iVar3 = *(int *)(param_3 + 0x34);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar5 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar1[1] = param_2[1];
  *puVar1 = uVar5;
  return param_1;
}



/* Entry: 1037c8208; end: 1037c8467;  */

undefined8 * FUN_1037c8208(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  func_0x000107c6142c(uVar6);
  iVar5 = *(int *)(param_3 + 0x14);
  lVar7 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar7 + -8) + 0x28))
            ((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar7);
  iVar5 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  if (puVar1[2] == 1) {
LAB_1037c8290:
    uVar8 = puVar2[4];
    uVar11 = puVar2[7];
    uVar6 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar8;
    puVar1[7] = uVar11;
    puVar1[6] = uVar6;
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
    uVar11 = *puVar2;
    uVar6 = puVar2[3];
    uVar8 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    puVar1[3] = uVar6;
    puVar1[2] = uVar8;
  }
  else {
    lVar7 = puVar2[2];
    if (lVar7 == 1) {
      FUN_1037c80e8(puVar1);
      goto LAB_1037c8290;
    }
    *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
    *(undefined1 *)((long)puVar1 + 1) = *(undefined1 *)((long)puVar2 + 1);
    *(undefined1 *)((long)puVar1 + 2) = *(undefined1 *)((long)puVar2 + 2);
    *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)puVar2 + 3);
    puVar1[1] = puVar2[1];
    puVar1[2] = lVar7;
    func_0x000107c6142c();
    uVar8 = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[3] = uVar8;
    uVar8 = puVar1[5];
    puVar1[5] = puVar2[5];
    func_0x000107c6142c(uVar8);
    uVar8 = puVar2[7];
    uVar6 = puVar1[7];
    puVar1[6] = puVar2[6];
    puVar1[7] = uVar8;
    func_0x000107c6142c(uVar6);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  func_0x000107c6142c(uVar6);
  uVar8 = puVar2[3];
  uVar6 = puVar1[3];
  puVar1[2] = puVar2[2];
  puVar1[3] = uVar8;
  func_0x000107c6142c(uVar6);
  uVar8 = puVar2[5];
  uVar6 = puVar1[5];
  puVar1[4] = puVar2[4];
  puVar1[5] = uVar8;
  func_0x000107c6142c(uVar6);
  uVar8 = puVar2[6];
  puVar1[7] = puVar2[7];
  puVar1[6] = uVar8;
  uVar8 = puVar2[9];
  uVar6 = puVar1[9];
  puVar1[8] = puVar2[8];
  puVar1[9] = uVar8;
  func_0x000107c6142c(uVar6);
  *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
  uVar8 = puVar2[0xb];
  puVar1[10] = puVar2[10];
  puVar1[0xb] = uVar8;
  puVar1[0xd] = puVar2[0xd];
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  lVar7 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar7 == 0) goto LAB_1037c83bc;
    lVar9 = plVar4[1];
    *plVar3 = lVar7;
    plVar3[1] = lVar9;
  }
  else if (lVar7 == 0) {
    func_0x000107c61574(plVar3[1]);
LAB_1037c83bc:
    lVar7 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar7;
  }
  else {
    lVar10 = plVar4[1];
    lVar9 = plVar3[1];
    *plVar3 = lVar7;
    plVar3[1] = lVar10;
    func_0x000107c61574(lVar9);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  if (puVar1[1] != 0) {
    lVar7 = puVar2[1];
    if (lVar7 != 0) {
      *puVar1 = *puVar2;
      puVar1[1] = lVar7;
      func_0x000107c6142c();
      uVar8 = puVar2[3];
      uVar6 = puVar1[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar8;
      func_0x000107c6142c(uVar6);
      goto LAB_1037c8410;
    }
    func_0x0001017b66d8(puVar1);
  }
  uVar8 = *puVar2;
  uVar11 = puVar2[3];
  uVar6 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar8;
  puVar1[3] = uVar11;
  puVar1[2] = uVar6;
LAB_1037c8410:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar8 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  func_0x000107c6142c(uVar6);
  iVar5 = *(int *)(param_3 + 0x34);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar8 = param_2[1];
  uVar6 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar8;
  func_0x000107c6142c(uVar6);
  return param_1;
}



/* Entry: 1037c8468; end: 1037c847f;  */

void FUN_1037c8468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1037c8480; end: 1037c8537;  */

void FUN_1037c8480(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_70 = &UNK_10dc0f038;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_58 = &UNK_10dc0f050;
    puStack_50 = &UNK_10dc0f068;
    puStack_48 = &UNK_10dc0f080;
    puStack_40 = &UNK_10dc0f098;
    puStack_38 = &UNK_10dc0f080;
    puStack_30 = &UNK_10dc0f0b0;
    puStack_28 = &UNK_10dc0f080;
    func_0x000107c6153c(param_1,0x100,10,&puStack_70,param_1 + 0x10);
  }
  return;
}



/* Entry: 1037c8538; end: 1037cba17;  */

long * FUN_1037c8538(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint5 uVar11;
  uint5 uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  code *pcVar28;
  undefined8 *puVar29;
  code *pcVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  ulong uVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  code *pcVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  undefined8 uVar47;
  long lVar48;
  undefined8 uVar49;
  long lVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) != 0) {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar37 = (ulong)uVar9 & 0xff;
    func_0x000107c6157c();
    return (long *)(lVar14 + (uVar37 + 0x10 & (uVar37 ^ 0xffffffffffffffff)));
  }
  lVar20 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar20;
  lVar32 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar32;
  lVar35 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar35;
  lVar46 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar46;
  lVar14 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar14;
  lVar14 = param_2[10];
  lVar21 = param_2[0xb];
  *(char *)(param_1 + 0xe) = (char)param_2[0xe];
  lVar38 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar38;
  param_1[0xf] = param_2[0xf];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  param_1[10] = lVar14;
  param_1[0xb] = lVar21;
  lVar14 = 0;
  func_0x000100b91584();
  lVar38 = *(long *)(lVar14 + -8);
  pcVar28 = *(code **)(lVar38 + 0x30);
  func_0x000107c61434(lVar20);
  func_0x000107c61434(lVar32);
  func_0x000107c61434(lVar35);
  func_0x000107c61434(lVar46);
  func_0x000107c61434(lVar21);
  puVar29 = puVar2;
  (*pcVar28)(puVar2,1,lVar14);
  if ((int)puVar29 != 0) {
    lVar14 = 0x112d3b130;
    func_0x0001000285a8(0x112d3b130,&UNK_10d904950);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    goto LAB_1037cacac;
  }
  puVar29 = puVar2;
  func_0x000107c614c4(puVar2,lVar14);
  iVar13 = (int)puVar29;
  if (iVar13 < 4) {
    if (iVar13 < 2) {
      if (iVar13 == 0) {
        lVar20 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar20 + -8) + 0x10))(puVar1,puVar2,lVar20);
        lVar20 = 0;
        func_0x000100b915bc();
        *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x14)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x14));
        puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x18));
        puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x18));
        lVar32 = puVar17[2];
        if (lVar32 == 1) {
          uVar33 = puVar17[4];
          uVar44 = puVar17[7];
          uVar23 = puVar17[6];
          puVar3[5] = puVar17[5];
          puVar3[4] = uVar33;
          puVar3[7] = uVar44;
          puVar3[6] = uVar23;
          *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(puVar17 + 8);
          uVar44 = *puVar17;
          uVar23 = puVar17[3];
          uVar33 = puVar17[2];
          puVar3[1] = puVar17[1];
          *puVar3 = uVar44;
          puVar3[3] = uVar23;
          puVar3[2] = uVar33;
        }
        else {
          *(undefined4 *)puVar3 = *(undefined4 *)puVar17;
          puVar3[1] = puVar17[1];
          puVar3[2] = lVar32;
          uVar33 = puVar17[3];
          puVar3[4] = puVar17[4];
          puVar3[3] = uVar33;
          uVar33 = puVar17[5];
          uVar23 = puVar17[6];
          puVar3[5] = uVar33;
          puVar3[6] = uVar23;
          uVar23 = puVar17[7];
          puVar3[7] = uVar23;
          *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(puVar17 + 8);
          func_0x000107c61434();
          func_0x000107c61434(uVar33);
          func_0x000107c61434(uVar23);
        }
        *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x1c)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x1c));
        puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x20));
        puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x20));
        uVar33 = puVar17[1];
        *puVar3 = *puVar17;
        puVar3[1] = uVar33;
        uVar23 = puVar17[3];
        puVar3[2] = puVar17[2];
        puVar3[3] = uVar23;
        uVar44 = puVar17[5];
        puVar3[4] = puVar17[4];
        puVar3[5] = uVar44;
        uVar47 = puVar17[6];
        puVar3[7] = puVar17[7];
        puVar3[6] = uVar47;
        uVar47 = puVar17[9];
        puVar3[8] = puVar17[8];
        puVar3[9] = uVar47;
        *(undefined1 *)(puVar3 + 0xc) = *(undefined1 *)(puVar17 + 0xc);
        uVar45 = puVar17[0xb];
        puVar3[10] = puVar17[10];
        puVar3[0xb] = uVar45;
        puVar3[0xd] = puVar17[0xd];
        puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x24));
        puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x24));
        lVar32 = puVar17[1];
        func_0x000107c61174();
        func_0x000107c61434(uVar33);
        func_0x000107c61434(uVar23);
        func_0x000107c61434(uVar44);
        func_0x000107c61434(uVar47);
        if (lVar32 == 0) {
          uVar33 = *puVar17;
          uVar44 = puVar17[3];
          uVar23 = puVar17[2];
          puVar3[1] = puVar17[1];
          *puVar3 = uVar33;
          puVar3[3] = uVar44;
          puVar3[2] = uVar23;
        }
        else {
          *puVar3 = *puVar17;
          puVar3[1] = lVar32;
          uVar33 = puVar17[3];
          puVar3[2] = puVar17[2];
          puVar3[3] = uVar33;
          func_0x000107c61434(lVar32);
          func_0x000107c61434(uVar33);
        }
        puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x28));
        puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x28));
        uVar33 = puVar17[1];
        *puVar3 = *puVar17;
        puVar3[1] = uVar33;
        *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x2c)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x2c));
        puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x30));
        puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x30));
        uVar33 = puVar17[1];
        *puVar3 = *puVar17;
        puVar3[1] = uVar33;
        *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x34)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x34));
        func_0x000107c61434();
        func_0x000107c61434(uVar33);
        goto LAB_1037c97c8;
      }
      uVar33 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar33;
      uVar33 = puVar2[2];
      puVar1[2] = uVar33;
      lVar20 = 0;
      func_0x000100b91790();
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x18));
      puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x18));
      lVar32 = 0;
      func_0x000100b918b4();
      lVar35 = *(long *)(lVar32 + -8);
      pcVar28 = *(code **)(lVar35 + 0x30);
      func_0x000107c61434(uVar33);
      puVar15 = puVar17;
      (*pcVar28)(puVar17,1,lVar32);
      if ((int)puVar15 == 0) {
        uVar23 = puVar17[1];
        *puVar3 = *puVar17;
        puVar3[1] = uVar23;
        uVar33 = puVar17[2];
        uVar44 = puVar17[3];
        puVar3[2] = uVar33;
        puVar3[3] = uVar44;
        iVar13 = *(int *)(lVar32 + 0x1c);
        lVar21 = 0;
        func_0x000107c5eec8();
        lVar22 = *(long *)(lVar21 + -8);
        pcVar42 = *(code **)(lVar22 + 0x10);
        func_0x000107c61434(uVar23);
        func_0x000107c61174(uVar33);
        func_0x000107c61174(uVar44);
        (*pcVar42)((long)puVar3 + (long)iVar13,(long)puVar17 + (long)iVar13,lVar21);
        puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x20));
        puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar32 + 0x20));
        uVar33 = puVar18[1];
        *puVar15 = *puVar18;
        puVar15[1] = uVar33;
        uVar44 = *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar32 + 0x24));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x24)) = uVar44;
        puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x28));
        puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar32 + 0x28));
        uVar33 = puVar18[1];
        *puVar15 = *puVar18;
        puVar15[1] = uVar33;
        uVar47 = *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar32 + 0x2c));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x2c)) = uVar47;
        puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x30));
        puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar32 + 0x30));
        uVar23 = puVar18[1];
        *puVar15 = *puVar18;
        puVar15[1] = uVar23;
        lVar43 = (long)*(int *)(lVar32 + 0x34);
        pcVar28 = *(code **)(lVar22 + 0x30);
        func_0x000107c61434();
        func_0x000107c61174(uVar44);
        func_0x000107c61434(uVar33);
        func_0x000107c61174(uVar47);
        func_0x000107c61434(uVar23);
        lVar46 = (long)puVar17 + lVar43;
        (*pcVar28)(lVar46,1,lVar21);
        if ((int)lVar46 == 0) {
          (*pcVar42)((long)puVar3 + lVar43,(long)puVar17 + lVar43,lVar21);
          (**(code **)(lVar22 + 0x38))((long)puVar3 + lVar43,0,1,lVar21);
        }
        else {
          lVar46 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar3 + lVar43,(long)puVar17 + lVar43,
                              *(undefined8 *)(*(long *)(lVar46 + -8) + 0x40));
        }
        puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x38));
        puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar32 + 0x38));
        uVar33 = puVar18[1];
        *puVar15 = *puVar18;
        puVar15[1] = uVar33;
        puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x3c));
        puVar17 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar32 + 0x3c));
        uVar33 = puVar17[1];
        *puVar15 = *puVar17;
        puVar15[1] = uVar33;
        pcVar28 = *(code **)(lVar35 + 0x38);
        func_0x000107c61434();
        func_0x000107c61434(uVar33);
        (*pcVar28)(puVar3,0,1,lVar32);
      }
      else {
        lVar32 = 0x112dd42a0;
        func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
        func_0x000107c610b4(puVar3,puVar17,*(undefined8 *)(*(long *)(lVar32 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x1c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x1c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x20));
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x24));
      puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x24));
      uVar33 = puVar17[1];
      *puVar3 = *puVar17;
      puVar3[1] = uVar33;
      uVar23 = puVar17[3];
      puVar3[2] = puVar17[2];
      puVar3[3] = uVar23;
      uVar44 = puVar17[5];
      puVar3[4] = puVar17[4];
      puVar3[5] = uVar44;
      uVar47 = puVar17[6];
      puVar3[7] = puVar17[7];
      puVar3[6] = uVar47;
      uVar47 = puVar17[9];
      puVar3[8] = puVar17[8];
      puVar3[9] = uVar47;
      *(undefined1 *)(puVar3 + 0xc) = *(undefined1 *)(puVar17 + 0xc);
      uVar45 = puVar17[0xb];
      puVar3[10] = puVar17[10];
      puVar3[0xb] = uVar45;
      puVar3[0xd] = puVar17[0xd];
      uVar45 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar20 + 0x28));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar20 + 0x28)) = uVar45;
      func_0x000107c61174();
      func_0x000107c61434(uVar33);
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar44);
      func_0x000107c61434(uVar47);
      func_0x000107c61174(uVar45);
      puVar29 = (undefined8 *)((ulong)puVar29 & 0xffffffff);
    }
    else {
      if (iVar13 == 2) {
        lVar20 = 0;
        func_0x000107c5ede0();
        pcVar28 = *(code **)(*(long *)(lVar20 + -8) + 0x10);
        (*pcVar28)(puVar1,puVar2,lVar20);
        lVar32 = 0;
        func_0x000100b919a8();
        puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x14));
        puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x14));
        lVar35 = 0;
        func_0x000100b91acc();
        lVar46 = *(long *)(lVar35 + -8);
        puVar15 = puVar17;
        (**(code **)(lVar46 + 0x30))(puVar17,1,lVar35);
        if ((int)puVar15 == 0) {
          puVar15 = puVar17;
          func_0x000107c614c4(puVar17,lVar35);
          if ((int)puVar15 == 1) {
            uVar33 = *puVar17;
            puVar3[1] = puVar17[1];
            *puVar3 = uVar33;
            uVar33 = puVar17[2];
            puVar3[2] = uVar33;
            lVar20 = 0;
            func_0x000100b91790();
            puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x18));
            puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x18));
            lVar21 = 0;
            func_0x000100b918b4();
            lVar22 = *(long *)(lVar21 + -8);
            pcVar28 = *(code **)(lVar22 + 0x30);
            func_0x000107c61434(uVar33);
            puVar16 = puVar18;
            (*pcVar28)(puVar18,1,lVar21);
            if ((int)puVar16 == 0) {
              uVar23 = puVar18[1];
              *puVar15 = *puVar18;
              puVar15[1] = uVar23;
              uVar33 = puVar18[2];
              uVar44 = puVar18[3];
              puVar15[2] = uVar33;
              puVar15[3] = uVar44;
              iVar13 = *(int *)(lVar21 + 0x1c);
              lVar25 = 0;
              func_0x000107c5eec8();
              lVar48 = *(long *)(lVar25 + -8);
              pcVar28 = *(code **)(lVar48 + 0x10);
              func_0x000107c61434(uVar23);
              func_0x000107c61174(uVar33);
              func_0x000107c61174(uVar44);
              (*pcVar28)((long)puVar15 + (long)iVar13,(long)puVar18 + (long)iVar13,lVar25);
              puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar21 + 0x20));
              puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x20));
              uVar33 = puVar19[1];
              *puVar16 = *puVar19;
              puVar16[1] = uVar33;
              uVar44 = *(undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x24));
              *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar21 + 0x24)) = uVar44;
              puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar21 + 0x28));
              puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x28));
              uVar33 = puVar19[1];
              *puVar16 = *puVar19;
              puVar16[1] = uVar33;
              uVar47 = *(undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x2c));
              *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar21 + 0x2c)) = uVar47;
              puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar21 + 0x30));
              puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x30));
              uVar23 = puVar19[1];
              *puVar16 = *puVar19;
              puVar16[1] = uVar23;
              lVar31 = (long)*(int *)(lVar21 + 0x34);
              pcVar42 = *(code **)(lVar48 + 0x30);
              func_0x000107c61434();
              func_0x000107c61174(uVar44);
              func_0x000107c61434(uVar33);
              func_0x000107c61174(uVar47);
              func_0x000107c61434(uVar23);
              lVar43 = (long)puVar18 + lVar31;
              (*pcVar42)(lVar43,1,lVar25);
              if ((int)lVar43 == 0) {
                (*pcVar28)((long)puVar15 + lVar31,(long)puVar18 + lVar31,lVar25);
                (**(code **)(lVar48 + 0x38))((long)puVar15 + lVar31,0,1,lVar25);
              }
              else {
                lVar43 = 0x112d3bc20;
                func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
                func_0x000107c610b4((long)puVar15 + lVar31,(long)puVar18 + lVar31,
                                    *(undefined8 *)(*(long *)(lVar43 + -8) + 0x40));
              }
              puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar21 + 0x38));
              puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x38));
              uVar33 = puVar19[1];
              *puVar16 = *puVar19;
              puVar16[1] = uVar33;
              puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar21 + 0x3c));
              puVar18 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x3c));
              uVar33 = puVar18[1];
              *puVar16 = *puVar18;
              puVar16[1] = uVar33;
              pcVar28 = *(code **)(lVar22 + 0x38);
              func_0x000107c61434();
              func_0x000107c61434(uVar33);
              (*pcVar28)(puVar15,0,1,lVar21);
            }
            else {
              lVar21 = 0x112dd42a0;
              func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
              func_0x000107c610b4(puVar15,puVar18,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
            }
            *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x1c)) =
                 *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x1c));
            *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x20)) =
                 *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x20));
            puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x24));
            puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x24));
            uVar33 = puVar18[1];
            *puVar15 = *puVar18;
            puVar15[1] = uVar33;
            uVar23 = puVar18[3];
            puVar15[2] = puVar18[2];
            puVar15[3] = uVar23;
            uVar44 = puVar18[5];
            puVar15[4] = puVar18[4];
            puVar15[5] = uVar44;
            uVar47 = puVar18[6];
            puVar15[7] = puVar18[7];
            puVar15[6] = uVar47;
            uVar47 = puVar18[9];
            puVar15[8] = puVar18[8];
            puVar15[9] = uVar47;
            *(undefined1 *)(puVar15 + 0xc) = *(undefined1 *)(puVar18 + 0xc);
            uVar45 = puVar18[0xb];
            puVar15[10] = puVar18[10];
            puVar15[0xb] = uVar45;
            puVar15[0xd] = puVar18[0xd];
            uVar45 = *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x28));
            *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x28)) = uVar45;
            func_0x000107c61174();
            func_0x000107c61434(uVar33);
            func_0x000107c61434(uVar23);
            func_0x000107c61434(uVar44);
            func_0x000107c61434(uVar47);
            func_0x000107c61174(uVar45);
            uVar33 = 1;
          }
          else {
            (*pcVar28)(puVar3,puVar17,lVar20);
            lVar20 = 0;
            func_0x000100b915bc();
            *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x14)) =
                 *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x14));
            puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x18));
            puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x18));
            lVar21 = puVar18[2];
            if (lVar21 == 1) {
              uVar33 = puVar18[4];
              uVar44 = puVar18[7];
              uVar23 = puVar18[6];
              puVar15[5] = puVar18[5];
              puVar15[4] = uVar33;
              puVar15[7] = uVar44;
              puVar15[6] = uVar23;
              *(undefined1 *)(puVar15 + 8) = *(undefined1 *)(puVar18 + 8);
              uVar44 = *puVar18;
              uVar23 = puVar18[3];
              uVar33 = puVar18[2];
              puVar15[1] = puVar18[1];
              *puVar15 = uVar44;
              puVar15[3] = uVar23;
              puVar15[2] = uVar33;
            }
            else {
              *(undefined4 *)puVar15 = *(undefined4 *)puVar18;
              puVar15[1] = puVar18[1];
              puVar15[2] = lVar21;
              uVar33 = puVar18[3];
              puVar15[4] = puVar18[4];
              puVar15[3] = uVar33;
              uVar33 = puVar18[5];
              uVar23 = puVar18[6];
              puVar15[5] = uVar33;
              puVar15[6] = uVar23;
              uVar23 = puVar18[7];
              puVar15[7] = uVar23;
              *(undefined1 *)(puVar15 + 8) = *(undefined1 *)(puVar18 + 8);
              func_0x000107c61434();
              func_0x000107c61434(uVar33);
              func_0x000107c61434(uVar23);
            }
            *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x1c)) =
                 *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x1c));
            puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x20));
            puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x20));
            uVar33 = puVar18[1];
            *puVar15 = *puVar18;
            puVar15[1] = uVar33;
            uVar23 = puVar18[3];
            puVar15[2] = puVar18[2];
            puVar15[3] = uVar23;
            uVar44 = puVar18[5];
            puVar15[4] = puVar18[4];
            puVar15[5] = uVar44;
            uVar47 = puVar18[6];
            puVar15[7] = puVar18[7];
            puVar15[6] = uVar47;
            uVar47 = puVar18[9];
            puVar15[8] = puVar18[8];
            puVar15[9] = uVar47;
            *(undefined1 *)(puVar15 + 0xc) = *(undefined1 *)(puVar18 + 0xc);
            uVar45 = puVar18[0xb];
            puVar15[10] = puVar18[10];
            puVar15[0xb] = uVar45;
            puVar15[0xd] = puVar18[0xd];
            puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x24));
            puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x24));
            lVar21 = puVar18[1];
            func_0x000107c61174();
            func_0x000107c61434(uVar33);
            func_0x000107c61434(uVar23);
            func_0x000107c61434(uVar44);
            func_0x000107c61434(uVar47);
            if (lVar21 == 0) {
              uVar33 = *puVar18;
              uVar44 = puVar18[3];
              uVar23 = puVar18[2];
              puVar15[1] = puVar18[1];
              *puVar15 = uVar33;
              puVar15[3] = uVar44;
              puVar15[2] = uVar23;
            }
            else {
              *puVar15 = *puVar18;
              puVar15[1] = lVar21;
              uVar33 = puVar18[3];
              puVar15[2] = puVar18[2];
              puVar15[3] = uVar33;
              func_0x000107c61434(lVar21);
              func_0x000107c61434(uVar33);
            }
            puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x28));
            puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x28));
            uVar33 = puVar18[1];
            *puVar15 = *puVar18;
            puVar15[1] = uVar33;
            *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x2c)) =
                 *(undefined1 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x2c));
            puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x30));
            puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x30));
            uVar33 = puVar18[1];
            *puVar15 = *puVar18;
            puVar15[1] = uVar33;
            *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar20 + 0x34)) =
                 *(undefined1 *)((long)puVar17 + (long)*(int *)(lVar20 + 0x34));
            func_0x000107c61434();
            func_0x000107c61434(uVar33);
            uVar33 = 0;
          }
          func_0x000107c6159c(puVar3,lVar35,uVar33);
          (**(code **)(lVar46 + 0x38))(puVar3,0,1,lVar35);
        }
        else {
          lVar20 = 0x112d3b128;
          func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
          func_0x000107c610b4(puVar3,puVar17,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
        }
        puVar29 = (undefined8 *)((ulong)puVar29 & 0xffffffff);
        *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x18)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x18));
        puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x1c));
        puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x1c));
        uVar33 = puVar2[1];
        *puVar3 = *puVar2;
        puVar3[1] = uVar33;
        uVar23 = puVar2[3];
        puVar3[2] = puVar2[2];
        puVar3[3] = uVar23;
        uVar44 = puVar2[5];
        puVar3[4] = puVar2[4];
        puVar3[5] = uVar44;
        uVar47 = puVar2[6];
        puVar3[7] = puVar2[7];
        puVar3[6] = uVar47;
        uVar45 = puVar2[9];
        puVar3[8] = puVar2[8];
        puVar3[9] = uVar45;
        *(undefined1 *)(puVar3 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
        uVar47 = puVar2[0xb];
        puVar3[10] = puVar2[10];
        puVar3[0xb] = uVar47;
        puVar3[0xd] = puVar2[0xd];
        func_0x000107c61174();
        func_0x000107c61434(uVar33);
        func_0x000107c61434(uVar23);
        func_0x000107c61434(uVar44);
      }
      else {
        uVar33 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar33;
        uVar33 = puVar2[2];
        uVar23 = puVar2[3];
        puVar1[2] = uVar33;
        puVar1[3] = uVar23;
        uVar23 = puVar2[4];
        uVar44 = puVar2[5];
        puVar1[4] = uVar23;
        puVar1[5] = uVar44;
        uVar44 = puVar2[6];
        uVar47 = puVar2[7];
        puVar1[6] = uVar44;
        puVar1[7] = uVar47;
        uVar24 = puVar2[8];
        puVar1[8] = uVar24;
        uVar47 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar47;
        uVar45 = puVar2[0xc];
        puVar1[0xb] = puVar2[0xb];
        puVar1[0xc] = uVar45;
        *(undefined1 *)(puVar1 + 0xf) = *(undefined1 *)(puVar2 + 0xf);
        uVar47 = puVar2[0xe];
        puVar1[0xd] = puVar2[0xd];
        puVar1[0xe] = uVar47;
        puVar1[0x10] = puVar2[0x10];
        func_0x000107c61434();
        func_0x000107c61174(uVar33);
        func_0x000107c61434(uVar23);
        func_0x000107c61434(uVar44);
        func_0x000107c61434(uVar24);
      }
      func_0x000107c61434(uVar45);
    }
  }
  else if (iVar13 < 6) {
    if (iVar13 == 4) {
      uVar33 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar33;
      uVar45 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar45;
      uVar23 = puVar2[4];
      uVar33 = puVar2[5];
      puVar1[4] = uVar23;
      puVar1[5] = uVar33;
      uVar44 = puVar2[6];
      uVar33 = puVar2[7];
      puVar1[6] = uVar44;
      puVar1[7] = uVar33;
      uVar47 = puVar2[8];
      uVar33 = puVar2[9];
      puVar1[8] = uVar47;
      puVar1[9] = uVar33;
      uVar49 = puVar2[10];
      puVar1[10] = uVar49;
      uVar33 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar33;
      uVar33 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xe] = uVar33;
      *(undefined1 *)(puVar1 + 0x11) = *(undefined1 *)(puVar2 + 0x11);
      uVar24 = puVar2[0x10];
      puVar1[0xf] = puVar2[0xf];
      puVar1[0x10] = uVar24;
      puVar1[0x12] = puVar2[0x12];
      func_0x000107c61434();
      func_0x000107c61434(uVar45);
      func_0x000107c61174(uVar23);
      func_0x000107c61434(uVar44);
      func_0x000107c61434(uVar47);
      func_0x000107c61434(uVar49);
    }
    else {
      uVar23 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar23;
      uVar24 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar24;
      uVar44 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar44;
      uVar47 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar47;
      uVar33 = puVar2[8];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar33;
      uVar33 = puVar2[0xb];
      puVar1[10] = puVar2[10];
      puVar1[0xb] = uVar33;
      *(undefined1 *)(puVar1 + 0xe) = *(undefined1 *)(puVar2 + 0xe);
      uVar45 = puVar2[0xd];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xd] = uVar45;
      puVar1[0xf] = puVar2[0xf];
      func_0x000107c61434();
      func_0x000107c61174(uVar23);
      func_0x000107c61434(uVar24);
      func_0x000107c61434(uVar44);
      func_0x000107c61434(uVar47);
    }
    func_0x000107c61434(uVar33);
  }
  else {
    if (iVar13 == 6) {
      uVar33 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar33;
      uVar33 = puVar2[2];
      uVar23 = puVar2[3];
      puVar1[2] = uVar33;
      puVar1[3] = uVar23;
      uVar23 = puVar2[4];
      puVar1[4] = uVar23;
      lVar20 = puVar2[6];
      func_0x000107c61434();
      func_0x000107c61434(uVar33);
      func_0x000107c61434(uVar23);
      if (lVar20 == 0) {
        uVar33 = puVar2[5];
        puVar1[6] = puVar2[6];
        puVar1[5] = uVar33;
        uVar33 = puVar2[7];
        puVar1[8] = puVar2[8];
        puVar1[7] = uVar33;
        puVar1[9] = puVar2[9];
      }
      else {
        puVar1[5] = puVar2[5];
        puVar1[6] = lVar20;
        uVar33 = puVar2[8];
        puVar1[7] = puVar2[7];
        puVar1[8] = uVar33;
        uVar23 = puVar2[9];
        puVar1[9] = uVar23;
        func_0x000107c61434(lVar20);
        func_0x000107c61434(uVar33);
        func_0x000107c61434(uVar23);
      }
      lVar20 = puVar2[0x10];
      if (lVar20 == 1) {
        uVar33 = puVar2[10];
        uVar44 = puVar2[0xd];
        uVar23 = puVar2[0xc];
        puVar1[0xb] = puVar2[0xb];
        puVar1[10] = uVar33;
        puVar1[0xd] = uVar44;
        puVar1[0xc] = uVar23;
        uVar33 = puVar2[0xe];
        puVar1[0xf] = puVar2[0xf];
        puVar1[0xe] = uVar33;
        puVar1[0x10] = puVar2[0x10];
      }
      else {
        lVar32 = puVar2[0xc];
        if (lVar32 == 1) {
          uVar33 = puVar2[10];
          uVar44 = puVar2[0xd];
          uVar23 = puVar2[0xc];
          puVar1[0xb] = puVar2[0xb];
          puVar1[10] = uVar33;
          puVar1[0xd] = uVar44;
          puVar1[0xc] = uVar23;
          puVar1[0xe] = puVar2[0xe];
        }
        else {
          uVar33 = puVar2[10];
          puVar1[0xb] = puVar2[0xb];
          puVar1[10] = uVar33;
          uVar33 = puVar2[0xd];
          uVar23 = puVar2[0xe];
          puVar1[0xc] = lVar32;
          puVar1[0xd] = uVar33;
          puVar1[0xe] = uVar23;
          func_0x000107c61434();
          func_0x000107c61434(uVar23);
        }
        puVar1[0xf] = puVar2[0xf];
        puVar1[0x10] = lVar20;
        func_0x000107c61434(lVar20);
      }
      lVar20 = puVar2[0x17];
      if (lVar20 == 1) {
        uVar33 = puVar2[0x11];
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x11] = uVar33;
        uVar33 = puVar2[0x13];
        puVar1[0x14] = puVar2[0x14];
        puVar1[0x13] = uVar33;
        uVar33 = puVar2[0x15];
        puVar1[0x16] = puVar2[0x16];
        puVar1[0x15] = uVar33;
        puVar1[0x17] = puVar2[0x17];
      }
      else {
        lVar32 = puVar2[0x13];
        if (lVar32 == 1) {
          uVar33 = puVar2[0x11];
          puVar1[0x12] = puVar2[0x12];
          puVar1[0x11] = uVar33;
          uVar33 = puVar2[0x13];
          puVar1[0x14] = puVar2[0x14];
          puVar1[0x13] = uVar33;
          puVar1[0x15] = puVar2[0x15];
        }
        else {
          uVar33 = puVar2[0x11];
          puVar1[0x12] = puVar2[0x12];
          puVar1[0x11] = uVar33;
          uVar33 = puVar2[0x14];
          uVar23 = puVar2[0x15];
          puVar1[0x13] = lVar32;
          puVar1[0x14] = uVar33;
          puVar1[0x15] = uVar23;
          func_0x000107c61434();
          func_0x000107c61434(uVar23);
        }
        puVar1[0x16] = puVar2[0x16];
        puVar1[0x17] = lVar20;
        func_0x000107c61434(lVar20);
      }
      uVar33 = puVar2[0x18];
      puVar1[0x19] = puVar2[0x19];
      puVar1[0x18] = uVar33;
      puVar1[0x1a] = puVar2[0x1a];
      uVar33 = puVar2[0x1b];
      puVar1[0x1c] = puVar2[0x1c];
      puVar1[0x1b] = uVar33;
      uVar47 = puVar2[0x1e];
      puVar1[0x1d] = puVar2[0x1d];
      puVar1[0x1e] = uVar47;
      uVar45 = puVar2[0x20];
      puVar1[0x1f] = puVar2[0x1f];
      puVar1[0x20] = uVar45;
      uVar24 = puVar2[0x22];
      puVar1[0x21] = puVar2[0x21];
      puVar1[0x22] = uVar24;
      uVar49 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar49;
      uVar33 = puVar2[0x25];
      uVar23 = puVar2[0x26];
      puVar1[0x25] = uVar33;
      puVar1[0x26] = uVar23;
      uVar23 = puVar2[0x27];
      uVar44 = puVar2[0x28];
      puVar1[0x27] = uVar23;
      puVar1[0x28] = uVar44;
      uVar44 = puVar2[0x29];
      uVar39 = puVar2[0x2a];
      puVar1[0x29] = uVar44;
      puVar1[0x2a] = uVar39;
      uVar40 = puVar2[0x2b];
      puVar1[0x2b] = uVar40;
      uVar39 = puVar2[0x2c];
      puVar1[0x2d] = puVar2[0x2d];
      puVar1[0x2c] = uVar39;
      uVar39 = puVar2[0x2f];
      puVar1[0x2e] = puVar2[0x2e];
      puVar1[0x2f] = uVar39;
      *(undefined1 *)(puVar1 + 0x32) = *(undefined1 *)(puVar2 + 0x32);
      uVar51 = puVar2[0x31];
      puVar1[0x30] = puVar2[0x30];
      puVar1[0x31] = uVar51;
      puVar1[0x33] = puVar2[0x33];
      *(undefined1 *)(puVar1 + 0x34) = *(undefined1 *)(puVar2 + 0x34);
      uVar37 = puVar2[0x36];
      func_0x000107c61434();
      func_0x000107c61434(uVar47);
      func_0x000107c61434(uVar45);
      func_0x000107c61434(uVar24);
      func_0x000107c61434(uVar49);
      func_0x000107c61174(uVar33);
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar44);
      func_0x000107c61434(uVar40);
      func_0x000107c61434(uVar39);
      if (uVar37 >> 0x3c < 0xf) {
        uVar33 = puVar2[0x35];
        func_0x00010006c00c(uVar33,uVar37);
        puVar1[0x35] = uVar33;
        puVar1[0x36] = uVar37;
      }
      else {
        uVar33 = puVar2[0x35];
        puVar1[0x36] = puVar2[0x36];
        puVar1[0x35] = uVar33;
      }
    }
    else if (iVar13 == 7) {
      uVar33 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar33;
      uVar47 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar47;
      uVar45 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar45;
      uVar33 = puVar2[6];
      puVar1[7] = puVar2[7];
      puVar1[6] = uVar33;
      uVar24 = puVar2[9];
      puVar1[8] = puVar2[8];
      puVar1[9] = uVar24;
      uVar33 = puVar2[0xb];
      puVar1[10] = puVar2[10];
      puVar1[0xb] = uVar33;
      *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
      uVar49 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      uVar33 = puVar2[0xf];
      uVar39 = puVar2[0x10];
      uVar23 = puVar2[0x11];
      uVar51 = puVar2[0x12];
      uVar10 = *(undefined1 *)((long)puVar2 + 0xac);
      uVar12 = *(uint5 *)(puVar2 + 0x15);
      uVar11 = *(uint5 *)(puVar2 + 0x15);
      uVar44 = puVar2[0x13];
      uVar40 = puVar2[0x14];
      func_0x000107c61434();
      func_0x000107c61434(uVar47);
      func_0x000107c61434(uVar45);
      func_0x000107c61434(uVar24);
      FUN_1037cba18(uVar49,uVar33,uVar39,uVar23,uVar51,uVar44,uVar40,(ulong)uVar11);
      puVar1[0xe] = uVar49;
      puVar1[0xf] = uVar33;
      puVar1[0x10] = uVar39;
      puVar1[0x11] = uVar23;
      puVar1[0x12] = uVar51;
      puVar1[0x13] = uVar44;
      puVar1[0x14] = uVar40;
      *(undefined1 *)((long)puVar1 + 0xac) = uVar10;
      *(int *)(puVar1 + 0x15) = (int)uVar12;
      uVar33 = puVar2[0x17];
      puVar1[0x16] = puVar2[0x16];
      puVar1[0x17] = uVar33;
      uVar23 = puVar2[0x19];
      puVar1[0x18] = puVar2[0x18];
      puVar1[0x19] = uVar23;
      uVar44 = puVar2[0x1b];
      puVar1[0x1a] = puVar2[0x1a];
      puVar1[0x1b] = uVar44;
      uVar47 = puVar2[0x1d];
      puVar1[0x1c] = puVar2[0x1c];
      puVar1[0x1d] = uVar47;
      uVar33 = puVar2[0x1e];
      uVar45 = puVar2[0x1f];
      puVar1[0x1e] = uVar33;
      puVar1[0x1f] = uVar45;
      uVar24 = puVar2[0x21];
      puVar1[0x20] = puVar2[0x20];
      puVar1[0x21] = uVar24;
      *(undefined1 *)(puVar1 + 0x22) = *(undefined1 *)(puVar2 + 0x22);
      uVar49 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar49;
      uVar39 = puVar2[0x26];
      puVar1[0x25] = puVar2[0x25];
      puVar1[0x26] = uVar39;
      lVar20 = puVar2[0x28];
      func_0x000107c61434();
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar44);
      func_0x000107c61434(uVar47);
      func_0x000107c61174(uVar33);
      func_0x000107c61434(uVar45);
      func_0x000107c61434(uVar24);
      func_0x000107c61434(uVar49);
      func_0x000107c61434(uVar39);
      if (lVar20 == 0) {
        uVar33 = puVar2[0x27];
        uVar44 = puVar2[0x2a];
        uVar23 = puVar2[0x29];
        puVar1[0x28] = puVar2[0x28];
        puVar1[0x27] = uVar33;
        puVar1[0x2a] = uVar44;
        puVar1[0x29] = uVar23;
        uVar33 = puVar2[0x2b];
        puVar1[0x2c] = puVar2[0x2c];
        puVar1[0x2b] = uVar33;
      }
      else {
        puVar1[0x27] = puVar2[0x27];
        puVar1[0x28] = lVar20;
        uVar33 = puVar2[0x2a];
        puVar1[0x29] = puVar2[0x29];
        puVar1[0x2a] = uVar33;
        uVar23 = puVar2[0x2c];
        puVar1[0x2b] = puVar2[0x2b];
        puVar1[0x2c] = uVar23;
        func_0x000107c61434(lVar20);
        func_0x000107c61434(uVar33);
        func_0x000107c61434(uVar23);
      }
    }
    else {
      lVar20 = 0;
      func_0x000107c5ede0();
      lVar21 = *(long *)(lVar20 + -8);
      pcVar28 = *(code **)(lVar21 + 0x10);
      (*pcVar28)(puVar1,puVar2);
      lVar32 = 0;
      func_0x000100b91b84();
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x14));
      puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x14));
      uVar33 = puVar17[1];
      *puVar3 = *puVar17;
      puVar3[1] = uVar33;
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x18));
      puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x18));
      uVar23 = puVar17[1];
      *puVar3 = *puVar17;
      puVar3[1] = uVar23;
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x1c));
      puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x1c));
      uVar44 = puVar17[1];
      *puVar3 = *puVar17;
      puVar3[1] = uVar44;
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x20));
      puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x20));
      uVar47 = puVar17[1];
      *puVar3 = *puVar17;
      puVar3[1] = uVar47;
      uVar45 = puVar17[3];
      puVar3[2] = puVar17[2];
      puVar3[3] = uVar45;
      uVar24 = puVar17[5];
      puVar3[4] = puVar17[4];
      puVar3[5] = uVar24;
      uVar49 = puVar17[6];
      puVar3[7] = puVar17[7];
      puVar3[6] = uVar49;
      uVar49 = puVar17[9];
      puVar3[8] = puVar17[8];
      puVar3[9] = uVar49;
      *(undefined1 *)(puVar3 + 0xc) = *(undefined1 *)(puVar17 + 0xc);
      uVar39 = puVar17[0xb];
      puVar3[10] = puVar17[10];
      puVar3[0xb] = uVar39;
      puVar3[0xd] = puVar17[0xd];
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x24));
      puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x24));
      uVar39 = *puVar17;
      puVar3[1] = puVar17[1];
      *puVar3 = uVar39;
      uVar39 = puVar17[2];
      puVar3[2] = uVar39;
      lVar35 = 0;
      func_0x000100b91790();
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x18));
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar35 + 0x18));
      lVar46 = 0;
      func_0x000100b918b4();
      lVar22 = *(long *)(lVar46 + -8);
      pcVar42 = *(code **)(lVar22 + 0x30);
      func_0x000107c61434(uVar33);
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar44);
      func_0x000107c61434(uVar47);
      func_0x000107c61434(uVar45);
      func_0x000107c61434(uVar24);
      func_0x000107c61434(uVar49);
      func_0x000107c61434(uVar39);
      puVar16 = puVar18;
      (*pcVar42)(puVar18,1,lVar46);
      if ((int)puVar16 == 0) {
        uVar23 = puVar18[1];
        *puVar15 = *puVar18;
        puVar15[1] = uVar23;
        uVar33 = puVar18[2];
        uVar44 = puVar18[3];
        puVar15[2] = uVar33;
        puVar15[3] = uVar44;
        iVar13 = *(int *)(lVar46 + 0x1c);
        lVar25 = 0;
        func_0x000107c5eec8();
        lVar48 = *(long *)(lVar25 + -8);
        pcVar42 = *(code **)(lVar48 + 0x10);
        func_0x000107c61434(uVar23);
        func_0x000107c61174(uVar33);
        func_0x000107c61174(uVar44);
        (*pcVar42)((long)puVar15 + (long)iVar13,(long)puVar18 + (long)iVar13,lVar25);
        puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x20));
        puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar46 + 0x20));
        uVar33 = puVar19[1];
        *puVar16 = *puVar19;
        puVar16[1] = uVar33;
        uVar44 = *(undefined8 *)((long)puVar18 + (long)*(int *)(lVar46 + 0x24));
        *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x24)) = uVar44;
        puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x28));
        puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar46 + 0x28));
        uVar33 = puVar19[1];
        *puVar16 = *puVar19;
        puVar16[1] = uVar33;
        uVar47 = *(undefined8 *)((long)puVar18 + (long)*(int *)(lVar46 + 0x2c));
        *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x2c)) = uVar47;
        puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x30));
        puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar46 + 0x30));
        uVar23 = puVar19[1];
        *puVar16 = *puVar19;
        puVar16[1] = uVar23;
        lVar31 = (long)*(int *)(lVar46 + 0x34);
        pcVar30 = *(code **)(lVar48 + 0x30);
        func_0x000107c61434();
        func_0x000107c61174(uVar44);
        func_0x000107c61434(uVar33);
        func_0x000107c61174(uVar47);
        func_0x000107c61434(uVar23);
        lVar43 = (long)puVar18 + lVar31;
        (*pcVar30)(lVar43,1,lVar25);
        if ((int)lVar43 == 0) {
          (*pcVar42)((long)puVar15 + lVar31,(long)puVar18 + lVar31,lVar25);
          (**(code **)(lVar48 + 0x38))((long)puVar15 + lVar31,0,1,lVar25);
        }
        else {
          lVar43 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar15 + lVar31,(long)puVar18 + lVar31,
                              *(undefined8 *)(*(long *)(lVar43 + -8) + 0x40));
        }
        puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x38));
        puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar46 + 0x38));
        uVar33 = puVar19[1];
        *puVar16 = *puVar19;
        puVar16[1] = uVar33;
        puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x3c));
        puVar18 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar46 + 0x3c));
        uVar33 = puVar18[1];
        *puVar16 = *puVar18;
        puVar16[1] = uVar33;
        pcVar42 = *(code **)(lVar22 + 0x38);
        func_0x000107c61434();
        func_0x000107c61434(uVar33);
        (*pcVar42)(puVar15,0,1,lVar46);
      }
      else {
        lVar46 = 0x112dd42a0;
        func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
        func_0x000107c610b4(puVar15,puVar18,*(undefined8 *)(*(long *)(lVar46 + -8) + 0x40));
      }
      uVar24 = *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar35 + 0x1c));
      *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x1c)) = uVar24;
      *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x20)) =
           *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar35 + 0x20));
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x24));
      puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar35 + 0x24));
      uVar33 = puVar18[1];
      *puVar15 = *puVar18;
      puVar15[1] = uVar33;
      uVar23 = puVar18[3];
      puVar15[2] = puVar18[2];
      puVar15[3] = uVar23;
      uVar44 = puVar18[5];
      puVar15[4] = puVar18[4];
      puVar15[5] = uVar44;
      uVar47 = puVar18[6];
      puVar15[7] = puVar18[7];
      puVar15[6] = uVar47;
      uVar47 = puVar18[9];
      puVar15[8] = puVar18[8];
      puVar15[9] = uVar47;
      *(undefined1 *)(puVar15 + 0xc) = *(undefined1 *)(puVar18 + 0xc);
      uVar45 = puVar18[0xb];
      puVar15[10] = puVar18[10];
      puVar15[0xb] = uVar45;
      puVar15[0xd] = puVar18[0xd];
      uVar45 = *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar35 + 0x28));
      *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x28)) = uVar45;
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x28));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x28));
      lVar32 = 0;
      func_0x000100b91cc8();
      lVar35 = *(long *)(lVar32 + -8);
      pcVar42 = *(code **)(lVar35 + 0x30);
      func_0x000107c61174(uVar24);
      func_0x000107c61434(uVar33);
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar44);
      func_0x000107c61434(uVar47);
      func_0x000107c61174(uVar45);
      puVar17 = puVar2;
      (*pcVar42)(puVar2,1,lVar32);
      if ((int)puVar17 == 0) {
        uVar33 = *puVar2;
        uVar44 = puVar2[3];
        uVar23 = puVar2[2];
        puVar3[1] = puVar2[1];
        *puVar3 = uVar33;
        puVar3[3] = uVar44;
        puVar3[2] = uVar23;
        uVar33 = puVar2[4];
        puVar3[5] = puVar2[5];
        puVar3[4] = uVar33;
        uVar33 = puVar2[6];
        uVar23 = puVar2[7];
        puVar3[6] = uVar33;
        puVar3[7] = uVar23;
        uVar23 = puVar2[8];
        uVar44 = puVar2[9];
        puVar3[8] = uVar23;
        puVar3[9] = uVar44;
        uVar44 = puVar2[10];
        uVar47 = puVar2[0xb];
        puVar3[10] = uVar44;
        puVar3[0xb] = uVar47;
        uVar47 = puVar2[0xc];
        uVar45 = puVar2[0xd];
        puVar3[0xc] = uVar47;
        puVar3[0xd] = uVar45;
        uVar45 = puVar2[0xe];
        uVar24 = puVar2[0xf];
        puVar3[0xe] = uVar45;
        puVar3[0xf] = uVar24;
        uVar24 = puVar2[0x10];
        puVar3[0x10] = uVar24;
        lVar22 = 0;
        func_0x000100b91d00();
        lVar48 = (long)*(int *)(lVar22 + 0x3c);
        lVar43 = 0;
        func_0x000107c5eec8();
        lVar25 = *(long *)(lVar43 + -8);
        pcVar42 = *(code **)(lVar25 + 0x30);
        func_0x000107c61434(uVar33);
        func_0x000107c61434(uVar23);
        func_0x000107c61434(uVar44);
        func_0x000107c61434(uVar47);
        func_0x000107c61434(uVar45);
        func_0x000107c61434(uVar24);
        lVar46 = (long)puVar2 + lVar48;
        (*pcVar42)(lVar46,1,lVar43);
        if ((int)lVar46 == 0) {
          (**(code **)(lVar25 + 0x10))((long)puVar3 + lVar48,(long)puVar2 + lVar48,lVar43);
          (**(code **)(lVar25 + 0x38))((long)puVar3 + lVar48,0,1,lVar43);
        }
        else {
          lVar46 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar3 + lVar48,(long)puVar2 + lVar48,
                              *(undefined8 *)(*(long *)(lVar46 + -8) + 0x40));
        }
        lVar48 = (long)*(int *)(lVar22 + 0x40);
        lVar46 = (long)puVar2 + lVar48;
        (*pcVar42)(lVar46,1,lVar43);
        if ((int)lVar46 == 0) {
          (**(code **)(lVar25 + 0x10))((long)puVar3 + lVar48,(long)puVar2 + lVar48,lVar43);
          (**(code **)(lVar25 + 0x38))((long)puVar3 + lVar48,0,1,lVar43);
        }
        else {
          lVar46 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar3 + lVar48,(long)puVar2 + lVar48,
                              *(undefined8 *)(*(long *)(lVar46 + -8) + 0x40));
        }
        lVar48 = (long)*(int *)(lVar22 + 0x44);
        lVar46 = (long)puVar2 + lVar48;
        (*pcVar42)(lVar46,1,lVar43);
        if ((int)lVar46 == 0) {
          (**(code **)(lVar25 + 0x10))((long)puVar3 + lVar48,(long)puVar2 + lVar48,lVar43);
          (**(code **)(lVar25 + 0x38))((long)puVar3 + lVar48,0,1,lVar43);
        }
        else {
          lVar46 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar3 + lVar48,(long)puVar2 + lVar48,
                              *(undefined8 *)(*(long *)(lVar46 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x48)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x48));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x4c)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x4c));
        uVar33 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x50));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x50)) = uVar33;
        uVar23 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x54));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x54)) = uVar23;
        uVar44 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x58));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x58)) = uVar44;
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x5c));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x5c));
        lVar46 = puVar15[1];
        func_0x000107c61434();
        func_0x000107c61434(uVar33);
        func_0x000107c61434(uVar23);
        func_0x000107c61434(uVar44);
        if (lVar46 == 1) {
          uVar33 = puVar15[0xc];
          uVar44 = puVar15[0xf];
          uVar23 = puVar15[0xe];
          puVar17[0xd] = puVar15[0xd];
          puVar17[0xc] = uVar33;
          puVar17[0xf] = uVar44;
          puVar17[0xe] = uVar23;
          uVar33 = puVar15[0x10];
          uVar44 = puVar15[0x13];
          uVar23 = puVar15[0x12];
          puVar17[0x11] = puVar15[0x11];
          puVar17[0x10] = uVar33;
          puVar17[0x13] = uVar44;
          puVar17[0x12] = uVar23;
          uVar33 = puVar15[4];
          uVar44 = puVar15[7];
          uVar23 = puVar15[6];
          puVar17[5] = puVar15[5];
          puVar17[4] = uVar33;
          puVar17[7] = uVar44;
          puVar17[6] = uVar23;
          uVar33 = puVar15[8];
          uVar44 = puVar15[0xb];
          uVar23 = puVar15[10];
          puVar17[9] = puVar15[9];
          puVar17[8] = uVar33;
          puVar17[0xb] = uVar44;
          puVar17[10] = uVar23;
          uVar33 = *puVar15;
          uVar44 = puVar15[3];
          uVar23 = puVar15[2];
          puVar17[1] = puVar15[1];
          *puVar17 = uVar33;
          puVar17[3] = uVar44;
          puVar17[2] = uVar23;
        }
        else {
          *puVar17 = *puVar15;
          puVar17[1] = lVar46;
          uVar33 = puVar15[3];
          puVar17[2] = puVar15[2];
          puVar17[3] = uVar33;
          uVar23 = puVar15[5];
          puVar17[4] = puVar15[4];
          puVar17[5] = uVar23;
          uVar44 = puVar15[7];
          puVar17[6] = puVar15[6];
          puVar17[7] = uVar44;
          uVar47 = puVar15[9];
          puVar17[8] = puVar15[8];
          puVar17[9] = uVar47;
          *(undefined1 *)(puVar17 + 10) = *(undefined1 *)(puVar15 + 10);
          uVar45 = puVar15[0xb];
          puVar17[0xc] = puVar15[0xc];
          puVar17[0xb] = uVar45;
          lVar48 = puVar15[0x12];
          func_0x000107c61434(lVar46);
          func_0x000107c61434(uVar33);
          func_0x000107c61434(uVar23);
          func_0x000107c61434(uVar44);
          func_0x000107c61434(uVar47);
          if (lVar48 == 0) {
            uVar33 = puVar15[0xd];
            puVar17[0xe] = puVar15[0xe];
            puVar17[0xd] = uVar33;
            uVar33 = puVar15[0xf];
            puVar17[0x10] = puVar15[0x10];
            puVar17[0xf] = uVar33;
            uVar33 = puVar15[0x11];
            puVar17[0x12] = puVar15[0x12];
            puVar17[0x11] = uVar33;
            puVar17[0x13] = puVar15[0x13];
          }
          else {
            uVar33 = puVar15[0xe];
            puVar17[0xd] = puVar15[0xd];
            puVar17[0xe] = uVar33;
            uVar33 = puVar15[0x10];
            puVar17[0xf] = puVar15[0xf];
            puVar17[0x10] = uVar33;
            puVar17[0x11] = puVar15[0x11];
            puVar17[0x12] = lVar48;
            puVar17[0x13] = puVar15[0x13];
            func_0x000107c61434();
            func_0x000107c61434(uVar33);
            func_0x000107c61434(lVar48);
          }
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x60)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x60));
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 100));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 100));
        lVar46 = puVar15[1];
        if (lVar46 == 1) {
          uVar33 = *puVar15;
          uVar44 = puVar15[3];
          uVar23 = puVar15[2];
          puVar17[1] = puVar15[1];
          *puVar17 = uVar33;
          puVar17[3] = uVar44;
          puVar17[2] = uVar23;
          puVar17[4] = puVar15[4];
        }
        else {
          *puVar17 = *puVar15;
          puVar17[1] = lVar46;
          puVar17[2] = puVar15[2];
          *(undefined1 *)(puVar17 + 3) = *(undefined1 *)(puVar15 + 3);
          *(undefined2 *)((long)puVar17 + 0x19) = *(undefined2 *)((long)puVar15 + 0x19);
          puVar17[4] = puVar15[4];
          func_0x000107c61434();
        }
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x68));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x68));
        if (puVar15[0x27] == 0) {
          func_0x000107c610b4(puVar17,puVar15,0x160);
        }
        else {
          uVar33 = *puVar15;
          puVar17[1] = puVar15[1];
          *puVar17 = uVar33;
          uVar33 = puVar15[2];
          uVar23 = puVar15[3];
          puVar17[2] = uVar33;
          puVar17[3] = uVar23;
          uVar34 = puVar15[4];
          puVar17[4] = uVar34;
          uVar23 = puVar15[5];
          puVar17[6] = puVar15[6];
          puVar17[5] = uVar23;
          uVar23 = puVar15[7];
          uVar44 = puVar15[8];
          puVar17[7] = uVar23;
          puVar17[8] = uVar44;
          *(undefined2 *)(puVar17 + 9) = *(undefined2 *)(puVar15 + 9);
          *(undefined1 *)((long)puVar17 + 0x4a) = *(undefined1 *)((long)puVar15 + 0x4a);
          uVar44 = puVar15[0xb];
          puVar17[10] = puVar15[10];
          puVar17[0xb] = uVar44;
          uVar26 = puVar15[0xc];
          puVar17[0xc] = uVar26;
          *(undefined1 *)(puVar17 + 0xd) = *(undefined1 *)(puVar15 + 0xd);
          uVar47 = puVar15[0xe];
          puVar17[0xf] = puVar15[0xf];
          puVar17[0xe] = uVar47;
          *(undefined1 *)(puVar17 + 0x10) = *(undefined1 *)(puVar15 + 0x10);
          uVar47 = puVar15[0x12];
          puVar17[0x11] = puVar15[0x11];
          puVar17[0x12] = uVar47;
          uVar45 = puVar15[0x14];
          puVar17[0x13] = puVar15[0x13];
          puVar17[0x14] = uVar45;
          uVar24 = puVar15[0x16];
          puVar17[0x15] = puVar15[0x15];
          puVar17[0x16] = uVar24;
          uVar49 = puVar15[0x18];
          puVar17[0x17] = puVar15[0x17];
          puVar17[0x18] = uVar49;
          uVar39 = puVar15[0x1a];
          puVar17[0x19] = puVar15[0x19];
          puVar17[0x1a] = uVar39;
          uVar51 = puVar15[0x1b];
          puVar17[0x1c] = puVar15[0x1c];
          puVar17[0x1b] = uVar51;
          uVar27 = puVar15[0x1d];
          puVar17[0x1d] = uVar27;
          *(undefined1 *)(puVar17 + 0x1e) = *(undefined1 *)(puVar15 + 0x1e);
          *(undefined1 *)((long)puVar17 + 0xf1) = *(undefined1 *)((long)puVar15 + 0xf1);
          *(undefined1 *)((long)puVar17 + 0xf2) = *(undefined1 *)((long)puVar15 + 0xf2);
          uVar51 = puVar15[0x20];
          puVar17[0x1f] = puVar15[0x1f];
          puVar17[0x20] = uVar51;
          uVar40 = puVar15[0x22];
          puVar17[0x21] = puVar15[0x21];
          puVar17[0x22] = uVar40;
          uVar7 = puVar15[0x24];
          puVar17[0x23] = puVar15[0x23];
          puVar17[0x24] = uVar7;
          uVar8 = puVar15[0x26];
          puVar17[0x25] = puVar15[0x25];
          puVar17[0x26] = uVar8;
          uVar36 = puVar15[0x27];
          puVar17[0x27] = uVar36;
          uVar52 = puVar15[0x28];
          puVar17[0x29] = puVar15[0x29];
          puVar17[0x28] = uVar52;
          uVar52 = puVar15[0x2b];
          puVar17[0x2a] = puVar15[0x2a];
          puVar17[0x2b] = uVar52;
          func_0x000107c61434(uVar33);
          func_0x000107c61434(uVar34);
          func_0x000107c61434(uVar23);
          func_0x000107c61434(uVar44);
          func_0x000107c61434(uVar26);
          func_0x000107c61434(uVar47);
          func_0x000107c61434(uVar45);
          func_0x000107c61434(uVar24);
          func_0x000107c61434(uVar49);
          func_0x000107c61434(uVar39);
          func_0x000107c61434(uVar27);
          func_0x000107c61434(uVar51);
          func_0x000107c61434(uVar40);
          func_0x000107c61434(uVar7);
          func_0x000107c61434(uVar8);
          func_0x000107c61434(uVar36);
        }
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x6c));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x6c));
        uVar37 = puVar15[1];
        if (uVar37 >> 0x3c < 0xf) {
          uVar33 = *puVar15;
          func_0x00010006c00c(uVar33,uVar37);
          *puVar17 = uVar33;
          puVar17[1] = uVar37;
        }
        else {
          uVar33 = *puVar15;
          puVar17[1] = puVar15[1];
          *puVar17 = uVar33;
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x70)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x70));
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x74));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x74));
        uVar33 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar33;
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x78));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x78));
        uVar33 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar33;
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x7c));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x7c));
        uVar23 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar23;
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x80));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x80));
        uVar37 = puVar15[1];
        func_0x000107c61434();
        func_0x000107c61434(uVar33);
        func_0x000107c61434(uVar23);
        if (uVar37 >> 0x3c < 0xf) {
          uVar33 = *puVar15;
          func_0x00010006c00c(uVar33,uVar37);
          *puVar17 = uVar33;
          puVar17[1] = uVar37;
        }
        else {
          uVar33 = *puVar15;
          puVar17[1] = puVar15[1];
          *puVar17 = uVar33;
        }
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x84));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x84));
        lVar46 = 0;
        func_0x000100b91fbc();
        lVar48 = *(long *)(lVar46 + -8);
        puVar18 = puVar15;
        (**(code **)(lVar48 + 0x30))(puVar15,1,lVar46);
        if ((int)puVar18 == 0) {
          uVar33 = puVar15[1];
          *puVar17 = *puVar15;
          puVar17[1] = uVar33;
          uVar33 = puVar15[2];
          uVar44 = puVar15[5];
          uVar23 = puVar15[4];
          puVar17[3] = puVar15[3];
          puVar17[2] = uVar33;
          puVar17[5] = uVar44;
          puVar17[4] = uVar23;
          uVar33 = puVar15[6];
          uVar23 = puVar15[7];
          puVar17[6] = uVar33;
          puVar17[7] = uVar23;
          uVar23 = puVar15[8];
          puVar17[8] = uVar23;
          lVar50 = (long)*(int *)(lVar46 + 0x28);
          func_0x000107c61434();
          func_0x000107c61434(uVar33);
          func_0x000107c61434(uVar23);
          lVar31 = (long)puVar15 + lVar50;
          (*pcVar42)(lVar31,1,lVar43);
          if ((int)lVar31 == 0) {
            (**(code **)(lVar25 + 0x10))((long)puVar17 + lVar50,(long)puVar15 + lVar50,lVar43);
            (**(code **)(lVar25 + 0x38))((long)puVar17 + lVar50,0,1,lVar43);
          }
          else {
            lVar31 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            func_0x000107c610b4((long)puVar17 + lVar50,(long)puVar15 + lVar50,
                                *(undefined8 *)(*(long *)(lVar31 + -8) + 0x40));
          }
          puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar46 + 0x2c));
          puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x2c));
          uVar33 = puVar16[1];
          *puVar18 = *puVar16;
          puVar18[1] = uVar33;
          puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar46 + 0x30));
          puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x30));
          uVar33 = puVar16[1];
          *puVar18 = *puVar16;
          puVar18[1] = uVar33;
          lVar50 = (long)*(int *)(lVar46 + 0x34);
          func_0x000107c61434();
          func_0x000107c61434(uVar33);
          lVar31 = (long)puVar15 + lVar50;
          (*pcVar42)(lVar31,1,lVar43);
          if ((int)lVar31 == 0) {
            (**(code **)(lVar25 + 0x10))((long)puVar17 + lVar50,(long)puVar15 + lVar50,lVar43);
            (**(code **)(lVar25 + 0x38))((long)puVar17 + lVar50,0,1,lVar43);
          }
          else {
            lVar31 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            func_0x000107c610b4((long)puVar17 + lVar50,(long)puVar15 + lVar50,
                                *(undefined8 *)(*(long *)(lVar31 + -8) + 0x40));
          }
          puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar46 + 0x38));
          puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x38));
          uVar33 = puVar16[1];
          *puVar18 = *puVar16;
          puVar18[1] = uVar33;
          puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar46 + 0x3c));
          puVar15 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x3c));
          uVar33 = puVar15[1];
          *puVar18 = *puVar15;
          puVar18[1] = uVar33;
          pcVar30 = *(code **)(lVar48 + 0x38);
          func_0x000107c61434();
          func_0x000107c61434(uVar33);
          (*pcVar30)(puVar17,0,1,lVar46);
        }
        else {
          lVar46 = 0x112db39a8;
          func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
          func_0x000107c610b4(puVar17,puVar15,*(undefined8 *)(*(long *)(lVar46 + -8) + 0x40));
        }
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x88));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x88));
        lVar46 = puVar15[1];
        if (lVar46 == 0) {
          uVar33 = puVar15[0x10];
          uVar44 = puVar15[0x13];
          uVar23 = puVar15[0x12];
          puVar17[0x11] = puVar15[0x11];
          puVar17[0x10] = uVar33;
          puVar17[0x13] = uVar44;
          puVar17[0x12] = uVar23;
          *(undefined1 *)(puVar17 + 0x14) = *(undefined1 *)(puVar15 + 0x14);
          uVar33 = puVar15[8];
          uVar44 = puVar15[0xb];
          uVar23 = puVar15[10];
          puVar17[9] = puVar15[9];
          puVar17[8] = uVar33;
          puVar17[0xb] = uVar44;
          puVar17[10] = uVar23;
          uVar44 = puVar15[0xc];
          uVar23 = puVar15[0xf];
          uVar33 = puVar15[0xe];
          puVar17[0xd] = puVar15[0xd];
          puVar17[0xc] = uVar44;
          puVar17[0xf] = uVar23;
          puVar17[0xe] = uVar33;
          uVar33 = *puVar15;
          uVar44 = puVar15[3];
          uVar23 = puVar15[2];
          puVar17[1] = puVar15[1];
          *puVar17 = uVar33;
          puVar17[3] = uVar44;
          puVar17[2] = uVar23;
          uVar44 = puVar15[4];
          uVar23 = puVar15[7];
          uVar33 = puVar15[6];
          puVar17[5] = puVar15[5];
          puVar17[4] = uVar44;
          puVar17[7] = uVar23;
          puVar17[6] = uVar33;
        }
        else {
          *puVar17 = *puVar15;
          puVar17[1] = lVar46;
          lVar46 = puVar15[8];
          func_0x000107c61434();
          if (lVar46 == 1) {
            uVar33 = puVar15[2];
            uVar44 = puVar15[5];
            uVar23 = puVar15[4];
            puVar17[3] = puVar15[3];
            puVar17[2] = uVar33;
            puVar17[5] = uVar44;
            puVar17[4] = uVar23;
            uVar33 = puVar15[6];
            puVar17[7] = puVar15[7];
            puVar17[6] = uVar33;
            puVar17[8] = puVar15[8];
          }
          else {
            lVar48 = puVar15[4];
            if (lVar48 == 1) {
              uVar33 = puVar15[2];
              uVar44 = puVar15[5];
              uVar23 = puVar15[4];
              puVar17[3] = puVar15[3];
              puVar17[2] = uVar33;
              puVar17[5] = uVar44;
              puVar17[4] = uVar23;
              puVar17[6] = puVar15[6];
            }
            else {
              uVar33 = puVar15[2];
              puVar17[3] = puVar15[3];
              puVar17[2] = uVar33;
              uVar33 = puVar15[5];
              uVar23 = puVar15[6];
              puVar17[4] = lVar48;
              puVar17[5] = uVar33;
              puVar17[6] = uVar23;
              func_0x000107c61434();
              func_0x000107c61434(uVar23);
            }
            puVar17[7] = puVar15[7];
            puVar17[8] = lVar46;
            func_0x000107c61434(lVar46);
          }
          lVar46 = puVar15[0xf];
          if (lVar46 == 1) {
            uVar33 = puVar15[9];
            puVar17[10] = puVar15[10];
            puVar17[9] = uVar33;
            uVar33 = puVar15[0xb];
            puVar17[0xc] = puVar15[0xc];
            puVar17[0xb] = uVar33;
            uVar33 = puVar15[0xd];
            puVar17[0xe] = puVar15[0xe];
            puVar17[0xd] = uVar33;
            puVar17[0xf] = puVar15[0xf];
          }
          else {
            lVar48 = puVar15[0xb];
            if (lVar48 == 1) {
              uVar33 = puVar15[9];
              puVar17[10] = puVar15[10];
              puVar17[9] = uVar33;
              uVar33 = puVar15[0xb];
              puVar17[0xc] = puVar15[0xc];
              puVar17[0xb] = uVar33;
              puVar17[0xd] = puVar15[0xd];
            }
            else {
              uVar33 = puVar15[9];
              puVar17[10] = puVar15[10];
              puVar17[9] = uVar33;
              uVar33 = puVar15[0xc];
              uVar23 = puVar15[0xd];
              puVar17[0xb] = lVar48;
              puVar17[0xc] = uVar33;
              puVar17[0xd] = uVar23;
              func_0x000107c61434();
              func_0x000107c61434(uVar23);
            }
            puVar17[0xe] = puVar15[0xe];
            puVar17[0xf] = lVar46;
            func_0x000107c61434(lVar46);
          }
          *(undefined2 *)(puVar17 + 0x10) = *(undefined2 *)(puVar15 + 0x10);
          uVar33 = puVar15[0x11];
          puVar17[0x12] = puVar15[0x12];
          puVar17[0x11] = uVar33;
          puVar17[0x13] = puVar15[0x13];
          *(undefined1 *)(puVar17 + 0x14) = *(undefined1 *)(puVar15 + 0x14);
          func_0x000107c61434();
        }
        *(undefined4 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x8c)) =
             *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x8c));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x90)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x90));
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x94));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x94));
        uVar33 = *puVar15;
        uVar44 = puVar15[3];
        uVar23 = puVar15[2];
        puVar17[1] = puVar15[1];
        *puVar17 = uVar33;
        puVar17[3] = uVar44;
        puVar17[2] = uVar23;
        uVar33 = puVar15[4];
        uVar44 = puVar15[7];
        uVar23 = puVar15[6];
        puVar17[5] = puVar15[5];
        puVar17[4] = uVar33;
        puVar17[7] = uVar44;
        puVar17[6] = uVar23;
        uVar44 = puVar15[0xc];
        uVar23 = puVar15[0xf];
        uVar33 = puVar15[0xe];
        puVar17[0xd] = puVar15[0xd];
        puVar17[0xc] = uVar44;
        puVar17[0xf] = uVar23;
        puVar17[0xe] = uVar33;
        uVar44 = puVar15[8];
        uVar23 = puVar15[0xb];
        uVar33 = puVar15[10];
        puVar17[9] = puVar15[9];
        puVar17[8] = uVar44;
        puVar17[0xb] = uVar23;
        puVar17[10] = uVar33;
        uVar33 = *(undefined8 *)((long)puVar15 + 0xa9);
        *(undefined8 *)((long)puVar17 + 0xb1) = *(undefined8 *)((long)puVar15 + 0xb1);
        *(undefined8 *)((long)puVar17 + 0xa9) = uVar33;
        uVar33 = puVar15[0x12];
        uVar44 = puVar15[0x15];
        uVar23 = puVar15[0x14];
        puVar17[0x13] = puVar15[0x13];
        puVar17[0x12] = uVar33;
        puVar17[0x15] = uVar44;
        puVar17[0x14] = uVar23;
        uVar33 = puVar15[0x10];
        puVar17[0x11] = puVar15[0x11];
        puVar17[0x10] = uVar33;
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x98)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x98));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar22 + 0x9c)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar22 + 0x9c));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xa0)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xa0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xa4)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xa4));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xa8)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xa8));
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xac));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xac));
        lVar46 = puVar15[1];
        if (lVar46 == 0) {
          uVar33 = *puVar15;
          uVar44 = puVar15[3];
          uVar23 = puVar15[2];
          puVar17[1] = puVar15[1];
          *puVar17 = uVar33;
          puVar17[3] = uVar44;
          puVar17[2] = uVar23;
        }
        else {
          *puVar17 = *puVar15;
          puVar17[1] = lVar46;
          uVar33 = puVar15[3];
          puVar17[2] = puVar15[2];
          puVar17[3] = uVar33;
          func_0x000107c61434();
          func_0x000107c61434(uVar33);
        }
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xb0)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xb0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xb4)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xb4));
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xb8));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xb8));
        lVar46 = puVar15[1];
        if (lVar46 == 0) {
          uVar33 = puVar15[0x10];
          uVar44 = puVar15[0x13];
          uVar23 = puVar15[0x12];
          puVar17[0x11] = puVar15[0x11];
          puVar17[0x10] = uVar33;
          puVar17[0x13] = uVar44;
          puVar17[0x12] = uVar23;
          *(undefined1 *)(puVar17 + 0x14) = *(undefined1 *)(puVar15 + 0x14);
          uVar33 = puVar15[8];
          uVar44 = puVar15[0xb];
          uVar23 = puVar15[10];
          puVar17[9] = puVar15[9];
          puVar17[8] = uVar33;
          puVar17[0xb] = uVar44;
          puVar17[10] = uVar23;
          uVar44 = puVar15[0xc];
          uVar23 = puVar15[0xf];
          uVar33 = puVar15[0xe];
          puVar17[0xd] = puVar15[0xd];
          puVar17[0xc] = uVar44;
          puVar17[0xf] = uVar23;
          puVar17[0xe] = uVar33;
          uVar33 = *puVar15;
          uVar44 = puVar15[3];
          uVar23 = puVar15[2];
          puVar17[1] = puVar15[1];
          *puVar17 = uVar33;
          puVar17[3] = uVar44;
          puVar17[2] = uVar23;
          uVar44 = puVar15[4];
          uVar23 = puVar15[7];
          uVar33 = puVar15[6];
          puVar17[5] = puVar15[5];
          puVar17[4] = uVar44;
          puVar17[7] = uVar23;
          puVar17[6] = uVar33;
        }
        else {
          *puVar17 = *puVar15;
          puVar17[1] = lVar46;
          lVar46 = puVar15[8];
          func_0x000107c61434();
          if (lVar46 == 1) {
            uVar33 = puVar15[2];
            uVar44 = puVar15[5];
            uVar23 = puVar15[4];
            puVar17[3] = puVar15[3];
            puVar17[2] = uVar33;
            puVar17[5] = uVar44;
            puVar17[4] = uVar23;
            uVar33 = puVar15[6];
            puVar17[7] = puVar15[7];
            puVar17[6] = uVar33;
            puVar17[8] = puVar15[8];
          }
          else {
            lVar48 = puVar15[4];
            if (lVar48 == 1) {
              uVar33 = puVar15[2];
              uVar44 = puVar15[5];
              uVar23 = puVar15[4];
              puVar17[3] = puVar15[3];
              puVar17[2] = uVar33;
              puVar17[5] = uVar44;
              puVar17[4] = uVar23;
              puVar17[6] = puVar15[6];
            }
            else {
              uVar33 = puVar15[2];
              puVar17[3] = puVar15[3];
              puVar17[2] = uVar33;
              uVar33 = puVar15[5];
              uVar23 = puVar15[6];
              puVar17[4] = lVar48;
              puVar17[5] = uVar33;
              puVar17[6] = uVar23;
              func_0x000107c61434();
              func_0x000107c61434(uVar23);
            }
            puVar17[7] = puVar15[7];
            puVar17[8] = lVar46;
            func_0x000107c61434(lVar46);
          }
          lVar46 = puVar15[0xf];
          if (lVar46 == 1) {
            uVar33 = puVar15[9];
            puVar17[10] = puVar15[10];
            puVar17[9] = uVar33;
            uVar33 = puVar15[0xb];
            puVar17[0xc] = puVar15[0xc];
            puVar17[0xb] = uVar33;
            uVar33 = puVar15[0xd];
            puVar17[0xe] = puVar15[0xe];
            puVar17[0xd] = uVar33;
            puVar17[0xf] = puVar15[0xf];
          }
          else {
            lVar48 = puVar15[0xb];
            if (lVar48 == 1) {
              uVar33 = puVar15[9];
              puVar17[10] = puVar15[10];
              puVar17[9] = uVar33;
              uVar33 = puVar15[0xb];
              puVar17[0xc] = puVar15[0xc];
              puVar17[0xb] = uVar33;
              puVar17[0xd] = puVar15[0xd];
            }
            else {
              uVar33 = puVar15[9];
              puVar17[10] = puVar15[10];
              puVar17[9] = uVar33;
              uVar33 = puVar15[0xc];
              uVar23 = puVar15[0xd];
              puVar17[0xb] = lVar48;
              puVar17[0xc] = uVar33;
              puVar17[0xd] = uVar23;
              func_0x000107c61434();
              func_0x000107c61434(uVar23);
            }
            puVar17[0xe] = puVar15[0xe];
            puVar17[0xf] = lVar46;
            func_0x000107c61434(lVar46);
          }
          *(undefined2 *)(puVar17 + 0x10) = *(undefined2 *)(puVar15 + 0x10);
          uVar33 = puVar15[0x11];
          puVar17[0x12] = puVar15[0x12];
          puVar17[0x11] = uVar33;
          puVar17[0x13] = puVar15[0x13];
          *(undefined1 *)(puVar17 + 0x14) = *(undefined1 *)(puVar15 + 0x14);
          func_0x000107c61434();
        }
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xbc));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xbc));
        lVar46 = puVar15[1];
        if (lVar46 == 0) {
          uVar33 = puVar15[0x10];
          uVar44 = puVar15[0x13];
          uVar23 = puVar15[0x12];
          puVar17[0x11] = puVar15[0x11];
          puVar17[0x10] = uVar33;
          puVar17[0x13] = uVar44;
          puVar17[0x12] = uVar23;
          *(undefined1 *)(puVar17 + 0x14) = *(undefined1 *)(puVar15 + 0x14);
          uVar33 = puVar15[8];
          uVar44 = puVar15[0xb];
          uVar23 = puVar15[10];
          puVar17[9] = puVar15[9];
          puVar17[8] = uVar33;
          puVar17[0xb] = uVar44;
          puVar17[10] = uVar23;
          uVar44 = puVar15[0xc];
          uVar23 = puVar15[0xf];
          uVar33 = puVar15[0xe];
          puVar17[0xd] = puVar15[0xd];
          puVar17[0xc] = uVar44;
          puVar17[0xf] = uVar23;
          puVar17[0xe] = uVar33;
          uVar33 = *puVar15;
          uVar44 = puVar15[3];
          uVar23 = puVar15[2];
          puVar17[1] = puVar15[1];
          *puVar17 = uVar33;
          puVar17[3] = uVar44;
          puVar17[2] = uVar23;
          uVar44 = puVar15[4];
          uVar23 = puVar15[7];
          uVar33 = puVar15[6];
          puVar17[5] = puVar15[5];
          puVar17[4] = uVar44;
          puVar17[7] = uVar23;
          puVar17[6] = uVar33;
        }
        else {
          *puVar17 = *puVar15;
          puVar17[1] = lVar46;
          lVar46 = puVar15[8];
          func_0x000107c61434();
          if (lVar46 == 1) {
            uVar33 = puVar15[2];
            uVar44 = puVar15[5];
            uVar23 = puVar15[4];
            puVar17[3] = puVar15[3];
            puVar17[2] = uVar33;
            puVar17[5] = uVar44;
            puVar17[4] = uVar23;
            uVar33 = puVar15[6];
            puVar17[7] = puVar15[7];
            puVar17[6] = uVar33;
            puVar17[8] = puVar15[8];
          }
          else {
            lVar48 = puVar15[4];
            if (lVar48 == 1) {
              uVar33 = puVar15[2];
              uVar44 = puVar15[5];
              uVar23 = puVar15[4];
              puVar17[3] = puVar15[3];
              puVar17[2] = uVar33;
              puVar17[5] = uVar44;
              puVar17[4] = uVar23;
              puVar17[6] = puVar15[6];
            }
            else {
              uVar33 = puVar15[2];
              puVar17[3] = puVar15[3];
              puVar17[2] = uVar33;
              uVar33 = puVar15[5];
              uVar23 = puVar15[6];
              puVar17[4] = lVar48;
              puVar17[5] = uVar33;
              puVar17[6] = uVar23;
              func_0x000107c61434();
              func_0x000107c61434(uVar23);
            }
            puVar17[7] = puVar15[7];
            puVar17[8] = lVar46;
            func_0x000107c61434(lVar46);
          }
          lVar46 = puVar15[0xf];
          if (lVar46 == 1) {
            uVar33 = puVar15[9];
            puVar17[10] = puVar15[10];
            puVar17[9] = uVar33;
            uVar33 = puVar15[0xb];
            puVar17[0xc] = puVar15[0xc];
            puVar17[0xb] = uVar33;
            uVar33 = puVar15[0xd];
            puVar17[0xe] = puVar15[0xe];
            puVar17[0xd] = uVar33;
            puVar17[0xf] = puVar15[0xf];
          }
          else {
            lVar48 = puVar15[0xb];
            if (lVar48 == 1) {
              uVar33 = puVar15[9];
              puVar17[10] = puVar15[10];
              puVar17[9] = uVar33;
              uVar33 = puVar15[0xb];
              puVar17[0xc] = puVar15[0xc];
              puVar17[0xb] = uVar33;
              puVar17[0xd] = puVar15[0xd];
            }
            else {
              uVar33 = puVar15[9];
              puVar17[10] = puVar15[10];
              puVar17[9] = uVar33;
              uVar33 = puVar15[0xc];
              uVar23 = puVar15[0xd];
              puVar17[0xb] = lVar48;
              puVar17[0xc] = uVar33;
              puVar17[0xd] = uVar23;
              func_0x000107c61434();
              func_0x000107c61434(uVar23);
            }
            puVar17[0xe] = puVar15[0xe];
            puVar17[0xf] = lVar46;
            func_0x000107c61434(lVar46);
          }
          *(undefined2 *)(puVar17 + 0x10) = *(undefined2 *)(puVar15 + 0x10);
          uVar33 = puVar15[0x11];
          puVar17[0x12] = puVar15[0x12];
          puVar17[0x11] = uVar33;
          puVar17[0x13] = puVar15[0x13];
          *(undefined1 *)(puVar17 + 0x14) = *(undefined1 *)(puVar15 + 0x14);
          func_0x000107c61434();
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xc0)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xc0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xc4)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xc4));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar22 + 200)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar22 + 200));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar22 + 0xcc)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar22 + 0xcc));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x14)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x14));
        uVar44 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x18));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x18)) = uVar44;
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x1c));
        puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x1c));
        uVar33 = *puVar15;
        puVar17[1] = puVar15[1];
        *puVar17 = uVar33;
        uVar33 = puVar15[2];
        uVar23 = puVar15[3];
        puVar17[2] = uVar33;
        puVar17[3] = uVar23;
        uVar23 = puVar15[4];
        puVar17[4] = uVar23;
        lVar46 = 0;
        func_0x000100b92084();
        puVar17 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar46 + 0x1c));
        puVar15 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x1c));
        lVar46 = 0;
        func_0x000100b92194();
        lVar22 = *(long *)(lVar46 + -8);
        pcVar30 = *(code **)(lVar22 + 0x30);
        func_0x000107c61434(uVar44);
        func_0x000107c61434(uVar33);
        func_0x000107c61434(uVar23);
        puVar18 = puVar15;
        (*pcVar30)(puVar15,1,lVar46);
        if ((int)puVar18 == 0) {
          uVar33 = puVar15[1];
          *puVar17 = *puVar15;
          puVar17[1] = uVar33;
          uVar23 = puVar15[3];
          puVar17[2] = puVar15[2];
          puVar17[3] = uVar23;
          uVar44 = puVar15[5];
          puVar17[4] = puVar15[4];
          puVar17[5] = uVar44;
          puVar17[6] = puVar15[6];
          *(undefined1 *)(puVar17 + 7) = *(undefined1 *)(puVar15 + 7);
          puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar46 + 0x14));
          puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x14));
          lVar48 = 0;
          func_0x000100b922c8();
          lVar31 = *(long *)(lVar48 + -8);
          pcVar30 = *(code **)(lVar31 + 0x30);
          func_0x000107c61434(uVar33);
          func_0x000107c61434(uVar23);
          func_0x000107c61434(uVar44);
          puVar19 = puVar16;
          (*pcVar30)(puVar16,1,lVar48);
          if ((int)puVar19 == 0) {
            uVar33 = puVar16[1];
            *puVar18 = *puVar16;
            puVar18[1] = uVar33;
            uVar33 = puVar16[2];
            uVar44 = puVar16[5];
            uVar23 = puVar16[4];
            puVar18[3] = puVar16[3];
            puVar18[2] = uVar33;
            puVar18[5] = uVar44;
            puVar18[4] = uVar23;
            uVar33 = puVar16[7];
            puVar18[6] = puVar16[6];
            puVar18[7] = uVar33;
            lVar41 = (long)*(int *)(lVar48 + 0x28);
            func_0x000107c61434();
            func_0x000107c61434(uVar33);
            lVar50 = (long)puVar16 + lVar41;
            (*pcVar42)(lVar50,1,lVar43);
            if ((int)lVar50 == 0) {
              (**(code **)(lVar25 + 0x10))((long)puVar18 + lVar41,(long)puVar16 + lVar41,lVar43);
              (**(code **)(lVar25 + 0x38))((long)puVar18 + lVar41,0,1,lVar43);
            }
            else {
              lVar50 = 0x112d3bc20;
              func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
              func_0x000107c610b4((long)puVar18 + lVar41,(long)puVar16 + lVar41,
                                  *(undefined8 *)(*(long *)(lVar50 + -8) + 0x40));
            }
            puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar48 + 0x2c));
            puVar6 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar48 + 0x2c));
            uVar33 = puVar6[1];
            *puVar19 = *puVar6;
            puVar19[1] = uVar33;
            puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar48 + 0x30));
            puVar6 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar48 + 0x30));
            uVar33 = puVar6[1];
            *puVar19 = *puVar6;
            puVar19[1] = uVar33;
            lVar41 = (long)*(int *)(lVar48 + 0x34);
            func_0x000107c61434();
            func_0x000107c61434(uVar33);
            lVar50 = (long)puVar16 + lVar41;
            (*pcVar42)(lVar50,1,lVar43);
            if ((int)lVar50 == 0) {
              (**(code **)(lVar25 + 0x10))((long)puVar18 + lVar41,(long)puVar16 + lVar41,lVar43);
              (**(code **)(lVar25 + 0x38))((long)puVar18 + lVar41,0,1,lVar43);
            }
            else {
              lVar43 = 0x112d3bc20;
              func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
              func_0x000107c610b4((long)puVar18 + lVar41,(long)puVar16 + lVar41,
                                  *(undefined8 *)(*(long *)(lVar43 + -8) + 0x40));
            }
            puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar48 + 0x38));
            puVar16 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar48 + 0x38));
            uVar33 = puVar16[1];
            *puVar19 = *puVar16;
            puVar19[1] = uVar33;
            pcVar42 = *(code **)(lVar31 + 0x38);
            func_0x000107c61434();
            (*pcVar42)(puVar18,0,1,lVar48);
          }
          else {
            lVar43 = 0x112dd1600;
            func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
            func_0x000107c610b4(puVar18,puVar16,*(undefined8 *)(*(long *)(lVar43 + -8) + 0x40));
          }
          puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar46 + 0x18));
          puVar15 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar46 + 0x18));
          lVar43 = 0;
          func_0x000100b92390();
          lVar25 = *(long *)(lVar43 + -8);
          puVar16 = puVar15;
          (**(code **)(lVar25 + 0x30))(puVar15,1,lVar43);
          if ((int)puVar16 == 0) {
            uVar33 = puVar15[1];
            *puVar18 = *puVar15;
            puVar18[1] = uVar33;
            lVar31 = (long)*(int *)(lVar43 + 0x14);
            pcVar42 = *(code **)(lVar21 + 0x30);
            func_0x000107c61434();
            lVar48 = (long)puVar15 + lVar31;
            (*pcVar42)(lVar48,1,lVar20);
            if ((int)lVar48 == 0) {
              (*pcVar28)((long)puVar18 + lVar31,(long)puVar15 + lVar31,lVar20);
              (**(code **)(lVar21 + 0x38))((long)puVar18 + lVar31,0,1,lVar20);
            }
            else {
              lVar20 = 0x112d36580;
              func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
              func_0x000107c610b4((long)puVar18 + lVar31,(long)puVar15 + lVar31,
                                  *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
            }
            (**(code **)(lVar25 + 0x38))(puVar18,0,1,lVar43);
          }
          else {
            lVar20 = 0x112dd1458;
            func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
            func_0x000107c610b4(puVar18,puVar15,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
          }
          (**(code **)(lVar22 + 0x38))(puVar17,0,1,lVar46);
        }
        else {
          lVar20 = 0x112dd1460;
          func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
          func_0x000107c610b4(puVar17,puVar15,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x20)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x20));
        puVar17 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar32 + 0x24));
        puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x24));
        uVar33 = puVar2[1];
        *puVar17 = *puVar2;
        puVar17[1] = uVar33;
        pcVar28 = *(code **)(lVar35 + 0x38);
        func_0x000107c61434();
        (*pcVar28)(puVar3,0,1,lVar32);
        puVar29 = (undefined8 *)((ulong)puVar29 & 0xffffffff);
        goto LAB_1037cac80;
      }
      lVar20 = 0x112e9b260;
      func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
      func_0x000107c610b4(puVar3,puVar2,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
    }
LAB_1037c97c8:
    puVar29 = (undefined8 *)((ulong)puVar29 & 0xffffffff);
  }
LAB_1037cac80:
  func_0x000107c6159c(puVar1,lVar14,puVar29);
  (**(code **)(lVar38 + 0x38))(puVar1,0,1,lVar14);
LAB_1037cacac:
  iVar13 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar20 = 0;
  func_0x000107c5eea4();
  lVar32 = *(long *)(lVar20 + -8);
  pcVar28 = *(code **)(lVar32 + 0x10);
  (*pcVar28)((long)param_1 + (long)iVar13,(long)param_2 + (long)iVar13,lVar20);
  lVar35 = (long)*(int *)(param_3 + 0x24);
  pcVar42 = *(code **)(lVar32 + 0x30);
  lVar14 = (long)param_2 + lVar35;
  (*pcVar42)(lVar14,1,lVar20);
  if ((int)lVar14 == 0) {
    (*pcVar28)((long)param_1 + lVar35,(long)param_2 + lVar35,lVar20);
    (**(code **)(lVar32 + 0x38))((long)param_1 + lVar35,0,1,lVar20);
  }
  else {
    lVar14 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar35,(long)param_2 + lVar35,
                        *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  }
  lVar35 = (long)*(int *)(param_3 + 0x28);
  lVar14 = (long)param_2 + lVar35;
  (*pcVar42)(lVar14,1,lVar20);
  if ((int)lVar14 == 0) {
    (*pcVar28)((long)param_1 + lVar35,(long)param_2 + lVar35,lVar20);
    (**(code **)(lVar32 + 0x38))((long)param_1 + lVar35,0,1,lVar20);
  }
  else {
    lVar14 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar35,(long)param_2 + lVar35,
                        *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar14 = 0;
  func_0x000100b91acc();
  lVar20 = *(long *)(lVar14 + -8);
  puVar29 = puVar2;
  (**(code **)(lVar20 + 0x30))(puVar2,1,lVar14);
  if ((int)puVar29 == 0) {
    puVar29 = puVar2;
    func_0x000107c614c4(puVar2,lVar14);
    if ((int)puVar29 == 1) {
      uVar33 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar33;
      uVar33 = puVar2[2];
      puVar1[2] = uVar33;
      lVar32 = 0;
      func_0x000100b91790();
      puVar29 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x18));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x18));
      lVar35 = 0;
      func_0x000100b918b4();
      lVar46 = *(long *)(lVar35 + -8);
      pcVar28 = *(code **)(lVar46 + 0x30);
      func_0x000107c61434(uVar33);
      puVar17 = puVar3;
      (*pcVar28)(puVar3,1,lVar35);
      if ((int)puVar17 == 0) {
        uVar23 = puVar3[1];
        *puVar29 = *puVar3;
        puVar29[1] = uVar23;
        uVar33 = puVar3[2];
        uVar44 = puVar3[3];
        puVar29[2] = uVar33;
        puVar29[3] = uVar44;
        iVar13 = *(int *)(lVar35 + 0x1c);
        lVar38 = 0;
        func_0x000107c5eec8();
        lVar22 = *(long *)(lVar38 + -8);
        pcVar42 = *(code **)(lVar22 + 0x10);
        func_0x000107c61434(uVar23);
        func_0x000107c61174(uVar33);
        func_0x000107c61174(uVar44);
        (*pcVar42)((long)puVar29 + (long)iVar13,(long)puVar3 + (long)iVar13,lVar38);
        puVar17 = (undefined8 *)((long)puVar29 + (long)*(int *)(lVar35 + 0x20));
        puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x20));
        uVar33 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar33;
        uVar44 = *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x24));
        *(undefined8 *)((long)puVar29 + (long)*(int *)(lVar35 + 0x24)) = uVar44;
        puVar17 = (undefined8 *)((long)puVar29 + (long)*(int *)(lVar35 + 0x28));
        puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x28));
        uVar33 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar33;
        uVar47 = *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x2c));
        *(undefined8 *)((long)puVar29 + (long)*(int *)(lVar35 + 0x2c)) = uVar47;
        puVar17 = (undefined8 *)((long)puVar29 + (long)*(int *)(lVar35 + 0x30));
        puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x30));
        uVar23 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar23;
        lVar43 = (long)*(int *)(lVar35 + 0x34);
        pcVar28 = *(code **)(lVar22 + 0x30);
        func_0x000107c61434();
        func_0x000107c61174(uVar44);
        func_0x000107c61434(uVar33);
        func_0x000107c61174(uVar47);
        func_0x000107c61434(uVar23);
        lVar21 = (long)puVar3 + lVar43;
        (*pcVar28)(lVar21,1,lVar38);
        if ((int)lVar21 == 0) {
          (*pcVar42)((long)puVar29 + lVar43,(long)puVar3 + lVar43,lVar38);
          (**(code **)(lVar22 + 0x38))((long)puVar29 + lVar43,0,1,lVar38);
        }
        else {
          lVar21 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar29 + lVar43,(long)puVar3 + lVar43,
                              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
        }
        puVar17 = (undefined8 *)((long)puVar29 + (long)*(int *)(lVar35 + 0x38));
        puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x38));
        uVar33 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar33;
        puVar17 = (undefined8 *)((long)puVar29 + (long)*(int *)(lVar35 + 0x3c));
        puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar35 + 0x3c));
        uVar33 = puVar3[1];
        *puVar17 = *puVar3;
        puVar17[1] = uVar33;
        pcVar28 = *(code **)(lVar46 + 0x38);
        func_0x000107c61434();
        func_0x000107c61434(uVar33);
        (*pcVar28)(puVar29,0,1,lVar35);
      }
      else {
        lVar35 = 0x112dd42a0;
        func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
        func_0x000107c610b4(puVar29,puVar3,*(undefined8 *)(*(long *)(lVar35 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x1c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x1c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x20));
      puVar29 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x24));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x24));
      uVar33 = puVar3[1];
      *puVar29 = *puVar3;
      puVar29[1] = uVar33;
      uVar23 = puVar3[3];
      puVar29[2] = puVar3[2];
      puVar29[3] = uVar23;
      uVar44 = puVar3[5];
      puVar29[4] = puVar3[4];
      puVar29[5] = uVar44;
      uVar47 = puVar3[6];
      puVar29[7] = puVar3[7];
      puVar29[6] = uVar47;
      uVar47 = puVar3[9];
      puVar29[8] = puVar3[8];
      puVar29[9] = uVar47;
      *(undefined1 *)(puVar29 + 0xc) = *(undefined1 *)(puVar3 + 0xc);
      uVar45 = puVar3[0xb];
      puVar29[10] = puVar3[10];
      puVar29[0xb] = uVar45;
      puVar29[0xd] = puVar3[0xd];
      uVar45 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x28));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x28)) = uVar45;
      func_0x000107c61174();
      func_0x000107c61434(uVar33);
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar44);
      func_0x000107c61434(uVar47);
      func_0x000107c61174(uVar45);
      uVar33 = 1;
    }
    else {
      lVar32 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar32 + -8) + 0x10))(puVar1,puVar2,lVar32);
      lVar32 = 0;
      func_0x000100b915bc();
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x14)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x14));
      puVar29 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x18));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x18));
      lVar35 = puVar3[2];
      if (lVar35 == 1) {
        uVar33 = puVar3[4];
        uVar44 = puVar3[7];
        uVar23 = puVar3[6];
        puVar29[5] = puVar3[5];
        puVar29[4] = uVar33;
        puVar29[7] = uVar44;
        puVar29[6] = uVar23;
        *(undefined1 *)(puVar29 + 8) = *(undefined1 *)(puVar3 + 8);
        uVar44 = *puVar3;
        uVar23 = puVar3[3];
        uVar33 = puVar3[2];
        puVar29[1] = puVar3[1];
        *puVar29 = uVar44;
        puVar29[3] = uVar23;
        puVar29[2] = uVar33;
      }
      else {
        *(undefined4 *)puVar29 = *(undefined4 *)puVar3;
        puVar29[1] = puVar3[1];
        puVar29[2] = lVar35;
        uVar33 = puVar3[3];
        puVar29[4] = puVar3[4];
        puVar29[3] = uVar33;
        uVar33 = puVar3[5];
        uVar23 = puVar3[6];
        puVar29[5] = uVar33;
        puVar29[6] = uVar23;
        uVar23 = puVar3[7];
        puVar29[7] = uVar23;
        *(undefined1 *)(puVar29 + 8) = *(undefined1 *)(puVar3 + 8);
        func_0x000107c61434();
        func_0x000107c61434(uVar33);
        func_0x000107c61434(uVar23);
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x1c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x1c));
      puVar29 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x20));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x20));
      uVar33 = puVar3[1];
      *puVar29 = *puVar3;
      puVar29[1] = uVar33;
      uVar23 = puVar3[3];
      puVar29[2] = puVar3[2];
      puVar29[3] = uVar23;
      uVar44 = puVar3[5];
      puVar29[4] = puVar3[4];
      puVar29[5] = uVar44;
      uVar47 = puVar3[6];
      puVar29[7] = puVar3[7];
      puVar29[6] = uVar47;
      uVar47 = puVar3[9];
      puVar29[8] = puVar3[8];
      puVar29[9] = uVar47;
      *(undefined1 *)(puVar29 + 0xc) = *(undefined1 *)(puVar3 + 0xc);
      uVar45 = puVar3[0xb];
      puVar29[10] = puVar3[10];
      puVar29[0xb] = uVar45;
      puVar29[0xd] = puVar3[0xd];
      puVar29 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x24));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x24));
      lVar35 = puVar3[1];
      func_0x000107c61174();
      func_0x000107c61434(uVar33);
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar44);
      func_0x000107c61434(uVar47);
      if (lVar35 == 0) {
        uVar33 = *puVar3;
        uVar44 = puVar3[3];
        uVar23 = puVar3[2];
        puVar29[1] = puVar3[1];
        *puVar29 = uVar33;
        puVar29[3] = uVar44;
        puVar29[2] = uVar23;
      }
      else {
        *puVar29 = *puVar3;
        puVar29[1] = lVar35;
        uVar33 = puVar3[3];
        puVar29[2] = puVar3[2];
        puVar29[3] = uVar33;
        func_0x000107c61434(lVar35);
        func_0x000107c61434(uVar33);
      }
      puVar29 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x28));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x28));
      uVar33 = puVar3[1];
      *puVar29 = *puVar3;
      puVar29[1] = uVar33;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x2c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x2c));
      puVar29 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x30));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x30));
      uVar33 = puVar3[1];
      *puVar29 = *puVar3;
      puVar29[1] = uVar33;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar32 + 0x34)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar32 + 0x34));
      func_0x000107c61434();
      func_0x000107c61434(uVar33);
      uVar33 = 0;
    }
    func_0x000107c6159c(puVar1,lVar14,uVar33);
    (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar14);
  }
  else {
    lVar14 = 0x112d3b128;
    func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  }
  iVar13 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar13) = *(undefined1 *)((long)param_2 + (long)iVar13);
  iVar13 = *(int *)(param_3 + 0x3c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  puVar4 = (undefined2 *)((long)param_1 + (long)iVar13);
  puVar5 = (undefined2 *)((long)param_2 + (long)iVar13);
  lVar14 = *(long *)(puVar5 + 0x18);
  if (lVar14 == 1) {
    func_0x000107c610b4(puVar4,puVar5,0x301);
  }
  else {
    *puVar4 = *puVar5;
    *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar5 + 4);
    *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(puVar5 + 8);
    *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(puVar5 + 0xc);
    *(undefined1 *)(puVar4 + 0x10) = *(undefined1 *)(puVar5 + 0x10);
    *(undefined8 *)(puVar4 + 0x14) = *(undefined8 *)(puVar5 + 0x14);
    *(long *)(puVar4 + 0x18) = lVar14;
    *(undefined1 *)(puVar4 + 0x20) = *(undefined1 *)(puVar5 + 0x20);
    *(undefined8 *)(puVar4 + 0x1c) = *(undefined8 *)(puVar5 + 0x1c);
    *(undefined1 *)((long)puVar4 + 0x41) = *(undefined1 *)((long)puVar5 + 0x41);
    uVar33 = *(undefined8 *)(puVar5 + 0x28);
    *(undefined8 *)(puVar4 + 0x24) = *(undefined8 *)(puVar5 + 0x24);
    *(undefined8 *)(puVar4 + 0x28) = uVar33;
    puVar4[0x2c] = puVar5[0x2c];
    *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(puVar5 + 0x30);
    *(undefined1 *)(puVar4 + 0x34) = *(undefined1 *)(puVar5 + 0x34);
    *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(puVar5 + 0x38);
    *(undefined1 *)(puVar4 + 0x3c) = *(undefined1 *)(puVar5 + 0x3c);
    uVar23 = *(undefined8 *)(puVar5 + 0x40);
    *(undefined1 *)(puVar4 + 0x44) = *(undefined1 *)(puVar5 + 0x44);
    *(undefined8 *)(puVar4 + 0x40) = uVar23;
    *(undefined1 *)((long)puVar4 + 0x89) = *(undefined1 *)((long)puVar5 + 0x89);
    lVar14 = *(long *)(puVar5 + 0x74);
    func_0x000107c61434();
    func_0x000107c61434(uVar33);
    if (lVar14 == 1) {
      func_0x000107c610b4(puVar4 + 0x48,puVar5 + 0x48,0x101);
    }
    else {
      *(undefined8 *)(puVar4 + 0x48) = *(undefined8 *)(puVar5 + 0x48);
      *(undefined1 *)(puVar4 + 0x4c) = *(undefined1 *)(puVar5 + 0x4c);
      *(undefined8 *)(puVar4 + 0x50) = *(undefined8 *)(puVar5 + 0x50);
      *(undefined1 *)(puVar4 + 0x54) = *(undefined1 *)(puVar5 + 0x54);
      *(undefined8 *)(puVar4 + 0x58) = *(undefined8 *)(puVar5 + 0x58);
      *(undefined1 *)(puVar4 + 0x5c) = *(undefined1 *)(puVar5 + 0x5c);
      *(undefined1 *)(puVar4 + 100) = *(undefined1 *)(puVar5 + 100);
      *(undefined8 *)(puVar4 + 0x60) = *(undefined8 *)(puVar5 + 0x60);
      uVar33 = *(undefined8 *)(puVar5 + 0x68);
      *(undefined1 *)(puVar4 + 0x6c) = *(undefined1 *)(puVar5 + 0x6c);
      *(undefined8 *)(puVar4 + 0x68) = uVar33;
      *(undefined1 *)((long)puVar4 + 0xd9) = *(undefined1 *)((long)puVar5 + 0xd9);
      *(undefined8 *)(puVar4 + 0x70) = *(undefined8 *)(puVar5 + 0x70);
      *(long *)(puVar4 + 0x74) = lVar14;
      uVar33 = *(undefined8 *)(puVar5 + 0x7c);
      *(undefined8 *)(puVar4 + 0x78) = *(undefined8 *)(puVar5 + 0x78);
      *(undefined8 *)(puVar4 + 0x7c) = uVar33;
      *(undefined8 *)(puVar4 + 0x80) = *(undefined8 *)(puVar5 + 0x80);
      *(undefined1 *)(puVar4 + 0x84) = *(undefined1 *)(puVar5 + 0x84);
      *(undefined1 *)(puVar4 + 0x8c) = *(undefined1 *)(puVar5 + 0x8c);
      *(undefined8 *)(puVar4 + 0x88) = *(undefined8 *)(puVar5 + 0x88);
      *(undefined1 *)(puVar4 + 0x94) = *(undefined1 *)(puVar5 + 0x94);
      *(undefined8 *)(puVar4 + 0x90) = *(undefined8 *)(puVar5 + 0x90);
      *(undefined1 *)(puVar4 + 0x9c) = *(undefined1 *)(puVar5 + 0x9c);
      *(undefined8 *)(puVar4 + 0x98) = *(undefined8 *)(puVar5 + 0x98);
      *(undefined1 *)(puVar4 + 0xa4) = *(undefined1 *)(puVar5 + 0xa4);
      *(undefined8 *)(puVar4 + 0xa0) = *(undefined8 *)(puVar5 + 0xa0);
      uVar23 = *(undefined8 *)(puVar5 + 0xac);
      *(undefined8 *)(puVar4 + 0xa8) = *(undefined8 *)(puVar5 + 0xa8);
      *(undefined8 *)(puVar4 + 0xac) = uVar23;
      uVar44 = *(undefined8 *)(puVar5 + 0xb0);
      *(undefined1 *)(puVar4 + 0xb4) = *(undefined1 *)(puVar5 + 0xb4);
      *(undefined8 *)(puVar4 + 0xb0) = uVar44;
      uVar44 = *(undefined8 *)(puVar5 + 0xb8);
      *(undefined1 *)(puVar4 + 0xbc) = *(undefined1 *)(puVar5 + 0xbc);
      *(undefined8 *)(puVar4 + 0xb8) = uVar44;
      uVar44 = *(undefined8 *)(puVar5 + 0xc4);
      *(undefined8 *)(puVar4 + 0xc0) = *(undefined8 *)(puVar5 + 0xc0);
      *(undefined8 *)(puVar4 + 0xc4) = uVar44;
      *(undefined1 *)(puVar4 + 200) = *(undefined1 *)(puVar5 + 200);
      func_0x000107c61434(lVar14);
      func_0x000107c61434(uVar33);
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar44);
    }
    *(undefined1 *)((long)puVar4 + 0x191) = *(undefined1 *)((long)puVar5 + 0x191);
    uVar33 = *(undefined8 *)(puVar5 + 0xd0);
    *(undefined8 *)(puVar4 + 0xcc) = *(undefined8 *)(puVar5 + 0xcc);
    *(undefined8 *)(puVar4 + 0xd0) = uVar33;
    *(undefined1 *)(puVar4 + 0xd4) = *(undefined1 *)(puVar5 + 0xd4);
    if (*(long *)(puVar5 + 0xd8) == 1) {
      uVar33 = *(undefined8 *)(puVar5 + 0xd8);
      *(undefined8 *)(puVar4 + 0xdc) = *(undefined8 *)(puVar5 + 0xdc);
      *(undefined8 *)(puVar4 + 0xd8) = uVar33;
      *(undefined8 *)(puVar4 + 0xe0) = *(undefined8 *)(puVar5 + 0xe0);
    }
    else {
      uVar33 = *(undefined8 *)(puVar5 + 0xdc);
      uVar23 = *(undefined8 *)(puVar5 + 0xe0);
      *(long *)(puVar4 + 0xd8) = *(long *)(puVar5 + 0xd8);
      *(undefined8 *)(puVar4 + 0xdc) = uVar33;
      *(undefined8 *)(puVar4 + 0xe0) = uVar23;
      func_0x000107c61174();
      func_0x000107c61174(uVar33);
      func_0x000107c61174(uVar23);
    }
    *(undefined1 *)(puVar4 + 0xe4) = *(undefined1 *)(puVar5 + 0xe4);
    *(undefined8 *)(puVar4 + 0xe8) = *(undefined8 *)(puVar5 + 0xe8);
    *(undefined1 *)(puVar4 + 0xec) = *(undefined1 *)(puVar5 + 0xec);
    *(undefined8 *)(puVar4 + 0xf0) = *(undefined8 *)(puVar5 + 0xf0);
    *(undefined1 *)(puVar4 + 0xf4) = *(undefined1 *)(puVar5 + 0xf4);
    lVar14 = *(long *)(puVar5 + 0xfc);
    if (lVar14 == 1) {
      uVar33 = *(undefined8 *)(puVar5 + 0xf8);
      uVar44 = *(undefined8 *)(puVar5 + 0x104);
      uVar23 = *(undefined8 *)(puVar5 + 0x100);
      *(undefined8 *)(puVar4 + 0xfc) = *(undefined8 *)(puVar5 + 0xfc);
      *(undefined8 *)(puVar4 + 0xf8) = uVar33;
      *(undefined8 *)(puVar4 + 0x104) = uVar44;
      *(undefined8 *)(puVar4 + 0x100) = uVar23;
      uVar33 = *(undefined8 *)(puVar5 + 0x108);
      *(undefined8 *)(puVar4 + 0x10c) = *(undefined8 *)(puVar5 + 0x10c);
      *(undefined8 *)(puVar4 + 0x108) = uVar33;
    }
    else {
      puVar4[0xf8] = puVar5[0xf8];
      uVar33 = *(undefined8 *)(puVar5 + 0x100);
      *(long *)(puVar4 + 0xfc) = lVar14;
      *(undefined8 *)(puVar4 + 0x100) = uVar33;
      uVar23 = *(undefined8 *)(puVar5 + 0x104);
      *(undefined8 *)(puVar4 + 0x104) = uVar23;
      *(undefined4 *)(puVar4 + 0x108) = *(undefined4 *)(puVar5 + 0x108);
      uVar44 = *(undefined8 *)(puVar5 + 0x10c);
      *(undefined8 *)(puVar4 + 0x10c) = uVar44;
      func_0x000107c61434();
      func_0x000107c61434(uVar33);
      func_0x000107c61434(uVar23);
      func_0x000107c61434(uVar44);
    }
    *(undefined8 *)(puVar4 + 0x110) = *(undefined8 *)(puVar5 + 0x110);
    *(undefined1 *)(puVar4 + 0x114) = *(undefined1 *)(puVar5 + 0x114);
    *(undefined8 *)(puVar4 + 0x118) = *(undefined8 *)(puVar5 + 0x118);
    puVar4[0x11c] = puVar5[0x11c];
    if (*(long *)(puVar5 + 0x120) == 0) {
      uVar33 = *(undefined8 *)(puVar5 + 0x120);
      *(undefined8 *)(puVar4 + 0x124) = *(undefined8 *)(puVar5 + 0x124);
      *(undefined8 *)(puVar4 + 0x120) = uVar33;
      *(undefined8 *)(puVar4 + 0x128) = *(undefined8 *)(puVar5 + 0x128);
    }
    else {
      *(long *)(puVar4 + 0x120) = *(long *)(puVar5 + 0x120);
      uVar33 = *(undefined8 *)(puVar5 + 0x124);
      *(undefined8 *)(puVar4 + 0x124) = uVar33;
      uVar23 = *(undefined8 *)(puVar5 + 0x128);
      *(undefined8 *)(puVar4 + 0x128) = uVar23;
      func_0x000107c61434();
      func_0x000107c61434(uVar33);
      func_0x000107c61434(uVar23);
    }
    *(undefined8 *)(puVar4 + 300) = *(undefined8 *)(puVar5 + 300);
    *(undefined8 *)(puVar4 + 0x130) = *(undefined8 *)(puVar5 + 0x130);
    uVar33 = *(undefined8 *)(puVar5 + 0x134);
    *(undefined8 *)(puVar4 + 0x134) = uVar33;
    *(undefined1 *)(puVar4 + 0x138) = *(undefined1 *)(puVar5 + 0x138);
    *(undefined2 *)((long)puVar4 + 0x271) = *(undefined2 *)((long)puVar5 + 0x271);
    *(undefined8 *)(puVar4 + 0x13c) = *(undefined8 *)(puVar5 + 0x13c);
    *(undefined1 *)(puVar4 + 0x140) = *(undefined1 *)(puVar5 + 0x140);
    *(undefined8 *)(puVar4 + 0x144) = *(undefined8 *)(puVar5 + 0x144);
    uVar23 = *(undefined8 *)(puVar5 + 0x148);
    *(undefined8 *)(puVar4 + 0x14c) = *(undefined8 *)(puVar5 + 0x14c);
    *(undefined8 *)(puVar4 + 0x148) = uVar23;
    puVar4[0x150] = puVar5[0x150];
    *(undefined8 *)(puVar4 + 0x154) = *(undefined8 *)(puVar5 + 0x154);
    *(undefined4 *)(puVar4 + 0x158) = *(undefined4 *)(puVar5 + 0x158);
    *(undefined8 *)(puVar4 + 0x15c) = *(undefined8 *)(puVar5 + 0x15c);
    *(undefined1 *)(puVar4 + 0x160) = *(undefined1 *)(puVar5 + 0x160);
    *(undefined8 *)(puVar4 + 0x164) = *(undefined8 *)(puVar5 + 0x164);
    *(undefined1 *)(puVar4 + 0x168) = *(undefined1 *)(puVar5 + 0x168);
    *(undefined1 *)(puVar4 + 0x170) = *(undefined1 *)(puVar5 + 0x170);
    *(undefined8 *)(puVar4 + 0x16c) = *(undefined8 *)(puVar5 + 0x16c);
    *(undefined8 *)(puVar4 + 0x174) = *(undefined8 *)(puVar5 + 0x174);
    uVar23 = *(undefined8 *)(puVar5 + 0x178);
    *(undefined8 *)(puVar4 + 0x178) = uVar23;
    *(undefined1 *)(puVar4 + 0x180) = *(undefined1 *)(puVar5 + 0x180);
    *(undefined8 *)(puVar4 + 0x17c) = *(undefined8 *)(puVar5 + 0x17c);
    func_0x000107c61434();
    func_0x000107c61434(uVar33);
    func_0x000107c61434(uVar23);
  }
  return param_1;
}



/* Entry: 1037cba18; end: 1037cba4f;  */

/* WARNING: Possible PIC construction at 0x00010179a2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010179a300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010179a304) */
/* WARNING: Removing unreachable block (ram,0x00010179a2f0) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1037cba18(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong in_x7;
  uint uVar1;
  
  if ((in_x7 >> 0x25 & 1) != 0) {
    func_0x000107c61434(param_2);
    param_2 = param_3;
code_r0x00010006c00c:
    uVar1 = (uint)(param_4 >> 0x3e);
    if (uVar1 == 1) {
      param_2 = param_4 & 0x3fffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  uVar1 = (uint)(in_x7 >> 0x26) & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      func_0x000107c61434();
      param_4 = param_3;
      goto code_r0x00010006c00c;
    }
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1037cba50; end: 1037d816f;  */

/* WARNING: Possible PIC construction at 0x0001037cba7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cba8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cba9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbb78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbb88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbbdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbc44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbcdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbd28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbd38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbd48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbdf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbe0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbe30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbe40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbe50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbe68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbe8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbeec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbf0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbf6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbfc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cbfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc34c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccaf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccbb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccbf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccc38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccc54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cccd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccdf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cce0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cce1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cce54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cce64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cce78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cce88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cce98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccd3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccd68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccd78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccd94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccdac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cca00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc83c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc5f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc71c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cc81c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cca40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cca50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cca6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cca7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037cca98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ccab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037cca9c) */
/* WARNING: Removing unreachable block (ram,0x0001037cca80) */
/* WARNING: Removing unreachable block (ram,0x0001037ccaa4) */
/* WARNING: Removing unreachable block (ram,0x0001037cca98) */
/* WARNING: Removing unreachable block (ram,0x0001037cca70) */
/* WARNING: Removing unreachable block (ram,0x0001037cca44) */
/* WARNING: Removing unreachable block (ram,0x0001037ccaf0) */
/* WARNING: Removing unreachable block (ram,0x0001037ccae0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc820) */
/* WARNING: Removing unreachable block (ram,0x0001037cc810) */
/* WARNING: Removing unreachable block (ram,0x0001037cc7e4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc7a4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc7c4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc7d4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc788) */
/* WARNING: Removing unreachable block (ram,0x0001037cc76c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc720) */
/* WARNING: Removing unreachable block (ram,0x0001037cc6dc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc7f4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc718) */
/* WARNING: Removing unreachable block (ram,0x0001037cc55c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc54c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc654) */
/* WARNING: Removing unreachable block (ram,0x0001037cc63c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc620) */
/* WARNING: Removing unreachable block (ram,0x0001037cc644) */
/* WARNING: Removing unreachable block (ram,0x0001037cc638) */
/* WARNING: Removing unreachable block (ram,0x0001037cc610) */
/* WARNING: Removing unreachable block (ram,0x0001037cc5e4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc50c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc4fc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc4d0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc498) */
/* WARNING: Removing unreachable block (ram,0x0001037cc4b4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc4c0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc47c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc460) */
/* WARNING: Removing unreachable block (ram,0x0001037cc41c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc968) */
/* WARNING: Removing unreachable block (ram,0x0001037cc958) */
/* WARNING: Removing unreachable block (ram,0x0001037cc948) */
/* WARNING: Removing unreachable block (ram,0x0001037cc59c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc58c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc57c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc914) */
/* WARNING: Removing unreachable block (ram,0x0001037cc92c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc904) */
/* WARNING: Removing unreachable block (ram,0x0001037cc8f4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc8e4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc8d4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc8c4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc88c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc864) */
/* WARNING: Removing unreachable block (ram,0x0001037cc850) */
/* WARNING: Removing unreachable block (ram,0x0001037cc86c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc89c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc8a8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc8c8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc8cc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc8b4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc878) */
/* WARNING: Removing unreachable block (ram,0x0001037cc898) */
/* WARNING: Removing unreachable block (ram,0x0001037cc884) */
/* WARNING: Removing unreachable block (ram,0x0001037cc858) */
/* WARNING: Removing unreachable block (ram,0x0001037cc840) */
/* WARNING: Removing unreachable block (ram,0x0001037cca04) */
/* WARNING: Removing unreachable block (ram,0x0001037cc9f0) */
/* WARNING: Removing unreachable block (ram,0x0001037cca00) */
/* WARNING: Removing unreachable block (ram,0x0001037cc9e0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc9c8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc9b8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc988) */
/* WARNING: Removing unreachable block (ram,0x0001037cc978) */
/* WARNING: Removing unreachable block (ram,0x0001037ccdb0) */
/* WARNING: Removing unreachable block (ram,0x0001037ccd98) */
/* WARNING: Removing unreachable block (ram,0x0001037ccd7c) */
/* WARNING: Removing unreachable block (ram,0x0001037ccda0) */
/* WARNING: Removing unreachable block (ram,0x0001037ccd94) */
/* WARNING: Removing unreachable block (ram,0x0001037ccd6c) */
/* WARNING: Removing unreachable block (ram,0x0001037ccd40) */
/* WARNING: Removing unreachable block (ram,0x0001037cce9c) */
/* WARNING: Removing unreachable block (ram,0x0001037cce7c) */
/* WARNING: Removing unreachable block (ram,0x0001037cce68) */
/* WARNING: Removing unreachable block (ram,0x0001037cce58) */
/* WARNING: Removing unreachable block (ram,0x0001037cce20) */
/* WARNING: Removing unreachable block (ram,0x0001037cce10) */
/* WARNING: Removing unreachable block (ram,0x0001037ccdf8) */
/* WARNING: Removing unreachable block (ram,0x0001037cce28) */
/* WARNING: Removing unreachable block (ram,0x0001037cce34) */
/* WARNING: Removing unreachable block (ram,0x0001037cce48) */
/* WARNING: Removing unreachable block (ram,0x0001037cce70) */
/* WARNING: Removing unreachable block (ram,0x0001037cce8c) */
/* WARNING: Removing unreachable block (ram,0x0001037cce78) */
/* WARNING: Removing unreachable block (ram,0x0001037cce54) */
/* WARNING: Removing unreachable block (ram,0x0001037cce0c) */
/* WARNING: Removing unreachable block (ram,0x0001037ccce8) */
/* WARNING: Removing unreachable block (ram,0x0001037cccd8) */
/* WARNING: Removing unreachable block (ram,0x0001037cccac) */
/* WARNING: Removing unreachable block (ram,0x0001037ccc74) */
/* WARNING: Removing unreachable block (ram,0x0001037ccc90) */
/* WARNING: Removing unreachable block (ram,0x0001037ccc9c) */
/* WARNING: Removing unreachable block (ram,0x0001037ccc58) */
/* WARNING: Removing unreachable block (ram,0x0001037ccc3c) */
/* WARNING: Removing unreachable block (ram,0x0001037ccbf8) */
/* WARNING: Removing unreachable block (ram,0x0001037ccbb4) */
/* WARNING: Removing unreachable block (ram,0x0001037cccbc) */
/* WARNING: Removing unreachable block (ram,0x0001037ccbf0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc388) */
/* WARNING: Removing unreachable block (ram,0x0001037cc3a4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc300) */
/* WARNING: Removing unreachable block (ram,0x0001037cc32c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc340) */
/* WARNING: Removing unreachable block (ram,0x0001037cc2b8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc2dc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc2f0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc280) */
/* WARNING: Removing unreachable block (ram,0x0001037cc350) */
/* WARNING: Removing unreachable block (ram,0x0001037cc380) */
/* WARNING: Removing unreachable block (ram,0x0001037cc2b0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc270) */
/* WARNING: Removing unreachable block (ram,0x0001037cc22c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc3b4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc658) */
/* WARNING: Removing unreachable block (ram,0x0001037ccaf4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc264) */
/* WARNING: Removing unreachable block (ram,0x0001037cc214) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1f0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1c8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1a0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1ac) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1cc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1d0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc200) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1dc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1fc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1e8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc1b8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc174) */
/* WARNING: Removing unreachable block (ram,0x0001037cc14c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc124) */
/* WARNING: Removing unreachable block (ram,0x0001037cc130) */
/* WARNING: Removing unreachable block (ram,0x0001037cc150) */
/* WARNING: Removing unreachable block (ram,0x0001037cc154) */
/* WARNING: Removing unreachable block (ram,0x0001037cc184) */
/* WARNING: Removing unreachable block (ram,0x0001037cc160) */
/* WARNING: Removing unreachable block (ram,0x0001037cc180) */
/* WARNING: Removing unreachable block (ram,0x0001037cc16c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc13c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc108) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0dc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0b4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc08c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc098) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0b8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0bc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0ec) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0c8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0e8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0d4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0a4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc068) */
/* WARNING: Removing unreachable block (ram,0x0001037cc01c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc048) */
/* WARNING: Removing unreachable block (ram,0x0001037cc058) */
/* WARNING: Removing unreachable block (ram,0x0001037cbfdc) */
/* WARNING: Removing unreachable block (ram,0x0001037cbff8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc00c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbfcc) */
/* WARNING: Removing unreachable block (ram,0x0001037cbf70) */
/* WARNING: Removing unreachable block (ram,0x0001037cbf88) */
/* WARNING: Removing unreachable block (ram,0x0001037cbf90) */
/* WARNING: Removing unreachable block (ram,0x0001037cc078) */
/* WARNING: Removing unreachable block (ram,0x0001037cc0f4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc110) */
/* WARNING: Removing unreachable block (ram,0x0001037cc18c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc208) */
/* WARNING: Removing unreachable block (ram,0x0001037cc19c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc120) */
/* WARNING: Removing unreachable block (ram,0x0001037cc104) */
/* WARNING: Removing unreachable block (ram,0x0001037cc088) */
/* WARNING: Removing unreachable block (ram,0x0001037cbfc0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbf50) */
/* WARNING: Removing unreachable block (ram,0x0001037cbf10) */
/* WARNING: Removing unreachable block (ram,0x0001037cbf00) */
/* WARNING: Removing unreachable block (ram,0x0001037cbef0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbee0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbed0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbec0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbeb0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe6c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe54) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe5c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe44) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe34) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe10) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe74) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe90) */
/* WARNING: Removing unreachable block (ram,0x0001037cbf20) */
/* WARNING: Removing unreachable block (ram,0x0001037cbf38) */
/* WARNING: Removing unreachable block (ram,0x0001037cbf40) */
/* WARNING: Removing unreachable block (ram,0x0001037cbea0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe8c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbe30) */
/* WARNING: Removing unreachable block (ram,0x0001037cbdf8) */
/* WARNING: Removing unreachable block (ram,0x0001037cbd4c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbd8c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbd9c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbdb4) */
/* WARNING: Removing unreachable block (ram,0x0001037cbdc4) */
/* WARNING: Removing unreachable block (ram,0x0001037cbddc) */
/* WARNING: Removing unreachable block (ram,0x0001037cbdec) */
/* WARNING: Removing unreachable block (ram,0x0001037cbd3c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbd2c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbce0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbd24) */
/* WARNING: Removing unreachable block (ram,0x0001037cbcd0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbca4) */
/* WARNING: Removing unreachable block (ram,0x0001037cbc64) */
/* WARNING: Removing unreachable block (ram,0x0001037cbc84) */
/* WARNING: Removing unreachable block (ram,0x0001037cbc94) */
/* WARNING: Removing unreachable block (ram,0x0001037cbc48) */
/* WARNING: Removing unreachable block (ram,0x0001037cbc2c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbb8c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbcb4) */
/* WARNING: Removing unreachable block (ram,0x0001037cbbd8) */
/* WARNING: Removing unreachable block (ram,0x0001037cbb7c) */
/* WARNING: Removing unreachable block (ram,0x0001037cbb64) */
/* WARNING: Removing unreachable block (ram,0x0001037cbb44) */
/* WARNING: Removing unreachable block (ram,0x0001037cbaa0) */
/* WARNING: Removing unreachable block (ram,0x0001037cbad0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc3bc) */
/* WARNING: Removing unreachable block (ram,0x0001037cc524) */
/* WARNING: Removing unreachable block (ram,0x0001037cc664) */
/* WARNING: Removing unreachable block (ram,0x0001037cc6c0) */
/* WARNING: Removing unreachable block (ram,0x0001037cca14) */
/* WARNING: Removing unreachable block (ram,0x0001037cca54) */
/* WARNING: Removing unreachable block (ram,0x0001037cca40) */
/* WARNING: Removing unreachable block (ram,0x0001037cc6d4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc52c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc534) */
/* WARNING: Removing unreachable block (ram,0x0001037cc3c4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc5a4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc5f4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc5e0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc3c8) */
/* WARNING: Removing unreachable block (ram,0x0001037cc3d0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc4e0) */
/* WARNING: Removing unreachable block (ram,0x0001037cc414) */
/* WARNING: Removing unreachable block (ram,0x0001037cbae4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc564) */
/* WARNING: Removing unreachable block (ram,0x0001037cc938) */
/* WARNING: Removing unreachable block (ram,0x0001037cc56c) */
/* WARNING: Removing unreachable block (ram,0x0001037cc574) */
/* WARNING: Removing unreachable block (ram,0x0001037cbaec) */
/* WARNING: Removing unreachable block (ram,0x0001037cc838) */
/* WARNING: Removing unreachable block (ram,0x0001037cbaf4) */
/* WARNING: Removing unreachable block (ram,0x0001037cc970) */
/* WARNING: Removing unreachable block (ram,0x0001037cbafc) */
/* WARNING: Removing unreachable block (ram,0x0001037ccaf8) */
/* WARNING: Removing unreachable block (ram,0x0001037ccb38) */
/* WARNING: Removing unreachable block (ram,0x0001037ccb44) */
/* WARNING: Removing unreachable block (ram,0x0001037ccb5c) */
/* WARNING: Removing unreachable block (ram,0x0001037ccb68) */
/* WARNING: Removing unreachable block (ram,0x0001037ccdc0) */
/* WARNING: Removing unreachable block (ram,0x0001037ccdf4) */
/* WARNING: Removing unreachable block (ram,0x0001037ccdd4) */
/* WARNING: Removing unreachable block (ram,0x0001037ccb98) */
/* WARNING: Removing unreachable block (ram,0x0001037ccd00) */
/* WARNING: Removing unreachable block (ram,0x0001037ccd50) */
/* WARNING: Removing unreachable block (ram,0x0001037ccd3c) */
/* WARNING: Removing unreachable block (ram,0x0001037ccbac) */
/* WARNING: Removing unreachable block (ram,0x0001037cbb04) */
/* WARNING: Removing unreachable block (ram,0x0001037cba90) */
/* WARNING: Removing unreachable block (ram,0x0001037cba80) */
/* WARNING: Removing unreachable block (ram,0x0001037ccab4) */
/* WARNING: Removing unreachable block (ram,0x0001037ccac4) */

void FUN_1037cba50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1037d8170; end: 1037d81ab;  */

undefined8 FUN_1037d8170(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1037d81ac; end: 1037dd49b;  */

undefined8 * FUN_1037d81ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar14 = param_2[8];
  uVar29 = param_2[0xb];
  uVar28 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar14;
  param_1[0xb] = uVar29;
  param_1[10] = uVar28;
  uVar14 = param_2[0xc];
  uVar29 = param_2[0xf];
  uVar28 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar14;
  param_1[0xf] = uVar29;
  param_1[0xe] = uVar28;
  uVar14 = *param_2;
  uVar29 = param_2[3];
  uVar28 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar14;
  param_1[3] = uVar29;
  param_1[2] = uVar28;
  uVar14 = param_2[4];
  uVar29 = param_2[7];
  uVar28 = param_2[6];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  param_1[5] = param_2[5];
  param_1[4] = uVar14;
  param_1[7] = uVar29;
  param_1[6] = uVar28;
  lVar5 = 0;
  func_0x000100b91584();
  lVar20 = *(long *)(lVar5 + -8);
  puVar6 = puVar2;
  (**(code **)(lVar20 + 0x30))(puVar2,1,lVar5);
  if ((int)puVar6 != 0) {
    lVar5 = 0x112d3b130;
    func_0x0001000285a8(0x112d3b130,&UNK_10d904950);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    goto LAB_1037d9758;
  }
  puVar6 = puVar2;
  func_0x000107c614c4(puVar2,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      lVar18 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar18 + -8) + 0x20))(puVar1,puVar2,lVar18);
      lVar18 = 0;
      func_0x000100b915bc();
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x14)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x14));
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x18));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x18));
      *(undefined1 *)(puVar6 + 8) = *(undefined1 *)(puVar10 + 8);
      uVar29 = puVar10[4];
      uVar28 = puVar10[7];
      uVar14 = puVar10[6];
      puVar6[5] = puVar10[5];
      puVar6[4] = uVar29;
      puVar6[7] = uVar28;
      puVar6[6] = uVar14;
      uVar14 = *puVar10;
      uVar29 = puVar10[3];
      uVar28 = puVar10[2];
      puVar6[1] = puVar10[1];
      *puVar6 = uVar14;
      puVar6[3] = uVar29;
      puVar6[2] = uVar28;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x1c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x1c));
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x20));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x20));
      uVar14 = puVar10[8];
      uVar29 = puVar10[0xb];
      uVar28 = puVar10[10];
      puVar6[9] = puVar10[9];
      puVar6[8] = uVar14;
      puVar6[0xb] = uVar29;
      puVar6[10] = uVar28;
      uVar14 = puVar10[0xc];
      puVar6[0xd] = puVar10[0xd];
      puVar6[0xc] = uVar14;
      uVar14 = *puVar10;
      uVar29 = puVar10[3];
      uVar28 = puVar10[2];
      puVar6[1] = puVar10[1];
      *puVar6 = uVar14;
      puVar6[3] = uVar29;
      puVar6[2] = uVar28;
      uVar29 = puVar10[4];
      uVar28 = puVar10[7];
      uVar14 = puVar10[6];
      puVar6[5] = puVar10[5];
      puVar6[4] = uVar29;
      puVar6[7] = uVar28;
      puVar6[6] = uVar14;
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x24));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x24));
      uVar29 = *puVar10;
      uVar28 = puVar10[3];
      uVar14 = puVar10[2];
      puVar6[1] = puVar10[1];
      *puVar6 = uVar29;
      puVar6[3] = uVar28;
      puVar6[2] = uVar14;
      puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x28));
      uVar14 = *puVar6;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x28));
      puVar10[1] = puVar6[1];
      *puVar10 = uVar14;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x2c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x2c));
      puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x30));
      uVar14 = *puVar6;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x30));
      puVar10[1] = puVar6[1];
      *puVar10 = uVar14;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x34)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x34));
      uVar14 = 0;
      goto LAB_1037d973c;
    }
    if (iVar4 == 1) {
      *puVar1 = *puVar2;
      uVar14 = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[1] = uVar14;
      lVar18 = 0;
      func_0x000100b91790();
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x18));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x18));
      lVar25 = 0;
      func_0x000100b918b4();
      lVar19 = *(long *)(lVar25 + -8);
      puVar8 = puVar10;
      (**(code **)(lVar19 + 0x30))(puVar10,1,lVar25);
      if ((int)puVar8 == 0) {
        uVar14 = *puVar10;
        uVar29 = puVar10[3];
        uVar28 = puVar10[2];
        puVar6[1] = puVar10[1];
        *puVar6 = uVar14;
        puVar6[3] = uVar29;
        puVar6[2] = uVar28;
        iVar4 = *(int *)(lVar25 + 0x1c);
        lVar13 = 0;
        func_0x000107c5eec8();
        lVar16 = *(long *)(lVar13 + -8);
        pcVar23 = *(code **)(lVar16 + 0x20);
        (*pcVar23)((long)puVar6 + (long)iVar4,(long)puVar10 + (long)iVar4,lVar13);
        puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x20));
        uVar14 = *puVar8;
        puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x20));
        puVar11[1] = puVar8[1];
        *puVar11 = uVar14;
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x24)) =
             *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x24));
        puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x28));
        uVar14 = *puVar8;
        puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x28));
        puVar11[1] = puVar8[1];
        *puVar11 = uVar14;
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x2c)) =
             *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x2c));
        puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x30));
        uVar14 = *puVar8;
        puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x30));
        puVar11[1] = puVar8[1];
        *puVar11 = uVar14;
        lVar15 = (long)*(int *)(lVar25 + 0x34);
        lVar7 = (long)puVar10 + lVar15;
        (**(code **)(lVar16 + 0x30))(lVar7,1,lVar13);
        if ((int)lVar7 == 0) {
          (*pcVar23)((long)puVar6 + lVar15,(long)puVar10 + lVar15,lVar13);
          (**(code **)(lVar16 + 0x38))((long)puVar6 + lVar15,0,1,lVar13);
        }
        else {
          lVar7 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar6 + lVar15,(long)puVar10 + lVar15,
                              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
        }
        puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x38));
        uVar14 = *puVar8;
        puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x38));
        puVar11[1] = puVar8[1];
        *puVar11 = uVar14;
        puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x3c));
        uVar14 = *puVar10;
        puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x3c));
        puVar8[1] = puVar10[1];
        *puVar8 = uVar14;
        (**(code **)(lVar19 + 0x38))(puVar6,0,1,lVar25);
      }
      else {
        lVar25 = 0x112dd42a0;
        func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
        func_0x000107c610b4(puVar6,puVar10,*(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x1c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x1c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x20));
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x24));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x24));
      uVar14 = *puVar10;
      uVar29 = puVar10[3];
      uVar28 = puVar10[2];
      puVar6[1] = puVar10[1];
      *puVar6 = uVar14;
      puVar6[3] = uVar29;
      puVar6[2] = uVar28;
      uVar14 = puVar10[10];
      uVar29 = puVar10[0xd];
      uVar28 = puVar10[0xc];
      puVar6[0xb] = puVar10[0xb];
      puVar6[10] = uVar14;
      puVar6[0xd] = uVar29;
      puVar6[0xc] = uVar28;
      uVar14 = puVar10[6];
      uVar29 = puVar10[9];
      uVar28 = puVar10[8];
      puVar6[7] = puVar10[7];
      puVar6[6] = uVar14;
      puVar6[9] = uVar29;
      puVar6[8] = uVar28;
      uVar14 = puVar10[4];
      puVar6[5] = puVar10[5];
      puVar6[4] = uVar14;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x28)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x28));
      uVar14 = 1;
      goto LAB_1037d973c;
    }
LAB_1037d8434:
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(lVar20 + 0x40));
  }
  else {
    if (iVar4 == 2) {
      lVar18 = 0;
      func_0x000107c5ede0();
      pcVar23 = *(code **)(*(long *)(lVar18 + -8) + 0x20);
      (*pcVar23)(puVar1,puVar2,lVar18);
      lVar25 = 0;
      func_0x000100b919a8();
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x14));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x14));
      lVar19 = 0;
      func_0x000100b91acc();
      lVar7 = *(long *)(lVar19 + -8);
      puVar8 = puVar10;
      (**(code **)(lVar7 + 0x30))(puVar10,1,lVar19);
      if ((int)puVar8 == 0) {
        puVar8 = puVar10;
        func_0x000107c614c4(puVar10,lVar19);
        if ((int)puVar8 == 1) {
          *puVar6 = *puVar10;
          uVar14 = puVar10[1];
          puVar6[2] = puVar10[2];
          puVar6[1] = uVar14;
          lVar18 = 0;
          func_0x000100b91790();
          puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x18));
          puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x18));
          lVar13 = 0;
          func_0x000100b918b4();
          lVar15 = *(long *)(lVar13 + -8);
          puVar9 = puVar11;
          (**(code **)(lVar15 + 0x30))(puVar11,1,lVar13);
          if ((int)puVar9 == 0) {
            uVar14 = *puVar11;
            uVar29 = puVar11[3];
            uVar28 = puVar11[2];
            puVar8[1] = puVar11[1];
            *puVar8 = uVar14;
            puVar8[3] = uVar29;
            puVar8[2] = uVar28;
            iVar4 = *(int *)(lVar13 + 0x1c);
            lVar17 = 0;
            func_0x000107c5eec8();
            lVar27 = *(long *)(lVar17 + -8);
            pcVar23 = *(code **)(lVar27 + 0x20);
            (*pcVar23)((long)puVar8 + (long)iVar4,(long)puVar11 + (long)iVar4,lVar17);
            puVar9 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x20));
            uVar14 = *puVar9;
            puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar13 + 0x20));
            puVar12[1] = puVar9[1];
            *puVar12 = uVar14;
            *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar13 + 0x24)) =
                 *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x24));
            puVar9 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x28));
            uVar14 = *puVar9;
            puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar13 + 0x28));
            puVar12[1] = puVar9[1];
            *puVar12 = uVar14;
            *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar13 + 0x2c)) =
                 *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x2c));
            puVar9 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x30));
            uVar14 = *puVar9;
            puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar13 + 0x30));
            puVar12[1] = puVar9[1];
            *puVar12 = uVar14;
            lVar26 = (long)*(int *)(lVar13 + 0x34);
            lVar16 = (long)puVar11 + lVar26;
            (**(code **)(lVar27 + 0x30))(lVar16,1);
            if ((int)lVar16 == 0) {
              (*pcVar23)((long)puVar8 + lVar26,(long)puVar11 + lVar26,lVar17);
              (**(code **)(lVar27 + 0x38))((long)puVar8 + lVar26,0,1,lVar17);
            }
            else {
              lVar16 = 0x112d3bc20;
              func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
              func_0x000107c610b4((long)puVar8 + lVar26,(long)puVar11 + lVar26,
                                  *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
            }
            puVar9 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x38));
            uVar14 = *puVar9;
            puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar13 + 0x38));
            puVar12[1] = puVar9[1];
            *puVar12 = uVar14;
            puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x3c));
            uVar14 = *puVar11;
            puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar13 + 0x3c));
            puVar9[1] = puVar11[1];
            *puVar9 = uVar14;
            (**(code **)(lVar15 + 0x38))(puVar8,0,1);
          }
          else {
            lVar13 = 0x112dd42a0;
            func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
            func_0x000107c610b4(puVar8,puVar11,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
          }
          *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x1c)) =
               *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x1c));
          *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x20)) =
               *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x20));
          puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x24));
          puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x24));
          uVar14 = *puVar11;
          uVar29 = puVar11[3];
          uVar28 = puVar11[2];
          puVar8[1] = puVar11[1];
          *puVar8 = uVar14;
          puVar8[3] = uVar29;
          puVar8[2] = uVar28;
          uVar14 = puVar11[10];
          uVar29 = puVar11[0xd];
          uVar28 = puVar11[0xc];
          puVar8[0xb] = puVar11[0xb];
          puVar8[10] = uVar14;
          puVar8[0xd] = uVar29;
          puVar8[0xc] = uVar28;
          uVar14 = puVar11[6];
          uVar29 = puVar11[9];
          uVar28 = puVar11[8];
          puVar8[7] = puVar11[7];
          puVar8[6] = uVar14;
          puVar8[9] = uVar29;
          puVar8[8] = uVar28;
          uVar14 = puVar11[4];
          puVar8[5] = puVar11[5];
          puVar8[4] = uVar14;
          *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x28)) =
               *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x28));
          uVar14 = 1;
        }
        else {
          (*pcVar23)(puVar6,puVar10,lVar18);
          lVar18 = 0;
          func_0x000100b915bc();
          uVar14 = 0;
          *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x14)) =
               *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x14));
          puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x18));
          puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x18));
          *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(puVar11 + 8);
          uVar30 = puVar11[4];
          uVar29 = puVar11[7];
          uVar28 = puVar11[6];
          puVar8[5] = puVar11[5];
          puVar8[4] = uVar30;
          puVar8[7] = uVar29;
          puVar8[6] = uVar28;
          uVar28 = *puVar11;
          uVar30 = puVar11[3];
          uVar29 = puVar11[2];
          puVar8[1] = puVar11[1];
          *puVar8 = uVar28;
          puVar8[3] = uVar30;
          puVar8[2] = uVar29;
          *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x1c)) =
               *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x1c));
          puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x20));
          puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x20));
          uVar28 = puVar11[8];
          uVar30 = puVar11[0xb];
          uVar29 = puVar11[10];
          puVar8[9] = puVar11[9];
          puVar8[8] = uVar28;
          puVar8[0xb] = uVar30;
          puVar8[10] = uVar29;
          uVar28 = puVar11[0xc];
          puVar8[0xd] = puVar11[0xd];
          puVar8[0xc] = uVar28;
          uVar28 = *puVar11;
          uVar30 = puVar11[3];
          uVar29 = puVar11[2];
          puVar8[1] = puVar11[1];
          *puVar8 = uVar28;
          puVar8[3] = uVar30;
          puVar8[2] = uVar29;
          uVar30 = puVar11[4];
          uVar29 = puVar11[7];
          uVar28 = puVar11[6];
          puVar8[5] = puVar11[5];
          puVar8[4] = uVar30;
          puVar8[7] = uVar29;
          puVar8[6] = uVar28;
          puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x24));
          puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x24));
          uVar30 = *puVar11;
          uVar29 = puVar11[3];
          uVar28 = puVar11[2];
          puVar8[1] = puVar11[1];
          *puVar8 = uVar30;
          puVar8[3] = uVar29;
          puVar8[2] = uVar28;
          puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x28));
          uVar28 = *puVar8;
          puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x28));
          puVar11[1] = puVar8[1];
          *puVar11 = uVar28;
          *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x2c)) =
               *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x2c));
          puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x30));
          uVar28 = *puVar8;
          puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x30));
          puVar11[1] = puVar8[1];
          *puVar11 = uVar28;
          *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar18 + 0x34)) =
               *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar18 + 0x34));
        }
        func_0x000107c6159c(puVar6,lVar19,uVar14);
        (**(code **)(lVar7 + 0x38))(puVar6,0,1,lVar19);
      }
      else {
        lVar18 = 0x112d3b128;
        func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
        func_0x000107c610b4(puVar6,puVar10,*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x18)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x18));
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x1c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x1c));
      uVar14 = puVar2[8];
      uVar29 = puVar2[0xb];
      uVar28 = puVar2[10];
      puVar6[9] = puVar2[9];
      puVar6[8] = uVar14;
      puVar6[0xb] = uVar29;
      puVar6[10] = uVar28;
      uVar14 = puVar2[0xc];
      puVar6[0xd] = puVar2[0xd];
      puVar6[0xc] = uVar14;
      uVar14 = *puVar2;
      uVar29 = puVar2[3];
      uVar28 = puVar2[2];
      puVar6[1] = puVar2[1];
      *puVar6 = uVar14;
      puVar6[3] = uVar29;
      puVar6[2] = uVar28;
      uVar29 = puVar2[4];
      uVar28 = puVar2[7];
      uVar14 = puVar2[6];
      puVar6[5] = puVar2[5];
      puVar6[4] = uVar29;
      puVar6[7] = uVar28;
      puVar6[6] = uVar14;
      uVar14 = 2;
    }
    else {
      if (iVar4 != 8) goto LAB_1037d8434;
      lVar18 = 0;
      func_0x000107c5ede0();
      lVar13 = *(long *)(lVar18 + -8);
      pcVar23 = *(code **)(lVar13 + 0x20);
      (*pcVar23)(puVar1,puVar2,lVar18);
      lVar25 = 0;
      func_0x000100b91b84();
      puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x14));
      uVar14 = *puVar6;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x14));
      puVar10[1] = puVar6[1];
      *puVar10 = uVar14;
      puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x18));
      uVar14 = *puVar6;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x18));
      puVar10[1] = puVar6[1];
      *puVar10 = uVar14;
      puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x1c));
      uVar14 = *puVar6;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x1c));
      puVar10[1] = puVar6[1];
      *puVar10 = uVar14;
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x20));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x20));
      uVar14 = *puVar10;
      uVar29 = puVar10[3];
      uVar28 = puVar10[2];
      puVar6[1] = puVar10[1];
      *puVar6 = uVar14;
      puVar6[3] = uVar29;
      puVar6[2] = uVar28;
      uVar14 = puVar10[10];
      uVar29 = puVar10[0xd];
      uVar28 = puVar10[0xc];
      puVar6[0xb] = puVar10[0xb];
      puVar6[10] = uVar14;
      puVar6[0xd] = uVar29;
      puVar6[0xc] = uVar28;
      uVar14 = puVar10[6];
      uVar29 = puVar10[9];
      uVar28 = puVar10[8];
      puVar6[7] = puVar10[7];
      puVar6[6] = uVar14;
      puVar6[9] = uVar29;
      puVar6[8] = uVar28;
      uVar14 = puVar10[4];
      puVar6[5] = puVar10[5];
      puVar6[4] = uVar14;
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x24));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x24));
      *puVar6 = *puVar10;
      uVar14 = puVar10[1];
      puVar6[2] = puVar10[2];
      puVar6[1] = uVar14;
      lVar19 = 0;
      func_0x000100b91790();
      puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar19 + 0x18));
      puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar19 + 0x18));
      lVar7 = 0;
      func_0x000100b918b4();
      lVar15 = *(long *)(lVar7 + -8);
      puVar9 = puVar11;
      (**(code **)(lVar15 + 0x30))(puVar11,1,lVar7);
      if ((int)puVar9 == 0) {
        uVar14 = *puVar11;
        uVar29 = puVar11[3];
        uVar28 = puVar11[2];
        puVar8[1] = puVar11[1];
        *puVar8 = uVar14;
        puVar8[3] = uVar29;
        puVar8[2] = uVar28;
        iVar4 = *(int *)(lVar7 + 0x1c);
        lVar17 = 0;
        func_0x000107c5eec8();
        lVar27 = *(long *)(lVar17 + -8);
        pcVar24 = *(code **)(lVar27 + 0x20);
        (*pcVar24)((long)puVar8 + (long)iVar4,(long)puVar11 + (long)iVar4,lVar17);
        puVar9 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar7 + 0x20));
        uVar14 = *puVar9;
        puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x20));
        puVar12[1] = puVar9[1];
        *puVar12 = uVar14;
        *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x24)) =
             *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar7 + 0x24));
        puVar9 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar7 + 0x28));
        uVar14 = *puVar9;
        puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x28));
        puVar12[1] = puVar9[1];
        *puVar12 = uVar14;
        *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x2c)) =
             *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar7 + 0x2c));
        puVar9 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar7 + 0x30));
        uVar14 = *puVar9;
        puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x30));
        puVar12[1] = puVar9[1];
        *puVar12 = uVar14;
        lVar26 = (long)*(int *)(lVar7 + 0x34);
        lVar16 = (long)puVar11 + lVar26;
        (**(code **)(lVar27 + 0x30))(lVar16,1,lVar17);
        if ((int)lVar16 == 0) {
          (*pcVar24)((long)puVar8 + lVar26,(long)puVar11 + lVar26,lVar17);
          (**(code **)(lVar27 + 0x38))((long)puVar8 + lVar26,0,1,lVar17);
        }
        else {
          lVar16 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar8 + lVar26,(long)puVar11 + lVar26,
                              *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        puVar9 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar7 + 0x38));
        uVar14 = *puVar9;
        puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x38));
        puVar12[1] = puVar9[1];
        *puVar12 = uVar14;
        puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar7 + 0x3c));
        uVar14 = *puVar11;
        puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x3c));
        puVar9[1] = puVar11[1];
        *puVar9 = uVar14;
        (**(code **)(lVar15 + 0x38))(puVar8,0,1,lVar7);
      }
      else {
        lVar7 = 0x112dd42a0;
        func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
        func_0x000107c610b4(puVar8,puVar11,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar19 + 0x1c)) =
           *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar19 + 0x1c));
      *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar19 + 0x20)) =
           *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar19 + 0x20));
      puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar19 + 0x24));
      puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar19 + 0x24));
      uVar14 = *puVar11;
      uVar29 = puVar11[3];
      uVar28 = puVar11[2];
      puVar8[1] = puVar11[1];
      *puVar8 = uVar14;
      puVar8[3] = uVar29;
      puVar8[2] = uVar28;
      uVar14 = puVar11[10];
      uVar29 = puVar11[0xd];
      uVar28 = puVar11[0xc];
      puVar8[0xb] = puVar11[0xb];
      puVar8[10] = uVar14;
      puVar8[0xd] = uVar29;
      puVar8[0xc] = uVar28;
      uVar14 = puVar11[6];
      uVar29 = puVar11[9];
      uVar28 = puVar11[8];
      puVar8[7] = puVar11[7];
      puVar8[6] = uVar14;
      puVar8[9] = uVar29;
      puVar8[8] = uVar28;
      uVar14 = puVar11[4];
      puVar8[5] = puVar11[5];
      puVar8[4] = uVar14;
      *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar19 + 0x28)) =
           *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar19 + 0x28));
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x28));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x28));
      lVar25 = 0;
      func_0x000100b91cc8();
      lVar19 = *(long *)(lVar25 + -8);
      puVar10 = puVar2;
      (**(code **)(lVar19 + 0x30))(puVar2,1,lVar25);
      if ((int)puVar10 == 0) {
        uVar14 = *puVar2;
        uVar29 = puVar2[3];
        uVar28 = puVar2[2];
        puVar6[1] = puVar2[1];
        *puVar6 = uVar14;
        puVar6[3] = uVar29;
        puVar6[2] = uVar28;
        puVar6[4] = puVar2[4];
        uVar14 = puVar2[5];
        puVar6[6] = puVar2[6];
        puVar6[5] = uVar14;
        uVar14 = puVar2[7];
        puVar6[8] = puVar2[8];
        puVar6[7] = uVar14;
        uVar14 = puVar2[9];
        puVar6[10] = puVar2[10];
        puVar6[9] = uVar14;
        uVar14 = puVar2[0xb];
        puVar6[0xc] = puVar2[0xc];
        puVar6[0xb] = uVar14;
        uVar14 = puVar2[0xd];
        puVar6[0xe] = puVar2[0xe];
        puVar6[0xd] = uVar14;
        uVar14 = puVar2[0xf];
        puVar6[0x10] = puVar2[0x10];
        puVar6[0xf] = uVar14;
        lVar15 = 0;
        func_0x000100b91d00();
        lVar17 = (long)*(int *)(lVar15 + 0x3c);
        lVar16 = 0;
        func_0x000107c5eec8();
        lVar27 = *(long *)(lVar16 + -8);
        pcVar24 = *(code **)(lVar27 + 0x30);
        lVar7 = (long)puVar2 + lVar17;
        (*pcVar24)(lVar7,1,lVar16);
        if ((int)lVar7 == 0) {
          (**(code **)(lVar27 + 0x20))((long)puVar6 + lVar17,(long)puVar2 + lVar17,lVar16);
          (**(code **)(lVar27 + 0x38))((long)puVar6 + lVar17,0,1,lVar16);
        }
        else {
          lVar7 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar6 + lVar17,(long)puVar2 + lVar17,
                              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
        }
        lVar17 = (long)*(int *)(lVar15 + 0x40);
        lVar7 = (long)puVar2 + lVar17;
        (*pcVar24)(lVar7,1,lVar16);
        if ((int)lVar7 == 0) {
          (**(code **)(lVar27 + 0x20))((long)puVar6 + lVar17,(long)puVar2 + lVar17,lVar16);
          (**(code **)(lVar27 + 0x38))((long)puVar6 + lVar17,0,1,lVar16);
        }
        else {
          lVar7 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar6 + lVar17,(long)puVar2 + lVar17,
                              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
        }
        lVar17 = (long)*(int *)(lVar15 + 0x44);
        lVar7 = (long)puVar2 + lVar17;
        (*pcVar24)(lVar7,1,lVar16);
        if ((int)lVar7 == 0) {
          (**(code **)(lVar27 + 0x20))((long)puVar6 + lVar17,(long)puVar2 + lVar17,lVar16);
          (**(code **)(lVar27 + 0x38))((long)puVar6 + lVar17,0,1,lVar16);
        }
        else {
          lVar7 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar6 + lVar17,(long)puVar2 + lVar17,
                              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x48)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x48));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x4c)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x4c));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x50)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x50));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x54)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x54));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x58)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x58));
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x5c));
        puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x5c));
        uVar14 = *puVar8;
        uVar29 = puVar8[3];
        uVar28 = puVar8[2];
        puVar10[1] = puVar8[1];
        *puVar10 = uVar14;
        puVar10[3] = uVar29;
        puVar10[2] = uVar28;
        uVar29 = puVar8[8];
        uVar28 = puVar8[0xb];
        uVar14 = puVar8[10];
        puVar10[9] = puVar8[9];
        puVar10[8] = uVar29;
        puVar10[0xb] = uVar28;
        puVar10[10] = uVar14;
        uVar29 = puVar8[4];
        uVar28 = puVar8[7];
        uVar14 = puVar8[6];
        puVar10[5] = puVar8[5];
        puVar10[4] = uVar29;
        puVar10[7] = uVar28;
        puVar10[6] = uVar14;
        uVar29 = puVar8[0x10];
        uVar28 = puVar8[0x13];
        uVar14 = puVar8[0x12];
        puVar10[0x11] = puVar8[0x11];
        puVar10[0x10] = uVar29;
        puVar10[0x13] = uVar28;
        puVar10[0x12] = uVar14;
        uVar29 = puVar8[0xc];
        uVar28 = puVar8[0xf];
        uVar14 = puVar8[0xe];
        puVar10[0xd] = puVar8[0xd];
        puVar10[0xc] = uVar29;
        puVar10[0xf] = uVar28;
        puVar10[0xe] = uVar14;
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x60)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x60));
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 100));
        puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 100));
        puVar10[4] = puVar8[4];
        uVar29 = *puVar8;
        uVar28 = puVar8[3];
        uVar14 = puVar8[2];
        puVar10[1] = puVar8[1];
        *puVar10 = uVar29;
        puVar10[3] = uVar28;
        puVar10[2] = uVar14;
        func_0x000107c610b4((long)puVar6 + (long)*(int *)(lVar15 + 0x68),
                            (long)puVar2 + (long)*(int *)(lVar15 + 0x68),0x160);
        puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x6c));
        uVar14 = *puVar10;
        puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x6c));
        puVar8[1] = puVar10[1];
        *puVar8 = uVar14;
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x70)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x70));
        puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x74));
        uVar14 = *puVar10;
        puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x74));
        puVar8[1] = puVar10[1];
        *puVar8 = uVar14;
        puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x78));
        uVar14 = *puVar10;
        puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x78));
        puVar8[1] = puVar10[1];
        *puVar8 = uVar14;
        puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x7c));
        uVar14 = *puVar10;
        puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x7c));
        puVar8[1] = puVar10[1];
        *puVar8 = uVar14;
        puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x80));
        uVar14 = *puVar10;
        puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x80));
        puVar8[1] = puVar10[1];
        *puVar8 = uVar14;
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x84));
        puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x84));
        lVar7 = 0;
        func_0x000100b91fbc();
        lVar17 = *(long *)(lVar7 + -8);
        puVar11 = puVar8;
        (**(code **)(lVar17 + 0x30))(puVar8,1,lVar7);
        if ((int)puVar11 == 0) {
          uVar14 = *puVar8;
          uVar29 = puVar8[3];
          uVar28 = puVar8[2];
          puVar10[1] = puVar8[1];
          *puVar10 = uVar14;
          puVar10[3] = uVar29;
          puVar10[2] = uVar28;
          puVar10[4] = puVar8[4];
          uVar14 = puVar8[5];
          puVar10[6] = puVar8[6];
          puVar10[5] = uVar14;
          uVar14 = puVar8[7];
          puVar10[8] = puVar8[8];
          puVar10[7] = uVar14;
          lVar21 = (long)*(int *)(lVar7 + 0x28);
          lVar26 = (long)puVar8 + lVar21;
          (*pcVar24)(lVar26,1,lVar16);
          if ((int)lVar26 == 0) {
            (**(code **)(lVar27 + 0x20))((long)puVar10 + lVar21,(long)puVar8 + lVar21,lVar16);
            (**(code **)(lVar27 + 0x38))((long)puVar10 + lVar21,0,1,lVar16);
          }
          else {
            lVar26 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            func_0x000107c610b4((long)puVar10 + lVar21,(long)puVar8 + lVar21,
                                *(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
          }
          puVar11 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x2c));
          uVar14 = *puVar11;
          puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x2c));
          puVar9[1] = puVar11[1];
          *puVar9 = uVar14;
          puVar11 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x30));
          uVar14 = *puVar11;
          puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x30));
          puVar9[1] = puVar11[1];
          *puVar9 = uVar14;
          lVar21 = (long)*(int *)(lVar7 + 0x34);
          lVar26 = (long)puVar8 + lVar21;
          (*pcVar24)(lVar26,1,lVar16);
          if ((int)lVar26 == 0) {
            (**(code **)(lVar27 + 0x20))((long)puVar10 + lVar21,(long)puVar8 + lVar21,lVar16);
            (**(code **)(lVar27 + 0x38))((long)puVar10 + lVar21,0,1,lVar16);
          }
          else {
            lVar26 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            func_0x000107c610b4((long)puVar10 + lVar21,(long)puVar8 + lVar21,
                                *(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
          }
          puVar11 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x38));
          uVar14 = *puVar11;
          puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x38));
          puVar9[1] = puVar11[1];
          *puVar9 = uVar14;
          puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x3c));
          uVar14 = *puVar8;
          puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x3c));
          puVar11[1] = puVar8[1];
          *puVar11 = uVar14;
          (**(code **)(lVar17 + 0x38))(puVar10,0,1,lVar7);
        }
        else {
          lVar7 = 0x112db39a8;
          func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
          func_0x000107c610b4(puVar10,puVar8,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
        }
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x88));
        puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x88));
        uVar29 = puVar8[8];
        uVar28 = puVar8[0xb];
        uVar14 = puVar8[10];
        puVar10[9] = puVar8[9];
        puVar10[8] = uVar29;
        puVar10[0xb] = uVar28;
        puVar10[10] = uVar14;
        *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar8 + 0x14);
        uVar29 = puVar8[0x10];
        uVar28 = puVar8[0x13];
        uVar14 = puVar8[0x12];
        puVar10[0x11] = puVar8[0x11];
        puVar10[0x10] = uVar29;
        puVar10[0x13] = uVar28;
        puVar10[0x12] = uVar14;
        uVar14 = puVar8[0xc];
        uVar29 = puVar8[0xf];
        uVar28 = puVar8[0xe];
        puVar10[0xd] = puVar8[0xd];
        puVar10[0xc] = uVar14;
        puVar10[0xf] = uVar29;
        puVar10[0xe] = uVar28;
        uVar14 = *puVar8;
        uVar29 = puVar8[3];
        uVar28 = puVar8[2];
        puVar10[1] = puVar8[1];
        *puVar10 = uVar14;
        puVar10[3] = uVar29;
        puVar10[2] = uVar28;
        uVar29 = puVar8[4];
        uVar28 = puVar8[7];
        uVar14 = puVar8[6];
        puVar10[5] = puVar8[5];
        puVar10[4] = uVar29;
        puVar10[7] = uVar28;
        puVar10[6] = uVar14;
        *(undefined4 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x8c)) =
             *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x8c));
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x90)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x90));
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x94));
        puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x94));
        uVar14 = *puVar8;
        uVar29 = puVar8[3];
        uVar28 = puVar8[2];
        puVar10[1] = puVar8[1];
        *puVar10 = uVar14;
        puVar10[3] = uVar29;
        puVar10[2] = uVar28;
        uVar14 = puVar8[4];
        uVar29 = puVar8[7];
        uVar28 = puVar8[6];
        puVar10[5] = puVar8[5];
        puVar10[4] = uVar14;
        puVar10[7] = uVar29;
        puVar10[6] = uVar28;
        uVar29 = puVar8[0xc];
        uVar28 = puVar8[0xf];
        uVar14 = puVar8[0xe];
        puVar10[0xd] = puVar8[0xd];
        puVar10[0xc] = uVar29;
        puVar10[0xf] = uVar28;
        puVar10[0xe] = uVar14;
        uVar29 = puVar8[8];
        uVar28 = puVar8[0xb];
        uVar14 = puVar8[10];
        puVar10[9] = puVar8[9];
        puVar10[8] = uVar29;
        puVar10[0xb] = uVar28;
        puVar10[10] = uVar14;
        uVar14 = *(undefined8 *)((long)puVar8 + 0xa9);
        *(undefined8 *)((long)puVar10 + 0xb1) = *(undefined8 *)((long)puVar8 + 0xb1);
        *(undefined8 *)((long)puVar10 + 0xa9) = uVar14;
        uVar14 = puVar8[0x12];
        uVar29 = puVar8[0x15];
        uVar28 = puVar8[0x14];
        puVar10[0x13] = puVar8[0x13];
        puVar10[0x12] = uVar14;
        puVar10[0x15] = uVar29;
        puVar10[0x14] = uVar28;
        uVar14 = puVar8[0x10];
        puVar10[0x11] = puVar8[0x11];
        puVar10[0x10] = uVar14;
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x98)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x98));
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar15 + 0x9c)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x9c));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xa0)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xa0));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xa4)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xa4));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xa8)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xa8));
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xac));
        puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xac));
        uVar14 = *puVar8;
        uVar29 = puVar8[3];
        uVar28 = puVar8[2];
        puVar10[1] = puVar8[1];
        *puVar10 = uVar14;
        puVar10[3] = uVar29;
        puVar10[2] = uVar28;
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xb0)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xb0));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xb4)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xb4));
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xb8));
        puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xb8));
        uVar14 = *puVar8;
        uVar29 = puVar8[3];
        uVar28 = puVar8[2];
        puVar10[1] = puVar8[1];
        *puVar10 = uVar14;
        puVar10[3] = uVar29;
        puVar10[2] = uVar28;
        uVar29 = puVar8[8];
        uVar28 = puVar8[0xb];
        uVar14 = puVar8[10];
        puVar10[9] = puVar8[9];
        puVar10[8] = uVar29;
        puVar10[0xb] = uVar28;
        puVar10[10] = uVar14;
        uVar14 = puVar8[4];
        uVar29 = puVar8[7];
        uVar28 = puVar8[6];
        puVar10[5] = puVar8[5];
        puVar10[4] = uVar14;
        puVar10[7] = uVar29;
        puVar10[6] = uVar28;
        *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar8 + 0x14);
        uVar29 = puVar8[0x10];
        uVar28 = puVar8[0x13];
        uVar14 = puVar8[0x12];
        puVar10[0x11] = puVar8[0x11];
        puVar10[0x10] = uVar29;
        puVar10[0x13] = uVar28;
        puVar10[0x12] = uVar14;
        uVar14 = puVar8[0xc];
        uVar29 = puVar8[0xf];
        uVar28 = puVar8[0xe];
        puVar10[0xd] = puVar8[0xd];
        puVar10[0xc] = uVar14;
        puVar10[0xf] = uVar29;
        puVar10[0xe] = uVar28;
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xbc));
        puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xbc));
        uVar14 = *puVar8;
        uVar29 = puVar8[3];
        uVar28 = puVar8[2];
        puVar10[1] = puVar8[1];
        *puVar10 = uVar14;
        puVar10[3] = uVar29;
        puVar10[2] = uVar28;
        uVar29 = puVar8[8];
        uVar28 = puVar8[0xb];
        uVar14 = puVar8[10];
        puVar10[9] = puVar8[9];
        puVar10[8] = uVar29;
        puVar10[0xb] = uVar28;
        puVar10[10] = uVar14;
        uVar14 = puVar8[4];
        uVar29 = puVar8[7];
        uVar28 = puVar8[6];
        puVar10[5] = puVar8[5];
        puVar10[4] = uVar14;
        puVar10[7] = uVar29;
        puVar10[6] = uVar28;
        *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar8 + 0x14);
        uVar29 = puVar8[0x10];
        uVar28 = puVar8[0x13];
        uVar14 = puVar8[0x12];
        puVar10[0x11] = puVar8[0x11];
        puVar10[0x10] = uVar29;
        puVar10[0x13] = uVar28;
        puVar10[0x12] = uVar14;
        uVar14 = puVar8[0xc];
        uVar29 = puVar8[0xf];
        uVar28 = puVar8[0xe];
        puVar10[0xd] = puVar8[0xd];
        puVar10[0xc] = uVar14;
        puVar10[0xf] = uVar29;
        puVar10[0xe] = uVar28;
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xc0)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xc0));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xc4)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xc4));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar15 + 200)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 200));
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar15 + 0xcc)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xcc));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x14)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x14));
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x18)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x18));
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x1c));
        puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x1c));
        *puVar10 = *puVar8;
        uVar14 = puVar8[1];
        puVar10[2] = puVar8[2];
        puVar10[1] = uVar14;
        uVar14 = puVar8[3];
        puVar10[4] = puVar8[4];
        puVar10[3] = uVar14;
        lVar7 = 0;
        func_0x000100b92084();
        puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x1c));
        puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x1c));
        lVar7 = 0;
        func_0x000100b92194();
        lVar15 = *(long *)(lVar7 + -8);
        puVar11 = puVar8;
        (**(code **)(lVar15 + 0x30))(puVar8,1,lVar7);
        if ((int)puVar11 == 0) {
          uVar14 = *puVar8;
          uVar29 = puVar8[3];
          uVar28 = puVar8[2];
          puVar10[1] = puVar8[1];
          *puVar10 = uVar14;
          puVar10[3] = uVar29;
          puVar10[2] = uVar28;
          uVar14 = puVar8[4];
          puVar10[5] = puVar8[5];
          puVar10[4] = uVar14;
          uVar14 = *(undefined8 *)((long)puVar8 + 0x29);
          *(undefined8 *)((long)puVar10 + 0x31) = *(undefined8 *)((long)puVar8 + 0x31);
          *(undefined8 *)((long)puVar10 + 0x29) = uVar14;
          puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x14));
          puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x14));
          lVar17 = 0;
          func_0x000100b922c8();
          lVar26 = *(long *)(lVar17 + -8);
          puVar12 = puVar9;
          (**(code **)(lVar26 + 0x30))(puVar9,1,lVar17);
          if ((int)puVar12 == 0) {
            uVar14 = *puVar9;
            uVar29 = puVar9[3];
            uVar28 = puVar9[2];
            puVar11[1] = puVar9[1];
            *puVar11 = uVar14;
            puVar11[3] = uVar29;
            puVar11[2] = uVar28;
            uVar14 = puVar9[4];
            uVar29 = puVar9[7];
            uVar28 = puVar9[6];
            puVar11[5] = puVar9[5];
            puVar11[4] = uVar14;
            puVar11[7] = uVar29;
            puVar11[6] = uVar28;
            lVar22 = (long)*(int *)(lVar17 + 0x28);
            lVar21 = (long)puVar9 + lVar22;
            (*pcVar24)(lVar21,1,lVar16);
            if ((int)lVar21 == 0) {
              (**(code **)(lVar27 + 0x20))((long)puVar11 + lVar22,(long)puVar9 + lVar22,lVar16);
              (**(code **)(lVar27 + 0x38))((long)puVar11 + lVar22,0,1,lVar16);
            }
            else {
              lVar21 = 0x112d3bc20;
              func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
              func_0x000107c610b4((long)puVar11 + lVar22,(long)puVar9 + lVar22,
                                  *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
            }
            puVar12 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar17 + 0x2c));
            uVar14 = *puVar12;
            puVar3 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar17 + 0x2c));
            puVar3[1] = puVar12[1];
            *puVar3 = uVar14;
            puVar12 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar17 + 0x30));
            uVar14 = *puVar12;
            puVar3 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar17 + 0x30));
            puVar3[1] = puVar12[1];
            *puVar3 = uVar14;
            lVar22 = (long)*(int *)(lVar17 + 0x34);
            lVar21 = (long)puVar9 + lVar22;
            (*pcVar24)(lVar21,1,lVar16);
            if ((int)lVar21 == 0) {
              (**(code **)(lVar27 + 0x20))((long)puVar11 + lVar22,(long)puVar9 + lVar22,lVar16);
              (**(code **)(lVar27 + 0x38))((long)puVar11 + lVar22,0,1,lVar16);
            }
            else {
              lVar16 = 0x112d3bc20;
              func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
              func_0x000107c610b4((long)puVar11 + lVar22,(long)puVar9 + lVar22,
                                  *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
            }
            puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar17 + 0x38));
            uVar14 = *puVar9;
            puVar12 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar17 + 0x38));
            puVar12[1] = puVar9[1];
            *puVar12 = uVar14;
            (**(code **)(lVar26 + 0x38))(puVar11,0,1);
          }
          else {
            lVar16 = 0x112dd1600;
            func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
            func_0x000107c610b4(puVar11,puVar9,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
          }
          puVar11 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x18));
          puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x18));
          lVar16 = 0;
          func_0x000100b92390();
          lVar17 = *(long *)(lVar16 + -8);
          puVar9 = puVar8;
          (**(code **)(lVar17 + 0x30))(puVar8,1,lVar16);
          if ((int)puVar9 == 0) {
            uVar14 = *puVar8;
            puVar11[1] = puVar8[1];
            *puVar11 = uVar14;
            lVar26 = (long)*(int *)(lVar16 + 0x14);
            lVar27 = (long)puVar8 + lVar26;
            (**(code **)(lVar13 + 0x30))(lVar27,1,lVar18);
            if ((int)lVar27 == 0) {
              (*pcVar23)((long)puVar11 + lVar26,(long)puVar8 + lVar26,lVar18);
              (**(code **)(lVar13 + 0x38))((long)puVar11 + lVar26,0,1,lVar18);
            }
            else {
              lVar18 = 0x112d36580;
              func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
              func_0x000107c610b4((long)puVar11 + lVar26,(long)puVar8 + lVar26,
                                  *(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
            }
            (**(code **)(lVar17 + 0x38))(puVar11,0,1,lVar16);
          }
          else {
            lVar18 = 0x112dd1458;
            func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
            func_0x000107c610b4(puVar11,puVar8,*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
          }
          (**(code **)(lVar15 + 0x38))(puVar10,0,1,lVar7);
        }
        else {
          lVar18 = 0x112dd1460;
          func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
          func_0x000107c610b4(puVar10,puVar8,*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x20)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x20));
        puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x24));
        uVar14 = *puVar2;
        puVar10 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x24));
        puVar10[1] = puVar2[1];
        *puVar10 = uVar14;
        (**(code **)(lVar19 + 0x38))(puVar6,0,1);
      }
      else {
        lVar18 = 0x112e9b260;
        func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
        func_0x000107c610b4(puVar6,puVar2,*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
      }
      uVar14 = 8;
    }
LAB_1037d973c:
    func_0x000107c6159c(puVar1,lVar5,uVar14);
  }
  (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar5);
LAB_1037d9758:
  iVar4 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar20 = 0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(lVar20 + -8);
  pcVar23 = *(code **)(lVar18 + 0x20);
  (*pcVar23)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar20);
  lVar25 = (long)*(int *)(param_3 + 0x24);
  pcVar24 = *(code **)(lVar18 + 0x30);
  lVar5 = (long)param_2 + lVar25;
  (*pcVar24)(lVar5,1,lVar20);
  if ((int)lVar5 == 0) {
    (*pcVar23)((long)param_1 + lVar25,(long)param_2 + lVar25,lVar20);
    (**(code **)(lVar18 + 0x38))((long)param_1 + lVar25,0,1,lVar20);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar25,(long)param_2 + lVar25,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  lVar25 = (long)*(int *)(param_3 + 0x28);
  lVar5 = (long)param_2 + lVar25;
  (*pcVar24)(lVar5,1,lVar20);
  if ((int)lVar5 == 0) {
    (*pcVar23)((long)param_1 + lVar25,(long)param_2 + lVar25,lVar20);
    (**(code **)(lVar18 + 0x38))((long)param_1 + lVar25,0,1,lVar20);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar25,(long)param_2 + lVar25,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar5 = 0;
  func_0x000100b91acc();
  lVar20 = *(long *)(lVar5 + -8);
  puVar6 = puVar2;
  (**(code **)(lVar20 + 0x30))(puVar2,1,lVar5);
  if ((int)puVar6 == 0) {
    puVar6 = puVar2;
    func_0x000107c614c4(puVar2,lVar5);
    if ((int)puVar6 == 1) {
      *puVar1 = *puVar2;
      uVar14 = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[1] = uVar14;
      lVar18 = 0;
      func_0x000100b91790();
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x18));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x18));
      lVar25 = 0;
      func_0x000100b918b4();
      lVar19 = *(long *)(lVar25 + -8);
      puVar8 = puVar10;
      (**(code **)(lVar19 + 0x30))(puVar10,1,lVar25);
      if ((int)puVar8 == 0) {
        uVar14 = *puVar10;
        uVar29 = puVar10[3];
        uVar28 = puVar10[2];
        puVar6[1] = puVar10[1];
        *puVar6 = uVar14;
        puVar6[3] = uVar29;
        puVar6[2] = uVar28;
        iVar4 = *(int *)(lVar25 + 0x1c);
        lVar13 = 0;
        func_0x000107c5eec8();
        lVar15 = *(long *)(lVar13 + -8);
        pcVar23 = *(code **)(lVar15 + 0x20);
        (*pcVar23)((long)puVar6 + (long)iVar4,(long)puVar10 + (long)iVar4,lVar13);
        puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x20));
        uVar14 = *puVar8;
        puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x20));
        puVar11[1] = puVar8[1];
        *puVar11 = uVar14;
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x24)) =
             *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x24));
        puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x28));
        uVar14 = *puVar8;
        puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x28));
        puVar11[1] = puVar8[1];
        *puVar11 = uVar14;
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x2c)) =
             *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x2c));
        puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x30));
        uVar14 = *puVar8;
        puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x30));
        puVar11[1] = puVar8[1];
        *puVar11 = uVar14;
        lVar16 = (long)*(int *)(lVar25 + 0x34);
        lVar7 = (long)puVar10 + lVar16;
        (**(code **)(lVar15 + 0x30))(lVar7,1,lVar13);
        if ((int)lVar7 == 0) {
          (*pcVar23)((long)puVar6 + lVar16,(long)puVar10 + lVar16,lVar13);
          (**(code **)(lVar15 + 0x38))((long)puVar6 + lVar16,0,1,lVar13);
        }
        else {
          lVar7 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          func_0x000107c610b4((long)puVar6 + lVar16,(long)puVar10 + lVar16,
                              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
        }
        puVar8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x38));
        uVar14 = *puVar8;
        puVar11 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x38));
        puVar11[1] = puVar8[1];
        *puVar11 = uVar14;
        puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar25 + 0x3c));
        uVar14 = *puVar10;
        puVar8 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x3c));
        puVar8[1] = puVar10[1];
        *puVar8 = uVar14;
        (**(code **)(lVar19 + 0x38))(puVar6,0,1,lVar25);
      }
      else {
        lVar25 = 0x112dd42a0;
        func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
        func_0x000107c610b4(puVar6,puVar10,*(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x1c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x1c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x20));
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x24));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x24));
      uVar14 = *puVar10;
      uVar29 = puVar10[3];
      uVar28 = puVar10[2];
      puVar6[1] = puVar10[1];
      *puVar6 = uVar14;
      puVar6[3] = uVar29;
      puVar6[2] = uVar28;
      uVar14 = puVar10[10];
      uVar29 = puVar10[0xd];
      uVar28 = puVar10[0xc];
      puVar6[0xb] = puVar10[0xb];
      puVar6[10] = uVar14;
      puVar6[0xd] = uVar29;
      puVar6[0xc] = uVar28;
      uVar14 = puVar10[6];
      uVar29 = puVar10[9];
      uVar28 = puVar10[8];
      puVar6[7] = puVar10[7];
      puVar6[6] = uVar14;
      puVar6[9] = uVar29;
      puVar6[8] = uVar28;
      uVar14 = puVar10[4];
      puVar6[5] = puVar10[5];
      puVar6[4] = uVar14;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x28)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x28));
      uVar14 = 1;
    }
    else {
      lVar18 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar18 + -8) + 0x20))(puVar1,puVar2,lVar18);
      lVar18 = 0;
      func_0x000100b915bc();
      uVar14 = 0;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x14)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x14));
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x18));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x18));
      *(undefined1 *)(puVar6 + 8) = *(undefined1 *)(puVar10 + 8);
      uVar30 = puVar10[4];
      uVar29 = puVar10[7];
      uVar28 = puVar10[6];
      puVar6[5] = puVar10[5];
      puVar6[4] = uVar30;
      puVar6[7] = uVar29;
      puVar6[6] = uVar28;
      uVar28 = *puVar10;
      uVar30 = puVar10[3];
      uVar29 = puVar10[2];
      puVar6[1] = puVar10[1];
      *puVar6 = uVar28;
      puVar6[3] = uVar30;
      puVar6[2] = uVar29;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x1c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x1c));
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x20));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x20));
      uVar28 = puVar10[8];
      uVar30 = puVar10[0xb];
      uVar29 = puVar10[10];
      puVar6[9] = puVar10[9];
      puVar6[8] = uVar28;
      puVar6[0xb] = uVar30;
      puVar6[10] = uVar29;
      uVar28 = puVar10[0xc];
      puVar6[0xd] = puVar10[0xd];
      puVar6[0xc] = uVar28;
      uVar28 = *puVar10;
      uVar30 = puVar10[3];
      uVar29 = puVar10[2];
      puVar6[1] = puVar10[1];
      *puVar6 = uVar28;
      puVar6[3] = uVar30;
      puVar6[2] = uVar29;
      uVar30 = puVar10[4];
      uVar29 = puVar10[7];
      uVar28 = puVar10[6];
      puVar6[5] = puVar10[5];
      puVar6[4] = uVar30;
      puVar6[7] = uVar29;
      puVar6[6] = uVar28;
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x24));
      puVar10 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x24));
      uVar30 = *puVar10;
      uVar29 = puVar10[3];
      uVar28 = puVar10[2];
      puVar6[1] = puVar10[1];
      *puVar6 = uVar30;
      puVar6[3] = uVar29;
      puVar6[2] = uVar28;
      puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x28));
      uVar28 = *puVar6;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x28));
      puVar10[1] = puVar6[1];
      *puVar10 = uVar28;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x2c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x2c));
      puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x30));
      uVar28 = *puVar6;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x30));
      puVar10[1] = puVar6[1];
      *puVar10 = uVar28;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar18 + 0x34)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x34));
    }
    func_0x000107c6159c(puVar1,lVar5,uVar14);
    (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar5);
  }
  else {
    lVar5 = 0x112d3b128;
    func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x3c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  func_0x000107c610b4((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,0x301);
  return param_1;
}



/* Entry: 1037dd49c; end: 1037dd4a7;  */

void FUN_1037dd49c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1037dd4a8; end: 1037dd53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037dd4a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f962c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037dd540; end: 1037dd59f; -[_TtC27SponsoredAttachmentServices27SponsoredAttachmentServices init] */

void FUN_1037dd540(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredAttachmentServices.SponsoredAttachmentServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037dd56c);
  (*pcVar1)();
}



/* Entry: 1037dd5a0; end: 1037dd5af; -[_TtC27SponsoredAttachmentServices27SponsoredAttachmentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037dd5a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f962c0));
  return;
}



/* Entry: 1037dd5b0; end: 1037dd5cf;  */

void FUN_1037dd5b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128ed708);
  return;
}



/* Entry: 1037dd5d0; end: 1037dd657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037dd5d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100acd084();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f962f0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f962f8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037dd658);
  (*pcVar1)();
}



/* Entry: 1037dd658; end: 1037dd6b7; -[_TtC32BmUserNavigationScopeGraphBridge47BmUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037dd658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BmUserNavigationScopeGraphBridge.BmUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037dd684);
  (*pcVar1)();
}



/* Entry: 1037dd6b8; end: 1037dd6ef; -[_TtC32BmUserNavigationScopeGraphBridge47BmUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037dd6d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037dd6d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037dd6b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f962f0));
  return;
}



/* Entry: 1037dd6f0; end: 1037dd717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037dd6f0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f962f8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f962f0));
  return;
}



/* Entry: 1037dd718; end: 1037dd77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037dd718(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f965a8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037dd77c; end: 1037dd783;  */

void FUN_1037dd77c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037dd784; end: 1037dd823;  */

void FUN_1037dd784(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037dd824; end: 1037dd843;  */

void FUN_1037dd824(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037dd844; end: 1037dd8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037dd844(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f965b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037dd8a8; end: 1037dd8af;  */

void FUN_1037dd8a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037dd8b0; end: 1037dd94f;  */

void FUN_1037dd8b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037dd950; end: 1037dd96f;  */

void FUN_1037dd950(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037dd970; end: 1037dd9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037dd970(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f965b8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037dd9d4; end: 1037dd9db;  */

void FUN_1037dd9d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037dd9dc; end: 1037dda7b;  */

void FUN_1037dd9dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037dda7c; end: 1037dda9b;  */

void FUN_1037dda7c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037dda9c; end: 1037ddb0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037dda9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f965a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f965b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f965b8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037ddb10; end: 1037ddb6f; -[_TtC32BmUserNavigationScopeGraphBridge40BmUserNavigationScopeGraphBridgeServices init] */

void FUN_1037ddb10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BmUserNavigationScopeGraphBridge.BmUserNavigationScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037ddb3c);
  (*pcVar1)();
}



/* Entry: 1037ddb70; end: 1037ddc13; -[_TtC32BmUserNavigationScopeGraphBridge40BmUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037ddb8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ddb90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ddb70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f965a8));
  return;
}



/* Entry: 1037ddc14; end: 1037ddc4b;  */

undefined1  [16] FUN_1037ddc14(void)

{
  return ZEXT816(0x110696980);
}



/* Entry: 1037ddc4c; end: 1037ddc8f; -[SCBmUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037ddc4c(undefined8 param_1)

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



/* Entry: 1037ddc90; end: 1037ddcc3;  */

void FUN_1037ddc90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037ddcc4; end: 1037ddd0b; -[SCBmUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037ddcf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ddcf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ddcc4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f96610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f96618));
  return;
}


