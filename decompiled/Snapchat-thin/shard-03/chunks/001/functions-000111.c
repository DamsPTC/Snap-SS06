/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102542568; end: 10254260f;  */

undefined1  [16] FUN_102542568(undefined1 *param_1,long param_2,char param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_88 [56];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  if (param_3 == '\x01') {
    func_0x000107c60690(1);
    puVar1 = param_1;
    func_0x000107c60690();
  }
  else {
    func_0x000107c60690(0);
    puVar1 = auStack_88;
    func_0x000107c5fb58(puVar1,param_1,param_2);
  }
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar5 = (ulong)puVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar4 = (undefined8 *)(lVar6 + uVar5 * 0x18);
      puVar1 = (undefined1 *)*puVar4;
      if (*(char *)(puVar4 + 2) == '\x01') {
        if ((param_3 == '\x01') && (puVar1 == param_1)) {
LAB_102542740:
          uVar2 = 1;
          goto LAB_10254274c;
        }
      }
      else if ((param_3 != '\x01') &&
              ((puVar1 == param_1 && puVar4[1] == param_2 ||
               (func_0x000107c605b8(puVar1,puVar4[1],param_1,param_2,0), ((ulong)puVar1 & 1) != 0)))
              ) goto LAB_102542740;
      uVar5 = uVar5 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
LAB_10254274c:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 102542610; end: 102542673;  */

undefined1  [16] FUN_102542610(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [40];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fb58(auStack_78,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  uVar3 = (ulong)*(byte *)(param_1 + 0x20);
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    lVar7 = *(long *)(unaff_x20 + 0x30);
    do {
      lVar8 = *(long *)(lVar7 + uVar3 * 8);
      uVar4 = *(ulong *)(lVar8 + 0x10);
      if (((uVar4 == uVar1 && *(long *)(lVar8 + 0x18) == lVar2) ||
          (func_0x000107c605b8(uVar4,*(long *)(lVar8 + 0x18),uVar1,lVar2,0), (uVar4 & 1) != 0)) &&
         (*(char *)(lVar8 + 0x20) == *(char *)(param_1 + 0x20))) {
        uVar5 = 1;
        goto LAB_102542818;
      }
      uVar3 = uVar3 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_102542818:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar3;
  return auVar9;
}



/* Entry: 102542674; end: 102542833;  */

undefined1  [16] FUN_102542674(ulong param_1,ulong param_2,char param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auVar6 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar4 = (ulong *)(lVar5 + param_4 * 0x18);
      uVar1 = *puVar4;
      if ((char)puVar4[2] == '\x01') {
        if ((param_3 == '\x01') && (uVar1 == param_1)) {
LAB_102542740:
          uVar2 = 1;
          goto LAB_10254274c;
        }
      }
      else if ((param_3 != '\x01') &&
              ((uVar1 == param_1 && puVar4[1] == param_2 ||
               (func_0x000107c605b8(uVar1,puVar4[1],param_1,param_2,0), (uVar1 & 1) != 0))))
      goto LAB_102542740;
      param_4 = param_4 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
LAB_10254274c:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 102542834; end: 102542847;  */

ulong FUN_102542834(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10254292c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102542930);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126aaa98;
    func_0x000107c61168(PTR_PTR_1126aaa98);
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
    puVar4 = PTR_PTR_1126aaa98;
    func_0x000107c61168(PTR_PTR_1126aaa98);
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
  func_0x000102545f10(0,0x112ea4688,&PTR_PTR_1126aaa98);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102542a04);
  (*pcVar2)();
}



/* Entry: 102542848; end: 102542a03;  */

ulong FUN_102542848(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10254292c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102542930);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102545f10(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102542a04);
  (*pcVar2)();
}



/* Entry: 102542a04; end: 102542a9b;  */

code * FUN_102542a04(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0xd726);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_1025444b0();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_102544170(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_102542a9c;
}



/* Entry: 102542a9c; end: 102542ad7;  */

void FUN_102542a9c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102542ad8; end: 102542bd3;  */

void FUN_102542ad8(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_3 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102543048();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x28);
    uVar8 = puVar2[1];
    uVar7 = *puVar2;
    uVar4 = (ulong)*(byte *)(puVar2 + 2);
    uVar5 = puVar2[3];
    uVar6 = puVar2[4];
    func_0x000102543d30(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  return;
}



/* Entry: 102542bd4; end: 102542c0b;  */

/* WARNING: Possible PIC construction at 0x000102542bec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102542bf0) */

void FUN_102542bd4(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102542c0c; end: 102542d8b;  */

undefined8 FUN_102542c0c(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar6 = *unaff_x20;
  if ((uVar6 & 0xc000000000000001) == 0) {
    func_0x000107c61434(uVar6);
    FUN_102542610();
    func_0x000107c6142c(uVar6);
    if ((param_2 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      iVar2 = (int)*unaff_x20;
      func_0x000107c61558();
      uVar6 = *unaff_x20;
      if (iVar2 == 0) {
        func_0x000102543364();
      }
      func_0x000107c61574(*(undefined8 *)(*(long *)(uVar6 + 0x30) + param_1 * 8));
      uVar7 = *(undefined8 *)(*(long *)(uVar6 + 0x38) + param_1 * 8);
      func_0x000102543eec(param_1,uVar6);
      *unaff_x20 = uVar6;
    }
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar5 = uVar6;
    }
    func_0x000107c61434(uVar6);
    lVar3 = param_1;
    func_0x000107c6157c();
    func_0x000107c6043c();
    func_0x000107c61574(param_1);
    if (lVar3 == 0) {
      func_0x000107c6142c(uVar6);
      uVar7 = 0;
    }
    else {
      func_0x000107c615e8(lVar3);
      uVar4 = uVar5;
      func_0x000107c6042c();
      FUN_10254d0c8();
      func_0x000107c6157c();
      FUN_102542610();
      func_0x000107c61574(uVar5);
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102542d74);
        (*pcVar1)();
      }
      func_0x000107c61574(*(undefined8 *)(*(long *)(uVar5 + 0x30) + param_1 * 8));
      uVar7 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + param_1 * 8);
      func_0x000102543eec(param_1,uVar5);
      func_0x000107c6142c(uVar6);
      *unaff_x20 = uVar5;
    }
  }
  return uVar7;
}



/* Entry: 102542d8c; end: 102542f13;  */

/* WARNING: Possible PIC construction at 0x000102542e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102542e60) */

void FUN_102542d8c(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar10 = *unaff_x20;
  uVar3 = param_2;
  uVar5 = param_3;
  func_0x000100029284();
  lVar6 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar9;
  if (SCARRY8(lVar6,uVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102542e88);
    (*pcVar2)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar7) {
    FUN_1025434c8(lVar7,param_4 & 1);
    uVar3 = param_2;
    uVar9 = param_3;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102542e2c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102543048();
    lVar7 = *unaff_x20;
    goto joined_r0x000102542e9c;
  }
  lVar7 = *unaff_x20;
joined_r0x000102542e9c:
  if ((uVar5 & 1) != 0) {
    puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x28);
    uVar4 = puVar8[4];
    uVar13 = *param_1;
    uVar12 = param_1[3];
    uVar11 = param_1[2];
    puVar8[1] = param_1[1];
    *puVar8 = uVar13;
    puVar8[3] = uVar12;
    puVar8[2] = uVar11;
    puVar8[4] = param_1[4];
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x28);
  uVar4 = *param_1;
  uVar12 = param_1[3];
  uVar11 = param_1[2];
  puVar8[1] = param_1[1];
  *puVar8 = uVar4;
  puVar8[3] = uVar12;
  puVar8[2] = uVar11;
  puVar8[4] = param_1[4];
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102542f14);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102542f14; end: 102543047;  */

void FUN_102542f14(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_102542610();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102542fd8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x000102543a98(lVar5);
    uVar2 = param_2;
    FUN_102542610();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_10254d76c(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102542fa4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000102543364();
    lVar5 = *unaff_x20;
    goto joined_r0x000102542fec;
  }
  lVar5 = *unaff_x20;
joined_r0x000102542fec:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102543048);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102543048; end: 1025431ef;  */

void FUN_102543048(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *unaff_x20;
  long lVar17;
  long lVar18;
  
  func_0x0001000285a8(0x112ea4778,&UNK_10dab7970);
  lVar17 = *unaff_x20;
  lVar11 = lVar17;
  func_0x000107c6048c();
  if (*(long *)(lVar17 + 0x10) != 0) {
    lVar1 = lVar17 + 0x40;
    uVar12 = (1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar11 != lVar17 || lVar1 + uVar12 * 8 <= lVar11 + 0x40U) {
      func_0x000107c610b8(lVar11 + 0x40U,lVar1,uVar12 << 3);
    }
    lVar18 = 0;
    *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar17 + 0x10);
    uVar13 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
    uVar12 = 0xffffffffffffffff;
    if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
      uVar12 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar12 = uVar12 & *(ulong *)(lVar17 + 0x40);
    if (uVar12 == 0) goto LAB_102543128;
    do {
      uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      while( true ) {
        uVar14 = LZCOUNT(uVar14) | lVar18 << 6;
        lVar16 = uVar14 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + lVar16);
        uVar6 = puVar2[1];
        lVar15 = uVar14 * 0x28;
        puVar3 = (undefined8 *)(*(long *)(lVar17 + 0x38) + lVar15);
        uVar4 = *puVar3;
        uVar7 = puVar3[1];
        uVar9 = *(undefined1 *)(puVar3 + 2);
        uVar5 = puVar3[3];
        uVar8 = puVar3[4];
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar16);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x38) + lVar15);
        *puVar2 = uVar4;
        puVar2[1] = uVar7;
        *(undefined1 *)(puVar2 + 2) = uVar9;
        puVar2[3] = uVar5;
        puVar2[4] = uVar8;
        func_0x000107c61434();
        func_0x000107c61434(uVar4);
        func_0x000107c6157c(uVar7);
        func_0x000107c61434(uVar8);
        if (uVar12 != 0) break;
LAB_102543128:
        do {
          lVar15 = lVar18 + 1;
          if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1025431f0);
            (*pcVar10)();
          }
          if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_1025431c4;
          uVar12 = *(ulong *)(lVar1 + lVar15 * 8);
          lVar18 = lVar18 + 1;
        } while (uVar12 == 0);
        uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
        lVar18 = lVar15;
      }
    } while( true );
  }
LAB_1025431c4:
  func_0x000107c61574(lVar17);
  *unaff_x20 = lVar11;
  return;
}



/* Entry: 1025431f0; end: 1025434c7;  */

void FUN_1025431f0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112ea47a8,&UNK_10dab79b8);
  lVar13 = *unaff_x20;
  lVar8 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar13 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      func_0x000107c610b8(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar13 + 0x40);
    if (uVar9 == 0) goto LAB_1025432cc;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar14 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar13 + 0x30) + uVar11 * 0x18);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar11 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x18);
        uVar6 = *(undefined1 *)(puVar3 + 2);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined1 *)(puVar4 + 2) = uVar6;
        *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 8) = uVar12;
        func_0x000101107198();
        if (uVar9 != 0) break;
LAB_1025432cc:
        do {
          lVar2 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102543364);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_10254333c;
          uVar9 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar2;
      }
    } while( true );
  }
LAB_10254333c:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 1025434c8; end: 1025440a7;  */

void FUN_1025434c8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  bool bVar9;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  ulong *puVar21;
  long lVar22;
  ulong uStack_c8;
  undefined1 auStack_a8 [72];
  
  lVar22 = *unaff_x20;
  lVar1 = *(long *)(lVar22 + 0x18);
  if (*(long *)(lVar22 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112ea4778,&UNK_10dab7970);
  lVar11 = lVar22;
  func_0x000107c60490(lVar22,lVar1,param_2);
  if (*(long *)(lVar22 + 0x10) == 0) {
LAB_102543784:
    func_0x000107c61574(lVar22);
    *unaff_x20 = lVar11;
    return;
  }
  puVar21 = (ulong *)(lVar22 + 0x40);
  uVar17 = 1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
  uStack_c8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar22 + 0x20) & 0x3f) < 6) {
    uStack_c8 = ~(-1L << (uVar17 & 0x3f));
  }
  uStack_c8 = uStack_c8 & *puVar21;
  lVar1 = lVar11 + 0x40;
  lVar14 = 0;
  do {
    if (uStack_c8 == 0) {
      do {
        lVar20 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1025437b4);
          (*pcVar10)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
            if ((*(byte *)(lVar22 + 0x20) & 0x3f) < 6) {
              *puVar21 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar21,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar22 + 0x10) = 0;
          }
          goto LAB_102543784;
        }
        uStack_c8 = puVar21[lVar20];
        lVar14 = lVar14 + 1;
      } while (uStack_c8 == 0);
      uVar13 = (uStack_c8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_c8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uStack_c8 = uStack_c8 - 1 & uStack_c8;
    }
    else {
      uVar13 = (uStack_c8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_c8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uStack_c8 = uStack_c8 - 1 & uStack_c8;
      lVar20 = lVar14;
    }
    uVar13 = LZCOUNT(uVar13) | lVar20 << 6;
    puVar15 = (undefined8 *)(*(long *)(lVar22 + 0x30) + uVar13 * 0x10);
    uVar2 = *puVar15;
    uVar5 = puVar15[1];
    puVar15 = (undefined8 *)(*(long *)(lVar22 + 0x38) + uVar13 * 0x28);
    uVar3 = *puVar15;
    uVar6 = puVar15[1];
    uVar8 = *(undefined1 *)(puVar15 + 2);
    uVar4 = puVar15[3];
    uVar7 = puVar15[4];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar6);
      func_0x000107c61434(uVar7);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar11 + 0x28));
    puVar12 = auStack_a8;
    func_0x000107c5fb58(puVar12,uVar2,uVar5);
    func_0x000107c606a8();
    uVar19 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar18 = (ulong)puVar12 & (uVar19 ^ 0xffffffffffffffff);
    uVar16 = uVar18 >> 6;
    uVar13 = -1L << (uVar18 & 0x3f) & (*(ulong *)(lVar1 + uVar16 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar9 = false;
      uVar13 = 0x3f - uVar19 >> 6;
      do {
        uVar18 = uVar16 + 1;
        if ((uVar18 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1025437b8);
          (*pcVar10)();
        }
        uVar16 = 0;
        if (uVar18 != uVar13) {
          uVar16 = uVar18;
        }
        bVar9 = (bool)(uVar18 == uVar13 | bVar9);
        uVar18 = *(ulong *)(lVar1 + uVar16 * 8);
      } while (uVar18 == 0xffffffffffffffff);
      uVar18 = ~uVar18;
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar16 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar18 & 0x7fffffffffffffc0;
    }
    uVar16 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar16) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar1 + uVar16);
    puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar13 * 0x10);
    *puVar15 = uVar2;
    puVar15[1] = uVar5;
    puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar13 * 0x28);
    *puVar15 = uVar3;
    puVar15[1] = uVar6;
    *(undefined1 *)(puVar15 + 2) = uVar8;
    puVar15[3] = uVar4;
    puVar15[4] = uVar7;
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    lVar14 = lVar20;
  } while( true );
}



/* Entry: 1025440a8; end: 1025440ef;  */

undefined8 FUN_1025440a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1025440f0; end: 10254416f;  */

void FUN_1025440f0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  plVar3 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102546088;
  plVar3[0x1a] = lVar1;
  plVar3[0x1b] = lVar2;
  plVar3[0x18] = lVar4;
  plVar3[0x19] = unaff_x20 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102540af8,0,0,lVar1,lVar2,uVar5);
  return;
}



/* Entry: 102544170; end: 1025442cf;  */

undefined1  [16] FUN_102544170(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar3 = (undefined8 *)0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0x1162);
  }
  *param_1 = (long)puVar3;
  puVar3[6] = param_3;
  puVar3[7] = unaff_x20;
  puVar3[5] = param_2;
  lVar11 = *unaff_x20;
  lVar4 = param_2;
  uVar6 = param_3;
  func_0x000100029284();
  *(byte *)(puVar3 + 9) = (byte)uVar6 & 1;
  lVar5 = *(long *)(lVar11 + 0x10);
  uVar7 = (ulong)~(uint)uVar6 & 1;
  lVar1 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102544278);
    (*pcVar2)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar1) {
    FUN_1025434c8(lVar1,param_4 & 1);
    func_0x000100029284();
    lVar4 = param_2;
    if (((uint)uVar6 & 1) != ((uint)param_3 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102544248);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102543048();
    puVar3[8] = lVar4;
    goto joined_r0x00010254428c;
  }
  puVar3[8] = lVar4;
joined_r0x00010254428c:
  if ((uVar6 & 1) == 0) {
    uVar6 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 0x28);
    uVar13 = puVar9[1];
    uVar12 = *puVar9;
    uVar6 = (ulong)*(byte *)(puVar9 + 2);
    uVar8 = puVar9[3];
    uVar10 = puVar9[4];
  }
  puVar3[1] = uVar13;
  *puVar3 = uVar12;
  puVar3[2] = uVar6;
  puVar3[3] = uVar8;
  puVar3[4] = uVar10;
  auVar14._8_8_ = puVar3;
  auVar14._0_8_ = FUN_1025442d0;
  return auVar14;
}



