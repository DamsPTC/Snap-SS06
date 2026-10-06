/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102eab968; end: 102eab9df;  */

void FUN_102eab968(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0x800000010f1132b0;
  uVar3 = 0xd000000000000013;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xed000064656c6961;
    uVar3 = 0x665f65646f636e65;
  }
  uVar2 = 0x800000010f1132d0;
  uVar4 = 0xd000000000000018;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102eab9e0; end: 102eabab3;  */

uint FUN_102eab9e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (lVar4 == 0) {
    uVar1 = param_1;
    func_0x000107c60980();
    uVar3 = param_1;
    func_0x000107c6097c(param_1);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = 0;
    func_0x000102eac804(0);
    func_0x000107c613fc();
    FUN_102eac644(uVar5,uVar1,uVar3,uVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
    func_0x000107c61574(uVar3);
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 == 0) {
      return 0;
    }
  }
  func_0x000107c6157c(lVar4);
  FUN_102eac37c(param_1,param_2);
  func_0x000107c61574(lVar4);
  return (uint)param_1 & 1;
}



/* Entry: 102eabab4; end: 102eabaff;  */

void FUN_102eabab4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102eabb00; end: 102eabc67;  */

int FUN_102eabb00(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102eabb7c;
        goto LAB_102eabb60;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102eabb60:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102eabb7c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102eabc68; end: 102eabca7;  */

void FUN_102eabc68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f265f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db61670;
  func_0x000107c61520(&UNK_10db61670,&UNK_1105e3590);
  puRam0000000112f265f0 = puVar1;
  return;
}



/* Entry: 102eabca8; end: 102eabe6b;  */

ulong FUN_102eabca8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102eabd8c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102eabd90);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___VNInstanceMaskObservation_1126aa790;
    func_0x000107c61168(PTR__OBJC_CLASS___VNInstanceMaskObservation_1126aa790);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___VNInstanceMaskObservation_1126aa790;
    func_0x000107c61168(PTR__OBJC_CLASS___VNInstanceMaskObservation_1126aa790);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102eac33c(0,0x112f26668,&PTR__OBJC_CLASS___VNInstanceMaskObservation_1126aa790);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102eabe6c);
  (*pcVar2)();
}



/* Entry: 102eabe6c; end: 102eac2d7;  */

ulong FUN_102eabe6c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long extraout_x8;
  code *pcVar15;
  long lVar16;
  long alStack_a0 [4];
  undefined1 auStack_80 [16];
  undefined1 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5ef8c();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_80 + lVar1;
  puVar3 = PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001013b9140();
  puVar4 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
  func_0x000107c610f8();
  uVar5 = 0;
  func_0x0001013ae418(0);
  uVar6 = uVar5;
  func_0x0001013b9264();
  puVar7 = puVar9;
  func_0x000107c5f9dc(puVar9,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
  func_0x000107c6142c(puVar9);
  func_0x000107c45af4();
  func_0x000107c61170();
  func_0x0001013b1ec4();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 3;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(undefined **)(puVar7 + 0x20) = puVar3;
  lVar8 = 0;
  func_0x000102eac33c(0,0x112d79948,&PTR__OBJC_CLASS___VNRequest_1126a6c80);
  func_0x000107c61174();
  puVar9 = puVar7;
  func_0x000107c5fc48(puVar7,lVar8);
  func_0x000107c61574(puVar7);
  puStack_70 = (undefined1 *)0x0;
  puVar7 = puVar4;
  func_0x000107c4e5b0();
  func_0x000107c61170(puVar9);
  puVar13 = puStack_70;
  if ((int)puVar7 == 0) {
    puVar12 = puStack_70;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar12);
    func_0x000107c61654();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c614ac(puVar13);
    lVar2 = lVar8;
  }
  else {
    func_0x000107c61174();
    puVar9 = puVar3;
    func_0x000107c50700();
    func_0x000107c61180();
    puVar13 = puVar12;
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170(puVar3);
      puVar3 = puVar4;
LAB_102eac130:
      func_0x000107c61170(puVar3);
      lVar2 = lVar8;
    }
    else {
      lVar8 = 0;
      func_0x000102eac33c(0,0x112f26668,&PTR__OBJC_CLASS___VNInstanceMaskObservation_1126aa790);
      puVar7 = puVar9;
      func_0x000107c5fc54(puVar9,lVar8);
      func_0x000107c61170(puVar9);
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar9 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar9 = puVar7;
        }
        func_0x000107c60480();
      }
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c6142c(puVar7);
        lVar2 = lVar8;
      }
      else {
        if (((ulong)puVar7 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x102eac2d4);
            (*pcVar15)();
          }
          puVar10 = *(undefined1 **)(puVar7 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar10 = (undefined1 *)0x0;
          FUN_102eabca8(0,puVar7);
        }
        func_0x000107c6142c(puVar7);
        puVar11 = puVar10;
        func_0x000107c3db58();
        func_0x000107c61180();
        func_0x000107c5ef74(puVar12);
        func_0x000107c61170();
        func_0x000107c5ef84();
        pcVar15 = *(code **)(lVar16 + 8);
        lVar8 = lVar2;
        (*pcVar15)(puVar12,lVar2);
        if (((ulong)puVar11 & 1) != 0) {
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar4);
          goto LAB_102eac130;
        }
        puVar11 = puVar10;
        func_0x000107c3db58(puVar10);
        func_0x000107c61180();
        func_0x000107c5ef74(puVar12);
        func_0x000107c61170(puVar11);
        func_0x000107c5ef70();
        (*pcVar15)(puVar12,lVar2);
        puStack_70 = (undefined1 *)0x0;
        puVar13 = puVar10;
        func_0x000107c43ddc();
        func_0x000107c61170(puVar11);
        puVar12 = puStack_70;
        if (puVar13 != (undefined1 *)0x0) {
          puVar9 = PTR__OBJC_CLASS___CIImage_1126b3128;
          func_0x000107c610f8(PTR__OBJC_CLASS___CIImage_1126b3128);
          func_0x000107c61174(puVar12);
          func_0x000107c45b18(puVar9);
          func_0x000107c42c78();
          func_0x000107c4094c(param_2);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar9);
          goto LAB_102eac288;
        }
        puVar13 = puStack_70;
        func_0x000107c61174();
        func_0x000107c5ed30(puVar12);
        func_0x000107c61170(puVar13);
        func_0x000107c61654();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar4);
        func_0x000107c614ac(puVar12);
      }
    }
  }
  param_2 = 0;
