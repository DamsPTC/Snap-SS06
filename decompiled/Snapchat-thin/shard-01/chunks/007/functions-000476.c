/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013d3a74; end: 1013d4143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013d3a74(long param_1,long param_2,long param_3,long param_4,ulong param_5,long param_6,
                  long param_7)

{
  undefined1 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long unaff_x20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar3 = param_5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013d4144);
    (*pcVar2)();
  }
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef3c4c0);
  uVar5 = uVar3;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar4);
  uVar4 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010ef3c4e0);
  uVar6 = uVar3;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar4);
  if ((int)uVar5 == 0) {
    if ((uVar6 & 1) == 0) {
      func_0x000107c615e8(uVar3);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      return unaff_x20;
    }
    if (lRam0000000112d7afc8 != -1) {
      func_0x000107c61568(0x112d7afc8,FUN_1013d43ec);
    }
    puVar19 = (undefined8 *)0x1137ff400;
  }
  else {
    if (lRam0000000112d7afc0 != -1) {
      func_0x000107c61568(0x112d7afc0,0x1013d42bc);
    }
    puVar19 = (undefined8 *)0x1137ff3f0;
  }
  uVar1 = *(undefined1 *)(puVar19 + 1);
  uVar4 = *puVar19;
  func_0x000107c61434(uVar4);
  lVar7 = *(long *)(param_2 + _DAT_11307a4d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 == 0) {
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
  }
  else {
    lVar8 = *(long *)(param_3 + _DAT_113080ad0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      lVar9 = param_4;
      func_0x000107c4d80c();
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      if (lVar10 != 0) {
        uVar23 = *(undefined8 *)(param_6 + _DAT_113097748);
        uVar21 = *(undefined8 *)(param_7 + _DAT_113083800);
        lVar11 = 0;
        FUN_1013d1524();
        func_0x000107c613fc();
        uVar20 = *(undefined8 *)(param_1 + _DAT_113091b78);
        *(undefined8 *)(lVar11 + 0x10) = uVar21;
        uVar22 = *(undefined8 *)(param_1 + _DAT_113091b70);
        func_0x0001013d54a8(0);
        func_0x000107c613fc();
        func_0x000107c615f0(uVar23);
        func_0x000107c61174(uVar21);
        func_0x000107c615f0(uVar20);
        func_0x000107c615f0(uVar22);
        func_0x000107c615f0(lVar7);
        func_0x000107c615f0(lVar8);
        lVar12 = lVar7;
        FUN_1013d6270(lVar7,lVar8);
        func_0x000107c615e8(lVar7);
        func_0x000107c615e8(lVar8);
        lVar13 = 0;
        FUN_1013d3744();
        lVar14 = lVar13;
        func_0x000107c610f8();
        *(undefined8 *)(lVar14 + _DAT_112d7ae48) = 0;
        *(undefined1 *)(lVar14 + _DAT_112d7ae50) = 0;
        *(undefined8 *)(lVar14 + _DAT_112d7ae58) = 0;
        lVar9 = _DAT_112d7ae60;
        puVar15 = PTR_PTR_1126ae810;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar14 + lVar9) = puVar15;
        *(undefined1 *)(lVar14 + _DAT_112d7ae68) = 0;
        *(undefined1 *)(lVar14 + _DAT_112d7ae70) = 5;
        *(undefined1 *)(lVar14 + _DAT_112d7ae78) = 0;
        lVar9 = _DAT_112d7ae80;
        puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1013d13bc();
        *(undefined **)(lVar14 + lVar9) = puVar15;
        lVar9 = _DAT_112d7ae88;
        lVar16 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar14 + lVar9,1,1,lVar16);
        *(undefined1 *)(lVar14 + _DAT_112d7ae90) = 0;
        puVar19 = (undefined8 *)(lVar14 + _DAT_112d7ae98);
        *puVar19 = 0;
        puVar19[1] = 0;
        *(long *)(lVar14 + _DAT_112d7aea0) = lVar12;
        *(long *)(lVar14 + _DAT_112d7aea8) = lVar10;
        puVar19 = (undefined8 *)(lVar14 + _DAT_112d7aeb0);
        *puVar19 = uVar4;
        *(undefined1 *)(puVar19 + 1) = uVar1;
        *(undefined8 *)(lVar14 + _DAT_112d7aeb8) = uVar23;
        plVar18 = (long *)(lVar14 + _DAT_112d7aec0);
        *plVar18 = lVar11;
        plVar18[1] = (long)&PTR_DAT_1103aed50;
        *(undefined8 *)(lVar14 + _DAT_112d7aec8) = uVar20;
        func_0x000107c615f0();
        func_0x000107c615f0(uVar20);
        func_0x000107c6157c(lVar12);
        func_0x000107c615f0(lVar10);
        func_0x000107c61434(uVar4);
        func_0x000107c6157c(lVar11);
        uVar21 = uVar23;
        func_0x000107c44368();
        *(undefined8 *)(lVar14 + _DAT_112d7aed0) = uVar21;
        plVar17 = &lStack_70;
        lStack_70 = lVar14;
        lStack_68 = lVar13;
        func_0x000107c61154(plVar17,PTR_s_init_1125d9248);
        *(undefined ***)(lVar12 + 0x18) = &PTR_DAT_1103aed68;
        func_0x000107c61604(lVar12 + 0x10,plVar17);
        plVar18 = plVar17;
        func_0x000107c61174(plVar17);
        FUN_1013d159c();
        func_0x0001013d1694(uVar22);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar4);
        func_0x000107c615e8(uVar23);
        func_0x000107c61574(lVar11);
        func_0x000107c615e8(uVar20);
        func_0x000107c615e8(uVar22);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c615e8(lVar10);
        func_0x000107c615e8(lVar8);
        func_0x000107c615e8(lVar7);
        func_0x000107c615e8(uVar3);
        func_0x000107c61170(plVar18);
        func_0x000107c61574(lVar12);
        uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
        *(long **)(unaff_x20 + 0x10) = plVar17;
        func_0x000107c61170(uVar4);
        return unaff_x20;
      }
      func_0x000107c6142c(uVar4);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c615e8(lVar8);
      func_0x000107c615e8(lVar7);
      func_0x000107c615e8(uVar3);
      return unaff_x20;
    }
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c615e8(lVar7);
  }
  func_0x000107c615e8(uVar3);
  return unaff_x20;
}



/* Entry: 1013d4144; end: 1013d4167;  */

void FUN_1013d4144(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013d4168; end: 1013d4173;  */

void FUN_1013d4168(void)

{
  return;
}



/* Entry: 1013d4174; end: 1013d4193;  */

void FUN_1013d4174(void)

{
  func_0x000107c61168(&PTR_PTR_112d7af58);
  return;
}



/* Entry: 1013d4194; end: 1013d43eb;  */

void FUN_1013d4194(void)

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
  
  func_0x0001000285a8(0x112d7b088,&UNK_10d9d8120);
  lVar3 = 4;
  func_0x000107c602e8();
  lVar11 = 0;
  lVar1 = lVar3 + 0x38;
  do {
    uVar10 = *(ulong *)(lVar11 * 8 + 0x112d7b068);
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
        if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar10) goto LAB_1013d420c;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013d42bc);
      (*pcVar2)();
    }
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_1013d420c:
    lVar11 = lVar11 + 1;
    if (lVar11 == 4) {
      lRam00000001137ff3e8 = lVar3;
      return;
    }
  } while( true );
}