/* Entry: 1025442d0; end: 1025444af;  */

void FUN_1025442d0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  
  plVar14 = (long *)*param_1;
  lVar1 = *plVar14;
  lVar3 = plVar14[1];
  lVar2 = plVar14[2];
  lVar4 = plVar14[3];
  lVar16 = plVar14[4];
  bVar6 = *(byte *)(plVar14 + 9);
  uVar7 = (undefined1)lVar2;
  if ((param_2 & 1) == 0) {
    if (lVar1 == 0) {
      if ((bVar6 & 1) != 0) {
        lVar10 = plVar14[8];
        lVar12 = *(long *)plVar14[7];
        func_0x000100bcb1dc(*(long *)(lVar12 + 0x30) + lVar10 * 0x10);
        func_0x000102543d30(lVar10,lVar12);
      }
      goto LAB_102544454;
    }
    uVar13 = plVar14[8];
    lVar10 = *(long *)plVar14[7];
    if ((bVar6 & 1) != 0) goto LAB_102544378;
    lVar9 = plVar14[5];
    lVar5 = plVar14[6];
    lVar12 = lVar10 + (uVar13 >> 6) * 8;
    *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar13 & 0x3f);
    plVar11 = (long *)(*(long *)(lVar10 + 0x30) + uVar13 * 0x10);
    *plVar11 = lVar9;
    plVar11[1] = lVar5;
    plVar11 = (long *)(*(long *)(lVar10 + 0x38) + uVar13 * 0x28);
    *plVar11 = lVar1;
    plVar11[1] = lVar3;
    *(undefined1 *)(plVar11 + 2) = uVar7;
    plVar11[3] = lVar4;
    plVar11[4] = lVar16;
    lVar12 = *(long *)(lVar10 + 0x10);
    if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1025444b0);
      (*pcVar8)();
    }
  }
  else {
    if (lVar1 == 0) {
      if ((bVar6 & 1) != 0) {
        lVar10 = plVar14[8];
        lVar12 = *(long *)plVar14[7];
        func_0x000100bcb1dc(*(long *)(lVar12 + 0x30) + lVar10 * 0x10);
        func_0x000102543d30(lVar10,lVar12);
      }
      goto LAB_102544454;
    }
    uVar13 = plVar14[8];
    lVar10 = *(long *)plVar14[7];
    if ((bVar6 & 1) != 0) {
LAB_102544378:
      plVar11 = (long *)(*(long *)(lVar10 + 0x38) + uVar13 * 0x28);
      *plVar11 = lVar1;
      plVar11[1] = lVar3;
      *(undefined1 *)(plVar11 + 2) = uVar7;
      plVar11[3] = lVar4;
      plVar11[4] = lVar16;
      goto LAB_102544454;
    }
    lVar9 = plVar14[5];
    lVar5 = plVar14[6];
    lVar12 = lVar10 + (uVar13 >> 6) * 8;
    *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar13 & 0x3f);
    plVar11 = (long *)(*(long *)(lVar10 + 0x30) + uVar13 * 0x10);
    *plVar11 = lVar9;
    plVar11[1] = lVar5;
    plVar11 = (long *)(*(long *)(lVar10 + 0x38) + uVar13 * 0x28);
    *plVar11 = lVar1;
    plVar11[1] = lVar3;
    *(undefined1 *)(plVar11 + 2) = uVar7;
    plVar11[3] = lVar4;
    plVar11[4] = lVar16;
    lVar12 = *(long *)(lVar10 + 0x10);
    if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102544368);
      (*pcVar8)();
    }
  }
  lVar9 = plVar14[6];
  *(long *)(lVar10 + 0x10) = lVar12 + 1;
  func_0x000107c61434(lVar9);
LAB_102544454:
  lVar10 = *plVar14;
  lVar9 = plVar14[1];
  lVar12 = plVar14[2];
  lVar5 = plVar14[3];
  lVar15 = plVar14[4];
  func_0x000102545ed8(lVar1,lVar3,lVar2,lVar4,lVar16);
  FUN_102542bd4(lVar10,lVar9,lVar12,lVar5,lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar14);
  return;
}



/* Entry: 1025444b0; end: 1025444d3;  */

undefined1  [16] FUN_1025444b0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x1025444c8;
  return auVar1;
}



/* Entry: 1025444d4; end: 102544567;  */

void FUN_1025444d4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102544568();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102544568; end: 10254467f;  */

undefined * FUN_102544568(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102544680);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112ea4680;
    func_0x0001000285a8(0x112ea4680,&UNK_10dab7860);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106a4438);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 102544680; end: 1025447af;  */

undefined * FUN_102544680(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1025447b0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112ea4678;
    func_0x0001000285a8(0x112ea4678,&UNK_10dab7858);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ea47b0;
    func_0x0001000285a8(0x112ea47b0,&UNK_10dab79c8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1025447b0; end: 1025448fb;  */

undefined *
FUN_1025447b0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1025448fc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    FUN_1025424f0(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000102545f10(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1025448fc; end: 102544a07;  */

void FUN_1025448fc(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_10254530c();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112ea47b0;
      func_0x0001000285a8(0x112ea47b0,&UNK_10dab79c8);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_102544a08(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_102544dc0(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102544a08; end: 102544dbf;  */

void FUN_102544a08(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x21;
  ulong *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar9 = 0;
    do {
      puVar7 = puStack_58;
      lVar21 = lVar9 + 1;
      if (lVar21 < lVar8) {
        lVar10 = *param_3;
        lVar14 = *(long *)(lVar10 + lVar21 * 0x20 + 0x18);
        lVar12 = lVar9 * 0x20;
        lVar17 = *(long *)(lVar10 + lVar12 + 0x18);
        lVar15 = lVar9 + 2;
        plVar19 = (long *)(lVar10 + lVar12 + 0x58);
        lVar16 = lVar14;
        do {
          lVar18 = lVar15;
          lVar21 = lVar8;
          if (lVar8 == lVar18) break;
          lVar21 = *plVar19;
          bVar4 = lVar21 <= lVar16;
          lVar15 = lVar18 + 1;
          plVar19 = plVar19 + 4;
          lVar16 = lVar21;
          lVar21 = lVar18;
        } while (lVar17 < lVar14 != bVar4);
        if (lVar17 < lVar14) {
          if (lVar21 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102544d94);
            (*pcVar3)();
          }
          if (lVar9 < lVar21) {
            lVar16 = lVar21 << 5;
            lVar15 = lVar21;
            lVar8 = lVar9;
            do {
              lVar15 = lVar15 + -1;
              if (lVar8 != lVar15) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102544db4);
                  (*pcVar3)();
                }
                puVar13 = (undefined8 *)(lVar10 + lVar12);
                lVar14 = lVar10 + lVar16;
                uVar2 = *(undefined1 *)(puVar13 + 2);
                uVar22 = puVar13[3];
                uVar26 = puVar13[1];
                uVar25 = *puVar13;
                uVar29 = *(undefined8 *)(lVar14 + -0x20);
                uVar28 = *(undefined8 *)(lVar14 + -8);
                uVar27 = *(undefined8 *)(lVar14 + -0x10);
                puVar13[1] = *(undefined8 *)(lVar14 + -0x18);
                *puVar13 = uVar29;
                puVar13[3] = uVar28;
                puVar13[2] = uVar27;
                *(undefined8 *)(lVar14 + -0x18) = uVar26;
                *(undefined8 *)(lVar14 + -0x20) = uVar25;
                *(undefined1 *)(lVar14 + -0x10) = uVar2;
                *(undefined8 *)(lVar14 + -8) = uVar22;
              }
              lVar8 = lVar8 + 1;
              lVar16 = lVar16 + -0x20;
              lVar12 = lVar12 + 0x20;
            } while (lVar8 < lVar15);
            lVar8 = param_3[1];
          }
        }
      }
      lVar12 = lVar21;
      if (lVar21 < lVar8) {
        if (SBORROW8(lVar21,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102544d90);
          (*pcVar3)();
        }
        if (lVar21 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102544d98);
            (*pcVar3)();
          }
          lVar15 = lVar9 + param_4;
          if (lVar8 <= lVar9 + param_4) {
            lVar15 = lVar8;
          }
          if (lVar15 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102544d9c);
            (*pcVar3)();
          }
          if (lVar21 != lVar15) {
            lVar8 = *param_3;
            puVar13 = (undefined8 *)(lVar8 + lVar21 * 0x20);
            lVar16 = lVar9 - lVar21;
            do {
              lVar10 = *(long *)(lVar8 + lVar21 * 0x20 + 0x18);
              lVar12 = lVar16;
              puVar20 = puVar13;
              do {
                if (lVar10 <= (long)puVar20[-1]) break;
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102544da0);
                  (*pcVar3)();
                }
                uVar2 = *(undefined1 *)(puVar20 + 2);
                uVar25 = puVar20[1];
                uVar22 = *puVar20;
                puVar20[1] = puVar20[-3];
                *puVar20 = puVar20[-4];
                puVar20[3] = puVar20[-1];
                puVar20[2] = puVar20[-2];
                *(undefined1 *)(puVar20 + -2) = uVar2;
                puVar20[-1] = lVar10;
                puVar20[-3] = uVar25;
                puVar20[-4] = uVar22;
                bVar4 = lVar12 != -1;
                lVar12 = lVar12 + 1;
                puVar20 = puVar20 + -4;
              } while (bVar4);
              lVar21 = lVar21 + 1;
              puVar13 = puVar13 + 4;
              lVar16 = lVar16 + -1;
              lVar12 = lVar15;
            } while (lVar21 != lVar15);
          }
        }
      }
      if (lVar12 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102544d80);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar24 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar24) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar24 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar24 + 1;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x28) = lVar12;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102544db8);
        (*pcVar3)();
      }
      FUN_102544e40(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102544d50;
      lVar8 = param_3[1];
      lVar9 = lVar12;
    } while (lVar12 < lVar8);
  }
  puVar7 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102544dc0);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar23 = (ulong *)(puVar7 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102544dbc);
      (*pcVar3)();
    }
    plVar19 = (long *)(puVar7 + uVar24 * 0x10);
    lVar21 = *plVar19;
    puVar1 = puVar23 + uVar24 * 2;
    uVar11 = puVar1[1];
    FUN_1025450b0(lVar9 + lVar21 * 0x20,lVar9 + *puVar1 * 0x20,lVar9 + uVar11 * 0x20,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102544d84);
      (*pcVar3)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102544d88);
      (*pcVar3)();
    }
    *plVar19 = lVar21;
    plVar19[1] = uVar11;
    uVar11 = *puVar23;
    lVar9 = uVar11 - uVar24;
    if (uVar11 < uVar24) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102544d8c);
      (*pcVar3)();
    }
    uVar24 = uVar11 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar23 = uVar24;
  }
LAB_102544d50:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 102544dc0; end: 102544e3f;  */

void FUN_102544dc0(long param_1,long param_2,long param_3,long *param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_3 != param_2) {
    lVar4 = *param_4;
    puVar5 = (undefined8 *)(lVar4 + param_3 * 0x20);
    param_1 = param_1 - param_3;
    do {
      lVar6 = *(long *)(lVar4 + param_3 * 0x20 + 0x18);
      lVar7 = param_1;
      puVar8 = puVar5;
      do {
        if (lVar6 <= (long)puVar8[-1]) break;
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102544e40);
          (*pcVar2)();
        }
        uVar1 = *(undefined1 *)(puVar8 + 2);
        uVar10 = puVar8[1];
        uVar9 = *puVar8;
        puVar8[1] = puVar8[-3];
        *puVar8 = puVar8[-4];
        puVar8[3] = puVar8[-1];
        puVar8[2] = puVar8[-2];
        *(undefined1 *)(puVar8 + -2) = uVar1;
        puVar8[-1] = lVar6;
        puVar8[-3] = uVar10;
        puVar8[-4] = uVar9;
        bVar3 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        puVar8 = puVar8 + -4;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 4;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102544e40; end: 1025450af;  */

undefined8 FUN_102544e40(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_102544f18;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102545090);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_102544f78:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102545080);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102545088);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102545068);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10254506c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102545074);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10254507c);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_102544f18:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102545070);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102545078);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102545084);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10254508c);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_102544f78;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102545094);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102545058);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1025450b0);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_1025450b0(lVar8 + lVar11 * 0x20,lVar8 + *plVar3 * 0x20,lVar8 + lVar9 * 0x20,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10254505c);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102545060);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102545064);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 1025450b0; end: 1025452c7;  */

undefined8
FUN_1025450b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar4;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar2 = lVar9 + 0x1f;
  if (-1 < lVar9) {
    lVar2 = lVar9;
  }
  lVar2 = lVar2 >> 5;
  lVar10 = (long)param_3 - (long)param_2;
  lVar5 = lVar10 + 0x1f;
  if (-1 < lVar10) {
    lVar5 = lVar10;
  }
  lVar5 = lVar5 >> 5;
  if (lVar2 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar2 * 4 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 5);
    }
    puVar4 = param_4 + lVar2 * 4;
    puVar7 = param_1;
    if (0x1f < lVar9) {
      do {
        if (param_3 <= param_2) break;
        if ((long)param_4[3] < (long)param_2[3]) {
          puVar6 = param_4;
          puVar8 = param_2;
          param_2 = param_2 + 4;
        }
        else {
          puVar6 = param_4 + 4;
          puVar8 = param_4;
        }
        param_4 = puVar6;
        if (puVar7 != puVar8) {
          uVar11 = *puVar8;
          uVar13 = puVar8[3];
          uVar12 = puVar8[2];
          puVar7[1] = puVar8[1];
          *puVar7 = uVar11;
          puVar7[3] = uVar13;
          puVar7[2] = uVar12;
        }
        puVar7 = puVar7 + 4;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 * 4 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar5 << 5);
    }
    puVar4 = param_4 + lVar5 * 4;
    puVar7 = param_2;
    if ((param_1 < param_2) && (0x1f < lVar10)) {
      do {
        while (puVar8 = param_3 + -4, (long)param_2[-1] < (long)puVar4[-1]) {
          puVar7 = param_2 + -4;
          if (param_3 != param_2) {
            uVar11 = *puVar7;
            uVar13 = param_2[-1];
            uVar12 = param_2[-2];
            param_3[-3] = param_2[-3];
            *puVar8 = uVar11;
            param_3[-1] = uVar13;
            param_3[-2] = uVar12;
          }
          if ((puVar7 <= param_1) || (param_3 = puVar8, param_2 = puVar7, puVar4 <= param_4))
          goto LAB_10254526c;
        }
        puVar6 = puVar4 + -4;
        if (param_3 != puVar4) {
          uVar11 = *puVar6;
          uVar13 = puVar4[-1];
          uVar12 = puVar4[-2];
          param_3[-3] = puVar4[-3];
          *puVar8 = uVar11;
          param_3[-1] = uVar13;
          param_3[-2] = uVar12;
        }
        puVar4 = puVar6;
        puVar7 = param_2;
        param_3 = puVar8;
      } while (param_4 < puVar6);
    }
  }
LAB_10254526c:
  uVar3 = (long)puVar4 - (long)param_4;
  uVar1 = uVar3 + 0x1f;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if ((puVar7 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xffffffffffffffe0)) <= puVar7)) {
    func_0x000107c610b8(puVar7,param_4,((long)uVar1 >> 5) << 5);
  }
  return 1;
}



/* Entry: 1025452c8; end: 10254530b;  */

void FUN_1025452c8(long param_1)

{
  FUN_1025447b0(0,*(undefined8 *)(param_1 + 0x10),0,param_1,0x112ea4688,&PTR_PTR_1126aaa98,
                0x112ea47d0,&UNK_10dab79e8);
  return;
}



/* Entry: 10254530c; end: 10254531f;  */

/* WARNING: Removing unreachable block (ram,0x0001025446a0) */
/* WARNING: Removing unreachable block (ram,0x0001025446b0) */
/* WARNING: Removing unreachable block (ram,0x0001025447ac) */
/* WARNING: Removing unreachable block (ram,0x0001025446bc) */
/* WARNING: Removing unreachable block (ram,0x0001025446c4) */
/* WARNING: Removing unreachable block (ram,0x00010254473c) */
/* WARNING: Removing unreachable block (ram,0x000102544744) */
/* WARNING: Removing unreachable block (ram,0x000102544748) */
/* WARNING: Removing unreachable block (ram,0x00010254474c) */
/* WARNING: Removing unreachable block (ram,0x00010254475c) */

undefined * FUN_10254530c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112ea4678;
    func_0x0001000285a8(0x112ea4678,&UNK_10dab7858);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 5) << 1;
  }
  uVar5 = 0x112ea47b0;
  func_0x0001000285a8(0x112ea47b0,&UNK_10dab79c8);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 102545320; end: 102545487;  */