LAB_102eac288:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78(param_2);
    *(undefined1 **)((long)alStack_a0 + lVar1) = puVar13;
    *(undefined **)((long)alStack_a0 + lVar1 + 8) = puVar4;
    *(undefined1 **)((long)alStack_a0 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
    *(undefined8 *)((long)alStack_a0 + lVar1 + 0x18) = 0x102eac2d8;
    uVar14 = 0x112d3cde0;
    func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
    func_0x000107c61538();
    func_0x000107c604c4();
    func_0x000107c6142c(lVar2);
    if (2 < uVar14) {
      uVar14 = 3;
    }
    return uVar14;
  }
  return param_2;
}



/* Entry: 102eac2d8; end: 102eac37b;  */

ulong FUN_102eac2d8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102eac37c; end: 102eac56b;  */

undefined8 * FUN_102eac37c(double param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong unaff_x19;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
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
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  ulong auStack_240 [3];
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined8 uStack_21c;
  long lStack_208;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  ulong uStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_188 = unaff_x19;
  if ((((*(byte *)(unaff_x20 + 0x14) & 1) == 0) &&
      (uVar3 = param_2, func_0x000107c60980(), uStack_188 = param_2, uVar3 == unaff_x20[0x12])) &&
     (uVar4 = param_2, func_0x000107c6097c(), uVar4 == unaff_x20[0x13])) {
    FUN_102eac824();
    puVar8 = (undefined8 *)0x0;
    if (param_2 != 0) {
      param_1 = 0.0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      puVar8 = &uStack_150;
      func_0x000108245d74(puVar8,0x20e);
      if ((int)puVar8 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        if ((long)uVar3 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac544);
          (*pcVar1)();
        }
        if (0x7fffffff < (long)uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac548);
          (*pcVar1)();
        }
        iVar10 = (int)uVar3;
        uStack_148 = CONCAT44(uStack_148._4_4_,iVar10);
        if ((long)uVar4 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac54c);
          (*pcVar1)();
        }
        if (0x7fffffff < (long)uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac550);
          (*pcVar1)();
        }
        uStack_148 = CONCAT44((int)uVar4,iVar10);
        uStack_150 = CONCAT44(uStack_150._4_4_,1);
        uVar4 = param_2;
        func_0x000107c61558();
        if ((uVar4 & 1) == 0) {
          FUN_102eac9d4();
        }
        if ((long)uVar3 < -0x20000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac564);
          (*pcVar1)();
        }
        if (0x1fffffff < (long)uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac568);
          (*pcVar1)();
        }
        puVar8 = &uStack_150;
        func_0x00010824687c(puVar8,param_2 + 0x20,iVar10 << 2);
        if ((int)puVar8 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          uVar11 = unaff_x20[2];
          func_0x000107c61428(unaff_x20 + 3,auStack_168,0x20,0);
          func_0x000108255998(uVar11,&uStack_150,param_3,unaff_x20 + 3);
          func_0x000107c614a8(auStack_168);
          puVar8 = (undefined8 *)(ulong)((int)uVar11 != 0);
        }
        func_0x000108246064(&uStack_150);
      }
      func_0x000107c6142c(param_2);
      uStack_188 = param_2;
      unaff_x20 = puVar8;
    }
  }
  else {
    puVar8 = (undefined8 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  func_0x000107c60e78();
  pcStack_178 = FUN_102eac56c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = unaff_x20;
  puStack_180 = &stack0xfffffffffffffff0;
  if ((*(byte *)(unaff_x20 + 0x14) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x14) = 1;
    uVar7 = unaff_x20[2];
    uVar11 = uVar7;
    func_0x000108255998(uVar7,0,puVar8,0);
    if ((int)uVar11 == 0) goto LAB_102eac5e8;
    puStack_1a8 = (undefined8 *)0x0;
    puStack_1a0 = (undefined8 *)0x0;
    func_0x0001082561a4(uVar7,&puStack_1a8);
    if ((int)uVar7 == 0) {
      puVar8 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)0xf000000000000000;
    }
    else if (puStack_1a8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)0xf000000000000000;
    }
    else {
      puVar8 = puStack_1a8;
      puVar9 = puStack_1a0;
      func_0x0001008aa3d0();
    }
    func_0x000107c60fd0(puStack_1a8);
    unaff_x20 = puVar9;
  }
  else {
LAB_102eac5e8:
    puVar8 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0xf000000000000000;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar8;
  }
  func_0x000107c60e78();
  iVar10 = (int)&uStack_2c0;
  iVar2 = (int)&uStack_2c0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *unaff_x20;
  *(undefined1 *)(unaff_x20 + 0x14) = 0;
  if ((0 < (long)puVar8) && (0 < (long)puVar9)) {
    uStack_21c = 0;
    uStack_220 = 0;
    auStack_240[1] = 0;
    auStack_240[0] = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    auStack_240[2] = 0;
    puVar5 = auStack_240;
    func_0x00010825540c(puVar5,0x108);
    if ((int)puVar5 != 0) {
      auStack_240[0] = auStack_240[0] & 0xffffffff;
      dVar12 = 1.0;
      if (param_1 <= 1.0) {
        dVar12 = param_1;
      }
      dVar13 = 0.0;
      if (0.0 < param_1) {
        dVar13 = dVar12;
      }
      uStack_250 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      func_0x0001082400c0((float)dVar13 * 100.0,&uStack_2c0,0,0x20e);
      if (iVar10 != 0) {
        uStack_2b8 = CONCAT44(uStack_2b8._4_4_,4);
        func_0x0001082401cc();
        if (iVar2 != 0) {
          if ((ulong)puVar8 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac7d8);
            (*pcVar1)();
          }
          if ((ulong)puVar9 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac7dc);
            (*pcVar1)();
          }
          puVar6 = puVar8;
          func_0x000108255448(puVar8,puVar9,auStack_240,0x108);
          if (puVar6 != (undefined8 *)0x0) {
            unaff_x20[0xc] = uStack_278;
            unaff_x20[0xb] = uStack_280;
            unaff_x20[0xe] = uStack_268;
            unaff_x20[0xd] = uStack_270;
            unaff_x20[0x10] = uStack_258;
            unaff_x20[0xf] = uStack_260;
            unaff_x20[4] = uStack_2b8;
            unaff_x20[3] = uStack_2c0;
            unaff_x20[6] = uStack_2a8;
            unaff_x20[5] = uStack_2b0;
            unaff_x20[8] = uStack_298;
            unaff_x20[7] = uStack_2a0;
            unaff_x20[2] = puVar6;
            *(undefined4 *)(unaff_x20 + 0x11) = uStack_250;
            unaff_x20[10] = uStack_288;
            unaff_x20[9] = uStack_290;
            unaff_x20[0x12] = puVar8;
            unaff_x20[0x13] = puVar9;
            goto LAB_102eac79c;
          }
        }
      }
    }
  }
  func_0x000107c61464(unaff_x20,uVar11,0xa1,7);
  unaff_x20 = (undefined8 *)0x0;