/* Entry: 1013d43ec; end: 1013d44fb;  */

void FUN_1013d43ec(void)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_88 [72];
  
  func_0x0001000285a8(0x112d7b008,&UNK_10d93a6f0);
  lVar4 = 1;
  func_0x000107c602e8();
  bVar2 = bRam0000000112d7b038;
  lVar1 = lVar4 + 0x38;
  uVar10 = (ulong)bRam0000000112d7b038;
  func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar4 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar10 = uVar10 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar10 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar10 & 0x3f);
  lVar5 = *(long *)(lVar4 + 0x30);
  if ((uVar8 & uVar7) != 0) {
    do {
      if (*(byte *)(lVar5 + uVar10) == bVar2) {
        lRam00000001137ff400 = lVar4;
        uRam00000001137ff408 = 1;
        return;
      }
      uVar10 = uVar10 + 1 & ~uVar9;
      uVar6 = uVar10 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar10 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(byte *)(lVar5 + uVar10) = bVar2;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lRam00000001137ff400 = lVar4;
    uRam00000001137ff408 = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d44fc);
  (*pcVar3)();
}



/* Entry: 1013d44fc; end: 1013d45b7;  */

undefined1 FUN_1013d44fc(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar2 = (ulong)(param_1 & 0xff);
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar1 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(param_2 + 0x30) + uVar2) == (param_1 & 0xff)) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar1;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 1013d45b8; end: 1013d4663;  */

void FUN_1013d45b8(void)

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



/* Entry: 1013d4664; end: 1013d46b7;  */

bool FUN_1013d4664(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1013d46b8; end: 1013d46f7;  */

void FUN_1013d46b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7afd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93a640;
  func_0x000107c61520(&UNK_10d93a640,&UNK_1103af020);
  puRam0000000112d7afd0 = puVar1;
  return;
}



/* Entry: 1013d46f8; end: 1013d46ff;  */

void FUN_1013d46f8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1013d4700; end: 1013d474b;  */

undefined8 * FUN_1013d4700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 1013d474c; end: 1013d4787;  */

undefined8 * FUN_1013d474c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 1013d4788; end: 1013d4b17;  */

int FUN_1013d4788(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1013d4b18; end: 1013d4b9b;  */

void FUN_1013d4b18(void)

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



/* Entry: 1013d4b9c; end: 1013d4bfb;  */

long FUN_1013d4b9c(short *param_1,short *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 4);
  if (*param_1 != *param_2) {
    return 0;
  }
  if ((lVar1 == *(long *)(param_2 + 4)) && (*(long *)(param_1 + 8) == *(long *)(param_2 + 8))) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,*(long *)(param_1 + 8),*(long *)(param_2 + 4),*(long *)(param_2 + 8),0);
  return lVar1;
}



/* Entry: 1013d4bfc; end: 1013d4c3b;  */

void FUN_1013d4bfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7b090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93a740;
  func_0x000107c61520(&UNK_10d93a740,&UNK_1103af200);
  puRam0000000112d7b090 = puVar1;
  return;
}



/* Entry: 1013d4c3c; end: 1013d4c3f;  */

void FUN_1013d4c3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7b098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93a7a8;
  func_0x000107c61520(&UNK_10d93a7a8,&UNK_1103af290);
  puRam0000000112d7b098 = puVar1;
  return;
}



/* Entry: 1013d4c40; end: 1013d4c7f;  */

void FUN_1013d4c40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7b098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93a7a8;
  func_0x000107c61520(&UNK_10d93a7a8,&UNK_1103af290);
  puRam0000000112d7b098 = puVar1;
  return;
}



/* Entry: 1013d4c80; end: 1013d4c87;  */

void FUN_1013d4c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1013d4c88; end: 1013d4d43;  */

