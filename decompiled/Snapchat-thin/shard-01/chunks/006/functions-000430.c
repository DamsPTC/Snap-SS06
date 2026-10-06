/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012e3aa0; end: 1012e3ae7; -[SCSnapEditorPageLauncherEntryPoint snapEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e3aa0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70d00;
  func_0x000107c61428(param_1 + _DAT_112d70d00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1012e3ae8; end: 1012e3b4b; -[SCSnapEditorPageLauncherEntryPoint setSnapEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e3ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70d00;
  func_0x000107c61428(param_1 + _DAT_112d70d00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1012e3b4c; end: 1012e3e47;  */

/* WARNING: Possible PIC construction at 0x0001012e3d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e3dfc) */
/* WARNING: Removing unreachable block (ram,0x0001012e3dec) */
/* WARNING: Removing unreachable block (ram,0x0001012e3e1c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3e0c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3d80) */
/* WARNING: Removing unreachable block (ram,0x0001012e3d70) */
/* WARNING: Removing unreachable block (ram,0x0001012e3d60) */
/* WARNING: Removing unreachable block (ram,0x0001012e3d3c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3d0c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3d50) */
/* WARNING: Removing unreachable block (ram,0x0001012e3d20) */
/* WARNING: Removing unreachable block (ram,0x0001012e3ddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e3b4c(void)

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
  long *plVar11;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b1bc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c5b278();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c5b284();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c41420();
          func_0x000107c61180();
          if (lVar6 != 0) {
            func_0x000107c4d52c();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar7 = 0;
              FUN_1012e270c();
              lVar8 = lVar7;
              func_0x000107c610f8();
              lVar10 = _DAT_112d70c30;
              func_0x000107c61614(lVar8 + _DAT_112d70c30,0);
              func_0x000107c61604(lVar8 + lVar10,lVar2);
              lVar9 = 0;
              func_0x0001012e2f64();
              lVar10 = lVar9;
              func_0x000107c610f8();
              *(long *)(lVar10 + _DAT_112d70c68) = lVar3;
              *(long *)(lVar10 + _DAT_112d70c70) = lVar4;
              *(long *)(lVar10 + _DAT_112d70c78) = lVar5;
              *(long *)(lVar10 + _DAT_112d70c80) = lVar6;
              *(long *)(lVar10 + _DAT_112d70c88) = unaff_x20;
              puVar1 = PTR_s_init_1125d9248;
              lStack_70 = lVar10;
              lStack_68 = lVar9;
              func_0x000107c61174(unaff_x20);
              func_0x000107c61174(lVar6);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar2);
              plVar11 = &lStack_70;
              func_0x000107c61154(plVar11,puVar1);
              *(long **)(lVar8 + _DAT_112d70c38) = plVar11;
              lStack_80 = lVar8;
              lStack_78 = lVar7;
              func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
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



/* Entry: 1012e3e48; end: 1012e3e6f; -[SCSnapEditorPageLauncherEntryPoint begin] */

void FUN_1012e3e48(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012e3b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012e3e70; end: 1012e3eb3; -[SCSnapEditorPageLauncherEntryPoint end] */

void FUN_1012e3e70(undefined8 param_1)

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



/* Entry: 1012e3eb4; end: 1012e4203;  */

void FUN_1012e3eb4(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000015;
    if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e2010)) ||
       (func_0x000107c605b8(0xd000000000000015,0x800000010ef1dff0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5935c();
    }
    else {
      uVar2 = 0xd000000000000017;
      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e2030)) ||
         (func_0x000107c605b8(0xd000000000000017,0x800000010ef1dfd0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c593d0();
      }
      else {
        uVar2 = 0;
        if (((param_2 == 0x767265536b636564) && (param_3 == -0x13ffffff8c9a9c97)) ||
           (func_0x000107c605b8(0x767265536b636564,0xec00000073656369,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53e98();
        }
        else {
          if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e1ec0)) &&
                 (func_0x000107c605b8(0xd000000000000016,0x800000010ef1e140,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SCEditResendSnapEditorLauncher/SCSnapEditorPageLauncherEntryPoint.swift"
                                    ,0x47,2,0x39,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1012e4204);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c593c4();
              goto LAB_1012e3f40;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c569f0();
        }
      }
    }
  }
LAB_1012e3f40:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012e4204; end: 1012e42af; -[SCSnapEditorPageLauncherEntryPoint setValue:forIvarName:] */

void FUN_1012e4204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012e3eb4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012e42b0; end: 1012e436b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e42b0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d70cd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70ce0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70ce8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70cf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70cf8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d70d00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d70d08) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012e436c; end: 1012e438b; -[SCSnapEditorPageLauncherEntryPoint init] */

void FUN_1012e436c(void)

{
  FUN_1012e42b0();
  return;
}



/* Entry: 1012e438c; end: 1012e43bf;  */

void FUN_1012e438c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012e43c0; end: 1012e4447; -[SCSnapEditorPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012e442c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e4430) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e43c0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d70cd8);
  func_0x000107c61610(param_1 + _DAT_112d70ce0);
  func_0x000107c61610(param_1 + _DAT_112d70ce8);
  func_0x000107c61610(param_1 + _DAT_112d70cf0);
  func_0x000107c61610(param_1 + _DAT_112d70cf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d70d00));
  return;
}



/* Entry: 1012e4448; end: 1012e4467;  */

void FUN_1012e4448(void)

{
  func_0x000107c61168(&PTR_PTR_1127c5738);
  return;
}



/* Entry: 1012e4468; end: 1012e458f;  */

void FUN_1012e4468(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_98 [72];
  
  func_0x0001000285a8(0x112d71030,&UNK_10d931e98);
  lVar3 = 5;
  func_0x000107c602e8();
  lVar11 = 0;
  lVar1 = lVar3 + 0x38;
  do {
    uVar10 = *(ulong *)(lVar11 * 8 + 0x112d71008);
    func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar3 + 0x28));
    uVar4 = uVar10;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar6 = uVar4 >> 6;
    uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
    uVar8 = 1L << (uVar4 & 0x3f);
    lVar5 = *(long *)(lVar3 + 0x30);
    if ((uVar8 & uVar7) != 0) {
      do {
        if (*(ulong *)(lVar5 + uVar4 * 8) == uVar10) goto LAB_1012e44e0;
        uVar4 = uVar4 + 1 & ~uVar9;
        uVar6 = uVar4 >> 6;
        uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
        uVar8 = 1L << (uVar4 & 0x3f);
      } while ((uVar8 & uVar7) != 0);
    }
    *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
    *(ulong *)(lVar5 + uVar4 * 8) = uVar10;
    if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012e4590);
      (*pcVar2)();
    }
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_1012e44e0:
    lVar11 = lVar11 + 1;
    if (lVar11 == 5) {
      lRam0000000112d70fd8 = lVar3;
      return;
    }
  } while( true );
}



