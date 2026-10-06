/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ab8b84; end: 102ab8b9b;  */

/* WARNING: Possible PIC construction at 0x000102ab34f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ab34f8) */

undefined8 FUN_102ab8b84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  if (*(byte *)(param_1 + 6) >> 5 == 6 || *(byte *)(param_1 + 6) >> 5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
              (uVar1,param_1[1],param_1[2],uVar1,param_1[4],param_1[5]);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 102ab8b9c; end: 102ab8c9f;  */

undefined8 * FUN_102ab8b9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_102ab3218(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 102ab8ca0; end: 102ab8cf3;  */

undefined8 * FUN_102ab8ca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_102ab34d0(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 102ab8cf4; end: 102ab8df3;  */

int FUN_102ab8cf4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x79 < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x7a;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 0xc) >> 5) | (*(byte *)(param_1 + 0xc) >> 1 & 0xf) << 3) ^
          0x7f;
  if (0x78 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102ab8df4; end: 102ab92df;  */

long FUN_102ab8df4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102ab92e0; end: 102ab933b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab92e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee8f38);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ab933c; end: 102ab939b; -[SCWidgetEventServices init] */

void FUN_102ab933c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WidgetEventServices.WidgetEventServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ab9368);
  (*pcVar1)();
}



/* Entry: 102ab939c; end: 102ab93ab; -[SCWidgetEventServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ab939c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ee8f38));
  return;
}



/* Entry: 102ab93ac; end: 102ab93eb; -[_TtC37GenerativeAILensRemoteApiServicesImpl28GenerativeAILensDataProvider aiLensMetaData] */