long FUN_102545320(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  puVar9 = (ulong *)(param_4 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar13 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102545488);
      (*pcVar3)();
    }
    lVar5 = 0;
    lVar12 = 0;
    uVar14 = 0x3f - uVar10 >> 6;
    lVar13 = lVar5;
    while( true ) {
      while (uVar11 == 0) {
        bVar4 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102545484);
          (*pcVar3)();
        }
        if ((long)uVar14 <= lVar13) {
          uVar11 = 0;
          if ((long)uVar14 <= lVar5 + 1) {
            uVar14 = lVar5 + 1;
          }
          lVar13 = uVar14 - 1;
          param_3 = lVar12;
          goto LAB_102545448;
        }
        uVar11 = puVar9[lVar13];
      }
      lVar12 = lVar12 + 1;
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar13 << 6;
      puVar8 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar6 * 0x18);
      uVar1 = puVar8[1];
      uVar7 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar6 * 8);
      uVar2 = *(undefined1 *)(puVar8 + 2);
      *param_2 = *puVar8;
      param_2[1] = uVar1;
      *(undefined1 *)(param_2 + 2) = uVar2;
      param_2[3] = uVar7;
      if (lVar12 == param_3) break;
      param_2 = param_2 + 4;
      func_0x000101107198();
      lVar5 = lVar13;
    }
    func_0x000101107198();
  }
LAB_102545448:
  *param_1 = param_4;
  param_1[1] = (long)puVar9;
  param_1[2] = ~uVar10;
  param_1[3] = lVar13;
  param_1[4] = uVar11;
  return param_3;
}



/* Entry: 102545488; end: 10254548b;  */

void FUN_102545488(void)

{
  return;
}



/* Entry: 10254548c; end: 102545d5b;  */

/* WARNING: Removing unreachable block (ram,0x000102545c00) */
/* WARNING: Type propagation algorithm not settling */

undefined8 ****** FUN_10254548c(undefined8 *******param_1)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *****pppppuVar10;
  undefined *puVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  ulong uVar17;
  undefined8 ******ppppppuVar18;
  ulong uVar19;
  long lVar20;
  undefined8 ******ppppppuVar21;
  undefined8 *******pppppppuVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 *****pppppuVar26;
  undefined8 ****ppppuVar27;
  code *pcStack_98;
  undefined8 *******pppppppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pppppppuVar8 = param_1 + 8;
  lVar20 = -1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f);
  uVar17 = -lVar20;
  uVar19 = 0xffffffffffffffff;
  if (uVar17 < 0x40) {
    uVar19 = ~(-1L << (uVar17 & 0x3f));
  }
  ppppppuVar18 = (undefined8 ******)(uVar19 & (ulong)*pppppppuVar8);
  lVar23 = 0;
  lVar25 = 0;
  while( true ) {
    for (; ppppppuVar18 != (undefined8 ******)0x0;
        ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 - 1U & (ulong)ppppppuVar18)) {
      uVar19 = ((ulong)ppppppuVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 |
               ((ulong)ppppppuVar18 & 0x5555555555555555) << 1;
      uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      bVar7 = SCARRY8(lVar25,(long)param_1[7]
                                   [LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) + lVar23 * 0x40]);
      lVar25 = lVar25 + (long)param_1[7][LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) + lVar23 * 0x40];
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bdc);
        (*pcVar6)();
      }
    }
    bVar7 = SCARRY8(lVar23,1);
    lVar23 = lVar23 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bc4);
      (*pcVar6)();
    }
    if ((long)(0x3fU - lVar20 >> 6) <= lVar23) break;
    ppppppuVar18 = pppppppuVar8[lVar23];
  }
  func_0x000107c61434(param_1);
  func_0x000102545d78();
  puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar25 < 6) {
    pppppppuStack_88 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar17 = -1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f);
    uVar19 = 0xffffffffffffffff;
    if (-uVar17 < 0x40) {
      uVar19 = ~(-1L << (-uVar17 & 0x3f));
    }
    ppppppuVar18 = (undefined8 ******)(uVar19 & (ulong)param_1[8]);
    func_0x000107c61434(param_1);
    lVar20 = 0;
    lVar23 = lVar20;
    while( true ) {
      while (ppppppuVar18 != (undefined8 ******)0x0) {
        uVar19 = ((ulong)ppppppuVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)ppppppuVar18 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | lVar20 << 6;
        pppppuVar26 = param_1[7][uVar19];
        if ((long)pppppuVar26 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102545be0);
          (*pcVar6)();
        }
        ppppppuVar16 = param_1[6] + uVar19 * 3;
        pppppuVar1 = *ppppppuVar16;
        pppppuVar2 = ppppppuVar16[1];
        uVar5 = *(undefined1 *)(ppppppuVar16 + 2);
        func_0x000101107198(pppppuVar1,pppppuVar2,uVar5);
        if (pppppuVar26 == (undefined8 *****)0x0) {
          func_0x000101107184(pppppuVar1,pppppuVar2,uVar5);
          pppppuVar10 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          pppppuVar10 = pppppuVar26;
          func_0x000107c5fc70(pppppuVar26,&UNK_1106a4438);
          pppppuVar10[2] = pppppuVar26;
          pppppuVar10[4] = pppppuVar1;
          pppppuVar10[5] = pppppuVar2;
          *(undefined1 *)(pppppuVar10 + 6) = uVar5;
          puVar11 = (undefined *)((long)pppppuVar26 + -1);
          if (puVar11 != (undefined *)0x0) {
            pppppuVar26 = pppppuVar10 + 9;
            do {
              func_0x000101107198(pppppuVar1,pppppuVar2,uVar5);
              pppppuVar26[-2] = pppppuVar1;
              pppppuVar26[-1] = pppppuVar2;
              *(undefined1 *)pppppuVar26 = uVar5;
              puVar11 = puVar11 + -1;
              pppppuVar26 = pppppuVar26 + 3;
            } while (puVar11 != (undefined *)0x0);
          }
        }
        ppppuVar27 = pppppuVar10[2];
        lVar23 = *(long *)(puVar24 + 0x10);
        if (SCARRY8(lVar23,(long)ppppuVar27)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102545be4);
          (*pcVar6)();
        }
        puVar11 = puVar24;
        func_0x000107c61558();
        if ((((ulong)puVar11 & 1) == 0) ||
           (uVar19 = *(ulong *)(puVar24 + 0x18) >> 1, (long)uVar19 < lVar23 + (long)ppppuVar27)) {
          FUN_10253faf8();
          uVar19 = *(ulong *)(puVar11 + 0x18) >> 1;
          puVar24 = puVar11;
        }
        ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 - 1U & (ulong)ppppppuVar18);
        lVar23 = lVar20;
        if (pppppuVar10[2] == (undefined8 ****)0x0) {
          func_0x000107c6142c(pppppuVar10);
          if (ppppuVar27 != (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102545be8);
            (*pcVar6)();
          }
        }
        else {
          if ((undefined8 ****)(uVar19 - *(long *)(puVar24 + 0x10)) < ppppuVar27) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bec);
            (*pcVar6)();
          }
          func_0x000107c6140c(puVar24 + *(long *)(puVar24 + 0x10) * 0x18 + 0x20,pppppuVar10 + 4,
                              ppppuVar27,&UNK_1106a4438);
          func_0x000107c6142c(pppppuVar10);
          if (ppppuVar27 != (undefined8 ****)0x0) {
            if (SCARRY8(*(long *)(puVar24 + 0x10),(long)ppppuVar27)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bf0);
              (*pcVar6)();
            }
            *(long *)(puVar24 + 0x10) = *(long *)(puVar24 + 0x10) + (long)ppppuVar27;
          }
        }
      }
      bVar7 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bc8);
        (*pcVar6)();
      }
      if ((long)(0x3f - uVar17 >> 6) <= lVar20) break;
      ppppppuVar18 = pppppppuVar8[lVar20];
    }
    func_0x000102545d78(param_1,pppppppuVar8,~uVar17,lVar23,0);
    FUN_1025420ac(puVar24);
  }
  else {
    pppppppuVar22 = (undefined8 *******)param_1[2];
    pppppppuVar8 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppppuVar22 != (undefined8 *******)0x0) {
      func_0x000107c61434(param_1);
      pppppppuVar8 = pppppppuVar22;
      func_0x00010253fc9c(pppppppuVar22,0);
      pppppppuVar9 = &pppppppuStack_88;
      FUN_102545320(pppppppuVar9,pppppppuVar8 + 4,pppppppuVar22,param_1);
      func_0x000102545d78(pppppppuStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
      if (pppppppuVar9 != pppppppuVar22) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1025455d0);
        (*pcVar6)();
      }
    }
    pppppppuStack_88 = pppppppuVar8;
    FUN_1025448fc(&pppppppuStack_88);
    pppppppuVar8 = pppppppuStack_88;
    ppppppuVar16 = pppppppuStack_88[2];
    ppppppuVar18 = ppppppuVar16;
    if ((undefined8 ******)0x4 < ppppppuVar16) {
      ppppppuVar18 = (undefined8 ******)0x5;
    }
    if (ppppppuVar16 == (undefined8 ******)0x0) {
      func_0x000107c61574(pppppppuStack_88);
      pppppppuVar22 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      pppppppuStack_88 = (undefined8 *******)puVar24;
      FUN_1025444d4(0,ppppppuVar18,0);
      pppppppuVar9 = pppppppuVar8 + 6;
      do {
        pppppppuVar22 = pppppppuStack_88;
        if (ppppppuVar18 == (undefined8 ******)0x0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bd4);
          (*pcVar6)();
        }
        ppppppuVar16 = pppppppuVar9[-2];
        ppppppuVar3 = pppppppuVar9[-1];
        uVar5 = *(undefined1 *)pppppppuVar9;
        func_0x000101107198(ppppppuVar16,ppppppuVar3,uVar5);
        ppppppuVar21 = pppppppuVar22[2];
        pppppppuStack_88 = pppppppuVar22;
        if ((undefined8 ******)((ulong)pppppppuVar22[3] >> 1) <= ppppppuVar21) {
          FUN_1025444d4((undefined8 ******)0x1 < pppppppuVar22[3],
                        (undefined8 ******)((long)ppppppuVar21 + 1U),1);
        }
        pppppppuVar22 = pppppppuStack_88;
        pppppppuStack_88[2] = (undefined8 ******)((long)ppppppuVar21 + 1U);
        pppppppuStack_88[(long)ppppppuVar21 * 3 + 4] = ppppppuVar16;
        pppppppuStack_88[(long)ppppppuVar21 * 3 + 5] = ppppppuVar3;
        *(undefined1 *)(pppppppuStack_88 + (long)ppppppuVar21 * 3 + 6) = uVar5;
        pppppppuVar9 = pppppppuVar9 + 4;
        ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + -1);
      } while (ppppppuVar18 != (undefined8 ******)0x0);
      func_0x000107c61574(pppppppuVar8);
    }
    ppppppuVar16 = pppppppuVar22[2];
    pppppppuVar8 = param_1;
    func_0x000107c61434();
    pcStack_98 = (code *)0x0;
    ppppppuVar18 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (ppppppuVar16 != (undefined8 ******)0x0) {
        ppppppuVar21 = (undefined8 ******)0x0;
        pppppppuVar9 = pppppppuVar22 + 6;
        do {
          if (pppppppuVar22[2] <= ppppppuVar21) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bc0);
            (*pcVar6)();
          }
          if (pppppppuVar8[2] != (undefined8 ******)0x0) {
            ppppppuVar3 = pppppppuVar9[-2];
            ppppppuVar4 = pppppppuVar9[-1];
            uVar5 = *(undefined1 *)pppppppuVar9;
            func_0x000101107198(ppppppuVar3,ppppppuVar4,uVar5);
            func_0x000107c61434(pppppppuVar8);
            ppppppuVar12 = ppppppuVar3;
            ppppppuVar14 = ppppppuVar4;
            FUN_102542568(ppppppuVar3,ppppppuVar4,uVar5);
            if (((ulong)ppppppuVar14 & 1) == 0) {
              func_0x000107c6142c(pppppppuVar8);
            }
            else {
              pppppuVar26 = pppppppuVar8[7][(long)ppppppuVar12];
              func_0x000107c6142c(pppppppuVar8);
              if (0 < (long)pppppuVar26) {
                if ((undefined8 ******)0x4 < param_1[2]) {
                  func_0x000107c6142c(pppppppuVar22);
                  func_0x000101107184(ppppppuVar3,ppppppuVar4,uVar5);
                  goto LAB_102545b88;
                }
                func_0x000101107198(ppppppuVar3,ppppppuVar4,uVar5);
                ppppppuVar12 = ppppppuVar18;
                func_0x000107c61558();
                ppppppuVar14 = ppppppuVar18;
                if (((ulong)ppppppuVar12 & 1) == 0) {
                  ppppppuVar14 = (undefined8 ******)0x0;
                  FUN_10253faf8(0,(long)ppppppuVar18[2] + 1,1,ppppppuVar18);
                }
                pppppuVar26 = ppppppuVar14[2];
                ppppppuVar18 = ppppppuVar14;
                if ((undefined8 *****)((ulong)ppppppuVar14[3] >> 1) <= pppppuVar26) {
                  ppppppuVar18 = (undefined8 ******)(ulong)((undefined8 *****)0x1 < ppppppuVar14[3])
                  ;
                  FUN_10253faf8(ppppppuVar18,(undefined8 *****)((long)pppppuVar26 + 1U),1,
                                ppppppuVar14);
                }
                ppppppuVar18[2] = (undefined8 *****)((long)pppppuVar26 + 1U);
                ppppppuVar18[(long)pppppuVar26 * 3 + 4] = ppppppuVar3;
                ppppppuVar18[(long)pppppuVar26 * 3 + 5] = ppppppuVar4;
                *(undefined1 *)(ppppppuVar18 + (long)pppppuVar26 * 3 + 6) = uVar5;
                func_0x0001017614d0(pcStack_98,0);
                pppppppuVar13 = pppppppuVar8;
                func_0x000107c61558();
                ppppppuVar12 = ppppppuVar3;
                ppppppuVar14 = ppppppuVar4;
                pppppppuStack_88 = pppppppuVar8;
                FUN_102542568(ppppppuVar3,ppppppuVar4,uVar5);
                uVar19 = (ulong)~(uint)ppppppuVar14 & 1;
                lVar20 = (long)pppppppuVar8[2] + uVar19;
                if (SCARRY8((long)pppppppuVar8[2],uVar19)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bcc);
                  (*pcVar6)();
                }
                if ((long)pppppppuVar8[3] < lVar20) {
                  func_0x0001025437b8(lVar20,pppppppuVar13);
                  pppppppuVar8 = pppppppuStack_88;
                  ppppppuVar12 = ppppppuVar3;
                  ppppppuVar15 = ppppppuVar4;
                  FUN_102542568(ppppppuVar3,ppppppuVar4,uVar5);
                  if (((uint)ppppppuVar14 & 1) != ((uint)ppppppuVar15 & 1)) {
                    func_0x000107c60624(&UNK_1106a4438);
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102545c00);
                    (*pcVar6)();
                  }
                }
                else if (((ulong)pppppppuVar13 & 1) == 0) {
                  FUN_1025431f0();
                  pppppppuVar8 = pppppppuStack_88;
                }
                if (((ulong)ppppppuVar14 & 1) == 0) {
                  pppppppuVar8[((ulong)ppppppuVar12 >> 6) + 8] =
                       (undefined8 ******)
                       ((ulong)pppppppuVar8[((ulong)ppppppuVar12 >> 6) + 8] |
                       1L << ((ulong)ppppppuVar12 & 0x3f));
                  ppppppuVar14 = pppppppuVar8[6] + (long)ppppppuVar12 * 3;
                  *ppppppuVar14 = ppppppuVar3;
                  ppppppuVar14[1] = ppppppuVar4;
                  *(undefined1 *)(ppppppuVar14 + 2) = uVar5;
                  pppppppuVar8[7][(long)ppppppuVar12] = (undefined8 *****)0x0;
                  if (SCARRY8((long)pppppppuVar8[2],1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bd8);
                    (*pcVar6)();
                  }
                  pppppppuVar8[2] = (undefined8 ******)((long)pppppppuVar8[2] + 1);
                  func_0x000101107198(ppppppuVar3,ppppppuVar4,uVar5);
                }
                pppppuVar26 = pppppppuVar8[7][(long)ppppppuVar12];
                if (SBORROW8((long)pppppuVar26,1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102545bd0);
                  (*pcVar6)();
                }
                pppppppuVar8[7][(long)ppppppuVar12] = (undefined8 *****)((long)pppppuVar26 + -1);
                pcStack_98 = FUN_1025408b4;
              }
            }
            func_0x000101107184(ppppppuVar3,ppppppuVar4,uVar5);
          }
          ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + 1);
          pppppppuVar9 = pppppppuVar9 + 3;
        } while (ppppppuVar16 != ppppppuVar21);
      }
    } while (ppppppuVar18[2] < (undefined8 *****)0x5);
    func_0x000107c6142c(pppppppuVar8);
    pppppppuVar8 = pppppppuVar22;
LAB_102545b88:
    func_0x000107c6142c(pppppppuVar8);
    func_0x0001017614d0(pcStack_98,0);
    pppppppuStack_88 = (undefined8 *******)ppppppuVar18;
  }
  return pppppppuStack_88;
}



/* Entry: 102545d5c; end: 102545d87;  */

void FUN_102545d5c(long param_1,long param_2)

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



/* Entry: 102545d88; end: 102545dc7;  */

void FUN_102545d88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea47b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab7a68;
  func_0x000107c61520(&UNK_10dab7a68,&UNK_11051eb00);
  puRam0000000112ea47b8 = puVar1;
  return;
}



/* Entry: 102545dc8; end: 102545ddb;  */

void FUN_102545dc8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102545ddc; end: 102545e5b;  */