/* Entry: 1012e4590; end: 1012e555f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1012e4590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_280;
  undefined1 auStack_80 [16];
  undefined *apuStack_70 [2];
  
  func_0x000107c610f8();
  lVar4 = _DAT_112d70d38;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar2;
  lVar4 = _DAT_112d70d40;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar2;
  lVar4 = _DAT_112d70d48;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d70d50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d70d58) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d70d60) = 0;
  *(long *)(unaff_x20 + _DAT_112d70d68) = param_1;
  func_0x000107c61174();
  uVar7 = param_5;
  func_0x000107c4141c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112d70d70) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112d70d78) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d70d80) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d70d88) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d70d90) = param_9;
  *(long *)(unaff_x20 + _DAT_112d70d98) = param_10;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar4 = param_10;
  func_0x000107c44568();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x0001000285a8(0x112d70da0,&UNK_10d931df0);
    lVar3 = lVar4;
    func_0x0001000bda74();
    func_0x000107c61170(lVar4);
    lVar4 = 0;
    func_0x0001012eef30();
    func_0x000107c613fc();
    apuStack_70[0] = PTR___swiftEmptySetSingleton_11034f1d8;
    func_0x0001000285a8(0x112d70da8,&UNK_10d9e4e30);
    func_0x000107c613fc();
    ppuVar5 = apuStack_70;
    func_0x00010006c248();
    *(long *)(lVar4 + 0x10) = lVar3;
    *(undefined ***)(lVar4 + 0x18) = ppuVar5;
    *(long *)(unaff_x20 + _DAT_112d70db0) = lVar4;
    *(undefined8 *)(unaff_x20 + _DAT_112d70db8) = param_11;
    *(undefined8 *)(unaff_x20 + _DAT_112d70dc0) = param_12;
    *(undefined8 *)(unaff_x20 + _DAT_112d70dc8) = param_13;
    *(undefined8 *)(unaff_x20 + _DAT_112d70dd0) = param_3;
    *(undefined8 *)(unaff_x20 + _DAT_112d70dd8) = param_14;
    *(undefined8 *)(unaff_x20 + _DAT_112d70de0) = param_15;
    *(undefined8 *)(unaff_x20 + _DAT_112d70de8) = param_16;
    *(undefined8 *)(unaff_x20 + _DAT_112d70df0) = param_17;
    *(undefined8 *)(unaff_x20 + _DAT_112d70df8) = param_2;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e00) = param_18;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e08) = param_19;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e10) = param_20;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e18) = param_21;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e20) = param_22;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e28) = param_23;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e30) = param_24;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e38) = param_25;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e40) = param_26;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e48) = param_27;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e50) = param_28;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e58) = param_29;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e60) = param_30;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e68) = param_31;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e70) = param_32;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e78) = param_33;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e80) = param_34;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e88) = param_35;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e90) = param_36;
    *(undefined8 *)(unaff_x20 + _DAT_112d70e98) = param_37;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ea0) = param_38;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ea8) = param_39;
    *(undefined8 *)(unaff_x20 + _DAT_112d70eb0) = param_40;
    *(undefined8 *)(unaff_x20 + _DAT_112d70eb8) = param_41;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ec0) = param_42;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ec8) = param_43;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ed0) = param_44;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ed8) = param_45;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ee0) = param_46;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ee8) = param_47;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ef0) = param_48;
    *(undefined8 *)(unaff_x20 + _DAT_112d70ef8) = param_49;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f00) = param_50;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f08) = param_51;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f10) = param_52;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f18) = param_53;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f20) = param_54;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f28) = param_55;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f30) = param_56;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f38) = param_57;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f40) = param_58;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f48) = param_59;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f50) = param_60;
    *(undefined8 *)(unaff_x20 + _DAT_112d70f58) = param_61;
    lVar4 = *(long *)(param_1 + _DAT_112e976f0);
    if (lVar4 == 0) {
      func_0x000107c61174(param_11);
      func_0x000107c61174(param_12);
      func_0x000107c61174(param_13);
      func_0x000107c61174(param_3);
      func_0x000107c61174(param_14);
      func_0x000107c61174(param_15);
      func_0x000107c61174(param_16);
      func_0x000107c61174(param_17);
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_18);
      func_0x000107c61174(param_19);
      func_0x000107c61174(param_20);
      func_0x000107c615f0(param_21);
      func_0x000107c615f0(param_22);
      func_0x000107c615f0(param_23);
      func_0x000107c61174(param_24);
      func_0x000107c61174(param_25);
      func_0x000107c61174(param_26);
      func_0x000107c61174(param_27);
      func_0x000107c61174(param_28);
      func_0x000107c61174(param_29);
      func_0x000107c61174(param_30);
      func_0x000107c61174(param_31);
      func_0x000107c61174(param_32);
      func_0x000107c61174(param_33);
      func_0x000107c61174(param_34);
      func_0x000107c61174(param_35);
      func_0x000107c61174(param_36);
      func_0x000107c61174(param_37);
      func_0x000107c61174(param_38);
      func_0x000107c61174(param_39);
      func_0x000107c61174(param_40);
      func_0x000107c61174(param_41);
      func_0x000107c61174(param_42);
      func_0x000107c61174(param_43);
      func_0x000107c61174(param_44);
      func_0x000107c61174(param_45);
      func_0x000107c61174(param_46);
      func_0x000107c61174(param_47);
      func_0x000107c61174(param_48);
      func_0x000107c61174(param_49);
      func_0x000107c61174(param_50);
      func_0x000107c61174(param_51);
      func_0x000107c61174(param_52);
      func_0x000107c61174(param_53);
      func_0x000107c61174(param_54);
      func_0x000107c61174(param_55);
      func_0x000107c61174(param_56);
      func_0x000107c61174(param_57);
      func_0x000107c61174(param_58);
      func_0x000107c61174(param_59);
      func_0x000107c61174(param_60);
      func_0x000107c615f0(param_61);
      uVar7 = 0;
    }
    else {
      if (*(long *)(param_1 + _DAT_112e976e0) == 0) {
        uStack_280 = 0;
      }
      else {
        uStack_280 = *(undefined8 *)(*(long *)(param_1 + _DAT_112e976e0) + _DAT_113034b50);
        func_0x000107c61174();
      }
      func_0x000107c61174(param_11);
      func_0x000107c61174(param_12);
      func_0x000107c61174(param_13);
      func_0x000107c61174(param_3);
      func_0x000107c61174(param_14);
      func_0x000107c61174(param_15);
      func_0x000107c61174(param_16);
      func_0x000107c61174(param_17);
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_18);
      func_0x000107c61174(param_19);
      func_0x000107c61174(param_20);
      func_0x000107c615f0(param_21);
      func_0x000107c615f0(param_22);
      func_0x000107c615f0(param_23);
      func_0x000107c61174(param_24);
      func_0x000107c61174(param_25);
      func_0x000107c61174(param_26);
      func_0x000107c61174(param_27);
      func_0x000107c61174(param_28);
      func_0x000107c61174(param_29);
      func_0x000107c61174(param_30);
      func_0x000107c61174(param_31);
      func_0x000107c61174(param_32);
      func_0x000107c61174(param_33);
      func_0x000107c61174(param_34);
      func_0x000107c61174(param_35);
      func_0x000107c61174(param_36);
      func_0x000107c61174(param_37);
      func_0x000107c61174(param_38);
      func_0x000107c61174(param_39);
      func_0x000107c61174(param_40);
      func_0x000107c61174(param_41);
      func_0x000107c61174(param_42);
      func_0x000107c61174(param_43);
      func_0x000107c61174(param_44);
      func_0x000107c61174(param_45);
      func_0x000107c61174(param_46);
      func_0x000107c61174(param_47);
      func_0x000107c61174(param_48);
      func_0x000107c61174(param_49);
      func_0x000107c61174(param_50);
      func_0x000107c61174(param_51);
      func_0x000107c61174(param_52);
      func_0x000107c61174(param_53);
      func_0x000107c61174(param_54);
      func_0x000107c61174(param_55);
      func_0x000107c61174(param_56);
      func_0x000107c61174(param_57);
      func_0x000107c61174(param_58);
      func_0x000107c61174(param_59);
      func_0x000107c61174(param_60);
      func_0x000107c615f0(param_61);
      func_0x000107c61174(lVar4);
      uVar7 = uStack_280;
      FUN_1012f9270();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uStack_280);
    }
    *(undefined8 *)(unaff_x20 + _DAT_112d70f60) = uVar7;
    puVar6 = auStack_80;
    func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
    func_0x000107c61180();
    func_0x0001012e528c();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c615e8(param_21);
    func_0x000107c615e8(param_22);
    func_0x000107c615e8(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_32);
    func_0x000107c61170(param_33);
    func_0x000107c61170(param_34);
    func_0x000107c61170(param_35);
    func_0x000107c61170(param_36);
    func_0x000107c61170(param_37);
    func_0x000107c61170(param_38);
    func_0x000107c61170(param_39);
    func_0x000107c61170(param_40);
    func_0x000107c61170(param_41);
    func_0x000107c61170(param_42);
    func_0x000107c61170(param_43);
    func_0x000107c61170(param_44);
    func_0x000107c61170(param_45);
    func_0x000107c61170(param_46);
    func_0x000107c61170(param_47);
    func_0x000107c61170(param_48);
    func_0x000107c61170(param_49);
    func_0x000107c61170(param_50);
    func_0x000107c61170(param_51);
    func_0x000107c61170(param_52);
    func_0x000107c61170(param_53);
    func_0x000107c61170(param_54);
    func_0x000107c61170(param_55);
    func_0x000107c61170(param_56);
    func_0x000107c61170(param_57);
    func_0x000107c61170(param_58);
    func_0x000107c61170(param_59);
    func_0x000107c61170(param_60);
    func_0x000107c615e8(param_61);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012e528c);
  (*pcVar1)();
}



/* Entry: 1012e5560; end: 1012e7243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e5560(double param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined **ppuVar14;
  ulong uVar15;
  long lVar16;
  long extraout_x8;
  long lVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long alStack_560 [64];
  undefined1 auStack_360 [8];
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined **ppuStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  long *plStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar21 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar16 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(auStack_360 + lVar16);
  func_0x000107c5ee8c();
  (**(code **)(lVar21 + 8))(auStack_360 + lVar16,lVar3);
  lVar21 = _DAT_112e976c8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d70d68);
  lVar17 = *(long *)(lVar3 + _DAT_112e976c8);
  puVar4 = PTR_PTR_1126c4f00;
  func_0x000107c61168(PTR_PTR_1126c4f00);
  func_0x000107c6148c(lVar17,puVar4);
  if ((lVar17 == 0) || (func_0x000107c4ef18(), (int)lVar17 != 0)) {
    lVar17 = *(long *)(unaff_x20 + _DAT_112d70e00);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012e7234);
      (*pcVar2)();
    }
    uVar5 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010ef34f40);
    lVar6 = lVar17;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar17);
    func_0x000107c61170(uVar5);
    if ((int)lVar6 != 0) {
      func_0x000107c5bb50(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d70e68) + _DAT_113097748));
      *(undefined1 *)(unaff_x20 + _DAT_112d70d60) = 1;
    }
  }
  lVar29 = *(long *)(unaff_x20 + _DAT_112d70d78);
  lVar17 = lVar29;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar6 = lVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar17);
  if (lVar6 != 0) {
    lVar18 = *(long *)(unaff_x20 + _DAT_112d70d88);
    lVar17 = lVar18;
    func_0x000107c439dc();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126b0c98;
    func_0x000107c610f8(PTR_PTR_1126b0c98);
    func_0x000107c47f1c();
    lVar20 = lVar17;
    (**(code **)(lVar17 + 0x10))(lVar17,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c60bd0(lVar17);
    lVar17 = lVar20;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    if (lVar17 != 0) {
      lVar20 = lVar18;
      func_0x000107c5c3e4();
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126b1538;
      func_0x000107c610f8(PTR_PTR_1126b1538);
      func_0x000107c47d44();
      lVar7 = lVar20;
      (**(code **)(lVar20 + 0x10))(lVar20,puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c60bd0(lVar20);
      lVar20 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      lVar7 = lVar6;
      if (lVar20 != 0) {
        lStack_f0 = lVar20;
        func_0x000107c452ec();
        func_0x000107c61180();
        puVar4 = PTR_PTR_1126b1530;
        func_0x000107c610f8(PTR_PTR_1126b1530);
        func_0x000107c486a4();
        lVar20 = lVar18;
        (**(code **)(lVar18 + 0x10))(lVar18,puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c60bd0(lVar18);
        lVar18 = lVar20;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar20);
        lVar7 = lVar17;
        lVar20 = lStack_f0;
        if (lVar18 != 0) {
          lVar7 = *(long *)(unaff_x20 + _DAT_112d70d90);
          func_0x000107c4453c();
          func_0x000107c61180();
          lVar20 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          lVar7 = lStack_f0;
          if (lVar20 != 0) {
            lStack_100 = lVar21;
            lVar19 = *(long *)(unaff_x20 + _DAT_112d70dc0);
            lVar21 = lVar19;
            func_0x000107c44588();
            func_0x000107c61180();
            lVar7 = lVar21;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar21);
            lVar21 = lVar17;
            lVar24 = lStack_f0;
            if (lVar7 != 0) {
              func_0x000107c4d604();
              func_0x000107c61180();
              lVar21 = lVar19;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar19);
              lStack_f8 = lVar21;
              if (lVar21 != 0) {
                puVar8 = *(undefined8 **)(*(long *)(unaff_x20 + _DAT_112d70dd0) + _DAT_112ed3fa0);
                func_0x000107c5c734();
                func_0x000107c61180();
                puStack_108 = puVar8;
                if (puVar8 == (undefined8 *)0x0) {
                  func_0x000107c615e8(lVar6);
                  func_0x000107c615e8(lStack_f8);
                  func_0x000107c615e8(lVar7);
                  func_0x000107c615e8(lVar20);
                }
                else {
                  uVar31 = *(undefined8 *)(lVar3 + _DAT_112e976d0);
                  lStack_110 = lVar7;
                  FUN_1012ea0b0(0,0x112d60fb0,&PTR_PTR_1126b3568);
                  uVar5 = uVar31;
                  func_0x000107c61434(uVar31);
                  func_0x000107c5fc48();
                  func_0x000107c6142c(uVar31);
                  puVar8 = puStack_108;
                  plStack_148 = (long *)_DAT_112e97700;
                  lStack_150 = _DAT_112e976f0;
                  puVar11 = puStack_108;
                  func_0x000107c40ba8();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar5);
                  puStack_118 = puVar11;
                  if (puVar11 == (undefined8 *)0x0) {
                    func_0x000107c615e8(puVar8);
                    func_0x000107c615e8(lVar6);
                    func_0x000107c615e8(lStack_f8);
                    func_0x000107c615e8(lStack_110);
                    func_0x000107c615e8(lVar20);
                    goto LAB_1012e6244;
                  }
                  puVar4 = PTR_PTR_1126ae6b8;
                  lStack_138 = lVar18;
                  lStack_130 = lVar20;
                  func_0x000107c610f8(PTR_PTR_1126ae6b8);
                  func_0x000107c453e4();
                  puVar9 = PTR_PTR_1126b13d8;
                  func_0x000107c610f8();
                  func_0x000107c45b80();
                  func_0x000107c61170(puVar4);
                  puVar4 = PTR_PTR_1126ae6b8;
                  func_0x000107c610f8(PTR_PTR_1126ae6b8);
                  func_0x000107c453e4();
                  puVar10 = PTR_PTR_1126b1540;
                  func_0x000107c610f8();
                  func_0x000107c45b7c();
                  puStack_120 = puVar10;
                  func_0x000107c61170(puVar4);
                  puVar4 = PTR_PTR_1126b1548;
                  func_0x000107c610f8();
                  func_0x000107c48698();
                  lVar18 = *(long *)(unaff_x20 + _DAT_112d70db8);
                  lVar21 = lVar18;
                  puStack_128 = puVar4;
                  func_0x000107c402f4();
                  func_0x000107c61180();
                  lVar20 = lVar21;
                  puStack_140 = puVar9;
                  (**(code **)(lVar21 + 0x10))();
                  func_0x000107c61180();
                  func_0x000107c60bd0(lVar21);
                  lVar21 = lVar20;
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  func_0x000107c61170(lVar20);
                  if (lVar21 != 0) {
                    func_0x000107c40358();
                    func_0x000107c61180();
                    lVar20 = lVar18;
                    (**(code **)(lVar18 + 0x10))();
                    func_0x000107c61180();
                    func_0x000107c60bd0(lVar18);
                    lVar18 = lVar20;
                    func_0x000107c5c734();
                    func_0x000107c61180();
                    func_0x000107c61170(lVar20);
                    if (lVar18 != 0) {
                      lVar7 = *(long *)(unaff_x20 + _DAT_112d70dc8);
                      func_0x000107c43a54();
                      func_0x000107c61180();
                      lVar20 = lVar7;
                      (**(code **)(lVar7 + 0x10))();
                      func_0x000107c61180();
                      func_0x000107c60bd0(lVar7);
                      if (lVar20 != 0) {
                        lVar7 = lVar20;
                        func_0x000107c5c734();
                        func_0x000107c61180();
                        func_0x000107c61170(lVar20);
                        if (lVar7 != 0) {
                          lStack_190 = _DAT_112e976f8;
                          ppuVar12 = *(undefined ***)(lVar3 + _DAT_112e976f8);
                          lVar20 = *(long *)(lVar3 + (long)plStack_148);
                          lVar24 = *(long *)(unaff_x20 + _DAT_112d70e00);
                          lStack_170 = lVar7;
                          lStack_168 = lVar21;
                          lStack_160 = lVar18;
                          ppuStack_158 = ppuVar12;
                          func_0x000107c61174();
                          ppuStack_178 = ppuVar12;
                          func_0x000107c61174();
                          lVar21 = lVar24;
                          puStack_180 = (undefined8 *)lVar20;
                          func_0x000107c3fa04();
                          func_0x000107c61180();
                          if (lVar21 == 0) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012e7238);
                            (*pcVar2)();
                          }
                          lVar7 = 0;
                          FUN_1012ee93c();
                          lVar18 = lVar7;
                          func_0x000107c610f8();
                          lVar20 = _DAT_112d71320;
                          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          func_0x000107c610f8();
                          func_0x000107c453e4();
                          *(undefined **)(lVar18 + lVar20) = puVar4;
                          plVar13 = &lStack_88;
                          lStack_1c0 = lVar7;
                          lStack_88 = lVar18;
                          lStack_80 = lVar7;
                          func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
                          func_0x000107c61180();
                          puVar8 = puStack_180;
                          ppuVar12 = ppuStack_158;
                          FUN_1012ee95c(ppuStack_158,puStack_180,lVar21);
                          func_0x000107c61170(ppuStack_178);
                          func_0x000107c61170(puVar8);
                          func_0x000107c615e8(lVar21);
                          uVar5 = *(undefined8 *)((long)plVar13 + _DAT_112d71320);
                          *(undefined ***)((long)plVar13 + _DAT_112d71320) = ppuVar12;
                          plStack_1c8 = plVar13;
                          func_0x000107c61170(plVar13);
                          func_0x000107c61170(uVar5);
                          puVar8 = puStack_118;
                          puVar4 = PTR___NSConcreteStackBlock_11034bd00;
                          lVar21 = *(long *)(lVar3 + _DAT_112e976d8);
                          lStack_188 = lVar24;
                          if (lVar21 != 0) {
                            func_0x000107c61174();
                            lVar20 = lVar6;
                            func_0x000107c509b4();
                            func_0x000107c61180();
                            if (lVar20 != 0) {
                              puVar9 = &UNK_11039f1a0;
                              func_0x000107c613fc(&UNK_11039f1a0,0x18,7);
                              *(long *)(puVar9 + 0x10) = lVar21;
                              pcStack_98 = (code *)0x1012e9e90;
                              puStack_b8 = puVar4;
                              uStack_b0 = 0x42000000;
                              pcStack_a8 = (code *)0x100f11710;
                              puStack_a0 = &UNK_11039f1b8;
                              ppuVar12 = &puStack_b8;
                              puStack_90 = puVar9;
                              func_0x000107c60bc4();
                              puVar9 = puStack_90;
                              ppuStack_178 = ppuVar12;
                              func_0x000107c61174();
                              func_0x000107c61574(puVar9);
                              puVar9 = &UNK_11039f1f0;
                              func_0x000107c613fc(&UNK_11039f1f0,0x18,7);
                              *(long *)(puVar9 + 0x10) = lVar21;
                              pcStack_98 = (code *)0x1012e9e98;
                              puStack_b8 = puVar4;
                              uStack_b0 = 0x42000000;
                              pcStack_a8 = FUN_100f10508;
                              puStack_a0 = &UNK_11039f208;
                              ppuVar14 = &puStack_b8;
                              puStack_90 = puVar9;
                              func_0x000107c60bc4(ppuVar14);
                              puVar9 = puStack_90;
                              func_0x000107c61174();
                              puVar4 = PTR___NSConcreteStackBlock_11034bd00;
                              puStack_180 = (undefined8 *)lVar21;
                              func_0x000107c61574(puVar9);
                              FUN_1012faa2c(0);
                              func_0x000107c614e8();
                              ppuVar12 = ppuStack_178;
                              lVar21 = lVar20;
                              func_0x000107c4c214();
                              func_0x000107c61180();
                              ppuStack_158 = (undefined **)lVar21;
                              func_0x000107c615e8(lVar20);
                              func_0x000107c61170(puStack_180);
                              func_0x000107c60bd0(ppuVar14);
                              func_0x000107c60bd0(ppuVar12);
                              goto LAB_1012e626c;
                            }
                            func_0x000107c61170(lVar21);
                          }
                          ppuStack_158 = (undefined **)0x0;
LAB_1012e626c:
                          FUN_1012e73d0(puVar8);
                          puVar11 = puVar8;
                          func_0x000107c614f0();
                          puStack_1d8 = puVar11;
                          func_0x000107c4f20c();
                          FUN_1012e7800();
                          uStack_198 = CONCAT44(uStack_198._4_4_,(int)puVar8);
                          puVar10 = PTR_PTR_1126ae720;
                          func_0x000107c61168();
                          uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d70f38);
                          puVar9 = &UNK_11039f150;
                          ppuStack_178 = (undefined **)puVar10;
                          func_0x000107c613fc(&UNK_11039f150,0x18,7);
                          *(undefined8 *)(puVar9 + 0x10) = uVar5;
                          pcStack_98 = FUN_1012e9e6c;
                          uStack_b0 = 0x42000000;
                          pcStack_a8 = (code *)0x1012ea220;
                          puStack_a0 = &UNK_11039f168;
                          ppuVar14 = &puStack_b8;
                          puStack_b8 = puVar4;
                          puStack_90 = puVar9;
                          func_0x000107c60bc4(ppuVar14);
                          puVar4 = puStack_90;
                          func_0x000107c61174(uVar5);
                          func_0x000107c61574(puVar4);
                          ppuVar12 = ppuStack_178;
                          func_0x000107c3e4fc();
                          func_0x000107c61180();
                          ppuStack_178 = ppuVar12;
                          func_0x000107c60bd0(ppuVar14);
                          FUN_1012e7908();
                          puStack_180 = puVar8;
                          func_0x0001000298f0();
                          func_0x000107c61428();
                          uVar5 = *puVar8;
                          puStack_1d0 = puVar8;
                          func_0x000107c61174(uVar5);
                          uVar31 = 0xd00000000000002e;
                          func_0x0001000a9a18(0xd00000000000002e,0x800000010ef34f70);
                          uStack_1e0 = uVar31;
                          func_0x000107c61170(uVar5);
                          lVar21 = _DAT_112e97708;
                          uVar25 = *(undefined8 *)(lVar3 + lStack_190);
                          lStack_190 = *(undefined8 *)(lVar3 + (long)plStack_148);
                          uVar22 = *(undefined8 *)(lVar3 + lStack_150);
                          plStack_148 = *(long **)(lVar3 + _DAT_112e976e8);
                          uVar27 = *(undefined8 *)(lVar3 + _DAT_112e976e0);
                          func_0x000107c61428(lVar3 + _DAT_112e97708,auStack_d0,0,0);
                          lVar21 = lVar3 + lVar21;
                          func_0x000107c61618();
                          uVar31 = *(undefined8 *)(unaff_x20 + _DAT_112d70db0);
                          uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d70d80);
                          lStack_200 = lVar21;
                          uStack_1f8 = uVar27;
                          func_0x000107c61174(uVar27);
                          lVar21 = lStack_190;
                          func_0x000107c61174();
                          plVar13 = plStack_148;
                          uStack_210 = lVar21;
                          func_0x000107c61174();
                          uStack_218 = plVar13;
                          uStack_208 = uVar31;
                          func_0x000107c6157c(uVar31);
                          func_0x000107c61174();
                          lStack_220 = lVar29;
                          func_0x000107c61174();
                          uStack_228 = uVar5;
                          uStack_1e8 = uVar25;
                          func_0x000107c61174(uVar25);
                          uStack_1f0 = uVar22;
                          func_0x000107c61174(uVar22);
                          uVar15 = uStack_198 & 0xffffffff;
                          FUN_1012e7a7c(param_1 * 1000.0,uVar15,ppuStack_158);
                          uStack_238 = *(undefined8 *)
                                        (*(long *)(unaff_x20 + _DAT_112d70dd8) + _DAT_112d728f0);
                          uVar27 = *(undefined8 *)
                                    (*(long *)(unaff_x20 + _DAT_112d70de0) + _DAT_112e984a0);
                          uVar31 = *(undefined8 *)(unaff_x20 + _DAT_112d70d70);
                          uStack_1b0 = *(undefined8 *)(unaff_x20 + _DAT_112d70f08);
                          puVar8 = (undefined8 *)
                                   (*(long *)(unaff_x20 + _DAT_112d70df8) + _DAT_112e984d0);
                          uVar5 = *puVar8;
                          uStack_258 = puVar8[1];
                          uVar30 = *(undefined8 *)
                                    (*(long *)(unaff_x20 + _DAT_112d70de8) + _DAT_112e97d18);
                          uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112d70df0);
                          uStack_1b8 = *(undefined8 *)(unaff_x20 + _DAT_112d70e08);
                          uStack_1a8 = *(undefined8 *)(unaff_x20 + _DAT_112d70e10);
                          uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d70e18);
                          uStack_1a0 = *(undefined8 *)(unaff_x20 + _DAT_112d70e30);
                          uStack_198 = *(undefined8 *)(unaff_x20 + _DAT_112d70e38);
                          lStack_190 = *(undefined8 *)(unaff_x20 + _DAT_112d70e40);
                          lStack_150 = *(undefined8 *)(unaff_x20 + _DAT_112d70e48);
                          plStack_148 = *(long **)(unaff_x20 + _DAT_112d70e50);
                          uStack_230 = uVar15;
                          func_0x000107c615f0();
                          uStack_240 = uVar27;
                          func_0x000107c6157c(uVar27);
                          uStack_248 = uVar31;
                          func_0x000107c615f0(uVar31);
                          uStack_250 = uVar5;
                          func_0x000107c615f0(uVar5);
                          uVar31 = uStack_1b0;
                          func_0x000107c61174();
                          uStack_1b0 = uVar30;
                          func_0x000107c615f0(uVar30);
                          func_0x000107c61174();
                          uVar5 = uStack_1b8;
                          func_0x000107c61174();
                          func_0x000107c61174();
                          uStack_1b8 = uStack_1a8;
                          uStack_1a8 = uVar25;
                          func_0x000107c615f0(uVar25);
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c615f0(puStack_118);
                          plVar13 = plStack_148;
                          func_0x000107c41100();
                          func_0x000107c61180();
                          lStack_260 = (long)plVar13;
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012e723c);
                            (*pcVar2)();
                          }
                          uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d70e58);
                          uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112d70d38);
                          uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112d70d40);
                          uStack_2a0 = *(undefined8 *)(unaff_x20 + _DAT_112d70e68);
                          uStack_298 = *(undefined8 *)(unaff_x20 + _DAT_112d70e88);
                          uStack_290 = *(undefined8 *)(unaff_x20 + _DAT_112d70e90);
                          uStack_288 = *(undefined8 *)(unaff_x20 + _DAT_112d70e98);
                          uStack_280 = *(undefined8 *)(unaff_x20 + _DAT_112d70ea0);
                          uStack_278 = *(undefined8 *)(unaff_x20 + _DAT_112d70ea8);
                          uStack_270 = *(undefined8 *)(unaff_x20 + _DAT_112d70eb0);
                          uStack_268 = *(undefined8 *)(unaff_x20 + _DAT_112d70eb8);
                          uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112d70ec0);
                          uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112d70e60);
                          uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112d70d48);
                          uStack_2d8 = *(undefined8 *)
                                        (*(long *)(unaff_x20 + _DAT_112d70ef0) + _DAT_11303f600);
                          plStack_148 = *(long **)(unaff_x20 + _DAT_112d70f00);
                          uStack_2b8 = uVar5;
                          uStack_2b0 = uVar22;
                          uStack_2a8 = uVar31;
                          func_0x000107c6157c();
                          func_0x000107c61174();
                          uStack_2c0 = uVar25;
                          func_0x000107c61174();
                          uStack_2c8 = uVar27;
                          func_0x000107c61174();
                          uStack_2d0 = uVar30;
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          uStack_2e0 = uVar28;
                          func_0x000107c61174();
                          uStack_2e8 = uVar26;
                          func_0x000107c61174();
                          plVar13 = plStack_148;
                          uStack_2f0 = uVar23;
                          func_0x000107c4d724();
                          func_0x000107c61180();
                          lStack_2f8 = (long)plVar13;
                          if (plVar13 != (long *)0x0) {
                            uVar5 = 0;
                            func_0x0001012ed9cc();
                            lVar21 = lStack_188;
                            uStack_300 = uVar5;
                            func_0x000107c3fa04();
                            func_0x000107c61180();
                            uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d70f10);
                            uVar31 = *(undefined8 *)(unaff_x20 + _DAT_112d70f18);
                            uStack_320 = *(undefined8 *)(unaff_x20 + _DAT_112d70f20);
                            uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d70f60);
                            uStack_330 = *(undefined8 *)(unaff_x20 + _DAT_112d70f28);
                            uVar27 = *(undefined8 *)
                                      (*(long *)(unaff_x20 + _DAT_112d70f30) + _DAT_112fb2bb8);
                            uStack_340 = *(undefined8 *)(unaff_x20 + _DAT_112d70f40);
                            uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112d70f50);
                            uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112d70f58);
                            uStack_350 = uVar30;
                            uStack_338 = uVar27;
                            uStack_328 = uVar25;
                            lStack_308 = lVar21;
                            func_0x000107c615f0(ppuStack_158);
                            plVar13 = plStack_1c8;
                            func_0x000107c61174();
                            plStack_148 = plVar13;
                            func_0x000107c61174();
                            uStack_310 = uVar5;
                            func_0x000107c61174();
                            uStack_318 = uVar31;
                            func_0x000107c61174();
                            func_0x000107c6157c(uVar25);
                            func_0x000107c61174();
                            func_0x000107c61174(uVar27);
                            ppuVar12 = ppuStack_178;
                            func_0x000107c61174();
                            plStack_1c8 = (long *)ppuVar12;
                            func_0x000107c61174();
                            func_0x000107c61174();
                            uStack_348 = uVar22;
                            func_0x000107c615f0(uVar30);
                            func_0x000107c615f0(lVar6);
                            lVar21 = unaff_x20;
                            func_0x000107c61174();
                            puVar8 = puStack_180;
                            lStack_358 = lVar21;
                            func_0x000107c615f0(puStack_180);
                            lVar21 = lStack_170;
                            func_0x000107c615f0(lStack_170);
                            lVar24 = lStack_f8;
                            func_0x000107c615f0(lStack_f8);
                            func_0x000107c615f0(lStack_160);
                            lVar29 = lStack_168;
                            func_0x000107c615f0(lStack_168);
                            func_0x000107c615f0(lStack_110);
                            lVar18 = lStack_130;
                            func_0x000107c615f0(lStack_130);
                            lVar20 = lStack_138;
                            func_0x000107c615f0(lStack_138);
                            func_0x000107c615f0(lStack_f0);
                            func_0x000107c615f0(lVar17);
                            *(long *)((long)alStack_560 + lVar16 + 0x1f8) = lStack_1c0;
                            *(undefined8 **)((long)alStack_560 + lVar16 + 0x1f0) = puStack_1d8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x1e8) = uStack_300;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x1e0) = uStack_350;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x1d8) = uStack_348;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x1d0) = uStack_340;
                            *(undefined ***)((long)alStack_560 + lVar16 + 0x1c8) = ppuStack_178;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x1c0) = uStack_338;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x1b8) = uStack_330;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x1b0) = uStack_328;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x1a8) = uStack_320;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x1a0) = uStack_318;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x198) = uStack_310;
                            *(long *)((long)alStack_560 + lVar16 + 400) = lStack_308;
                            *(long *)((long)alStack_560 + lVar16 + 0x188) = lStack_2f8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x180) = uStack_2d8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x168) = uStack_2f0;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x160) = uStack_2e8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x158) = uStack_2e0;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x150) = uStack_268;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x148) = uStack_270;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x140) = uStack_278;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x138) = uStack_280;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x130) = uStack_288;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x128) = uStack_290;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x120) = uStack_298;
                            *(long *)((long)alStack_560 + lVar16 + 0x170) = unaff_x20;
                            *(undefined ***)((long)alStack_560 + lVar16 + 0x178) =
                                 &PTR_DAT_11039f248;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x118) = uStack_2a0;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x110) = uStack_2d0;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x108) = uStack_2c8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x100) = uStack_2c0;
                            *(long *)((long)alStack_560 + lVar16 + 0xf8) = lStack_260;
                            *(long *)((long)alStack_560 + lVar16 + 0xf0) = lStack_150;
                            *(long *)((long)alStack_560 + lVar16 + 0xe8) = lStack_190;
                            *(ulong *)((long)alStack_560 + lVar16 + 0xe0) = uStack_198;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0xd8) = uStack_1a0;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0xd0) = uStack_1a8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 200) = uStack_1b8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0xc0) = uStack_2b8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0xb8) = uStack_2b0;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0xb0) = uStack_1b0;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0xa8) = uStack_2a8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0xa0) = uStack_258;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x98) = uStack_250;
                            uVar5 = uStack_248;
                            *(undefined8 **)((long)alStack_560 + lVar16 + 0x88) = puVar8;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x90) = uVar5;
                            plVar1 = plStack_148;
                            *(undefined ***)((long)alStack_560 + lVar16 + 0x80) = ppuStack_158;
                            lVar7 = lStack_110;
                            uVar5 = uStack_240;
                            *(long **)((long)alStack_560 + lVar16 + 0x70) = plVar1;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x78) = uVar5;
                            *(undefined8 *)((long)alStack_560 + lVar16 + 0x68) = uStack_238;
                            puVar11 = puStack_118;
                            *(long *)((long)alStack_560 + lVar16 + 0x58) = lVar21;
                            *(undefined8 **)((long)alStack_560 + lVar16 + 0x60) = puVar11;
                            *(long *)((long)alStack_560 + lVar16 + 0x48) = lVar7;
                            *(long *)((long)alStack_560 + lVar16 + 0x50) = lVar24;
                            *(long *)((long)alStack_560 + lVar16 + 0x40) = lVar29;
                            lVar21 = lStack_160;
                            *(long *)((long)alStack_560 + lVar16 + 0x30) = lVar18;
                            *(long *)((long)alStack_560 + lVar16 + 0x38) = lVar21;
                            lVar29 = lStack_f0;
                            *(long *)((long)alStack_560 + lVar16 + 0x20) = lStack_f0;
                            *(long *)((long)alStack_560 + lVar16 + 0x28) = lVar20;
                            *(long *)((long)alStack_560 + lVar16 + 0x18) = lVar17;
                            uVar15 = uStack_230;
                            *(long *)((long)alStack_560 + lVar16 + 8) = lVar6;
                            *(ulong *)((long)alStack_560 + lVar16 + 0x10) = uVar15;
                            *(undefined8 *)((long)alStack_560 + lVar16) = uStack_228;
                            uVar5 = uStack_1e8;
                            FUN_1012edbc8(uStack_1e8,uStack_210,uStack_1f0,uStack_218,uStack_1f8,
                                          lStack_200,uStack_208,lStack_220);
                            puVar8 = puStack_1d0;
                            func_0x000107c61428(puStack_1d0,auStack_e8,0,0);
                            uVar31 = *puVar8;
                            func_0x000107c61174(uVar31);
                            func_0x0001000aa0a8(uStack_1e0);
                            func_0x000107c61170(uVar31);
                            func_0x000107c61174(uVar5);
                            func_0x000107c5de64();
                            func_0x000107c61180();
                            func_0x000107c61170();
                            plVar13 = plStack_1c8;
                            if (*(char *)(lVar3 + _DAT_112e97710) == '\x01') {
                              puVar4 = PTR_PTR_1126b0a08;
                              func_0x000107c610f8();
                              func_0x000107c48e84();
                              func_0x000107c61170(uVar5);
                              func_0x000107c52aa4(puVar4);
                              func_0x000107c5a070(puVar4);
                              func_0x000107c52684(puVar4);
                              func_0x000107c5a074(puVar4);
                              lVar16 = lStack_188;
                              func_0x000107c3fa04();
                              func_0x000107c61180();
                              if (lVar16 == 0) {
                    /* WARNING: Does not return */
                                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012e7244);
                                (*pcVar2)();
                              }
                              FUN_1012ea67c(0);
                              func_0x000107c610f8();
                              lVar16 = lStack_358;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              puVar9 = puVar4;
                              FUN_1012e9c90();
                              func_0x000107c61170(puVar4);
                              func_0x000107c61170(lVar16);
                              func_0x000107c61174();
                              func_0x000107c5677c();
                              uVar31 = *(undefined8 *)(lVar16 + _DAT_112d70d50);
                              *(undefined **)(lVar16 + _DAT_112d70d50) = puVar4;
                              func_0x000107c61174(puVar4);
                              func_0x000107c61170(uVar31);
                              uVar31 = *(undefined8 *)(lVar16 + _DAT_112d70d58);
                              *(undefined **)(lVar16 + _DAT_112d70d58) = puVar9;
                              func_0x000107c61170(uVar31);
                              uVar31 = *(undefined8 *)(lVar3 + lStack_100);
                              func_0x000107c615f0(uVar31);
                              func_0x000107c3e2c0();
                              func_0x000107c615e8(uVar31);
                              func_0x000107c615e8(puStack_108);
                              func_0x000107c61170(puStack_140);
                              func_0x000107c61170(puStack_120);
                              func_0x000107c615e8(lVar6);
                              func_0x000107c615e8(puStack_118);
                              func_0x000107c61170(puVar9);
                              func_0x000107c61170(uVar5);
                              func_0x000107c61170(puVar4);
                              func_0x000107c61170(plVar13);
                              func_0x000107c615e8(puStack_180);
                              func_0x000107c61170(plStack_148);
                              func_0x000107c615e8(lStack_170);
                              func_0x000107c615e8(lStack_f8);
                              func_0x000107c615e8(lStack_160);
                              func_0x000107c61170(puStack_128);
                              func_0x000107c615e8(lStack_168);
                              func_0x000107c615e8(lStack_110);
                              func_0x000107c615e8(lStack_130);
                              func_0x000107c615e8(lStack_138);
                              lVar29 = lStack_f0;
                            }
                            else {
                              func_0x000107c61170(uVar5);
                              uVar31 = *(undefined8 *)(lVar3 + lStack_100);
                              func_0x000107c615f0(uVar31);
                              func_0x000107c3e2c0();
                              func_0x000107c615e8(uVar31);
                              func_0x000107c615e8(puStack_108);
                              func_0x000107c61170(puStack_140);
                              func_0x000107c61170(puStack_120);
                              func_0x000107c615e8(lVar6);
                              func_0x000107c615e8(puVar11);
                              func_0x000107c61170(uVar5);
                              func_0x000107c61170(plStack_1c8);
                              func_0x000107c615e8(puStack_180);
                              func_0x000107c61170(plVar1);
                              func_0x000107c615e8(lStack_170);
                              func_0x000107c615e8(lStack_f8);
                              func_0x000107c615e8(lVar21);
                              func_0x000107c61170(puStack_128);
                              func_0x000107c615e8(lStack_168);
                              func_0x000107c615e8(lVar7);
                              func_0x000107c615e8(lStack_130);
                              func_0x000107c615e8(lStack_138);
                            }
                            func_0x000107c615e8(lVar29);
                            func_0x000107c615e8(lVar17);
                            func_0x000107c615e8(ppuStack_158);
                            return;
                          }
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012e7240);
                          (*pcVar2)();
                        }
                      }
                      func_0x000107c615e8(lVar18);
                    }
                    func_0x000107c615e8(lVar21);
                  }
                  lVar16 = _DAT_112e97708;
                  func_0x000107c61428(lVar3 + _DAT_112e97708,&puStack_b8,0,0);
                  lVar3 = lVar3 + lVar16;
                  func_0x000107c61618();
                  if (lVar3 != 0) {
                    puVar9 = PTR_PTR_1126a69c0;
                    func_0x000107c610f8(PTR_PTR_1126a69c0);
                    uVar5 = 0;
                    FUN_1012ea0b0(0,0x112d70f68,&PTR_PTR_1126a69c8);
                    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
                    func_0x000107c4700c(puVar9);
                    func_0x000107c61170(puVar10);
                    FUN_1012e9d6c(puVar4);
                    uVar5 = 0;
                    func_0x0001043f7068(0);
                    puVar10 = puVar4;
                    func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,uVar5,PTR___sSSSHsWP_11034da90);
                    func_0x000107c6142c(puVar4);
                    func_0x000107c40008(lVar3);
                    func_0x000107c615e8(lVar3);
                    func_0x000107c61170(puVar9);
                    func_0x000107c61170(puVar10);
                  }
                  func_0x000107c615e8(puVar8);
                  func_0x000107c61170(puStack_140);
                  func_0x000107c61170(puStack_120);
                  func_0x000107c615e8(lVar6);
                  func_0x000107c615e8(puStack_118);
                  func_0x000107c615e8(lStack_f8);
                  func_0x000107c61170(puStack_128);
                  func_0x000107c615e8(lStack_110);
                  func_0x000107c615e8(lStack_130);
                  lVar18 = lStack_138;
                }