LAB_102eac79c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x00010825584c(unaff_x20[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0xa1,7);
  return unaff_x20;
}



/* Entry: 102eac56c; end: 102eac643;  */

undefined8 * FUN_102eac56c(double param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  ulong auStack_d0 [3];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  long lStack_98;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  int iVar3;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(unaff_x20 + 0x14) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x14) = 1;
    uVar6 = unaff_x20[2];
    uVar9 = uVar6;
    func_0x000108255998(uVar6,0,param_2,0);
    if ((int)uVar9 == 0) goto LAB_102eac5e8;
    puStack_38 = (undefined8 *)0x0;
    puStack_30 = (undefined8 *)0x0;
    func_0x0001082561a4(uVar6,&puStack_38);
    if ((int)uVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
      puVar8 = (undefined8 *)0xf000000000000000;
    }
    else if (puStack_38 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
      puVar8 = (undefined8 *)0xf000000000000000;
    }
    else {
      puVar7 = puStack_38;
      puVar8 = puStack_30;
      func_0x0001008aa3d0();
    }
    func_0x000107c60fd0(puStack_38);
    unaff_x20 = puVar8;
  }
  else {
LAB_102eac5e8:
    puVar7 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)0xf000000000000000;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar7;
  }
  func_0x000107c60e78();
  iVar2 = (int)&uStack_150;
  iVar3 = (int)&uStack_150;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *unaff_x20;
  *(undefined1 *)(unaff_x20 + 0x14) = 0;
  if ((0 < (long)puVar7) && (0 < (long)puVar8)) {
    uStack_ac = 0;
    uStack_b0 = 0;
    auStack_d0[1] = 0;
    auStack_d0[0] = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    auStack_d0[2] = 0;
    puVar4 = auStack_d0;
    func_0x00010825540c(puVar4,0x108);
    if ((int)puVar4 != 0) {
      auStack_d0[0] = auStack_d0[0] & 0xffffffff;
      dVar10 = 1.0;
      if (param_1 <= 1.0) {
        dVar10 = param_1;
      }
      dVar11 = 0.0;
      if (0.0 < param_1) {
        dVar11 = dVar10;
      }
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      func_0x0001082400c0((float)dVar11 * 100.0,&uStack_150,0,0x20e);
      if (iVar2 != 0) {
        uStack_148 = CONCAT44(uStack_148._4_4_,4);
        func_0x0001082401cc();
        if (iVar3 != 0) {
          if ((ulong)puVar7 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac7d8);
            (*pcVar1)();
          }
          if ((ulong)puVar8 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac7dc);
            (*pcVar1)();
          }
          puVar5 = puVar7;
          func_0x000108255448(puVar7,puVar8,auStack_d0,0x108);
          if (puVar5 != (undefined8 *)0x0) {
            unaff_x20[0xc] = uStack_108;
            unaff_x20[0xb] = uStack_110;
            unaff_x20[0xe] = uStack_f8;
            unaff_x20[0xd] = uStack_100;
            unaff_x20[0x10] = uStack_e8;
            unaff_x20[0xf] = uStack_f0;
            unaff_x20[4] = uStack_148;
            unaff_x20[3] = uStack_150;
            unaff_x20[6] = uStack_138;
            unaff_x20[5] = uStack_140;
            unaff_x20[8] = uStack_128;
            unaff_x20[7] = uStack_130;
            unaff_x20[2] = puVar5;
            *(undefined4 *)(unaff_x20 + 0x11) = uStack_e0;
            unaff_x20[10] = uStack_118;
            unaff_x20[9] = uStack_120;
            unaff_x20[0x12] = puVar7;
            unaff_x20[0x13] = puVar8;
            goto LAB_102eac79c;
          }
        }
      }
    }
  }
  func_0x000107c61464(unaff_x20,uVar9,0xa1,7);
  unaff_x20 = (undefined8 *)0x0;
LAB_102eac79c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x00010825584c(unaff_x20[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0xa1,7);
  return unaff_x20;
}



/* Entry: 102eac644; end: 102eac7df;  */