undefined2 * FUN_1013d4c88(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1013d4d44; end: 1013d50bb;  */

int FUN_1013d4d44(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1013d50bc; end: 1013d5287;  */

void FUN_1013d50bc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffd0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  func_0x000100028750();
  lVar2 = lVar3;
  func_0x000100028790(lVar3,0x112d7b1f0);
  func_0x000107c5edd0(puVar5,0xd00000000000002c,0x800000010ef3c540);
  lVar6 = *(long *)(lVar3 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar3);
  if ((int)puVar4 != 1) {
    (**(code **)(lVar6 + 0x20))(lVar2,puVar5,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d51a0);
  (*pcVar1)();
}



/* Entry: 1013d5288; end: 1013d52db;  */

void FUN_1013d5288(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1013d52dc();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1013d52dc; end: 1013d53cf;  */

void FUN_1013d52dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c498f8();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  puVar3 = &UNK_1103af2e8;
  func_0x000107c613fc(&UNK_1103af2e8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uStack_40 = 0x1013d63d8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100fef460;
  puStack_48 = &UNK_1103af328;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c51924(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined **)(unaff_x20 + 0x38) = puVar2;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1013d53d0; end: 1013d54c7;  */

void FUN_1013d53d0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c498f8();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61170(uVar1);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000107c498f8();
  }
  func_0x0001013d544c();
  FUN_1013d54c8(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1013d54c8; end: 1013d54eb;  */

undefined8 FUN_1013d54c8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1013d54ec; end: 1013d560f;  */

void FUN_1013d54ec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  func_0x000107c4c190();
  func_0x000107c61180();
  puVar2 = &UNK_1103af2e8;
  func_0x000107c613fc(&UNK_1103af2e8,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61644(puVar2 + 0x10,param_2);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_1103af3d8;
  func_0x000107c613fc(&UNK_1103af3d8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  uStack_58 = 0x1013d652c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000b0c7c;
  puStack_60 = &UNK_1103af3f0;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_50;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e550(puVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1013d5610; end: 1013d569b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d5610(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_113080b18);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    if ((int)uVar1 == 2) {
      FUN_1013d569c();
    }
    else {
      func_0x0001013d544c();
      if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x78) = 0;
      }
    }
    FUN_1013d58a8();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1013d569c; end: 1013d58a7;  */

void FUN_1013d569c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    func_0x000107c3f474();
  }
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    func_0x000107c498f8();
  }
  puVar2 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  func_0x000107c42a04();
  func_0x000107c61180();
  func_0x000107c59dac(0x4014000000000000);
  func_0x000107c57dc0(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  func_0x000107c61168();
  func_0x000107c5209c();
  func_0x000107c61180();
  if (lRam0000000112d7b1e8 != -1) {
    func_0x000107c61568(0x112d7b1e8,FUN_1013d50bc);
  }
  lVar4 = lVar1;
  func_0x000100028790(lVar1,0x112d7b1f0);
  lVar5 = lVar9;
  (**(code **)(lVar10 + 0x10))(lVar9,lVar4,lVar1);
  func_0x000107c5ed90();
  (**(code **)(lVar10 + 8))(lVar9,lVar1);
  puVar6 = &UNK_1103af2e8;
  func_0x000107c613fc(&UNK_1103af2e8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  uStack_60 = 0x1013d6534;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1012d0a0c;
  puStack_68 = &UNK_1103af418;
  ppuVar7 = &puStack_80;
  puStack_58 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_58);
  puVar6 = puVar3;
  func_0x000107c412c8();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar5);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined **)(unaff_x20 + 0x80) = puVar6;
  func_0x000107c61170(uVar8);
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    func_0x000107c50714();
  }
  func_0x000107c435b0(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1013d58a8; end: 1013d59cf;  */

void FUN_1013d58a8(void)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar10 = *(ulong *)(unaff_x20 + 0x50);
  uVar11 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c42250(uVar11);
  uVar9 = uVar11;
  func_0x000107c42248();
  func_0x000107c44f5c();
  uVar12 = uVar10;
  FUN_1013d5a24(uVar10,uVar9,uVar11);
  if (((uint)uVar12 & 0xff) == 4) {
    if (*(char *)(unaff_x20 + 0x60) != '\x01') {
      lVar8 = uVar11 - *(long *)(unaff_x20 + 0x58);
      if (SBORROW8(uVar11,*(long *)(unaff_x20 + 0x58))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d59cc);
        (*pcVar1)();
      }
      if ((lVar8 < 0) && (bVar2 = SBORROW8(0,lVar8), lVar8 = -lVar8, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d59d0);
        (*pcVar1)();
      }
      if (0x32 < lVar8) {
        *(undefined8 *)(unaff_x20 + 0x58) = 0;
        *(undefined2 *)(unaff_x20 + 0x60) = 0x101;
        FUN_1013d5ac0(uVar9,uVar11);
        uVar12 = uVar9;
        if (((uint)uVar9 & 0xff) != 4) goto LAB_1013d596c;
      }
    }
    if (*(char *)(unaff_x20 + 0x49) != '\x04') {
      *(ulong *)(unaff_x20 + 0x58) = uVar11;
      *(undefined1 *)(unaff_x20 + 0x60) = 0;
    }
    uVar12 = 4;
  }
  else {
LAB_1013d596c:
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined1 *)(unaff_x20 + 0x60) = 1;
  }
  uVar9 = uVar12;
  FUN_1013d5b70(uVar12,uVar10);
  if ((uVar9 & 1) == 0) {
    if ((uint)*(byte *)(unaff_x20 + 0x49) != ((uint)uVar12 & 0xff)) {
      *(char *)(unaff_x20 + 0x49) = (char)uVar12;
      ppuVar6 = &puStack_60;
      if (*(long *)(unaff_x20 + 0x40) != 0) {
        func_0x000107c498f8();
      }
      uVar7 = 0x112d7b1e0;
      func_0x0001000285a8(0x112d7b1e0,&UNK_10d93a908);
      func_0x000107c61538();
      FUN_1013d63e0();
      if ((uVar12 & 0xff) == 0) {
        uVar9 = (ulong)*(byte *)(unaff_x20 + 0x48);
        FUN_1013d44fc(uVar9,uVar7);
        func_0x000107c6142c(uVar7);
        if ((uVar9 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
          func_0x000107c61168();
          puVar4 = &UNK_1103af2e8;
          func_0x000107c613fc(&UNK_1103af2e8,0x18,7);
          func_0x000107c61644(puVar4 + 0x10,unaff_x20);
          puVar5 = &UNK_1103af360;
          func_0x000107c613fc(&UNK_1103af360,0x19,7);
          *(undefined **)(puVar5 + 0x10) = puVar4;
          puVar5[0x18] = 0;
          puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_58 = 0x42000000;
          pcStack_50 = FUN_100fef460;
          puStack_48 = &UNK_1103af378;
          func_0x000107c60bc4(&puStack_60);
          func_0x000107c61574(puVar5);
          func_0x000107c51924(0x4000000000000000);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar6);
          uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
          *(undefined **)(unaff_x20 + 0x40) = puVar3;
          func_0x000107c61170(uVar7);
          return;
        }
      }
      else {
        func_0x000107c6142c();
      }
      if ((uint)*(byte *)(unaff_x20 + 0x48) != ((uint)uVar12 & 0xff)) {
        *(char *)(unaff_x20 + 0x48) = (char)uVar12;
        lVar8 = unaff_x20 + 0x10;
        func_0x000107c61618();
        if (lVar8 != 0) {
          FUN_1013d38f8(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar8);
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 1013d59d0; end: 1013d5a23;  */

void FUN_1013d59d0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1013d58a8();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1013d5a24; end: 1013d5abf;  */

byte FUN_1013d5a24(long param_1,ulong param_2,long param_3)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  long unaff_x20;
  long lStack_18;
  
  if ((int)param_1 == 0) {
    if ((*(byte *)(unaff_x20 + 0x61) & 1) == 0) {
      return 4;
    }
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x61) = 0;
    if (((int)param_1 == 2) && ((*(byte *)(unaff_x20 + 0x78) & 1) != 0)) {
      return 3;
    }
    if ((5 < param_1 + 1U) || ((1L << (param_1 + 1U & 0x3f) & 0x2dU) == 0)) {
      lStack_18 = param_1;
      func_0x000107c60614(&UNK_11077d010,&lStack_18,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013d5ac0);
      (*pcVar2)();
    }
  }
  if (49999999 < (long)param_2) {
    return 0;
  }
  bVar1 = 2;
  if (0xc34 < param_2 >> 7) {
    bVar1 = param_2 >> 9 < 0xc35;
  }
  bVar3 = 0;
  if (0 < (long)param_2) {
    bVar3 = bVar1;
  }
  bVar1 = *(byte *)(unaff_x20 + 0x48);
  if (bVar1 < 3 && bVar1 != 0) {
    if (bVar1 == 1) {
      if (1000 < param_3) {
        return 2;
      }
    }
    else if (700 < param_3) {
      return 2;
    }
    if (param_3 < 0x15f) {
      return bVar3;
    }
  }
  else {
    if (1000 < param_3) {
      return 2;
    }
    if (param_3 < 0x1f5) {
      return bVar3;
    }
  }
  if (bVar3 < 2) {
    bVar3 = 1;
  }
  return bVar3;
}



/* Entry: 1013d5ac0; end: 1013d5b6f;  */

byte FUN_1013d5ac0(ulong param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long unaff_x20;
  
  if (49999999 < (long)param_1) {
    return 0;
  }
  bVar1 = 2;
  if (0xc34 < param_1 >> 7) {
    bVar1 = param_1 >> 9 < 0xc35;
  }
  bVar2 = 0;
  if (0 < (long)param_1) {
    bVar2 = bVar1;
  }
  bVar1 = *(byte *)(unaff_x20 + 0x48);
  if (bVar1 < 3 && bVar1 != 0) {
    if (bVar1 == 1) {
      if (1000 < param_2) {
        return 2;
      }
    }
    else if (700 < param_2) {
      return 2;
    }
    if (param_2 < 0x15f) {
      return bVar2;
    }
  }
  else {
    if (1000 < param_2) {
      return 2;
    }
    if (param_2 < 0x1f5) {
      return bVar2;
    }
  }
  if (bVar2 < 2) {
    bVar2 = 1;
  }
  return bVar2;
}



/* Entry: 1013d5b70; end: 1013d5d93;  */

undefined8 FUN_1013d5b70(byte param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  FUN_1013d5d94();
  if (param_1 == 1) {
    if ((param_2 & 1) == 0) goto LAB_1013d5bf8;
  }
  else if ((param_1 != 2) || ((((uint)param_2 ^ 1) & 1) != 0)) goto LAB_1013d5bf8;
  if (*(byte *)(unaff_x20 + 0x48) < param_1) {
    lVar2 = 0;
    if ((*(byte *)(unaff_x20 + 0x68) != 5) && (param_1 == *(byte *)(unaff_x20 + 0x68))) {
      lVar2 = *(long *)(unaff_x20 + 0x70);
    }
    if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d5c1c);
      (*pcVar1)();
    }
    if (lVar2 + 1 < 3) {
      *(ulong *)(unaff_x20 + 0x68) = (ulong)param_1;
      *(long *)(unaff_x20 + 0x70) = lVar2 + 1;
      return 1;
    }
  }
LAB_1013d5bf8:
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 5;
  return 0;
}