void FUN_102ab93ac(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 102ab93ec; end: 102ab9447; -[_TtC37GenerativeAILensRemoteApiServicesImpl28GenerativeAILensDataProvider setAiLensMetaData:] */

void FUN_102ab93ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102ab9448; end: 102ab944f; -[_TtC37GenerativeAILensRemoteApiServicesImpl28GenerativeAILensDataProvider aiLensMetaDataObservable] */

void FUN_102ab9448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 102ab9450; end: 102ab949f; -[_TtC37GenerativeAILensRemoteApiServicesImpl28GenerativeAILensDataProvider aiModeSession] */

void FUN_102ab9450(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_28);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 102ab94a0; end: 102ab9527; -[_TtC37GenerativeAILensRemoteApiServicesImpl28GenerativeAILensDataProvider setAiModeSession:] */

void FUN_102ab94a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_102aba234,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 102ab9528; end: 102ab956b;  */

void FUN_102ab9528(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 102ab956c; end: 102ab95e3;  */

undefined8 FUN_102ab956c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001008e3a10(param_1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102ab95e4; end: 102ab96b7;  */

void FUN_102ab95e4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 auStack_58 [24];
  
  plVar4 = (long *)*param_1;
  puVar3 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  plVar1 = plVar4;
  func_0x000107c428b4();
  func_0x000107c61180();
  plVar2 = plVar1;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x0001044952bc();
  if (plVar2 == (long *)*plVar1 && puVar3 == (undefined1 *)plVar1[1]) {
    func_0x000107c6142c(puVar3);
  }
  else {
    func_0x000107c605b8(plVar2,puVar3,(long *)*plVar1,(undefined1 *)plVar1[1],0);
    func_0x000107c6142c(puVar3);
    if (((ulong)plVar2 & 1) == 0) goto LAB_102ab9698;
  }
  FUN_102ab96b8(plVar4);
LAB_102ab9698:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 102ab96b8; end: 102aba05b;  */

/* WARNING: Possible PIC construction at 0x000102ab9c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab9da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab9db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab9ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab9fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab9ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab9e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab9e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab9be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aba018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab9a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ab998c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aba01c) */
/* WARNING: Removing unreachable block (ram,0x000102aba03c) */
/* WARNING: Removing unreachable block (ram,0x000102ab9bec) */
/* WARNING: Removing unreachable block (ram,0x000102ab9c14) */
/* WARNING: Removing unreachable block (ram,0x000102ab9ff4) */
/* WARNING: Removing unreachable block (ram,0x000102ab9fd4) */
/* WARNING: Removing unreachable block (ram,0x000102ab9db8) */
/* WARNING: Removing unreachable block (ram,0x000102ab9da4) */
/* WARNING: Removing unreachable block (ram,0x000102ab9c78) */
/* WARNING: Removing unreachable block (ram,0x000102ab9dbc) */
/* WARNING: Removing unreachable block (ram,0x000102ab9c8c) */
/* WARNING: Removing unreachable block (ram,0x000102ab9dd0) */
/* WARNING: Removing unreachable block (ram,0x000102ab9d00) */
/* WARNING: Removing unreachable block (ram,0x000102ab9e10) */
/* WARNING: Removing unreachable block (ram,0x000102ab9e3c) */
/* WARNING: Removing unreachable block (ram,0x000102ab9e44) */
/* WARNING: Removing unreachable block (ram,0x000102ab9ebc) */
/* WARNING: Removing unreachable block (ram,0x000102ab9ed8) */
/* WARNING: Removing unreachable block (ram,0x000102ab9e84) */
/* WARNING: Removing unreachable block (ram,0x000102ab9ec8) */
/* WARNING: Removing unreachable block (ram,0x000102ab9ea4) */
/* WARNING: Removing unreachable block (ram,0x000102ab9ed0) */
/* WARNING: Removing unreachable block (ram,0x000102ab9d50) */
/* WARNING: Removing unreachable block (ram,0x000102ab9e28) */
/* WARNING: Removing unreachable block (ram,0x000102ab9d5c) */
/* WARNING: Removing unreachable block (ram,0x000102ab9e20) */
/* WARNING: Removing unreachable block (ram,0x000102ab9d88) */
/* WARNING: Removing unreachable block (ram,0x000102ab9990) */
/* WARNING: Removing unreachable block (ram,0x000102ab99a8) */

void FUN_102ab96b8(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x12;
  ulong unaff_x20;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  long alStack_250 [2];
  undefined1 auStack_240 [8];
  long lStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  ulong uStack_208;
  long lStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(uVar5 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  puVar16 = auStack_240 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar16 - extraout_x12;
  uVar14 = param_1;
  func_0x000107c4e33c();
  func_0x000107c61180();
  uVar8 = uVar14;
  func_0x000107c5f9e8();
  func_0x000107c61170(uVar14);
  if (*(long *)(uVar8 + 0x10) == 0) {
    uVar14 = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto code_r0x000107c6142c;
  }
  else {
    func_0x000107c61434(uVar8);
    lVar6 = 0x496c65646f4d6c6d;
    uVar14 = 0;
    func_0x000100029284();
    if ((uVar14 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(uVar8 + 0x38) + lVar6 * 0x10);
      uVar2 = *puVar1;
      uVar14 = puVar1[1];
      func_0x000107c61434(uVar14);
      func_0x000107c61430(uVar8,2);
      uVar11 = param_1;
      func_0x000107c4e33c();
      func_0x000107c61180();
      uVar8 = uVar11;
      func_0x000107c5f9e8();
      func_0x000107c61170(uVar11);
      if (*(long *)(uVar8 + 0x10) == 0) {
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar14);
        return;
      }
      func_0x000107c61434(uVar8);
      lVar6 = 0x6574616c706d6574;
      uVar11 = 0xea00000000006449;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
        puVar1 = (undefined8 *)(*(long *)(uVar8 + 0x38) + lVar6 * 0x10);
        uStack_1a0 = *puVar1;
        uVar3 = puVar1[1];
        func_0x000107c61434(uVar3);
        func_0x000107c61430(uVar8,2);
        uVar8 = param_1;
        func_0x000107c4b678();
        func_0x000107c61180();
        if (uVar8 != 0) {
          uVar11 = 0;
          uStack_1c0 = uVar2;
          uStack_1a8 = uVar3;
          FUN_102a4cf50();
          uVar7 = uVar8;
          func_0x000107c5fc54();
          func_0x000107c61170(uVar8);
          if (uVar7 >> 0x3e == 0) {
            uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar8 = uVar7 & 0xffffffffffffff8;
            if ((uVar7 & 0x8000000000000000) != 0) {
              uVar8 = uVar7;
            }
            func_0x000107c60480();
          }
          if (1 < (long)uVar8) {
            uStack_1c8 = uVar14;
            uStack_198 = uVar7 >> 0x3e;
            func_0x000107c4b1dc();
            func_0x000107c61180();
            uVar14 = param_1;
            func_0x000107c5faec();
            uStack_1d8 = uVar11;
            func_0x000107c61170(param_1);
            uStack_1d0 = uVar14;
            if ((uVar7 & 0xc000000000000001) == 0) {
              if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102aba058);
                (*pcVar4)();
              }
              lVar12 = *(long *)(uVar7 + 0x20);
              func_0x000107c61174();
            }
            else {
              lVar12 = 0;
              uVar11 = uVar7;
              func_0x00010101b75c();
            }
            lVar6 = lVar12;
            func_0x000107c5d7e8();
            func_0x000107c61180();
            func_0x000107c5edb4(lVar15);
            func_0x000107c61170();
            func_0x000107c5ed70();
            pcStack_210 = *(code **)(lVar17 + 8);
            uVar8 = uVar5;
            lStack_200 = lVar6;
            uStack_1e8 = uVar11;
            (*pcStack_210)(lVar15);
            lStack_1e0 = lVar12;
            func_0x000107c4a8c4();
            func_0x000107c61180();
            if (lVar12 == 0) {
              uStack_1f8 = 0xf000000000000000;
              lStack_1f0 = 0;
            }
            else {
              lVar15 = lVar12;
              func_0x000107c5ee30();
              uStack_1f8 = uVar8;
              lStack_1f0 = lVar15;
              func_0x000107c61170(lVar12);
            }
            if (uStack_198 == 0) {
              uStack_198 = uVar7 & 0xffffffffffffff8;
              uVar11 = *(ulong *)(uStack_198 + 0x10);
            }
            else {
              uStack_198 = uVar7 & 0xffffffffffffff8;
              uVar11 = uStack_198;
              if ((uVar7 & 0x8000000000000000) != 0) {
                uVar11 = uVar7;
              }
              func_0x000107c60480();
            }
            uVar14 = uVar7;
            if (uVar11 == 0) {
              puStack_1b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            else {
              puStack_1b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
              uStack_218 = 0xf000000000000000;
              uStack_220 = 0;
              uVar13 = 0;
              do {
                if ((uVar7 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uStack_198 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x102aba000);
                    (*pcVar4)();
                  }
                  uVar9 = *(ulong *)(uVar7 + uVar13 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  uVar9 = uVar13;
                  uVar8 = uVar7;
                  func_0x00010101b75c();
                }
                if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102ab9ffc);
                  (*pcVar4)();
                }
                if (uVar13 != 0) {
                  uVar14 = uVar9;
                  func_0x000107c5d7e8();
                  func_0x000107c61180();
                  func_0x000107c5edb4(puVar16);
                  func_0x000107c61170();
                  func_0x000107c5ed70();
                  uStack_228 = uVar14;
                  uStack_208 = uVar8;
                  (*pcStack_210)(puVar16);
                  func_0x000107c4a8c4();
                  func_0x000107c61180();
                  if (uVar9 == 0) {
                    uVar14 = 0;
                    uStack_1b8 = 0xf000000000000000;
                  }
                  else {
                    uVar14 = uVar9;
                    func_0x000107c5ee30();
                    uStack_1b8 = uVar5;
                    func_0x000107c61170(uVar9);
                  }
                  func_0x000107c61434(uStack_208);
                  func_0x000100de78a0(uVar14,uStack_1b8);
                  func_0x000100de78a0(0,0xf000000000000000);
                  puVar10 = puStack_1b0;
                  func_0x000107c61558();
                  uStack_230 = uVar14;
                  if (((ulong)puVar10 & 1) == 0) {
                    puVar10 = (undefined *)0x0;
                    FUN_102aba0a0(0,*(long *)(puStack_1b0 + 0x10) + 1,1);
                    puStack_1b0 = puVar10;
                  }
                  uVar14 = *(ulong *)(puStack_1b0 + 0x10);
                  lVar12 = uVar14 + 1;
                  if (*(ulong *)(puStack_1b0 + 0x18) >> 1 <= uVar14) {
                    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_1b0 + 0x18));
                    lStack_238 = lVar12;
                    FUN_102aba0a0(puVar10,lVar12,1,puStack_1b0);
                    lVar12 = lStack_238;
                    puStack_1b0 = puVar10;
                  }
                  *(long *)(puStack_1b0 + 0x10) = lVar12;
                  *(ulong *)(puStack_1b0 + uVar14 * 0x30 + 0x20) = uStack_228;
                  *(ulong *)(puStack_1b0 + uVar14 * 0x30 + 0x28) = uStack_208;
                  *(ulong *)(puStack_1b0 + uVar14 * 0x30 + 0x30) = uStack_230;
                  *(ulong *)(puStack_1b0 + uVar14 * 0x30 + 0x38) = uStack_1b8;
                  *(undefined8 *)(puStack_1b0 + uVar14 * 0x30 + 0x48) = uStack_218;
                  *(undefined8 *)(puStack_1b0 + uVar14 * 0x30 + 0x40) = uStack_220;
                  uVar14 = uStack_208;
                  break;
                }
                func_0x000107c61170(uVar9);
                uVar13 = 1;
              } while (uVar11 != 1);
            }
          }
        }
        goto code_r0x000107c6142c;
      }
      func_0x000107c6142c(uVar14);
    }
    func_0x000107c61430(uVar8,2);
    unaff_x20 = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      return;
    }
  }
  func_0x000107c60e78();
  *(undefined1 **)(lVar15 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar15 + -8) = FUN_102aba05c;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0x38,7);
  return;
}