long FUN_102eac644(double param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  ulong auStack_90 [3];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_110;
  iVar3 = (int)&uStack_110;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(unaff_x20 + 0xa0) = 0;
  if ((0 < (long)param_2) && (0 < (long)param_3)) {
    uStack_6c = 0;
    uStack_70 = 0;
    auStack_90[1] = 0;
    auStack_90[0] = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    auStack_90[2] = 0;
    puVar4 = auStack_90;
    func_0x00010825540c(puVar4,0x108);
    if ((int)puVar4 != 0) {
      auStack_90[0] = auStack_90[0] & 0xffffffff;
      dVar6 = 1.0;
      if (param_1 <= 1.0) {
        dVar6 = param_1;
      }
      dVar7 = 0.0;
      if (0.0 < param_1) {
        dVar7 = dVar6;
      }
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      func_0x0001082400c0((float)dVar7 * 100.0,&uStack_110,0,0x20e);
      if (iVar2 != 0) {
        uStack_108 = CONCAT44(uStack_108._4_4_,4);
        func_0x0001082401cc();
        if (iVar3 != 0) {
          if (param_2 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac7d8);
            (*pcVar1)();
          }
          if (param_3 >> 0x1f != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac7dc);
            (*pcVar1)();
          }
          uVar5 = param_2;
          func_0x000108255448(param_2,param_3,auStack_90,0x108);
          if (uVar5 != 0) {
            *(undefined8 *)(unaff_x20 + 0x60) = uStack_c8;
            *(undefined8 *)(unaff_x20 + 0x58) = uStack_d0;
            *(undefined8 *)(unaff_x20 + 0x70) = uStack_b8;
            *(undefined8 *)(unaff_x20 + 0x68) = uStack_c0;
            *(undefined8 *)(unaff_x20 + 0x80) = uStack_a8;
            *(undefined8 *)(unaff_x20 + 0x78) = uStack_b0;
            *(undefined8 *)(unaff_x20 + 0x20) = uStack_108;
            *(undefined8 *)(unaff_x20 + 0x18) = uStack_110;
            *(undefined8 *)(unaff_x20 + 0x30) = uStack_f8;
            *(undefined8 *)(unaff_x20 + 0x28) = uStack_100;
            *(undefined8 *)(unaff_x20 + 0x40) = uStack_e8;
            *(undefined8 *)(unaff_x20 + 0x38) = uStack_f0;
            *(ulong *)(unaff_x20 + 0x10) = uVar5;
            *(undefined4 *)(unaff_x20 + 0x88) = uStack_a0;
            *(undefined8 *)(unaff_x20 + 0x50) = uStack_d8;
            *(undefined8 *)(unaff_x20 + 0x48) = uStack_e0;
            *(ulong *)(unaff_x20 + 0x90) = param_2;
            *(ulong *)(unaff_x20 + 0x98) = param_3;
            goto LAB_102eac79c;
          }
        }
      }
    }
  }
  func_0x000107c61464();
  unaff_x20 = 0;
LAB_102eac79c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x00010825584c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0xa1,7);
  return unaff_x20;
}



/* Entry: 102eac7e0; end: 102eac823;  */

void FUN_102eac7e0(void)

{
  long unaff_x20;
  
  func_0x00010825584c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102eac824; end: 102eac9d3;  */

/* WARNING: Removing unreachable block (ram,0x0001014d97c8) */
/* WARNING: Removing unreachable block (ram,0x0001014d97d8) */
/* WARNING: Removing unreachable block (ram,0x0001014d9898) */
/* WARNING: Removing unreachable block (ram,0x0001014d97e4) */
/* WARNING: Removing unreachable block (ram,0x0001014d97ec) */
/* WARNING: Removing unreachable block (ram,0x0001014d9854) */
/* WARNING: Removing unreachable block (ram,0x0001014d985c) */
/* WARNING: Removing unreachable block (ram,0x0001014d9860) */
/* WARNING: Removing unreachable block (ram,0x0001014d9864) */
/* WARNING: Removing unreachable block (ram,0x0001014d986c) */

undefined * FUN_102eac824(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(ulong *)(unaff_x20 + 0x90);
  if (uVar9 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac9c4);
    (*pcVar1)();
  }
  lVar10 = uVar9 * 4;
  uVar11 = *(ulong *)(unaff_x20 + 0x98);
  puVar12 = (undefined *)(lVar10 * uVar11);
  if (SUB168(SEXT816(lVar10) * SEXT816((long)uVar11),8) != (long)puVar12 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac9c8);
    (*pcVar1)();
  }
  if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac9cc);
    (*pcVar1)();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar12 != (undefined *)0x0) {
    puVar2 = puVar12;
    func_0x000107c5fc70(puVar12,PTR___ss5UInt8VN_11034eef8);
    *(undefined **)(puVar2 + 0x10) = puVar12;
    func_0x000107c60ee4(puVar2 + 0x20,puVar12);
  }
  uVar3 = param_1;
  func_0x000107c60964();
  puVar12 = puVar2 + 0x20;
  uVar4 = uVar3;
  func_0x000107c608bc();
  puVar5 = puVar12;
  func_0x000107c608a0(puVar12,uVar9,uVar11,8,lVar10,uVar4,1);
  func_0x000107c61170(uVar4);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c5ff40(0,0,(double)(long)uVar9,(double)(long)uVar11,param_1,0);
    puVar7 = puVar2;
    if (((uint)uVar3 < 7) && ((0x1eU >> (ulong)((uint)uVar3 & 0x1f) & 1) == 0)) {
      func_0x000107c61170();
      goto LAB_102eac984;
    }
    if ((long)(uVar11 | uVar9) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102eac9d0);
      (*pcVar1)();
    }
    ppuVar6 = &puStack_88;
    puStack_88 = puVar12;
    uStack_80 = uVar11;
    uStack_78 = uVar9;
    lStack_70 = lVar10;
    func_0x000107c616c8(ppuVar6,&puStack_88,0);
    func_0x000107c61170();
    if (ppuVar6 == (undefined **)0x0) goto LAB_102eac984;
  }
  func_0x000107c6142c();
  puVar7 = (undefined *)0x0;
  puVar5 = puVar2;
