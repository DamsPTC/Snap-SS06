/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b14b0c4; end: 10b14b23f;  */

void FUN_10b14b0c4(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  long *unaff_x20;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x25;
  
  func_0x00010b14fbc4();
  func_0x00010b14ec10();
  func_0x00010b14fde4(FUN_10b14d700);
  func_0x00010b14f5bc();
  func_0x00010b14ef78();
  plVar4 = (long *)*unaff_x20;
  func_0x00010b14fa64();
  bVar2 = *(byte *)(*unaff_x20 + 0x58);
  func_0x00010b14f4b4();
  if ((bVar2 & 1) == 0) {
    func_0x00010b14f118();
    func_0x00010b14f0e8();
    lVar6 = *plVar4;
    if ((*(byte *)(lVar6 + 0x58) & 1) == 0) {
      func_0x00010b1500dc();
      if ((bool)in_CY) {
        lVar5 = *(long *)(lVar6 + 0x60);
        func_0x00010b14ea1c();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b14b1e8:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b14b1ec);
          (*pcVar3)();
        }
        func_0x00010b14e8b4(extraout_x8 - lVar5);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b14b1e8;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b1500b8();
        if (lVar5 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = param_1;
        unaff_x25 = unaff_x25 + 1;
      }
      *(undefined8 **)(lVar6 + 0x68) = unaff_x25;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(bVar2);
      return;
    }
    func_0x00010b14f014();
    func_0x00010b14efec(*param_1);
  }
  else {
    func_0x00010b1506e0();
    FUN_10b14b240();
    func_0x00010b14f184();
    func_0x00010b14e930();
    if ((bool)in_ZR) {
      func_0x00010b14ec20();
      func_0x00010b14eb5c();
    }
    else {
      func_0x00010b14e960();
      func_0x00010b14eb68();
      func_0x00010b14f0a4();
    }
    func_0x00010b14f084();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b14b240; end: 10b14b27b;  */

long FUN_10b14b240(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    return param_1 + 0x40;
  }
  func_0x00010b14ed8c();
  func_0x00010b14f374();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b14b274);
  (*pcVar1)();
}



/* Entry: 10b14b27c; end: 10b14b2bb;  */

long FUN_10b14b27c(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  FUN_10b14b0c4(auStack_30);
  func_0x00010b14fafc();
  func_0x00010b14f24c();
  if ((*(byte *)(*param_1 + 0x50) & 1) != 0) {
    return *param_1 + 0x40;
  }
  func_0x00010b14ed8c();
  func_0x00010b14f374();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b14b274);
  (*pcVar1)();
}



/* Entry: 10b14b2bc; end: 10b14b2f7;  */

void FUN_10b14b2bc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10b14b2f8; end: 10b14b82f;  */

void FUN_10b14b2f8(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x9;
  long extraout_x10;
  long unaff_x21;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined auStack_2d0 [80];
  undefined1 *puStack_280;
  undefined8 uStack_278;
  byte bStack_228;
  
  func_0x00010b150784();
  puVar11 = auStack_2d0;
  func_0x00010b150520();
  puVar8 = (undefined8 *)0x4e8;
  __Znwm();
  *puVar8 = FUN_10b14d8d0;
  puVar8[1] = FUN_10b14dc8c;
  puVar8[0x9a] = unaff_x21;
  puVar1 = puVar8 + 0x7b;
  uVar13 = *param_2;
  puVar8[0x7c] = param_2[1];
  *puVar1 = uVar13;
  puVar8[0x7d] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(puVar8 + 0x7e) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)puVar8 + 0x4e1) = *param_3;
  puVar8[0x9b] = *(undefined8 *)(param_3 + 8);
  *(undefined1 *)((long)puVar8 + 0x4e2) = param_3[0x10];
  func_0x000107c27b7c(puVar8 + 0x7f,param_4);
  FUN_10b14be30(puVar8 + 2);
  FUN_10b14bde4(puVar8 + 2);
  func_0x00010b148b78(puVar8 + 0x98,*(undefined8 *)(unaff_x21 + 8),*(undefined8 *)(unaff_x21 + 0x10)
                     );
  __ZNSt3__115recursive_mutex4lockEv(*(undefined8 *)(unaff_x21 + 0x58));
  bVar3 = *(byte *)(*(long *)(unaff_x21 + 0x58) + 0x60);
  func_0x00010b14fcf4();
  if ((bVar3 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0x9c) = 0;
    lVar12 = puVar8[0x9a];
    uVar13 = *(undefined8 *)(lVar12 + 0x58);
    func_0x00010b14fa64();
    lVar12 = *(long *)(lVar12 + 0x58);
    if ((*(byte *)(lVar12 + 0x60) & 1) != 0) {
      func_0x00010b14f4b4();
      func_0x00010b14efec(*puVar8);
      return;
    }
    puVar9 = *(undefined8 **)(lVar12 + 0x70);
    uVar6 = *(undefined8 **)(lVar12 + 0x78) <= puVar9;
    if ((bool)uVar6) {
      lVar14 = *(long *)(lVar12 + 0x68);
      func_0x00010b14f990();
      if (extraout_x10 != 0) {
        func_0x00010552fc6c();
LAB_10b14b714:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10b14b718);
        (*pcVar4)();
      }
      func_0x00010b14e8b4(extraout_x8_00 - lVar14);
      uVar2 = extraout_x9;
      if ((bool)uVar6) {
        uVar2 = extraout_x8_01;
      }
      if (uVar2 != 0) {
        if (uVar2 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10b14b714;
        }
        __Znwm(uVar2 << 3);
      }
      func_0x00010b14ed34();
      *(undefined8 **)(lVar12 + 0x68) = puVar1;
      *(undefined8 **)(lVar12 + 0x70) = puVar9;
      *(ulong *)(lVar12 + 0x78) = uVar2;
      if (lVar14 != 0) {
        func_0x00010b150268();
      }
    }
    else {
      *puVar9 = puVar8;
      puVar9 = puVar9 + 1;
    }
    *(undefined8 **)(lVar12 + 0x70) = puVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar13);
    return;
  }
  lVar12 = puVar8[0x9a];
  lVar14 = *(long *)(lVar12 + 0x58);
  if ((*(byte *)(lVar14 + 0x58) & 1) == 0) {
    __ZNSt13exception_ptrC1ERKS_(puVar8 + 0x12,lVar14 + 0x40);
    __ZSt17rethrow_exceptionSt13exception_ptr(puVar8 + 0x12);
    goto LAB_10b14b714;
  }
  func_0x00010b14fc98(*(undefined1 *)(lVar14 + 0x57));
  if (extraout_x8 == 0) {
    func_0x00010b14eee0();
    puVar10 = &UNK_10f73076d;
    func_0x000105c3d6a8(puVar8 + 0x83);
    func_0x00010b14ee3c();
    uVar6 = *(char *)(puVar8 + 0x86) == '\x01';
    if ((bool)uVar6) {
      func_0x00010b14edbc();
    }
    func_0x00010b14f9c8();
    func_0x00010b14f468();
    func_0x00010b14f410();
    func_0x00010b14f4a0();
    goto LAB_10b14b60c;
  }
  func_0x00010b1501a4(puVar8 + 0x12,*(undefined8 *)(lVar12 + 0x2f8),puVar1,1);
  uVar6 = *(char *)(puVar8 + 0x1d) == '\x01';
  uVar5 = uVar6;
  if (((bool)uVar6) && (puVar8[0x1b] == 0)) {
    iVar7 = (int)puVar8 + 0x90;
    puVar10 = (undefined *)(lVar14 + 0x40);
    func_0x000107c278d0();
    if (iVar7 == 0) {
      puStack_280 = (undefined1 *)0x0;
      uStack_278 = 0;
      FUN_10b12157c(puVar8 + 0x4b,&puStack_280);
      func_0x00010b12186c(&puStack_280);
      puVar9 = puVar8 + 0x12;
      FUN_10b1f7128(*(undefined8 *)(lVar12 + 0x2f8),puVar9,*(undefined4 *)(puVar8 + 0x7e),puVar1,1);
      uVar5 = uVar6;
      if (((ulong)puVar9 & 1) != 0) goto LAB_10b14b524;
      func_0x00010b14eee0();
      puVar10 = &UNK_10f730788;
      func_0x000105c3d724(puVar8 + 0x87);
      func_0x00010b14ee3c();
      uVar6 = *(char *)(puVar8 + 0x8a) == '\x01';
      if ((bool)uVar6) {
        func_0x00010b14edbc();
      }
      func_0x00010b14f9c8();
      func_0x00010b14f468();
      func_0x00010b14f410();
      func_0x00010b14f4a0();
    }
    else {
      if (((*(byte *)((long)puVar8 + 0x4e1) & 1) != 0) &&
         (uVar5 = uVar6, (*(byte *)(puVar8 + 0x19) & 1) == 0)) goto LAB_10b14b524;
      func_0x00010b14ef30();
    }
  }
  else {
LAB_10b14b524:
    func_0x00010b1505f0();
    uVar6 = 0;
    if (((bool)uVar5) && (uVar6 = puVar8[0x7f] == puVar8[0x80], !(bool)uVar6)) {
      puVar9 = puVar8 + 0x61;
      func_0x00010b114b5c(puVar9);
      FUN_10b114b98();
      func_0x00010b1505c8();
      func_0x00010539283c(puVar9 + 2);
    }
    uVar13 = *(undefined8 *)(lVar12 + 0x2f8);
    FUN_10b202630(auStack_2d0,lVar14 + 0x40);
    *(undefined4 *)(puVar8 + 0x73) = *(undefined4 *)(puVar8 + 0x7e);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar8 + 0x74,puVar1);
    func_0x00010b14f2e0();
    func_0x00010b14fa50(&puStack_280,uVar13,auStack_2d0,puVar8 + 0x73);
    func_0x00010b121af0(&puStack_280);
    func_0x00010b14fca4();
    func_0x00010b14fcd8();
    func_0x00010b14f978();
    if ((bStack_228 & 1) == 0) {
      func_0x00010b14eee0();
      puVar10 = &UNK_10f7307a9;
      func_0x000105641abc(puVar8 + 0x8b);
      func_0x00010b14ee3c();
      uVar6 = *(char *)(puVar8 + 0x8e) == '\x01';
      if ((bool)uVar6) {
        func_0x00010b14edbc();
      }
      func_0x00010b14f9c8();
      func_0x00010b14f468();
      func_0x00010b14f410();
      func_0x00010b14f4a0();
    }
    else {
      func_0x00010b14ef30();
      puVar10 = puVar11;
    }
    func_0x00010b14fcfc();
  }
  func_0x00010b14fe28();
LAB_10b14b60c:
  func_0x00010b14fa6c();
  func_0x00010b14f01c();
  *(undefined1 *)(puVar8 + 0x9c) = extraout_w8;
  func_0x00010b14ed64();
  if ((bool)uVar6) {
    puStack_280 = puVar10;
    FUN_10b14bca0(puVar8 + 2,&puStack_280);
  }
  else {
    func_0x00010b14f4f4();
    puStack_280 = auStack_2d0;
    FUN_10b14bb60(puVar8 + 2,&puStack_280);
    func_0x00010b14f0a4();
  }
  func_0x00010b14fe84();
  func_0x00010b14fc88();
  func_0x00010b1501e4();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14b830; end: 10b14b86b;  */

void FUN_10b14b830(undefined8 *param_1,long param_2)

{
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar1;
  undefined8 extraout_x10;
  undefined8 uVar2;
  int extraout_w13;
  int extraout_w13_00;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x00010b14ee2c();
    } while (extraout_w13 != 0);
    do {
      func_0x00010b14ee2c();
      param_1 = extraout_x8;
      uVar1 = extraout_x9;
      uVar2 = extraout_x10;
    } while (extraout_w13_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x00010b14faec();
  return;
}



/* Entry: 10b14b86c; end: 10b14b86f;  */

long FUN_10b14b86c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbee10);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b14bb0c();
    func_0x00010b14f5d4();
  }
  func_0x0001052a55c0(param_1 + 0x18);
  func_0x0001052a55c0();
  return param_1;
}



/* Entry: 10b14b870; end: 10b14b887;  */

void FUN_10b14b870(void)

{
  FUN_10b14b888();
  func_0x00010b150578();
  return;
}



/* Entry: 10b14b888; end: 10b14b8c7;  */

undefined8 FUN_10b14b888(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b14fff4(&UNK_110cbee00);
  func_0x00010b14b8dc();
  func_0x00010b14ff84();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b14b8c8; end: 10b14b8f7;  */

void FUN_10b14b8c8(void)

{
  FUN_10b14bab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14b8f8; end: 10b14b8fb;  */

long FUN_10b14b8f8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbee10);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b14bb0c();
    func_0x00010b14f5d4();
  }
  func_0x0001052a55c0(param_1 + 0x18);
  func_0x0001052a55c0();
  return param_1;
}



/* Entry: 10b14b8fc; end: 10b14b90f;  */

void FUN_10b14b8fc(void)