/* Entry: 1013d5d94; end: 1013d5e0f;  */

long FUN_1013d5d94(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lStack_18;
  
  if ((*(byte *)(unaff_x20 + 0x61) & 1) == 0) {
    if ((int)param_1 == 0) {
      return param_1;
    }
    if (((int)param_1 == 2) && ((*(byte *)(unaff_x20 + 0x78) & 1) != 0)) {
      return 0;
    }
    if ((5 < param_1 + 1U) || ((0x2dU >> (ulong)((uint)(param_1 + 1U) & 0x1f) & 1) == 0)) {
      lStack_18 = param_1;
      func_0x000107c60614(&UNK_11077d010,&lStack_18,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d5e10);
      (*pcVar1)();
    }
  }
  return 1;
}



/* Entry: 1013d5e10; end: 1013d5ecb;  */

void FUN_1013d5e10(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  if ((uint)*(byte *)(unaff_x20 + 0x48) != ((uint)param_1 & 0xff)) {
    *(char *)(unaff_x20 + 0x48) = (char)param_1;
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_1013d38f8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1013d5ecc; end: 1013d5fbf;  */

void FUN_1013d5ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  func_0x000107c4c190();
  func_0x000107c61180();
  puVar2 = &UNK_1103af450;
  func_0x000107c613fc(&UNK_1103af450,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uStack_50 = 0x1013d653c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_1103af468;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_5);
  FUN_100de78a0(param_1,param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e550(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1013d5fc0; end: 1013d6207;  */

void FUN_1013d5fc0(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  ulong uVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (param_3 >> 0x3c < 0xf) {
      func_0x000107c5fb04(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5faf0(param_2,param_3,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      lStack_58 = 0;
      if (param_3 != 0) {
        lStack_58 = param_2;
      }
      uVar4 = 0xe000000000000000;
      if (param_3 != 0) {
        uVar4 = param_3;
      }
    }
    else {
      lStack_58 = 0;
      param_2 = param_1;
      uVar4 = 0xe000000000000000;
    }
    uStack_68 = 0x73736563637553;
    uStack_60 = 0xe700000000000000;
    uStack_50 = uVar4;
    FUN_100e8b654();
    puVar3 = &uStack_68;
    func_0x000107c6022c(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_2,param_2);
    func_0x000107c6142c(uVar4);
    cVar1 = *(char *)(param_1 + 0x78);
    *(byte *)(param_1 + 0x78) = ((byte)puVar3 ^ 0xff) & 1;
    if (((ulong)puVar3 & 1) == 0) {
      func_0x0001013d6120();
    }
    else if (*(long *)(param_1 + 0x88) != 0) {
      func_0x000107c498f8();
    }
    if (cVar1 != *(char *)(param_1 + 0x78)) {
      FUN_1013d58a8();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1013d6208; end: 1013d626f;  */

void FUN_1013d6208(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x50) == 2) {
      FUN_1013d569c();
    }
    else {
      func_0x0001013d544c();
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1013d6270; end: 1013d63b3;  */

void FUN_1013d6270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61614(unaff_x20 + 0x10,0);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  *(undefined2 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xffffffffffffffff;
  *(undefined2 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 5;
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x0001013d51a0();
  pcVar2 = "init(bandwidthEstimator:connectivityMonitor:)";
  func_0x0001000c10c0("init(bandwidthEstimator:connectivityMonitor:)");
  func_0x000107c61180();
  puVar1 = &UNK_1103af2e8;
  func_0x000107c613fc(&UNK_1103af2e8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_40 = FUN_1013d63b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103af300;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1013d63b4; end: 1013d63df;  */

void FUN_1013d63b4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1013d52dc();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1013d63e0; end: 1013d6517;  */

undefined * FUN_1013d63e0(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d7b008,&UNK_10d93a6f0);
    puVar3 = puVar9;
    func_0x000107c602e8();
    puVar11 = (undefined *)0x0;
    do {
      bVar1 = puVar11[param_1 + 0x20];
      uVar10 = (ulong)bVar1;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar3 + 0x28));
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar10 = uVar10 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar10 >> 6;
      uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar10 & 0x3f);
      lVar4 = *(long *)(puVar3 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if (*(byte *)(lVar4 + uVar10) == bVar1) goto LAB_1013d6464;
          uVar10 = uVar10 + 1 & ~uVar8;
          uVar5 = uVar10 >> 6;
          uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar10 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar3 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(byte *)(lVar4 + uVar10) = bVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013d6518);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_1013d6464:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar3;
}



/* Entry: 1013d6518; end: 1013d6587;  */

void FUN_1013d6518(void)

{
  char cVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x49) == cVar1) {
      FUN_1013d5e10(cVar1);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1013d6588; end: 1013d6597; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d6588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d7b268));
  return;
}



/* Entry: 1013d6598; end: 1013d6b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d6598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  char *pcVar13;
  long unaff_x20;
  undefined8 uVar14;
  double dVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar5 = &UNK_1103af620;
  func_0x000107c613fc(&UNK_1103af620,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7b238);
  uVar9 = *puVar2;
  uVar6 = puVar2[1];
  *puVar2 = FUN_1013d7c04;
  puVar2[1] = puVar5;
  FUN_100cafdb4(param_2,param_3);
  FUN_100cafd0c(uVar9,uVar6);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d7b268);
  func_0x000107c3d89c(param_1);
  func_0x000107c5a050(uVar14);
  uVar9 = uVar14;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar6 = param_1;
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  uVar7 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  uVar9 = uVar14;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar6 = param_1;
  func_0x000107c515ac(param_1);
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar9;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  lVar1 = _DAT_112d7b228;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d7b228);
  *(undefined8 *)(unaff_x20 + _DAT_112d7b228) = uVar6;
  func_0x000107c61170(uVar9);
  lVar3 = _DAT_112d7b230;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d7b230);
  *(undefined8 *)(unaff_x20 + _DAT_112d7b230) = uVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar9);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar10 = puVar5;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar10 + 0x18) = 0xd;
  *(undefined8 *)(puVar10 + 0x10) = 6;
  uVar9 = uVar14;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar6 = param_1;
  func_0x000107c3f75c(param_1);
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar10 + 0x20) = uVar8;
  uVar9 = uVar14;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar6 = param_1;
  func_0x000107c4acb0(param_1);
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c40298(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar10 + 0x28) = uVar8;
  uVar9 = uVar14;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar6 = param_1;
  func_0x000107c5ce8c(param_1);
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c402a8(0xc030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar10 + 0x30) = uVar8;
  uVar9 = uVar14;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar6 = uVar9;
  func_0x000107c402b0(0x4071800000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  *(undefined8 *)(puVar10 + 0x38) = uVar6;
  uVar9 = uVar14;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar6 = uVar9;
  func_0x000107c402a0(0);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  *(undefined8 *)(puVar10 + 0x40) = uVar6;
  *(undefined8 *)(puVar10 + 0x48) = uVar7;
  uVar9 = 0;
  func_0x000100847984(0);
  func_0x000107c61174(uVar7);
  puVar11 = puVar10;
  func_0x000107c5fc48(puVar10,uVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(puVar11);
  func_0x000107c4abfc(param_1);
  func_0x000107c521e8(*(undefined8 *)(unaff_x20 + lVar3));
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c521e8();
  }
  if (*(long *)(unaff_x20 + _DAT_112d7b218) != 0) {
    puVar5 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    func_0x000107c610f8(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x000107c48c2c();
    func_0x000107c53fcc();
    func_0x000107c56704(0,puVar5);
    func_0x000107c3d6fc(uVar14);
    func_0x000107c61170(puVar5);
  }
  FUN_1013d71b0();
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_1103af648;
  func_0x000107c613fc(&UNK_1103af648,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1013d7c2c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103af660;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar12);
  puVar5 = puStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c3dccc(0x3fc999999999999a,puVar11);
  func_0x000107c60bd0(ppuVar12);
  lVar1 = *(long *)(unaff_x20 + _DAT_112d7b240) + 1;
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112d7b240),1)) {
    *(long *)(unaff_x20 + _DAT_112d7b240) = lVar1;
    dVar15 = *(double *)(unaff_x20 + _DAT_112d7b208 + 0x28);
    pcVar13 = "scheduleAutoDismiss()";
    func_0x0001000c10c0("scheduleAutoDismiss()");
    func_0x000107c61180();
    puVar5 = &UNK_1103af558;
    func_0x000107c613fc(&UNK_1103af558,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar11 = &UNK_1103af698;
    func_0x000107c613fc(&UNK_1103af698,0x20,7);
    *(undefined **)(puVar11 + 0x10) = puVar5;
    *(long *)(puVar11 + 0x18) = lVar1;
    pcStack_80 = (code *)0x1013d8690;
    puStack_a0 = puVar10;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1103af6b0;
    ppuVar12 = &puStack_a0;
    puStack_78 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_78);
    func_0x000107c4e528(dVar15 + 0.2,pcVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(pcVar13);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1013d6b4c);
  (*pcVar4)();
}



/* Entry: 1013d6b4c; end: 1013d6bf7; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter presentNotificationOverView:completion:] */

/* WARNING: Possible PIC construction at 0x0001013d6bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d6be0) */

void FUN_1013d6b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1103af6e8;
    func_0x000107c613fc(&UNK_1103af6e8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x1013d7c34;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1013d6598(param_3,uVar2,puVar1);
  FUN_100cafd0c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013d6bf8; end: 1013d6ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1013d6bf8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x35);
  func_0x000107c5fb78(0xd000000000000029,0x800000010ef3c590);
  func_0x000107c603d0(unaff_x20 + _DAT_112d7b210,&uStack_30,&UNK_1103af7d0,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x223d7478657420,0xe700000000000000);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112d7b208 + 0x10),
                      *(undefined8 *)(unaff_x20 + _DAT_112d7b208 + 0x18));
  func_0x000107c5fb78(0x22,0xe100000000000000);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 1013d6ccc; end: 1013d6d23; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter debugInfo] */

void FUN_1013d6ccc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013d6bf8();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013d6d24; end: 1013d6dd3; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter dismissPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d6d24(long param_1)

{
  code *pcVar1;
  
  if (!SCARRY8(*(long *)(param_1 + _DAT_112d7b240),1)) {
    *(long *)(param_1 + _DAT_112d7b240) = *(long *)(param_1 + _DAT_112d7b240) + 1;
    func_0x000107c61174();
    FUN_1013d6dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d6d68);
  (*pcVar1)();
}



/* Entry: 1013d6dd4; end: 1013d6fff;  */

/* WARNING: Possible PIC construction at 0x0001013d6ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d6f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d6ed8) */
/* WARNING: Removing unreachable block (ram,0x0001013d6f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d6dd4(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  if ((*(byte *)(unaff_x20 + _DAT_112d7b248) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d7b248) = 1;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7b268);
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    pcVar4 = *(code **)(unaff_x20 + _DAT_112d7b220);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(((undefined8 *)(unaff_x20 + _DAT_112d7b220))[1]);
    }
    plVar1 = (long *)(unaff_x20 + _DAT_112d7b238);
    pcVar4 = (code *)*plVar1;
    if (pcVar4 == (code *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = plVar1[1];
      func_0x000107c6157c(lVar2);
      (*pcVar4)();
      FUN_100cafd0c(pcVar4,lVar2);
      lVar2 = *plVar1;
    }
    puVar3 = (undefined *)plVar1[1];
    *plVar1 = 0;
    plVar1[1] = 0;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    func_0x000107c61170();
    if (*(long *)(unaff_x20 + _DAT_112d7b228) != 0) {
      func_0x000107c521e8();
    }
    func_0x000107c521e8(*(undefined8 *)(unaff_x20 + _DAT_112d7b230));
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_1103af558;
    func_0x000107c613fc(&UNK_1103af558,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uStack_60 = 0x1013d8694;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1103af700;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1013d7000; end: 1013d715f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d7000(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4ff34(*(undefined8 *)(param_2 + _DAT_112d7b268));
    pcVar4 = *(code **)(param_2 + _DAT_112d7b220);
    if (pcVar4 != (code *)0x0) {
      uVar3 = ((undefined8 *)(param_2 + _DAT_112d7b220))[1];
      func_0x000107c6157c(uVar3);
      (*pcVar4)();
      FUN_100cafd0c(pcVar4,uVar3);
    }
    puVar1 = (undefined8 *)(param_2 + _DAT_112d7b238);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 == (code *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = puVar1[1];
      func_0x000107c6157c(uVar3);
      (*pcVar4)();
      FUN_100cafd0c(pcVar4,uVar3);
      uVar3 = *puVar1;
    }
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_100cafd0c(uVar3,uVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013d7160; end: 1013d71af; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter handleLongPress:] */

/* WARNING: Possible PIC construction at 0x0001013d7198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d719c) */

void FUN_1013d7160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001013d70e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013d71b0; end: 1013d7247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d71b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112d7b208 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x000107c48c2c();
    func_0x000107c53fcc();
    func_0x000107c56700(puVar1,param_2,1);
    func_0x000107c56398(puVar1,param_2,1);
    func_0x000107c3d6fc(*(undefined8 *)(unaff_x20 + _DAT_112d7b268),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1013d7248; end: 1013d7437;  */

/* WARNING: Possible PIC construction at 0x0001013d7358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d7370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d7404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d6e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d6ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d6f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d7548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d75a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d754c) */
/* WARNING: Removing unreachable block (ram,0x0001013d6f34) */
/* WARNING: Removing unreachable block (ram,0x0001013d6ed8) */
/* WARNING: Removing unreachable block (ram,0x0001013d6e28) */
/* WARNING: Removing unreachable block (ram,0x0001013d6e38) */
/* WARNING: Removing unreachable block (ram,0x0001013d6e40) */
/* WARNING: Removing unreachable block (ram,0x0001013d7408) */
/* WARNING: Removing unreachable block (ram,0x0001013d7374) */
/* WARNING: Removing unreachable block (ram,0x0001013d73ac) */
/* WARNING: Removing unreachable block (ram,0x0001013d73b8) */
/* WARNING: Removing unreachable block (ram,0x0001013d73bc) */
/* WARNING: Removing unreachable block (ram,0x0001013d73c0) */
/* WARNING: Removing unreachable block (ram,0x0001013d7384) */
/* WARNING: Removing unreachable block (ram,0x0001013d7394) */
/* WARNING: Removing unreachable block (ram,0x0001013d7398) */
/* WARNING: Removing unreachable block (ram,0x0001013d739c) */
/* WARNING: Removing unreachable block (ram,0x0001013d73c4) */
/* WARNING: Removing unreachable block (ram,0x0001013d73a0) */
/* WARNING: Removing unreachable block (ram,0x0001013d73c8) */
/* WARNING: Removing unreachable block (ram,0x0001013d735c) */
/* WARNING: Removing unreachable block (ram,0x0001013d75a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d7248(double param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  double dVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar3 = param_2;
  func_0x000107c5bcc0();
  if (1 < lVar3 - 3U) {
    if (lVar3 != 2) {
      if (lVar3 == 1) {
        if (SCARRY8(*(long *)(unaff_x20 + _DAT_112d7b240),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013d7438);
          (*pcVar2)();
        }
        *(long *)(unaff_x20 + _DAT_112d7b240) = *(long *)(unaff_x20 + _DAT_112d7b240) + 1;
      }
      return;
    }
    *(undefined1 *)(unaff_x20 + _DAT_112d7b260) = 1;
    func_0x000107c5de64(param_2);
    func_0x000107c61180();
    func_0x000107c5c42c();
    func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + _DAT_112d7b268));
  func_0x000107c609b0();
  if (*(long *)(unaff_x20 + _DAT_112d7b228) != 0) {
    param_1 = param_1 * 0.5;
    dVar5 = 24.0;
    if (24.0 < param_1) {
      dVar5 = param_1;
    }
    func_0x000107c40268();
    if (dVar5 < 0.0 - param_1) {
      if ((*(byte *)(unaff_x20 + _DAT_112d7b248) & 1) != 0) {
        return;
      }
      *(undefined1 *)(unaff_x20 + _DAT_112d7b248) = 1;
      lVar3 = *(long *)(unaff_x20 + _DAT_112d7b268);
      func_0x000107c5c42c();
      func_0x000107c61180();
      if (lVar3 != 0) goto code_r0x000107c61170;
      pcVar2 = *(code **)(unaff_x20 + _DAT_112d7b220);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(((undefined8 *)(unaff_x20 + _DAT_112d7b220))[1]);
      }
      plVar1 = (long *)(unaff_x20 + _DAT_112d7b238);
      pcVar2 = (code *)*plVar1;
      if (pcVar2 == (code *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = plVar1[1];
        func_0x000107c6157c(lVar3);
        (*pcVar2)();
        FUN_100cafd0c(pcVar2,lVar3);
        lVar3 = *plVar1;
      }
      puVar4 = (undefined *)plVar1[1];
      *plVar1 = 0;
      plVar1[1] = 0;
      if (lVar3 == 0) {
        return;
      }
      goto code_r0x000107c61574;
    }
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d7b260) = 0;
  if (*(long *)(unaff_x20 + _DAT_112d7b228) != 0) {
    func_0x000107c5378c(0);
  }
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar4 = &UNK_1103af558;
  func_0x000107c613fc(&UNK_1103af558,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  pcStack_60 = FUN_1013d7bc0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103af570;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 1013d7438; end: 1013d7487; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter handlePanGesture:] */

/* WARNING: Possible PIC construction at 0x0001013d7470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d7474) */

void FUN_1013d7438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1013d7248(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013d7488; end: 1013d75eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d7488(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b260) = 0;
  if (*(long *)(unaff_x20 + _DAT_112d7b228) != 0) {
    func_0x000107c5378c(0);
  }
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_1103af558;
  puVar3 = puVar5;
  func_0x000107c613fc(&UNK_1103af558,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1013d7bc0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103af570;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c613fc(&UNK_1103af558,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcStack_60 = (code *)0x1013d7bf4;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1103af598;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c3dcd0(0x3fc999999999999a,puVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1013d75ec; end: 1013d767f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d75ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7b268);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    uVar1 = uVar2;
    func_0x000107c5c42c(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c4abfc(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1013d7680; end: 1013d77df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d7680(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  double dVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar1 = *(long *)(param_2 + _DAT_112d7b240) + 1;
      if (SCARRY8(*(long *)(param_2 + _DAT_112d7b240),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013d77e0);
        (*pcVar2)();
      }
      *(long *)(param_2 + _DAT_112d7b240) = lVar1;
      dVar7 = *(double *)(param_2 + _DAT_112d7b208 + 0x28);
      pcVar3 = "scheduleAutoDismiss()";
      func_0x0001000c10c0("scheduleAutoDismiss()");
      func_0x000107c61180();
      puVar4 = &UNK_1103af558;
      func_0x000107c613fc(&UNK_1103af558,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,param_2);
      puVar5 = &UNK_1103af5d0;
      func_0x000107c613fc(&UNK_1103af5d0,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(long *)(puVar5 + 0x18) = lVar1;
      uStack_68 = 0x1013d7bfc;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1103af5e8;
      ppuVar6 = &puStack_88;
      puStack_60 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_60);
      func_0x000107c4e528(dVar7 + 0.2,pcVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(pcVar3);
    }
  }
  return;
}



/* Entry: 1013d77e0; end: 1013d783b; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter init] */

void FUN_1013d77e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NetworkHealthServices.NetworkHealthNotificationPresenter",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d780c);
  (*pcVar1)();
}



/* Entry: 1013d783c; end: 1013d78ef; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013d786c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d78ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d7870) */
/* WARNING: Removing unreachable block (ram,0x0001013d78b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d783c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d7b208);
  func_0x000107c6142c(((undefined8 *)(param_1 + _DAT_112d7b208))[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013d78f0; end: 1013d790f;  */

void FUN_1013d78f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d02f0);
  return;
}



/* Entry: 1013d7910; end: 1013d7973; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_1013d7910(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  func_0x000107c61168(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x000107c6148c(param_3,puVar1);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x000107c6148c(param_4,puVar1);
    if (param_4 != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1013d7974; end: 1013d797b; -[_TtC21NetworkHealthServices34NetworkHealthNotificationPresenter gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1013d7974(void)

{
  return 1;
}



/* Entry: 1013d797c; end: 1013d79d7;  */

long FUN_1013d797c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1013d79d8; end: 1013d7abf;  */

undefined8 * FUN_1013d79d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1013d7ac0; end: 1013d7b1b;  */

undefined8 * FUN_1013d7ac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1013d7b1c; end: 1013d7bbf;  */

int FUN_1013d7b1c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1013d7bc0; end: 1013d7bd7;  */

void FUN_1013d7bc0(void)

{
  FUN_1013d75ec();
  return;
}



/* Entry: 1013d7bd8; end: 1013d7c03;  */

void FUN_1013d7bd8(long param_1,long param_2)

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



/* Entry: 1013d7c04; end: 1013d7c2b;  */

void FUN_1013d7c04(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1013d7c2c; end: 1013d7c47;  */

void FUN_1013d7c2c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1013d7c48; end: 1013d7ea3;  */

void FUN_1013d7c48(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x000107c5af88();
      func_0x000107c61180();
      uVar2 = 0xd000000000000015;
      uVar4 = 0x800000010ef3c620;
      func_0x000107c5fadc();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      func_0x000107c5c604();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x0001013d8900();
    }
    else {
      func_0x000107c5af88();
      func_0x000107c61180();
      uVar2 = 0x69666977;
      uVar4 = 0xe400000000000000;
      func_0x000107c5fadc();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      func_0x000107c5c604();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x0001013d89cc();
    }
  }
  else if (param_3 == 2) {
    func_0x000107c5af88();
    func_0x000107c61180();
    uVar4 = 0x800000010ef3c600;
    uVar2 = 0xd000000000000014;
    func_0x000107c5fadc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c5c604();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x0001013d8a98();
  }
  else if (param_3 == 3) {
    func_0x000107c5af88();
    func_0x000107c61180();
    uVar4 = 0x800000010ef3c600;
    uVar2 = 0xd000000000000014;
    func_0x000107c5fadc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c5c604();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x0001013d8b64();
  }
  else {
    func_0x000107c5af88();
    func_0x000107c61180();
    uVar2 = 0x616c732e69666977;
    uVar4 = 0xea00000000006873;
    func_0x000107c5fadc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c5c604();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x0001013d8c30();
  }
  *param_1 = puVar1;
  param_1[1] = puVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = param_2;
  return;
}



/* Entry: 1013d7ea4; end: 1013d84f7;  */

undefined * FUN_1013d7ea4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c52b50();
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4030000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  func_0x000107c61174(puVar1);
  func_0x000107c55528();
  uVar10 = param_3;
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c520fc(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c52100(puVar1);
  func_0x000107c61170(puVar1);
  puVar2 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  puVar4 = puVar3;
  func_0x000107c3ea80(puVar3);
  func_0x000107c61180();
  func_0x000100b74f58(0x4000000000000000,0x3fbeb851eb851eb8,0,0x3ff0000000000000,puVar2,puVar1,
                      puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c59c6c(puVar2);
  func_0x000107c61170(param_3);
  puVar4 = puVar3;
  func_0x000107c5e2ac(puVar3);
  func_0x000107c61180();
  func_0x000107c59c78(puVar2);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c5c600(0x402a000000000000,*(undefined8 *)PTR__UIFontWeightMedium_110345c38);
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
  func_0x000107c45430();
  puVar6 = puVar5;
  func_0x000107c51840();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c54adc(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c52518(puVar2);
  func_0x000107c56ba8(puVar2);
  func_0x000107c5a050(puVar2);
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c52610(puVar5);
  func_0x000107c59594(0x4018000000000000,puVar5);
  func_0x000107c61174();
  func_0x000107c5a050();
  if (param_2 != 0) {
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c61174(param_2);
    func_0x000107c46db4();
    func_0x000107c5e2ac(puVar3);
    func_0x000107c61180();
    func_0x000107c59e10(puVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61174();
    func_0x000107c53840();
    func_0x000107c5a050(puVar6);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar7 = puVar3;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar7 + 0x18) = 5;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    puVar8 = puVar6;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c40290(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    *(undefined **)(puVar7 + 0x20) = puVar9;
    puVar8 = puVar6;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar9 = puVar8;
    func_0x000107c40290(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    *(undefined **)(puVar7 + 0x28) = puVar9;
    uVar10 = 0;
    func_0x000100847984(0);
    puVar8 = puVar7;
    func_0x000107c5fc48(puVar7,uVar10);
    func_0x000107c61574(puVar7);
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(puVar8);
    func_0x000107c3d5b4(puVar5);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c3d5b4(puVar5);
  func_0x000107c3d89c(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar6 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 9;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  puVar7 = puVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar8 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c40284(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  *(undefined **)(puVar6 + 0x20) = puVar9;
  puVar7 = puVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar8 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c40284(0xc028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  *(undefined **)(puVar6 + 0x28) = puVar9;
  puVar7 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar8 = puVar1;
  func_0x000107c5cbe4(puVar1);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  *(undefined **)(puVar6 + 0x30) = puVar9;
  puVar7 = puVar5;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar8 = puVar1;
  func_0x000107c3ec1c(puVar1);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  *(undefined **)(puVar6 + 0x38) = puVar9;
  uVar10 = 0;
  func_0x000100847984(0);
  puVar7 = puVar6;
  func_0x000107c5fc48(puVar6,uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  return puVar1;
}



/* Entry: 1013d84f8; end: 1013d865f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d84f8(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  FUN_1013d7c48(&lStack_80);
  lVar3 = lStack_80;
  FUN_1013d7ea4(lStack_80,lStack_78,lStack_70,lStack_68);
  lVar4 = lVar3;
  FUN_1013d78f0();
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d7b228) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7b230) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7b238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7b240) = 0;
  *(undefined1 *)(lVar4 + _DAT_112d7b248) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7b250) = 0x3fc999999999999a;
  *(undefined8 *)(lVar4 + _DAT_112d7b258) = 0x4030000000000000;
  *(undefined1 *)(lVar4 + _DAT_112d7b260) = 0;
  *(undefined1 *)(lVar4 + _DAT_112d7b210) = param_1;
  plVar2 = (long *)(lVar4 + _DAT_112d7b208);
  plVar2[3] = lStack_68;
  plVar2[2] = lStack_70;
  plVar2[5] = lStack_58;
  plVar2[4] = lStack_60;
  plVar2[1] = lStack_78;
  *plVar2 = lStack_80;
  *(long *)(lVar4 + _DAT_112d7b268) = lVar3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7b218);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7b220);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  FUN_100cafdb4(param_2,param_3);
  FUN_100cafdb4(param_4,param_5);
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013d8660; end: 1013d8697;  */

void FUN_1013d8660(long param_1,long param_2)

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



/* Entry: 1013d8698; end: 1013d8743;  */

void FUN_1013d8698(void)

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



/* Entry: 1013d8744; end: 1013d8747;  */

void FUN_1013d8744(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7b298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93a980;
  func_0x000107c61520(&UNK_10d93a980,&UNK_1103af7d0);
  puRam0000000112d7b298 = puVar1;
  return;
}



/* Entry: 1013d8748; end: 1013d8787;  */

void FUN_1013d8748(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7b298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93a980;
  func_0x000107c61520(&UNK_10d93a980,&UNK_1103af7d0);
  puRam0000000112d7b298 = puVar1;
  return;
}



/* Entry: 1013d8788; end: 1013d88ff;  */

bool FUN_1013d8788(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1013d8900; end: 1013d8cfb;  */

undefined1  [16] FUN_1013d8900(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe6;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3c640);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3c660);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d89cc);
  (*pcVar1)();
}



/* Entry: 1013d8cfc; end: 1013d8d07; -[SCNetworkHealthBannerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8cfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b2a0;
  func_0x000107c61428(param_1 + _DAT_112d7b2a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d8d08; end: 1013d8d13; -[SCNetworkHealthBannerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b2a0;
  func_0x000107c61428(param_1 + _DAT_112d7b2a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d8d14; end: 1013d8d1f; -[SCNetworkHealthBannerEntryPoint bandwidthEstimatorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b2a8;
  func_0x000107c61428(param_1 + _DAT_112d7b2a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d8d20; end: 1013d8d2b; -[SCNetworkHealthBannerEntryPoint setBandwidthEstimatorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b2a8;
  func_0x000107c61428(param_1 + _DAT_112d7b2a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d8d2c; end: 1013d8d37; -[SCNetworkHealthBannerEntryPoint connectivityMonitorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b2b0;
  func_0x000107c61428(param_1 + _DAT_112d7b2b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d8d38; end: 1013d8d43; -[SCNetworkHealthBannerEntryPoint setConnectivityMonitorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b2b0;
  func_0x000107c61428(param_1 + _DAT_112d7b2b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d8d44; end: 1013d8d4f; -[SCNetworkHealthBannerEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b2b8;
  func_0x000107c61428(param_1 + _DAT_112d7b2b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d8d50; end: 1013d8d5b; -[SCNetworkHealthBannerEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b2b8;
  func_0x000107c61428(param_1 + _DAT_112d7b2b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d8d5c; end: 1013d8d67; -[SCNetworkHealthBannerEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b2c0;
  func_0x000107c61428(param_1 + _DAT_112d7b2c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d8d68; end: 1013d8d73; -[SCNetworkHealthBannerEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b2c0;
  func_0x000107c61428(param_1 + _DAT_112d7b2c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d8d74; end: 1013d8d7f; -[SCNetworkHealthBannerEntryPoint attributionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b2c8;
  func_0x000107c61428(param_1 + _DAT_112d7b2c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d8d80; end: 1013d8d8b; -[SCNetworkHealthBannerEntryPoint setAttributionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b2c8;
  func_0x000107c61428(param_1 + _DAT_112d7b2c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d8d8c; end: 1013d8d97; -[SCNetworkHealthBannerEntryPoint systemBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8d8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b2d0;
  func_0x000107c61428(param_1 + _DAT_112d7b2d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d8d98; end: 1013d8ddb;  */

void FUN_1013d8d98(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1013d8ddc; end: 1013d8de7; -[SCNetworkHealthBannerEntryPoint setSystemBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d8ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b2d0;
  func_0x000107c61428(param_1 + _DAT_112d7b2d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d8de8; end: 1013d8e3b;  */

void FUN_1013d8de8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013d8e3c; end: 1013d9673;  */

/* WARNING: Possible PIC construction at 0x0001013d8f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d8fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d94c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d94dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d95bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d95cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d95dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d95ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d95a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d94f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d9034) */
/* WARNING: Removing unreachable block (ram,0x0001013d9024) */
/* WARNING: Removing unreachable block (ram,0x0001013d9054) */
/* WARNING: Removing unreachable block (ram,0x0001013d9044) */
/* WARNING: Removing unreachable block (ram,0x0001013d9084) */
/* WARNING: Removing unreachable block (ram,0x0001013d9074) */
/* WARNING: Removing unreachable block (ram,0x0001013d9568) */
/* WARNING: Removing unreachable block (ram,0x0001013d9558) */
/* WARNING: Removing unreachable block (ram,0x0001013d9548) */
/* WARNING: Removing unreachable block (ram,0x0001013d9538) */
/* WARNING: Removing unreachable block (ram,0x0001013d9524) */
/* WARNING: Removing unreachable block (ram,0x0001013d9514) */
/* WARNING: Removing unreachable block (ram,0x0001013d9504) */
/* WARNING: Removing unreachable block (ram,0x0001013d94f4) */
/* WARNING: Removing unreachable block (ram,0x0001013d95ac) */
/* WARNING: Removing unreachable block (ram,0x0001013d959c) */
/* WARNING: Removing unreachable block (ram,0x0001013d958c) */
/* WARNING: Removing unreachable block (ram,0x0001013d957c) */
/* WARNING: Removing unreachable block (ram,0x0001013d95f0) */
/* WARNING: Removing unreachable block (ram,0x0001013d95f8) */
/* WARNING: Removing unreachable block (ram,0x0001013d9600) */
/* WARNING: Removing unreachable block (ram,0x0001013d9608) */
/* WARNING: Removing unreachable block (ram,0x0001013d95e0) */
/* WARNING: Removing unreachable block (ram,0x0001013d95d0) */
/* WARNING: Removing unreachable block (ram,0x0001013d95c0) */
/* WARNING: Removing unreachable block (ram,0x0001013d94e0) */
/* WARNING: Removing unreachable block (ram,0x0001013d960c) */
/* WARNING: Removing unreachable block (ram,0x0001013d94c8) */
/* WARNING: Removing unreachable block (ram,0x0001013d9498) */
/* WARNING: Removing unreachable block (ram,0x0001013d9488) */
/* WARNING: Removing unreachable block (ram,0x0001013d9478) */
/* WARNING: Removing unreachable block (ram,0x0001013d9448) */
/* WARNING: Removing unreachable block (ram,0x0001013d915c) */
/* WARNING: Removing unreachable block (ram,0x0001013d95b0) */
/* WARNING: Removing unreachable block (ram,0x0001013d9164) */
/* WARNING: Removing unreachable block (ram,0x0001013d8fc8) */
/* WARNING: Removing unreachable block (ram,0x0001013d90b0) */
/* WARNING: Removing unreachable block (ram,0x0001013d9528) */
/* WARNING: Removing unreachable block (ram,0x0001013d90b4) */
/* WARNING: Removing unreachable block (ram,0x0001013d9658) */
/* WARNING: Removing unreachable block (ram,0x0001013d90c8) */
/* WARNING: Removing unreachable block (ram,0x0001013d8fcc) */
/* WARNING: Removing unreachable block (ram,0x0001013d9640) */
/* WARNING: Removing unreachable block (ram,0x0001013d8fdc) */
/* WARNING: Removing unreachable block (ram,0x0001013d90d0) */
/* WARNING: Removing unreachable block (ram,0x0001013d94e4) */
/* WARNING: Removing unreachable block (ram,0x0001013d9104) */
/* WARNING: Removing unreachable block (ram,0x0001013d956c) */
/* WARNING: Removing unreachable block (ram,0x0001013d9128) */
/* WARNING: Removing unreachable block (ram,0x0001013d8f88) */
/* WARNING: Removing unreachable block (ram,0x0001013d9014) */

void FUN_1013d8e3c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3e658();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c40240();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar5);
      lVar5 = lVar2;
    }
    else {
      lVar3 = unaff_x20;
      func_0x000107c4d840();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar5);
        lVar5 = lVar2;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c3fa0c();
        func_0x000107c61180();
        if (lVar3 != 0) {
          lVar4 = unaff_x20;
          func_0x000107c3e3a4();
          func_0x000107c61180();
          if (lVar4 != 0) {
            func_0x000107c5c5ec();
            func_0x000107c61180();
            if (unaff_x20 == 0) {
              func_0x000107c61170(lVar5);
              lVar5 = lVar2;
            }
            else {
              lVar5 = 0;
              FUN_1013d4174();
              func_0x000107c613fc();
              *(undefined8 *)(lVar5 + 0x10) = 0;
              func_0x000107c3fa04();
              func_0x000107c61180();
              if (lVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d9674);
                (*pcVar1)();
              }
              lVar5 = -0x2fffffffffffffe3;
              func_0x000107c5fadc(0xd00000000000001d,0x800000010ef3c4c0);
              func_0x000107c3ebd4(lVar3);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1013d9674; end: 1013d969b; -[SCNetworkHealthBannerEntryPoint begin] */

void FUN_1013d9674(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013d8e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013d969c; end: 1013d96df; -[SCNetworkHealthBannerEntryPoint end] */

void FUN_1013d969c(undefined8 param_1)

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