LAB_102eac984:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)(puVar5 + 0x10);
  lVar10 = *(long *)(puVar5 + 0x10);
  if (*(long *)(puVar5 + 0x10) <= lVar8) {
    lVar10 = lVar8;
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    puVar12 = (undefined *)0x112d48d68;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    func_0x000107c613fc();
    puVar2 = puVar12;
    func_0x000107c610a4();
    *(long *)(puVar12 + 0x10) = lVar8;
    *(long *)(puVar12 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  func_0x000107c610b4(puVar12 + 0x20,puVar5 + 0x20,lVar8);
  func_0x000107c6142c(puVar5);
  return puVar12;
}



/* Entry: 102eac9d4; end: 102eac9fb;  */

/* WARNING: Removing unreachable block (ram,0x0001014d97c8) */
/* WARNING: Removing unreachable block (ram,0x0001014d97d8) */
/* WARNING: Removing unreachable block (ram,0x0001014d9898) */
/* WARNING: Removing unreachable block (ram,0x0001014d97e4) */
/* WARNING: Removing unreachable block (ram,0x0001014d97ec) */
/* WARNING: Removing unreachable block (ram,0x0001014d9854) */
/* WARNING: Removing unreachable block (ram,0x0001014d985c) */
/* WARNING: Removing unreachable block (ram,0x0001014d9860) */
/* WARNING: Removing unreachable block (ram,0x0001014d9864) */
/* WARNING: Removing unreachable block (ram,0x0001014d986c) */

undefined * FUN_102eac9d4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar4) {
    lVar1 = lVar4;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112d48d68;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar4;
    *(long *)(puVar2 + 0x18) = (long)puVar3 * 2 + -0x40;
  }
  func_0x000107c610b4(puVar2 + 0x20,param_1 + 0x20,lVar4);
  func_0x000107c6142c(param_1);
  return puVar2;
}



/* Entry: 102eac9fc; end: 102eacaa7;  */

void FUN_102eac9fc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102eacaa8; end: 102eacb3b;  */

void FUN_102eacaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_5 + 0x10);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eacb3c;
                    /* WARNING: Could not recover jumptable at 0x000102eacb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_3,1,param_4,param_5);
  return;
}



/* Entry: 102eacb3c; end: 102eacbab;  */

void FUN_102eacb3c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102eacba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102eacbac; end: 102eacbaf;  */

void FUN_102eacbac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db616f8;
  func_0x000107c61520(&UNK_10db616f8,&UNK_1105e3780);
  puRam0000000112f26730 = puVar1;
  return;
}



/* Entry: 102eacbb0; end: 102eacbef;  */

void FUN_102eacbb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db616f8;
  func_0x000107c61520(&UNK_10db616f8,&UNK_1105e3780);
  puRam0000000112f26730 = puVar1;
  return;
}



/* Entry: 102eacbf0; end: 102eacc63;  */

long FUN_102eacbf0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102eacc64; end: 102eace17;  */

undefined8 * FUN_102eacc64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar3 = param_2[3];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[2];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
  }
  return param_1;
}



/* Entry: 102eace18; end: 102ead02f;  */

int FUN_102eace18(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102ead030; end: 102ead073;  */

long FUN_102ead030(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102ead074; end: 102ead153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ead074(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_102ead030(param_1,unaff_x20 + _DAT_112f26738);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 102ead154; end: 102ead1b3; -[_TtC28AnimatedStickerGenerationAPI33AnimatedStickerGenerationServices init] */

void FUN_102ead154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AnimatedStickerGenerationAPI.AnimatedStickerGenerationServices",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ead180);
  (*pcVar1)();
}



/* Entry: 102ead1b4; end: 102ead1c3; -[_TtC28AnimatedStickerGenerationAPI33AnimatedStickerGenerationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ead1b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112f26738))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f26738));
  return;
}



/* Entry: 102ead1c4; end: 102ead20b;  */

void FUN_102ead1c4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db61980,0x50,2);
  uRam0000000113805120 = uStack_38;
  uRam0000000113805118 = uStack_40;
  uRam0000000113805130 = uStack_28;
  uRam0000000113805128 = uStack_30;
  uRam0000000113805140 = uStack_18;
  uRam0000000113805138 = uStack_20;
  return;
}



/* Entry: 102ead20c; end: 102ead2eb;  */

void FUN_102ead20c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x30);
          goto LAB_102ead2b8;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x30);
          goto LAB_102ead2b8;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x30);
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x30);
        }
        else {
          if (lVar1 != 5) goto LAB_102ead2c8;
          pcVar3 = *(code **)(param_3 + 0x30);
        }
LAB_102ead2b8:
        (*pcVar3)();
      }
LAB_102ead2c8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 102ead2ec; end: 102ead3e3;  */