{
  FUN_10b14bab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14b910; end: 10b14b99f;  */

void FUN_10b14b910(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b14ea9c();
  func_0x00010b14fb78();
  FUN_10b14b9a0();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110cbee30;
  puStack_30[1] = 0;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  func_0x00010b150514();
  *(undefined8 *)(extraout_x8 + 0x68) = extraout_x9;
  *(ulong *)(extraout_x8 + 0x78) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8 + 0x70) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8 + 0x88) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8 + 0x80) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  func_0x00010b150508();
  *(undefined8 *)(extraout_x8_00 + 0x90) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x98) = extraout_x9_00;
  *(ulong *)(extraout_x8_00 + 0xa8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0xa0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_00 + 0xb8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0xb0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_00 + 200) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0xc0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_00 + 0xd8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0xd0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined8 *)(extraout_x8_00 + 0xe0) = 0;
  func_0x00010b14ea84();
  FUN_10b14baa0();
  func_0x00010b14e980(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b14fb6c();
  FUN_10b14b9c0();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b14b9a0; end: 10b14b9bf;  */

void FUN_10b14b9a0(void)

{
  func_0x00010b14fb6c();
  FUN_10b14b9c0();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b14b9c0; end: 10b14b9eb;  */

void FUN_10b14b9c0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbee30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b14b9ec; end: 10b14b9ef;  */

void FUN_10b14b9ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbee30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b14b9f0; end: 10b14ba03;  */

void FUN_10b14b9f0(void)

{
  func_0x00010b14ba10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14ba04; end: 10b14ba1b;  */

void FUN_10b14ba04(long param_1)

{
  func_0x00010b14ba5c(param_1 + 0xe0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xd8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x68);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x0001052a038c();
  }
  return;
}



/* Entry: 10b14ba1c; end: 10b14ba7f;  */

void FUN_10b14ba1c(long param_1)

{
  func_0x00010b14ba5c(param_1 + 200);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xc0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x80);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x50);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001052a038c();
  }
  return;
}



/* Entry: 10b14ba80; end: 10b14ba9f;  */

void FUN_10b14ba80(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001052a038c();
  }
  return;
}



/* Entry: 10b14baa0; end: 10b14baaf;  */

void FUN_10b14baa0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b14bab0; end: 10b14bb0b;  */

long FUN_10b14bab0(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbee10);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b14bb0c();
    func_0x00010b14f5d4();
  }
  func_0x0001052a55c0(param_1 + 0x18);
  func_0x0001052a55c0();
  return param_1;
}



/* Entry: 10b14bb0c; end: 10b14bb43;  */

void FUN_10b14bb0c(void)

{
  func_0x00010b14ed14();
  func_0x00010b14f444();
  FUN_10b14bb44();
  func_0x00010b14efe4();
  func_0x00010b14f988();
  return;
}



/* Entry: 10b14bb44; end: 10b14bb5f;  */

void FUN_10b14bb44(void)

{
  func_0x00010b14ff50();
  FUN_10b14bb60();
  return;
}



/* Entry: 10b14bb60; end: 10b14bbeb;  */

void FUN_10b14bb60(void)

{
  long unaff_x19;
  undefined1 auStack_40 [32];
  
  func_0x00010b14ede4();
  func_0x00010b14ee9c();
  func_0x0001052a5474();
  func_0x00010b14f55c();
  func_0x0001052a549c();
  func_0x0001052a55c0(auStack_40);
  func_0x00010b14faec();
  func_0x00010b14fd9c();
  func_0x00010b14f1d8();
  FUN_10b14bbec();
  func_0x00010b14ec9c();
  if (unaff_x19 == 0) {
    func_0x00010b14f368();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14fdac();
  return;
}



/* Entry: 10b14bbec; end: 10b14bbfb;  */

void FUN_10b14bbec(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0xc0,*param_1);
  return;
}



/* Entry: 10b14bbfc; end: 10b14bc13;  */

void FUN_10b14bbfc(void)

{
  FUN_10b14bc14();
  func_0x00010b150578();
  return;
}



/* Entry: 10b14bc14; end: 10b14bc3f;  */

void FUN_10b14bc14(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110cbee10;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10b14bc40; end: 10b14bc83;  */

void FUN_10b14bc40(long param_1)

{
  undefined1 auStack_68 [72];
  
  func_0x0001052a5804(auStack_68,*(undefined8 *)(param_1 + 0x10));
  func_0x00010b14f0b4();
  FUN_10b14bc84();
  func_0x0001052a038c(auStack_68);
  return;
}



/* Entry: 10b14bc84; end: 10b14bc9f;  */

void FUN_10b14bc84(void)

{
  func_0x00010b14ff50();
  FUN_10b14bca0();
  return;
}



/* Entry: 10b14bca0; end: 10b14bd3f;  */

void FUN_10b14bca0(void)

{
  long unaff_x19;
  undefined1 auStack_40 [32];
  
  func_0x00010b14ede4();
  func_0x00010b14ee9c();
  func_0x0001052a5474();
  func_0x00010b14f55c();
  func_0x0001052a549c();
  func_0x0001052a55c0(auStack_40);
  func_0x00010b14faec();
  func_0x00010b14fd9c();
  func_0x00010b14f1d8();
  FUN_10b14bd40();
  func_0x00010b14ec9c();
  if (unaff_x19 == 0) {
    func_0x00010b14f368();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14fdac();
  return;
}



/* Entry: 10b14bd40; end: 10b14bd4f;  */

long FUN_10b14bd40(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x48) == '\x01') {
    func_0x00010563bef4();
  }
  else {
    FUN_10b14bd84(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 10b14bd50; end: 10b14bd83;  */

long FUN_10b14bd50(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010563bef4();
  }
  else {
    FUN_10b14bd84();
  }
  return param_1;
}



/* Entry: 10b14bd84; end: 10b14bdbb;  */

void FUN_10b14bd84(void)

{
  func_0x0001052a07e8();
  func_0x00010b15079c();
  return;
}



/* Entry: 10b14bdbc; end: 10b14bdbf;  */

void FUN_10b14bdbc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b14bdc0; end: 10b14bde3;  */

long FUN_10b14bdc0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b14f390();
  FUN_10b14bab0();
  lVar1 = unaff_x19;
  func_0x0001052a6984();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b14bde4; end: 10b14bdfb;  */

void FUN_10b14bde4(void)

{
  FUN_10b14b830();
  return;
}



/* Entry: 10b14bdfc; end: 10b14be2f;  */

void FUN_10b14bdfc(void)

{
  func_0x00010b14f2cc();
  func_0x00010b14f710();
  func_0x00010b14bf20();
  func_0x00010b14efe4();
  return;
}



/* Entry: 10b14be30; end: 10b14be4b;  */

void FUN_10b14be30(long param_1)

{
  FUN_10b14b870();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 10b14be4c; end: 10b14be73;  */

void FUN_10b14be4c(void)

{
  func_0x00010b14f288();
  FUN_10b14be74();
  func_0x00010b14fc40();
  func_0x00010b14be98();
  return;
}



/* Entry: 10b14be74; end: 10b14bef3;  */

void FUN_10b14be74(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010b14beb4();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 10b14bef4; end: 10b14bf4f;  */

undefined1 * FUN_10b14bef4(undefined1 *param_1)

{
  FUN_10b14be74();
  *param_1 = 0;
  param_1[0x40] = 0;
  func_0x00010b14ecc0();
  return param_1;
}



/* Entry: 10b14bf50; end: 10b14bf67;  */

void FUN_10b14bf50(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10b14bf68; end: 10b14bf8b;  */

void FUN_10b14bf68(void)

{
  long extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b14fec8();
  FUN_10b14bf8c();
  func_0x00010b14f004(&PTR_FUN_110cbee10);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b14bb0c();
    func_0x00010b14f5d4();
  }
  func_0x0001052a55c0(unaff_x19 + 0x18);
  func_0x0001052a55c0(unaff_x20);
  return;
}



/* Entry: 10b14bf8c; end: 10b14bfab;  */

void FUN_10b14bf8c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010b14beb4();
  }
  return;
}



/* Entry: 10b14bfac; end: 10b14c15f;  */

void FUN_10b14bfac(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 extraout_w8;
  long lVar4;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  long lStack_48;
  
  func_0x00010b150520();
  func_0x00010b14fddc();
  *param_1 = FUN_10b14d7a4;
  param_1[1] = FUN_10b14d8a0;
  *(undefined4 *)((long)param_1 + 0xa4) = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 1);
  param_1[0x12] = *(undefined8 *)(param_2 + 3);
  param_1[0x11] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)((long)param_1 + 0x9c) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)((long)param_1 + 0x94) = uVar5;
  func_0x00010b14f5bc();
  puVar1 = param_1 + 10;
  func_0x00010b14f8f4();
  lVar4 = unaff_x21[1];
  uVar5 = *unaff_x21;
  param_1[0x10] = unaff_x21[1];
  param_1[0xf] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  puVar2 = param_1 + 0xf;
  FUN_10b14b0c4(puVar1);
  func_0x00010b1501d4();
  if (((ulong)puVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    func_0x00010b14f18c();
    FUN_10b12d1c8();
    if (lStack_48 != 0) {
      do {
        func_0x00010b14ea74();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b14e9c4();
        func_0x00010b14f3ec();
      }
    }
  }
  else {
    func_0x00010b1501c4();
    func_0x00010b14f584();
    puVar2 = param_1 + 0xf;
    FUN_10b14b27c(puVar2);
    FUN_10b14b2bc(param_1 + 0xd,puVar2);
    plVar3 = (long *)param_1[0xd];
    if (plVar3 != (long *)0x0) {
      param_1[0xb] = *(undefined8 *)((long)param_1 + 0x94);
      *puVar1 = *(undefined8 *)((long)param_1 + 0x8c);
      param_1[0xc] = *(undefined8 *)((long)param_1 + 0x9c);
      (**(code **)(*plVar3 + 0x40))(plVar3,*(undefined4 *)((long)param_1 + 0xa4),puVar1);
    }
    func_0x00010b14fdbc();
    func_0x00010b14f184();
    func_0x00010b14fb0c();
    func_0x00010b14f01c();
    *(undefined1 *)(param_1 + 0x15) = extraout_w8;
    func_0x00010b14f2b0();
    if ((bool)in_ZR) {
      func_0x00010b14ff64();
      func_0x00010b14f8dc();
    }
    else {
      func_0x00010b1506b4();
      func_0x00010b14f0ac();
      func_0x00010b14f8e8();
      func_0x00010b14f84c();
    }
    func_0x00010b14f084();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b14c160; end: 10b14c16b;  */

void FUN_10b14c160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe8b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b14c16c; end: 10b14c19b;  */

undefined8 * FUN_10b14c16c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  __ZNSt3__115recursive_mutex4lockEv(param_2);
  return param_1;
}



/* Entry: 10b14c19c; end: 10b14c423;  */

void FUN_10b14c19c(long param_1)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined1 extraout_w8;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  long *plVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = (long *)(param_1 + 0xd8);
  FUN_10b1435a8();
  lVar5 = *plVar3;
  *(long *)(param_1 + 0x78) = lVar5;
  lVar4 = plVar3[1];
  *(long *)(param_1 + 0x80) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  if (lVar5 == 0) {
    func_0x00010b150494();
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    func_0x00010b14ecc0();
  }
  else {
    func_0x00010b150238();
    plVar2 = plVar3;
    func_0x00010b14fc14();
    unaff_x22 = plVar2 + 3;
    *unaff_x22 = extraout_x8;
    plVar2[4] = lVar5;
    plVar2[5] = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000105c40d40(plVar3 + 6);
    FUN_10b142c9c(plVar3 + 0xb);
    uVar1 = *(undefined1 *)(param_1 + 0xf1);
    plVar3[0x11] = 0;
    plVar3[0x10] = 0;
    plVar3[0x13] = 0;
    plVar3[0x12] = 0;
    *(undefined1 *)(plVar3 + 0x14) = uVar1;
    plVar3[0x15] = (long)&UNK_10f7306cf;
    plVar3[0x16] = 0x29;
    plVar3[0x17] = 0;
    plVar3[0x19] = 0;
    plVar3[0x1a] = (long)&UNK_10f7306f9;
    plVar3[0x1b] = 0x32;
    plVar3[0x1c] = 0;
    plVar3[0x1e] = 0;
    func_0x00010b150494();
    *(long **)(param_1 + 0x38) = unaff_x22;
    *(long **)(param_1 + 0x40) = plVar3;
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
    func_0x00010b14ecc0();
    FUN_10b142294(&plStack_50);
    unaff_x20 = plVar3;
  }
  func_0x00010b14f470();
  func_0x00010b14f01c();
  *(undefined1 *)(param_1 + 0xf0) = extraout_w8;
  func_0x00010b14f9d4();
  if ((bool)in_ZR) {
    func_0x00010b150200();
    func_0x00010b14f574();
    func_0x00010b14f2a0();
    plStack_50 = unaff_x22;
    plStack_48 = unaff_x20;
    func_0x00010b15018c();
    func_0x00010b14ff94();
    if ((bool)in_ZR) {
      func_0x00010b1505a0();
      if (unaff_x20 != (long *)0x0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11 != 0);
        if (extraout_x9 == 0) {
          func_0x00010b14eac4();
          func_0x00010b14f490();
        }
      }
    }
    else {
      func_0x00010b14f19c();
    }
    plVar3 = (long *)unaff_x22[0x12];
    unaff_x22[0x12] = 0;
    func_0x00010b150194();
    if (plVar3 == (long *)0x0) {
      func_0x00010b1501ac();
    }
    else {
      func_0x00010b14f568(*(undefined8 *)(*plVar3 + 0x10));
      (*extraout_x8_00)();
      func_0x00010b14ef4c();
    }
    if (plStack_48 != (long *)0x0) {
      do {
        func_0x00010b14ea74();
      } while (extraout_w11_00 != 0);
      if (extraout_x9_00 == 0) {
        func_0x00010b14eac4();
        func_0x00010b14f490();
      }
    }
  }
  else {
    func_0x00010b14f0ac(&plStack_50);
    func_0x00010b150118();
    FUN_10b143718();
    func_0x00010b14f0a4();
  }
  func_0x00010b1503c4();
  func_0x00010b14fc38();
  func_0x000107c279a4(param_1 + 0x58);
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14c424; end: 10b14c44f;  */