void FUN_102545ddc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102545e5c;
  *(undefined1 *)(plVar6 + 0x1f) = uVar5;
  plVar6[0x16] = lVar2;
  plVar6[0x17] = lVar4;
  plVar6[0x14] = lVar1;
  plVar6[0x15] = lVar3;
  plVar6[0x13] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10254b1b4,0,0);
  return;
}



/* Entry: 102545e5c; end: 102545e97;  */

void FUN_102545e5c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102545e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102545e98; end: 102545f4f;  */

undefined8 FUN_102545e98(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102545f50; end: 10254603f;  */

uint FUN_102545f50(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102546040; end: 10254607f;  */

void FUN_102546040(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea47e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab7a40;
  func_0x000107c61520(&UNK_10dab7a40,&UNK_11051eb00);
  puRam0000000112ea47e0 = puVar1;
  return;
}



/* Entry: 102546080; end: 10254608b;  */

void FUN_102546080(long param_1,long param_2)

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



/* Entry: 10254608c; end: 102546aaf;  */

/* WARNING: Removing unreachable block (ram,0x000102546a58) */

long FUN_10254608c(undefined8 param_1,undefined *param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  ulong uVar13;
  byte *pbVar14;
  byte **ppbVar15;
  long unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 uVar21;
  byte *pbVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_b0;
  byte *pbStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined *apuStack_88 [3];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar19 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined **)(unaff_x20 + 0x10) = param_2;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 == (undefined *)0x0) {
LAB_1025461b0:
    apuStack_88[0] = puVar7;
    func_0x00010254452c(0,4,0);
    puVar7 = apuStack_88[0];
    puVar6 = PTR_PTR_1126aaa98;
    func_0x000107c610f8();
    uVar4 = 0x8b919ff0;
    func_0x000107c5fadc(0x8b919ff0,0xa400000000000000);
    func_0x000107c5eea0(lVar19);
    func_0x000107c5ee8c();
    pcVar2 = *(code **)(lVar17 + 8);
    (*pcVar2)(lVar19,lVar3);
    uVar23 = 0x3ff0000000000000;
    func_0x000107c48260(0x3ff0000000000000,param_1);
    func_0x000107c61170(uVar4);
    uVar12 = *(ulong *)(puVar7 + 0x10);
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
      func_0x00010254452c(1 < *(ulong *)(puVar7 + 0x18),uVar12 + 1,1);
      puVar7 = apuStack_88[0];
    }
    *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
    *(undefined **)(puVar7 + uVar12 * 8 + 0x20) = puVar6;
    puVar6 = PTR_PTR_1126aaa98;
    func_0x000107c610f8();
    uVar4 = 0x9b929ff0;
    func_0x000107c5fadc(0x9b929ff0,0xa400000000000000);
    func_0x000107c5eea0(lVar19);
    func_0x000107c5ee8c();
    (*pcVar2)(lVar19,lVar3);
    uVar24 = 0x3ff0000000000000;
    func_0x000107c48260(0x3ff0000000000000,uVar23);
    func_0x000107c61170(uVar4);
    uVar12 = *(ulong *)(puVar7 + 0x10);
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
      func_0x00010254452c(1 < *(ulong *)(puVar7 + 0x18),uVar12 + 1,1);
      puVar7 = apuStack_88[0];
    }
    *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
    *(undefined **)(puVar7 + uVar12 * 8 + 0x20) = puVar6;
    puVar6 = PTR_PTR_1126aaa98;
    func_0x000107c610f8();
    uVar4 = 0x80919ff0;
    func_0x000107c5fadc(0x80919ff0,0xa400000000000000);
    func_0x000107c5eea0(lVar19);
    func_0x000107c5ee8c();
    (*pcVar2)(lVar19,lVar3);
    uVar23 = 0x3ff0000000000000;
    func_0x000107c48260(0x3ff0000000000000,uVar24);
    func_0x000107c61170(uVar4);
    uVar12 = *(ulong *)(puVar7 + 0x10);
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
      func_0x00010254452c(1 < *(ulong *)(puVar7 + 0x18),uVar12 + 1,1);
    }
    puVar5 = apuStack_88[0];
    *(ulong *)(apuStack_88[0] + 0x10) = uVar12 + 1;
    *(undefined **)(apuStack_88[0] + uVar12 * 8 + 0x20) = puVar6;
    puVar7 = PTR_PTR_1126aaa98;
    func_0x000107c610f8();
    uVar4 = 0xae989ff0;
    func_0x000107c5fadc(0xae989ff0,0xa400000000000000);
    func_0x000107c5eea0(lVar19);
    func_0x000107c5ee8c();
    (*pcVar2)(lVar19,lVar3);
    func_0x000107c48260(0x3ff0000000000000,uVar23);
    func_0x000107c61170(uVar4);
    uVar12 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar12) {
      func_0x00010254452c(1 < *(ulong *)(puVar5 + 0x18),uVar12 + 1,1);
      puVar5 = apuStack_88[0];
    }
    *(ulong *)(puVar5 + 0x10) = uVar12 + 1;
    *(undefined **)(puVar5 + uVar12 * 8 + 0x20) = puVar7;
    func_0x000107c61408(0x112ea48c0,4,PTR___sSSN_11034da80);
    *(undefined **)(unaff_x20 + 0x18) = puVar5;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_2 != (undefined *)0x0) {
      FUN_102547f48(0);
      func_0x000107c615f0(param_2);
      puVar6 = puVar5;
      func_0x000107c6157c(puVar5);
      func_0x000107c5fc48();
      func_0x000107c61574(puVar5);
      func_0x000107c57b9c(param_2);
      func_0x000107c615e8(param_2);
      func_0x000107c61170(puVar6);
    }
  }
  else {
    puVar6 = param_2;
    func_0x000107c615f0();
    func_0x000107c4fa0c();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) goto LAB_1025461b0;
    uVar4 = 0;
    FUN_102547f48(0);
    puVar5 = puVar6;
    func_0x000107c5fc54(puVar6,uVar4);
    func_0x000107c61170(puVar6);
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar6 = puVar5;
      }
      func_0x000107c60480();
    }
    if ((long)puVar6 < 4) {
      func_0x000107c6142c(puVar5);
      goto LAB_1025461b0;
    }
    puVar6 = puVar5;
    func_0x000107c61434();
    FUN_102547f8c();
    apuStack_88[0] = puVar6;
    FUN_10254801c(apuStack_88);
    func_0x000107c6142c(puVar5);
    *(undefined **)(unaff_x20 + 0x18) = apuStack_88[0];
  }
  uVar12 = 0;
  func_0x000107c61428(unaff_x20 + 0x18,apuStack_88,0);
  uVar16 = *(ulong *)(unaff_x20 + 0x18);
  if (uVar16 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
    uStack_b0 = uVar8;
    if (3 < uVar8) {
      uStack_b0 = 4;
    }
    if ((long)uVar8 < (long)uStack_b0) {
LAB_102546aac:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102546ab0);
      (*pcVar2)();
    }
  }
  else {
    uVar8 = uVar16 & 0xffffffffffffff8;
    if ((uVar16 & 0x8000000000000000) != 0) {
      uVar8 = uVar16;
    }
    uStack_b0 = uVar8;
    func_0x000107c60480();
    uVar18 = uVar8;
    func_0x000107c60480();
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1025469d4);
      (*pcVar2)();
    }
    if (3 < uStack_b0) {
      uStack_b0 = 4;
    }
    func_0x000107c60480();
    if ((long)uVar8 < (long)uStack_b0) goto LAB_102546aac;
  }
  if (((uVar16 & 0xc000000000000001) == 0) || (uStack_b0 == 0)) {
    func_0x000107c61438(uVar16,2);
  }
  else {
    uVar4 = 0;
    FUN_102547f48(0);
    func_0x000107c61438(uVar16,2);
    func_0x000107c60318(0,uVar16,uVar4);
    if (((uStack_b0 != 1) && (func_0x000107c60318(1,uVar16,uVar4), uStack_b0 != 2)) &&
       (func_0x000107c60318(2,uVar16,uVar4), uStack_b0 != 3)) {
      func_0x000107c60318(3,uVar16,uVar4);
    }
  }
  uStack_e0 = 0;
  func_0x000107c6142c(uVar16);
  if (uVar16 >> 0x3e == 0) {
    uVar8 = 0;
    uVar18 = uVar16 & 0xffffffffffffff8;
    uVar12 = uStack_b0;
    uStack_b0 = uVar18 + 0x20;
  }
  else {
    uVar8 = uVar16 & 0xffffffffffffff8;
    if ((uVar16 & 0x8000000000000000) != 0) {
      uVar8 = uVar16;
    }
    uVar18 = 0;
    func_0x000107c60484();
    func_0x000107c6142c(uVar16);
    uVar12 = uVar12 >> 1;
  }
  uVar16 = uVar12 - uVar8;
  if (SBORROW8(uVar12,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025469d8);
    (*pcVar2)();
  }
  if (uVar16 == 0) {
    func_0x000107c615e8(uVar18);
    func_0x000107c615e8(param_2);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU);
    puStack_90 = puVar7;
    FUN_1025444d4(0,uVar10,0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102546a58);
      (*pcVar2)();
    }
    uVar20 = 0;
    uStack_d8 = uVar18;
    do {
      puVar7 = puStack_90;
      uVar18 = uVar20 + 1;
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10254699c);
        (*pcVar2)();
      }
      if (((long)uVar12 <= (long)uVar8) || (uVar16 <= uVar20)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1025469a0);
        (*pcVar2)();
      }
      pbVar9 = *(byte **)(uStack_b0 + uVar8 * 8);
      func_0x000107c61174();
      pbVar22 = pbVar9;
      func_0x000107c4f930();
      func_0x000107c61180();
      pbVar14 = pbVar22;
      func_0x000107c5faec();
      func_0x000107c61170(pbVar22);
      uVar11 = (ulong)pbVar14 & 0xffffffffffff;
      uVar13 = uVar10 >> 0x38 & 0xf;
      uVar20 = uVar11;
      if ((uVar10 & 0x2000000000000000) != 0) {
        uVar20 = uVar13;
      }
      if (uVar20 == 0) {
        func_0x000107c6142c(uVar10);
        uVar10 = uVar11;
LAB_102546854:
        pbVar14 = pbVar9;
        func_0x000107c4f930();
        func_0x000107c61180();
        pbVar22 = pbVar14;
        func_0x000107c5faec();
        uVar11 = uVar10;
        func_0x000107c61170(pbVar14);
        func_0x000107c61170(pbVar9);
        uVar21 = 0;
      }
      else {
        if ((uVar10 >> 0x3c & 1) == 0) {
          if ((uVar10 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar14 >> 0x3c & 1) == 0) {
              uVar11 = uVar10;
              func_0x000107c60358();
            }
            else {
              pbVar14 = (byte *)((uVar10 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar14 == 0x2b) {
              if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1025469ac);
                (*pcVar2)();
              }
              lVar3 = uVar11 - 1;
              if (lVar3 == 0) goto LAB_102546838;
              pbVar22 = (byte *)0x0;
              do {
                pbVar14 = pbVar14 + 1;
                if (((9 < *pbVar14 - 0x30) ||
                    (lVar17 = (long)pbVar22 * 10,
                    SUB168(SEXT816((long)pbVar22) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar20 = (ulong)(byte)(*pbVar14 - 0x30), pbVar22 = (byte *)(lVar17 + uVar20),
                   SCARRY8(lVar17,uVar20))) goto LAB_102546838;
                uVar20 = 0;
                lVar3 = lVar3 + -1;
              } while (lVar3 != 0);
            }
            else if (*pbVar14 == 0x2d) {
              if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1025469b0);
                (*pcVar2)();
              }
              lVar3 = uVar11 - 1;
              if (lVar3 == 0) {
LAB_102546838:
                uVar20 = 1;
                pbVar22 = (byte *)0x0;
              }
              else {
                pbVar22 = (byte *)0x0;
                do {
                  pbVar14 = pbVar14 + 1;
                  if (((9 < *pbVar14 - 0x30) ||
                      (lVar17 = (long)pbVar22 * 10,
                      SUB168(SEXT816((long)pbVar22) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                     (uVar20 = (ulong)(byte)(*pbVar14 - 0x30), pbVar22 = (byte *)(lVar17 - uVar20),
                     SBORROW8(lVar17,uVar20))) goto LAB_102546838;
                  uVar20 = 0;
                  lVar3 = lVar3 + -1;
                } while (lVar3 != 0);
              }
            }
            else {
              if (uVar11 == 0) goto LAB_102546838;
              pbVar22 = (byte *)0x0;
              if (pbVar14 == (byte *)0x0) {
                uVar20 = 0;
              }
              else {
                do {
                  if (((9 < *pbVar14 - 0x30) ||
                      (lVar3 = (long)pbVar22 * 10,
                      SUB168(SEXT816((long)pbVar22) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
                     (uVar20 = (ulong)(byte)(*pbVar14 - 0x30), pbVar22 = (byte *)(lVar3 + uVar20),
                     SCARRY8(lVar3,uVar20))) goto LAB_102546838;
                  uVar20 = 0;
                  uVar11 = uVar11 - 1;
                  pbVar14 = pbVar14 + 1;
                } while (uVar11 != 0);
              }
            }
          }
          else {
            pbStack_a0 = pbVar14;
            uStack_98 = uVar10 & 0xffffffffffffff;
            uVar1 = (uint)pbVar14 & 0xff;
            if (uVar1 == 0x2b) {
              if (uVar13 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1025469a4);
                (*pcVar2)();
              }
              lVar3 = uVar13 - 1;
              if (lVar3 == 0) goto LAB_102546838;
              pbVar22 = (byte *)0x0;
              pbVar14 = (byte *)((ulong)&pbStack_a0 | 1);
              do {
                if (((9 < *pbVar14 - 0x30) ||
                    (lVar17 = (long)pbVar22 * 10,
                    SUB168(SEXT816((long)pbVar22) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar20 = (ulong)(byte)(*pbVar14 - 0x30), pbVar22 = (byte *)(lVar17 + uVar20),
                   SCARRY8(lVar17,uVar20))) goto LAB_102546838;
                uVar20 = 0;
                lVar3 = lVar3 + -1;
                pbVar14 = pbVar14 + 1;
              } while (lVar3 != 0);
            }
            else if (uVar1 == 0x2d) {
              if (uVar13 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1025469a8);
                (*pcVar2)();
              }
              lVar3 = uVar13 - 1;
              if (lVar3 == 0) goto LAB_102546838;
              pbVar22 = (byte *)0x0;
              pbVar14 = (byte *)((ulong)&pbStack_a0 | 1);
              do {
                if (((9 < *pbVar14 - 0x30) ||
                    (lVar17 = (long)pbVar22 * 10,
                    SUB168(SEXT816((long)pbVar22) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar20 = (ulong)(byte)(*pbVar14 - 0x30), pbVar22 = (byte *)(lVar17 - uVar20),
                   SBORROW8(lVar17,uVar20))) goto LAB_102546838;
                uVar20 = 0;
                lVar3 = lVar3 + -1;
                pbVar14 = pbVar14 + 1;
              } while (lVar3 != 0);
            }
            else {
              if (uVar13 == 0) goto LAB_102546838;
              pbVar22 = (byte *)0x0;
              ppbVar15 = &pbStack_a0;
              do {
                if (((9 < *(byte *)ppbVar15 - 0x30) ||
                    (lVar3 = (long)pbVar22 * 10,
                    SUB168(SEXT816((long)pbVar22) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
                   (uVar20 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                   pbVar22 = (byte *)(lVar3 + uVar20), SCARRY8(lVar3,uVar20))) goto LAB_102546838;
                uVar20 = 0;
                uVar13 = uVar13 - 1;
                ppbVar15 = (byte **)((long)ppbVar15 + 1);
              } while (uVar13 != 0);
            }
          }
        }
        else {
          uVar11 = uVar10;
          func_0x000100edba6c(pbVar14,uVar10,10);
          uVar20 = uVar11;
          pbVar22 = pbVar14;
        }
        func_0x000107c6142c(uVar10);
        uVar10 = uVar11;
        if (((uint)uVar20 & 0xff) == 1) goto LAB_102546854;
        func_0x000107c61170(pbVar9);
        uVar10 = 0;
        uVar21 = 1;
      }
      uVar13 = *(ulong *)(puVar7 + 0x10);
      uVar20 = uVar13 + 1;
      puStack_90 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar13) {
        uVar11 = uVar20;
        FUN_1025444d4(1 < *(ulong *)(puVar7 + 0x18),uVar20,1);
      }
      puVar7 = puStack_90;
      *(ulong *)(puStack_90 + 0x10) = uVar20;
      *(byte **)(puStack_90 + uVar13 * 0x18 + 0x20) = pbVar22;
      *(ulong *)(puStack_90 + uVar13 * 0x18 + 0x28) = uVar10;
      puStack_90[uVar13 * 0x18 + 0x30] = uVar21;
      uVar8 = uVar8 + 1;
      uVar10 = uVar11;
      uVar20 = uVar18;
    } while (uVar18 != uVar16);
    func_0x000107c615e8(uStack_d8);
    func_0x000107c615e8(param_2);
  }
  *(undefined **)(unaff_x20 + 0x20) = puVar7;
  return unaff_x20;
}



/* Entry: 102546ab0; end: 102546b83;  */

ulong FUN_102546ab0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  if (param_1 == 3) {
    uVar2 = param_1;
    FUN_102546b84();
    if ((((uint)param_3 ^ 0xffffffff) & 0xff) != 0) {
      if (*(ulong *)(*(long *)(unaff_x20 + 0x20) + 0x10) < 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102546b84);
        (*pcVar1)();
      }
      uVar3 = uVar2;
      FUN_102548e90();
      if ((uVar3 & 1) == 0) {
        return uVar2;
      }
      func_0x000101107170(uVar2,param_2,param_3);
    }
  }
  else if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102546b7c);
    (*pcVar1)();
  }
  if (param_1 < *(ulong *)(*(long *)(unaff_x20 + 0x20) + 0x10)) {
    lVar4 = *(long *)(unaff_x20 + 0x20) + param_1 * 0x18;
    uVar2 = *(ulong *)(lVar4 + 0x20);
    func_0x000101107198(uVar2,*(undefined8 *)(lVar4 + 0x28),*(undefined1 *)(lVar4 + 0x30));
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102546b80);
  (*pcVar1)();
}



/* Entry: 102546b84; end: 102546ec3;  */

void FUN_102546b84(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte **ppbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long unaff_x20;
  byte *pbStack_40;
  ulong uStack_38;
  
  pbVar3 = *(byte **)(unaff_x20 + 0x10);
  if (pbVar3 == (byte *)0x0) {
    return;
  }
  func_0x000107c4aa38();
  func_0x000107c61180();
  if (pbVar3 == (byte *)0x0) {
    return;
  }
  pbVar7 = pbVar3;
  func_0x000107c5faec();
  func_0x000107c61170(pbVar3);
  pbVar4 = (byte *)((ulong)pbVar7 & 0xffffffffffff);
  pbVar6 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar3 = pbVar4;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar3 = pbVar6;
  }
  if (pbVar3 == (byte *)0x0) {
    return;
  }
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
        pbVar4 = param_2;
        func_0x000107c60358();
      }
      else {
        pbVar7 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar7 == 0x2b) {
        if ((long)pbVar4 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102546ec0);
          (*pcVar2)();
        }
        pbVar4 = pbVar4 + -1;
        if (pbVar4 == (byte *)0x0) {
          return;
        }
        lVar9 = 0;
        do {
          pbVar7 = pbVar7 + 1;
          if (9 < *pbVar7 - 0x30) {
            return;
          }
          lVar8 = lVar9 * 10;
          if (SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f) {
            return;
          }
          uVar1 = (ulong)(byte)(*pbVar7 - 0x30);
          lVar9 = lVar8 + uVar1;
          if (SCARRY8(lVar8,uVar1)) {
            return;
          }
          pbVar4 = pbVar4 + -1;
        } while (pbVar4 != (byte *)0x0);
      }
      else if (*pbVar7 == 0x2d) {
        if ((long)pbVar4 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102546eb8);
          (*pcVar2)();
        }
        pbVar4 = pbVar4 + -1;
        if (pbVar4 == (byte *)0x0) {
          return;
        }
        lVar9 = 0;
        do {
          pbVar7 = pbVar7 + 1;
          if (9 < *pbVar7 - 0x30) {
            return;
          }
          lVar8 = lVar9 * 10;
          if (SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f) {
            return;
          }
          uVar1 = (ulong)(byte)(*pbVar7 - 0x30);
          lVar9 = lVar8 - uVar1;
          if (SBORROW8(lVar8,uVar1)) {
            return;
          }
          pbVar4 = pbVar4 + -1;
        } while (pbVar4 != (byte *)0x0);
      }
      else {
        if (pbVar4 == (byte *)0x0) {
          return;
        }
        lVar9 = 0;
        pbVar3 = pbVar7;
        while (pbVar3 != (byte *)0x0) {
          if (9 < *pbVar7 - 0x30) {
            return;
          }
          lVar8 = lVar9 * 10;
          if (SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f) {
            return;
          }
          uVar1 = (ulong)(byte)(*pbVar7 - 0x30);
          lVar9 = lVar8 + uVar1;
          if (SCARRY8(lVar8,uVar1)) {
            return;
          }
          pbVar4 = pbVar4 + -1;
          pbVar7 = pbVar7 + 1;
          pbVar3 = pbVar4;
        }
      }
      goto LAB_102546e3c;
    }
    pbStack_40 = pbVar7;
    uStack_38 = (ulong)param_2 & 0xffffffffffffff;
    uVar10 = (uint)pbVar7 & 0xff;
    if (uVar10 == 0x2b) {
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102546ec4);
        (*pcVar2)();
      }
      pbVar6 = pbVar6 + -1;
      if (pbVar6 == (byte *)0x0) goto LAB_102546e20;
      lVar9 = 0;
      pbVar3 = (byte *)((ulong)&pbStack_40 | 1);
      do {
        if (((9 < *pbVar3 - 0x30) ||
            (lVar8 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*pbVar3 - 0x30), lVar9 = lVar8 + uVar1, SCARRY8(lVar8,uVar1)))
        goto LAB_102546e20;
        uVar10 = 0;
        pbVar6 = pbVar6 + -1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar6 != (byte *)0x0);
    }
    else if (uVar10 == 0x2d) {
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102546ebc);
        (*pcVar2)();
      }
      pbVar6 = pbVar6 + -1;
      if (pbVar6 == (byte *)0x0) {
LAB_102546e20:
        uVar10 = 1;
      }
      else {
        lVar9 = 0;
        pbVar3 = (byte *)((ulong)&pbStack_40 | 1);
        do {
          if (((9 < *pbVar3 - 0x30) ||
              (lVar8 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar3 - 0x30), lVar9 = lVar8 - uVar1, SBORROW8(lVar8,uVar1)))
          goto LAB_102546e20;
          uVar10 = 0;
          pbVar6 = pbVar6 + -1;
          pbVar3 = pbVar3 + 1;
        } while (pbVar6 != (byte *)0x0);
      }
    }
    else {
      if (pbVar6 == (byte *)0x0) goto LAB_102546e20;
      lVar9 = 0;
      ppbVar5 = &pbStack_40;
      do {
        if (((9 < *(byte *)ppbVar5 - 0x30) ||
            (lVar8 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*(byte *)ppbVar5 - 0x30), lVar9 = lVar8 + uVar1,
           SCARRY8(lVar8,uVar1))) goto LAB_102546e20;
        uVar10 = 0;
        pbVar6 = pbVar6 + -1;
        ppbVar5 = (byte **)((long)ppbVar5 + 1);
      } while (pbVar6 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(param_2);
    pbVar3 = param_2;
    func_0x000100edba6c(pbVar7,param_2,10);
    uVar10 = (uint)pbVar3;
    func_0x000107c6142c(param_2);
  }
  if ((uVar10 & 0xff) == 1) {
    return;
  }
LAB_102546e3c:
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102546ec4; end: 10254752f;  */

/* WARNING: Removing unreachable block (ram,0x000102547524) */

void FUN_102546ec4(void)

{
  ulong uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  byte **ppbVar13;
  long lVar14;
  byte *pbVar15;
  undefined *puVar16;
  long unaff_x20;
  undefined1 uVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbStack_c0;
  byte *pbStack_a0;
  byte *pbStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined1 auStack_78 [24];
  
  uVar9 = 0;
  func_0x000107c61428(unaff_x20 + 0x18,auStack_78,0);
  pbVar15 = *(byte **)(unaff_x20 + 0x18);
  if ((ulong)pbVar15 >> 0x3e == 0) {
    func_0x000107c61438(pbVar15,2);
    pbStack_98 = (byte *)((ulong)pbVar15 & 0xffffffffffffff8);
  }
  else {
    pbVar3 = (byte *)((ulong)pbVar15 & 0xffffffffffffff8);
    if ((byte *)0x7fffffffffffffff < pbVar15) {
      pbVar3 = pbVar15;
    }
    func_0x000107c60480();
    func_0x000107c61434(pbVar15);
    pbStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pbVar3 != (byte *)0x0) {
      func_0x000107c61434(pbVar15);
      pbVar6 = pbVar3;
      FUN_10253fc10(pbVar3,0);
      pbVar18 = pbVar15;
      FUN_102548d38(pbVar6 + 0x20,pbVar3);
      func_0x000107c6142c();
      pbStack_98 = pbVar6;
      if (pbVar18 != pbVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1025474d4);
        (*pcVar2)();
      }
    }
  }
  FUN_10254801c(&pbStack_98);
  func_0x000107c6142c(pbVar15);
  pbStack_a0 = pbStack_98;
  uVar10 = (uint)((ulong)pbStack_98 >> 0x3e) & 1;
  if ((long)pbStack_98 < 0) {
    uVar10 = 1;
  }
  if (uVar10 == 1) {
    pbVar15 = pbStack_98;
    func_0x000107c60480();
    pbVar3 = pbStack_a0;
    func_0x000107c60480();
    if ((long)pbVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102547524);
      (*pcVar2)();
    }
    if ((byte *)0x3 < pbVar15) {
      pbVar15 = (byte *)0x4;
    }
    pbVar3 = pbStack_a0;
    func_0x000107c60480();
    if ((long)pbVar3 < (long)pbVar15) goto LAB_102547508;
  }
  else {
    pbVar3 = *(byte **)(pbStack_98 + 0x10);
    pbVar15 = pbVar3;
    if ((byte *)0x3 < pbVar3) {
      pbVar15 = (byte *)0x4;
    }
    if ((long)pbVar3 < (long)pbVar15) {
LAB_102547508:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10254750c);
      (*pcVar2)();
    }
  }
  if ((((ulong)pbStack_a0 & 0xc000000000000001) == 0) || (pbVar15 == (byte *)0x0)) {
    func_0x000107c61434(pbStack_a0);
  }
  else {
    uVar4 = 0;
    FUN_102547f48(0);
    func_0x000107c61434(pbStack_a0);
    func_0x000107c60318(0,pbStack_a0,uVar4);
    if (((pbVar15 != (byte *)0x1) &&
        (func_0x000107c60318(1,pbStack_a0,uVar4), pbVar15 != (byte *)0x2)) &&
       (func_0x000107c60318(2,pbStack_a0,uVar4), pbVar15 != (byte *)0x3)) {
      func_0x000107c60318(3,pbStack_a0,uVar4);
    }
  }
  func_0x000107c61574(pbStack_a0);
  if (uVar10 == 0) {
    pbVar3 = (byte *)0x0;
    pbStack_c0 = pbStack_a0;
    pbStack_a0 = pbStack_a0 + 0x20;
    pbVar6 = pbVar15;
  }
  else {
    pbStack_c0 = (byte *)0x0;
    pbVar3 = pbStack_a0;
    func_0x000107c60484();
    func_0x000107c61574(pbStack_a0);
    pbVar6 = (byte *)(uVar9 >> 1);
    pbStack_a0 = pbVar15;
  }
  uVar9 = (long)pbVar6 - (long)pbVar3;
  if (SBORROW8((long)pbVar6,(long)pbVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102547510);
    (*pcVar2)();
  }
  if (uVar9 == 0) {
    func_0x000107c615e8(pbStack_c0);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_1025444d4(0,uVar7,0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102547514);
      (*pcVar2)();
    }
    uVar19 = 0;
    do {
      puVar16 = puStack_88;
      uVar1 = uVar19 + 1;
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102547464);
        (*pcVar2)();
      }
      if (((long)pbVar6 <= (long)pbVar3) || (uVar9 <= uVar19)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102547468);
        (*pcVar2)();
      }
      pbVar5 = *(byte **)(pbStack_a0 + (long)pbVar3 * 8);
      func_0x000107c61174();
      pbVar18 = pbVar5;
      func_0x000107c4f930();
      func_0x000107c61180();
      pbVar15 = pbVar18;
      func_0x000107c5faec();
      func_0x000107c61170(pbVar18);
      uVar8 = (ulong)pbVar15 & 0xffffffffffff;
      uVar11 = uVar7 >> 0x38 & 0xf;
      uVar19 = uVar8;
      if ((uVar7 & 0x2000000000000000) != 0) {
        uVar19 = uVar11;
      }
      if (uVar19 == 0) {
        func_0x000107c6142c(uVar7);
        uVar7 = uVar8;
LAB_10254732c:
        pbVar15 = pbVar5;
        func_0x000107c4f930();
        func_0x000107c61180();
        pbVar18 = pbVar15;
        func_0x000107c5faec();
        uVar8 = uVar7;
        func_0x000107c61170(pbVar15);
        func_0x000107c61170(pbVar5);
        uVar17 = 0;
      }
      else {
        if ((uVar7 >> 0x3c & 1) == 0) {
          if ((uVar7 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar15 >> 0x3c & 1) == 0) {
              uVar8 = uVar7;
              func_0x000107c60358();
            }
            else {
              pbVar15 = (byte *)((uVar7 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar15 == 0x2b) {
              if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102547474);
                (*pcVar2)();
              }
              lVar12 = uVar8 - 1;
              if (lVar12 == 0) goto LAB_102547310;
              pbVar18 = (byte *)0x0;
              do {
                pbVar15 = pbVar15 + 1;
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar14 = (long)pbVar18 * 10,
                    SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
                   (uVar19 = (ulong)(byte)(*pbVar15 - 0x30), pbVar18 = (byte *)(lVar14 + uVar19),
                   SCARRY8(lVar14,uVar19))) goto LAB_102547310;
                uVar19 = 0;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            else if (*pbVar15 == 0x2d) {
              if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102547478);
                (*pcVar2)();
              }
              lVar12 = uVar8 - 1;
              if (lVar12 == 0) {
LAB_102547310:
                pbVar18 = (byte *)0x0;
                uVar19 = 1;
              }
              else {
                pbVar18 = (byte *)0x0;
                do {
                  pbVar15 = pbVar15 + 1;
                  if (((9 < *pbVar15 - 0x30) ||
                      (lVar14 = (long)pbVar18 * 10,
                      SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
                     (uVar19 = (ulong)(byte)(*pbVar15 - 0x30), pbVar18 = (byte *)(lVar14 - uVar19),
                     SBORROW8(lVar14,uVar19))) goto LAB_102547310;
                  uVar19 = 0;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
            }
            else {
              if (uVar8 == 0) goto LAB_102547310;
              pbVar18 = (byte *)0x0;
              if (pbVar15 == (byte *)0x0) {
                uVar19 = 0;
              }
              else {
                do {
                  if (((9 < *pbVar15 - 0x30) ||
                      (lVar12 = (long)pbVar18 * 10,
                      SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar19 = (ulong)(byte)(*pbVar15 - 0x30), pbVar18 = (byte *)(lVar12 + uVar19),
                     SCARRY8(lVar12,uVar19))) goto LAB_102547310;
                  uVar19 = 0;
                  uVar8 = uVar8 - 1;
                  pbVar15 = pbVar15 + 1;
                } while (uVar8 != 0);
              }
            }
          }
          else {
            pbStack_98 = pbVar15;
            uStack_90 = uVar7 & 0xffffffffffffff;
            uVar10 = (uint)pbVar15 & 0xff;
            if (uVar10 == 0x2b) {
              if (uVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10254746c);
                (*pcVar2)();
              }
              lVar12 = uVar11 - 1;
              if (lVar12 == 0) goto LAB_102547310;
              pbVar18 = (byte *)0x0;
              pbVar15 = (byte *)((ulong)&pbStack_98 | 1);
              do {
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar14 = (long)pbVar18 * 10,
                    SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
                   (uVar19 = (ulong)(byte)(*pbVar15 - 0x30), pbVar18 = (byte *)(lVar14 + uVar19),
                   SCARRY8(lVar14,uVar19))) goto LAB_102547310;
                uVar19 = 0;
                lVar12 = lVar12 + -1;
                pbVar15 = pbVar15 + 1;
              } while (lVar12 != 0);
            }
            else if (uVar10 == 0x2d) {
              if (uVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102547470);
                (*pcVar2)();
              }
              lVar12 = uVar11 - 1;
              if (lVar12 == 0) goto LAB_102547310;
              pbVar18 = (byte *)0x0;
              pbVar15 = (byte *)((ulong)&pbStack_98 | 1);
              do {
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar14 = (long)pbVar18 * 10,
                    SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
                   (uVar19 = (ulong)(byte)(*pbVar15 - 0x30), pbVar18 = (byte *)(lVar14 - uVar19),
                   SBORROW8(lVar14,uVar19))) goto LAB_102547310;
                uVar19 = 0;
                lVar12 = lVar12 + -1;
                pbVar15 = pbVar15 + 1;
              } while (lVar12 != 0);
            }
            else {
              if (uVar11 == 0) goto LAB_102547310;
              pbVar18 = (byte *)0x0;
              ppbVar13 = &pbStack_98;
              do {
                if (((9 < *(byte *)ppbVar13 - 0x30) ||
                    (lVar12 = (long)pbVar18 * 10,
                    SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar19 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30),
                   pbVar18 = (byte *)(lVar12 + uVar19), SCARRY8(lVar12,uVar19))) goto LAB_102547310;
                uVar19 = 0;
                uVar11 = uVar11 - 1;
                ppbVar13 = (byte **)((long)ppbVar13 + 1);
              } while (uVar11 != 0);
            }
          }
        }
        else {
          uVar8 = uVar7;
          func_0x000100edba6c(pbVar15,uVar7,10);
          pbVar18 = pbVar15;
          uVar19 = uVar8;
        }
        func_0x000107c6142c(uVar7);
        uVar7 = uVar8;
        if (((uint)uVar19 & 0xff) == 1) goto LAB_10254732c;
        func_0x000107c61170(pbVar5);
        uVar7 = 0;
        uVar17 = 1;
      }
      uVar11 = *(ulong *)(puVar16 + 0x10);
      uVar19 = uVar11 + 1;
      puStack_88 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar11) {
        uVar8 = uVar19;
        FUN_1025444d4(1 < *(ulong *)(puVar16 + 0x18),uVar19,1);
      }
      puVar16 = puStack_88;
      *(ulong *)(puStack_88 + 0x10) = uVar19;
      *(byte **)(puStack_88 + uVar11 * 0x18 + 0x20) = pbVar18;
      *(ulong *)(puStack_88 + uVar11 * 0x18 + 0x28) = uVar7;
      puStack_88[uVar11 * 0x18 + 0x30] = uVar17;
      pbVar3 = pbVar3 + 1;
      uVar7 = uVar8;
      uVar19 = uVar1;
    } while (uVar1 != uVar9);
    func_0x000107c615e8(pbStack_c0);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined **)(unaff_x20 + 0x20) = puVar16;
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 102547530; end: 1025475e3;  */