void FUN_102ead2ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((((((*unaff_x20 == 0) || ((**(code **)(param_3 + 0x10))(1,param_2,param_3), unaff_x21 == 0))
        && ((unaff_x20[1] == 0 || ((**(code **)(param_3 + 0x10))(2,param_2,param_3), unaff_x21 == 0)
            ))) &&
       ((unaff_x20[2] == 0 || ((**(code **)(param_3 + 0x10))(3,param_2,param_3), unaff_x21 == 0))))
      && ((unaff_x20[3] == 0 || ((**(code **)(param_3 + 0x10))(4,param_2,param_3), unaff_x21 == 0)))
      ) && ((unaff_x20[4] == 0 || ((**(code **)(param_3 + 0x10))(5,param_2,param_3), unaff_x21 == 0)
            ))) {
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 102ead3e4; end: 102ead41f;  */

void FUN_102ead3e4(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0xc000000000000000;
  return;
}



/* Entry: 102ead420; end: 102ead44f;  */

undefined1  [16] FUN_102ead420(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 102ead450; end: 102ead483;  */

void FUN_102ead450(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 102ead484; end: 102ead497;  */

undefined1  [16] FUN_102ead484(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x102ead494;
  return auVar1;
}



/* Entry: 102ead498; end: 102ead4bf;  */

void FUN_102ead498(void)

{
  FUN_102ead20c();
  return;
}



/* Entry: 102ead4c0; end: 102ead4c3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102ead4c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 102ead4c4; end: 102ead4fb;  */

uint FUN_102ead4c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_102eadb14();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102ead4fc; end: 102ead553;  */

uint FUN_102ead4fc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_102ead79c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102ead554; end: 102ead5f3;  */

/* WARNING: Possible PIC construction at 0x000102ead5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ead5b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ead5a4) */
/* WARNING: Removing unreachable block (ram,0x000102ead5b4) */

void FUN_102ead554(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f26768 != -1) {
    func_0x000107c61568(0x112f26768,FUN_102ead1c4);
  }
  uVar5 = uRam0000000113805140;
  uVar4 = uRam0000000113805138;
  uVar3 = uRam0000000113805130;
  uVar2 = uRam0000000113805128;
  uVar1 = uRam0000000113805120;
  *param_1 = uRam0000000113805118;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102ead5f4; end: 102ead62f;  */

void FUN_102ead5f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f26788;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f26788,&UNK_10db61970);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102ead630; end: 102ead743;  */

void FUN_102ead630(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = unaff_x20[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_40 = unaff_x20[6];
  uStack_48 = unaff_x20[5];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ead744; end: 102ead79b;  */

uint FUN_102ead744(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_102ead79c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102ead79c; end: 102ead807;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102ead79c(double *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  double dVar15;
  byte *pbVar16;
  double dVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  double unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     ((param_1[3] != param_2[3] || (param_1[4] != param_2[4])))) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[5];
  pbVar26 = (byte *)param_1[6];
  dVar15 = param_2[5];
  dVar17 = param_2[6];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(double *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)((ulong)dVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
         (((ulong)dVar17 >> 0x3e < 3 || ((uVar21 = 0, dVar15 != 0.0 || (dVar17 != -2.0))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = (ulong)dVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)dVar15 >> 0x20);
      if (SBORROW4(iVar20,SUB84(dVar15,0))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - SUB84(dVar15,0))) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)((long)dVar15 + 0x18) - *(long *)((long)dVar15 + 0x10);
        if (SBORROW8(*(long *)((long)dVar15 + 0x18),*(long *)((long)dVar15 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,dVar15,dVar17);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = dVar17;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(double *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar25 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar13 + 8);
        pbVar18 = *(byte **)(pbVar13 + 0x10);
        lVar25 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar13;
        pbVar18 = *(byte **)(pbVar13 + 8);
        lVar25 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar10 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar16,pbVar18,0);
      return pbVar12;
    }
    lVar27 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar13;
        pbVar18 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) &&
           (pbVar12 = pbVar26, pbVar14 = pbVar24, pbVar16 = *(byte **)(pbVar13 + 0x10),
           pbVar18 = *(byte **)(pbVar13 + 0x18),
           pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar13 + 0x10);
      lVar25 = *(long *)(pbVar13 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar13 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar13 + 0x20);
        lVar25 = *(long *)(pbVar13 + 0x18);
        bVar28 = pbVar13[8] | (byte)lVar25;
        bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar13[0x10] | (byte)lVar27;
        bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar27 = *(long *)(pbVar13 + 0x20);
      lVar25 = *(long *)(pbVar13 + 0x18);
      bVar28 = pbVar13[8] | (byte)lVar25;
      bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar13[0x10] | (byte)lVar27;
      bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    dVar15 = *(double *)(pbVar13 + 8);
    dVar17 = *(double *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(double *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102ead808; end: 102ead847;  */

void FUN_102ead808(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db61880;
  func_0x000107c61520(&UNK_10db61880,&UNK_1105e38f8);
  puRam0000000112f26770 = puVar1;
  return;
}



/* Entry: 102ead848; end: 102ead86b;  */

void FUN_102ead848(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102ead86c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102ead86c; end: 102ead8ab;  */

void FUN_102ead86c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db61858;
  func_0x000107c61520(&UNK_10db61858,&UNK_1105e38f8);
  puRam0000000112f26778 = puVar1;
  return;
}



/* Entry: 102ead8ac; end: 102ead8d7;  */

void FUN_102ead8ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102ead808();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102ea96bc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102ead8d8; end: 102ead8db;  */

void FUN_102ead8d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db618c0;
  func_0x000107c61520(&UNK_10db618c0,&UNK_1105e38f8);
  puRam0000000112f26780 = puVar1;
  return;
}



/* Entry: 102ead8dc; end: 102ead91b;  */

void FUN_102ead8dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db618c0;
  func_0x000107c61520(&UNK_10db618c0,&UNK_1105e38f8);
  puRam0000000112f26780 = puVar1;
  return;
}



/* Entry: 102ead91c; end: 102ead947;  */

long FUN_102ead91c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102ead948; end: 102ead953;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102ead948(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102ead954; end: 102eada0b;  */

undefined8 * FUN_102ead954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  uVar1 = param_2[6];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[5] = uVar2;
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 102eada0c; end: 102eada53;  */

undefined8 * FUN_102eada0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102eada54; end: 102eadb13;  */

int FUN_102eada54(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102eadb14; end: 102eadb53;  */

void FUN_102eadb14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db6182c;
  func_0x000107c61520(&DAT_10db6182c,&UNK_1105e38f8);
  puRam0000000112f26790 = puVar1;
  return;
}



/* Entry: 102eadb54; end: 102eadc7f;  */

void FUN_102eadb54(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100363b24();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  func_0x000102eb10f0(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  func_0x000102eb0f44(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_102eb10bc();
  *(undefined8 *)(param_2 + 0x38) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 102eadc80; end: 102eadc8f;  */

void FUN_102eadc80(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100363b24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  func_0x000102eb10f0(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  func_0x000102eb0f44(uStack_58,uVar2,uVar3,uVar4,uStack_78);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_102eb10bc();
  *(undefined8 *)(lVar1 + 0x38) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 102eadc90; end: 102eadd5f;  */

long FUN_102eadc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000102eb10f0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000102eb0f44(param_1,param_2,param_3,param_4,param_5);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_102eb10bc();
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  return unaff_x20;
}



/* Entry: 102eadd60; end: 102eaddab;  */

void FUN_102eadd60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102eaddac; end: 102eaddff;  */

void FUN_102eaddac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102eade00; end: 102eade4b;  */

void FUN_102eade00(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102eade4c; end: 102eade9f;  */

void FUN_102eade4c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102eadea0; end: 102eadf13;  */

void FUN_102eadea0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x00010034f284();
  func_0x000107c613fc();
  FUN_102eadf68(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 102eadf14; end: 102eadf1b;  */

void FUN_102eadf14(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  func_0x00010034f284();
  func_0x000107c613fc();
  FUN_102eadf68(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102eadf1c; end: 102eadf67;  */

undefined8 FUN_102eadf1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102eadf68(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102eadf68; end: 102eae0cb;  */

void FUN_102eadf68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126ac768;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f113400);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 102eae0cc; end: 102eae0ff;  */

void FUN_102eae0cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102eae100; end: 102eae153;  */

void FUN_102eae100(undefined8 *param_1)

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



/* Entry: 102eae154; end: 102eae15b;  */

void FUN_102eae154(undefined8 *param_1)

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



/* Entry: 102eae15c; end: 102eae1ab;  */

undefined8 FUN_102eae15c(void)

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



/* Entry: 102eae1ac; end: 102eae1ef;  */

undefined1  [16] FUN_102eae1ac(void)

{
  return ZEXT816(0x1105e3b68);
}



/* Entry: 102eae1f0; end: 102eae217;  */

void FUN_102eae1f0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102eae218; end: 102eae21f;  */

undefined8 FUN_102eae218(void)

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



/* Entry: 102eae220; end: 102eaecf7;  */

void FUN_102eae220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_21;
  puVar1 = PTR_PTR_1126ac770;
  func_0x000107c610f8();
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
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174();
  func_0x000107c615f0(param_20);
  func_0x000107c615f0(param_21);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f113420);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc3430);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2b490);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x767265536c6c6f70;
  func_0x000107c5fadc(0x767265536c6c6f70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f01aa80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f113440);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f113460);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0a4040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_18);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef21090);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_19);
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f089080);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_20);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0890b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_20);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_21);
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef34da0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_21);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
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
  func_0x000107c615e8(param_20);
  func_0x000107c615e8(param_21);
  *(undefined **)(unaff_x20 + 0xb8) = puVar3;
  return;
}