LAB_1012e6244:
                func_0x000107c615e8(lVar18);
                func_0x000107c615e8(lStack_f0);
                func_0x000107c615e8(lVar17);
                return;
              }
              func_0x000107c615e8(lVar6);
              lVar21 = lStack_f0;
              lVar24 = lVar18;
              lVar18 = lVar20;
              lVar6 = lVar17;
              lVar20 = lVar7;
            }
            lVar17 = lVar24;
            func_0x000107c615e8(lVar6);
            lVar7 = lVar18;
            lVar18 = lVar20;
            lVar6 = lVar21;
          }
          func_0x000107c615e8(lVar6);
          lVar20 = lVar18;
          lVar6 = lVar17;
        }
        lVar17 = lVar20;
        func_0x000107c615e8(lVar6);
      }
      func_0x000107c615e8(lVar7);
      lVar6 = lVar17;
    }
    func_0x000107c615e8(lVar6);
  }
  lVar16 = _DAT_112e97708;
  func_0x000107c61428(lVar3 + _DAT_112e97708,&puStack_b8,0,0);
  lVar3 = lVar3 + lVar16;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar9 = PTR_PTR_1126a69c0;
    func_0x000107c610f8(PTR_PTR_1126a69c0);
    uVar5 = 0;
    FUN_1012ea0b0(0,0x112d70f68,&PTR_PTR_1126a69c8);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
    func_0x000107c4700c(puVar9);
    func_0x000107c61170(puVar10);
    FUN_1012e9d6c(puVar4);
    uVar5 = 0;
    func_0x0001043f7068(0);
    puVar10 = puVar4;
    func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,uVar5,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar4);
    func_0x000107c40008(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
  }
  return;
}



/* Entry: 1012e7244; end: 1012e727b;  */

void FUN_1012e7244(undefined8 param_1)

{
  FUN_1012faa2c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  FUN_1012f96e4();
  return;
}



/* Entry: 1012e727c; end: 1012e7333;  */

void FUN_1012e727c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_60;
    puVar1 = &UNK_11039f278;
    func_0x000107c613fc(&UNK_11039f278,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    pcStack_40 = FUN_1012ea0a0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1012e7334;
    puStack_48 = &UNK_11039f290;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c563dc(param_1);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 1012e7334; end: 1012e73cf;  */

undefined1  [16]
FUN_1012e7334(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_4);
  uVar3 = param_5;
  func_0x000107c61174(param_5);
  (*pcVar1)(param_1,param_2,param_4,param_5);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar3);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1012e73d0; end: 1012e77ff;  */