/* WARNING: Possible PIC construction at 0x000102547598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010254759c) */

void FUN_102547530(undefined *param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_3 == '\x01') {
    if (lVar2 == 0) {
      return;
    }
    param_1 = PTR___sSiN_11034deb0;
    puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar1);
    func_0x000107c55a60(lVar2);
  }
  else {
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c5fadc();
    func_0x000107c55a60(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025475e4; end: 102547a03;  */

void FUN_1025475e4(long param_1)

{
  undefined *puVar1;
  char cVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *apuStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    func_0x000107c61428(unaff_x20 + 0x18,auStack_78,0,0);
    lVar19 = 0;
    do {
      plVar14 = (long *)(param_1 + 0x20 + lVar19 * 0x18);
      puVar18 = (undefined *)*plVar14;
      puVar1 = (undefined *)plVar14[1];
      cVar2 = (char)plVar14[2];
      func_0x000101107198(puVar18,puVar1,cVar2);
      puVar4 = puVar18;
      puVar10 = puVar1;
      FUN_102547a04(puVar18,puVar1,cVar2);
      puVar22 = *(undefined **)(unaff_x20 + 0x18);
      if ((ulong)puVar22 >> 0x3e == 0) {
        puVar17 = *(undefined **)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar17 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar22) {
          puVar17 = puVar22;
        }
        func_0x000107c60480();
      }
      if (puVar17 != (undefined *)0x0) {
        func_0x000107c61434(puVar22);
        lVar21 = 4;
        do {
          puVar20 = (undefined *)(lVar21 + -4);
          if (((ulong)puVar22 & 0xc000000000000001) == 0) {
            if (*(undefined **)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102547a00);
              (*pcVar3)();
            }
            puVar5 = *(undefined **)(puVar22 + lVar21 * 8);
            func_0x000107c61174();
          }
          else {
            puVar5 = puVar20;
            puVar10 = puVar22;
            FUN_102542834();
          }
          puVar6 = puVar5;
          func_0x000107c4f930();
          func_0x000107c61180();
          puVar7 = puVar6;
          func_0x000107c5faec();
          func_0x000107c61170(puVar6);
          if (cVar2 == '\x01') {
            puVar8 = PTR___sSiN_11034deb0;
            puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            apuStack_90[0] = puVar18;
            func_0x000107c6057c();
            if (puVar7 != puVar8) goto LAB_1025477e8;
LAB_1025477e0:
            if (puVar10 != puVar6) goto LAB_1025477e8;
            func_0x000107c6142c(puVar22);
            func_0x000107c61170(puVar5);
            func_0x000107c6142c(puVar10);
            puVar22 = puVar6;
LAB_102547864:
            func_0x000107c6142c(puVar22);
            func_0x000101107184(puVar18,puVar1,cVar2);
            uVar15 = *(ulong *)(unaff_x20 + 0x18);
            if (uVar15 >> 0x3e == 0) {
              uVar11 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar11 = uVar15 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar15) {
                uVar11 = uVar15;
              }
              func_0x000107c60480();
            }
            if ((long)uVar11 <= (long)puVar20) goto LAB_10254764c;
            func_0x000107c61428(unaff_x20 + 0x18,apuStack_90,0x21,0);
            uVar11 = *(ulong *)(unaff_x20 + 0x18);
            func_0x000107c61174();
            uVar15 = uVar11;
            func_0x000107c61550();
            *(ulong *)(unaff_x20 + 0x18) = uVar11;
            if ((((int)uVar15 == 0) || ((long)uVar11 < 0)) || ((uVar11 >> 0x3e & 1) != 0)) {
              FUN_102548ce8();
              *(ulong *)(unaff_x20 + 0x18) = uVar11;
            }
            uVar15 = uVar11 & 0xffffffffffffff8;
            if (*(undefined **)(uVar15 + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102547a04);
              (*pcVar3)();
            }
            puVar18 = *(undefined **)(uVar15 + lVar21 * 8);
            *(undefined **)(uVar15 + lVar21 * 8) = puVar4;
            *(ulong *)(unaff_x20 + 0x18) = uVar11;
            func_0x000107c614a8(apuStack_90);
            func_0x000107c61170(puVar4);
            goto LAB_1025476a4;
          }
          func_0x000107c61434(puVar1);
          puVar6 = puVar1;
          if (puVar7 == puVar18) goto LAB_1025477e0;
LAB_1025477e8:
          puVar8 = puVar10;
          func_0x000107c605b8();
          func_0x000107c61170(puVar5);
          func_0x000107c6142c(puVar10);
          func_0x000107c6142c(puVar6);
          if (((ulong)puVar7 & 1) != 0) goto LAB_102547864;
          puVar5 = (undefined *)(lVar21 + -3);
          if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1025479fc);
            (*pcVar3)();
          }
          lVar21 = lVar21 + 1;
          puVar10 = puVar8;
        } while (puVar5 != puVar17);
        func_0x000107c6142c(puVar22);
      }
      func_0x000101107184(puVar18,puVar1,cVar2);