/* Entry: 102eaecf8; end: 102eaeddb;  */

void FUN_102eaecf8(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 102eaeddc; end: 102eaee2b;  */

undefined8 FUN_102eaeddc(void)

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



/* Entry: 102eaee2c; end: 102eaee6f;  */

undefined1  [16] FUN_102eaee2c(void)

{
  return ZEXT816(0x1105e3c30);
}



/* Entry: 102eaee70; end: 102eaee97;  */

void FUN_102eaee70(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102eaee98; end: 102eaee9f;  */

undefined8 FUN_102eaee98(void)

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



/* Entry: 102eaeea0; end: 102eaf2e7;  */

void FUN_102eaeea0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x00010036511c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  func_0x000102eb4008();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_d0);
  uVar12 = uStack_d8;
  func_0x000107c61174();
  uVar13 = uStack_e0;
  func_0x000107c61174();
  uVar14 = uStack_e8;
  func_0x000107c61174();
  uVar15 = uStack_f0;
  func_0x000107c61174();
  uVar16 = uStack_f8;
  func_0x000107c61174();
  uVar17 = uStack_100;
  func_0x000107c61174();
  uVar18 = uStack_108;
  func_0x000107c61174();
  uVar19 = uStack_110;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000102eb2e60(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                      uVar11,uStack_d0,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,
                      uStack_118);
  *(undefined8 *)(param_2 + 0x10) = auStack_70[0];
  FUN_102eb3fd4();
  *(undefined8 *)(param_2 + 0xc0) = auStack_70[0];
  *param_1 = param_2;
  return;
}



/* Entry: 102eaf2e8; end: 102eaf333;  */

void FUN_102eaf2e8(void)

{
  long unaff_x20;
  
  FUN_102eaeea0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 102eaf334; end: 102eaf597;  */

long FUN_102eaf334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_22;
  func_0x000102eb4008();
  func_0x000107c613fc();
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
  func_0x000107c615f0(param_13);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000102eb2e60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17,
                      param_18,param_19,param_20,param_21,param_22);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_102eb3fd4();
  *(undefined8 *)(unaff_x20 + 0xc0) = param_1;
  return unaff_x20;
}



/* Entry: 102eaf598; end: 102eaf683;  */