/* Entry: 102aba05c; end: 102aba09f;  */

void FUN_102aba05c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102aba0a0; end: 102aba1bb;  */

undefined * FUN_102aba0a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102aba1bc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112ee9030;
    func_0x0001000285a8(0x112ee9030,&UNK_10dd08d30);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110779788);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102aba1bc; end: 102aba1c3;  */

void FUN_102aba1bc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  plVar5 = (long *)*param_1;
  puVar4 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar4,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  plVar2 = plVar5;
  func_0x000107c428b4();
  func_0x000107c61180();
  plVar3 = plVar2;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x0001044952bc();
  if (plVar3 == (long *)*plVar2 && puVar4 == (undefined1 *)plVar2[1]) {
    func_0x000107c6142c(puVar4);
  }
  else {
    func_0x000107c605b8(plVar3,puVar4,(long *)*plVar2,(undefined1 *)plVar2[1],0);
    func_0x000107c6142c(puVar4);
    if (((ulong)plVar3 & 1) == 0) goto LAB_102ab9698;
  }
  FUN_102ab96b8(plVar5);
LAB_102ab9698:
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102aba1c4; end: 102aba233;  */

undefined8 FUN_102aba1c4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104495ca4)(param_2,param_1);
  return param_2;
}



/* Entry: 102aba234; end: 102aba247;  */