/* WARNING: Possible PIC construction at 0x0001012e75e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e763c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e7780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e7790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e7784) */
/* WARNING: Removing unreachable block (ram,0x0001012e7640) */
/* WARNING: Removing unreachable block (ram,0x0001012e75ec) */
/* WARNING: Removing unreachable block (ram,0x0001012e75f0) */
/* WARNING: Removing unreachable block (ram,0x0001012e77bc) */
/* WARNING: Removing unreachable block (ram,0x0001012e77c4) */
/* WARNING: Removing unreachable block (ram,0x0001012e7604) */
/* WARNING: Removing unreachable block (ram,0x0001012e7794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e73d0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  
  lVar4 = 0;
  func_0x000107c5ffd8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112d70d68) + _DAT_112e976f0);
  if (lVar4 == 0) {
    return;
  }
  bVar2 = *(byte *)(lVar4 + _DAT_113034aa0);
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + _DAT_112d70d68) + _DAT_112e97700) +
                   _DAT_113034d08);
  if (lVar9 == 0) {
    cVar3 = *(char *)(lVar4 + _DAT_113034a38);
    func_0x000107c61174(lVar4);
    if (cVar3 == '\x01') goto LAB_1012e7558;
    bVar6 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c61174();
    func_0x000107c4fde4();
    bVar6 = 0;
    bVar1 = *(byte *)(lVar5 + _DAT_113034a38) ^ 1;
    bVar7 = bVar1 & lVar9 == 2;
    if (((bVar1 & 1) != 0) || (lVar9 != 2)) goto LAB_1012e7568;
LAB_1012e7558:
    bVar6 = bVar2 ^ 1;
  }
  bVar7 = 1;
LAB_1012e7568:
  func_0x000107c52664(param_1,param_2,bVar6);
  if ((*(byte *)(lVar4 + _DAT_113034a98) & 1) == 0) {
    bVar7 = bVar7 & (bVar2 ^ 1);
  }
  else {
    bVar7 = 0;
  }
  func_0x000107c52668(param_1,param_2,bVar7);
  func_0x000107c591d8(param_1,param_2,*(undefined1 *)(lVar4 + _DAT_113034a30));
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d70ec8);
  func_0x000107c4ac88(uVar8);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1012e7800; end: 1012e7907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012e7800(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d70e70);
  func_0x000107c4030c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c44480();
    if ((int)lVar1 == 0) {
      lVar1 = lVar2;
      func_0x000107c44484(lVar2);
      func_0x000107c615e8(lVar2);
    }
    else {
      func_0x000107c615e8(lVar2);
      lVar1 = 2;
    }
  }
  return lVar1;
}



/* Entry: 1012e7908; end: 1012e7a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012e7908(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((iVar1 != 0) && (param_1 != 2)) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d70d78);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar2 != 0) {
        puVar4 = &UNK_11039f2c8;
        func_0x000107c613fc(&UNK_11039f2c8,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        uStack_40 = 0x1012ea0a8;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        uStack_50 = 0x100f11710;
        puStack_48 = &UNK_11039f2e0;
        puStack_38 = puVar4;
        func_0x000107c60bc4(&puStack_60);
        func_0x000107c61574(puStack_38);
        FUN_1012ea0b0(0,0x112d71040,&PTR_PTR_1126b40c0);
        func_0x000107c614e8();
        lVar3 = lVar2;
        func_0x000107c4c214(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(lVar2);
        return lVar3;
      }
    }
  }
  return 0;
}



/* Entry: 1012e7a7c; end: 1012e8f23;  */

/* WARNING: Removing unreachable block (ram,0x0001012e8f18) */
/* WARNING: Removing unreachable block (ram,0x0001012e8ed4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012e7a7c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  ulong uVar20;
  ulong uVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  long lVar25;
  undefined *puVar26;
  int iVar27;
  long unaff_x20;
  undefined8 uVar28;
  long lVar29;
  undefined *puVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined *puVar33;
  undefined *puVar34;
  long lVar35;
  undefined **ppuVar36;
  long lVar37;
  undefined *puStack_f0;
  undefined **appuStack_b8 [3];
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *param_2;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000002c;
  func_0x0001000a9a18(0xd00000000000002c,0x800000010ef35000);
  func_0x000107c61170(uVar4);
  lVar2 = _DAT_112e97700;
  lVar37 = *(long *)(unaff_x20 + _DAT_112d70d68);
  puVar1 = (undefined8 *)(*(long *)(lVar37 + _DAT_112e97700) + _DAT_113034cb0);
  uVar4 = *puVar1;
  lVar25 = puVar1[1];
  uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112d70d40);
  func_0x000107c61434(lVar25);
  func_0x000107c5cb24(uVar28);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126a69d0;
  func_0x000107c610f8();
  lVar7 = lVar25;
  func_0x000107c5fadc(uVar4);
  func_0x000107c6142c(lVar25);
  func_0x000107c48620(param_1);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(lVar37 + lVar2) + _DAT_113034cb8);
  FUN_1012f9478(uVar4);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    lVar25 = lVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar7);
    lVar7 = lVar25;
  }
  func_0x000107c5947c(puVar6);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(lVar37 + lVar2) + _DAT_113034cc8);
  FUN_1012f8a50(uVar4);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    lVar25 = lVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar7);
    lVar7 = lVar25;
  }
  func_0x000107c56498(puVar6);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(lVar37 + lVar2) + _DAT_113034cc0);
  FUN_1012f7a2c(uVar4);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c5665c(puVar6);
  func_0x000107c61170(uVar4);
  puVar1 = (undefined8 *)(*(long *)(lVar37 + lVar2) + _DAT_113034cd8);
  lVar25 = puVar1[1];
  if (lVar25 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
    func_0x000107c61434(lVar25);
    func_0x000107c5fadc(uVar4,lVar25);
    func_0x000107c6142c(lVar25);
  }
  func_0x000107c53200(puVar6);
  func_0x000107c61170(uVar4);
  puVar1 = (undefined8 *)(*(long *)(lVar37 + lVar2) + _DAT_113034ce0);
  lVar25 = puVar1[1];
  if (lVar25 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
    func_0x000107c61434(lVar25);
    func_0x000107c5fadc(uVar4,lVar25);
    func_0x000107c6142c(lVar25);
  }
  func_0x000107c53910(puVar6);
  func_0x000107c61170(uVar4);
  puVar1 = (undefined8 *)(*(long *)(lVar37 + lVar2) + _DAT_113034ce8);
  lVar25 = puVar1[1];
  if (lVar25 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
    func_0x000107c61434(lVar25);
    func_0x000107c5fadc(uVar4,lVar25);
    func_0x000107c6142c(lVar25);
  }
  func_0x000107c535d0(puVar6);
  func_0x000107c61170(uVar4);
  lVar25 = *(long *)(lVar37 + _DAT_112e97718);
  if (lVar25 != 0) {
    func_0x000107c61174();
    lVar7 = lVar25;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c54818(puVar6);
    func_0x000107c61170(lVar25);
    func_0x000107c61170(lVar7);
  }
  lVar25 = _DAT_112e976f0;
  if (*(long *)(lVar37 + _DAT_112e976f0) != 0) {
    func_0x000107c5ad94();
  }
  lVar7 = *(long *)(lVar37 + _DAT_112e976f8);
  if (lVar7 == 0) {
    puStack_f0 = (undefined *)0x0;
  }
  else {
    iVar27 = (int)*(undefined8 *)(unaff_x20 + _DAT_112d70e28);
    func_0x000107c61174();
    func_0x000107c5ac38();
    if (iVar27 == 0) {
      puStack_f0 = (undefined *)0x0;
    }
    else {
      puStack_f0 = PTR_PTR_1126a69e8;
      func_0x000107c610f8();
      func_0x000107c45970();
    }
    func_0x000107c61170(lVar7);
  }
  lVar7 = _DAT_112e976d0;
  puVar30 = *(undefined **)(lVar37 + _DAT_112e976d0);
  if ((ulong)puVar30 >> 0x3e == 0) {
    puVar33 = *(undefined **)(((ulong)puVar30 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar33 = (undefined *)((ulong)puVar30 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar30) {
      puVar33 = puVar30;
    }
    func_0x000107c60480();
  }
  ppuVar12 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar33 != (undefined *)0x0) {
    appuStack_b8[0] = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(puVar30);
    FUN_1012fac44(0,(ulong)puVar33 & ((long)puVar33 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar33 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012e8e9c);
      (*pcVar3)();
    }
    puVar34 = (undefined *)0x0;
    do {
      ppuVar12 = appuStack_b8[0];
      if (((ulong)puVar30 & 0xc000000000000001) == 0) {
        puVar8 = *(undefined **)(puVar30 + (long)puVar34 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar34;
        FUN_1011f491c(puVar34,puVar30);
      }
      func_0x000107c61174();
      puVar26 = puVar8;
      FUN_1012f7aa4();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar8);
      puVar8 = ppuVar12[2];
      appuStack_b8[0] = ppuVar12;
      if ((undefined *)((ulong)ppuVar12[3] >> 1) <= puVar8) {
        FUN_1012fac44((undefined *)0x1 < ppuVar12[3],puVar8 + 1,1);
      }
      ppuVar12 = appuStack_b8[0];
      puVar34 = puVar34 + 1;
      appuStack_b8[0][2] = puVar8 + 1;
      appuStack_b8[0][(long)(puVar8 + 4)] = puVar26;
    } while (puVar33 != puVar34);
    func_0x000107c6142c(puVar30);
  }
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  ppuVar31 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  pppuVar9 = appuStack_b8;
  appuStack_b8[0] = ppuVar31;
  func_0x000100854cb0(pppuVar9);
  func_0x000107c61170();
  func_0x0001004575f0();
  func_0x000107c61574(pppuVar9);
  ppuVar10 = ppuVar31;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar31);
  ppuVar31 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  pppuVar9 = appuStack_b8;
  appuStack_b8[0] = ppuVar31;
  func_0x000100854cb0(pppuVar9);
  func_0x000107c61170();
  func_0x0001004575f0();
  func_0x000107c61574(pppuVar9);
  ppuVar11 = ppuVar31;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar31);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d70d38);
  ppuVar31 = ppuVar12;
  FUN_1012e8fcc(ppuVar12,FUN_1012fac08,0x112d71038,&PTR_PTR_1126a69f8);
  func_0x000107c6142c(ppuVar12);
  puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar30 = PTR___sypN_11034f1a8 + 8;
  ppuVar12 = ppuVar31;
  func_0x000107c5fc48(ppuVar31);
  func_0x000107c6142c(ppuVar31);
  func_0x000107c45788(puVar33);
  func_0x000107c61170(ppuVar12);
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(puVar33);
  func_0x000107c5cb28(uVar4);
  func_0x000107c61180();
  puVar33 = PTR_PTR_1126a69d8;
  func_0x000107c610f8();
  func_0x000107c47ddc();
  func_0x000107c61170(uVar4);
  puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54194(puVar33);
  func_0x000107c61170(puVar34);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d70f48) + _DAT_112fe2098);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(appuStack_b8);
  func_0x000107c61574(uVar4);
  ppuVar12 = appuStack_b8[0];
  func_0x000107c5ae68(appuStack_b8[0]);
  func_0x000107c615e8(ppuVar12);
  puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59244(puVar33);
  func_0x000107c61170(puVar34);
  func_0x000107c59074(puVar33);
  ppuVar12 = *(undefined ***)(lVar37 + _DAT_112e976d8);
  if (ppuVar12 != (undefined **)0x0) {
    func_0x000107c61174();
    ppuVar31 = ppuVar12;
    FUN_1012f8ac8();
    func_0x000107c5a580();
    puVar30 = &UNK_10d931e90;
    func_0x0001000285a8(0x112d70fc8);
    pppuVar9 = appuStack_b8;
    appuStack_b8[0] = ppuVar31;
    func_0x000100854cb0(pppuVar9);
    pppuVar13 = pppuVar9;
    func_0x0001004575f0();
    func_0x000107c61574(pppuVar9);
    pppuVar9 = pppuVar13;
    func_0x000107c5cb24(pppuVar13);
    func_0x000107c61180();
    func_0x000107c61170(pppuVar13);
    func_0x000107c5777c(puVar33);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(ppuVar31);
    func_0x000107c61170(pppuVar9);
  }
  lVar29 = *(long *)(lVar37 + _DAT_112e976e0);
  if ((lVar29 == 0) || (lVar35 = *(long *)(lVar37 + lVar25), lVar35 == 0)) goto LAB_1012e8544;
  puVar34 = *(undefined **)(lVar37 + lVar7);
  if ((ulong)puVar34 >> 0x3e == 0) {
    puVar26 = puVar30;
    if (*(long *)(((ulong)puVar34 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_1012e8eb4;
LAB_1012e8378:
    if (((ulong)puVar34 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar34 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012e8f18);
        (*pcVar3)();
      }
      ppuVar12 = *(undefined ***)(puVar34 + 0x20);
      func_0x000107c61174(lVar29);
      func_0x000107c61174(lVar35);
      func_0x000107c61174();
    }
    else {
      func_0x000107c61174(lVar29);
      func_0x000107c61174(lVar35);
      func_0x000107c61434(puVar34);
      ppuVar12 = (undefined **)0x0;
      puVar26 = puVar34;
      FUN_1011f491c();
      func_0x000107c6142c(puVar34);
    }
    ppuVar31 = ppuVar12;
    func_0x000107c4fa44();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar12);
    ppuVar12 = ppuVar31;
    func_0x000107c44fdc();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar31);
    ppuVar31 = ppuVar12;
    func_0x000107c51cec();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar12);
    ppuVar12 = ppuVar31;
    func_0x000107c5faec();
    puVar30 = puVar26;
    func_0x000107c61170(ppuVar31);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar34 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar34) {
      puVar8 = puVar34;
    }
    func_0x000107c60480();
    puVar26 = puVar30;
    if (puVar8 != (undefined *)0x0) goto LAB_1012e8378;
LAB_1012e8eb4:
    func_0x000107c61174(lVar29);
    func_0x000107c61174(lVar35);
    ppuVar12 = (undefined **)0x0;
    puVar26 = (undefined *)0x0;
  }
  ppuVar36 = &PTR____CFConstantStringClassReference_110f52df8;
  ppuVar31 = ppuVar36;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52df8);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar31);
  if (puVar26 != (undefined *)0x0) {
    if ((ppuVar12 != ppuVar36) || (puVar26 != puVar30)) {
      func_0x000107c605b8(ppuVar12,puVar26,ppuVar36,puVar30,0);
    }
    func_0x000107c6142c(puVar26);
  }
  func_0x000107c6142c(puVar30);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d70e20);
  uVar28 = *(undefined8 *)(lVar37 + lVar2);
  if (*(long *)(unaff_x20 + _DAT_112d70f60) == 0) {
    func_0x000107c61174(uVar28);
    uVar14 = 0;
  }
  else {
    uVar14 = uVar28;
    func_0x000107c61174(uVar28);
    func_0x0001004575f0();
  }
  func_0x000107c43e0c(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar14);
  func_0x000107c596d4(puVar33);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(uVar4);
LAB_1012e8544:
  puVar30 = *(undefined **)(unaff_x20 + _DAT_112d70ed0);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (puVar30 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012e8f20);
    (*pcVar3)();
  }
  puVar34 = puVar30;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar30);
  if (puVar34 != (undefined *)0x0) {
    lVar25 = *(long *)(lVar37 + lVar25);
    puVar30 = puVar34;
    if (lVar25 != 0) {
      puVar30 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61174();
      func_0x000107c45a48(puVar8);
      puVar26 = puVar30;
      func_0x000107c4a8a4(puVar30);
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      puVar8 = puVar26;
      func_0x000107c5cb24(puVar26);
      func_0x000107c61180();
      func_0x000107c61170(puVar26);
      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      puVar15 = puVar30;
      func_0x000107c4a8a4(puVar30);
      func_0x000107c61180();
      func_0x000107c61170(puVar26);
      puVar26 = puVar15;
      func_0x000107c5cb24(puVar15);
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      puVar16 = puVar30;
      func_0x000107c4a8a4(puVar30);
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      puVar15 = puVar16;
      func_0x000107c5cb24(puVar16);
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c4a8a4(puVar30);
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      puVar16 = puVar30;
      func_0x000107c5cb24(puVar30);
      func_0x000107c61180();
      func_0x000107c61170(puVar30);
      func_0x000107c42170(puVar34);
      puVar30 = PTR_PTR_1126a69e0;
      func_0x000107c610f8(PTR_PTR_1126a69e0);
      func_0x000107c46600();
      func_0x000107c59988(puVar33);
      func_0x000107c61170(puVar34);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar26);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar16);
    }
    func_0x000107c61170(puVar30);
  }
  FUN_1012e91b4();
  func_0x000107c548a8(puVar33);
  func_0x000107c61170(puVar30);
  ppuVar12 = *(undefined ***)(unaff_x20 + _DAT_112d70ef8);
  func_0x000107c4aa54();
  func_0x000107c61180();
  ppuVar31 = ppuVar12;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar31 != (undefined **)0x0) {
    ppuVar36 = ppuVar31;
    func_0x000107c4aa5c();
    func_0x000107c61180();
    func_0x000107c615e8(ppuVar31);
    uVar4 = 0;
    FUN_1012ea0b0(0,0x112d60fb0,&PTR_PTR_1126b3568);
    ppuVar12 = ppuVar36;
    func_0x000107c5fc54(ppuVar36,uVar4);
    func_0x000107c61170(ppuVar36);
  }
  if ((ulong)ppuVar12 >> 0x3e == 0) {
    ppuVar31 = *(undefined ***)(((ulong)ppuVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppuVar31 = (undefined **)((ulong)ppuVar12 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < ppuVar12) {
      ppuVar31 = ppuVar12;
    }
    func_0x000107c60480();
  }
  puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar31 != (undefined **)0x0) {
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,(ulong)ppuVar31 & ((long)ppuVar31 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)ppuVar31 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012e8ea0);
      (*pcVar3)();
    }
    ppuVar36 = (undefined **)0x0;
    puVar30 = puStack_98;
    do {
      ppuVar32 = ppuVar12;
      if (((ulong)ppuVar12 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)ppuVar12 & 0xffffffffffffff8) + 0x10) <= (long)ppuVar36) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012e8e78);
          (*pcVar3)();
        }
        ppuVar22 = (undefined **)ppuVar12[(long)((long)ppuVar36 + 4)];
        func_0x000107c61174();
      }
      else {
        ppuVar22 = ppuVar36;
        FUN_1011f491c();
      }
      ppuVar17 = ppuVar22;
      func_0x000107c4fa44();
      func_0x000107c61180();
      ppuVar18 = ppuVar17;
      func_0x000107c44fdc();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar17);
      ppuVar17 = ppuVar18;
      func_0x000107c51cec();
      func_0x000107c61180();
      ppuVar19 = ppuVar17;
      func_0x000107c5faec();
      ppuVar23 = ppuVar32;
      func_0x000107c61170(ppuVar17);
      ppuVar17 = &PTR____CFConstantStringClassReference_110f52c78;
      func_0x000107c5faec();
      ppuVar24 = ppuVar23;
      func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c78);
      if ((ppuVar19 == ppuVar17) && (ppuVar32 == ppuVar23)) {
        func_0x000107c6142c(ppuVar32);
        func_0x000107c6142c(ppuVar23);
      }
      else {
        ppuVar24 = ppuVar32;
        func_0x000107c605b8(ppuVar19,ppuVar32,ppuVar17,ppuVar23,0);
        func_0x000107c6142c(ppuVar32);
        func_0x000107c6142c(ppuVar23);
      }
      ppuVar32 = ppuVar18;
      func_0x000107c4fa4c();
      func_0x000107c61180();
      if (ppuVar32 == (undefined **)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(ppuVar24);
      }
      ppuVar17 = (undefined **)PTR_PTR_1126c52b8;
      func_0x000107c610f8();
      func_0x000107c46d30();
      func_0x000107c61170(ppuVar32);
      uVar4 = 0;
      FUN_1012ea0b0(0,0x112d70fc0,&PTR_PTR_1126c52b8);
      uStack_a0 = uVar4;
      func_0x000107c61170(ppuVar22);
      func_0x000107c61170(ppuVar18);
      uVar20 = *(ulong *)(puVar30 + 0x10);
      appuStack_b8[0] = ppuVar17;
      puStack_98 = puVar30;
      if (*(ulong *)(puVar30 + 0x18) >> 1 <= uVar20) {
        FUN_100c077e4(1 < *(ulong *)(puVar30 + 0x18),uVar20 + 1,1);
      }
      puVar30 = puStack_98;
      ppuVar36 = (undefined **)((long)ppuVar36 + 1);
      *(ulong *)(puStack_98 + 0x10) = uVar20 + 1;
      func_0x000100102924(appuStack_b8,puStack_98 + uVar20 * 0x20 + 0x20);
    } while (ppuVar31 != ppuVar36);
  }
  ppuVar36 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  puVar34 = puVar30;
  func_0x000107c5fc48(puVar30,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar30);
  func_0x000107c45788();
  func_0x000107c61170(puVar34);
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  pppuVar9 = appuStack_b8;
  appuStack_b8[0] = ppuVar36;
  func_0x000100854cb0(pppuVar9);
  pppuVar13 = pppuVar9;
  func_0x0001004575f0();
  func_0x000107c61574(pppuVar9);
  pppuVar9 = pppuVar13;
  func_0x000107c5cb24(pppuVar13);
  func_0x000107c61180();
  func_0x000107c61170(pppuVar13);
  func_0x000107c55a78(puVar33);
  func_0x000107c61170(pppuVar9);
  uVar20 = *(ulong *)(unaff_x20 + _DAT_112d70e00);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012e8f24);
    (*pcVar3)();
  }
  uVar4 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef35030);
  uVar21 = uVar20;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar20);
  func_0x000107c61170(uVar4);
  if ((uVar21 & 1) == 0) {
    func_0x000107c61170(puStack_f0);
    func_0x000107c6142c(ppuVar12);
  }
  else {
    if (ppuVar31 == (undefined **)0x0) {
      func_0x000107c6142c(ppuVar12);
      puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100c077e4(0,(ulong)ppuVar31 & ((long)ppuVar31 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)ppuVar31 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012e8edc);
        (*pcVar3)();
      }
      ppuVar32 = (undefined **)0x0;
      puVar30 = puStack_98;
      do {
        if (((ulong)ppuVar12 & 0xc000000000000001) == 0) {
          if ((long)ppuVar32 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1012e8e7c);
            (*pcVar3)();
          }
          if (*(undefined ***)(((ulong)ppuVar12 & 0xffffffffffffff8) + 0x10) <= ppuVar32) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1012e8e80);
            (*pcVar3)();
          }
          ppuVar22 = (undefined **)ppuVar12[(long)((long)ppuVar32 + 4)];
          func_0x000107c61174();
        }
        else {
          ppuVar22 = ppuVar32;
          FUN_1011f491c();
        }
        func_0x000107c61174();
        ppuVar17 = ppuVar22;
        FUN_1012f8454();
        func_0x000107c61170(ppuVar22);
        uVar4 = 0;
        FUN_1012ea0b0(0,0x112d70f68,&PTR_PTR_1126a69c8);
        uStack_a0 = uVar4;
        func_0x000107c61170(ppuVar22);
        uVar20 = *(ulong *)(puVar30 + 0x10);
        appuStack_b8[0] = ppuVar17;
        puStack_98 = puVar30;
        if (*(ulong *)(puVar30 + 0x18) >> 1 <= uVar20) {
          FUN_100c077e4(1 < *(ulong *)(puVar30 + 0x18),uVar20 + 1,1);
        }
        puVar30 = puStack_98;
        ppuVar32 = (undefined **)((long)ppuVar32 + 1);
        *(ulong *)(puStack_98 + 0x10) = uVar20 + 1;
        func_0x000100102924(appuStack_b8,puStack_98 + uVar20 * 0x20 + 0x20);
      } while (ppuVar31 != ppuVar32);
      func_0x000107c6142c(ppuVar12);
    }
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar34 = puVar30;
    func_0x000107c5fc48(puVar30,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar30);
    func_0x000107c45788();
    func_0x000107c61170(puVar34);
    pppuVar9 = appuStack_b8;
    appuStack_b8[0] = ppuVar12;
    func_0x000100854cb0(pppuVar9);
    pppuVar13 = pppuVar9;
    func_0x0001004575f0();
    func_0x000107c61574(pppuVar9);
    pppuVar9 = pppuVar13;
    func_0x000107c5cb24(pppuVar13);
    func_0x000107c61180();
    func_0x000107c61170(pppuVar13);
    func_0x000107c55a7c(puVar33);
    func_0x000107c61170(puStack_f0);
    func_0x000107c61170(pppuVar9);
    func_0x000107c61170(ppuVar36);
    ppuVar36 = ppuVar12;
  }
  func_0x000107c61170(ppuVar36);
  func_0x000107c61170(ppuVar11);
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c61428(param_2,appuStack_b8,0,0);
  uVar4 = *param_2;
  func_0x000107c61174(uVar4);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return puVar33;
}



/* Entry: 1012e8f24; end: 1012e8faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012e8f24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112d70d60) == '\x01') {
    func_0x000107c5bb50(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d70e68) + _DAT_113097748),
                        param_2,*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x20 + _DAT_112d70d68) + _DAT_112e97700)
                                 + _DAT_113034cd0));
  }
  FUN_1012eed34();
  return 0;
}



/* Entry: 1012e8fb0; end: 1012e8fcb;  */