void FUN_102eaf598(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 102eaf684; end: 102eaf6d7;  */

void FUN_102eaf684(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102eaf6d8; end: 102eaf723;  */

void FUN_102eaf6d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102eaf724; end: 102eaf777;  */

void FUN_102eaf724(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102eaf778; end: 102eb02d3;  */

void FUN_102eaf778(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
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
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100365634();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_100;
  *(undefined8 *)(param_2 + 0xb0) = uStack_108;
  *(undefined8 *)(param_2 + 0xb8) = uStack_110;
  *(undefined8 *)(param_2 + 0xc0) = uStack_118;
  *(undefined8 *)(param_2 + 200) = uStack_120;
  *(undefined8 *)(param_2 + 0xd0) = uStack_128;
  *(undefined8 *)(param_2 + 0xd8) = uStack_130;
  *(undefined8 *)(param_2 + 0xe0) = uStack_138;
  *(undefined8 *)(param_2 + 0xe8) = uStack_140;
  *(undefined8 *)(param_2 + 0xf0) = uStack_148;
  *(undefined8 *)(param_2 + 0xf8) = uStack_150;
  *(undefined8 *)(param_2 + 0x100) = uStack_158;
  *(undefined8 *)(param_2 + 0x108) = uStack_160;
  *(undefined8 *)(param_2 + 0x110) = uStack_168;
  *(undefined8 *)(param_2 + 0x118) = uStack_170;
  *(undefined8 *)(param_2 + 0x120) = uStack_178;
  *(undefined8 *)(param_2 + 0x128) = uStack_180;
  *(undefined8 *)(param_2 + 0x130) = uStack_188;
  *(undefined8 *)(param_2 + 0x138) = uStack_190;
  *(undefined8 *)(param_2 + 0x140) = uStack_198;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174();
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar19 = uStack_100;
  func_0x000107c61174();
  uVar20 = uStack_108;
  func_0x000107c61174();
  uVar21 = uStack_110;
  func_0x000107c61174();
  uVar22 = uStack_118;
  func_0x000107c61174();
  uVar23 = uStack_120;
  func_0x000107c61174();
  uVar24 = uStack_128;
  func_0x000107c61174();
  uVar25 = uStack_130;
  func_0x000107c61174();
  uVar26 = uStack_138;
  func_0x000107c61174();
  uVar27 = uStack_140;
  func_0x000107c61174();
  uVar28 = uStack_148;
  func_0x000107c61174();
  uVar29 = uStack_150;
  func_0x000107c61174();
  uVar30 = uStack_158;
  func_0x000107c61174();
  uVar31 = uStack_160;
  func_0x000107c61174();
  uVar32 = uStack_168;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_170);
  func_0x000107c615f0(uStack_178);
  uVar33 = uStack_180;
  func_0x000107c61174();
  uVar34 = uStack_188;
  func_0x000107c61174();
  uVar35 = uStack_190;
  func_0x000107c61174();
  uVar36 = uStack_198;
  func_0x000107c61174();
  uVar37 = uStack_1a0;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar37);
  *(undefined **)(param_2 + 0x18) = puVar15;
  func_0x000102ed8514();
  func_0x000107c613fc();
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
  func_0x000107c615f0(uStack_170);
  func_0x000107c615f0(uStack_178);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = auStack_70[0];
  func_0x000107c61174();
  uVar38 = uVar37;
  func_0x000102ed7230();
  *(undefined8 *)(param_2 + 0x10) = uVar38;
  uVar39 = uVar38;
  func_0x000107c6157c();
  func_0x000102ed73c8();
  func_0x000107c61574(uVar38);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c615e8(uStack_170);
  func_0x000107c615e8(uStack_178);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61574(uStack_1a0);
  *(undefined8 *)(param_2 + 0x148) = uVar39;
  *param_1 = param_2;
  return;
}



/* Entry: 102eb02d4; end: 102eb034f;  */

void FUN_102eb02d4(void)

{
  long unaff_x20;
  
  FUN_102eaf778(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 102eb0350; end: 102eb0b63;  */

long FUN_102eb0350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  *(undefined8 *)(unaff_x20 + 0x88) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_16;
  *(undefined8 *)(unaff_x20 + 0x98) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_19;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_20;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_21;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_22;
  *(undefined8 *)(unaff_x20 + 200) = param_23;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_24;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_25;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_26;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_27;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_28;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_29;
  *(undefined8 *)(unaff_x20 + 0x100) = param_30;
  *(undefined8 *)(unaff_x20 + 0x108) = param_31;
  *(undefined8 *)(unaff_x20 + 0x110) = param_32;
  *(undefined8 *)(unaff_x20 + 0x118) = param_33;
  *(undefined8 *)(unaff_x20 + 0x120) = param_34;
  *(undefined8 *)(unaff_x20 + 0x128) = param_35;
  *(undefined8 *)(unaff_x20 + 0x130) = param_36;
  *(undefined8 *)(unaff_x20 + 0x138) = param_37;
  *(undefined8 *)(unaff_x20 + 0x140) = param_38;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
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
  func_0x000107c615f0(param_33);
  func_0x000107c615f0(param_34);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_39;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x000102ed8514();
  func_0x000107c613fc();
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
  func_0x000107c615f0(param_33);
  func_0x000107c615f0(param_34);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_1;
  func_0x000102ed7230();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  func_0x000102ed73c8();
  func_0x000107c61574(uVar2);
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
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c615e8(param_33);
  func_0x000107c615e8(param_34);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  func_0x000107c61574(param_39);
  *(undefined8 *)(unaff_x20 + 0x148) = uVar3;
  return unaff_x20;
}



/* Entry: 102eb0b64; end: 102eb0cd7;  */

void FUN_102eb0b64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  return;
}



/* Entry: 102eb0cd8; end: 102eb0d2b;  */

void FUN_102eb0cd8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x148);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102eb0d2c; end: 102eb0d77;  */

void FUN_102eb0d2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x148);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102eb0d78; end: 102eb0dcb;  */

void FUN_102eb0d78(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102eb0dcc; end: 102eb10bb;  */

long FUN_102eb0dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  code *pcVar7;
  
  func_0x000107c613fc();
  puVar2 = (ulong *)0x0;
  FUN_102eb14fc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(ulong **)(unaff_x20 + 0x10) = puVar2;
  puVar1 = PTR__swift_isaMask_11034f488;
  pcVar7 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x80);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar7)(param_2);
  pcVar7 = *(code **)((*(ulong *)puVar1 & *puVar2) + 0x98);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar7)(param_3);
  func_0x000107c61170(puVar2);
  pcVar7 = *(code **)((*(ulong *)puVar1 & *puVar2) + 0xb0);
  func_0x000107c61174();
  uVar5 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar7)(param_4);
  func_0x000107c61170(puVar2);
  pcVar7 = *(code **)((*(ulong *)puVar1 & *puVar2) + 200);
  func_0x000107c61174(puVar2);
  uVar6 = param_5;
  func_0x000107c61174(param_5);
  (*pcVar7)(param_5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  return unaff_x20;
}



/* Entry: 102eb10bc; end: 102eb10cb;  */

void FUN_102eb10bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102eb10cc; end: 102eb116b;  */

void FUN_102eb10cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102eb116c; end: 102eb1177;  */

void FUN_102eb116c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102eb1178; end: 102eb11c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102eb1178(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f26f58;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f58,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar2);
  return uVar2;
}



/* Entry: 102eb11c4; end: 102eb1217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb11c4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f26f58;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102eb1218; end: 102eb12a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102eb1218(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f26f58;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f58,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102eb1a64;
  return auVar2;
}



/* Entry: 102eb12a4; end: 102eb12f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb12a4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f26f60;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar2);
  return;
}