void FUN_102aba234(void)

{
  FUN_102ab9528();
  return;
}



/* Entry: 102aba248; end: 102aba2d3;  */

long FUN_102aba248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  uVar2 = param_2;
  func_0x000107c3dd34();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 102aba2d4; end: 102aba3fb;  */

void FUN_102aba2d4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plStack_60;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  plVar1 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  plVar2 = plVar1;
  func_0x000107c428b4();
  func_0x000107c61180();
  func_0x000107c61170(plVar1);
  plVar1 = plVar2;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x0001044952bc();
  if ((plVar1 == (long *)*plVar2) && (puVar3 == (undefined1 *)plVar2[1])) {
    func_0x000107c6142c(puVar3);
  }
  else {
    func_0x000107c605b8(plVar1,puVar3,(long *)*plVar2,(undefined1 *)plVar2[1],0);
    func_0x000107c6142c(puVar3);
    if (((ulong)plVar1 & 1) == 0) goto LAB_102aba3dc;
  }
  func_0x0001008e396c();
  func_0x000107c50300();
  func_0x000107c61180();
  plStack_60 = param_1;
  func_0x000100087c34(&plStack_60);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar3);
LAB_102aba3dc:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 102aba3fc; end: 102aba403;  */

void FUN_102aba3fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long *plStack_60;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar4,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  plVar2 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  plVar3 = plVar2;
  func_0x000107c428b4();
  func_0x000107c61180();
  func_0x000107c61170(plVar2);
  plVar2 = plVar3;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x0001044952bc();
  if ((plVar2 == (long *)*plVar3) && (puVar4 == (undefined1 *)plVar3[1])) {
    func_0x000107c6142c(puVar4);
  }
  else {
    func_0x000107c605b8(plVar2,puVar4,(long *)*plVar3,(undefined1 *)plVar3[1],0);
    func_0x000107c6142c(puVar4);
    if (((ulong)plVar2 & 1) == 0) goto LAB_102aba3dc;
  }
  func_0x0001008e396c();
  func_0x000107c50300();
  func_0x000107c61180();
  plStack_60 = param_1;
  func_0x000100087c34(&plStack_60);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar4);