undefined * FUN_1012e8fb0(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012e91b4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1012ea0b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        (*(code *)&SUB_1002ec9a0)(uVar8,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1012ea0b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 1012e8fcc; end: 1012e91b3;  */

undefined * FUN_1012e8fcc(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012e91b4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1012ea0b0(0,param_3,param_4);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        (*param_2)(uVar8,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1012ea0b0(0,param_3,param_4);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 1012e91b4; end: 1012e95db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012e91b4(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  
  if (lRam0000000112d70fd0 != -1) {
    func_0x000107c61568(0x112d70fd0,FUN_1012e4468);
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112d70d68);
  uVar3 = *(ulong *)(*(long *)(lVar10 + _DAT_112e97700) + _DAT_113034cb8);
  uVar8 = uRam0000000112d70fd8;
  func_0x0001012e9478(uVar3,uRam0000000112d70fd8);
  lVar7 = _DAT_113041e50;
  if ((uVar3 & 1) != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112d70ee8);
    iVar2 = (int)*(undefined8 *)(lVar9 + _DAT_113041e50);
    func_0x000107c40cf0();
    if (iVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar9 + lVar7);
      func_0x000107c5c364(uVar4);
      func_0x000107c61180();
      puVar5 = PTR_PTR_1126a69f0;
      func_0x000107c610f8(PTR_PTR_1126a69f0);
      func_0x000107c48b4c();
      func_0x000107c61170(uVar4);
      uVar3 = *(ulong *)(lVar10 + _DAT_112e976d0);
      if (uVar3 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar3) {
          uVar6 = uVar3;
        }
        func_0x000107c60480();
      }
      if (uVar6 == 0) {
        lVar10 = 0;
      }
      else {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1012e93b0);
            (*pcVar1)();
          }
          lVar7 = *(long *)(uVar3 + 0x20);
          func_0x000107c61174();
        }
        else {
          func_0x000107c61434(uVar3);
          lVar7 = 0;
          uVar8 = uVar3;
          FUN_1011f491c(0,uVar3);
          func_0x000107c6142c(uVar3);
        }
        lVar10 = lVar7;
        func_0x000107c4fa44();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        lVar7 = lVar10;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        lVar10 = lVar7;
        func_0x000107c4fa4c();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar10 == 0) {
          lVar10 = 0;
          func_0x000107c5faec(0);
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar8);
        }
      }
      func_0x000107c545d0(puVar5);
      func_0x000107c61170(lVar10);
      return puVar5;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1012e95dc; end: 1012e9607; -[_TtC16SCComposerSendTo24ComposerSendToEntryPoint init] */

void FUN_1012e95dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerSendTo.ComposerSendToEntryPoint",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012e9608);
  (*pcVar1)();
}



/* Entry: 1012e9608; end: 1012e960b;  */

void FUN_1012e9608(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012e960c; end: 1012e9a97; -[_TtC16SCComposerSendTo24ComposerSendToEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012e9a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e9a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e960c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d68));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d70d70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70db8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70dc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70dc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70dd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70dd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70de0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70de8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70df0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70df8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e10));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d70e18));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d70e20));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d70e28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70e98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ea0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ea8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70eb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70eb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ec0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ec8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ed0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ed8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ee0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ee8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ef0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70ef8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70f50));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d70f58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70d58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d70db0));
  return;
}



/* Entry: 1012e9a98; end: 1012e9ad3; -[_TtC16SCComposerSendTo30ComposerSendToRootDependencies init] */

void FUN_1012e9a98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012e9ad4; end: 1012e9b07;  */

void FUN_1012e9ad4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012e9b08; end: 1012e9b87; -[_TtC16SCComposerSendTo24ComposerSendToEntryPoint tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x0001012e9b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e9b74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e9b08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d70d48);
  FUN_1012f7270(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x000107c46ecc(puVar1,param_2,param_4);
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012e9b88; end: 1012e9bd3; -[_TtC16SCComposerSendTo24ComposerSendToEntryPoint trayDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001012e9bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e9bc0) */

void FUN_1012e9b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012e9ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012e9bd4; end: 1012e9c7f;  */

void FUN_1012e9bd4(void)

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



/* Entry: 1012e9c80; end: 1012e9c8f;  */

void FUN_1012e9c80(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1012e9c90; end: 1012e9d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e9c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_4;
  func_0x000107c614f0();
  lVar4 = param_4 + _DAT_112d71080;
  *(undefined8 *)(lVar4 + 8) = 0;
  func_0x000107c61614(lVar4,0);
  *(undefined1 *)(param_4 + _DAT_112d71090) = 0;
  puVar1 = (undefined8 *)(param_4 + _DAT_112d71098);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(param_4 + _DAT_112d71088) = param_1;
  *(undefined ***)(lVar4 + 8) = &PTR_DAT_11039f258;
  func_0x000107c61604();
  *(undefined8 *)(param_4 + _DAT_112d71078) = param_3;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_50 = param_4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_50,puVar2,0,0);
  return;
}



/* Entry: 1012e9d6c; end: 1012e9e6b;  */

undefined * FUN_1012e9d6c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d71048,&UNK_10d931ea8);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012e9e68);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012e9e6c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1012e9e6c; end: 1012e9e9f;  */

undefined8 FUN_1012e9e6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4c3ac(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 1012e9ea0; end: 1012ea05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e9ea0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_70 [48];
  
  lVar1 = _DAT_112d70d50;
  if (*(long *)(unaff_x20 + _DAT_112d70d50) != 0) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar3 = *param_1;
    func_0x000107c61174(uVar3);
    func_0x0001048d85b4(0xd00000000000002c,0x800000010ef34fd0);
    func_0x000107c61170(uVar3);
    lVar7 = _DAT_112d70d58;
    if (*(long *)(unaff_x20 + _DAT_112d70d58) != 0) {
      func_0x000107c420a8();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar7);
      *(undefined8 *)(unaff_x20 + lVar7) = 0;
      func_0x000107c61170(uVar3);
    }
    lVar2 = _DAT_112e97708;
    lVar7 = *(long *)(unaff_x20 + _DAT_112d70d68);
    func_0x000107c61428(lVar7 + _DAT_112e97708,auStack_70,0,0);
    lVar7 = lVar7 + lVar2;
    func_0x000107c61618();
    if (lVar7 != 0) {
      puVar4 = PTR_PTR_1126a69c0;
      func_0x000107c610f8(PTR_PTR_1126a69c0);
      uVar3 = 0;
      FUN_1012ea0b0(0,0x112d70f68,&PTR_PTR_1126a69c8);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
      func_0x000107c4700c(puVar4);
      func_0x000107c61170(puVar5);
      FUN_1012e9d6c(puVar6);
      uVar3 = 0;
      func_0x0001043f7068(0);
      puVar5 = puVar6;
      func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puVar6);
      func_0x000107c40008(lVar7);
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1012ea060; end: 1012ea09f;  */

void FUN_1012ea060(void)

{
  func_0x000107c61168(&PTR_PTR_1127c5820);
  return;
}



/* Entry: 1012ea0a0; end: 1012ea0af;  */

undefined1  [16] FUN_1012ea0a0(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  ulong uVar20;
  long unaff_x20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  double dStack_78;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = uVar5;
  dVar21 = param_1;
  FUN_1012f8ac8();
  func_0x000107c44d98();
  func_0x000107c61170(uVar6);
  dStack_78 = (double)(long)dVar21;
  dVar21 = 0.0;
  if (0.0 < param_1) {
    dVar21 = param_1;
  }
  func_0x000107c5de70();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1012f94f0;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1012f94f4;
  puStack_90 = &UNK_11039ff88;
  ppuVar7 = &puStack_a8;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_80);
  pcStack_88 = FUN_1012f954c;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1012f9550;
  puStack_90 = &UNK_11039ffb0;
  ppuVar8 = &puStack_a8;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_80);
  pcStack_88 = FUN_1012f9598;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1012f959c;
  puStack_90 = &UNK_11039ffd8;
  ppuVar9 = &puStack_a8;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  puVar10 = &UNK_1103a0010;
  func_0x000107c613fc(&UNK_1103a0010,0x20,7);
  *(double *)(puVar10 + 0x10) = dVar21;
  *(double **)(puVar10 + 0x18) = &dStack_78;
  puVar11 = &UNK_1103a0038;
  func_0x000107c613fc(&UNK_1103a0038,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_1012fb4f4;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_88 = FUN_1012fb51c;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1012f95f4;
  puStack_90 = &UNK_1103a0050;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar11;
  func_0x000107c60bc4();
  puVar13 = puStack_80;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1103a0088;
  func_0x000107c613fc(&UNK_1103a0088,0x20,7);
  *(double *)(puVar13 + 0x10) = dVar21;
  *(double **)(puVar13 + 0x18) = &dStack_78;
  puVar14 = &UNK_1103a00b0;
  func_0x000107c613fc(&UNK_1103a00b0,0x20,7);
  *(code **)(puVar14 + 0x10) = FUN_1012fb53c;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_88 = FUN_1012fb548;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1012f9664;
  puStack_90 = &UNK_1103a00c8;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar16 = puStack_80;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar16);
  puVar16 = &UNK_1103a0100;
  func_0x000107c613fc(&UNK_1103a0100,0x18,7);
  *(double **)(puVar16 + 0x10) = &dStack_78;
  puVar17 = &UNK_1103a0128;
  func_0x000107c613fc(&UNK_1103a0128,0x20,7);
  *(code **)(puVar17 + 0x10) = FUN_1012fb568;
  *(undefined **)(puVar17 + 0x18) = puVar16;
  pcStack_88 = FUN_1012fb574;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_1103a0140;
  ppuVar18 = &puStack_a8;
  puStack_80 = puVar17;
  func_0x000107c60bc4(ppuVar18);
  puVar2 = puStack_80;
  func_0x000107c6157c(puVar17);
  func_0x000107c61574(puVar2);
  pcStack_88 = (code *)0x1012f96e0;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_1103a0168;
  ppuVar19 = &puStack_a8;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  func_0x000107c4c65c(uVar5);
  func_0x000107c60bd0(ppuVar19);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar5);
  dVar3 = dStack_78;
  uVar20 = 0;
  func_0x000107c61544(0,"",0x5d,0x39,0x40,1);
  if ((uVar20 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012fb4dc);
    (*pcVar4)();
  }
  uVar20 = 0;
  func_0x000107c61544(0,"",0x5d,0x3b,0x15,1);
  if ((uVar20 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012fb4e0);
    (*pcVar4)();
  }
  uVar20 = 0;
  func_0x000107c61544(0,"",0x5d,0x3d,0x24,1);
  func_0x000107c61574(puVar10);
  if ((uVar20 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012fb4e4);
    (*pcVar4)();
  }
  puVar10 = puVar11;
  func_0x000107c61544(puVar11,"",0x5d,0x3f,0x1b,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012fb4e8);
    (*pcVar4)();
  }
  puVar10 = puVar14;
  func_0x000107c61544(puVar14,"",0x5d,0x45,0x1f,1);
  func_0x000107c61574(puVar16);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012fb4ec);
    (*pcVar4)();
  }
  puVar10 = puVar17;
  func_0x000107c61544(puVar17,"",0x5d,0x51,0x13,1);
  func_0x000107c61574(puVar17);
  if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012fb4f0);
    (*pcVar4)();
  }
  uVar20 = 0;
  func_0x000107c61544(0,"",0x5d,0x53,0x15,1);
  if ((uVar20 & 1) == 0) {
    dVar22 = 0.0;
    if (0.0 < dVar3) {
      dVar22 = dVar3;
    }
    auVar23._8_8_ = dVar22;
    auVar23._0_8_ = dVar21;
    return auVar23;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1012fb4f4);
  (*pcVar4)();
}



/* Entry: 1012ea0b0; end: 1012ea0ef;  */