LAB_10254764c:
      func_0x000107c61428(unaff_x20 + 0x18,apuStack_90,0x21,0);
      func_0x000107c61174();
      func_0x000102547ed8();
      uVar11 = *(ulong *)(unaff_x20 + 0x18);
      uVar13 = uVar11 & 0xffffffffffffff8;
      uVar15 = *(ulong *)(uVar13 + 0x10);
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar15) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
        FUN_10253f994(uVar11,uVar15 + 1,1);
        uVar13 = uVar11 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar13 + 0x10) = uVar15 + 1;
      *(undefined **)(uVar13 + uVar15 * 8 + 0x20) = puVar4;
      *(ulong *)(unaff_x20 + 0x18) = uVar11;
      func_0x000107c614a8(apuStack_90);
      puVar18 = puVar4;
LAB_1025476a4:
      lVar19 = lVar19 + 1;
      func_0x000107c61170(puVar18);
    } while (lVar19 != lVar12);
  }
  lVar12 = *(long *)(unaff_x20 + 0x10);
  if (lVar12 != 0) {
    func_0x000107c61428(unaff_x20 + 0x18,apuStack_90,0,0);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
    FUN_102547f48(0);
    uVar9 = uVar16;
    func_0x000107c61434(uVar16);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar16);
    func_0x000107c57b9c(lVar12);
    func_0x000107c61170(uVar9);
  }
  FUN_102546ec4();
  return;
}



/* Entry: 102547a04; end: 102547e23;  */

undefined * FUN_102547a04(double param_1,undefined *param_2,undefined *param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  code *pcVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  double dVar16;
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  uint uStack_9c;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined auStack_88 [24];
  
  lVar5 = 0;
  uStack_9c = param_4;
  func_0x000107c5eea4();
  lStack_b8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  puVar7 = auStack_88;
  func_0x000107c61428(unaff_x20 + 0x18,puVar7,0,0);
  puVar12 = *(undefined **)(unaff_x20 + 0x18);
  puStack_b0 = param_3;
  puStack_98 = param_2;
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      puVar13 = puVar12;
    }
    func_0x000107c60480();
  }
  puStack_c8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar5;
  func_0x000107c61434(puVar12);
  if (puVar13 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    uStack_a8 = (ulong)puVar12 & 0xc000000000000001;
    do {
      if (uStack_a8 == 0) {
        if (*(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x102547e0c);
          (*pcVar11)();
        }
        puVar6 = *(undefined **)(puVar12 + (long)puVar14 * 8 + 0x20);
        func_0x000107c61174();
        puVar10 = puVar7;
      }
      else {
        puVar6 = puVar14;
        puVar10 = puVar12;
        FUN_102542834();
      }
      puVar1 = puVar14 + 1;
      if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102547e08);
        (*pcVar11)();
      }
      uVar2 = uStack_9c & 0xff;
      puVar7 = puVar6;
      func_0x000107c4f930();
      func_0x000107c61180();
      puVar8 = puVar7;
      func_0x000107c5faec();
      func_0x000107c61170(puVar7);
      puVar9 = puStack_b0;
      if (uVar2 != 1) {
        func_0x000107c61434(puStack_b0);
        if (puVar8 != puStack_98) goto LAB_102547b78;
LAB_102547b70:
        if (puVar10 != puVar9) goto LAB_102547b78;
        func_0x000107c6142c(puVar12);
        func_0x000107c6142c(puVar10);
        puVar12 = puVar9;
LAB_102547ca8:
        lVar4 = lStack_b8;
        uVar2 = uStack_9c & 0xff;
        func_0x000107c6142c(puVar12);
        puVar3 = puStack_c8;
        func_0x000107c5eea0(puStack_c8);
        func_0x000107c5ee8c();
        lVar5 = lStack_c0;
        pcVar11 = *(code **)(lVar4 + 8);
        dVar16 = param_1;
        (*pcVar11)(puVar3,lStack_c0);
        func_0x000107c4aaa8(puVar6);
        param_1 = param_1 - dVar16;
        dVar16 = param_1 / 1000.0;
        func_0x000107c519c8(puVar6);
        dVar16 = dVar16 * -0.14285714285714285;
        func_0x000107c60fa4(dVar16);
        puVar12 = puStack_98;
        puVar7 = puStack_b0;
        if (uVar2 == 1) {
          puStack_90 = puStack_98;
          puVar12 = PTR___sSiN_11034deb0;
          puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
        }
        else {
          func_0x000107c61434(puStack_b0);
        }
        uVar15 = 0x3ff0000000000000;
        func_0x000107c5eea0(puVar3);
        func_0x000107c5ee8c();
        (*pcVar11)(puVar3,lVar5);
        puVar13 = PTR_PTR_1126aaa98;
        func_0x000107c610f8(PTR_PTR_1126aaa98);
        func_0x000107c5fadc(puVar12,puVar7);
        func_0x000107c6142c(puVar7);
        func_0x000107c48260(param_1 * dVar16 + 1.0,uVar15,puVar13);
        func_0x000107c61170(puVar6);
        goto LAB_102547dd4;
      }
      puStack_90 = puStack_98;
      puVar7 = PTR___sSiN_11034deb0;
      puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c();
      if (puVar8 == puVar7) goto LAB_102547b70;
LAB_102547b78:
      puVar7 = puVar10;
      func_0x000107c605b8();
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar9);
      if (((ulong)puVar8 & 1) != 0) goto LAB_102547ca8;
      func_0x000107c61170(puVar6);
      puVar14 = puVar14 + 1;
    } while (puVar1 != puVar13);
  }
  func_0x000107c6142c(puVar12);
  puVar7 = puStack_b0;
  lVar5 = lStack_c0;
  puVar3 = puStack_c8;
  if ((uStack_9c & 0xff) == 1) {
    puStack_90 = puStack_98;
    puVar12 = PTR___sSiN_11034deb0;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  }
  else {
    func_0x000107c61434(puStack_b0);
    puVar12 = puStack_98;
  }
  puVar13 = PTR_PTR_1126aaa98;
  func_0x000107c610f8(PTR_PTR_1126aaa98);
  func_0x000107c5fadc(puVar12,puVar7);
  func_0x000107c6142c(puVar7);
  func_0x000107c5eea0(puVar3);
  func_0x000107c5ee8c();
  (**(code **)(lStack_b8 + 8))(puVar3,lVar5);
  func_0x000107c48260(0x3ff0000000000000,param_1,puVar13);
LAB_102547dd4:
  func_0x000107c61170(puVar12);
  return puVar13;
}



/* Entry: 102547e24; end: 102547e77;  */

void FUN_102547e24(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102547e78; end: 102547f47;  */

void FUN_102547e78(void)

{
  FUN_102546ab0();
  return;
}



/* Entry: 102547f48; end: 102547f8b;  */

void FUN_102547f48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea4688 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aaa98;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ea4688 = puVar1;
  return;
}



/* Entry: 102547f8c; end: 10254801b;  */

undefined * FUN_102547f8c(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar3 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  }
  else {
    puVar2 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar2 = param_1;
    }
    func_0x000107c60480();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c6142c(param_1);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar3 = puVar2;
      FUN_10253fc10();
      FUN_102548d38(puVar3 + 0x20,puVar2);
      func_0x000107c6142c();
      if (param_1 != puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102548008);
        (*pcVar1)();
      }
    }
  }
  return puVar3;
}



/* Entry: 10254801c; end: 10254811b;  */

void FUN_10254801c(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1025452c8();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_102547f48(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_10254811c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_10254862c(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10254811c; end: 10254862b;  */

void FUN_10254811c(double param_1,long *param_2,undefined8 param_3,long *param_4,long param_5)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = param_4[1];
  if (0 < lVar17) {
    lVar9 = 0;
    do {
      lVar16 = lVar9 + 1;
      if (lVar16 < lVar17) {
        uVar4 = *(undefined8 *)(*param_4 + lVar16 * 8);
        puVar11 = (undefined8 *)(*param_4 + lVar9 * 8);
        puVar15 = puVar11 + 2;
        uVar14 = *puVar11;
        func_0x000107c61174(uVar4);
        func_0x000107c61174(uVar14);
        func_0x000107c519c8(uVar4);
        dVar18 = param_1;
        func_0x000107c4aaa8(uVar4);
        dVar19 = dVar18;
        func_0x000107c519c8(uVar14);
        dVar20 = dVar19;
        func_0x000107c4aaa8(uVar14);
        dVar21 = dVar20;
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar14);
        bVar3 = dVar20 < dVar18;
        if (param_1 != dVar19) {
          bVar3 = dVar19 < param_1;
        }
        lVar10 = lVar9 + 2;
        do {
          lVar8 = lVar10;
          lVar16 = lVar17;
          param_1 = dVar21;
          if (lVar17 == lVar8) break;
          uVar4 = puVar15[-1];
          uVar14 = *puVar15;
          func_0x000107c61174(uVar14);
          func_0x000107c61174(uVar4);
          func_0x000107c519c8(uVar14);
          dVar18 = dVar21;
          func_0x000107c4aaa8(uVar14);
          dVar19 = dVar18;
          func_0x000107c519c8(uVar4);
          dVar20 = dVar19;
          func_0x000107c4aaa8(uVar4);
          param_1 = dVar20;
          func_0x000107c61170(uVar14);
          func_0x000107c61170(uVar4);
          bVar1 = dVar18 <= dVar20;
          if (dVar21 != dVar19) {
            bVar1 = dVar21 <= dVar19;
          }
          puVar15 = puVar15 + 1;
          lVar10 = lVar8 + 1;
          lVar16 = lVar8;
          dVar21 = param_1;
        } while (bVar3 != bVar1);
        if (bVar3 != false) {
          if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102548600);
            (*pcVar2)();
          }
          if (lVar9 < lVar16) {
            lVar8 = *param_4;
            puVar11 = (undefined8 *)(lVar8 + lVar16 * 8);
            puVar15 = (undefined8 *)(lVar8 + lVar9 * 8);
            lVar10 = lVar16;
            lVar17 = lVar9;
            do {
              puVar11 = puVar11 + -1;
              lVar10 = lVar10 + -1;
              if (lVar17 != lVar10) {
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102548620);
                  (*pcVar2)();
                }
                uVar4 = *puVar15;
                *puVar15 = *puVar11;
                *puVar11 = uVar4;
              }
              lVar17 = lVar17 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar17 < lVar10);
          }
        }
      }
      lVar17 = param_4[1];
      lVar10 = lVar16;
      if (lVar16 < lVar17) {
        if (SBORROW8(lVar16,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1025485fc);
          (*pcVar2)();
        }
        if (lVar16 - lVar9 < param_5) {
          if (SCARRY8(lVar9,param_5)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102548604);
            (*pcVar2)();
          }
          lVar8 = lVar9 + param_5;
          if (lVar17 <= lVar9 + param_5) {
            lVar8 = lVar17;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102548608);
            (*pcVar2)();
          }
          if (lVar16 != lVar8) {
            lVar13 = *param_4;
            puVar15 = (undefined8 *)(lVar13 + lVar16 * 8 + -8);
            lVar17 = lVar9 - lVar16;
            do {
              uVar4 = *(undefined8 *)(lVar13 + lVar16 * 8);
              puVar11 = puVar15;
              lVar10 = lVar17;
              dVar18 = param_1;
              do {
                uVar14 = *puVar11;
                func_0x000107c61174(uVar4);
                func_0x000107c61174(uVar14);
                func_0x000107c519c8(uVar4);
                dVar19 = dVar18;
                func_0x000107c4aaa8(uVar4);
                dVar20 = dVar19;
                func_0x000107c519c8(uVar14);
                dVar21 = dVar20;
                func_0x000107c4aaa8(uVar14);
                param_1 = dVar21;
                func_0x000107c61170(uVar4);
                func_0x000107c61170(uVar14);
                bVar3 = dVar21 < dVar19;
                if (dVar18 != dVar20) {
                  bVar3 = dVar20 < dVar18;
                }
                if (!bVar3) break;
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10254860c);
                  (*pcVar2)();
                }
                uVar14 = *puVar11;
                uVar4 = puVar11[1];
                *puVar11 = uVar4;
                puVar11[1] = uVar14;
                bVar3 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                puVar11 = puVar11 + -1;
                dVar18 = param_1;
              } while (bVar3);
              lVar16 = lVar16 + 1;
              puVar15 = puVar15 + 1;
              lVar17 = lVar17 + -1;
              lVar10 = lVar8;
            } while (lVar16 != lVar8);
          }
        }
      }
      puVar7 = puStack_58;
      if (lVar10 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1025485f0);
        (*pcVar2)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar12 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar12 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
      *(long *)(puVar7 + uVar12 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar12 * 0x10 + 0x28) = lVar10;
      puStack_58 = puVar7;
      if (*param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102548624);
        (*pcVar2)();
      }
      FUN_10254874c(&puStack_58,*param_2,param_4);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1025485b8;
      lVar17 = param_4[1];
      lVar9 = lVar10;
    } while (lVar10 < lVar17);
  }
  puVar7 = puStack_58;
  lVar17 = *param_2;
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10254862c);
    (*pcVar2)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar12 = *(ulong *)(puVar7 + 0x10);
  while (puStack_58 = puVar7, 1 < uVar12) {
    lVar9 = *param_4;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102548628);
      (*pcVar2)();
    }
    lVar8 = uVar12 - 1;
    lVar10 = *(long *)(puVar7 + uVar12 * 0x10);
    lVar16 = *(long *)(puVar7 + lVar8 * 0x10 + 0x28);
    FUN_1025489b4(lVar9 + lVar10 * 8,lVar9 + *(long *)(puVar7 + lVar8 * 0x10 + 0x20) * 8,
                  lVar9 + lVar16 * 8,lVar17);
    if (unaff_x21 != 0) break;
    if (lVar16 < lVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1025485f4);
      (*pcVar2)();
    }
    puVar5 = puVar7;
    func_0x000107c61558();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar12 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1025485f8);
      (*pcVar2)();
    }
    *(long *)(puVar7 + uVar12 * 0x10) = lVar10;
    *(long *)((long)(puVar7 + uVar12 * 0x10) + 8) = lVar16;
    puStack_58 = puVar7;
    func_0x0001000a97cc(lVar8);
    puVar7 = puStack_58;
    uVar12 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1025485b8:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 10254862c; end: 10254874b;  */