LAB_102aba3dc:
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102aba404; end: 102aba42f;  */

void FUN_102aba404(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102aba430; end: 102aba4af;  */

void FUN_102aba430(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102aba4b0; end: 102aba4b3;  */

void FUN_102aba4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102aba4b4; end: 102aba4e7;  */

void FUN_102aba4b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102aba4e8; end: 102aba503;  */

void FUN_102aba4e8(void)

{
  long unaff_x20;
  
  func_0x000107c4f174(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102aba504; end: 102aba53b;  */

void FUN_102aba504(long param_1)

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



/* Entry: 102aba53c; end: 102aba54b;  */

void FUN_102aba53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102aba54c; end: 102aba56f;  */

void FUN_102aba54c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102aba570; end: 102aba667;  */

void FUN_102aba570(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_110593ed8;
  func_0x000107c613fc(&UNK_110593ed8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  uStack_50 = 0x102aba670;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102aba504;
  puStack_58 = &UNK_110593ef0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x0001005c7120(0);
  func_0x000107c610f8();
  func_0x0001006e29f4(puVar1,uVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 102aba668; end: 102aba673;  */

void FUN_102aba668(long param_1,long param_2)

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



/* Entry: 102aba674; end: 102aba70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102aba674(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112ee91e8) = lVar1;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112ee91f0) = lVar1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar2;
}



/* Entry: 102aba710; end: 102aba71f; -[_TtC28SCBitmojiLensContextServices28SCBitmojiLensContextServices avatarProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aba710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee91e8));
  return;
}



/* Entry: 102aba720; end: 102aba72f; -[_TtC28SCBitmojiLensContextServices28SCBitmojiLensContextServices contextConfigurer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aba720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee91f0));
  return;
}



/* Entry: 102aba730; end: 102aba78f; -[_TtC28SCBitmojiLensContextServices28SCBitmojiLensContextServices init] */

void FUN_102aba730(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiLensContextServices.SCBitmojiLensContextServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aba75c);
  (*pcVar1)();
}



/* Entry: 102aba790; end: 102aba79f;  */

undefined1  [16] FUN_102aba790(void)

{
  return ZEXT816(0x110594010);
}



/* Entry: 102aba7a0; end: 102aba7d7; -[_TtC28SCBitmojiLensContextServices28SCBitmojiLensContextServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102aba7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aba7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aba7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee91e8));
  return;
}



/* Entry: 102aba7d8; end: 102aba7f7; -[_TtC20StoryAutoSavingScope20StoryAutoSavingScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aba7d8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ee9220));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102aba7f8; end: 102aba83f; -[_TtC20StoryAutoSavingScope20StoryAutoSavingScope publicStoryBusinessIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aba7f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ee9228);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102aba840; end: 102aba8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aba840(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ee9220) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee9228) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aba8a4; end: 102aba927; -[_TtC20StoryAutoSavingScope20StoryAutoSavingScope initWithUiContainer:publicStoryBusinessIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aba8a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  *(undefined8 *)(param_1 + _DAT_112ee9220) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ee9228) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102aba928; end: 102aba95b;  */

void FUN_102aba928(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102aba95c; end: 102aba9eb; -[_TtC20StoryAutoSavingScope20StoryAutoSavingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aba95c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ee9220));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ee9228));
  return;
}



/* Entry: 102aba9ec; end: 102abaa6f;  */

void FUN_102aba9ec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102abaa70; end: 102abab2b; +[SCSnapEditorPreloadUtil preloadWithScopeExposer:snapEditorScopeServices:deckServices:snapDocEditorServices:parentViewController:] */

void FUN_102abaa70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar1 = param_3;
  FUN_102abacf8(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102abab2c; end: 102abab67; -[SCSnapEditorPreloadUtil init] */

void FUN_102abab2c(undefined8 param_1)

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



/* Entry: 102abab68; end: 102abab6b;  */

void FUN_102abab68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102abab6c; end: 102ababe7;  */

/* WARNING: Possible PIC construction at 0x000102ababbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ababc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abab6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c3fefc(*(undefined8 *)(unaff_x20 + _DAT_112ee9288),param_2,0);
  lVar1 = unaff_x20 + _DAT_112ee9280;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ee9290);
    *(undefined8 *)(unaff_x20 + _DAT_112ee9290) = 0;
  }
  else {
    func_0x000107c4ffe8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102ababe8; end: 102abac0f; -[_TtC21SnapEditorPreloadUtilP33_C5009E72A7FD4AF1E357C75FD741DF1415PreloadDelegate snapEditorViewDidLoad] */

void FUN_102ababe8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102abab6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102abac10; end: 102abac27; -[_TtC21SnapEditorPreloadUtilP33_C5009E72A7FD4AF1E357C75FD741DF1415PreloadDelegate snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abac10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ee9290);
  *(undefined8 *)(param_1 + _DAT_112ee9290) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102abac28; end: 102abac5b;  */

void FUN_102abac28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102abac5c; end: 102abacf7; -[_TtC21SnapEditorPreloadUtilP33_C5009E72A7FD4AF1E357C75FD741DF1415PreloadDelegate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102abac8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abacb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abacd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102abacb4) */
/* WARNING: Removing unreachable block (ram,0x000102abacc0) */
/* WARNING: Removing unreachable block (ram,0x000102abac90) */
/* WARNING: Removing unreachable block (ram,0x000102abacdc) */
/* WARNING: Removing unreachable block (ram,0x000102abacac) */
/* WARNING: Removing unreachable block (ram,0x000102abace4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abac5c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ee9280);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee9288));
  return;
}



/* Entry: 102abacf8; end: 102abb41f;  */

/* WARNING: Possible PIC construction at 0x000102abad94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abae60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abaedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abaef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abaf04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abaf2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abaf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abafd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abaff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abb004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abb020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abb044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abb138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abb314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abb33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102abb3c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102abb340) */
/* WARNING: Removing unreachable block (ram,0x000102abb318) */
/* WARNING: Removing unreachable block (ram,0x000102abb13c) */
/* WARNING: Removing unreachable block (ram,0x000102abb048) */
/* WARNING: Removing unreachable block (ram,0x000102abb058) */
/* WARNING: Removing unreachable block (ram,0x000102abb024) */
/* WARNING: Removing unreachable block (ram,0x000102abb3ac) */
/* WARNING: Removing unreachable block (ram,0x000102abb034) */
/* WARNING: Removing unreachable block (ram,0x000102abb008) */
/* WARNING: Removing unreachable block (ram,0x000102abaff8) */
/* WARNING: Removing unreachable block (ram,0x000102abafd4) */
/* WARNING: Removing unreachable block (ram,0x000102abaf50) */
/* WARNING: Removing unreachable block (ram,0x000102abaf30) */
/* WARNING: Removing unreachable block (ram,0x000102abaf08) */
/* WARNING: Removing unreachable block (ram,0x000102abaef4) */
/* WARNING: Removing unreachable block (ram,0x000102abaee0) */
/* WARNING: Removing unreachable block (ram,0x000102abae64) */
/* WARNING: Removing unreachable block (ram,0x000102abb41c) */
/* WARNING: Removing unreachable block (ram,0x000102abaea0) */
/* WARNING: Removing unreachable block (ram,0x000102abad98) */
/* WARNING: Removing unreachable block (ram,0x000102abade4) */
/* WARNING: Removing unreachable block (ram,0x000102abad9c) */
/* WARNING: Removing unreachable block (ram,0x000102abb3c8) */
/* WARNING: Removing unreachable block (ram,0x000102abb3f8) */

void FUN_102abacf8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c4a02c();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
  }
  else if ((bRam0000000113804e98 & 1) == 0) {
    func_0x000107c5194c(param_1);
  }
  else {
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102abb420; end: 102abb45f;  */

void FUN_102abb420(void)

{
  func_0x000107c61168(&PTR_PTR_112884de8);
  return;
}



/* Entry: 102abb460; end: 102abb47b;  */

void FUN_102abb460(long param_1,long param_2)

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



/* Entry: 102abb47c; end: 102abb4ff;  */

void FUN_102abb47c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = PTR_PTR_1126b25d0;
  func_0x000107c610f8(PTR_PTR_1126b25d0);
  func_0x000107c453e4();
  func_0x000107c563e8();
  func_0x000107c3d7f4(uVar2,param_3,puVar1,uVar3);
  func_0x000107c61180();
  uVar3 = 0;
  func_0x0001002ed07c();
  param_1[3] = uVar3;
  func_0x000107c61170(puVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102abb500; end: 102abb55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abb500(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ee9290);
    *(undefined8 *)(lVar1 + _DAT_112ee9290) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102abb55c; end: 102abb56f;  */

void FUN_102abb55c(long param_1,long param_2)

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



/* Entry: 102abb570; end: 102abb5bf; +[_TtC30SpotlightMemoriesApiExtensions34SpotlightMemoriesLoggingObjCBridge triggeringSectionFor:] */

undefined8 FUN_102abb570(undefined8 param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  
  if (param_3 < 3) {
    return *(undefined8 *)(&UNK_10db16548 + (ulong)param_3 * 8);
  }
  func_0x000101385594(0);
  func_0x000107c60614();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102abb5c0);
  (*pcVar1)();
}



/* Entry: 102abb5c0; end: 102abb5fb; -[_TtC30SpotlightMemoriesApiExtensions34SpotlightMemoriesLoggingObjCBridge init] */

void FUN_102abb5c0(undefined8 param_1)

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



/* Entry: 102abb5fc; end: 102abb64f;  */

void FUN_102abb5fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102abb650; end: 102abb767; -[SCSnapEditorBatchCaptureQuickCutPluginConfig onQuickCutResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abb650(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112ee92e8);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    uStack_68 = 0x102abb700;
    puStack_60 = &UNK_110594360;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102abb768; end: 102abb823; -[SCSnapEditorBatchCaptureQuickCutPluginConfig setOnQuickCutResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abb768(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_110594348;
    func_0x000107c613fc(&UNK_110594348,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_102abb8e8;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ee92e8);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  FUN_102abb824(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102abb824; end: 102abb833;  */

void FUN_102abb824(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102abb834; end: 102abb87f; -[SCSnapEditorBatchCaptureQuickCutPluginConfig init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abb834(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ee92e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102abb880; end: 102abb8b3;  */

void FUN_102abb880(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102abb8b4; end: 102abb8c7; -[SCSnapEditorBatchCaptureQuickCutPluginConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abb8b4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ee92e8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ee92e8))[1]);
    return;
  }
  return;
}



/* Entry: 102abb8c8; end: 102abb8e7;  */

void FUN_102abb8c8(void)

{
  func_0x000107c61168(&PTR_PTR_112885018);
  return;
}



/* Entry: 102abb8e8; end: 102abb917;  */

void FUN_102abb8e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102abb8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 102abb918; end: 102abb98f; +[SCCameraTooltipMaxSeenCountExperiment cameraTooltipMaxSeenCountWithCircumstanceEngine:] */

long FUN_102abb918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0e6840);
  uVar2 = param_3;
  func_0x000107c4980c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  return (long)(int)uVar2;
}



/* Entry: 102abb990; end: 102abb9af;  */

void FUN_102abb990(void)

{
  func_0x000107c61168(&PTR_PTR_1128850d0);
  return;
}



/* Entry: 102abb9b0; end: 102abb9eb; -[SCCameraTooltipMaxSeenCountExperiment init] */

void FUN_102abb9b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102abb990();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102abb9ec; end: 102abba1b;  */

void FUN_102abb9ec(void)

{
  FUN_102abb990();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102abba1c; end: 102abba7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abba1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ee9348) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee9350) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102abba80; end: 102abba9f;  */

void FUN_102abba80(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102abbaa0; end: 102abbaff; -[_TtC41CameraFeatureScopedFactoryServiceProvider29SCCameraFeatureScopedServices init] */

void FUN_102abbaa0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraFeatureScopedFactoryServiceProvider.SCCameraFeatureScopedServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102abbacc);
  (*pcVar1)();
}



/* Entry: 102abbb00; end: 102abbb37; -[_TtC41CameraFeatureScopedFactoryServiceProvider29SCCameraFeatureScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102abbb1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102abbb20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abbb00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee9350));
  return;
}



/* Entry: 102abbb38; end: 102abbba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102abbb38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105945e8;
  func_0x000107c613fc(&UNK_1105945e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102abbc2c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102abbba4; end: 102abbc03;  */

undefined1  [16] FUN_102abbba4(void)

{
  return ZEXT816(0x110594528);
}



/* Entry: 102abbc04; end: 102abbc2b;  */

void FUN_102abbc04(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102abbc2c; end: 102abbc5f;  */

void FUN_102abbc2c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102abbc60; end: 102abbd1f;  */

void FUN_102abbc60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x0001007d4420();
  func_0x000107c613fc();
  FUN_102abbd20(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 102abbd20; end: 102abbe0f;  */

void FUN_102abbd20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x0001000285a8(0x112e4cd28,&UNK_10daaf350);
  func_0x000107c610f8();
  uVar1 = param_2;
  func_0x000107c6157c(param_2);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x000102b3af68(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b3add0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  FUN_102b3adf8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  return;
}



/* Entry: 102abbe10; end: 102abbe43;  */

void FUN_102abbe10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102abbe44; end: 102abbe97;  */

void FUN_102abbe44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102abbe98; end: 102abbedb;  */

undefined1  [16] FUN_102abbe98(void)

{
  return ZEXT816(0x110594840);
}



/* Entry: 102abbedc; end: 102abbf2f;  */

void FUN_102abbedc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102abbf30; end: 102abbfbf;  */

long FUN_102abbf30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001007d6880(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x0001007d68a0(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102abbfc0; end: 102abbff3;  */

void FUN_102abbfc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102abbff4; end: 102abc03b;  */

undefined8 FUN_102abbff4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000103375828();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102abc03c; end: 102abc077;  */

undefined1  [16] FUN_102abc03c(void)

{
  return ZEXT816(0x1105948e0);
}



/* Entry: 102abc078; end: 102abc3c3;  */

long FUN_102abc078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126abeb8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc1b80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 102abc3c4; end: 102abc40f;  */

void FUN_102abc3c4(void)

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



/* Entry: 102abc410; end: 102abc45f;  */

undefined8 FUN_102abc410(void)

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



/* Entry: 102abc460; end: 102abc49b;  */

undefined1  [16] FUN_102abc460(void)

{
  return ZEXT816(0x110594960);
}



/* Entry: 102abc49c; end: 102abcb87;  */

void FUN_102abc49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126abec0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25a40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef38480);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f006f40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0e6de0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0e6e00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar4 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_11);
  func_0x000107c61174();
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03f020);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_12);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0e6e20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0e6e40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
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
    *(undefined **)(unaff_x20 + 0x78) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102abcb88);
  (*pcVar1)();
}