void FUN_1012ea0b0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1012ea0f0; end: 1012ea137;  */

void FUN_1012ea0f0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    func_0x000107c615f0();
    func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
    func_0x000107c4ed98(param_1);
    func_0x000107c615e8(param_1);
    func_0x000107c61170();
    puVar3 = puVar2;
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1012ea138; end: 1012ea163;  */

void FUN_1012ea138(void)

{
  FUN_1012ea164(0x112d71070,0x1012ea0fc,&UNK_10d931f38);
  return;
}



/* Entry: 1012ea164; end: 1012ea1e7;  */

void FUN_1012ea164(long *param_1,code *param_2,long param_3)

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



/* Entry: 1012ea1e8; end: 1012ea227;  */

void FUN_1012ea1e8(long param_1,long param_2)

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



/* Entry: 1012ea228; end: 1012ea2c3; -[_TtC16SCComposerSendTo32ComposerSendToTrayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ea228(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_1 + _DAT_112d71080;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(param_1 + _DAT_112d71090) = 0;
  puVar2 = (undefined8 *)(param_1 + _DAT_112d71098);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCComposerSendTo/ComposerSendToTrayViewController.swift",0x37,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1012ea2c4);
  (*pcVar3)();
}



/* Entry: 1012ea2c4; end: 1012ea353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ea2c4(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  lVar1 = _DAT_112d71090;
  if ((*(byte *)(unaff_x20 + _DAT_112d71090) & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d71088);
    FUN_1012ea354();
    func_0x000107c4ef2c(uVar2);
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
    func_0x000107c56a18();
  }
  return;
}



/* Entry: 1012ea354; end: 1012ea3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1012ea354(void)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  float fVar4;
  double dVar5;
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112d71098);
  if (*(char *)(pdVar1 + 1) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d71078);
    uVar2 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010ef351b0);
    fVar4 = 0.7;
    func_0x000107c436e4(uVar3);
    func_0x000107c61170(uVar2);
    dVar5 = (double)fVar4;
    *pdVar1 = dVar5;
    *(undefined1 *)(pdVar1 + 1) = 0;
  }
  else {
    dVar5 = *pdVar1;
  }
  return dVar5;
}



/* Entry: 1012ea3fc; end: 1012ea4d3; -[_TtC16SCComposerSendTo32ComposerSendToTrayViewController viewDidAppear:] */

void FUN_1012ea3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1012ea2c4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012ea4d4; end: 1012ea503; -[_TtC16SCComposerSendTo32ComposerSendToTrayViewController viewDidDisappear:] */

void FUN_1012ea4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001012ea42c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012ea504; end: 1012ea5d3;  */

void FUN_1012ea504(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c61174();
  uVar4 = param_1;
  func_0x000107c3f9e0();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x0001012ea70c(0);
  uVar3 = uVar4;
  func_0x000107c5fc54(uVar4,uVar2);
  func_0x000107c61170(uVar4);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else if ((uVar3 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012ea5d4);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(uVar3 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = 0;
    FUN_100f3b77c(0,uVar3);
  }
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1012ea5d4; end: 1012ea633; -[_TtC16SCComposerSendTo32ComposerSendToTrayViewController initWithNibName:bundle:] */

void FUN_1012ea5d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerSendTo.ComposerSendToTrayViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012ea600);
  (*pcVar1)();
}



/* Entry: 1012ea634; end: 1012ea67b; -[_TtC16SCComposerSendTo32ComposerSendToTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ea634(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d71078));
  FUN_1012ea750(param_1 + _DAT_112d71080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d71088));
  return;
}



/* Entry: 1012ea67c; end: 1012ea69b;  */

void FUN_1012ea67c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c5ba8);
  return;
}



/* Entry: 1012ea69c; end: 1012ea6df; -[_TtC16SCComposerSendTo32ComposerSendToTrayViewController defaultProjectNameV3] */

void FUN_1012ea69c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001040703c0();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1012ea6e0; end: 1012ea74f; -[_TtC16SCComposerSendTo32ComposerSendToTrayViewController jiraMetaInfo] */