void FUN_10254862c(double param_1,long param_2,long param_3,long param_4,long *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_4 != param_3) {
    lVar6 = *param_5;
    puVar4 = (undefined8 *)(lVar6 + param_4 * 8 + -8);
    param_2 = param_2 - param_4;
    do {
      uVar3 = *(undefined8 *)(lVar6 + param_4 * 8);
      puVar7 = puVar4;
      lVar8 = param_2;
      dVar9 = param_1;
      do {
        uVar5 = *puVar7;
        func_0x000107c61174(uVar3);
        func_0x000107c61174(uVar5);
        func_0x000107c519c8(uVar3);
        dVar10 = dVar9;
        func_0x000107c4aaa8(uVar3);
        dVar11 = dVar10;
        func_0x000107c519c8(uVar5);
        dVar12 = dVar11;
        func_0x000107c4aaa8(uVar5);
        param_1 = dVar12;
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar5);
        bVar2 = dVar12 < dVar10;
        if (dVar9 != dVar11) {
          bVar2 = dVar11 < dVar9;
        }
        if (!bVar2) break;
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10254874c);
          (*pcVar1)();
        }
        uVar5 = *puVar7;
        uVar3 = puVar7[1];
        *puVar7 = uVar3;
        puVar7[1] = uVar5;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + -1;
        dVar9 = param_1;
      } while (bVar2);
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + -1;
    } while (param_4 != param_3);
  }
  return;
}



/* Entry: 10254874c; end: 1025489b3;  */

undefined8 FUN_10254874c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_102548820;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10254899c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_102548884:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10254898c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102548994);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102548974);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102548978);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102548980);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102548988);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_102548820:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10254897c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102548984);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102548990);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102548998);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_102548884;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1025489a0);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102548968);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1025489b4);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1025489b4(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10254896c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102548970);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1025489b4; end: 102548ce7;  */

undefined8
FUN_1025489b4(double param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar13 = (long)param_3 - (long)param_2;
  lVar4 = lVar13 + 7;
  if (-1 < lVar13) {
    lVar4 = lVar13;
  }
  lVar4 = lVar4 >> 3;
  lVar14 = (long)param_4 - (long)param_3;
  lVar7 = lVar14 + 7;
  if (-1 < lVar14) {
    lVar7 = lVar14;
  }
  lVar7 = lVar7 >> 3;
  if (lVar4 < lVar7) {
    if (((param_5 < param_2) || (param_2 + lVar4 <= param_5)) || (param_5 != param_2)) {
      func_0x000107c610b8(param_5,param_2,lVar4 << 3);
    }
    puVar9 = param_5 + lVar4;
    puVar10 = param_2;
    if (7 < lVar13) {
      do {
        if (param_4 <= param_3) break;
        uVar3 = *param_3;
        uVar12 = *param_5;
        func_0x000107c61174(uVar3);
        func_0x000107c61174(uVar12);
        func_0x000107c519c8(uVar3);
        dVar15 = param_1;
        func_0x000107c4aaa8(uVar3);
        dVar16 = dVar15;
        func_0x000107c519c8(uVar12);
        dVar17 = dVar16;
        func_0x000107c4aaa8(uVar12);
        dVar18 = dVar17;
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar12);
        bVar2 = dVar17 < dVar15;
        if (param_1 != dVar16) {
          bVar2 = dVar16 < param_1;
        }
        if (bVar2) {
          puVar11 = param_5;
          puVar8 = param_3;
          param_3 = param_3 + 1;
        }
        else {
          puVar11 = param_5 + 1;
          puVar8 = param_5;
        }
        param_5 = puVar11;
        if (puVar10 != puVar8) {
          *puVar10 = *puVar8;
        }
        puVar10 = puVar10 + 1;
        param_1 = dVar18;
      } while (param_5 < puVar9);
    }
  }
  else {
    if (((param_5 < param_3) || (param_3 + lVar7 <= param_5)) || (param_5 != param_3)) {
      func_0x000107c610b8(param_5,param_3,lVar7 << 3);
    }
    puVar8 = param_5 + lVar7;
    puVar9 = puVar8;
    puVar10 = param_3;
    if ((param_2 < param_3) && (7 < lVar14)) {
      do {
        puVar5 = param_3 + -1;
        dVar15 = param_1;
        puVar11 = param_4;
        while( true ) {
          param_4 = puVar11 + -1;
          puVar9 = puVar8 + -1;
          uVar3 = *puVar9;
          uVar12 = *puVar5;
          func_0x000107c61174(uVar3);
          func_0x000107c61174(uVar12);
          func_0x000107c519c8(uVar3);
          dVar16 = dVar15;
          func_0x000107c4aaa8(uVar3);
          dVar17 = dVar16;
          func_0x000107c519c8(uVar12);
          dVar18 = dVar17;
          func_0x000107c4aaa8(uVar12);
          param_1 = dVar18;
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar12);
          bVar2 = dVar18 < dVar16;
          if (dVar15 != dVar17) {
            bVar2 = dVar17 < dVar15;
          }
          if (bVar2) break;
          if (puVar11 != puVar8) {
            *param_4 = *puVar9;
          }
          puVar10 = param_3;
          puVar8 = puVar9;
          dVar15 = param_1;
          puVar11 = param_4;
          if (puVar9 <= param_5) goto LAB_102548c7c;
        }
        if (puVar11 != param_3) {
          *param_4 = *puVar5;
        }
        puVar9 = puVar8;
        puVar10 = puVar5;
      } while ((param_2 < puVar5) && (param_3 = puVar5, param_5 < puVar8));
    }
  }
LAB_102548c7c:
  uVar6 = (long)puVar9 - (long)param_5;
  uVar1 = uVar6 + 7;
  if (-1 < (long)uVar6) {
    uVar1 = uVar6;
  }
  if ((puVar10 != param_5) ||
     ((undefined8 *)((long)param_5 + (uVar1 & 0xfffffffffffffff8)) <= puVar10)) {
    func_0x000107c610b8(puVar10,param_5,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 102548ce8; end: 102548d37;  */

/* WARNING: Removing unreachable block (ram,0x00010253f9f4) */
/* WARNING: Removing unreachable block (ram,0x00010253fa18) */
/* WARNING: Removing unreachable block (ram,0x00010253f9fc) */
/* WARNING: Removing unreachable block (ram,0x00010253faf4) */
/* WARNING: Removing unreachable block (ram,0x00010253fa08) */
/* WARNING: Removing unreachable block (ram,0x00010253fa10) */
/* WARNING: Removing unreachable block (ram,0x00010253fa58) */
/* WARNING: Removing unreachable block (ram,0x00010253fa6c) */
/* WARNING: Removing unreachable block (ram,0x00010253fa78) */
/* WARNING: Removing unreachable block (ram,0x00010253fa80) */

ulong FUN_102548ce8(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_10253fc1c(uVar4,uVar3,FUN_1025424cc);
  if (-1 < (long)uVar4) {
    FUN_10253fd1c(0,uVar4,uVar2 + 0x20,param_1,0x112ea4688,&PTR_PTR_1126aaa98);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10253faf4);
  (*pcVar1)();
}



/* Entry: 102548d38; end: 102548e8f;  */

ulong FUN_102548d38(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102548e90);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102548e84);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_102547f48(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102548e88);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102548e8c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_102542834(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102548e90; end: 102548f63;  */

undefined8
FUN_102548e90(ulong param_1,long param_2,char param_3,long param_4,ulong param_5,ulong param_6)

{
  code *pcVar1;
  ulong uVar2;
  char *pcVar3;
  
  param_6 = param_6 >> 1;
  if (param_5 != param_6) {
    pcVar3 = (char *)(param_4 + param_5 * 0x18 + 0x10);
    do {
      if ((long)param_6 <= (long)param_5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102548f64);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(pcVar3 + -0x10);
      if (*pcVar3 == '\x01') {
        if ((param_3 == '\x01') && (uVar2 == param_1)) {
          return 1;
        }
      }
      else if (param_3 != '\x01') {
        if (uVar2 == param_1 && *(long *)(pcVar3 + -8) == param_2) {
          return 1;
        }
        func_0x000107c605b8(uVar2,*(long *)(pcVar3 + -8),param_1,param_2,0);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
      param_5 = param_5 + 1;
      pcVar3 = pcVar3 + 0x18;
    } while (param_6 != param_5);
  }
  return 0;
}



/* Entry: 102548f64; end: 102548fcf;  */

void FUN_102548f64(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined1 *)(unaff_x22 + 0x150) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102548fd0,0,0);
  return;
}



/* Entry: 102548fd0; end: 102549223;  */

void FUN_102548fd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x150) == '\x01') {
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0xf0) + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x110) = lVar7;
    uVar10 = 0;
    if (lVar7 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xc0;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102549224;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      FUN_1025497e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
    if (lRam0000000112ea49c0 != -1) {
      func_0x000107c61568(0x112ea49c0,0x102549e20);
    }
    uVar10 = uRam0000000112ea49c8;
    if (lRam0000000112ea49d0 != -1) {
      func_0x000107c61568(0x112ea49d0,FUN_102549e58);
    }
    uVar5 = uRam0000000112ea49e0;
    uVar4 = uRam0000000112ea49d8;
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x150);
    puVar8 = &UNK_11051ebc8;
    func_0x000107c613fc(&UNK_11051ebc8,0x30,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar4;
    *(undefined8 *)(puVar8 + 0x18) = uVar5;
    *(undefined8 *)(puVar8 + 0x20) = uVar1;
    *(undefined8 *)(puVar8 + 0x28) = uVar12;
    puVar9 = &UNK_11051ebf0;
    func_0x000107c613fc(&UNK_11051ebf0,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_10254a074;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(code **)(unaff_x22 + 0xb0) = FUN_10254a394;
    *(undefined **)(unaff_x22 + 0xb8) = puVar9;
    *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa0) = &UNK_100f9148c;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_11051ec08;
    lVar7 = unaff_x22 + 0x90;
    func_0x000107c60bc4(lVar7);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000101107198(uVar1,uVar2,uVar3);
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(uVar12);
    func_0x000107c45138(uVar10);
    func_0x000107c61180();
    func_0x000107c60bd0(lVar7);
    puVar11 = puVar9;
    func_0x000107c61544(puVar9,"",0x60,0x73,0x24,1);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102549224);
      (*pcVar6)();
    }
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x0001025491ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar10);
  return;
}



/* Entry: 102549224; end: 102549263;  */

void FUN_102549224(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102549264,0,0);
  return;
}



/* Entry: 102549264; end: 1025494b3;  */

void FUN_102549264(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x110));
  lVar7 = *(long *)(unaff_x22 + 0xc0);
  *(long *)(unaff_x22 + 0x118) = lVar7;
  if (lVar7 == 0) {
LAB_102549488:
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x0001025494ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  if (*(long *)(unaff_x22 + 0xe8) != 0) {
    lVar3 = lVar7;
    func_0x000107c4d6f0();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x120) = lVar3;
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar7 = *(long *)(unaff_x22 + 0xf0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar4 = PTR_PTR_1126b58e0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(unaff_x22 + 0x128) = puVar4;
      func_0x000107c5fadc(uVar8,uVar1);
      func_0x000107c5e458(puVar4);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar8);
      lVar5 = lVar3;
      func_0x000107c5c7d8(lVar3);
      func_0x000107c61180();
      func_0x000107c5e820(puVar4);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar5);
      func_0x000107c51820(lVar3);
      func_0x000107c5e770(puVar4);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c45120(lVar3);
      func_0x000107c5e5a4(puVar4);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c3ecc8();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0x130) = puVar4;
      lVar7 = *(long *)(lVar7 + 0x28);
      func_0x000107c5c734();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x138) = lVar7;
      if (lVar7 != 0) {
        *(long *)(unaff_x22 + 0x78) = unaff_x22 + 200;
        *(long *)(unaff_x22 + 0x50) = unaff_x22;
        *(code **)(unaff_x22 + 0x58) = FUN_1025494b4;
        func_0x000107c61448(unaff_x22 + 0x50,0);
        FUN_102549ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
        return;
      }
      func_0x000107c61170(puVar4);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x128));
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar8);
      goto LAB_102549488;
    }
  }
  func_0x000107c4d6f4();
  func_0x000107c61180();
  if (lVar7 != 0) {
    func_0x000107c5edb4(*(undefined8 *)(unaff_x22 + 0x108));
    func_0x000107c61170(lVar7);
    plVar6 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x140) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102549560;
    lVar7 = *(long *)(unaff_x22 + 0xf0);
    plVar6[0x11] = *(long *)(unaff_x22 + 0x108);
    plVar6[0x12] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102549628,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1025494b4);
  (*pcVar2)();
}



/* Entry: 1025494b4; end: 1025494f3;  */

void FUN_1025494b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025494f4,0,0);
  return;
}



/* Entry: 1025494f4; end: 10254955f;  */

void FUN_1025494f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x130));
  func_0x000107c615e8(uVar1);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x128));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010254955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 102549560; end: 1025495cf;  */

void FUN_102549560(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar1 = *(long *)(lVar3 + 0x100);
  uVar2 = *(undefined8 *)(lVar3 + 0x108);
  uVar4 = *(undefined8 *)(lVar3 + 0xf8);
  *(undefined8 *)(lVar3 + 0x148) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x140));
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025495d0,0,0);
  return;
}



/* Entry: 1025495d0; end: 10254960f;  */

void FUN_1025495d0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x118));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010254960c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 102549610; end: 102549627;  */

void FUN_102549610(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102549628,0,0);
  return;
}



/* Entry: 102549628; end: 10254976f;  */

void FUN_102549628(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x30);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x98) = lVar1;
    if (lVar1 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102549770;
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar2,0);
      puVar3 = PTR_PTR_1126b20c0;
      func_0x000107c61168(PTR_PTR_1126b20c0);
      puVar4 = puVar3;
      func_0x000107c5ed90();
      puVar5 = &UNK_11051ec90;
      func_0x000107c613fc(&UNK_11051ec90,0x18,7);
      puVar6 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      *(long *)(puVar5 + 0x10) = lVar2;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x10254af84;
      *(undefined **)(unaff_x22 + 0x78) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_10130cf28;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11051eca8;
      func_0x000107c60bc4(puVar6);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000106879d48(puVar3,puVar4,lVar1,puVar6);
      func_0x000107c60bd0(puVar6);
      func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010254976c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102549770; end: 1025497e3;  */