void FUN_10b14c424(void)

{
  long unaff_x19;
  
  func_0x00010b14f390();
  func_0x00010b144068();
  func_0x00010b14fc38();
  func_0x000107c279a4(unaff_x19 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14c450; end: 10b14c5f7;  */

void FUN_10b14c450(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 extraout_w8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  long lStack_48;
  
  plVar1 = *(long **)(param_1 + 0xe0);
  lVar2 = param_1 + 0x10;
  FUN_10b141d28();
  puVar4 = (undefined1 *)*plVar1;
  *(undefined1 **)(param_1 + 0xf0) = puVar4;
  lVar3 = plVar1[1];
  *(long *)(param_1 + 0xf8) = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  if (puVar4 == (undefined1 *)0x0) {
    func_0x00010b15016c();
    FUN_10b14224c(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    func_0x00010b14ecc0();
  }
  else {
    func_0x00010b150130(*(undefined8 *)(puVar4 + 8));
    func_0x00010b150380();
    FUN_10b1421f8(puVar4 + 0x90);
    FUN_10b1421f8(puVar4 + 0xb8);
    plVar1 = *(long **)(puVar4 + 8);
    puStack_50 = puVar4;
    lStack_48 = lVar3;
    if (lVar3 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar1 + 0x10))(auStack_60);
    func_0x00010b14f688();
    func_0x00010b14222c();
    func_0x0001052aad20(auStack_60);
    func_0x0001052aacf8(&puStack_50);
    func_0x00010b15016c();
  }
  func_0x00010b14f01c();
  *(undefined1 *)(param_1 + 0x100) = extraout_w8;
  puVar4 = (undefined1 *)(param_1 + 0x38);
  func_0x00010b14f9d4();
  if ((bool)in_ZR) {
    puStack_50 = puVar4;
    FUN_10b142300(lVar2,&puStack_50);
  }
  else {
    func_0x00010b14f4f4();
    puStack_50 = auStack_60;
    FUN_10b1420d8(lVar2,&puStack_50);
    func_0x00010b14f0a4();
  }
  func_0x00010b142400(lVar2);
  func_0x00010b14355c((long *)(param_1 + 0xe0));
  func_0x00010529fe04(param_1 + 0x58);
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14c5f8; end: 10b14c623;  */

void FUN_10b14c5f8(void)

{
  long unaff_x19;
  
  func_0x00010b14f390();
  func_0x00010b142400();
  func_0x00010b14355c(unaff_x19 + 0xe0);
  func_0x00010b150440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14c624; end: 10b14c803;  */

void FUN_10b14c624(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  
  uVar1 = param_1 + 0xf8;
  if (*(char *)(param_1 + 0x108) == '\0') {
    FUN_10b141d28(*(undefined8 *)(param_1 + 0xd8));
    func_0x00010b150764();
    lVar3 = extraout_x8;
    if (extraout_x9 != 0) {
      do {
        func_0x00010b14eb14();
        lVar3 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    if (lVar3 == 0) {
      func_0x00010b14f5b4();
      FUN_10b141624(auStack_80);
      func_0x00010b14f60c();
      if ((bool)in_ZR) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_60 = 0;
        func_0x00010b14f600();
      }
      func_0x00010b14f688();
      func_0x00010b142bac();
      func_0x00010b14f1b8();
      func_0x00010b14f594();
      goto LAB_10b14c668;
    }
    func_0x000105c41c1c(uVar1,lVar3 + 0x18);
    uVar2 = uVar1;
    func_0x000105c413d0();
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x108) = 1;
      func_0x00010b14f568(auStack_80);
      func_0x000105c4145c();
      if (lStack_78 == 0) {
        return;
      }
      do {
        func_0x00010b14ea74();
      } while (extraout_w11_00 != 0);
      if (extraout_x9_00 != 0) {
        return;
      }
      func_0x00010b14e9c4();
      func_0x00010b14f3ec();
      return;
    }
  }
  func_0x000105c407d8(param_1 + 0x90,uVar1);
  func_0x00010b1504b8();
  func_0x00010b14fe30();
  func_0x0001052a4560(uVar1);
  func_0x00010b14f5b4();
LAB_10b14c668:
  func_0x00010b14f4a8();
  *(undefined1 *)(param_1 + 0x108) = extraout_w8;
  func_0x00010b14ed64();
  if ((bool)in_ZR) {
    puStack_38 = param_2;
    func_0x000105c4120c(param_1 + 0x10,&puStack_38);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_40);
    puStack_38 = auStack_40;
    func_0x000105c410b8(param_1 + 0x10,&puStack_38);
    __ZNSt13exception_ptrD1Ev(auStack_40);
  }
  func_0x00010b14f4dc();
  func_0x00010b14355c(param_1 + 0xd8);
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14c804; end: 10b14c843;  */

void FUN_10b14c804(long param_1)

{
  if (*(char *)(param_1 + 0x108) == '\x01') {
    func_0x0001052a4560(param_1 + 0xf8);
    func_0x00010b14f5b4();
  }
  func_0x00010b14f4dc();
  func_0x00010b14355c(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14c844; end: 10b14ccd7;  */

void FUN_10b14c844(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  long *plVar3;
  long lVar4;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w12;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = (undefined8 *)(param_1 + 0x118);
  if (*(char *)(param_1 + 0x140) != '\0') {
LAB_10b14c870:
    lStack_d0 = 0;
    lStack_c8 = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    func_0x0001052a484c(&lStack_90,puVar1,param_1 + 0xd8);
    func_0x0001052a4874(&lStack_d0,&lStack_90);
    func_0x00010b14fa74();
    func_0x00010b14fc30();
    *(long *)(param_1 + 0xe8) = lStack_d0;
    *(long *)(param_1 + 0xf0) = lStack_c8;
    if (lStack_c8 == 0) {
      puStack_88 = (undefined8 *)0x0;
      lVar5 = lStack_d0;
    }
    else {
      do {
        func_0x00010b14ec7c();
        puVar1 = (undefined8 *)extraout_x9;
      } while (extraout_w12 != 0);
      do {
        puStack_88 = puVar1;
        func_0x00010b14ee64();
        lVar5 = extraout_x8;
        puVar1 = puStack_88;
      } while (extraout_w11 != 0);
    }
    lStack_90 = lVar5;
    func_0x0001052a4b5c(param_1 + 0x90,&lStack_90);
    func_0x00010b14fa74();
    func_0x00010b14fe18();
    func_0x00010b14f274();
    func_0x00010b14ff5c();
    func_0x00010b1504ac();
    func_0x0001052a4cf0(param_1 + 0x90);
    func_0x00010b1501ec();
    func_0x00010b14f59c();
LAB_10b14ca04:
    func_0x00010b14f4a8();
    *(undefined1 *)(param_1 + 0x140) = extraout_w8;
    func_0x00010b14f45c();
    if ((bool)in_ZR) {
      func_0x00010b14f900();
    }
    else {
      func_0x00010b14f0ac(&lStack_90);
      func_0x00010b1503cc();
      __ZNSt13exception_ptrD1Ev(&lStack_90);
    }
    func_0x00010b14f5cc();
    func_0x00010b14355c(param_1 + 0x128);
    func_0x00010b14efd4();
    return;
  }
  FUN_10b141d28(*(undefined8 *)(param_1 + 0x128));
  func_0x00010b150750();
  lVar5 = extraout_x8_00;
  if (extraout_x9_00 != 0) {
    do {
      func_0x00010b14eb14();
      lVar5 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  if (lVar5 == 0) {
    func_0x00010b14f59c();
    FUN_10b141624(&lStack_90);
    func_0x00010b14f60c();
    if ((bool)in_ZR) {
      uStack_a8 = uStack_68;
      uStack_b0 = uStack_70;
      uStack_a0 = uStack_60;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      func_0x00010b14f600();
    }
    func_0x00010b14ff5c();
    func_0x00010b14f688();
    FUN_10b14347c();
    *(undefined1 *)(param_1 + 0x80) = 1;
    *(undefined1 *)(param_1 + 0x88) = 1;
    func_0x00010b14f1b8();
    func_0x00010b14f594();
    goto LAB_10b14ca04;
  }
  func_0x00010b142c08(puVar1,*(undefined8 *)(lVar5 + 0x58),*(undefined8 *)(lVar5 + 0x60));
  FUN_10b1432e0(param_1 + 0xf8,puVar1);
  uVar6 = *(ulong *)(param_1 + 0xf8);
  lStack_90 = uVar6 + 0x80;
  puStack_88 = (undefined8 *)CONCAT71(puStack_88._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a4898();
  func_0x000107c2798c(&lStack_90);
  func_0x0001052a4ab0(param_1 + 0xf8);
  if ((uVar6 & 1) != 0) goto LAB_10b14c870;
  *(undefined1 *)(param_1 + 0x140) = 1;
  func_0x00010b1501bc();
  func_0x00010b14f4e4();
  lVar5 = *(long *)(param_1 + 0x118);
  lVar2 = *(long *)(param_1 + 0x120);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  __ZNSt3__18__sp_mut6unlockEv();
  plVar3 = (long *)0x28;
  __Znwm();
  func_0x00010b14fb40();
  func_0x00010b1502c8();
  plVar3[4] = plVar3[2];
  plVar3[3] = plVar3[1];
  if (plVar3[2] == 0) {
    *plVar3 = (long)&PTR_DAT_1107e8958;
LAB_10b14cabc:
    bVar7 = true;
  }
  else {
    do {
      func_0x00010b14eb14();
    } while (extraout_w11_01 != 0);
    *plVar3 = extraout_x8_02 + 0x10;
    if (plVar3[4] == 0) goto LAB_10b14cabc;
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
    do {
      func_0x00010b14ea74();
    } while (extraout_w11_02 != 0);
    if (extraout_x9_01 == 0) {
      func_0x00010b14e970();
      func_0x00010b14f25c();
    }
    bVar7 = false;
  }
  lVar4 = lVar5 + 0x80;
  lStack_90 = param_1;
  puStack_88 = puVar1;
  plStack_80 = plVar3;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(lVar5 + 0x48) & 1) == 0) {
    lStack_d0 = 0;
    lVar8 = *(long *)(lVar5 + 0xc0);
    func_0x00010b14f0a4();
    if (lVar8 == 0) {
      func_0x00010b14f254();
      func_0x00010b150024(&PTR_FUN_110cbe4f8);
      *(long **)(lVar4 + 0x18) = plVar3;
      lVar8 = *(long *)(lVar5 + 200);
      *(long *)(lVar5 + 200) = lVar4;
      if (lVar8 != 0) {
        func_0x00010b14e9b4();
      }
      __ZNSt3__15mutex6unlockEv(lVar5 + 0x80);
      if (lVar2 != 0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11_04 != 0);
        if (extraout_x9_03 == 0) {
          func_0x00010b14e9e4();
          func_0x00010b14f418();
        }
      }
      goto LAB_10b14cb44;
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar5 + 0x80);
  if (lVar2 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_01 != 0);
  }
  FUN_10b14331c(&lStack_90,lVar5,lVar2);
  if (lVar2 != 0) {
    do {
      func_0x00010b14f794();
    } while (extraout_w10_02 != 0);
    if (extraout_x8_03 == 0) {
      func_0x00010b14e9e4();
      func_0x00010b14f418();
    }
    do {
      func_0x00010b14f794();
    } while (extraout_w10_03 != 0);
    if (extraout_x8_04 == 0) {
      func_0x00010b14e9e4();
      func_0x00010b14f418();
    }
  }
  func_0x00010b14fd3c();
LAB_10b14cb44:
  if (bVar7) {
    return;
  }
  do {
    func_0x00010b14ea74();
  } while (extraout_w11_03 != 0);
  if (extraout_x9_02 != 0) {
    return;
  }
  func_0x00010b14e970();
  func_0x00010b14f25c();
  return;
}



/* Entry: 10b14ccd8; end: 10b14cd17;  */

void FUN_10b14ccd8(long param_1)

{
  if (*(char *)(param_1 + 0x140) == '\x01') {
    func_0x0001052a4ab0(param_1 + 0x118);
    func_0x00010b14f59c();
  }
  func_0x00010b14f5cc();
  func_0x00010b14355c(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14cd18; end: 10b14cda3;  */

void FUN_10b14cd18(long param_1)

{
  undefined1 in_ZR;
  
  FUN_10b1435a8(*(undefined8 *)(param_1 + 0x50));
  func_0x00010b14f184();
  func_0x00010b14e930();
  if ((bool)in_ZR) {
    func_0x00010b14ec20();
    func_0x00010b14eb5c();
  }
  else {
    func_0x00010b14e960();
    func_0x00010b14eb68();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f084();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14cda4; end: 10b14cdbf;  */

void FUN_10b14cda4(void)

{
  func_0x00010b14ef84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14cdc0; end: 10b14cf7f;  */

void FUN_10b14cdc0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 extraout_w8;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 in_register_00005008;
  
  FUN_10b12d0d0(param_2 + 0x68);
  func_0x00010b15031c();
  FUN_10b146ae4(param_2 + 0x58);
  func_0x00010b1500ac();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b146a9c(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x40) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x38) = param_1;
  func_0x00010b14ecc0();
  FUN_10b146b38(&stack0xffffffffffffffc0);
  func_0x00010b14fb04();
  func_0x00010b14f01c();
  *(undefined1 *)(param_2 + 0x78) = extraout_w8;
  func_0x00010b14f9d4();
  if ((bool)in_ZR) {
    func_0x00010b150200();
    func_0x00010b14f574();
    func_0x00010b14f2a0();
    func_0x00010b15018c();
    func_0x00010b14ff94();
    if ((bool)in_ZR) {
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      lVar1 = unaff_x22[1];
      *unaff_x22 = extraout_x8_00;
      unaff_x22[1] = uVar2;
      if (lVar1 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    else {
      func_0x00010b14f19c();
    }
    lVar1 = unaff_x22[0x12];
    unaff_x22[0x12] = 0;
    func_0x00010b150194();
    if (lVar1 == 0) {
      func_0x00010b1501ac();
    }
    else {
      func_0x00010b14f450();
      func_0x00010b14fd2c();
      func_0x00010b14eab4();
    }
    if (unaff_x20 != 0) {
      do {
        func_0x00010b14ea74();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b14eac4();
        func_0x00010b14f490();
      }
    }
  }
  else {
    func_0x00010b14f0ac(&stack0xffffffffffffffc0);
    func_0x00010b14fe78();
    FUN_10b1469a8();
    func_0x00010b14f350();
  }
  FUN_10b146b74(param_2 + 0x10);
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14cf80; end: 10b14cfb3;  */

void FUN_10b14cf80(long param_1)

{
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    func_0x00010b15031c();
    func_0x00010b14fb04();
  }
  FUN_10b146b74(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14cfb4; end: 10b14d137;  */

void FUN_10b14cfb4(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  long lVar4;
  undefined8 in_register_00005008;
  long lStack_48;
  ulong uStack_38;
  
  uVar1 = param_2 + 0x88;
  if (*(char *)(param_2 + 0xd8) == '\0') {
    FUN_10b1435a8(param_2 + 0x60);
    func_0x00010b1500ac();
    *(undefined8 *)(param_2 + 0x80) = in_register_00005008;
    *(undefined8 *)(param_2 + 0x78) = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b14fa24();
    plVar2 = *(long **)(param_2 + 0x78);
    *(long **)(param_2 + 0xd0) = plVar2;
    if (plVar2 == (long *)0x0) {
      func_0x00010b14fe50();
      goto LAB_10b14cfdc;
    }
    (**(code **)(*plVar2 + 0x38))(uVar1);
    uVar3 = uVar1;
    FUN_10b1479ac();
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)(param_2 + 0xd8) = 1;
      func_0x00010b14f18c();
      FUN_10b147a3c();
      if (lStack_48 == 0) {
        return;
      }
      do {
        func_0x00010b14ea74();
      } while (extraout_w11 != 0);
      if (extraout_x9 != 0) {
        return;
      }
      func_0x00010b14e9c4();
      func_0x00010b14f3ec();
      return;
    }
  }
  func_0x00010b150278();
LAB_10b14cfdc:
  func_0x00010b150480();
  lVar4 = *(long *)(param_2 + 0xd0);
  func_0x00010b14fc80();
  if (lVar4 != 0) {
    func_0x00010b14f57c();
  }
  func_0x00010b14f470();
  func_0x00010b14f4a8();
  func_0x00010b1505dc();
  if ((bool)in_ZR) {
    uStack_38 = param_3;
    FUN_10b147d74(param_2 + 0x10,&uStack_38);
  }
  else {
    func_0x00010b1506b4();
    __ZNSt13exception_ptrC1ERKS_();
    uStack_38 = uVar1;
    FUN_10b147358(param_2 + 0x10,&uStack_38);
    func_0x00010b14f84c();
  }
  func_0x00010b14fe94();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14d138; end: 10b14d17f;  */

void FUN_10b14d138(long param_1)

{
  if (*(char *)(param_1 + 0xd8) != '\x02') {
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      func_0x00010b147278(param_1 + 0x88);
      func_0x00010b14f470();
    }
    else {
      func_0x00010b14fa24();
    }
  }
  func_0x00010b14fe94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14d180; end: 10b14d4bf;  */

void FUN_10b14d180(long param_1)

{
  ulong *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = (long *)(param_1 + 0x310);
  if (*(char *)(param_1 + 0x3d8) == '\0') {
    plVar2 = (long *)(param_1 + 0x3b8);
    FUN_10b1435a8();
    func_0x00010b150100();
    if (extraout_x8 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar2 + 0x28))(plVar3);
    plVar2 = plVar3;
    FUN_10b148bb4();
    if (((ulong)plVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x3d8) = 1;
      lStack_90 = param_1;
      plStack_88 = plVar3;
      FUN_10b148ca0(&uStack_e0,plVar3,&lStack_90);
      if (lStack_d8 == 0) {
        return;
      }
      do {
        func_0x00010b14ea74();
      } while (extraout_w11 != 0);
      if (extraout_x9 != 0) {
        return;
      }
      func_0x00010b14e9c4();
      func_0x00010b14f3ec();
      return;
    }
  }
  FUN_10b1487f0(param_1 + 0x90,plVar3);
  func_0x00010b148c7c(plVar3);
  if ((*(byte *)(param_1 + 0x308) & 1) == 0) {
    plVar3 = (long *)(param_1 + 0x90);
    func_0x0001052a0760(&uStack_e0);
    func_0x00010b14f688();
    FUN_10b13a748();
    func_0x00010b14f1b8();
  }
  else {
    lVar5 = *(long *)(param_1 + 0x3d0);
    FUN_10b1151e4(lVar5 + 0x68,param_1 + 0x90);
    uVar4 = *(undefined8 *)(param_1 + 0x3a8);
    FUN_10b202630(&uStack_e0,lVar5 + 0x68);
    FUN_10b1f7064(plVar3,uVar4,&uStack_e0,*(undefined4 *)(*(long *)(param_1 + 0x3d0) + 200));
    func_0x00010b14f978();
    in_ZR = *(char *)(param_1 + 0x328) == '\x01';
    if (((bool)in_ZR) &&
       (func_0x00010b14fc98(*(undefined1 *)(param_1 + 0x327)), extraout_x8_00 != 0)) {
      FUN_10b13a7d0(param_1 + 0x38);
    }
    else {
      func_0x00010b14eee0();
      puVar1 = (ulong *)(param_1 + 0x330);
      func_0x00010b1491a4(puVar1,&UNK_10f73074b);
      plStack_88 = *(long **)(param_1 + 0x358);
      lStack_90 = *(long *)(param_1 + 0x350);
      uStack_80 = *(undefined8 *)(param_1 + 0x360);
      *(undefined8 *)(param_1 + 0x358) = 0;
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(long *)(param_1 + 0x350) = 0;
      uStack_c8 = 2;
      uStack_c0 = uStack_c0 & 0xffffffffffffff00;
      in_ZR = *(char *)(param_1 + 0x348) == '\x01';
      if ((bool)in_ZR) {
        uStack_b8 = *(undefined8 *)(param_1 + 0x338);
        uStack_c0 = *puVar1;
        uStack_b0 = *(undefined8 *)(param_1 + 0x340);
        *(undefined8 *)(param_1 + 0x338) = 0;
        *(undefined8 *)(param_1 + 0x340) = 0;
        *puVar1 = 0;
      }
      lStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 0;
      uStack_78 = 2;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_a8 = in_ZR;
      if (*(char *)(param_1 + 0x348) != '\0') {
        func_0x00010b14e994();
        uStack_58 = extraout_w8;
      }
      plVar3 = &lStack_90;
      FUN_10b13a748(param_1 + 0x38);
      func_0x00010b14f468();
      func_0x00010b14f1b8();
      func_0x00010b14f410();
      func_0x00010b14f4a0();
    }
    func_0x00010b14fd34();
  }
  func_0x00010b14fe20();
  func_0x00010b150414();
  func_0x00010b14fa9c();
  func_0x00010b14f4a8();
  *(undefined1 *)(param_1 + 0x3d8) = extraout_w8_00;
  func_0x00010b14ed64();
  if ((bool)in_ZR) {
    plStack_48 = plVar3;
    FUN_10b0fb514(param_1 + 0x10,&plStack_48);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&lStack_50);
    plStack_48 = &lStack_50;
    FUN_10b0fb468(param_1 + 0x10,&plStack_48);
    func_0x00010b14fee4();
  }
  func_0x00010b14f5c4();
  func_0x00010b141cc4(param_1 + 0x3b8);
  func_0x00010b1257f8((undefined8 *)(param_1 + 0x3a8));
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14d4c0; end: 10b14d50f;  */

void FUN_10b14d4c0(long param_1)

{
  if (*(char *)(param_1 + 0x3d8) != '\0') {
    if (*(char *)(param_1 + 0x3d8) == '\x02') goto LAB_10b14d4f0;
    func_0x00010b148c7c(param_1 + 0x310);
    func_0x00010b150414();
  }
  func_0x00010b14fa9c();
LAB_10b14d4f0:
  func_0x00010b14f5c4();
  func_0x00010b141cc4(param_1 + 0x3b8);
  func_0x00010b1257f8(param_1 + 0x3a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14d510; end: 10b14d597;  */

void FUN_10b14d510(void)

{
  undefined1 in_ZR;
  
  func_0x00010b14f938();
  FUN_10b149e80();
  func_0x00010b14f184();
  func_0x00010b14e930();
  if ((bool)in_ZR) {
    func_0x00010b14ec20();
    func_0x00010b14eb5c();
  }
  else {
    func_0x00010b14e960();
    func_0x00010b14eb68();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f084();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14d598; end: 10b14d5b3;  */

void FUN_10b14d598(void)

{
  func_0x00010b14ef84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14d5b4; end: 10b14d63b;  */

void FUN_10b14d5b4(void)

{
  undefined1 in_ZR;
  
  func_0x00010b14f938();
  FUN_10b14a1e4();
  func_0x00010b14f184();
  func_0x00010b14e930();
  if ((bool)in_ZR) {
    func_0x00010b14ec20();
    func_0x00010b14eb5c();
  }
  else {
    func_0x00010b14e960();
    func_0x00010b14eb68();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f084();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14d63c; end: 10b14d657;  */

void FUN_10b14d63c(void)

{
  func_0x00010b14ef84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14d658; end: 10b14d6e3;  */

void FUN_10b14d658(long param_1)

{
  undefined1 in_ZR;
  
  FUN_10b14a428(*(undefined8 *)(param_1 + 0x50));
  func_0x00010b14f184();
  func_0x00010b14e930();
  if ((bool)in_ZR) {
    func_0x00010b14ec20();
    func_0x00010b14eb5c();
  }
  else {
    func_0x00010b14e960();
    func_0x00010b14eb68();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f084();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14d6e4; end: 10b14d6ff;  */

void FUN_10b14d6e4(void)

{
  func_0x00010b14ef84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14d700; end: 10b14d787;  */

void FUN_10b14d700(void)

{
  undefined1 in_ZR;
  
  func_0x00010b14f938();
  FUN_10b14b240();
  func_0x00010b14f184();
  func_0x00010b14e930();
  if ((bool)in_ZR) {
    func_0x00010b14ec20();
    func_0x00010b14eb5c();
  }
  else {
    func_0x00010b14e960();
    func_0x00010b14eb68();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f084();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14d788; end: 10b14d7a3;  */

void FUN_10b14d788(void)

{
  func_0x00010b14ef84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14d7a4; end: 10b14d89f;  */

void FUN_10b14d7a4(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  undefined1 extraout_w8;
  
  FUN_10b12d0d0(param_1 + 0x50);
  func_0x00010b14f5ec();
  lVar1 = param_1 + 0x78;
  FUN_10b14b27c(lVar1);
  FUN_10b14b2bc(param_1 + 0x68,lVar1);
  plVar2 = *(long **)(param_1 + 0x68);
  if (plVar2 != (long *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x8c);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x9c);
    (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined4 *)(param_1 + 0xa4),param_1 + 0x50);
  }
  func_0x00010b14fdbc();
  func_0x00010b14f184();
  func_0x00010b14fb0c();
  func_0x00010b14f01c();
  *(undefined1 *)(param_1 + 0xa8) = extraout_w8;
  func_0x00010b14f2b0();
  if ((bool)in_ZR) {
    func_0x00010b14ec20();
    func_0x00010b14eb5c();
  }
  else {
    func_0x00010b14e960();
    func_0x00010b14eb68();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f084();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14d8a0; end: 10b14d8cf;  */

void FUN_10b14d8a0(long param_1)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    func_0x00010b14f5ec();
    func_0x00010b14fb0c();
  }
  func_0x00010b14f084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14d8d0; end: 10b14dc8b;  */

void FUN_10b14d8d0(long param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 extraout_w8;
  long extraout_x8;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puStack_310;
  undefined8 uStack_308;
  byte bStack_2b8;
  undefined1 auStack_90 [80];
  
  lVar8 = *(long *)(param_1 + 0x4d0);
  lVar10 = *(long *)(lVar8 + 0x58);
  if ((*(byte *)(lVar10 + 0x58) & 1) == 0) {
    __ZNSt13exception_ptrC1ERKS_(param_1 + 0x90,lVar10 + 0x40);
    __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x90);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b14db9c);
    (*pcVar1)();
  }
  func_0x00010b14fc98(*(undefined1 *)(lVar10 + 0x57));
  if (extraout_x8 == 0) {
    func_0x00010b14f2bc();
    puVar6 = &UNK_10f73076d;
    func_0x000105c3d6a8(param_1 + 0x418);
    func_0x00010b14edf4();
    uVar3 = *(char *)(param_1 + 0x430) == '\x01';
    if ((bool)uVar3) {
      func_0x00010b14ee74();
    }
    func_0x00010b14f688();
    FUN_10b14be4c();
    func_0x00010b14f1b8();
    func_0x00010b14f78c();
    func_0x00010b14f7d0();
    goto LAB_10b14dacc;
  }
  func_0x00010b1501a4(param_1 + 0x90,*(undefined8 *)(lVar8 + 0x2f8),param_1 + 0x3d8,1);
  uVar3 = *(char *)(param_1 + 0xe8) == '\x01';
  uVar2 = uVar3;
  if (((bool)uVar3) && (*(long *)(param_1 + 0xd8) == 0)) {
    iVar4 = (int)param_1 + 0x90;
    puVar6 = (undefined *)(lVar10 + 0x40);
    func_0x000107c278d0();
    if (iVar4 == 0) {
      puStack_310 = (undefined1 *)0x0;
      uStack_308 = 0;
      FUN_10b12157c(param_1 + 600,&puStack_310);
      func_0x00010b12186c(&puStack_310);
      uVar7 = param_1 + 0x90;
      FUN_10b1f7128(*(undefined8 *)(lVar8 + 0x2f8),uVar7,*(undefined4 *)(param_1 + 0x3f0),
                    param_1 + 0x3d8,1);
      uVar2 = uVar3;
      if ((uVar7 & 1) != 0) goto LAB_10b14d9dc;
      func_0x00010b14f2bc();
      puVar6 = &UNK_10f730788;
      func_0x000105c3d724(param_1 + 0x438);
      func_0x00010b14edf4();
      uVar3 = *(char *)(param_1 + 0x450) == '\x01';
      if ((bool)uVar3) {
        func_0x00010b14ee74();
      }
      func_0x00010b14f688();
      FUN_10b14be4c();
      func_0x00010b14f1b8();
      func_0x00010b14f78c();
      func_0x00010b14f7d0();
    }
    else {
      if (((*(byte *)(param_1 + 0x4e1) & 1) != 0) &&
         (uVar2 = uVar3, (*(byte *)(param_1 + 200) & 1) == 0)) goto LAB_10b14d9dc;
      func_0x00010b14ef30();
    }
  }
  else {
LAB_10b14d9dc:
    func_0x00010b1505f0();
    uVar3 = 0;
    if (((bool)uVar2) &&
       (uVar3 = *(long *)(param_1 + 0x3f8) == *(long *)(param_1 + 0x400), !(bool)uVar3)) {
      lVar5 = param_1 + 0x308;
      func_0x00010b114b5c(lVar5);
      FUN_10b114b98();
      func_0x00010b1505c8();
      func_0x00010539283c(lVar5 + 0x10);
    }
    uVar9 = *(undefined8 *)(lVar8 + 0x2f8);
    FUN_10b202630(auStack_90,lVar10 + 0x40);
    *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0x3f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 0x3a0,param_1 + 0x3d8);
    func_0x00010b14f2e0();
    puVar6 = auStack_90;
    func_0x00010b14fa50(&puStack_310,uVar9,puVar6,param_1 + 0x398);
    func_0x00010b121af0(&puStack_310);
    func_0x00010b14fca4();
    func_0x00010b14fcd8();
    func_0x00010b121e00(auStack_90);
    if ((bStack_2b8 & 1) == 0) {
      func_0x00010b14f2bc();
      puVar6 = &UNK_10f7307a9;
      func_0x000105641abc(param_1 + 0x458);
      func_0x00010b14edf4();
      uVar3 = *(char *)(param_1 + 0x470) == '\x01';
      if ((bool)uVar3) {
        func_0x00010b14ee74();
      }
      func_0x00010b14f688();
      FUN_10b14be4c();
      func_0x00010b14f1b8();
      func_0x00010b14f78c();
      func_0x00010b14f7d0();
    }
    else {
      func_0x00010b14ef30();
    }
    func_0x00010b14fcfc();
  }
  func_0x00010b14fe28();
LAB_10b14dacc:
  func_0x00010b14fa6c();
  func_0x00010b14f01c();
  *(undefined1 *)(param_1 + 0x4e0) = extraout_w8;
  func_0x00010b14ed64();
  if ((bool)uVar3) {
    puStack_310 = puVar6;
    func_0x00010b150118();
    FUN_10b14bca0();
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_90);
    puStack_310 = auStack_90;
    func_0x00010b150118();
    FUN_10b14bb60();
    __ZNSt13exception_ptrD1Ev(auStack_90);
  }
  func_0x00010b14fe84();
  func_0x00010b14fc88();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x3d8);
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14dc8c; end: 10b14dcc3;  */

void FUN_10b14dc8c(long param_1)

{
  if ((*(byte *)(param_1 + 0x4e0) & 1) == 0) {
    func_0x00010b14fa6c();
  }
  func_0x00010b14fe84();
  func_0x00010b14fc88();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x3d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14dcc4; end: 10b14ddb3;  */

void FUN_10b14dcc4(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_var;
  
  FUN_10b12d0d0(param_1 + 200);
  func_0x00010b1501b4();
  lVar1 = param_1 + 0xd8;
  FUN_10b14b27c(lVar1);
  FUN_10b14b2bc(param_1 + 200,lVar1);
  if (*(long *)(param_1 + 200) != 0) {
    func_0x00010b150130();
    (*(code *)CONCAT44(extraout_var,extraout_w8_00))();
  }
  FUN_10b144044(param_1 + 200);
  func_0x00010b14f184();
  func_0x00010b14fa1c();
  func_0x00010b14f01c();
  *(undefined1 *)(param_1 + 0xe8) = extraout_w8;
  func_0x00010b14f2b0();
  if ((bool)in_ZR) {
    func_0x00010b14ec20();
    func_0x00010b14eb5c();
  }
  else {
    func_0x00010b14e960();
    func_0x00010b14eb68();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f084();
  func_0x00010b14ff38();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14ddb4; end: 10b14dde7;  */

void FUN_10b14ddb4(long param_1)

{
  if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
    func_0x00010b1501b4();
    func_0x00010b14fa1c();
  }
  func_0x00010b14f084();
  func_0x00010b14ff38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14dde8; end: 10b14de9f;  */

void FUN_10b14dde8(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  
  func_0x00010b1506ec();
  FUN_10b149e80();
  func_0x00010b15048c();
  func_0x00010b147ed8();
  func_0x00010b14ecd0();
  if ((bool)in_ZR) {
    puStack_38 = param_1;
    func_0x00010b1500a0();
    FUN_10b0fb514();
  }
  else {
    func_0x00010b14f4f4();
    puStack_38 = auStack_40;
    func_0x00010b1500a0();
    FUN_10b0fb468();
    func_0x00010b14f0a4();
  }
  FUN_10b139ec8();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14dea0; end: 10b14decb;  */

void FUN_10b14dea0(long param_1)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    func_0x00010b14fe38();
  }
  func_0x00010b14f5c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14decc; end: 10b14df6f;  */

void FUN_10b14decc(void)

{
  undefined1 in_ZR;
  undefined1 auStack_38 [8];
  
  func_0x00010b1506ec();
  FUN_10b14a1e4();
  func_0x00010b15049c();
  func_0x00010b143298();
  func_0x00010b14ee1c();
  func_0x00010b14f45c();
  if ((bool)in_ZR) {
    FUN_10b143494();
  }
  else {
    func_0x00010b14f0ac(auStack_38);
    func_0x00010b1500a0();
    FUN_10b142e54();
    func_0x00010b14efe4();
  }
  FUN_10b143538();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14df70; end: 10b14df9b;  */

void FUN_10b14df70(long param_1)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    func_0x00010b1503ac();
  }
  func_0x00010b14f5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14df9c; end: 10b14e03b;  */

void FUN_10b14df9c(void)

{
  undefined1 in_ZR;
  
  FUN_10b14a428();
  func_0x00010b1504a4();
  func_0x00010b14fadc();
  func_0x00010b14ecd0();
  if ((bool)in_ZR) {
    func_0x00010b14f0b4();
    func_0x000105c4120c();
  }
  else {
    func_0x00010b14f27c();
    __ZNSt13exception_ptrC1ERKS_();
    func_0x00010b14f0b4();
    func_0x000105c410b8();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f4dc();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14e03c; end: 10b14e067;  */

void FUN_10b14e03c(long param_1)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    func_0x00010b14fadc();
  }
  func_0x00010b14f4dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14e068; end: 10b14e0ef;  */

void FUN_10b14e068(void)

{
  undefined1 in_ZR;
  
  func_0x00010b14f938();
  FUN_10b14a8d4();
  func_0x00010b14f184();
  func_0x00010b14e930();
  if ((bool)in_ZR) {
    func_0x00010b14ec20();
    func_0x00010b14eb5c();
  }
  else {
    func_0x00010b14e960();
    func_0x00010b14eb68();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f084();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14e0f0; end: 10b14e10b;  */

void FUN_10b14e0f0(void)

{
  func_0x00010b14ef84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14e10c; end: 10b14e20b;  */

void FUN_10b14e10c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 extraout_w8;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  
  FUN_10b12d0d0(param_1 + 0x50);
  func_0x00010b14f5ec();
  FUN_10b14a758(param_1 + 0x50,param_1 + 0x70);
  FUN_10b124eb8(param_1 + 0x50);
  func_0x00010b14f5ec();
  lVar1 = *(long *)(param_1 + 0x70);
  FUN_10b14a8d4();
  func_0x00010b1500e8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  if (lVar1 != 0) {
    func_0x00010b14f664();
    (*extraout_x8_00)();
  }
  func_0x00010b14fc78();
  func_0x00010b14f184();
  func_0x00010b14faac();
  func_0x00010b14f01c();
  *(undefined1 *)(param_1 + 0x80) = extraout_w8;
  func_0x00010b14f2b0();
  if ((bool)in_ZR) {
    func_0x00010b14ec20();
    func_0x00010b14eb5c();
  }
  else {
    func_0x00010b14e960();
    func_0x00010b14eb68();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f084();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14e20c; end: 10b14e23b;  */

void FUN_10b14e20c(long param_1)

{
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    func_0x00010b14f5ec();
    func_0x00010b14faac();
  }
  func_0x00010b14f084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b14e23c; end: 10b14e80f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b14e23c(undefined8 *******param_1)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  code *pcVar5;
  undefined1 in_CY;
  undefined1 uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******extraout_x8;
  undefined8 ******extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 *******extraout_x9;
  undefined8 *******pppppppuVar9;
  undefined8 ******extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  ulong extraout_x9_03;
  int extraout_w10;
  int iVar10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  long extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *******unaff_x20;
  undefined8 ******ppppppuVar11;
  undefined8 *******unaff_x21;
  undefined8 *****pppppuVar12;
  undefined8 *******unaff_x22;
  undefined8 *****unaff_x25;
  undefined1 auStack_90 [16];
  undefined8 *******pppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  undefined8 ******ppppppuStack_60;
  undefined8 ******ppppppuStack_58;
  
  pppppppuVar8 = (undefined8 *******)(ulong)*(byte *)(param_1 + 0x2f);
  pppppppuVar9 = (undefined8 *******)&UNK_10e55b43c;
  iVar10 = (uint)*(byte *)((long)pppppppuVar8 + 0x10e55b43c) * 4 + 0xb14e278;
  pppppppuVar7 = param_1;
  switch(*(byte *)(param_1 + 0x2f)) {
  case 0:
  case 4:
  case 0x3d:
  case 0x95:
  case 0xf9:
    pppppppuVar8 = param_1 + 0x23;
    pppppppuVar7 = param_1 + 0x1d;
    break;
  case 1:
    goto code_r0x00010b14e2d8;
  case 2:
    goto code_r0x00010b14e3d0;
  case 3:
  case 0xe:
  case 0x3a:
  case 100:
  case 0x90:
  case 0x9b:
  case 0xa0:
  case 0xad:
  case 0xf0:
    goto code_r0x00010b14e438;
  case 5:
    goto code_r0x00010b14e294;
  case 6:
    goto code_r0x00010b14e2a8;
  case 7:
    break;
  case 8:
    goto code_r0x00010b14e2bc;
  case 9:
  case 0x3e:
  case 0x5f:
  case 0x96:
  case 0xc2:
  case 0xfa:
    goto code_r0x00010b14e3b0;
  case 10:
  case 0x60:
  case 0x97:
    goto code_r0x00010b14e348;
  case 0xb:
  case 0x4e:
  case 0x5d:
  case 0x61:
  case 0x98:
  case 0xb2:
  case 0xb8:
  case 0xbd:
    goto code_r0x00010b14e444;
  case 0xc:
  case 0x13:
  case 0x16:
  case 0x1b:
  case 0x2c:
  case 0x2f:
  case 0x48:
  case 0x62:
  case 0x69:
  case 0x6c:
  case 0x71:
  case 0x82:
  case 0x85:
  case 0x99:
  case 0xa7:
  case 0xb1:
  case 0xb5:
  case 0xc9:
  case 0xcc:
  case 0xd1:
  case 0xe2:
  case 0xe5:
  case 0xff:
    goto code_r0x00010b14e430;
  case 0xd:
  case 0x1a:
  case 0x1c:
  case 0x49:
  case 0x50:
  case 99:
  case 0x70:
  case 0x72:
  case 0x9a:
  case 0xb4:
  case 0xd0:
  case 0xd2:
    goto code_r0x00010b14e3fc;
  case 0xf:
  case 0x44:
  case 0x65:
  case 0x9c:
  case 0xc5:
  case 0xf5:
    goto code_r0x00010b14e33c;
  case 0x10:
  case 0x66:
  case 0xc6:
    goto code_r0x00010b14e34c;
  case 0x11:
  case 0x34:
  case 0x67:
  case 0x8a:
  case 0xa2:
  case 0xab:
  case 0xb6:
  case 199:
  case 0xea:
    goto code_r0x00010b14e404;
  case 0x12:
  case 0x2b:
  case 0x57:
  case 0x68:
  case 0x81:
  case 0xa3:
  case 0xa6:
  case 0xac:
  case 200:
  case 0xe1:
    goto code_r0x00010b14e434;
  case 0x14:
  case 0x17:
  case 0x2d:
  case 0x30:
  case 0x33:
  case 0x40:
  case 0x5a:
  case 0x6a:
  case 0x6d:
  case 0x83:
  case 0x86:
  case 0x89:
  case 0xb3:
  case 0xbe:
  case 0xca:
  case 0xcd:
  case 0xe3:
  case 0xe6:
  case 0xe9:
    goto code_r0x00010b14e448;
  default:
    goto code_r0x00010b14e40c;
  case 0x18:
  case 0x42:
  case 0x43:
  case 0x4d:
  case 0x54:
  case 0x59:
  case 0x6e:
  case 0xa1:
  case 0xc4:
  case 0xce:
    goto code_r0x00010b14e3f4;
  case 0x19:
  case 0x39:
  case 0x58:
  case 0x6f:
  case 0x8f:
  case 0x9e:
  case 0xa4:
  case 0xa5:
  case 0xcf:
  case 0xef:
    goto code_r0x00010b14e42c;
  case 0x1d:
  case 0x73:
  case 0xbb:
  case 0xd3:
    goto code_r0x00010b14e414;
  case 0x1f:
  case 0x27:
  case 0x37:
  case 0x51:
  case 0x56:
  case 0x75:
  case 0x7d:
  case 0x8d:
  case 0xbf:
  case 0xd5:
  case 0xdd:
  case 0xed:
    goto code_r0x00010b14e440;
  case 0x20:
  case 0x45:
  case 0x76:
  case 0xa8:
  case 0xd6:
    goto code_r0x00010b14e340;
  case 0x21:
  case 0x77:
  case 0xd7:
  case 0xfb:
    goto code_r0x00010b14e350;
  case 0x22:
  case 0x78:
  case 0xd8:
    goto code_r0x00010b14e380;
  case 0x23:
  case 0x79:
  case 0xd9:
    goto code_r0x00010b14e44c;
  case 0x24:
  case 0x25:
  case 0x55:
  case 0x7a:
  case 0x7b:
  case 0xda:
  case 0xdb:
    goto code_r0x00010b14e410;
  case 0x29:
  case 0x53:
  case 0x7f:
  case 0x9f:
  case 0xaf:
  case 0xdf:
  case 0xfc:
    goto code_r0x00010b14e408;
  case 0x2a:
  case 0x80:
  case 0xe0:
    goto code_r0x00010b14e384;
  case 0x31:
  case 0x87:
  case 0xe7:
    goto code_r0x00010b14e390;
  case 0x35:
  case 0x4f:
  case 0x5b:
  case 0x8b:
  case 0xeb:
    goto code_r0x00010b14e418;
  case 0x38:
  case 0x5e:
  case 0x8e:
  case 0xb0:
  case 0xc1:
  case 0xee:
    goto code_r0x00010b14e39c;
  case 0x3b:
  case 0x4b:
  case 0x91:
  case 0xf1:
    goto code_r0x00010b14e428;
  case 0x3c:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0xf2:
  case 0xf6:
  case 0xf7:
  case 0xf8:
    goto code_r0x00010b14e38c;
  case 0x3f:
  case 0xaa:
  case 0xc3:
    goto code_r0x00010b14e3c4;
  case 0x41:
  case 0x46:
  case 0xa9:
    goto code_r0x00010b14e344;
  case 0x4a:
  case 0xf4:
    goto code_r0x00010b14e400;
  case 0x5c:
  case 0xbc:
  case 0xfe:
    goto code_r0x00010b14e41c;
  case 0x9d:
    goto code_r0x00010b14e338;
  case 0xb9:
    goto code_r0x00010b14e3c0;
  case 0xc0:
    goto code_r0x00010b14e45c;
  case 0xf3:
    goto code_r0x00010b14e3a8;
  case 0xfd:
    goto code_r0x00010b14e420;
  }
  FUN_10b113e08(pppppppuVar8,pppppppuVar7);
  func_0x00010b15039c();
  func_0x00010b14fd7c();
  pppppppuVar8 = param_1 + 0x1d;
  pppppppuVar7 = param_1 + 0x25;
code_r0x00010b14e294:
  FUN_10b1ab8c8(pppppppuVar8,pppppppuVar7);
  pppppppuVar8 = (undefined8 *******)param_1[0x1d];
  if (pppppppuVar8 == (undefined8 *******)0x0) {
code_r0x00010b14e39c:
    unaff_x20 = (undefined8 *******)0x0;
    unaff_x21 = (undefined8 *******)0x1;
  }
  else {
    param_1[0x27] = pppppppuVar8[4];
code_r0x00010b14e2a8:
    ppppppuVar11 = pppppppuVar8[5];
    param_1[0x28] = ppppppuVar11;
    if (ppppppuVar11 != (undefined8 ******)0x0) {
      do {
        func_0x00010b14ea0c();
        iVar10 = extraout_w10;
code_r0x00010b14e2bc:
      } while (iVar10 != 0);
    }
    func_0x00010b14fd74(param_1 + 0x1a);
    func_0x00010b1502e8();
    pppppppuVar9 = param_1 + 0x2b;
    FUN_10b1448cc();
    if (((ulong)pppppppuVar9 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x2f) = 1;
      func_0x00010b14fcac(param_1 + 0x2b);
      return;
    }
code_r0x00010b14e2d8:
    pppppppuVar7 = param_1 + 0x29;
    FUN_10b13d8d0(pppppppuVar7,param_1 + 0x2b);
    func_0x00010b14fa7c();
    func_0x00010b14fa84();
    unaff_x21 = (undefined8 *******)param_1[0x27];
    pppppppuStack_78 = (undefined8 *******)param_1[0x28];
    pppppppuStack_80 = unaff_x21;
    if (pppppppuStack_78 != (undefined8 *******)0x0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    ppppppuStack_70 = param_1[0x29];
    ppppppuStack_68 = param_1[0x2a];
    if (ppppppuStack_68 != (undefined8 ******)0x0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_01 != 0);
    }
    ppppppuStack_60 = param_1[0x25];
    ppppppuStack_58 = param_1[0x26];
    if (ppppppuStack_58 != (undefined8 ******)0x0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010b150630();
    pppppppuVar8 = extraout_x8;
    pppppppuVar9 = extraout_x9;
code_r0x00010b14e338:
    unaff_x20 = param_1;
code_r0x00010b14e33c:
    unaff_x20 = unaff_x20 + 0xc;
    *unaff_x20 = pppppppuVar9;
code_r0x00010b14e340:
    unaff_x20[-1] = pppppppuVar8;
code_r0x00010b14e344:
    func_0x00010b14fd4c();
code_r0x00010b14e348:
    pppppppuVar8 = &pppppppuStack_80;
code_r0x00010b14e34c:
    pppppppuVar9 = pppppppuStack_78;
code_r0x00010b14e350:
    *pppppppuVar7 = unaff_x21;
    pppppppuVar7[1] = pppppppuVar9;
    pppppppuStack_80 = (undefined8 *******)0x0;
    pppppppuStack_78 = (undefined8 *******)0x0;
    func_0x00010b150604(pppppppuVar8,ppppppuStack_70,ppppppuStack_60);
    func_0x00010b1502fc(auStack_90);
    func_0x00010b14f688();
    FUN_10b144b9c();
    func_0x00010b14ff14();
    func_0x00010b15046c(param_1[0xc]);
    pppppppuVar7 = &pppppppuStack_80;
code_r0x00010b14e380:
    func_0x00010b13da54(pppppppuVar7);
code_r0x00010b14e384:
    FUN_10b12878c(param_1 + 0x29);
code_r0x00010b14e38c:
    func_0x00010b150354();
code_r0x00010b14e390:
    unaff_x21 = (undefined8 *******)0x0;
    unaff_x20 = (undefined8 *******)0x3;
  }
  func_0x00010b1503a4();
code_r0x00010b14e3a8:
  if ((int)unaff_x21 != 0) {
    func_0x00010b14f52c();
code_r0x00010b14e3b0:
    func_0x000107c316c8(param_1 + 0x1d);
    pppppppuVar8 = param_1 + 0x29;
    pppppppuVar7 = param_1 + 0x17;
code_r0x00010b14e3c0:
    FUN_10b207088(pppppppuVar8,pppppppuVar7);
code_r0x00010b14e3c4:
    pppppppuVar9 = param_1 + 0x29;
    FUN_10b113ed8();
    if (((ulong)pppppppuVar9 & 1) != 0) {
code_r0x00010b14e3d0:
      pppppppuVar9 = param_1 + 0x29;
      FUN_10b113f00();
      param_1[0x27] = *pppppppuVar9;
      ppppppuVar11 = pppppppuVar9[1];
      param_1[0x28] = ppppppuVar11;
      if (ppppppuVar11 != (undefined8 ******)0x0) {
        do {
          func_0x00010b14ea0c();
          iVar10 = extraout_w10_03;
code_r0x00010b14e3f4:
        } while (iVar10 != 0);
      }
      func_0x00010b150364();
code_r0x00010b14e3fc:
      pppppppuVar8 = (undefined8 *******)param_1[0x27];
code_r0x00010b14e400:
      pppppppuVar9 = (undefined8 *******)pppppppuVar8[1];
code_r0x00010b14e404:
      param_1[0x29] = pppppppuVar9;
code_r0x00010b14e408:
      pppppppuVar8 = (undefined8 *******)pppppppuVar8[2];
code_r0x00010b14e40c:
      param_1[0x2a] = pppppppuVar8;
code_r0x00010b14e410:
      if (pppppppuVar8 != (undefined8 *******)0x0) {
code_r0x00010b14e414:
code_r0x00010b14e418:
        do {
          func_0x00010b14ea0c();
          iVar10 = extraout_w10_04;
code_r0x00010b14e41c:
        } while (iVar10 != 0);
      }
code_r0x00010b14e420:
      func_0x00010b14fd74(param_1 + 0x20);
      goto code_r0x00010b14e428;
    }
    *(undefined1 *)(param_1 + 0x2f) = 2;
    func_0x00010b14f0e8();
    ppppppuVar11 = param_1[0x29];
    if (((ulong)ppppppuVar11[0xb] & 1) != 0) {
      func_0x00010b14f014();
      func_0x00010b14efec(*param_1);
      return;
    }
    func_0x00010b1500dc();
    if ((bool)in_CY) {
      pppppuVar12 = ppppppuVar11[0xc];
      func_0x00010b14ea1c();
      if (extraout_x10 != 0) {
        func_0x00010552fc6c();
code_r0x00010b14e6ac:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b14e6b0);
        (*pcVar5)();
      }
      func_0x00010b14e8b4(extraout_x8_01 - (long)pppppuVar12);
      uVar1 = extraout_x9_03;
      if ((bool)in_CY) {
        uVar1 = extraout_x8_02;
      }
      if (uVar1 != 0) {
        if (uVar1 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto code_r0x00010b14e6ac;
        }
        __Znwm(uVar1 << 3);
      }
      func_0x00010b14e894();
      func_0x00010b1500b8();
      if (pppppuVar12 != (undefined8 *****)0x0) {
        func_0x00010b14f3dc();
      }
    }
    else {
      *unaff_x25 = param_1;
      unaff_x25 = unaff_x25 + 1;
    }
    ppppppuVar11[0xd] = unaff_x25;
    func_0x00010b14f014();
    return;
  }
code_r0x00010b14e4f8:
  func_0x00010b14fa8c();
  func_0x00010b14fa94();
  func_0x00010b14faa4();
  uVar6 = (int)unaff_x20 == 3;
  if ((bool)uVar6) {
    *param_1 = (undefined8 ******)0x0;
    *(undefined1 *)(param_1 + 0x2f) = 4;
    func_0x00010b14f9d4();
    if ((bool)uVar6) {
      func_0x00010b150200();
      func_0x00010b14f574();
      func_0x00010b14f2a0();
      pppppppuStack_80 = unaff_x22;
      pppppppuStack_78 = unaff_x20;
      func_0x00010b15018c();
      func_0x00010b14ff94();
      if ((bool)uVar6) {
        func_0x00010b1505a0();
        unaff_x22 = pppppppuStack_80;
        if (unaff_x20 != (undefined8 *******)0x0) {
          do {
            func_0x00010b14ea74();
          } while (extraout_w11 != 0);
          unaff_x22 = pppppppuStack_80;
          if (extraout_x9_01 == 0) {
            func_0x00010b14eac4();
            func_0x00010b14f490();
            unaff_x22 = pppppppuStack_80;
          }
        }
      }
      else {
        func_0x00010b14f19c();
      }
      ppppppuVar11 = unaff_x22[0x12];
      unaff_x22[0x12] = (undefined8 ******)0x0;
      func_0x00010b150194();
      if (ppppppuVar11 == (undefined8 ******)0x0) {
        __ZNSt3__118condition_variable10notify_allEv(unaff_x22 + 3);
      }
      else {
        (*(code *)(*ppppppuVar11)[2])(ppppppuVar11,&pppppppuStack_80);
        func_0x00010b14ef4c();
      }
      if (pppppppuStack_78 != (undefined8 *******)0x0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11_00 != 0);
        if (extraout_x9_02 == 0) {
          func_0x00010b14eac4();
          func_0x00010b14f490();
        }
      }
    }
    else {
      func_0x00010b14f0ac(&pppppppuStack_80);
      func_0x00010b14fe78();
      FUN_10b1418c8();
      func_0x00010b14f350();
    }
  }
  func_0x00010b1419fc(param_1 + 2);
  func_0x00010b14efd4();
  return;
code_r0x00010b14e428:
  func_0x00010b150220();
code_r0x00010b14e42c:
  pppppppuVar7 = param_1 + 0x2d;
code_r0x00010b14e430:
  FUN_10b1448cc();
code_r0x00010b14e434:
  if (((ulong)pppppppuVar7 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2f) = 3;
    func_0x00010b14fcac(param_1 + 0x2d);
    return;
  }
code_r0x00010b14e438:
  func_0x00010b1502dc();
  func_0x00010b14fa2c();
code_r0x00010b14e440:
  func_0x00010b14fa34();
code_r0x00010b14e444:
  unaff_x21 = (undefined8 *******)param_1[0x27];
  unaff_x22 = (undefined8 *******)param_1[0x28];
code_r0x00010b14e448:
  pppppppuStack_80 = unaff_x21;
  pppppppuStack_78 = unaff_x22;
code_r0x00010b14e44c:
  if (unaff_x22 != (undefined8 *******)0x0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_05 != 0);
  }
code_r0x00010b14e45c:
  ppppppuVar11 = param_1[0x29];
  ppppppuVar3 = param_1[0x2a];
  ppppppuStack_70 = ppppppuVar11;
  ppppppuStack_68 = ppppppuVar3;
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_06 != 0);
  }
  ppppppuVar2 = param_1[0x2b];
  ppppppuVar4 = param_1[0x2c];
  ppppppuStack_60 = ppppppuVar2;
  ppppppuStack_58 = ppppppuVar4;
  if (ppppppuVar4 != (undefined8 ******)0x0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_07 != 0);
  }
  func_0x00010b150564();
  param_1[0x12] = extraout_x9_00;
  param_1[0x11] = extraout_x8_00;
  func_0x00010b14fd4c();
  *pppppppuVar7 = unaff_x21;
  pppppppuVar7[1] = unaff_x22;
  pppppppuStack_80 = (undefined8 *******)0x0;
  pppppppuStack_78 = (undefined8 *******)0x0;
  pppppppuVar7[2] = ppppppuVar11;
  pppppppuVar7[3] = ppppppuVar3;
  ppppppuStack_70 = (undefined8 ******)0x0;
  ppppppuStack_68 = (undefined8 ******)0x0;
  pppppppuVar7[4] = ppppppuVar2;
  pppppppuVar7[5] = ppppppuVar4;
  ppppppuStack_60 = (undefined8 ******)0x0;
  ppppppuStack_58 = (undefined8 ******)0x0;
  param_1[0x13] = pppppppuVar7;
  func_0x00010b150308(auStack_90);
  func_0x00010b14f688();
  FUN_10b144b9c();
  func_0x00010b14ff14();
  func_0x00010b15046c(param_1[0x12]);
  func_0x00010b13da84(&pppppppuStack_80);
  func_0x00010b14fd60();
  func_0x00010b15035c();
  func_0x00010b15034c();
  func_0x00010b150394();
  unaff_x20 = (undefined8 *******)0x3;
  goto code_r0x00010b14e4f8;
}



/* Entry: 10b14e810; end: 10b14e893;  */

void FUN_10b14e810(undefined8 param_1,undefined8 param_2,code *param_3,code *param_4)

{
  bool bVar1;
  code *UNRECOVERED_JUMPTABLE_02;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  UNRECOVERED_JUMPTABLE_02 = (code *)(ulong)(byte)param_3[0x178];
  UNRECOVERED_JUMPTABLE = (code *)&UNK_10e55b440;
  switch(param_3[0x178]) {
  case (code)0x0:
  case (code)0x39:
  case (code)0x91:
  case (code)0xf5:
    func_0x00010b15039c();
    goto code_r0x00010b14e87c;
  case (code)0x1:
    func_0x00010b14fa7c();
    func_0x00010b14fa84();
    func_0x00010b150354();
    func_0x00010b1503a4();
    goto code_r0x00010b14e874;
  case (code)0x2:
    func_0x00010b150364();
    break;
  case (code)0x3:
    func_0x00010b14fa2c();
    func_0x00010b14fa34();
    func_0x00010b15035c();
    func_0x00010b15034c();
    break;
  case (code)0x4:
    goto code_r0x00010b14e880;
  case (code)0x5:
  case (code)0x3a:
  case (code)0x5b:
  case (code)0x92:
  case (code)0xbe:
  case (code)0xf6:
    UNRECOVERED_JUMPTABLE_02 = *(code **)(UNRECOVERED_JUMPTABLE_02 + 0x10);
  case (code)0xff:
                    /* WARNING: Could not recover jumptable at 0x00010b14e97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return;
  case (code)0x7:
  case (code)0x4a:
  case (code)0x59:
  case (code)0x5d:
  case (code)0x94:
  case (code)0xae:
  case (code)0xb4:
  case (code)0xb9:
    return;
  case (code)0x8:
  case (code)0xf:
  case (code)0x12:
  case (code)0x17:
  case (code)0x28:
  case (code)0x2b:
  case (code)0x44:
  case (code)0x5e:
  case (code)0x65:
  case (code)0x68:
  case (code)0x6d:
  case (code)0x7e:
  case (code)0x81:
  case (code)0x95:
  case (code)0xa3:
  case (code)0xad:
  case (code)0xb1:
  case (code)0xc5:
  case (code)0xc8:
  case (code)0xcd:
  case (code)0xde:
  case (code)0xe1:
  case (code)0xfb:
  case (code)0xfc:
    UNRECOVERED_JUMPTABLE_02 = *(code **)param_3;
  case (code)0xe:
  case (code)0x27:
  case (code)0x53:
  case (code)0x64:
  case (code)0x7d:
  case (code)0x9f:
  case (code)0xa2:
  case (code)0xa8:
  case (code)0xc4:
  case (code)0xdd:
    UNRECOVERED_JUMPTABLE_02 = *(code **)(UNRECOVERED_JUMPTABLE_02 + 8);
  case (code)0xa:
  case (code)0x36:
  case (code)0x60:
  case (code)0x8c:
  case (code)0x97:
  case (code)0x9c:
  case (code)0xa9:
  case (code)0xec:
                    /* WARNING: Could not recover jumptable at 0x00010b14e9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return;
  case (code)0xb:
  case (code)0x40:
  case (code)0x61:
  case (code)0x98:
  case (code)0xc1:
  case (code)0xf1:
    return;
  case (code)0x10:
  case (code)0x13:
  case (code)0x29:
  case (code)0x2c:
  case (code)0x2f:
  case (code)0x3c:
  case (code)0x56:
  case (code)0x66:
  case (code)0x69:
  case (code)0x7f:
  case (code)0x82:
  case (code)0x85:
  case (code)0xaf:
  case (code)0xba:
  case (code)0xc6:
  case (code)0xc9:
  case (code)0xdf:
  case (code)0xe2:
  case (code)0xe5:
    UNRECOVERED_JUMPTABLE = *(code **)UNRECOVERED_JUMPTABLE_02;
  case (code)0x1f:
  case (code)0x75:
  case (code)0xd5:
    bVar1 = (bool)ExclusiveMonitorPass(UNRECOVERED_JUMPTABLE_02,0x10);
    if (bVar1) {
      *(code **)UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE + 1;
      ExclusiveMonitorsStatus();
    }
    return;
  case (code)0x14:
  case (code)0x3e:
  case (code)0x3f:
  case (code)0x49:
  case (code)0x50:
  case (code)0x55:
  case (code)0x6a:
  case (code)0x9d:
  case (code)0xc0:
  case (code)0xca:
    UNRECOVERED_JUMPTABLE = (code *)0x6e6f63353170616e;
    param_3 = UNRECOVERED_JUMPTABLE_02;
  case (code)0x9:
  case (code)0x16:
  case (code)0x18:
  case (code)0x45:
  case (code)0x4c:
  case (code)0x5f:
  case (code)0x6c:
  case (code)0x6e:
  case (code)0x96:
  case (code)0xb0:
  case (code)0xcc:
  case (code)0xce:
                    /* WARNING: Could not recover jumptable at 0x00010b14e9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_3);
    return;
  case (code)0x19:
  case (code)0x6f:
  case (code)0xb7:
  case (code)0xcf:
    return;
  case (code)0x1b:
  case (code)0x23:
  case (code)0x33:
  case (code)0x4d:
  case (code)0x52:
  case (code)0x71:
  case (code)0x79:
  case (code)0x89:
  case (code)0xbb:
  case (code)0xd1:
  case (code)0xd9:
  case (code)0xe9:
    return;
  case (code)0x1c:
  case (code)0x41:
  case (code)0x72:
  case (code)0xa4:
  case (code)0xd2:
    return;
  case (code)0x1e:
  case (code)0x74:
  case (code)0xd4:
    return;
  case (code)0x20:
  case (code)0x21:
  case (code)0x51:
  case (code)0x76:
  case (code)0x77:
  case (code)0xd6:
  case (code)0xd7:
    return;
  case (code)0x26:
  case (code)0x7c:
  case (code)0xdc:
    in_register_00005008 = *(undefined8 *)(param_3 + 8);
    param_1 = *(undefined8 *)param_3;
    in_register_00005028 = unaff_x20[1];
    param_2 = *unaff_x20;
  case (code)0x38:
  case (code)0x8e:
  case (code)0x8f:
  case (code)0x90:
  case (code)0xee:
  case (code)0xf2:
  case (code)0xf3:
  case (code)0xf4:
    unaff_x20[1] = in_register_00005008;
    *unaff_x20 = param_1;
  case (code)0x2d:
  case (code)0x83:
  case (code)0xe3:
    *(undefined8 *)(param_3 + 8) = in_register_00005028;
    *(undefined8 *)param_3 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
    return;
  case (code)0x31:
  case (code)0x4b:
  case (code)0x57:
  case (code)0x87:
  case (code)0xe7:
    return;
  case (code)0x34:
  case (code)0x5a:
  case (code)0x8a:
  case (code)0xac:
  case (code)0xbd:
  case (code)0xea:
    param_4 = param_3 + 0x38;
    param_3 = (code *)&stack0xffffffffffffffe0;
  case (code)0xef:
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt13exception_ptrC1ERKS__110346190)(param_3,param_4);
    return;
  case (code)0x3b:
  case (code)0xa6:
  case (code)0xbf:
    return;
  case (code)0x3d:
  case (code)0x42:
  case (code)0xa5:
  case (code)0x6:
  case (code)0x5c:
  case (code)0x93:
  case (code)0xc:
  case (code)0x62:
  case (code)0xc2:
  case (code)0x1d:
  case (code)0x73:
  case (code)0xd3:
  case (code)0xf7:
  case (code)0xfe:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
    return;
  case (code)0x46:
  case (code)0xf0:
    UNRECOVERED_JUMPTABLE_02 = *(code **)param_3;
  case (code)0xd:
  case (code)0x30:
  case (code)0x63:
  case (code)0x86:
  case (code)0x9e:
  case (code)0xa7:
  case (code)0xb2:
  case (code)0xc3:
  case (code)0xe6:
    UNRECOVERED_JUMPTABLE_02 = *(code **)(UNRECOVERED_JUMPTABLE_02 + 0x10);
  case (code)0x25:
  case (code)0x4f:
  case (code)0x7b:
  case (code)0x9b:
  case (code)0xab:
  case (code)0xdb:
  case (code)0xf8:
  default:
                    /* WARNING: Could not recover jumptable at 0x00010b14e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)(param_3);
    return;
  case (code)0x58:
  case (code)0xb8:
  case (code)0xfa:
  case (code)0xfd:
    return;
  case (code)0x99:
    return;
  case (code)0xb5:
    return;
  case (code)0xbc:
    return;
  case (code)0xf9:
    UNRECOVERED_JUMPTABLE_02 = *(code **)(*unaff_x21 + 0x10);
  case (code)0x37:
  case (code)0x47:
  case (code)0x8d:
  case (code)0xed:
  case (code)0x15:
  case (code)0x35:
  case (code)0x54:
  case (code)0x6b:
  case (code)0x8b:
  case (code)0x9a:
  case (code)0xa0:
  case (code)0xa1:
  case (code)0xcb:
  case (code)0xeb:
                    /* WARNING: Could not recover jumptable at 0x00010b14e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return;
  }
  func_0x00010b150394();
code_r0x00010b14e874:
  func_0x00010b14fa8c();
  func_0x00010b14fa94();
code_r0x00010b14e87c:
  func_0x00010b14faa4();
code_r0x00010b14e880:
  func_0x00010b1419fc(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_3);
  return;
}



/* Entry: 10b14e894; end: 10b150823;  */

void FUN_10b14e894(long param_1)

{
  undefined8 unaff_x19;
  long unaff_x22;
  long unaff_x23;
  
  *(undefined8 *)(param_1 + unaff_x22) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)((undefined8 *)(param_1 + unaff_x22) + -unaff_x23);
  return;
}



/* Entry: 10b150824; end: 10b150887;  */

undefined8 * FUN_10b150824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf050;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  func_0x0001052b8c70(param_1 + 0x10);
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  return param_1;
}



/* Entry: 10b150888; end: 10b15096b;  */

undefined8 * FUN_10b150888(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = param_1;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x90);
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *puVar1 = &PTR_FUN_110cbf050;
    if ((((*(byte *)(puVar1 + 0x18) & 1) == 0) && ((*(byte *)(puVar1 + 0xe) & 1) == 0)) &&
       (unaff_x20 = (long *)puVar1[0x19], unaff_x20 != (long *)0x0)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                ((undefined1 *)((long)register0x00000008 + -0x40),puVar1 + 1);
      func_0x00010b151174();
      (**(code **)(*unaff_x20 + 0x60))((undefined1 *)((long)register0x00000008 + -0x68),unaff_x20);
      FUN_10b131cc0((undefined1 *)((long)register0x00000008 + -0x68));
      func_0x00010b15119c();
      func_0x00010b1511a4();
      param_2 = puVar2;
    }
    FUN_10b151140(puVar1 + 0x1b);
    func_0x00010b125864(puVar1 + 0x19);
    func_0x0001052a038c(puVar1 + 0x10);
    FUN_10b0f7ab4(puVar1 + 10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1 + 4);
    param_1 = puVar1 + 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b151184(*(undefined8 *)((long)register0x00000008 + -0x28));
    if (extraout_x9 == extraout_x8) break;
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_10b15096c;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    unaff_x19 = puVar1;
  }
  return puVar1;
}



/* Entry: 10b15096c; end: 10b15096f;  */

undefined8 * FUN_10b15096c(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = param_1;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x90);
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *puVar1 = &PTR_FUN_110cbf050;
    if ((((*(byte *)(puVar1 + 0x18) & 1) == 0) && ((*(byte *)(puVar1 + 0xe) & 1) == 0)) &&
       (unaff_x20 = (long *)puVar1[0x19], unaff_x20 != (long *)0x0)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                ((undefined1 *)((long)register0x00000008 + -0x40),puVar1 + 1);
      func_0x00010b151174();
      (**(code **)(*unaff_x20 + 0x60))((undefined1 *)((long)register0x00000008 + -0x68),unaff_x20);
      FUN_10b131cc0((undefined1 *)((long)register0x00000008 + -0x68));
      func_0x00010b15119c();
      func_0x00010b1511a4();
      param_2 = puVar2;
    }
    FUN_10b151140(puVar1 + 0x1b);
    func_0x00010b125864(puVar1 + 0x19);
    func_0x0001052a038c(puVar1 + 0x10);
    FUN_10b0f7ab4(puVar1 + 10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1 + 4);
    param_1 = puVar1 + 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b151184(*(undefined8 *)((long)register0x00000008 + -0x28));
    if (extraout_x9 == extraout_x8) break;
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_10b15096c;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    unaff_x19 = puVar1;
  }
  return puVar1;
}



/* Entry: 10b150970; end: 10b150983;  */

void FUN_10b150970(void)

{
  FUN_10b150888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b150984; end: 10b1509bb;  */

void FUN_10b150984(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2 + 0x20);
  return;
}



/* Entry: 10b1509bc; end: 10b151093;  */

void FUN_10b1509bc(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined ****ppppuVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_748 [64];
  undefined1 uStack_708;
  undefined1 auStack_700 [32];
  ulong uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  char cStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 auStack_6a8 [72];
  undefined1 auStack_660 [32];
  undefined1 auStack_640 [384];
  undefined1 auStack_4c0 [80];
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 uStack_438;
  undefined ***pppuStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined *puStack_408;
  ulong uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  ulong uStack_3e8;
  undefined4 uStack_3e0;
  undefined1 auStack_3d8 [24];
  undefined1 uStack_3c0;
  long *plStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined1 uStack_3a0;
  undefined1 uStack_300;
  undefined1 auStack_2f8 [72];
  undefined1 uStack_2b0;
  undefined1 uStack_2ac;
  undefined1 uStack_2a8;
  undefined1 uStack_2a4;
  undefined1 auStack_298 [64];
  undefined1 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  char cStack_238;
  undefined ***pppuStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined1 auStack_218 [72];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined4 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined1 uStack_160;
  undefined ***pppuStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 auStack_140 [72];
  undefined1 auStack_f8 [24];
  undefined1 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    auStack_80[0] = 0;
    uStack_68 = 0;
    func_0x000105637458(auStack_c8,param_1 + 0x80);
    FUN_10b15116c();
    func_0x0001052a038c(auStack_c8);
    func_0x000107c279a4(auStack_80);
  }
  else {
    uStack_d8 = 0;
    lStack_d0 = 0;
    lVar1 = *(long *)(param_1 + 0xe0);
    if (((lVar1 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_d0 = lVar1, lVar1 == 0))
       || (uStack_d8 = *(ulong *)(param_1 + 0xd8), uStack_d8 == 0)) {
      auStack_f8[0] = 0;
      uStack_e0 = 0;
      func_0x000107c278b8(&pppuStack_158,&UNK_10e55a968);
      func_0x000107c278b8(&uStack_178,&UNK_10f7307c2);
      uStack_410 = uStack_148;
      uStack_160 = 1;
      uStack_418 = uStack_150;
      pppuStack_420 = pppuStack_158;
      uStack_150 = 0;
      pppuStack_158 = (undefined ***)0x0;
      uStack_148 = 0;
      puStack_408 = (undefined *)0x5;
      uStack_3f8 = uStack_170;
      uStack_400 = uStack_178;
      plStack_3f0 = plStack_168;
      uStack_170 = 0;
      uStack_178 = 0;
      plStack_168 = (long *)0x0;
      uStack_3e8 = CONCAT71(uStack_3e8._1_7_,1);
      func_0x0001052b8c70(auStack_140,&pppuStack_420);
      FUN_10b15116c();
      func_0x0001052a038c(auStack_140);
      func_0x0001052a03ac(&pppuStack_420);
      func_0x000107c279a4(&uStack_178);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_158);
      func_0x000107c279a4(auStack_f8);
    }
    else {
      FUN_10b13f754(auStack_198,param_2);
      func_0x00010b206f0c(&pppuStack_420,auStack_198);
      uVar5 = uStack_418;
      ppppuVar3 = (undefined ****)pppuStack_420;
      if (-1 < (long)uStack_410) {
        uVar5 = uStack_410 >> 0x38;
        ppppuVar3 = &pppuStack_420;
      }
      FUN_10b205f70(auStack_1b0,ppppuVar3,uVar5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_420);
      plVar2 = *(long **)(param_1 + 200);
      (**(code **)(*plVar2 + 0x88))(plVar2,param_1 + 8);
      if ((long)plVar2 < 0) {
        func_0x00010b151194(auStack_1d0);
        func_0x000107c278b8(&pppuStack_230,&UNK_10e55a968);
        FUN_10b141be0(&uStack_250,&UNK_10f7307df);
        uStack_410 = uStack_220;
        uStack_418 = uStack_228;
        pppuStack_420 = pppuStack_230;
        uStack_220 = 0;
        pppuStack_230 = (undefined ***)0x0;
        uStack_228 = 0;
        puStack_408 = (undefined *)0x4;
        uStack_400 = uStack_400 & 0xffffffffffffff00;
        uVar5 = uStack_3e8 >> 8;
        uStack_3e8 = uStack_3e8 & 0xffffffffffffff00;
        if (cStack_238 == '\x01') {
          uStack_3f8 = uStack_248;
          uStack_400 = uStack_250;
          plStack_3f0 = plStack_240;
          plStack_240 = (long *)0x0;
          uStack_250 = 0;
          uStack_248 = 0;
          uStack_3e8 = CONCAT71((int7)uVar5,1);
        }
        func_0x0001052b8c70(auStack_218,&pppuStack_420);
        FUN_10b15116c();
        func_0x0001052a038c(auStack_218);
        func_0x0001052a03ac(&pppuStack_420);
        func_0x000107c279a4(&uStack_250);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_230);
        func_0x000107c279a4(auStack_1d0);
      }
      else {
        if (*(char *)(param_1 + 0x48) == '\x01') {
          plVar6 = *(long **)(param_1 + 0x40);
        }
        else {
          plVar6 = plVar2;
          __ZNSt3__16chrono12system_clock3nowEv();
          plVar6 = plVar6 + 75600000000;
        }
        auStack_298[0] = 0;
        uStack_258 = 0;
        if (*(int *)(param_1 + 0x78) != 0) {
          uStack_410 = 0;
          uStack_418 = 0;
          pppuStack_420 = (undefined ***)&PTR_FUN_110cfd560;
          puStack_408 = &DAT_11383d918;
          uStack_3e0 = 0;
          plStack_3f0 = (long *)0x0;
          uStack_400 = 0;
          uStack_3f8 = 0;
          ppppuVar3 = &pppuStack_420;
          FUN_10b117a1c();
          *(bool *)(ppppuVar3 + 2) = *(int *)(param_1 + 0x78) == 1;
          puVar4 = auStack_298;
          func_0x00010b114b5c();
          FUN_10b114b98();
          FUN_10b4d1804(&uStack_470,&pppuStack_420);
          uVar5 = *(ulong *)(puVar4 + 8);
          if ((uVar5 & 1) != 0) {
            uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
          }
          func_0x000107c3024c(puVar4 + 0x10,&uStack_470,uVar5);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_470);
          FUN_10b523f08(&pppuStack_420);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&pppuStack_420,auStack_1b0);
        puStack_408 = (undefined *)0x100000001;
        uStack_3f8 = 0;
        uStack_400 = 0;
        uStack_3e8 = 0;
        uStack_3e0 = uStack_180;
        plStack_3f0 = plVar2;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_3d8,auStack_198);
        uStack_3c0 = *(undefined1 *)(param_1 + 0x38);
        uStack_3b0 = 0;
        uStack_3a8 = 0;
        uStack_3a0 = 0;
        uStack_300 = 0;
        plStack_3b8 = plVar6;
        FUN_10b12110c(auStack_2f8,auStack_298);
        uVar5 = uStack_d8;
        uStack_2b0 = 0;
        uStack_2ac = 0;
        uStack_2a8 = 0;
        uStack_2a4 = 0;
        FUN_10b202630(&uStack_470,param_1 + 8);
        FUN_10b202630(auStack_4c0,auStack_1b0);
        func_0x00010b1213e8(auStack_640,&pppuStack_420);
        FUN_10b1f6d2c(uVar5,(long *)(param_1 + 200),&uStack_470,auStack_4c0,auStack_640,plVar2);
        func_0x00010b1213b8(auStack_640);
        func_0x00010b121e00(auStack_4c0);
        func_0x00010b121e00(&uStack_470);
        if ((uVar5 & 1) == 0) {
          func_0x00010b151194(auStack_660);
          func_0x000107c278b8(&uStack_6c0,&UNK_10e55a968);
          FUN_10b121e60(&uStack_6e0,&UNK_10f7307fe);
          uStack_460 = uStack_6b0;
          uStack_468 = uStack_6b8;
          uStack_470 = uStack_6c0;
          uStack_6b8 = 0;
          uStack_6b0 = 0;
          uStack_6c0 = 0;
          uStack_458 = 4;
          uStack_450 = uStack_450 & 0xffffffffffffff00;
          uStack_438 = cStack_6c8 == '\x01';
          if ((bool)uStack_438) {
            uStack_448 = uStack_6d8;
            uStack_450 = uStack_6e0;
            uStack_440 = uStack_6d0;
            uStack_6d8 = 0;
            uStack_6d0 = 0;
            uStack_6e0 = 0;
          }
          func_0x0001052b8c70(auStack_6a8,&uStack_470);
          puVar4 = auStack_660;
          FUN_10b15116c();
          func_0x0001052a038c(auStack_6a8);
          func_0x0001052a03ac(&uStack_470);
          func_0x000107c279a4(&uStack_6e0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_6c0);
        }
        else {
          if (*(char *)(param_1 + 0x70) == '\x01') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (param_1 + 0x50,param_2);
            *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x18);
          }
          else {
            FUN_10b132244(param_1 + 0x50,param_2);
          }
          func_0x00010b151194(auStack_700);
          auStack_748[0] = 0;
          uStack_708 = 0;
          puVar4 = auStack_700;
          FUN_10b15116c();
          func_0x0001052a038c(auStack_748);
        }
        func_0x000107c279a4(puVar4);
        func_0x00010b1213b8(&pppuStack_420);
        FUN_10b121398(auStack_298);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
    }
    func_0x00010b1257f8(&uStack_d8);
  }
  return;
}



/* Entry: 10b151094; end: 10b151137;  */

undefined1 * FUN_10b151094(undefined1 *param_1)

{
  long extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long *plVar1;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x00010b151184();
  plVar1 = *(long **)(param_1 + 200);
  uStack_28 = extraout_x9;
  if (plVar1 != (long *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_40,param_1 + 8)
    ;
    func_0x00010b151174();
    (**(code **)(*plVar1 + 0x60))(auStack_68,plVar1,auStack_90);
    param_1 = auStack_68;
    FUN_10b131cc0();
    func_0x00010b15119c();
    func_0x00010b1511a4();
  }
  func_0x00010b151184(uStack_28);
  if (extraout_x9_00 == extraout_x8) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b15119c();
  func_0x00010b1511a4();
  __Unwind_Resume();
  return (undefined1 *)(ulong)*(uint *)(param_1 + 0x78);
}



/* Entry: 10b151138; end: 10b15113f;  */

undefined4 FUN_10b151138(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



/* Entry: 10b151140; end: 10b15116b;  */

long FUN_10b151140(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}