void FUN_1012ea6e0(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef35150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012ea750; end: 1012ea773;  */

undefined8 FUN_1012ea750(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1012ea774; end: 1012ea777; -[_TtC16SCComposerSendTo32ComposerSendToTrayViewController childViewControllerForStatusBarHidden] */

void FUN_1012ea774(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c61174();
  uVar4 = param_1;
  func_0x000107c3f9e0();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x0001012ea70c(0);
  uVar3 = uVar4;
  func_0x000107c5fc54(uVar4,uVar2);
  func_0x000107c61170(uVar4);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else if ((uVar3 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012ea5d4);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(uVar3 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = 0;
    FUN_100f3b77c(0,uVar3);
  }
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1012ea778; end: 1012ea77b; -[_TtC16SCComposerSendTo32ComposerSendToTrayViewController childViewControllerForStatusBarStyle] */

void FUN_1012ea778(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c61174();
  uVar4 = param_1;
  func_0x000107c3f9e0();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x0001012ea70c(0);
  uVar3 = uVar4;
  func_0x000107c5fc54(uVar4,uVar2);
  func_0x000107c61170(uVar4);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else if ((uVar3 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012ea5d4);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(uVar3 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = 0;
    FUN_100f3b77c(0,uVar3);
  }
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1012ea77c; end: 1012ea80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ea77c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112d712a8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d712a8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174(uVar3);
    uVar4 = uVar3;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012ea810; end: 1012ea8bb; -[_TtC16SCComposerSendTo28ComposerSendToViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ea810(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112d712a8;
  lVar6 = *(long *)(param_1 + _DAT_112d712a8);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c61170();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c61174(uVar4);
    uVar5 = uVar4;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar5);
  }
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012ea8bc; end: 1012ead13; -[_TtC16SCComposerSendTo28ComposerSendToViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012ea958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ea978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ea998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ea9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ea9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ea9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012eaa18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012eaa48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012eaa68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012eaa88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012eaaa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012eaae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012eac58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012eacf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012eac5c) */
/* WARNING: Removing unreachable block (ram,0x0001012eaaec) */
/* WARNING: Removing unreachable block (ram,0x0001012eaaac) */
/* WARNING: Removing unreachable block (ram,0x0001012eaa8c) */
/* WARNING: Removing unreachable block (ram,0x0001012eaa6c) */
/* WARNING: Removing unreachable block (ram,0x0001012eaa4c) */
/* WARNING: Removing unreachable block (ram,0x0001012eaa1c) */
/* WARNING: Removing unreachable block (ram,0x0001012ea9fc) */
/* WARNING: Removing unreachable block (ram,0x0001012ea9dc) */
/* WARNING: Removing unreachable block (ram,0x0001012ea9bc) */
/* WARNING: Removing unreachable block (ram,0x0001012ea99c) */
/* WARNING: Removing unreachable block (ram,0x0001012ea97c) */
/* WARNING: Removing unreachable block (ram,0x0001012ea95c) */
/* WARNING: Removing unreachable block (ram,0x0001012eacfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ea8bc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d710c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d710d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d710d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d710e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d710e8));
  FUN_100cabcbc(param_1 + _DAT_112d710f0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d710f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d71108));
  return;
}



/* Entry: 1012ead14; end: 1012eadab; -[_TtC16SCComposerSendTo28ComposerSendToViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ead14(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  func_0x000107c61614(param_1 + _DAT_112d710f0,0);
  lVar1 = param_1 + _DAT_112d71270;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(param_1 + _DAT_112d712e8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCComposerSendTo/ComposerSendToViewController.swift",0x33,2,0x125,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012eadac);
  (*pcVar2)();
}



/* Entry: 1012eadac; end: 1012eadaf; -[_TtC16SCComposerSendTo28ComposerSendToViewController preferredStatusBarStyle] */

undefined8 FUN_1012eadac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 1012eadb0; end: 1012eae3b; -[_TtC16SCComposerSendTo28ComposerSendToViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_1012eadb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8;
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c30a30(param_1);
  func_0x000107c517f0(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1012eae3c; end: 1012eafbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012eae3c(double param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewWillAppear__1126853f0,param_2 & 1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d71210);
  func_0x000107c5eea0(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar2 = PTR_PTR_1126a6a00;
  func_0x000107c610f8(PTR_PTR_1126a6a00);
  func_0x000107c46f70(param_1 * 1000.0);
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c30a30();
  func_0x000107c517f0(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5bb50(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d71218) + _DAT_113097748));
  return;
}



/* Entry: 1012eafc0; end: 1012eafef; -[_TtC16SCComposerSendTo28ComposerSendToViewController viewWillAppear:] */

void FUN_1012eafc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1012eae3c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012eaff0; end: 1012eb05f; -[_TtC16SCComposerSendTo28ComposerSendToViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012eaff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  *(undefined1 *)(param_1 + _DAT_112d712e8) = 0;
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1012eb060; end: 1012ec52f;  */

/* WARNING: Removing unreachable block (ram,0x0001012eb9d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012eb060(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  long lVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined *puVar52;
  undefined8 *unaff_x20;
  long lVar53;
  long lVar54;
  undefined *puStack_128;
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  
  puVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000022;
  func_0x0001000a9a18(0xd000000000000022,0x800000010ef352a0);
  func_0x000107c61170(uVar4);
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_loadView_112604be0);
  lVar6 = *(long *)((long)unaff_x20 + _DAT_112d71190);
  func_0x000107c41414();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar7 == 0) goto LAB_1012ec4e0;
  lVar6 = lVar7;
  func_0x000107c409cc();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar8 = *(long *)((long)unaff_x20 + _DAT_112d71108);
    func_0x000107c509b4();
    func_0x000107c61180();
    if (lVar8 != 0) {
      puVar9 = *(undefined **)((long)unaff_x20 + _DAT_112d71260);
      func_0x000107c5c360();
      func_0x000107c61180();
      puVar52 = puVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      if (puVar52 == (undefined *)0x0) {
LAB_1012eb23c:
        puStack_128 = PTR_PTR_1126ae6b8;
        func_0x000107c61168();
        puVar52 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c4a8a4();
        func_0x000107c61180();
        func_0x000107c61170(puVar52);
      }
      else {
        puVar9 = puVar52;
        func_0x000107c5d6fc();
        func_0x000107c61180();
        func_0x000107c61170(puVar52);
        pcStack_c0 = (code *)0x1012ec530;
        puStack_b8 = (undefined *)0x0;
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0x42000000;
        uStack_d0 = 0x1012ec594;
        puStack_c8 = &UNK_11039f540;
        ppuVar10 = &puStack_e0;
        func_0x000107c60bc4(ppuVar10);
        puStack_128 = puVar9;
        func_0x000107c4c280();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(puVar9);
        if (puStack_128 == (undefined *)0x0) goto LAB_1012eb23c;
      }
      lVar18 = (long)unaff_x20 + _DAT_112d710f0;
      func_0x000107c61618();
      lVar19 = *(long *)((long)unaff_x20 + _DAT_112d711b8);
      lVar20 = *(long *)((long)unaff_x20 + _DAT_112d710c8);
      lVar21 = *(long *)((long)unaff_x20 + _DAT_112d710d8);
      lVar42 = *(long *)((long)unaff_x20 + _DAT_112d710d0);
      lVar48 = *(long *)((long)unaff_x20 + _DAT_112d710e8);
      uVar50 = *(undefined8 *)((long)unaff_x20 + _DAT_112d711c8);
      uVar22 = *(undefined8 *)((long)unaff_x20 + _DAT_112d711c0);
      uVar23 = *(undefined8 *)((long)unaff_x20 + _DAT_112d711d8);
      uVar24 = *(undefined8 *)((long)unaff_x20 + _DAT_112d711e8);
      uVar25 = *(undefined8 *)((long)unaff_x20 + _DAT_112d711f0);
      uVar26 = *(undefined8 *)((long)unaff_x20 + _DAT_112d711f8);
      uVar27 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71208);
      uVar43 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71220);
      uVar28 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71228);
      uVar49 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71230);
      uVar29 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71238);
      uVar30 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71240);
      uVar44 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71248);
      uVar31 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71250);
      uVar32 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71258);
      lVar54 = (long)unaff_x20 + _DAT_112d71270;
      uVar33 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71268);
      lVar11 = lVar54;
      func_0x000107c61618();
      uVar34 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71288);
      uVar45 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71290);
      uVar35 = *(undefined8 *)((long)unaff_x20 + _DAT_112d712a0);
      uVar36 = *(undefined8 *)((long)unaff_x20 + _DAT_112d712a8);
      lVar37 = *(long *)((long)unaff_x20 + _DAT_112d712b0);
      lVar38 = *(long *)((long)unaff_x20 + _DAT_112d71298);
      uVar46 = *(undefined8 *)((long)unaff_x20 + _DAT_112d712c8);
      uVar39 = *(undefined8 *)(lVar54 + 8);
      uVar4 = *(undefined8 *)((long)unaff_x20 + _DAT_112d711a0);
      lVar54 = ((undefined8 *)((long)unaff_x20 + _DAT_112d711a0))[1];
      uVar41 = uVar4;
      func_0x000107c614f0();
      (**(code **)(lVar54 + 8))();
      uVar47 = *(undefined8 *)((long)unaff_x20 + _DAT_112d712d0);
      uVar40 = *(undefined8 *)((long)unaff_x20 + _DAT_112d712d8);
      uVar51 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71198);
      lVar12 = 0;
      FUN_1012f5740();
      lVar13 = lVar12;
      func_0x000107c610f8();
      lVar14 = _DAT_112d71408;
      func_0x000107c61614(lVar13 + _DAT_112d71408,0);
      lVar17 = _DAT_112d71410;
      func_0x000107c61614(lVar13 + _DAT_112d71410,0);
      *(undefined8 *)(lVar13 + _DAT_112d71480) = 0;
      *(undefined8 *)(lVar13 + _DAT_112d71488) = 0;
      *(undefined1 *)(lVar13 + _DAT_112d71490) = 0;
      lVar53 = _DAT_112d71498;
      *(undefined8 *)(lVar13 + _DAT_112d71498) = 0;
      *(undefined8 *)(lVar13 + _DAT_112d714a0) = 0;
      func_0x000107c61614(lVar13 + _DAT_112d714a8,0);
      *(undefined8 *)(lVar13 + _DAT_112d714b0) = 0;
      *(undefined8 *)(lVar13 + _DAT_112d714b8) = 0;
      *(undefined8 *)(lVar13 + _DAT_112d714c0) = 0;
      lVar15 = _DAT_112d714f8;
      func_0x000107c61614(lVar13 + _DAT_112d714f8,0);
      lVar2 = _DAT_112d71528;
      func_0x000107c61614(lVar13 + _DAT_112d71528,0);
      *(undefined **)(lVar13 + _DAT_112d71568) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      *(undefined8 *)(lVar13 + _DAT_112d71570) = 0;
      puVar1 = (undefined8 *)(lVar13 + _DAT_112d71578);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar54 = lVar13 + _DAT_112d71580;
      *(undefined8 *)(lVar54 + 8) = 0;
      func_0x000107c61614(lVar54,0);
      *(undefined8 *)(lVar13 + _DAT_112d71588) = 0;
      puVar1 = (undefined8 *)(lVar13 + _DAT_112d71590);
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c61604(lVar13 + lVar14);
      *(undefined8 *)(lVar13 + _DAT_112d71560) = uVar51;
      func_0x000107c61604(lVar13 + lVar17,lVar18);
      *(long *)(lVar13 + _DAT_112d714c8) = lVar19;
      *(long *)(lVar13 + _DAT_112d714d0) = lVar20;
      *(long *)(lVar13 + _DAT_112d71428) = lVar21;
      *(long *)(lVar13 + _DAT_112d71418) = lVar42;
      *(long *)(lVar13 + _DAT_112d71420) = lVar48;
      *(undefined8 *)(lVar13 + _DAT_112d714d8) = uVar50;
      *(undefined8 *)(lVar13 + _DAT_112d714e0) = uVar22;
      *(undefined8 *)(lVar13 + _DAT_112d714e8) = uVar23;
      *(undefined8 *)(lVar13 + _DAT_112d714f0) = uVar24;
      func_0x000107c61604(lVar13 + lVar15,uVar25);
      *(undefined8 *)(lVar13 + _DAT_112d71500) = uVar26;
      *(undefined8 *)(lVar13 + _DAT_112d71508) = uVar27;
      *(undefined8 *)(lVar13 + _DAT_112d71510) = uVar43;
      *(undefined8 *)(lVar13 + _DAT_112d71518) = uVar28;
      *(undefined8 *)(lVar13 + _DAT_112d71520) = uVar49;
      func_0x000107c61604(lVar13 + lVar2,uVar29);
      *(undefined8 *)(lVar13 + _DAT_112d71530) = uVar30;
      *(undefined8 *)(lVar13 + _DAT_112d71538) = uVar44;
      *(undefined8 *)(lVar13 + _DAT_112d71540) = uVar31;
      *(undefined8 *)(lVar13 + _DAT_112d71548) = uVar32;
      *(undefined8 *)(lVar13 + _DAT_112d71550) = uVar33;
      *(undefined8 *)(lVar54 + 8) = uVar39;
      func_0x000107c61604(lVar54,lVar11);
      *(undefined8 *)(lVar13 + _DAT_112d71430) = uVar34;
      *(undefined8 *)(lVar13 + _DAT_112d71438) = uVar45;
      *(undefined8 *)(lVar13 + _DAT_112d71440) = uVar35;
      *(undefined8 *)(lVar13 + _DAT_112d71448) = uVar36;
      *(long *)(lVar13 + _DAT_112d71450) = lVar37;
      *(undefined8 *)(lVar13 + _DAT_112d71458) = uVar46;
      *(undefined8 *)(lVar13 + _DAT_112d71460) = uVar41;
      *(undefined8 *)(lVar13 + _DAT_112d71468) = uVar47;
      *(undefined8 *)(lVar13 + _DAT_112d71470) = uVar40;
      *(long *)(lVar13 + _DAT_112d71478) = lVar6;
      func_0x000107c6157c();
      func_0x000107c615f4(lVar6,2);
      func_0x000107c6157c(uVar51);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(uVar50);
      func_0x000107c61174(uVar22);
      func_0x000107c61174(uVar23);
      func_0x000107c61174(uVar24);
      func_0x000107c61174(uVar26);
      func_0x000107c61174(uVar27);
      func_0x000107c61174(uVar43);
      func_0x000107c61174(uVar28);
      func_0x000107c61174(uVar49);
      func_0x000107c61174(uVar30);
      func_0x000107c61174(uVar44);
      func_0x000107c61174(uVar31);
      func_0x000107c61174(uVar32);
      func_0x000107c61174(uVar33);
      func_0x000107c61174(uVar45);
      func_0x000107c61174(uVar35);
      func_0x000107c61174(uVar36);
      func_0x000107c61174(uVar46);
      func_0x000107c6157c(uVar41);
      func_0x000107c61174(uVar47);
      func_0x000107c615f0(uVar40);
      lVar54 = lVar20;
      func_0x000107c61174();
      lVar14 = lVar21;
      func_0x000107c61174();
      lVar17 = lVar48;
      func_0x000107c61174();
      func_0x000107c615f0(uVar34);
      func_0x000107c3ed00();
      func_0x000107c61180();
      lVar15 = lVar38;
      (**(code **)(lVar38 + 0x10))();
      func_0x000107c61180();
      func_0x000107c60bd0(lVar38);
      *(long *)(lVar13 + _DAT_112d71558) = lVar15;
      if (lVar37 == 0) {
        puVar52 = (undefined *)0x0;
      }
      else {
        func_0x000104886d18(&puStack_e0);
        puVar52 = puStack_e0;
      }
      uVar22 = *(undefined8 *)(lVar13 + lVar53);
      *(undefined **)(lVar13 + lVar53) = puVar52;
      func_0x000107c61170(uVar22);
      plVar16 = &lStack_b0;
      lStack_b0 = lVar13;
      lStack_a8 = lVar12;
      func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
      lVar53 = _DAT_113034b60;
      if (lVar48 == 0) {
LAB_1012ebb14:
        lVar53 = 0;
      }
      else {
        func_0x000107c61428(lVar17 + _DAT_113034b60,auStack_f8,0,0);
        lVar17 = *(long *)(lVar17 + lVar53);
        if (lVar17 == 0) goto LAB_1012ebb14;
        func_0x000107c5c6c0();
        func_0x000107c61180();
        puVar52 = &UNK_11039f500;
        func_0x000107c613fc(&UNK_11039f500,0x18,7);
        func_0x000107c61614(puVar52 + 0x10,plVar16);
        pcStack_c0 = FUN_1012ee758;
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0x42000000;
        uStack_d0 = 0x1012df3b8;
        puStack_c8 = &UNK_11039f518;
        ppuVar10 = &puStack_e0;
        puStack_b8 = puVar52;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c61574(puStack_b8);
        lVar53 = lVar17;
        func_0x000107c5c320();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(lVar17);
      }
      uVar22 = *(undefined8 *)((long)plVar16 + _DAT_112d71588);
      *(long *)((long)plVar16 + _DAT_112d71588) = lVar53;
      func_0x000107c61170(uVar22);
      if (lVar20 == 0) {
LAB_1012ebcac:
        func_0x000107c615e8(lVar18);
        func_0x000107c615e8(lVar11);
        func_0x000107c61574(uVar41);
        lVar18 = lVar6;
      }
      else {
        func_0x000107c61174(lVar54);
        func_0x000107c42e94();
        func_0x000107c61180();
        lVar17 = lVar19;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar19);
        if (lVar17 == 0) {
          func_0x000107c61170(lVar54);
          goto LAB_1012ebcac;
        }
        puVar52 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x000108f95ed0(lVar42);
        uVar22 = *(undefined8 *)(lVar42 + _DAT_113034cb0);
        uVar23 = ((undefined8 *)(lVar42 + _DAT_113034cb0))[1];
        puVar9 = PTR_PTR_1126b3ee8;
        func_0x000107c610f8(PTR_PTR_1126b3ee8);
        func_0x000107c61174(lVar54);
        func_0x000107c61174(puVar52);
        func_0x000107c61434(uVar23);
        func_0x000107c5fadc(uVar22,uVar23);
        func_0x000107c6142c(uVar23);
        func_0x000107c48670(puVar9);
        func_0x000107c61170(lVar54);
        func_0x000107c61170(puVar52);
        func_0x000107c61170(uVar22);
        lVar53 = lVar17;
        func_0x000107c40aa8();
        func_0x000107c61180();
        func_0x000107c615e8(lVar17);
        func_0x000107c615e8(lVar18);
        func_0x000107c615e8(lVar11);
        func_0x000107c61574(uVar41);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar52);
        func_0x000107c61170(lVar54);
        lVar18 = *(long *)((long)plVar16 + _DAT_112d71570);
        *(long *)((long)plVar16 + _DAT_112d71570) = lVar53;
      }
      func_0x000107c615e8(lVar18);
      uVar25 = 0;
      func_0x0001012ee7b4(0,0x112d71318,&PTR_PTR_1126c52c8);
      uVar22 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71110);
      uVar33 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71118);
      uVar35 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71120);
      uVar30 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71128);
      uVar36 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71130);
      uVar29 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71138);
      uVar27 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71140);
      uVar32 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71148);
      uVar40 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71150);
      uVar44 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71158);
      uVar43 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71160);
      uVar39 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71168);
      uVar28 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71170);
      uVar41 = *(undefined8 *)((long)unaff_x20 + _DAT_112d710f8);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c615f0(uVar33);
      func_0x000107c615f0(uVar35);
      func_0x000107c615f0(uVar30);
      func_0x000107c615f0(uVar36);
      func_0x000107c615f0(uVar29);
      func_0x000107c615f0(uVar27);
      func_0x000107c615f0(uVar32);
      func_0x000107c615f0(uVar40);
      func_0x000107c615f0(uVar44);
      func_0x000107c615f0(uVar43);
      func_0x000107c615f0(uVar39);
      func_0x000107c615f0(uVar28);
      func_0x000107c5dbd4(uVar41);
      func_0x000107c61180();
      lVar18 = lVar6;
      func_0x000107c40978();
      func_0x000107c61180();
      func_0x000107c61170(uVar41);
      uVar31 = *(undefined8 *)((long)unaff_x20 + _DAT_112d711b0);
      lVar54 = *(long *)((long)unaff_x20 + _DAT_112d71200);
      uVar34 = *(undefined8 *)(lVar54 + _DAT_112d71910);
      func_0x000107c615f0(uVar4);
      func_0x000107c615f0(uVar31);
      uVar41 = uVar34;
      func_0x000107c615f0();
      func_0x0001012ec618();
      uVar23 = *(undefined8 *)(lVar54 + _DAT_112d71918);
      func_0x000107c615f0();
      func_0x0001000d224c(&puStack_e0);
      puVar52 = puStack_e0;
      uVar24 = *(undefined8 *)((long)unaff_x20 + _DAT_112d71278);
      func_0x000107c5cb24();
      func_0x000107c61180();
      puVar9 = puStack_128;
      func_0x000107c5cb24();
      func_0x000107c61180();
      uVar26 = 0;
      func_0x0001012ea080();
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c614e8();
      func_0x000107c610f8();
      func_0x000107c47d04();
      func_0x000107c61170(uVar22);
      func_0x000107c61170(plVar16);
      func_0x000107c615e8(uVar33);
      func_0x000107c615e8(uVar35);
      func_0x000107c615e8(uVar30);
      func_0x000107c615e8(uVar36);
      func_0x000107c615e8(uVar29);
      func_0x000107c615e8(uVar27);
      func_0x000107c615e8(uVar32);
      func_0x000107c615e8(uVar40);
      func_0x000107c615e8(uVar44);
      func_0x000107c615e8(uVar43);
      func_0x000107c615e8(uVar39);
      func_0x000107c615e8(uVar28);
      func_0x000107c615e8(lVar18);
      func_0x000107c615e8(uVar4);
      func_0x000107c615e8(uVar31);
      func_0x000107c615e8(uVar34);
      func_0x000107c61170(uVar41);
      func_0x000107c615e8(uVar23);
      func_0x000107c615e8(puVar52);
      func_0x000107c61170(uVar24);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(uVar26);
      FUN_1012ec728();
      func_0x000107c52604(uVar25);
      func_0x000107c615e8(uVar26);
      lVar17 = *(long *)((long)unaff_x20 + _DAT_112d71100);
      lVar18 = lVar17;
      func_0x000107c4d814();
      func_0x000107c61180();
      lVar54 = lVar18;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar18);
      if (lVar54 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar54;
        func_0x000107c4c1dc(lVar54);
        func_0x000107c61180();
        func_0x000107c615e8(lVar54);
      }
      func_0x000107c56b20(uVar25);
      func_0x000107c615e8(lVar18);
      func_0x000107c57810(uVar25);
      func_0x000107c537c0(uVar25);
      uVar4 = *(undefined8 *)((long)unaff_x20 + _DAT_112d711d0);
      puVar52 = &UNK_11039f488;
      func_0x000107c613fc(&UNK_11039f488,0x18,7);
      func_0x000107c61614(puVar52 + 0x10);
      pcStack_c0 = FUN_1012ee71c;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0x42000000;
      uStack_d0 = 0x100f11714;
      puStack_c8 = &UNK_11039f4a0;
      ppuVar10 = &puStack_e0;
      puStack_b8 = puVar52;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c61574(puStack_b8);
      if (lVar21 == 0) {
        uVar41 = 0;
      }
      else {
        uVar41 = *(undefined8 *)(lVar14 + _DAT_113034ab0);
        func_0x000107c61174(uVar41);
      }
      func_0x000107c4b8b4(uVar4);
      func_0x000107c61180();
      func_0x000107c61170(uVar41);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c56048(uVar25);
      func_0x000107c61170(uVar4);
      FUN_1012ec99c();
      func_0x000107c5a6a4(uVar25);
      func_0x000107c61170(uVar4);
      func_0x000107c3cfe0();
      func_0x000107c61180();
      lVar18 = lVar17;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar17);
      if (lVar18 == 0) {
        lVar54 = 0;
      }
      else {
        puVar52 = &UNK_11039f488;
        func_0x000107c613fc(&UNK_11039f488,0x18,7);
        func_0x000107c61614(puVar52 + 0x10);
        pcStack_c0 = FUN_1012ee724;
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0x42000000;
        uStack_d0 = 0x100f11714;
        puStack_c8 = &UNK_11039f4c8;
        ppuVar10 = &puStack_e0;
        puStack_b8 = puVar52;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c61574(puStack_b8);
        lVar54 = lVar18;
        func_0x000107c4c1e8(lVar18);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c615e8(lVar18);
      }
      func_0x000107c52188(uVar25);
      func_0x000107c615e8(lVar54);
      if (*(long *)((long)unaff_x20 + _DAT_112d71280) == 0) {
        puVar52 = (undefined *)0x0;
      }
      else {
        func_0x0001000d224c(&puStack_e0);
        puVar52 = puStack_e0;
      }
      func_0x000107c59ac8(uVar25);
      func_0x000107c615e8(puVar52);
      lVar18 = *(long *)((long)unaff_x20 + _DAT_112d711a8);
      uVar4 = *(undefined8 *)(lVar18 + _DAT_112e98288);
      func_0x000107c6157c(uVar4);
      func_0x0001000d224c(&puStack_e0);
      func_0x000107c61574(uVar4);
      puVar52 = puStack_e0;
      func_0x000107c59974(uVar25);
      func_0x000107c615e8(puVar52);
      uVar4 = *(undefined8 *)(lVar18 + _DAT_112e98290);
      func_0x000107c6157c(uVar4);
      func_0x0001000d224c(&puStack_e0);
      func_0x000107c61574(uVar4);
      puVar52 = puStack_e0;
      func_0x000107c5996c(uVar25);
      func_0x000107c615e8(puVar52);
      uVar4 = *(undefined8 *)(lVar18 + _DAT_112e98298);
      func_0x000107c6157c(uVar4);
      func_0x0001000d224c(&puStack_e0);
      func_0x000107c61574(uVar4);
      puVar52 = puStack_e0;
      func_0x000107c5699c(uVar25);
      func_0x000107c615e8(puVar52);
      uVar4 = *(undefined8 *)((long)unaff_x20 + _DAT_112d712b8);
      func_0x000107c5c734(uVar4);
      func_0x000107c61180();
      func_0x000107c599b0(uVar25);
      func_0x000107c615e8(uVar4);
      uVar4 = *(undefined8 *)((long)unaff_x20 + _DAT_112d712c0);
      func_0x000107c5c734(uVar4);
      func_0x000107c61180();
      func_0x000107c5607c(uVar25);
      func_0x000107c615e8(uVar4);
      puVar52 = PTR_PTR_1126a6a08;
      func_0x000107c610f8(PTR_PTR_1126a6a08);
      func_0x000107c49520();
      func_0x000107c5a568();
      func_0x000107c615e8(lVar7);
      func_0x000107c615e8(lVar6);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(puStack_128);
      func_0x000107c61170(plVar16);
      func_0x000107c61170(uVar25);
      func_0x000107c61170(puVar52);
      goto LAB_1012ec4e0;
    }
    func_0x000107c615e8(lVar7);
    lVar7 = lVar6;
  }
  func_0x000107c615e8(lVar7);
LAB_1012ec4e0:
  func_0x000107c61428(puVar3,&puStack_e0,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1012ec530; end: 1012ec727;  */

void FUN_1012ec530(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c4a564();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  uVar2 = 0;
  func_0x0001012ee7b4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1012ec728; end: 1012ec8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012ec728(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d71100);
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar5 = &UNK_11039f488;
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_11039f488,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  func_0x000107c613fc(&UNK_11039f488,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x1012ee77c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x100e1779c;
  puStack_68 = &UNK_11039f658;
  ppuVar7 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  uStack_90 = 0x1012ee784;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x100e17304;
  puStack_98 = &UNK_11039f680;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_88);
  puVar1 = puStack_58;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar1);
  if (lVar3 == 0) {
    func_0x000107c61170(puVar6);
    lVar2 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c4c1e0(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar6);
  }
  return lVar2;
}



/* Entry: 1012ec900; end: 1012ec99b;  */

long FUN_1012ec900(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar3 = param_1;
    while (lVar1 != 0) {
      func_0x000107c61170(lVar3);
      lVar2 = lVar1;
      func_0x000107c4f078();
      func_0x000107c61180();
      lVar3 = lVar1;
      lVar1 = lVar2;
    }
    func_0x000107c61170(param_1);
  }
  return lVar3;
}



/* Entry: 1012ec99c; end: 1012ecd33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012ec99c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long alStack_100 [7];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_c0 - extraout_x8;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  pcVar15 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar15)(lVar14,1,1,lVar2);
  (*pcVar15)(lVar12,1,1,lVar2);
  lVar2 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar11,1,1,lVar2);
  *(undefined1 *)(lVar13 + -8) = 0;
  *(undefined8 *)(lVar13 + -0x10) = 0;
  *(undefined8 *)(lVar13 + -0x18) = 0;
  *(undefined8 *)(lVar13 + -0x20) = 0;
  *(undefined8 *)(lVar13 + -0x28) = 0;
  *(undefined8 *)(lVar13 + -0x30) = 0;
  *(undefined8 *)(lVar13 + -0x38) = 0;
  *(long *)(lVar13 + -0x40) = lVar11;
  func_0x000104638e24(lVar13,0x19,lVar14,0,lVar12,0,0,0,0);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90(lVar13);
  puVar3 = &UNK_11039f578;
  func_0x000107c613fc(&UNK_11039f578,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar4 = &UNK_11039f488;
  func_0x000107c613fc(&UNK_11039f488,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11039f5a0;
  func_0x000107c613fc(&UNK_11039f5a0,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x1012ee760;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x100e1779c;
  puStack_78 = &UNK_11039f5b8;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar7);
  uStack_a0 = 0x1012ee768;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  uStack_b0 = 0x100e17304;
  puStack_a8 = &UNK_11039f5e0;
  ppuVar8 = &puStack_c0;
  puStack_98 = puVar3;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61580(puVar3,2);
  func_0x000107c6157c(puVar4);
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_98);
  puVar5 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000103bda44c(0);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d711e0);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d71190);
  func_0x000107c61174(uVar9);
  lVar2 = lVar13;
  func_0x000107c61174(lVar13);
  puVar4 = puVar6;
  func_0x000107c61174(puVar6);
  func_0x000107c3ff98(uVar10);
  func_0x000107c61180();
  func_0x000103bda4f0(uVar9,lVar13,puVar6,uVar10);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(puVar4);
  return uVar9;
}



/* Entry: 1012ecd34; end: 1012ecd5b; -[_TtC16SCComposerSendTo28ComposerSendToViewController loadView] */

void FUN_1012ecd34(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012eb060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012ecd5c; end: 1012ece23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ecd5c(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d711a8) + _DAT_112e98298);
  func_0x000107c6157c(uVar2);
  func_0x0001000d224c(&uStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c614f0(uStack_50);
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  (**(code **)(lStack_48 + 8))();
  func_0x000107c615e8(uStack_50);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1012ece24; end: 1012ece4b; -[_TtC16SCComposerSendTo28ComposerSendToViewController viewDidLoad] */

void FUN_1012ece24(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012ecd5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012ece4c; end: 1012ed16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ece4c(double param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)0x0;
  func_0x000107c5eea4();
  lVar8 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000002a;
  func_0x0001000a9a18(0xd00000000000002a,0x800000010ef35240);
  func_0x000107c61170(uVar3);
  func_0x000107c61154(&stack0xffffffffffffff68,PTR_s_viewDidDisappear__112684c48,param_2 & 1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d71210);
  func_0x000107c5eea0(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar8 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar1);
  puVar5 = PTR_PTR_1126a6a00;
  func_0x000107c610f8(PTR_PTR_1126a6a00);
  func_0x000107c46f70(param_1 * 1000.0);
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c5bb50(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d71218) + _DAT_113097748));
  lVar8 = unaff_x20;
  func_0x000107c49aa0();
  if ((int)lVar8 != 0) {
    func_0x000107c61428(puVar2,auStack_c8,0,0);
    uVar3 = *puVar2;
    func_0x000107c61174(uVar3);
    func_0x0001048d85b4(0xd00000000000002c,0x800000010ef35270);
    func_0x000107c61170(uVar3);
  }
  lVar8 = unaff_x20;
  func_0x000107c49aa0();
  if (((int)lVar8 != 0) && ((*(byte *)(unaff_x20 + _DAT_112d712e8) & 1) == 0)) {
    lVar8 = unaff_x20 + _DAT_112d710f0;
    func_0x000107c61618();
    if (lVar8 != 0) {
      puVar6 = PTR_PTR_1126a69c0;
      func_0x000107c610f8(PTR_PTR_1126a69c0);
      uVar3 = 0;
      func_0x0001012ee7b4(0,0x112d70f68,&PTR_PTR_1126a69c8);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
      func_0x000107c4700c(puVar6);
      func_0x000107c61170(puVar7);
      FUN_1012e9d6c(puVar5);
      uVar3 = 0;
      func_0x0001043f7068(0);
      puVar7 = puVar5;
      func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puVar5);
      func_0x000107c40008(lVar8);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
    }
  }
  func_0x000107c61428(puVar2,auStack_b0,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1012ed16c; end: 1012ed19b; -[_TtC16SCComposerSendTo28ComposerSendToViewController viewDidDisappear:] */

void FUN_1012ed16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1012ece4c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012ed19c; end: 1012ed26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ed19c(uint param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x000107c614f0();
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11039f428;
    lStack_60 = param_2;
    uStack_58 = param_3;
    func_0x000107c60bc4(&puStack_80);
    uVar1 = uStack_58;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar1);
    puVar3 = (undefined1 *)ppuVar2;
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dismissViewControllerAnimated_co_1125bec68,
                      param_1 & 1,puVar3);
  func_0x000107c60bd0(puVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112d712e8) = 1;
  return;
}



/* Entry: 1012ed26c; end: 1012ed423; -[_TtC16SCComposerSendTo28ComposerSendToViewController dismissViewControllerAnimated:completion:] */

void FUN_1012ed26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_11039f460;
    func_0x000107c613fc(&UNK_11039f460,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x1012edbbc;
  }
  func_0x000107c61174(param_1);
  FUN_1012ed19c(param_3,uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012ed424; end: 1012ed537;  */

void FUN_1012ed424(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c61174();
  lVar1 = unaff_x20;
  func_0x000107c4f078();
  func_0x000107c61180();
  while (lVar1 != 0) {
    func_0x000107c61170(unaff_x20);
    lVar2 = lVar1;
    func_0x000107c4f078();
    func_0x000107c61180();
    unaff_x20 = lVar1;
    lVar1 = lVar2;
  }
  puVar3 = &UNK_11039f6b8;
  func_0x000107c613fc(&UNK_11039f6b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  pcStack_50 = FUN_1012ee78c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11039f6d0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c420a8(unaff_x20);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 1012ed538; end: 1012ed61b;  */

void FUN_1012ed538(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c61174();
    lVar2 = param_2;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar1 = param_2;
    while (lVar2 != 0) {
      func_0x000107c61170(lVar1);
      lVar3 = lVar2;
      func_0x000107c4f078();
      func_0x000107c61180();
      lVar1 = lVar2;
      lVar2 = lVar3;
    }
    func_0x000107c61170(param_2);
    func_0x000107c61428(param_3 + 0x10,auStack_60,1,0);
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = param_1;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_1);
    func_0x000107c4f018(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012ed61c; end: 1012ed763;  */

void FUN_1012ed61c(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61170();
      puVar3 = &UNK_11039f618;
      func_0x000107c613fc(&UNK_11039f618,0x28,7);
      *(long *)(puVar3 + 0x10) = param_3;
      *(code **)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0x20) = param_2;
      uStack_68 = 0x1012ee770;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11039f630;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_60;
      func_0x000107c6157c(param_3);
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c420a8(lVar1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar1);
      return;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_3 + 0x10,&puStack_88,1,0);
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = 0;
  func_0x000107c61170(uVar5);
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1012ed764; end: 1012ed7bf;  */

void FUN_1012ed764(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1012ed7c0; end: 1012ed99f;  */

void FUN_1012ed7c0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  apuStack_88[0] = (undefined *)0x0;
  func_0x000107c5fc50(*param_2,apuStack_88,PTR___sSSN_11034da80);
  puVar5 = apuStack_88[0];
  if (apuStack_88[0] == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    lVar7 = *(long *)(apuStack_88[0] + 0x10);
    if (lVar7 == 0) {
      func_0x000107c6142c(apuStack_88[0]);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100c077e4(0,lVar7,0);
      puVar8 = (undefined8 *)(puVar5 + 0x28);
      puVar6 = puStack_68;
      do {
        uVar4 = puVar8[-1];
        uVar2 = *puVar8;
        puVar3 = PTR_PTR_1126c52b8;
        func_0x000107c610f8();
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(uVar4,uVar2);
        func_0x000107c46d30();
        func_0x000107c61170(uVar4);
        uVar4 = 0;
        func_0x0001012ee7b4(0,0x112d70fc0,&PTR_PTR_1126c52b8);
        uStack_70 = uVar4;
        func_0x000107c6142c(uVar2);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        apuStack_88[0] = puVar3;
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        puVar6 = puStack_68;
        puVar8 = puVar8 + 2;
        *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
        func_0x000100102924(apuStack_88,puStack_68 + uVar1 * 0x20 + 0x20);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      func_0x000107c6142c(puVar5);
    }
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar3 = puVar6;
    func_0x000107c5fc48(puVar6,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar6);
    func_0x000107c45788();
    func_0x000107c61170(puVar3);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 1012ed9a0; end: 1012ed9eb; -[_TtC16SCComposerSendTo28ComposerSendToViewController initWithNibName:bundle:] */

void FUN_1012ed9a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerSendTo.ComposerSendToViewController",0x2d,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012ed9cc);
  (*pcVar1)();
}



/* Entry: 1012ed9ec; end: 1012ed9f3; -[_TtC16SCComposerSendTo28ComposerSendToViewController cardTransitionShouldBeginWithView:touchLocation:] */

undefined8 FUN_1012ed9ec(void)

{
  return 1;
}



/* Entry: 1012ed9f4; end: 1012ed9f7; -[_TtC16SCComposerSendTo28ComposerSendToViewController cardToExpandTransition] */

void FUN_1012ed9f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1012ed9f8; end: 1012eda83; -[_TtC16SCComposerSendTo28ComposerSendToViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ed9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_dismissViewControllerAnimated_co_1125bec68;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,1,0);
  *(undefined1 *)(param_1 + _DAT_112d712e8) = 1;
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1012eda84; end: 1012edac7; -[_TtC16SCComposerSendTo28ComposerSendToViewController defaultProjectNameV3] */

void FUN_1012eda84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001040703c0();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1012edac8; end: 1012edaf3; -[_TtC16SCComposerSendTo28ComposerSendToViewController jiraMetaInfo] */

void FUN_1012edac8(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef35150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012edaf4; end: 1012edafb; -[_TtC16SCComposerSendTo28ComposerSendToViewController pageViewName] */

undefined8 FUN_1012edaf4(void)

{
  return 0x109;
}



/* Entry: 1012edafc; end: 1012edb03; -[_TtC16SCComposerSendTo28ComposerSendToViewController handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_1012edafc(void)

{
  return 0;
}



/* Entry: 1012edb04; end: 1012edb87; -[_TtC16SCComposerSendTo28ComposerSendToViewController shareSheetDismissedWithShareDestination:] */

/* WARNING: Possible PIC construction at 0x0001012edb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012edb5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012edb44) */
/* WARNING: Removing unreachable block (ram,0x0001012edb60) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012edb04(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1012edb88; end: 1012edb8f; -[_TtC16SCComposerSendTo28ComposerSendToViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_1012edb88(void)

{
  return 1;
}



/* Entry: 1012edb90; end: 1012edb97; -[_TtC16SCComposerSendTo28ComposerSendToViewController scrollViewForTray:] */

void FUN_1012edb90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1012edb98; end: 1012edbc7; -[_TtC16SCComposerSendTo28ComposerSendToViewController trayCanExpandWhenScrollAtBottom:] */

undefined8 FUN_1012edb98(void)

{
  return 0;
}



/* Entry: 1012edbc8; end: 1012ee71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1012edbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                    undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                    undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                    undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                    undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                    undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                    undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                    undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                    undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                    undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                    undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                    undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                    undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                    undefined8 param_69,long param_70)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_78;
  long lStack_70;
  
  lVar5 = param_70;
  func_0x000107c610f8();
  lVar4 = _DAT_112d710f0;
  func_0x000107c61614(lVar5 + _DAT_112d710f0,0);
  lVar1 = lVar5 + _DAT_112d71270;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(lVar5 + _DAT_112d712e8) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d710c8) = param_1;
  *(undefined8 *)(lVar5 + _DAT_112d710d0) = param_2;
  *(undefined8 *)(lVar5 + _DAT_112d710d8) = param_3;
  *(undefined8 *)(lVar5 + _DAT_112d710e0) = param_4;
  *(undefined8 *)(lVar5 + _DAT_112d710e8) = param_5;
  func_0x000107c61604(lVar5 + lVar4,param_6);
  *(undefined8 *)(lVar5 + _DAT_112d710f8) = param_8;
  *(undefined8 *)(lVar5 + _DAT_112d71100) = param_9;
  *(undefined8 *)(lVar5 + _DAT_112d71198) = param_7;
  *(undefined8 *)(lVar5 + _DAT_112d71108) = param_10;
  *(undefined8 *)(lVar5 + _DAT_112d71110) = param_11;
  *(undefined8 *)(lVar5 + _DAT_112d71118) = param_12;
  *(undefined8 *)(lVar5 + _DAT_112d71120) = param_13;
  *(undefined8 *)(lVar5 + _DAT_112d71128) = param_14;
  *(undefined8 *)(lVar5 + _DAT_112d71130) = param_15;
  *(undefined8 *)(lVar5 + _DAT_112d71138) = param_16;
  *(undefined8 *)(lVar5 + _DAT_112d71140) = param_17;
  *(undefined8 *)(lVar5 + _DAT_112d71148) = param_18;
  *(undefined8 *)(lVar5 + _DAT_112d71150) = param_19;
  *(undefined8 *)(lVar5 + _DAT_112d71158) = param_20;
  *(undefined8 *)(lVar5 + _DAT_112d71160) = param_21;
  *(undefined8 *)(lVar5 + _DAT_112d71168) = param_22;
  *(undefined8 *)(lVar5 + _DAT_112d71170) = param_23;
  *(undefined8 *)(lVar5 + _DAT_112d71178) = param_24;
  *(undefined8 *)(lVar5 + _DAT_112d71180) = param_25;
  *(undefined8 *)(lVar5 + _DAT_112d71188) = param_26;
  *(undefined8 *)(lVar5 + _DAT_112d71190) = param_27;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112d711a0);
  *puVar2 = param_28;
  puVar2[1] = param_29;
  *(undefined8 *)(lVar5 + _DAT_112d711a8) = param_30;
  *(undefined8 *)(lVar5 + _DAT_112d711b0) = param_31;
  *(undefined8 *)(lVar5 + _DAT_112d711b8) = param_32;
  *(undefined8 *)(lVar5 + _DAT_112d711d0) = param_35;
  *(undefined8 *)(lVar5 + _DAT_112d711c8) = param_34;
  *(undefined8 *)(lVar5 + _DAT_112d711c0) = param_33;
  *(undefined8 *)(lVar5 + _DAT_112d711d8) = param_36;
  *(undefined8 *)(lVar5 + _DAT_112d711e0) = param_37;
  *(undefined8 *)(lVar5 + _DAT_112d711e8) = param_38;
  *(undefined8 *)(lVar5 + _DAT_112d711f0) = param_39;
  *(undefined8 *)(lVar5 + _DAT_112d711f8) = param_40;
  *(undefined8 *)(lVar5 + _DAT_112d71200) = param_41;
  *(undefined8 *)(lVar5 + _DAT_112d71208) = param_42;
  *(undefined8 *)(lVar5 + _DAT_112d71210) = param_43;
  func_0x000107c615f0();
  func_0x000107c615f0(param_27);
  func_0x000107c615f0(param_28);
  func_0x000107c61174();
  func_0x000107c615f0(param_31);
  func_0x000107c61174();
  func_0x000107c615f0(param_35);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_7);
  func_0x000107c615f0(param_10);
  func_0x000107c61174();
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  func_0x000107c615f0(param_15);
  func_0x000107c615f0(param_16);
  func_0x000107c615f0(param_17);
  func_0x000107c615f0(param_18);
  func_0x000107c615f0(param_19);
  func_0x000107c615f0(param_20);
  func_0x000107c615f0(param_21);
  func_0x000107c615f0(param_22);
  func_0x000107c615f0(param_23);
  func_0x000107c6157c(param_24);
  uVar7 = param_25;
  func_0x000107c615f0();
  func_0x000107c30a3c();
  func_0x000107c61180();
  *(undefined8 *)(lVar5 + _DAT_112d712e0) = uVar7;
  *(undefined8 *)(lVar5 + _DAT_112d71218) = param_44;
  *(undefined8 *)(lVar5 + _DAT_112d71220) = param_45;
  *(undefined8 *)(lVar5 + _DAT_112d71228) = param_46;
  *(undefined8 *)(lVar5 + _DAT_112d71230) = param_47;
  *(undefined8 *)(lVar5 + _DAT_112d71238) = param_48;
  *(undefined8 *)(lVar5 + _DAT_112d71240) = param_49;
  *(undefined8 *)(lVar5 + _DAT_112d71248) = param_50;
  *(undefined8 *)(lVar5 + _DAT_112d71250) = param_51;
  *(undefined8 *)(lVar5 + _DAT_112d71258) = param_52;
  *(undefined8 *)(lVar5 + _DAT_112d71260) = param_53;
  *(undefined8 *)(lVar5 + _DAT_112d71278) = param_54;
  *(undefined8 *)(lVar1 + 8) = param_56;
  func_0x000107c61604(lVar1,param_55);
  *(undefined8 *)(lVar5 + _DAT_112d71280) = param_57;
  *(undefined8 *)(lVar5 + _DAT_112d71268) = param_58;
  *(undefined8 *)(lVar5 + _DAT_112d71288) = param_59;
  *(undefined8 *)(lVar5 + _DAT_112d71290) = param_60;
  *(undefined8 *)(lVar5 + _DAT_112d712a0) = param_61;
  *(undefined8 *)(lVar5 + _DAT_112d712a8) = param_62;
  *(undefined8 *)(lVar5 + _DAT_112d712b0) = param_63;
  *(undefined8 *)(lVar5 + _DAT_112d71298) = param_64;
  *(undefined8 *)(lVar5 + _DAT_112d712b8) = param_65;
  *(undefined8 *)(lVar5 + _DAT_112d712c0) = param_66;
  *(undefined8 *)(lVar5 + _DAT_112d712c8) = param_67;
  *(undefined8 *)(lVar5 + _DAT_112d712d0) = param_68;
  *(undefined8 *)(lVar5 + _DAT_112d712d8) = param_69;
  puVar3 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = param_70;
  lStack_78 = lVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_57);
  func_0x000107c61174();
  func_0x000107c615f0(param_59);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_63);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_69);
  plVar6 = &lStack_78;
  func_0x000107c61154(plVar6,puVar3,0,0);
  uVar7 = *(undefined8 *)((long)plVar6 + _DAT_112d712e0);
  func_0x000107c61174();
  func_0x000107c53224(uVar7);
  func_0x000107c5a048(plVar6);
  func_0x000107c5677c(plVar6);
  func_0x000107c61170(plVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c615e8(param_14);
  func_0x000107c615e8(param_15);
  func_0x000107c615e8(param_16);
  func_0x000107c615e8(param_17);
  func_0x000107c615e8(param_18);
  func_0x000107c615e8(param_19);
  func_0x000107c615e8(param_20);
  func_0x000107c615e8(param_21);
  func_0x000107c615e8(param_22);
  func_0x000107c615e8(param_23);
  func_0x000107c61574(param_24);
  func_0x000107c615e8(param_25);
  func_0x000107c615e8(param_26);
  func_0x000107c615e8(param_27);
  func_0x000107c615e8(param_28);
  func_0x000107c61170(param_30);
  func_0x000107c615e8(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_34);
  func_0x000107c615e8(param_35);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_54);
  func_0x000107c615e8(param_55);
  func_0x000107c61574(param_57);
  func_0x000107c61170(param_58);
  func_0x000107c615e8(param_59);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_61);
  func_0x000107c61170(param_62);
  func_0x000107c61574(param_63);
  func_0x000107c61170(param_64);
  func_0x000107c61170(param_65);
  func_0x000107c61170(param_66);
  func_0x000107c61170(param_67);
  func_0x000107c61170(param_68);
  func_0x000107c615e8(param_69);
  return plVar6;
}



/* Entry: 1012ee71c; end: 1012ee723;  */

long FUN_1012ee71c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar4 = lVar1;
    while (lVar2 != 0) {
      func_0x000107c61170(lVar4);
      lVar3 = lVar2;
      func_0x000107c4f078();
      func_0x000107c61180();
      lVar4 = lVar2;
      lVar2 = lVar3;
    }
    func_0x000107c61170(lVar1);
  }
  return lVar4;
}