void FUN_102549770(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1025497b0,0,0);
  return;
}



/* Entry: 1025497e4; end: 1025499a7;  */

void FUN_1025497e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar2 = puVar1;
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar7 = (undefined8 *)(puVar2 + 0x20);
  *puVar7 = puVar1;
  func_0x000107c61174(puVar1);
  puVar3 = puVar2;
  FUN_10254afb4(puVar2);
  func_0x000107c61588(puVar2);
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  uVar4 = 0;
  func_0x00010254b138(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar7,uVar6,uVar4);
  func_0x000100120cb0();
  puVar2 = puVar3;
  func_0x000107c5fe08(puVar3,uVar4,puVar7);
  func_0x000107c6142c(puVar3);
  func_0x000107c4f970(param_3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11051ece0;
  func_0x000107c613fc(&UNK_11051ece0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_98 = FUN_10254b0f0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10104e6fc;
  puStack_a0 = &UNK_11051ecf8;
  ppuVar5 = &puStack_b8;
  puStack_90 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_90);
  uVar4 = param_3;
  func_0x000107c5c320(param_3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_3);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1025499a8; end: 102549ab7;  */

void FUN_1025499a8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  func_0x000107c6061c(puVar1,PTR___sSiN_11034deb0);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar1);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,param_1);
    func_0x000107c615e8(param_1);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010254b0f8(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar2 = 0;
    func_0x00010254b138(0,0x112ea4a00,&PTR_PTR_1126bea48);
    puVar1 = &uStack_78;
    func_0x000107c6147c(puVar1,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)puVar1 & 1) != 0) goto LAB_102549a90;
  }
  uStack_78 = 0;
LAB_102549a90:
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = uStack_78;
  func_0x000107c6144c(param_3);
  return;
}



/* Entry: 102549ab8; end: 102549c23;  */

void FUN_102549ab8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x00010254b138(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar6 + 0x68))
            (lVar5,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar2 = lVar5;
  func_0x000107c5fff0(lVar5);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  puVar3 = &UNK_11051ec40;
  func_0x000107c613fc(&UNK_11051ec40,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = FUN_10254af54;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010866ac;
  puStack_68 = &UNK_11051ec58;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c42fec(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102549c24; end: 102549c87;  */

void FUN_102549c24(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102549c88; end: 102549cab;  */

void FUN_102549c88(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102549cac,0,0);
  return;
}



/* Entry: 102549cac; end: 102549d17;  */

void FUN_102549cac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0x10);
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0x18);
  plVar7 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102549d18;
  lVar1 = *(long *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  lVar8 = *(long *)(unaff_x22 + 0x10);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x30);
  plVar7[0x1d] = lVar2;
  plVar7[0x1e] = lVar3;
  plVar7[0x1b] = lVar1;
  plVar7[0x1c] = lVar5;
  *(undefined1 *)(plVar7 + 0x2a) = uVar4;
  plVar7[0x1a] = lVar8;
  lVar5 = 0;
  func_0x000107c5ede0();
  plVar7[0x1f] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar7[0x20] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x21] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102548fd0,0,0);
  return;
}



/* Entry: 102549d18; end: 102549d5b;  */

void FUN_102549d18(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000102549d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102549d5c; end: 102549ddb;  */

void FUN_102549d5c(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102549ddc;
  plVar2[0x1d] = param_5;
  plVar2[0x1e] = lVar3;
  plVar2[0x1b] = param_2;
  plVar2[0x1c] = param_4;
  *(undefined1 *)(plVar2 + 0x2a) = param_3;
  plVar2[0x1a] = param_1;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar2[0x1f] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x20] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x21] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102548fd0,0,0);
  return;
}



/* Entry: 102549ddc; end: 102549e57;  */

void FUN_102549ddc(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102549e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102549e58; end: 102549e6f;  */

void FUN_102549e58(void)

{
  uRam0000000112ea49e0 = 0x4044000000000000;
  uRam0000000112ea49d8 = 0x4044000000000000;
  return;
}



/* Entry: 102549e70; end: 10254a073;  */

void FUN_102549e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c4348c(0,0,param_1,param_2,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52610();
  lVar2 = 0x112ea49e8;
  func_0x0001000285a8(0x112ea49e8,&UNK_10db2c3c0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  uVar6 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x20) = uVar6;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c61174(uVar6);
  func_0x000107c5c5fc(param_1);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  *(undefined **)(lVar2 + 0x28) = puVar3;
  *(undefined8 *)(lVar2 + 0x30) = uVar6;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  lVar4 = lVar2;
  func_0x00010254d530(lVar2);
  func_0x000107c61588(lVar2);
  uVar6 = 0x112ea49f0;
  func_0x0001000285a8(0x112ea49f0,&UNK_10dab7b80);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar6);
  func_0x000107c5fadc(param_4,param_5);
  lVar2 = lVar4;
  FUN_10254a080(lVar4);
  func_0x000107c6142c(lVar4);
  uVar5 = 0;
  func_0x000100eca28c(0);
  uVar6 = uVar5;
  func_0x000100ecbdec();
  lVar4 = lVar2;
  func_0x000107c5f9dc(lVar2,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
  func_0x000107c6142c(lVar2);
  func_0x000107c422b8(0,0,param_4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 10254a074; end: 10254a07f;  */

void FUN_10254a074(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c4348c(0,0,uVar7,uVar8,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52610();
  lVar2 = 0x112ea49e8;
  func_0x0001000285a8(0x112ea49e8,&UNK_10db2c3c0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  uVar8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x20) = uVar8;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c61174(uVar8);
  func_0x000107c5c5fc(uVar7);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  *(undefined **)(lVar2 + 0x28) = puVar3;
  *(undefined8 *)(lVar2 + 0x30) = uVar8;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar1);
  lVar4 = lVar2;
  func_0x00010254d530(lVar2);
  func_0x000107c61588(lVar2);
  uVar8 = 0x112ea49f0;
  func_0x0001000285a8(0x112ea49f0,&UNK_10dab7b80);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar8);
  func_0x000107c5fadc(uVar5,uVar6);
  lVar2 = lVar4;
  FUN_10254a080(lVar4);
  func_0x000107c6142c(lVar4);
  uVar6 = 0;
  func_0x000100eca28c(0);
  uVar8 = uVar6;
  func_0x000100ecbdec();
  lVar4 = lVar2;
  func_0x000107c5f9dc(lVar2,uVar6,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c6142c(lVar2);
  func_0x000107c422b8(0,0,uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 10254a080; end: 10254a393;  */

undefined * FUN_10254a080(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lStack_100;
  undefined1 auStack_f8 [64];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar15 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    uVar3 = 0x112d48640;
    func_0x0001000285a8(0x112d48640,&UNK_10d910200);
    func_0x000107c60498(puVar13,uVar3);
    puVar15 = puVar13;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  lVar12 = 0;
  while( true ) {
    for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = lVar12 << 9 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 3;
      lVar14 = *(long *)(*(long *)(param_1 + 0x30) + uVar7);
      uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar7);
      uVar3 = 0;
      uStack_b8 = uVar17;
      lStack_b0 = lVar14;
      func_0x00010254b138(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c61174(lVar14);
      func_0x000107c61174(uVar17);
      func_0x000107c61174(lVar14);
      func_0x000107c61174(uVar17);
      func_0x000107c6147c(auStack_a8,&uStack_b8,uVar3,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(lVar14);
      if (lStack_b0 == 0) {
        func_0x000107c61574(param_1);
        func_0x00010254b0f8(&lStack_b0,0x112ea49f8,&UNK_10dab7b90);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10254a394);
        (*pcVar1)();
      }
      lStack_100 = lStack_b0;
      func_0x000100102924(auStack_a8,auStack_f8);
      lVar14 = lStack_100;
      puVar6 = auStack_88;
      func_0x000100102924(auStack_f8,puVar6);
      uVar3 = *(undefined8 *)(puVar15 + 0x28);
      lVar4 = lVar14;
      func_0x000107c5faec(lVar14);
      func_0x000107c6068c(&lStack_100,uVar3);
      plVar5 = &lStack_100;
      func_0x000107c5fb58(plVar5,lVar4,puVar6);
      func_0x000107c606a8();
      func_0x000107c6142c(puVar6);
      uVar11 = -1L << ((ulong)(byte)puVar15[0x20] & 0x3f);
      uVar10 = (ulong)plVar5 & (uVar11 ^ 0xffffffffffffffff);
      uVar8 = uVar10 >> 6;
      uVar7 = -1L << (uVar10 & 0x3f) & (*(ulong *)(puVar15 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff)
      ;
      if (uVar7 == 0) {
        bVar2 = false;
        uVar7 = 0x3f - uVar11 >> 6;
        do {
          uVar10 = uVar8 + 1;
          if ((uVar10 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10254a370);
            (*pcVar1)();
          }
          uVar8 = 0;
          if (uVar10 != uVar7) {
            uVar8 = uVar10;
          }
          bVar2 = (bool)(uVar10 == uVar7 | bVar2);
        } while (*(ulong *)(puVar15 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
        uVar7 = ~*(ulong *)(puVar15 + uVar8 * 8 + 0x40);
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
      }
      else {
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar10 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar15 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar15 + uVar8 + 0x40)
      ;
      *(long *)(*(long *)(puVar15 + 0x30) + uVar7 * 8) = lVar14;
      func_0x000100102924(auStack_88,*(long *)(puVar15 + 0x38) + uVar7 * 0x20);
      *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
    }
    bVar2 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10254a36c);
      (*pcVar1)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar12) break;
    uVar16 = ((ulong *)(param_1 + 0x40))[lVar12];
  }
  func_0x000107c61574(param_1);
  return puVar15;
}



/* Entry: 10254a394; end: 10254a3b7;  */

void FUN_10254a394(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10254a3b8; end: 10254ab57;  */

undefined8 FUN_10254a3b8(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    func_0x00010254b138(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x00010254a7fc();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      func_0x00010254b138(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10254a600);
      (*pcVar1)();
    }
    func_0x00010254a600(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_10254aca8(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_10254aed4(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 10254ab58; end: 10254aca7;  */

void FUN_10254ab58(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112dbe9f8,&UNK_10d97b870);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_10254ac34;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_10254ac34:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10254aca8);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_10254ac80;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_10254ac80:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10254aca8; end: 10254aed3;  */

void FUN_10254aca8(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112dbe9f8;
  func_0x0001000285a8(0x112dbe9f8,&UNK_10d97b870);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_10254aea4:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10254aed0);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_10254aea4;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10254aed4);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 10254aed4; end: 10254af53;  */

void FUN_10254aed4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 10254af54; end: 10254afb3;  */

void FUN_10254af54(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10254afb4; end: 10254b0ef;  */

void FUN_10254afb4(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  func_0x00010254b138(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  func_0x000100120cb0();
  func_0x000107c5fe14(uVar6,uVar3,uVar4);
  uStack_58 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10254b0dc);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar7;
        func_0x0001002ec9a0(uVar7,param_1);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10254b0d8);
        (*pcVar2)();
      }
      FUN_10254a3b8(&uStack_60,uVar5);
      func_0x000107c61170(uStack_60);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



/* Entry: 10254b0f0; end: 10254b0f7;  */

void FUN_10254b0f0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSiN_11034deb0);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,param_1);
    func_0x000107c615e8(param_1);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010254b0f8(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar3 = 0;
    func_0x00010254b138(0,0x112ea4a00,&PTR_PTR_1126bea48);
    puVar2 = &uStack_78;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar2 & 1) != 0) goto LAB_102549a90;
  }
  uStack_78 = 0;
LAB_102549a90:
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = uStack_78;
  func_0x000107c6144c(lVar1);
  return;
}



/* Entry: 10254b0f8; end: 10254b177;  */

undefined8 FUN_10254b0f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10254b178; end: 10254b1b3;  */

void FUN_10254b178(long param_1,long param_2)

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



/* Entry: 10254b1b4; end: 10254b4a3;  */

void FUN_10254b1b4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  undefined8 *puVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0xa0);
  if (lVar6 != 0) {
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c6157c(lVar6);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar5;
    uVar1 = 0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10254b4a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(unaff_x22 + 0x90,lVar6,uVar1);
    return;
  }
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0xa8) + 0x20);
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 0xb8));
    lVar7 = lVar6;
    func_0x000107c4e680();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 200) = lVar7;
    func_0x000107c61170(uVar1);
    if (lVar7 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 0xb8));
      func_0x000107c4e67c();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0xd0) = lVar6;
      func_0x000107c61170(uVar1);
      if (lVar6 != 0) {
        lVar2 = *(long *)(*(long *)(unaff_x22 + 0xa8) + 0x28);
        func_0x000107c5c734();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0xd8) = lVar2;
        if (lVar2 != 0) {
          lVar7 = *(long *)(unaff_x22 + 0xa8);
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_10254b774;
          lVar6 = unaff_x22 + 0x10;
          func_0x000107c61448(lVar6,0);
          uVar1 = *(undefined8 *)(lVar7 + 0x10);
          func_0x000107c5fadc(uVar1,*(undefined8 *)(lVar7 + 0x18));
          puVar3 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
          func_0x000107c61168();
          func_0x000107c41030();
          func_0x000107c61180();
          puVar4 = &UNK_11051ed38;
          func_0x000107c613fc(&UNK_11051ed38,0x18,7);
          puVar8 = (undefined8 *)(unaff_x22 + 0x50);
          *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
          *(long *)(puVar4 + 0x10) = lVar6;
          *(code **)(unaff_x22 + 0x70) = FUN_10254bc50;
          *(undefined **)(unaff_x22 + 0x78) = puVar4;
          *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x60) = &UNK_10127a6c0;
          *(undefined **)(unaff_x22 + 0x68) = &UNK_11051ed50;
          func_0x000107c60bc4();
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
          func_0x000107c5bcfc(0,0,0x4080600000000000,0x4074200000000000,0x402c000000000000,lVar2);
          func_0x000107c60bd0(puVar8);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar7);
        goto LAB_10254b44c;
      }
      func_0x000107c61170(lVar7);
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_10254b44c:
  **(undefined8 **)(unaff_x22 + 0x98) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010254b474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10254b4a4; end: 10254b4eb;  */

void FUN_10254b4a4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10254b4ec,0,0);
  return;
}



/* Entry: 10254b4ec; end: 10254b773;  */

void FUN_10254b4ec(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  undefined8 *puVar7;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  puVar1 = *(undefined **)(unaff_x22 + 0x90);
  if (puVar1 == (undefined *)0x0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0xa8) + 0x20);
    if (lVar5 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0xb8));
      lVar6 = lVar5;
      func_0x000107c4e680();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 200) = lVar6;
      func_0x000107c61170(uVar2);
      if (lVar6 != 0) {
        uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
        func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0xb8));
        func_0x000107c4e67c();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0xd0) = lVar5;
        func_0x000107c61170(uVar2);
        if (lVar5 != 0) {
          lVar3 = *(long *)(*(long *)(unaff_x22 + 0xa8) + 0x28);
          func_0x000107c5c734();
          func_0x000107c61180();
          *(long *)(unaff_x22 + 0xd8) = lVar3;
          if (lVar3 != 0) {
            lVar6 = *(long *)(unaff_x22 + 0xa8);
            *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
            *(long *)(unaff_x22 + 0x10) = unaff_x22;
            *(code **)(unaff_x22 + 0x18) = FUN_10254b774;
            lVar5 = unaff_x22 + 0x10;
            func_0x000107c61448(lVar5,0);
            uVar2 = *(undefined8 *)(lVar6 + 0x10);
            func_0x000107c5fadc(uVar2,*(undefined8 *)(lVar6 + 0x18));
            puVar4 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
            func_0x000107c61168();
            func_0x000107c41030();
            func_0x000107c61180();
            puVar1 = &UNK_11051ed38;
            func_0x000107c613fc(&UNK_11051ed38,0x18,7);
            puVar7 = (undefined8 *)(unaff_x22 + 0x50);
            *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
            *(long *)(puVar1 + 0x10) = lVar5;
            *(code **)(unaff_x22 + 0x70) = FUN_10254bc50;
            *(undefined **)(unaff_x22 + 0x78) = puVar1;
            *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
            *(undefined **)(unaff_x22 + 0x60) = &UNK_10127a6c0;
            *(undefined **)(unaff_x22 + 0x68) = &UNK_11051ed50;
            func_0x000107c60bc4();
            func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
            func_0x000107c5bcfc(0,0,0x4080600000000000,0x4074200000000000,0x402c000000000000,lVar3);
            func_0x000107c60bd0(puVar7);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
            return;
          }
          puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar6);
          goto LAB_10254b71c;
        }
        func_0x000107c61170(lVar6);
      }
    }
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
LAB_10254b71c:
  **(undefined8 **)(unaff_x22 + 0x98) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010254b744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10254b774; end: 10254b7b3;  */

void FUN_10254b774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10254b7b4,0,0);
  return;
}


