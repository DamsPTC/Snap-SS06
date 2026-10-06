/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101aa12cc; end: 101aa1413;  */

bool FUN_101aa12cc(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = param_1;
  func_0x000101aa1248();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  uVar8 = uVar2;
  func_0x000108f94ca4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar3 = 0;
  FUN_101aa15e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = uVar8;
  func_0x000107c5fc54(uVar8,uVar3);
  func_0x000107c61170(uVar8);
  uVar8 = uVar2 & 0xffffffffffffff8;
  if (uVar2 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar7 = uVar8;
    if (0x7fffffffffffffff < uVar2) {
      uVar7 = uVar2;
    }
    func_0x000107c60480();
  }
  uVar4 = 0;
  do {
    uVar6 = uVar4;
    if (uVar7 == uVar6) break;
    if ((uVar2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa1400);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(uVar2 + uVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar6;
      func_0x0001002ec9a0(uVar6,uVar2);
    }
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa13d0);
      (*pcVar1)();
    }
    uVar5 = uVar4;
    func_0x000107c49804();
    func_0x000107c61170(uVar4);
    uVar4 = uVar6 + 1;
  } while ((int)uVar5 != (int)param_1);
  func_0x000107c6142c(uVar2);
  return uVar7 != uVar6;
}



/* Entry: 101aa1414; end: 101aa15e3;  */

undefined8 FUN_101aa1414(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x70) == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000108faa50c();
    *(undefined8 *)(unaff_x20 + 0x68) = uVar1;
    *(undefined1 *)(unaff_x20 + 0x70) = 0;
    return uVar1;
  }
  return *(undefined8 *)(unaff_x20 + 0x68);
}



/* Entry: 101aa15e4; end: 101aa1623;  */

void FUN_101aa15e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101aa1624; end: 101aa178b;  */

int FUN_101aa1624(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101aa16a0;
        goto LAB_101aa1684;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101aa1684:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101aa16a0:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101aa178c; end: 101aa17cb;  */

void FUN_101aa178c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df5bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c4994;
  func_0x000107c61520(&UNK_10d9c4994,&UNK_110439598);
  puRam0000000112df5bc8 = puVar1;
  return;
}



/* Entry: 101aa17cc; end: 101aa17df;  */

bool FUN_101aa17cc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101aa17e0; end: 101aa188b;  */

void FUN_101aa17e0(void)

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



/* Entry: 101aa188c; end: 101aa189b;  */

void FUN_101aa188c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101aa189c; end: 101aa1ba7;  */

undefined * FUN_101aa189c(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uStack_170;
  undefined1 auStack_168 [64];
  undefined8 uStack_128;
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar15 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    uVar3 = 0x112d48640;
    func_0x0001000285a8(0x112d48640,&UNK_10d910200);
    func_0x000107c60498(puVar12,uVar3);
    puVar15 = puVar12;
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  lVar11 = 0;
  while( true ) {
    for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar11 << 6;
      func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar13 * 0x28,auStack_b0);
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar13 * 0x20,auStack_88);
      func_0x0001007bbd18(auStack_b0,auStack_120);
      uVar3 = 0;
      func_0x000100eca28c(0);
      puVar4 = &uStack_128;
      func_0x000107c6147c(puVar4,auStack_120,PTR___ss11AnyHashableVN_11034e448,uVar3,6);
      uVar3 = uStack_128;
      if ((int)puVar4 == 0) {
        func_0x000107c61574(puVar15);
        func_0x000107c61574(param_1);
        func_0x000101aa3134(auStack_b0,0x112d69838,&UNK_10d92d0b0);
        return (undefined *)0x0;
      }
      func_0x0001000bb420(auStack_88,auStack_f0);
      func_0x000101aa3134(auStack_b0,0x112d69838,&UNK_10d92d0b0);
      uStack_170 = uVar3;
      func_0x000100102924(auStack_f0,auStack_168);
      uVar3 = uStack_170;
      puVar6 = auStack_d0;
      func_0x000100102924(auStack_168,puVar6);
      uVar14 = *(undefined8 *)(puVar15 + 0x28);
      uVar5 = uVar3;
      func_0x000107c5faec(uVar3);
      func_0x000107c6068c(&uStack_170,uVar14);
      puVar4 = &uStack_170;
      func_0x000107c5fb58(puVar4,uVar5,puVar6);
      func_0x000107c606a8();
      func_0x000107c6142c(puVar6);
      uVar10 = -1L << ((ulong)(byte)puVar15[0x20] & 0x3f);
      uVar9 = (ulong)puVar4 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar9 >> 6;
      uVar13 = -1L << (uVar9 & 0x3f) & (*(ulong *)(puVar15 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff)
      ;
      if (uVar13 == 0) {
        bVar2 = false;
        uVar13 = 0x3f - uVar10 >> 6;
        do {
          uVar9 = uVar7 + 1;
          if ((uVar9 == uVar13) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa1ba8);
            (*pcVar1)();
          }
          uVar7 = 0;
          if (uVar9 != uVar13) {
            uVar7 = uVar9;
          }
          bVar2 = (bool)(uVar9 == uVar13 | bVar2);
        } while (*(ulong *)(puVar15 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
        uVar13 = ~*(ulong *)(puVar15 + uVar7 * 8 + 0x40);
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar7 << 6;
      }
      else {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar13 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar15 + uVar7 + 0x40) =
           1L << (uVar13 & 0x3f) | *(ulong *)(puVar15 + uVar7 + 0x40);
      *(undefined8 *)(*(long *)(puVar15 + 0x30) + uVar13 * 8) = uVar3;
      func_0x000100102924(auStack_d0,*(long *)(puVar15 + 0x38) + uVar13 * 0x20);
      *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
    }
    bVar2 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa1ba4);
      (*pcVar1)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar11) break;
    uVar16 = ((ulong *)(param_1 + 0x40))[lVar11];
  }
  func_0x000107c61574(param_1);
  return puVar15;
}



/* Entry: 101aa1ba8; end: 101aa20db;  */

void FUN_101aa1ba8(double param_1,double param_2,long param_3,long param_4,ulong param_5,
                  long param_6,undefined8 param_7,double *param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double adStack_e0 [4];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar2 = 0;
  uStack_b0 = param_9;
  uStack_a8 = param_10;
  func_0x000107c5f064();
  lStack_c0 = *(long *)(lVar2 + -8);
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_c0 + lVar2;
  lVar3 = param_3;
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  func_0x000101aa144c();
  dVar16 = param_1;
  func_0x000101aa14b4();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
  uVar14 = 0;
  func_0x000107c495c4(0,dVar16);
  func_0x000101aa1480();
  puVar5 = puVar4;
  func_0x000107c3ab24(puVar4);
  func_0x000107c61180();
  func_0x000107c60928(param_1,param_2,uVar14,lVar3,puVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  lVar3 = param_3;
  func_0x000107c3ab28();
  func_0x000107c61180();
  func_0x000107c608d4();
  func_0x000107c61170();
  if ((param_5 - 1 & 0xfffffffffffffffd) != 0) {
    if (param_6 == 1) {
      FUN_101aa3524();
    }
    else {
      func_0x000101aa35c0();
    }
    if (lVar3 != 0) {
      param_1 = param_8[0xb];
      param_2 = param_8[0xc];
      func_0x000107c422bc(param_1,param_2,param_8[0xd],param_8[0xe]);
      func_0x000107c61170();
    }
  }
  if (1 < param_5) {
    if (param_5 != 3) goto LAB_101aa208c;
    func_0x000101aa3638();
    if (lVar3 == 0) goto LAB_101aa1e0c;
    func_0x000107c5b078();
    func_0x000107c5b078(lVar3);
    param_2 = param_2 / param_1;
    dVar16 = *param_8 * 0.25;
    dVar17 = dVar16 * param_2;
    func_0x000101aa1558();
    if (param_2 == 1.0) {
      if (param_8[6] != 0.0) goto LAB_101aa1d88;
LAB_101aa1dc0:
      dVar18 = param_8[0x1b];
      dVar19 = param_8[0x1c];
      dVar21 = param_8[0x1d];
      dVar23 = param_8[0x1e];
      dVar15 = dVar18 + -8.0;
    }
    else {
      dVar16 = dVar16 * *(double *)(param_4 + 0x150);
      dVar17 = dVar17 * *(double *)(param_4 + 0x150);
      if (param_8[6] == 0.0) goto LAB_101aa1dc0;
LAB_101aa1d88:
      dVar18 = param_8[0x17];
      dVar19 = param_8[0x18];
      dVar21 = param_8[0x19];
      dVar23 = param_8[0x1a];
      dVar15 = param_8[0x1b];
      func_0x000107c609b4(dVar15,param_8[0x1c],param_8[0x1d],param_8[0x1e]);
      dVar15 = (dVar15 - dVar16) + 8.0;
    }
    func_0x000107c609b8(dVar18,dVar19,dVar21,dVar23);
    func_0x000107c422bc(dVar15,(dVar18 - dVar17) + 8.0,dVar16,dVar17,lVar3);
    func_0x000107c61170(lVar3);
  }
LAB_101aa1e0c:
  uVar6 = *(undefined8 *)(param_4 + 0x20);
  dVar21 = param_8[2];
  dVar23 = param_8[3];
  dVar15 = param_8[4];
  dVar16 = param_8[5];
  FUN_101aa2d5c(dVar21,uVar6,dVar16);
  puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8();
  uVar14 = uStack_b0;
  func_0x000107c5fadc(uStack_b0,uStack_a8);
  uVar7 = 0;
  func_0x000100eca28c(0);
  uVar8 = uVar7;
  func_0x000100ecbdec();
  uVar9 = uVar6;
  func_0x000107c5f9dc(uVar6,uVar7,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c6142c(uVar6);
  func_0x000107c48af8();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  lVar3 = param_3;
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  func_0x000107c60930();
  func_0x000107c61170(lVar3);
  lVar3 = param_3;
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  dVar22 = param_8[0xf];
  dVar24 = param_8[0x10];
  dVar25 = param_8[0x11];
  dVar26 = param_8[0x12];
  dVar17 = param_8[0x13];
  dVar18 = param_8[0x14];
  dVar19 = param_8[0x15];
  dVar20 = param_8[0x16];
  *(double *)((long)adStack_e0 + lVar2 + 8) = dVar23;
  *(double *)((long)adStack_e0 + lVar2 + 0x10) = dVar15;
  *(double *)((long)adStack_e0 + lVar2) = dVar21;
  puVar5 = puVar4;
  FUN_101aa20dc(dVar22,dVar24,dVar25,dVar26,dVar17,dVar18,dVar19,dVar20,puVar4,dVar16);
  puVar10 = puVar5;
  func_0x000107c3ab2c();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c3fde0(0x3fc3333333333333);
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c61170(puVar10);
    }
    else {
      func_0x000107c60904(lVar3);
      func_0x000107c608e0(dVar22,dVar24,dVar25,dVar26,lVar3,puVar10);
      puVar12 = puVar11;
      func_0x000107c3ab24(puVar11);
      func_0x000107c61180();
      func_0x000107c60910(lVar3,puVar12);
      func_0x000107c61170(puVar12);
      func_0x000107c608d0(lVar3);
      func_0x000107c608cc(dVar22,dVar24,dVar25,dVar26,lVar3);
      lVar1 = lStack_b8;
      lVar2 = lStack_c0;
      (**(code **)(lStack_c0 + 0x68))
                (lVar13,*(undefined4 *)
                         PTR___s12CoreGraphics14CGPathFillRuleO7windingyA2CmFWC_110351390,lStack_b8)
      ;
      func_0x000107c5ff44(lVar13);
      (**(code **)(lVar2 + 8))(lVar13,lVar1);
      func_0x000107c608f8(lVar3);
      func_0x000107c608fc(lVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar10);
      puVar5 = puVar11;
    }
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c422d4(dVar17,dVar18,dVar19,dVar20,puVar4);
  func_0x000107c61170(puVar4);
LAB_101aa208c:
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  func_0x000107c608e8();
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101aa20dc; end: 101aa22cf;  */

undefined *
FUN_101aa20dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x000107c453e4();
  func_0x000107c58bfc(0x3ff0000000000000);
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c486fc(param_3,param_4);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_110439618;
  func_0x000107c613fc(&UNK_110439618,0x78,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  *(undefined8 *)(puVar2 + 0x48) = param_8;
  *(undefined8 *)(puVar2 + 0x50) = param_9;
  *(undefined8 *)(puVar2 + 0x60) = in_stack_00000008;
  *(undefined8 *)(puVar2 + 0x58) = in_stack_00000000;
  *(undefined8 *)(puVar2 + 0x68) = in_stack_00000010;
  *(undefined8 *)(puVar2 + 0x70) = param_10;
  puVar4 = &UNK_110439640;
  func_0x000107c613fc(&UNK_110439640,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101aa308c;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  pcStack_90 = FUN_101aa30d0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100f9148c;
  puStack_98 = &UNK_110439658;
  ppuVar5 = &puStack_b0;
  puStack_88 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_88;
  func_0x000107c61174(param_9);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = puVar3;
  func_0x000107c45138(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",99,0xd3,99,1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa22d0);
  (*pcVar1)();
}



/* Entry: 101aa22d0; end: 101aa24fb;  */

/* WARNING: Possible PIC construction at 0x000101aa2334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa2358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa237c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa23a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa23cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa2468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa2494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa24b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa2498) */
/* WARNING: Removing unreachable block (ram,0x000101aa246c) */
/* WARNING: Removing unreachable block (ram,0x000101aa23d0) */
/* WARNING: Removing unreachable block (ram,0x000101aa23a8) */
/* WARNING: Removing unreachable block (ram,0x000101aa2380) */
/* WARNING: Removing unreachable block (ram,0x000101aa235c) */
/* WARNING: Removing unreachable block (ram,0x000101aa2338) */
/* WARNING: Removing unreachable block (ram,0x000101aa24b8) */

void FUN_101aa22d0(undefined8 param_1)

{
  func_0x000107c3ab28();
  func_0x000107c61180();
  func_0x000107c60920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101aa24fc; end: 101aa255f;  */

void FUN_101aa24fc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  func_0x000100102924(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101aa2560);
  (*pcVar2)();
}



/* Entry: 101aa2560; end: 101aa272b;  */

void FUN_101aa2560(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100ecbb30();
  func_0x000107c6142c(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101aa272c();
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 8));
    func_0x000100102924(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    func_0x000101aa2b88(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 101aa272c; end: 101aa2d5b;  */

void FUN_101aa272c(void)

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
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001000285a8(0x112d48640,&UNK_10d910200);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_101aa2810;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar9;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        func_0x000107c61174(uVar9);
        if (uVar5 != 0) break;
LAB_101aa2810:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101aa28b0);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101aa2880;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101aa2880:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101aa2d5c; end: 101aa308b;  */

undefined * FUN_101aa2d5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *apuStack_98 [3];
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126c4e78;
  func_0x000107c61168();
  func_0x000107c3e38c();
  func_0x000107c61180();
  puVar6 = PTR___sypN_11034f1a8;
  puVar2 = puVar1;
  puVar5 = PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9e8();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  FUN_101aa189c();
  func_0x000107c6142c(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100ecbca8();
  }
  puStack_58 = puVar1;
  if (*(long *)(puVar1 + 0x10) != 0) {
    lVar8 = *(long *)PTR__NSFontAttributeName_1103457f0;
    func_0x000107c61434(puVar1);
    lVar3 = lVar8;
    func_0x000100ecbb30(lVar8);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c6142c(puVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(puVar1 + 0x38) + lVar3 * 0x20,auStack_78);
      func_0x000107c6142c(puVar1);
      lVar3 = 0;
      FUN_101aa30f4(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
      ppuVar4 = apuStack_98;
      func_0x000107c6147c(ppuVar4,auStack_78,puVar6 + 8,lVar3,6);
      puVar6 = apuStack_98[0];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000107c61174(lVar8);
        func_0x000107c43778(apuStack_98[0]);
        puVar2 = apuStack_98[0];
        func_0x000107c61180();
        puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x000107c61168();
        func_0x000107c43790(param_1);
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        apuStack_98[0] = puVar5;
        lStack_80 = lVar3;
        if (lVar3 == 0) {
          func_0x000101aa3134(apuStack_98,0x112d387f8,&UNK_10d902650);
          func_0x000101aa2560(auStack_78,lVar8);
          func_0x000107c61170(lVar8);
          func_0x000101aa3134(auStack_78,0x112d387f8,&UNK_10d902650);
          func_0x000107c61170(puVar6);
        }
        else {
          func_0x000100102924(apuStack_98,auStack_78);
          puVar2 = puVar1;
          func_0x000107c61558(puVar1);
          apuStack_98[0] = puVar1;
          func_0x000101aa2624(auStack_78,lVar8,puVar2);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(lVar8);
          puStack_58 = apuStack_98[0];
        }
      }
    }
  }
  uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174(uVar7);
  func_0x000107c5af88();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_101aa30f4(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  apuStack_98[0] = puVar6;
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    func_0x000101aa3134(apuStack_98,0x112d387f8,&UNK_10d902650);
    func_0x000101aa2560(auStack_78,uVar7);
    func_0x000107c61170(uVar7);
    func_0x000101aa3134(auStack_78,0x112d387f8,&UNK_10d902650);
    apuStack_98[0] = puStack_58;
  }
  else {
    func_0x000100102924(apuStack_98,auStack_78);
    puVar6 = puStack_58;
    puVar1 = puStack_58;
    func_0x000107c61558(puStack_58);
    apuStack_98[0] = puVar6;
    func_0x000101aa2624(auStack_78,uVar7,puVar1);
    func_0x000107c61170(uVar7);
  }
  return apuStack_98[0];
}



/* Entry: 101aa308c; end: 101aa30cf;  */

void FUN_101aa308c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101aa22d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),param_1,
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101aa30d0; end: 101aa30f3;  */

void FUN_101aa30d0(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101aa30f4; end: 101aa3243;  */

void FUN_101aa30f4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101aa3244; end: 101aa3397;  */

undefined8 * FUN_101aa3244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  uVar1 = param_1[0x1f];
  param_1[0x1f] = param_2[0x1f];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[0x20];
  param_1[0x20] = param_2[0x20];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101aa3398; end: 101aa344b;  */

undefined8 * FUN_101aa3398(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar1;
  uVar1 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar1;
  uVar1 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar1;
  func_0x000107c61574(param_1[0x1f]);
  uVar1 = param_1[0x20];
  uVar2 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101aa344c; end: 101aa3523;  */

int FUN_101aa344c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x42] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x3e);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101aa3524; end: 101aa369b;  */

undefined * FUN_101aa3524(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined **)(unaff_x20 + 0x18);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x1) {
    uVar1 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010efcf5f0);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c450cc();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000100f01e18(uVar1);
  }
  func_0x000100f01e38(puVar3);
  return puVar2;
}



/* Entry: 101aa369c; end: 101aa36bb;  */

void FUN_101aa369c(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 101aa36bc; end: 101aa3797;  */

undefined * FUN_101aa36bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined *puVar3;
  
  func_0x000107c614e8(*unaff_x20);
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c3ee00();
  func_0x000107c61180();
  func_0x000107c5fadc(param_1,param_2);
  uVar1 = 0x676e70;
  func_0x000107c5fadc(0x676e70,0xe300000000000000);
  puVar2 = puVar3;
  func_0x000107c4e444();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c46110();
    func_0x000107c61170(puVar2);
  }
  return puVar3;
}



/* Entry: 101aa3798; end: 101aa37eb;  */

void FUN_101aa3798(void)

{
  long unaff_x20;
  
  func_0x000100f01e18(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100f01e18(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100f01e18(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa37ec; end: 101aa385b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101aa37ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112df5ca0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112df5ca0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000101aa37cc();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 1;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = 1;
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c();
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 101aa385c; end: 101aa388f; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl watermarkingConfig] */

void FUN_101aa385c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101aa3890();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aa3890; end: 101aa393f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa3890(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112df5ca8) + 1) == '\x01') {
    func_0x000101aa14e8();
    uVar3 = param_1;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112df5ca8);
  }
  func_0x000101aa1520();
  puVar2 = PTR_PTR_1126a87d8;
  func_0x000107c610f8();
  func_0x000107c47ad4(0x3fc851eb851eb852,0x3fe3d70a3d70a3d7,0x3fe999999999999a,0x3fcd70a3d70a3d71,
                      uVar3,param_1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa3940);
  (*pcVar1)();
}



/* Entry: 101aa3940; end: 101aa3957; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl overrideWatermarkStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa3940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112df5cb0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 101aa3958; end: 101aa3ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101aa3958(undefined8 *******param_1,undefined8 *******param_2,undefined8 param_3,
             undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 *******param_7,
             undefined8 *******param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *******pppppppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 ******ppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  
  pppppppuVar3 = param_1;
  pppppppuVar7 = param_2;
  if (param_7 != (undefined8 *******)0x1) {
    if (param_7 == (undefined8 *******)0x0) {
      FUN_101aa12cc();
      pppppppuVar3 = param_8;
      if (((ulong)param_8 & 1) != 0) {
        pppppppuVar3 = pppppppuVar7;
        FUN_101aa11c4();
        ppppppuStack_80 = param_1;
        ppppppuStack_78 = param_2;
        ppppppuStack_70 = param_8;
        ppppppuStack_68 = pppppppuVar3;
        func_0x000100e8b654();
        pppppppuVar7 = (undefined8 *******)PTR___sSSN_11034da80;
        func_0x000107c6022c(&ppppppuStack_80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_8,
                            param_8);
        func_0x000107c6142c(pppppppuVar3);
      }
    }
    else {
      ppppppuStack_70 = (undefined8 *******)0x0;
      ppppppuStack_68 = (undefined8 *******)0xe000000000000000;
      func_0x000107c602fc(0x28);
      func_0x000107c5fb78(0xd000000000000026,0x800000010efcf660);
      uVar2 = 0;
      ppppppuStack_80 = param_7;
      func_0x000101aa0c70(0);
      pppppppuVar7 = &ppppppuStack_70;
      func_0x000107c603d0(&ppppppuStack_80,pppppppuVar7,uVar2,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      pppppppuVar3 = (undefined8 *******)ppppppuStack_68;
      func_0x000107c6142c(ppppppuStack_68);
    }
  }
  FUN_101aa77dc();
  lVar4 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
  lVar5 = lVar4;
  func_0x00010075bbf0();
  *(long *)(lVar4 + 0x40) = lVar5;
  *(undefined8 *)(lVar4 + 0x20) = param_3;
  *(undefined8 *)(lVar4 + 0x28) = param_4;
  func_0x000107c61434(param_4);
  pppppppuVar8 = pppppppuVar7;
  func_0x000107c5fb00(pppppppuVar3,pppppppuVar7,lVar4);
  func_0x000107c6142c(pppppppuVar7);
  puVar6 = PTR_PTR_1126b2488;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5fadc(pppppppuVar3,pppppppuVar8);
  func_0x000107c6142c(pppppppuVar8);
  func_0x000107c486b8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(pppppppuVar3);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa3bfc);
    (*pcVar1)();
  }
  return puVar6;
}



/* Entry: 101aa3ea8; end: 101aa3f7f; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl lensWatermarkProfileForLensId:lensName:lensAuthorId:attribution:shareDestination:] */

void FUN_101aa3ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_101aa3958(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101aa3f80; end: 101aa4117;  */

/* WARNING: Removing unreachable block (ram,0x000101aa40fc) */

undefined8 FUN_101aa3f80(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  func_0x000107c5ed50();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa40f8);
    (*pcVar1)();
  }
  lVar3 = unaff_x20;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa40fc);
    (*pcVar1)();
  }
  func_0x000107c600f4(puVar6);
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_90,lVar2,unaff_x20);
  do {
    if (lStack_78 == 0) {
      func_0x000107c61170(lVar3);
      (**(code **)(lVar7 + 8))(puVar6,lVar2);
      uVar5 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
LAB_101aa40cc:
      func_0x00010006e7f4(&uStack_70);
      return uVar5;
    }
    func_0x000100102924(auStack_90,auStack_b0);
    uVar4 = 0;
    FUN_101aa60b4();
    if ((uVar4 & 1) != 0) {
      func_0x000107c61170(lVar3);
      (**(code **)(lVar7 + 8))(puVar6,lVar2);
      func_0x000100102924(auStack_b0,&uStack_70);
      uVar5 = 1;
      goto LAB_101aa40cc;
    }
    func_0x000100183ab8(auStack_b0);
    func_0x000107c601c0(auStack_90,lVar2,unaff_x20);
  } while( true );
}



/* Entry: 101aa4118; end: 101aa445b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa4118(code *******param_1,code *******param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,uint param_10)

{
  code *pcVar1;
  code *******pppppppcVar2;
  undefined8 uVar3;
  code *******pppppppcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *******pppppppcVar8;
  code *******pppppppcVar9;
  ulong uVar10;
  code *******pppppppcVar11;
  code *******pppppppcVar12;
  long lStack_80;
  undefined8 uStack_78;
  code *******pppppppcStack_70;
  code *******pppppppcStack_68;
  
  if (param_1 != (code *******)0x0) {
    pppppppcVar8 = param_2;
    func_0x000107c61174();
    pppppppcVar2 = param_1;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (pppppppcVar2 != (code *******)0x0) {
      pppppppcVar11 = pppppppcVar2;
      func_0x000107c5faec();
      pppppppcVar12 = param_1;
      pppppppcVar4 = pppppppcVar8;
      func_0x000107c49e84();
      uVar10 = (ulong)pppppppcVar12 & 0xffffffff;
      if (param_9 == 0) {
        pppppppcVar12 = (code *******)(ulong)param_10;
        FUN_101aa12cc();
        if (((ulong)pppppppcVar12 & 1) != 0) {
          FUN_101aa11c4();
          lStack_80 = param_5;
          uStack_78 = param_6;
          pppppppcStack_70 = pppppppcVar12;
          pppppppcStack_68 = pppppppcVar4;
          func_0x000100e8b654();
          pppppppcVar9 = (code *******)PTR___sSSN_11034da80;
          func_0x000107c6022c(&lStack_80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppppcVar12,
                              pppppppcVar12);
          func_0x000107c6142c(pppppppcVar4);
          pppppppcVar12 = pppppppcVar4;
          pppppppcVar4 = pppppppcVar9;
        }
      }
      else if (param_9 != 1) {
        pppppppcStack_70 = (code *******)0x0;
        pppppppcStack_68 = (code *******)0xe000000000000000;
        func_0x000107c602fc(0x28);
        func_0x000107c5fb78(0xd000000000000026,0x800000010efcf660);
        lStack_80 = param_9;
        uVar3 = 0;
        func_0x000101aa0c70(0);
        pppppppcVar4 = (code *******)&pppppppcStack_70;
        func_0x000107c603d0(&lStack_80,pppppppcVar4,uVar3,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        pppppppcVar12 = pppppppcStack_68;
        func_0x000107c6142c(pppppppcStack_68);
      }
      if (uVar10 == 0) {
        FUN_101aa77dc();
        lVar5 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar5 + 0x18) = 2;
        *(undefined8 *)(lVar5 + 0x10) = 1;
        *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
        lVar6 = lVar5;
        func_0x00010075bbf0();
        *(long *)(lVar5 + 0x40) = lVar6;
        *(code ********)(lVar5 + 0x20) = pppppppcVar11;
        *(code ********)(lVar5 + 0x28) = pppppppcVar8;
        func_0x000107c61434(pppppppcVar8);
        pppppppcVar11 = pppppppcVar4;
        func_0x000107c5fb00(pppppppcVar12,pppppppcVar4,lVar5);
        func_0x000107c6142c(pppppppcVar4);
      }
      else {
        pppppppcVar12 = (code *******)0x0;
        pppppppcVar11 = (code *******)0xe000000000000000;
      }
      puVar7 = PTR_PTR_1126b2488;
      func_0x000107c610f8();
      func_0x000107c5fadc(param_5,param_6);
      func_0x000107c5fadc(param_7,param_8);
      func_0x000107c5fadc(pppppppcVar12,pppppppcVar11);
      func_0x000107c6142c(pppppppcVar11);
      func_0x000107c486b8();
      func_0x000107c61170(param_5);
      func_0x000107c61170(pppppppcVar2);
      func_0x000107c61170(param_7);
      func_0x000107c61170(pppppppcVar12);
      if (puVar7 != (undefined *)0x0) {
        func_0x000107c6142c(pppppppcVar8);
        (*(code *)param_2)(puVar7);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar7);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa445c);
      (*pcVar1)();
    }
    func_0x000107c61170(param_1);
  }
  (*(code *)param_2)(0);
  return;
}



/* Entry: 101aa445c; end: 101aa4553; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl lensWatermarkProfileAsyncForLensId:lensAuthorId:snapDoc:attribution:shareDestination:completion:] */

/* WARNING: Possible PIC construction at 0x000101aa452c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa4530) */

void FUN_101aa445c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c60bc4(param_8);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101aa6360(param_3,param_2,param_4,uVar2,param_5,param_6,param_7,param_1,param_8);
  func_0x000107c60bd0(param_8);
  func_0x000107c60bd0(param_8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101aa4554; end: 101aa463b; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl lensWatermarkProfileForLensId:lensName:lensAuthorId:attribution:shareDestination:type:] */

void FUN_101aa4554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  func_0x000101aa3bfc(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7,param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101aa463c; end: 101aa46bf; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl chatWatermarkProfileForMessageSenderId:contentType:shareDestination:isGenAISnap:] */

void FUN_101aa463c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101aa6800(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101aa46c0; end: 101aa4773; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl generateWatermarkedImage:text:layout:completion:] */

void FUN_101aa46c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c60bc4(param_6);
  func_0x000107c5faec(param_4);
  func_0x000107c60bc4(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101aa68bc(param_3,param_4,param_2,param_5,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101aa4774; end: 101aa4a5b;  */

/* WARNING: Possible PIC construction at 0x000101aa48c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa4908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa494c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa4960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa49d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa4a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa4a30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa49d4) */
/* WARNING: Removing unreachable block (ram,0x000101aa4964) */
/* WARNING: Removing unreachable block (ram,0x000101aa4950) */
/* WARNING: Removing unreachable block (ram,0x000101aa490c) */
/* WARNING: Removing unreachable block (ram,0x000101aa48cc) */
/* WARNING: Removing unreachable block (ram,0x000101aa4a34) */
/* WARNING: Removing unreachable block (ram,0x000101aa47c8) */
/* WARNING: Removing unreachable block (ram,0x000101aa4914) */
/* WARNING: Removing unreachable block (ram,0x000101aa4850) */

void FUN_101aa4774(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,code *param_8)

{
  uint uVar1;
  long lVar2;
  
  FUN_101aa4a5c(param_2,param_3,param_4,param_5,param_6);
  lVar2 = *param_7;
  if (lVar2 == 0) {
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c5c3c8();
    func_0x000107c61180();
    (*param_8)();
  }
  else {
    param_2 = param_7[2];
    uVar1 = *(uint *)(param_7 + 1);
    func_0x000107c5fadc(param_2,param_7[3]);
    func_0x0001056dbaec(lVar2,uVar1 & 1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101aa4a5c; end: 101aa52df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101aa4a5c(undefined *param_1,double param_2,long param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dStack_300;
  undefined1 auStack_2e8 [264];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  double dStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  double dStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  lVar4 = param_3;
  FUN_101aa37ec();
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112df5c88);
  func_0x000107c6157c(uVar13);
  func_0x000107c5b078(param_4);
  uVar12 = param_4;
  puVar5 = param_1;
  func_0x000107c5b078();
  dVar10 = 126.0;
  if ((double)puVar5 < 1008.0) {
    dVar10 = 96.0;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_112df5cb0);
  if ((char)puVar1[1] == '\x01') {
    FUN_101aa1414();
    uVar15 = uVar12;
  }
  else {
    uVar15 = *puVar1;
  }
  if (param_3 == 2) {
    bVar3 = (uVar15 - 1 & 0xfffffffffffffffd) == 0;
    uVar14 = 2;
  }
  else {
    bVar3 = param_3 == 1 && (uVar15 - 1 & 0xfffffffffffffffd) == 0;
    uVar14 = 0;
    if (param_3 == 1) {
      uVar14 = 2;
    }
  }
  dVar34 = (double)param_1 * 0.33;
  dVar11 = 1008.0;
  if ((double)param_1 <= 1008.0) {
    func_0x000101aa1064();
    dStack_300 = dVar11;
    func_0x000101aa0fc8();
    dVar16 = dStack_300;
    func_0x000101aa1098();
    dVar17 = dVar16;
    func_0x000101aa10cc();
  }
  else {
    func_0x000101aa0f94();
    dStack_300 = dVar11;
    func_0x000101aa0fc8();
    dVar16 = dStack_300;
    func_0x000101aa0ffc();
    dVar17 = dVar16;
    func_0x000101aa1030();
  }
  dVar21 = dVar11 * 4.0;
  dVar24 = param_2 - dVar34;
  dVar30 = ((double)param_1 - dVar10) - dVar16;
  dVar32 = (double)param_1 - dVar34;
  dVar33 = dVar32 - dVar16;
  dVar35 = dVar32;
  if (uVar15 != 3) {
    dVar35 = ((double)param_1 - dVar10) + -10.0;
  }
  dVar31 = dVar24;
  dVar19 = dVar30;
  dVar39 = dVar34 + dVar16;
  dVar38 = dVar21;
  dVar37 = dVar34;
  dVar36 = dVar33;
  if (3 < uVar15 || uVar15 == 2) {
    dVar36 = 0.0;
    dVar24 = 0.0;
    dVar37 = 0.0;
    dVar38 = 0.0;
    dVar39 = 0.0;
    dVar31 = param_2;
    dVar19 = dVar35;
  }
  dVar35 = (param_2 + param_2 * -0.3) - dVar21;
  if (uVar15 != 3) {
    dVar32 = dVar30;
  }
  dVar25 = dVar35;
  dVar30 = dVar16;
  if (param_3 == 1) {
    dVar25 = param_2 * 0.15 + dVar10 + dVar17;
    dVar30 = dVar33;
  }
  dVar18 = (dVar35 - dVar17) - dVar10;
  dVar35 = dVar16;
  dVar20 = 0.0;
  if (param_3 == 1) {
    dVar18 = param_2 * 0.15;
    dVar35 = dVar32;
    dVar20 = dVar33;
  }
  dVar32 = (dVar31 - dVar17) - dVar10;
  dVar17 = dVar36;
  if (param_3 != 2) {
    dVar32 = dVar18;
    dVar19 = dVar35;
    dVar39 = dVar34 + dVar16;
    dVar36 = dVar20;
    dVar38 = dVar21;
    dVar37 = dVar34;
    dVar24 = dVar25;
    dVar17 = dVar30;
  }
  dVar34 = dVar36;
  dVar35 = dVar16;
  if ((uVar15 - 1 & 0xfffffffffffffffd) != 0) {
    dVar34 = dVar19;
    func_0x000107c609b4(dVar19,dVar32,dVar10,dVar10);
    dVar34 = dVar34 + 0.0;
    dVar35 = 10.0;
  }
  dVar30 = dVar19;
  func_0x000107c609c8(dVar19,dVar32,dVar10,dVar10);
  dVar21 = (double)param_1 - dVar34;
  dVar33 = dVar35 + dVar34;
  if (bVar3) {
    dVar33 = dVar34;
  }
  dVar35 = dVar21 - dVar35;
  bVar3 = uVar15 != 3;
  dVar25 = dVar10 + -14.0;
  dVar31 = dVar30 + 14.0;
  if (bVar3) {
    dVar34 = 0.0;
    dVar31 = 0.0;
    dVar21 = 0.0;
    dVar25 = 0.0;
  }
  dVar20 = 0.0;
  if (!bVar3) {
    dVar20 = dVar33;
  }
  dVar33 = 0.0;
  if (!bVar3) {
    dVar33 = dVar30 + 14.0;
  }
  dVar30 = 0.0;
  if (!bVar3) {
    dVar30 = dVar35;
  }
  dVar35 = 0.0;
  if (!bVar3) {
    dVar35 = dVar10 + -14.0;
  }
  dVar18 = dVar19;
  dVar22 = dVar32;
  dVar26 = dVar10;
  dVar27 = dVar10;
  func_0x000107c609f4();
  func_0x000107c609d0();
  dVar28 = dVar10;
  func_0x000107c609ec();
  dVar23 = dVar24;
  dVar29 = dVar38;
  func_0x000107c609ec();
  func_0x000107c609ec();
  func_0x000107c609ec();
  func_0x000107c609ec();
  if ((char)puVar1[1] == '\x01') {
    FUN_101aa1414();
  }
  else {
    uVar12 = *puVar1;
  }
  puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x000107c6157c(uVar13);
  func_0x000107c453e4(puVar5);
  func_0x000107c58bfc(0x3ff0000000000000);
  puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8();
  func_0x000107c486fc(dVar26,dVar27);
  func_0x000107c61170(puVar5);
  puVar5 = &UNK_110439808;
  func_0x000107c613fc(&UNK_110439808,0x138,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar13;
  *(ulong *)(puVar5 + 0x18) = uVar12;
  *(undefined8 *)(puVar5 + 0x20) = param_7;
  *(long *)(puVar5 + 0x28) = lVar4;
  *(undefined **)(puVar5 + 0x30) = param_1;
  *(double *)(puVar5 + 0x38) = param_2;
  *(double *)(puVar5 + 0x40) = dVar11;
  *(double *)(puVar5 + 0x48) = dStack_300;
  *(double *)(puVar5 + 0x50) = dVar16;
  *(undefined8 *)(puVar5 + 0x58) = uVar14;
  *(undefined8 *)(puVar5 + 0x60) = uVar14;
  *(double *)(puVar5 + 0x68) = dVar18;
  *(double *)(puVar5 + 0x70) = dVar22;
  *(double *)(puVar5 + 0x78) = dVar26;
  *(double *)(puVar5 + 0x80) = dVar27;
  *(double *)(puVar5 + 0x88) = dVar19;
  *(double *)(puVar5 + 0x90) = dVar32;
  *(double *)(puVar5 + 0x98) = dVar10;
  *(double *)(puVar5 + 0xa0) = dVar28;
  *(double *)(puVar5 + 0xa8) = dVar36;
  *(double *)(puVar5 + 0xb0) = dVar23;
  *(double *)(puVar5 + 0xb8) = dVar39;
  *(double *)(puVar5 + 0xc0) = dVar29;
  *(double *)(puVar5 + 200) = dVar17;
  *(double *)(puVar5 + 0xd0) = dVar24;
  *(double *)(puVar5 + 0xd8) = dVar37;
  *(double *)(puVar5 + 0xe0) = dVar38;
  *(double *)(puVar5 + 0xe8) = dVar34;
  *(double *)(puVar5 + 0xf0) = dVar31;
  *(double *)(puVar5 + 0xf8) = dVar21;
  *(double *)(puVar5 + 0x100) = dVar25;
  *(double *)(puVar5 + 0x108) = dVar20;
  *(double *)(puVar5 + 0x110) = dVar33;
  *(double *)(puVar5 + 0x118) = dVar30;
  *(double *)(puVar5 + 0x120) = dVar35;
  *(undefined8 *)(puVar5 + 0x128) = param_5;
  *(undefined8 *)(puVar5 + 0x130) = param_6;
  puVar7 = &UNK_110439830;
  func_0x000107c613fc(&UNK_110439830,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x101aa71e4;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  dStack_190 = 2.13580368072111e-314;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  dStack_1a8 = 5.47077039858234e-315;
  puStack_1a0 = &UNK_100f9148c;
  puStack_198 = &UNK_110439848;
  ppuVar8 = &puStack_1b0;
  puStack_188 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_188;
  func_0x000107c6157c(lVar4);
  func_0x000107c61434(param_6);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = puVar6;
  func_0x000107c45138();
  func_0x000107c61180();
  func_0x000107c61574(lVar4);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar6);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",99,0x4a,0x6b,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) == 0) {
    puStack_198 = (undefined *)dStack_300;
    puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    puStack_1b0 = param_1;
    dStack_1a8 = param_2;
    puStack_1a0 = (undefined *)dVar11;
    dStack_190 = dVar16;
    puStack_188 = (undefined *)uVar14;
    uStack_180 = uVar14;
    dStack_178 = dVar18;
    dStack_170 = dVar22;
    dStack_168 = dVar26;
    dStack_160 = dVar27;
    dStack_158 = dVar19;
    dStack_150 = dVar32;
    dStack_148 = dVar10;
    dStack_140 = dVar28;
    dStack_138 = dVar36;
    dStack_130 = dVar23;
    dStack_128 = dVar39;
    dStack_120 = dVar29;
    dStack_118 = dVar17;
    dStack_110 = dVar24;
    dStack_108 = dVar37;
    dStack_100 = dVar38;
    dStack_f8 = dVar34;
    dStack_f0 = dVar31;
    dStack_e8 = dVar21;
    dStack_e0 = dVar25;
    dStack_d8 = dVar20;
    dStack_d0 = dVar33;
    dStack_c8 = dVar30;
    dStack_c0 = dVar35;
    uStack_b8 = uVar13;
    puStack_b0 = puVar9;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x000107c453e4();
    func_0x000107c58bfc(0x3ff0000000000000);
    puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486fc(param_1,param_2);
    func_0x000107c61170(puVar5);
    puVar5 = &UNK_110439880;
    func_0x000107c613fc(&UNK_110439880,0x120,7);
    *(ulong *)(puVar5 + 0x10) = param_4;
    func_0x000107c610b4(puVar5 + 0x18,&puStack_1b0,0x108);
    puVar7 = &UNK_1104398a8;
    func_0x000107c613fc(&UNK_1104398a8,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_101aa6f68;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    uStack_1c0 = 0x101aa71dc;
    puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d8 = 0x42000000;
    puStack_1d0 = &UNK_100f9148c;
    puStack_1c8 = &UNK_1104398c0;
    ppuVar8 = &puStack_1e0;
    puStack_1b8 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar9 = puStack_1b8;
    func_0x000107c61174(param_4);
    FUN_101aa6fb8(&puStack_1b0,auStack_2e8);
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar9);
    puVar9 = puVar6;
    func_0x000107c45138(puVar6);
    func_0x000107c61180();
    FUN_101aa632c(&puStack_1b0);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar6);
    puVar6 = puVar7;
    func_0x000107c61544(puVar7,"",0x6a,0x155,0x78,1);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar6 & 1) == 0) {
      return puVar9;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101aa52e0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101aa52dc);
  (*pcVar2)();
}



/* Entry: 101aa52e0; end: 101aa53a3; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl generateWatermarkedImage:text:layout:type:completion:] */

void FUN_101aa52e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c60bc4(param_7);
  func_0x000107c5faec(param_4);
  func_0x000107c60bc4(param_7);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101aa6bb8(param_3,param_4,param_2,param_5,param_6,param_1,param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101aa53a4; end: 101aa5a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101aa53a4(undefined *param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_1b8;
  undefined *puStack_1b0;
  double dStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  
  lVar4 = param_3;
  FUN_101aa37ec();
  uVar12 = *(ulong *)(unaff_x20 + _DAT_112df5c88);
  dVar16 = 96.0;
  dVar10 = 126.0;
  if ((double)param_1 < 1008.0) {
    dVar10 = 96.0;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_112df5cb0);
  uVar14 = uVar12;
  if ((char)puVar1[1] == '\x01') {
    func_0x000107c6157c();
    FUN_101aa1414();
    uVar13 = uVar14;
  }
  else {
    uVar13 = *puVar1;
    func_0x000107c6157c();
  }
  FUN_101aa0f5c();
  dVar16 = (double)param_1 * dVar16;
  if ((param_3 == 2) || (param_3 == 1)) {
    bVar3 = (uVar13 - 1 & 0xfffffffffffffffd) == 0;
    uVar15 = 2;
  }
  else {
    bVar3 = false;
    uVar15 = 0;
  }
  dVar31 = *(double *)(uVar12 + 0x140);
  dVar11 = 1008.0;
  if ((double)param_1 <= 1008.0) {
    func_0x000101aa1064();
    dStack_1b8 = dVar11;
    func_0x000101aa0fc8();
    dVar17 = dStack_1b8;
    func_0x000101aa1098();
    dVar30 = dVar17;
    func_0x000101aa10cc();
  }
  else {
    func_0x000101aa0f94();
    dStack_1b8 = dVar11;
    func_0x000101aa0fc8();
    dVar17 = dStack_1b8;
    func_0x000101aa0ffc();
    dVar30 = dVar17;
    func_0x000101aa1030();
  }
  dVar31 = (double)param_1 * dVar31;
  dVar36 = (double)param_1 * 0.33;
  dVar11 = (dVar16 / dVar10) * dVar11;
  dStack_210 = dVar11 * 4.0;
  if (param_3 == 2) {
    dStack_220 = param_2 - dVar36;
    dVar34 = ((double)param_1 - dVar36) - dVar17;
    dVar35 = dVar36 + dVar17;
    dVar32 = dStack_220;
    dVar10 = ((double)param_1 - dVar16) - dVar17;
    if (3 < uVar13 || uVar13 == 2) {
      dVar34 = 0.0;
      dStack_220 = 0.0;
      dVar36 = 0.0;
      dStack_210 = 0.0;
      dVar35 = 0.0;
      dVar32 = param_2;
      dVar10 = ((double)param_1 - dVar16) + -10.0;
    }
    dVar32 = (dVar32 - dVar30) - dVar31;
    dStack_218 = dVar34;
  }
  else if (param_3 == 1) {
    dVar32 = param_2 * 0.15;
    dStack_220 = dVar32 + dVar31 + dVar30;
    dVar10 = (double)param_1 - dVar36;
    if (uVar13 != 3) {
      dVar10 = ((double)param_1 - dVar16) - dVar17;
    }
    dVar34 = ((double)param_1 - dVar36) - dVar17;
    dVar35 = dVar36 + dVar17;
    dStack_218 = dVar34;
  }
  else {
    dStack_220 = (param_2 + param_2 * -0.3) - dStack_210;
    dVar32 = (dStack_220 - dVar30) - dVar31;
    dVar35 = dVar36 + dVar17;
    dVar34 = 0.0;
    dVar10 = dVar17;
    dStack_218 = dVar17;
  }
  dVar30 = dVar34;
  dVar33 = dVar17;
  if ((uVar13 - 1 & 0xfffffffffffffffd) != 0) {
    dVar30 = dVar10;
    func_0x000107c609b4(dVar10,dVar32,dVar16,dVar31);
    dVar30 = dVar30 + 0.0;
    dVar33 = 10.0;
  }
  dVar18 = dVar10;
  func_0x000107c609c8(dVar10,dVar32,dVar16,dVar31);
  dVar24 = (double)param_1 - dVar30;
  dVar19 = dVar33 + dVar30;
  if (bVar3) {
    dVar19 = dVar30;
  }
  dVar33 = dVar24 - dVar33;
  bVar3 = uVar13 != 3;
  dVar25 = dVar31 + -14.0;
  dVar29 = dVar18 + 14.0;
  if (bVar3) {
    dVar30 = 0.0;
    dVar29 = 0.0;
    dVar24 = 0.0;
    dVar25 = 0.0;
  }
  dVar21 = 0.0;
  if (!bVar3) {
    dVar21 = dVar19;
  }
  dVar19 = 0.0;
  if (!bVar3) {
    dVar19 = dVar18 + 14.0;
  }
  dVar18 = 0.0;
  if (!bVar3) {
    dVar18 = dVar33;
  }
  dVar33 = 0.0;
  if (!bVar3) {
    dVar33 = dVar31 + -14.0;
  }
  dVar20 = dVar10;
  dVar22 = dVar32;
  dVar26 = dVar16;
  dVar27 = dVar31;
  func_0x000107c609f4();
  func_0x000107c609d0();
  func_0x000107c609ec();
  dVar23 = dStack_220;
  dVar28 = dStack_210;
  func_0x000107c609ec();
  func_0x000107c609ec();
  func_0x000107c609ec();
  func_0x000107c609ec();
  if ((char)puVar1[1] == '\x01') {
    FUN_101aa1414();
  }
  else {
    uVar14 = *puVar1;
  }
  puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x000107c6157c(uVar12);
  func_0x000107c453e4(puVar5);
  func_0x000107c58bfc(0x3ff0000000000000);
  puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8();
  func_0x000107c486fc(dVar26,dVar27);
  func_0x000107c61170(puVar5);
  puVar5 = &UNK_110439718;
  func_0x000107c613fc(&UNK_110439718,0x138,7);
  *(ulong *)(puVar5 + 0x10) = uVar12;
  *(ulong *)(puVar5 + 0x18) = uVar14;
  *(undefined8 *)(puVar5 + 0x20) = param_6;
  *(long *)(puVar5 + 0x28) = lVar4;
  *(undefined **)(puVar5 + 0x30) = param_1;
  *(double *)(puVar5 + 0x38) = param_2;
  *(double *)(puVar5 + 0x40) = dVar11;
  *(double *)(puVar5 + 0x48) = dStack_1b8;
  *(double *)(puVar5 + 0x50) = dVar17;
  *(undefined8 *)(puVar5 + 0x58) = uVar15;
  *(undefined8 *)(puVar5 + 0x60) = uVar15;
  *(double *)(puVar5 + 0x68) = dVar20;
  *(double *)(puVar5 + 0x70) = dVar22;
  *(double *)(puVar5 + 0x78) = dVar26;
  *(double *)(puVar5 + 0x80) = dVar27;
  *(double *)(puVar5 + 0x88) = dVar10;
  *(double *)(puVar5 + 0x90) = dVar32;
  *(double *)(puVar5 + 0x98) = dVar16;
  *(double *)(puVar5 + 0xa0) = dVar31;
  *(double *)(puVar5 + 0xa8) = dVar34;
  *(double *)(puVar5 + 0xb0) = dVar23;
  *(double *)(puVar5 + 0xb8) = dVar35;
  *(double *)(puVar5 + 0xc0) = dVar28;
  *(double *)(puVar5 + 200) = dStack_218;
  *(double *)(puVar5 + 0xd0) = dStack_220;
  *(double *)(puVar5 + 0xd8) = dVar36;
  *(double *)(puVar5 + 0xe0) = dStack_210;
  *(double *)(puVar5 + 0xe8) = dVar30;
  *(double *)(puVar5 + 0xf0) = dVar29;
  *(double *)(puVar5 + 0xf8) = dVar24;
  *(double *)(puVar5 + 0x100) = dVar25;
  *(double *)(puVar5 + 0x108) = dVar21;
  *(double *)(puVar5 + 0x110) = dVar19;
  *(double *)(puVar5 + 0x118) = dVar18;
  *(double *)(puVar5 + 0x120) = dVar33;
  *(undefined8 *)(puVar5 + 0x128) = param_4;
  *(undefined8 *)(puVar5 + 0x130) = param_5;
  puVar7 = &UNK_110439740;
  func_0x000107c613fc(&UNK_110439740,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101aa62ec;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  pcStack_190 = FUN_101aa62f0;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  dStack_1a8 = 5.47077039858234e-315;
  puStack_1a0 = &UNK_100f9148c;
  puStack_198 = &UNK_110439758;
  ppuVar8 = &puStack_1b0;
  puStack_188 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_188;
  func_0x000107c6157c(lVar4);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = puVar6;
  func_0x000107c45138();
  func_0x000107c61180();
  func_0x000107c61574(lVar4);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar6);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",99,0x4a,0x6b,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) == 0) {
    puStack_198 = (undefined *)dStack_1b8;
    puStack_1b0 = param_1;
    dStack_1a8 = param_2;
    puStack_1a0 = (undefined *)dVar11;
    pcStack_190 = (code *)dVar17;
    puStack_188 = (undefined *)uVar15;
    uStack_180 = uVar15;
    dStack_178 = dVar20;
    dStack_170 = dVar22;
    dStack_168 = dVar26;
    dStack_160 = dVar27;
    dStack_158 = dVar10;
    dStack_150 = dVar32;
    dStack_148 = dVar16;
    dStack_140 = dVar31;
    dStack_138 = dVar34;
    dStack_130 = dVar23;
    dStack_128 = dVar35;
    dStack_120 = dVar28;
    dStack_118 = dStack_218;
    dStack_110 = dStack_220;
    dStack_108 = dVar36;
    dStack_100 = dStack_210;
    dStack_f8 = dVar30;
    dStack_f0 = dVar29;
    dStack_e8 = dVar24;
    dStack_e0 = dVar25;
    dStack_d8 = dVar21;
    dStack_d0 = dVar19;
    dStack_c8 = dVar18;
    dStack_c0 = dVar33;
    uStack_b8 = uVar12;
    puStack_b0 = puVar9;
    func_0x000107c61174(puVar9);
    FUN_101aa632c(&puStack_1b0);
    return puVar9;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101aa5a9c);
  (*pcVar2)();
}



/* Entry: 101aa5a9c; end: 101aa5b33; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl generateWatermarkOverlay:text:snapSize:type:] */

void FUN_101aa5a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  FUN_101aa53a4(param_1,param_2,param_5,param_6,param_4,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 101aa5b34; end: 101aa5bc3; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl genAiWatermarkProfileWithAttribution:shareDestination:] */

void FUN_101aa5b34(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2488;
  func_0x000107c610f8(PTR_PTR_1126b2488);
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c486b8(puVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101aa5bc4; end: 101aa5c27; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl setFadeInDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa5bc4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    func_0x000107c61174();
    func_0x000107c4223c(param_4);
    puVar1 = (undefined8 *)(param_2 + _DAT_112df5ca8);
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_112df5ca8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  return;
}



/* Entry: 101aa5c28; end: 101aa5f0f;  */

void FUN_101aa5c28(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  if ((param_1 == 0) || (param_2 != 0)) {
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = 0xe000000000000000;
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_a0);
    puStack_a8 = (undefined *)0xd00000000000001f;
    uStack_a0 = 0x800000010efcf690;
    lStack_78 = param_2;
    func_0x000107c614b0(param_2);
    uVar9 = 0x112d511f8;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c5fb18(&lStack_78,uVar9);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar9);
    func_0x000107c6142c(uStack_a0);
    (*param_3)(0);
  }
  else {
    puVar2 = &UNK_110439a10;
    func_0x000107c613fc(&UNK_110439a10,0x20,7);
    *(code **)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    puVar3 = &UNK_110439a38;
    func_0x000107c613fc(&UNK_110439a38,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x101aa7108;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x101aa71d4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100fe2610;
    puStack_90 = &UNK_110439a50;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110439a88;
    func_0x000107c613fc(&UNK_110439a88,0x20,7);
    *(code **)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    puVar5 = &UNK_110439ab0;
    func_0x000107c613fc(&UNK_110439ab0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x101aa7128;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_88 = (code *)0x101aa714c;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100de6bdc;
    puStack_90 = &UNK_110439ac8;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_80;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_110439b00;
    func_0x000107c613fc(&UNK_110439b00,0x20,7);
    *(code **)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    puVar7 = &UNK_110439b28;
    func_0x000107c613fc(&UNK_110439b28,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_101aa716c;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_88 = FUN_101aa7174;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100fe2654;
    puStack_90 = &UNK_110439b40;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_80;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar7);
    func_0x000107c4c744(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101aa5f10; end: 101aa5fcb;  */

void FUN_101aa5f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x21);
  func_0x000107c5fb78(0xd00000000000001f,0x800000010efcf690);
  uVar1 = 0x112d393f0;
  uStack_48 = param_3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_38);
  (*param_4)(0);
  return;
}



/* Entry: 101aa5fcc; end: 101aa602b; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl init] */

void FUN_101aa5fcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCWatermarkingServicesImplementation.WatermarkGeneratorImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa5ff8);
  (*pcVar1)();
}



/* Entry: 101aa602c; end: 101aa6093; -[_TtC36SCWatermarkingServicesImplementation22WatermarkGeneratorImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101aa6048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa6068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa604c) */
/* WARNING: Removing unreachable block (ram,0x000101aa606c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa602c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df5c80));
  return;
}



/* Entry: 101aa6094; end: 101aa60b3;  */

void FUN_101aa6094(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2bf8);
  return;
}



/* Entry: 101aa60b4; end: 101aa62eb;  */

undefined8 FUN_101aa60b4(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong auStack_80 [4];
  long lStack_58;
  
  func_0x0001000bb420(param_1,auStack_80);
  uVar3 = 0;
  FUN_101aa70c8(0,0x112d55598,&PTR_PTR_1126b25d0);
  plVar4 = &lStack_58;
  func_0x000107c6147c(plVar4,auStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if (((ulong)plVar4 & 1) != 0) {
    lVar5 = lStack_58;
    func_0x000107c4c930();
    func_0x000107c61180();
    func_0x000107c61170(lStack_58);
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c4e088();
      if ((((int)lVar6 == 0x20) || (lVar6 = lVar5, func_0x000107c4e088(), (int)lVar6 == 0x1e)) ||
         (lVar6 = lVar5, func_0x000107c4e088(), (int)lVar6 == 0x22)) {
        func_0x000107c61170(lVar5);
        return 1;
      }
      lVar6 = lVar5;
      func_0x000107c3d988();
      func_0x000107c61180();
      if (lVar6 != 0) {
        auStack_80[0] = 0;
        uVar3 = 0;
        FUN_101aa70c8(0,0x112d530c8,&PTR_PTR_1126affc8);
        func_0x000107c5fc50(lVar6,auStack_80,uVar3);
        func_0x000107c61170(lVar6);
        uVar1 = auStack_80[0];
        if (auStack_80[0] != 0) {
          uVar11 = auStack_80[0] & 0xffffffffffffff8;
          if (auStack_80[0] >> 0x3e == 0) {
            uVar9 = *(ulong *)(uVar11 + 0x10);
          }
          else {
            uVar9 = auStack_80[0];
            if (-1 < (long)auStack_80[0]) {
              uVar9 = uVar11;
            }
            func_0x000107c60480();
          }
          uVar10 = 0;
          while( true ) {
            if (uVar9 == uVar10) {
              func_0x000107c61170(lVar5);
              func_0x000107c6142c(uVar1);
              return 0;
            }
            if ((uVar1 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101aa62d8);
                (*pcVar2)();
              }
              uVar7 = *(ulong *)(uVar1 + uVar10 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar7 = uVar10;
              func_0x00010121c37c(uVar10,uVar1);
            }
            if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101aa62d4);
              (*pcVar2)();
            }
            uVar8 = uVar7;
            func_0x000107c4e088();
            if (((int)uVar8 == 5) || (uVar8 = uVar7, func_0x000107c4e088(), (int)uVar8 == 7)) break;
            uVar8 = uVar7;
            func_0x000107c4e088();
            func_0x000107c61170(uVar7);
            uVar10 = uVar10 + 1;
            if ((int)uVar8 == 6) {
LAB_101aa62a8:
              func_0x000107c61170(lVar5);
              func_0x000107c6142c(uVar1);
              return 1;
            }
          }
          func_0x000107c61170(uVar7);
          goto LAB_101aa62a8;
        }
      }
      func_0x000107c61170(lVar5);
    }
  }
  return 0;
}



/* Entry: 101aa62ec; end: 101aa62ef;  */

void FUN_101aa62ec(double param_1,double param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 auStack_e0 [4];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x130);
  lVar3 = 0;
  func_0x000107c5f064();
  lStack_c0 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&lStack_c0 + lVar3;
  lVar4 = param_3;
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  func_0x000101aa144c();
  dVar17 = param_1;
  func_0x000101aa14b4();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
  uVar15 = 0;
  func_0x000107c495c4(0,dVar17);
  func_0x000101aa1480();
  puVar6 = puVar5;
  func_0x000107c3ab24(puVar5);
  func_0x000107c61180();
  func_0x000107c60928(param_1,param_2,uVar15,lVar4,puVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  lVar4 = param_3;
  func_0x000107c3ab28();
  func_0x000107c61180();
  func_0x000107c608d4();
  func_0x000107c61170();
  if ((uVar2 - 1 & 0xfffffffffffffffd) != 0) {
    if (lVar1 == 1) {
      FUN_101aa3524();
    }
    else {
      func_0x000101aa35c0();
    }
    if (lVar4 != 0) {
      param_1 = *(double *)(unaff_x20 + 0x88);
      param_2 = *(double *)(unaff_x20 + 0x90);
      func_0x000107c422bc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x98),
                          *(undefined8 *)(unaff_x20 + 0xa0));
      func_0x000107c61170();
    }
  }
  if (1 < uVar2) {
    if (uVar2 != 3) goto LAB_101aa208c;
    func_0x000101aa3638();
    if (lVar4 == 0) goto LAB_101aa1e0c;
    func_0x000107c5b078();
    func_0x000107c5b078(lVar4);
    param_2 = param_2 / param_1;
    dVar17 = *(double *)(unaff_x20 + 0x30) * 0.25;
    dVar19 = dVar17 * param_2;
    func_0x000101aa1558();
    if (param_2 == 1.0) {
      if (*(long *)(unaff_x20 + 0x60) != 0) goto LAB_101aa1d88;
LAB_101aa1dc0:
      dVar21 = *(double *)(unaff_x20 + 0x108);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x110);
      uVar23 = *(undefined8 *)(unaff_x20 + 0x118);
      uVar24 = *(undefined8 *)(unaff_x20 + 0x120);
      dVar16 = dVar21 + -8.0;
    }
    else {
      dVar21 = *(double *)(lVar9 + 0x150);
      dVar17 = dVar17 * dVar21;
      dVar19 = dVar19 * dVar21;
      if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_101aa1dc0;
LAB_101aa1d88:
      dVar21 = *(double *)(unaff_x20 + 0xe8);
      uVar15 = *(undefined8 *)(unaff_x20 + 0xf0);
      uVar23 = *(undefined8 *)(unaff_x20 + 0xf8);
      uVar24 = *(undefined8 *)(unaff_x20 + 0x100);
      dVar16 = *(double *)(unaff_x20 + 0x108);
      func_0x000107c609b4(dVar16,*(undefined8 *)(unaff_x20 + 0x110),
                          *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120));
      dVar16 = (dVar16 - dVar17) + 8.0;
    }
    func_0x000107c609b8(dVar21,uVar15,uVar23,uVar24);
    func_0x000107c422bc(dVar16,(dVar21 - dVar19) + 8.0,dVar17,dVar19,lVar4);
    func_0x000107c61170(lVar4);
  }
LAB_101aa1e0c:
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  FUN_101aa2d5c(uVar18,uVar7,uVar13);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8();
  uVar15 = uStack_b0;
  func_0x000107c5fadc(uStack_b0,uStack_a8);
  uVar8 = 0;
  func_0x000100eca28c(0);
  uVar23 = uVar8;
  func_0x000100ecbdec();
  uVar24 = uVar7;
  func_0x000107c5f9dc(uVar7,uVar8,PTR___sypN_11034f1a8 + 8,uVar23);
  func_0x000107c6142c(uVar7);
  func_0x000107c48af8();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar24);
  lVar9 = param_3;
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  func_0x000107c60930();
  func_0x000107c61170(lVar9);
  lVar9 = param_3;
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar26 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar27 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar15 = *(undefined8 *)(unaff_x20 + 200);
  uVar23 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar24 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)((long)auStack_e0 + lVar3 + 8) = uVar20;
  *(undefined8 *)((long)auStack_e0 + lVar3 + 0x10) = uVar22;
  *(undefined8 *)((long)auStack_e0 + lVar3) = uVar18;
  puVar6 = puVar5;
  FUN_101aa20dc(uVar8,uVar25,uVar26,uVar27,uVar15,uVar23,uVar24,uVar7,puVar5,uVar13);
  puVar10 = puVar6;
  func_0x000107c3ab2c();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c3fde0(0x3fc3333333333333);
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c61170(puVar10);
    }
    else {
      func_0x000107c60904(lVar9);
      func_0x000107c608e0(uVar8,uVar25,uVar26,uVar27,lVar9,puVar10);
      puVar12 = puVar11;
      func_0x000107c3ab24(puVar11);
      func_0x000107c61180();
      func_0x000107c60910(lVar9,puVar12);
      func_0x000107c61170(puVar12);
      func_0x000107c608d0(lVar9);
      func_0x000107c608cc(uVar8,uVar25,uVar26,uVar27,lVar9);
      lVar3 = lStack_b8;
      lVar1 = lStack_c0;
      (**(code **)(lStack_c0 + 0x68))
                (lVar14,*(undefined4 *)
                         PTR___s12CoreGraphics14CGPathFillRuleO7windingyA2CmFWC_110351390,lStack_b8)
      ;
      func_0x000107c5ff44(lVar14);
      (**(code **)(lVar1 + 8))(lVar14,lVar3);
      func_0x000107c608f8(lVar9);
      func_0x000107c608fc(lVar9);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar10);
      puVar6 = puVar11;
    }
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar9);
  func_0x000107c422d4(uVar15,uVar23,uVar24,uVar7,puVar5);
  func_0x000107c61170(puVar5);
LAB_101aa208c:
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  func_0x000107c608e8();
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101aa62f0; end: 101aa630f;  */

void FUN_101aa62f0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101aa6310; end: 101aa632b;  */

void FUN_101aa6310(long param_1,long param_2)

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



/* Entry: 101aa632c; end: 101aa635f;  */

undefined8 FUN_101aa632c(undefined8 param_1)

{
  (*(code *)(undefined *)0x101aa31a0)();
  return param_1;
}



/* Entry: 101aa6360; end: 101aa67ff;  */

/* WARNING: Possible PIC construction at 0x000101aa67c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa65ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa6630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa6640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa669c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa6660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa66a0) */
/* WARNING: Removing unreachable block (ram,0x000101aa6644) */
/* WARNING: Removing unreachable block (ram,0x000101aa6634) */
/* WARNING: Removing unreachable block (ram,0x000101aa65f0) */
/* WARNING: Removing unreachable block (ram,0x000101aa67c4) */
/* WARNING: Removing unreachable block (ram,0x000101aa67d0) */
/* WARNING: Removing unreachable block (ram,0x000101aa67d4) */
/* WARNING: Removing unreachable block (ram,0x000101aa6664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa6360(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,undefined *param_7,long param_8,long param_9)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = &UNK_110439970;
  uVar8 = 0x18;
  func_0x000107c613fc(&UNK_110439970,0x18,7);
  *(long *)(puVar2 + 0x10) = param_9;
  if (param_5 == 0) {
    func_0x000107c60bc4(param_9);
  }
  else {
    func_0x000107c60bc4(param_9);
    func_0x000107c61174();
    uVar3 = param_5;
    FUN_101aa3f80();
    if ((uVar3 & 1) != 0) {
      if (param_6 == 0) {
        FUN_101aa12cc();
        if (((ulong)param_7 & 1) != 0) {
          FUN_101aa11c4();
          lStack_a0 = param_1;
          uStack_98 = param_2;
          puStack_90 = param_7;
          uStack_88 = uVar8;
          func_0x000100e8b654();
          func_0x000107c6022c(&lStack_a0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_7,param_7);
          goto LAB_101aa6700;
        }
      }
      else if (param_6 != 1) {
        puStack_90 = (undefined *)0x0;
        uStack_88 = 0xe000000000000000;
        func_0x000107c602fc(0x28);
        func_0x000107c5fb78(0xd000000000000026,0x800000010efcf660);
        uVar8 = 0;
        lStack_a0 = param_6;
        func_0x000101aa0c70(0);
        func_0x000107c603d0(&lStack_a0,&puStack_90,uVar8,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        uVar8 = uStack_88;
LAB_101aa6700:
        func_0x000107c6142c(uVar8);
      }
      puVar4 = PTR_PTR_1126b2488;
      func_0x000107c610f8();
      func_0x000107c5fadc(param_1,param_2);
      uVar8 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5fadc(param_3,param_4);
      uVar7 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c486b8();
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar7);
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c60bd0(param_9);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa6800);
        (*pcVar1)();
      }
      (**(code **)(param_9 + 0x10))(param_9,puVar4);
      goto code_r0x000107c61574;
    }
    func_0x000107c61170(param_5);
  }
  puVar4 = &UNK_110439998;
  func_0x000107c613fc(&UNK_110439998,0x54,7);
  *(code **)(puVar4 + 0x10) = FUN_101aa7078;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(long *)(puVar4 + 0x20) = param_8;
  *(long *)(puVar4 + 0x28) = param_1;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  *(undefined8 *)(puVar4 + 0x38) = param_3;
  *(undefined8 *)(puVar4 + 0x40) = param_4;
  *(long *)(puVar4 + 0x48) = param_6;
  *(int *)(puVar4 + 0x50) = (int)param_7;
  iVar9 = (int)*(undefined8 *)(*(long *)(param_8 + _DAT_112df5c88) + 0x30);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61174();
  func_0x000107c6157c(puVar2);
  func_0x000108faa798();
  if (iVar9 == 0) {
    (**(code **)(param_9 + 0x10))(param_9,0);
  }
  else {
    if (*(long *)(param_8 + _DAT_112df5c98) != 0) {
      func_0x0001000d224c(&puStack_90);
      puVar6 = puStack_90;
      if (puStack_90 != (undefined *)0x0) {
        puVar5 = puStack_90;
        func_0x000107c41574();
        func_0x000107c61180();
        func_0x000107c615e8(puVar6);
        puVar6 = puVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        if (puVar6 != (undefined *)0x0) {
          func_0x000107c5fadc(param_1,param_2);
          func_0x000107c4b288(puVar6);
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          puVar2 = &UNK_1104399c0;
          func_0x000107c613fc(&UNK_1104399c0,0x20,7);
          *(code **)(puVar2 + 0x10) = FUN_101aa7088;
          *(undefined **)(puVar2 + 0x18) = puVar4;
          pcStack_70 = FUN_101aa70c0;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          pcStack_80 = FUN_1016c1d3c;
          puStack_78 = &UNK_1104399d8;
          puStack_68 = puVar2;
          func_0x000107c60bc4(&puStack_90);
          puVar2 = puStack_68;
          func_0x000107c6157c(puVar4);
          goto code_r0x000107c61574;
        }
      }
    }
    (**(code **)(param_9 + 0x10))(param_9,0);
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101aa6800; end: 101aa68bb;  */

void FUN_101aa6800(ulong param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  if (((param_5 & 1) != 0) ||
     ((((param_1 == 0xd000000000000024 && (param_2 == -0x7ffffffef10309d0)) ||
       (func_0x000107c605b8(param_1,param_2,0xd000000000000024,0x800000010efcf630,0),
       (param_1 & 1) != 0)) && ((param_3 | 2) == 3)))) {
    func_0x000107c610f8(PTR_PTR_1126b2488);
    func_0x000107c486b8();
  }
  return;
}



/* Entry: 101aa68bc; end: 101aa6ecb;  */

/* WARNING: Possible PIC construction at 0x000101aa69e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa6ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aa6b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa6ad4) */
/* WARNING: Removing unreachable block (ram,0x000101aa69e4) */
/* WARNING: Removing unreachable block (ram,0x000101aa6b78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa68bc(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar1 = &UNK_1104398f8;
  func_0x000107c613fc(&UNK_1104398f8,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_6;
  if ((char)((ulong *)(param_5 + _DAT_112df5cb0))[1] == '\x01') {
    func_0x000107c60bc4();
    FUN_101aa1414();
    uVar5 = param_6;
  }
  else {
    uVar5 = *(ulong *)(param_5 + _DAT_112df5cb0);
    func_0x000107c60bc4(param_6);
  }
  if (uVar5 < 4 && uVar5 != 2) {
    uVar5 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar5 = param_3 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      puVar2 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      puVar3 = puVar2;
      FUN_101aa6ee0();
      puVar1 = &UNK_110439598;
      func_0x000107c613f8(&UNK_110439598,puVar3,0,0);
      *puVar3 = 2;
      puVar4 = puVar1;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar1);
      func_0x000107c42d78(puVar2);
      func_0x000107c61180();
      goto code_r0x000107c61170;
    }
  }
  puVar1 = PTR_PTR_1126a87d0;
  func_0x000107c610f8(PTR_PTR_1126a87d0);
  func_0x000107c453e4();
  puVar4 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c6071c();
  func_0x000107c5fadc(puVar4,puVar2);
  func_0x0001056db900(puVar1,0,puVar4,1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 101aa6ecc; end: 101aa6edf;  */

void FUN_101aa6ecc(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101aa6ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101aa6ee0; end: 101aa6f53;  */

void FUN_101aa6ee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df5ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c49bc;
  func_0x000107c61520(&UNK_10d9c49bc,&UNK_110439598);
  puRam0000000112df5ce0 = puVar1;
  return;
}



/* Entry: 101aa6f54; end: 101aa6f67;  */

void FUN_101aa6f54(double param_1,double param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 auStack_e0 [4];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x130);
  lVar3 = 0;
  func_0x000107c5f064();
  lStack_c0 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&lStack_c0 + lVar3;
  lVar4 = param_3;
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  func_0x000101aa144c();
  dVar17 = param_1;
  func_0x000101aa14b4();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
  uVar15 = 0;
  func_0x000107c495c4(0,dVar17);
  func_0x000101aa1480();
  puVar6 = puVar5;
  func_0x000107c3ab24(puVar5);
  func_0x000107c61180();
  func_0x000107c60928(param_1,param_2,uVar15,lVar4,puVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  lVar4 = param_3;
  func_0x000107c3ab28();
  func_0x000107c61180();
  func_0x000107c608d4();
  func_0x000107c61170();
  if ((uVar2 - 1 & 0xfffffffffffffffd) != 0) {
    if (lVar1 == 1) {
      FUN_101aa3524();
    }
    else {
      func_0x000101aa35c0();
    }
    if (lVar4 != 0) {
      param_1 = *(double *)(unaff_x20 + 0x88);
      param_2 = *(double *)(unaff_x20 + 0x90);
      func_0x000107c422bc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x98),
                          *(undefined8 *)(unaff_x20 + 0xa0));
      func_0x000107c61170();
    }
  }
  if (1 < uVar2) {
    if (uVar2 != 3) goto LAB_101aa208c;
    func_0x000101aa3638();
    if (lVar4 == 0) goto LAB_101aa1e0c;
    func_0x000107c5b078();
    func_0x000107c5b078(lVar4);
    param_2 = param_2 / param_1;
    dVar17 = *(double *)(unaff_x20 + 0x30) * 0.25;
    dVar19 = dVar17 * param_2;
    func_0x000101aa1558();
    if (param_2 == 1.0) {
      if (*(long *)(unaff_x20 + 0x60) != 0) goto LAB_101aa1d88;
LAB_101aa1dc0:
      dVar21 = *(double *)(unaff_x20 + 0x108);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x110);
      uVar23 = *(undefined8 *)(unaff_x20 + 0x118);
      uVar24 = *(undefined8 *)(unaff_x20 + 0x120);
      dVar16 = dVar21 + -8.0;
    }
    else {
      dVar21 = *(double *)(lVar9 + 0x150);
      dVar17 = dVar17 * dVar21;
      dVar19 = dVar19 * dVar21;
      if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_101aa1dc0;
LAB_101aa1d88:
      dVar21 = *(double *)(unaff_x20 + 0xe8);
      uVar15 = *(undefined8 *)(unaff_x20 + 0xf0);
      uVar23 = *(undefined8 *)(unaff_x20 + 0xf8);
      uVar24 = *(undefined8 *)(unaff_x20 + 0x100);
      dVar16 = *(double *)(unaff_x20 + 0x108);
      func_0x000107c609b4(dVar16,*(undefined8 *)(unaff_x20 + 0x110),
                          *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120));
      dVar16 = (dVar16 - dVar17) + 8.0;
    }
    func_0x000107c609b8(dVar21,uVar15,uVar23,uVar24);
    func_0x000107c422bc(dVar16,(dVar21 - dVar19) + 8.0,dVar17,dVar19,lVar4);
    func_0x000107c61170(lVar4);
  }
LAB_101aa1e0c:
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  FUN_101aa2d5c(uVar18,uVar7,uVar13);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8();
  uVar15 = uStack_b0;
  func_0x000107c5fadc(uStack_b0,uStack_a8);
  uVar8 = 0;
  func_0x000100eca28c(0);
  uVar23 = uVar8;
  func_0x000100ecbdec();
  uVar24 = uVar7;
  func_0x000107c5f9dc(uVar7,uVar8,PTR___sypN_11034f1a8 + 8,uVar23);
  func_0x000107c6142c(uVar7);
  func_0x000107c48af8();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar24);
  lVar9 = param_3;
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  func_0x000107c60930();
  func_0x000107c61170(lVar9);
  lVar9 = param_3;
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar26 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar27 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar15 = *(undefined8 *)(unaff_x20 + 200);
  uVar23 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar24 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)((long)auStack_e0 + lVar3 + 8) = uVar20;
  *(undefined8 *)((long)auStack_e0 + lVar3 + 0x10) = uVar22;
  *(undefined8 *)((long)auStack_e0 + lVar3) = uVar18;
  puVar6 = puVar5;
  FUN_101aa20dc(uVar8,uVar25,uVar26,uVar27,uVar15,uVar23,uVar24,uVar7,puVar5,uVar13);
  puVar10 = puVar6;
  func_0x000107c3ab2c();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c3fde0(0x3fc3333333333333);
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c61170(puVar10);
    }
    else {
      func_0x000107c60904(lVar9);
      func_0x000107c608e0(uVar8,uVar25,uVar26,uVar27,lVar9,puVar10);
      puVar12 = puVar11;
      func_0x000107c3ab24(puVar11);
      func_0x000107c61180();
      func_0x000107c60910(lVar9,puVar12);
      func_0x000107c61170(puVar12);
      func_0x000107c608d0(lVar9);
      func_0x000107c608cc(uVar8,uVar25,uVar26,uVar27,lVar9);
      lVar3 = lStack_b8;
      lVar1 = lStack_c0;
      (**(code **)(lStack_c0 + 0x68))
                (lVar14,*(undefined4 *)
                         PTR___s12CoreGraphics14CGPathFillRuleO7windingyA2CmFWC_110351390,lStack_b8)
      ;
      func_0x000107c5ff44(lVar14);
      (**(code **)(lVar1 + 8))(lVar14,lVar3);
      func_0x000107c608f8(lVar9);
      func_0x000107c608fc(lVar9);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar10);
      puVar6 = puVar11;
    }
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar9);
  func_0x000107c422d4(uVar15,uVar23,uVar24,uVar7,puVar5);
  func_0x000107c61170(puVar5);
LAB_101aa208c:
  func_0x000107c3ab28(param_3);
  func_0x000107c61180();
  func_0x000107c608e8();
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101aa6f68; end: 101aa6fb7;  */

/* WARNING: Possible PIC construction at 0x000101aa6f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa6f94) */

void FUN_101aa6f68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 101aa6fb8; end: 101aa6ff3;  */

undefined8 FUN_101aa6fb8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x101aa31c8)(param_2,param_1);
  return param_2;
}



/* Entry: 101aa6ff4; end: 101aa7077;  */

void FUN_101aa6ff4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000107c61170();
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101aa7078; end: 101aa7087;  */

void FUN_101aa7078(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101aa7084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101aa7088; end: 101aa70bf;  */

void FUN_101aa7088(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101aa4118(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined4 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101aa70c0; end: 101aa70c7;  */

void FUN_101aa70c0(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  if ((param_1 == 0) || (param_2 != 0)) {
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = 0xe000000000000000;
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_a0);
    puStack_a8 = (undefined *)0xd00000000000001f;
    uStack_a0 = 0x800000010efcf690;
    lStack_78 = param_2;
    func_0x000107c614b0(param_2);
    uVar10 = 0x112d511f8;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c5fb18(&lStack_78,uVar10);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar10);
    func_0x000107c6142c(uStack_a0);
    (*pcVar1)(0);
  }
  else {
    puVar3 = &UNK_110439a10;
    func_0x000107c613fc(&UNK_110439a10,0x20,7);
    *(code **)(puVar3 + 0x10) = pcVar1;
    *(undefined8 *)(puVar3 + 0x18) = uVar10;
    puVar4 = &UNK_110439a38;
    func_0x000107c613fc(&UNK_110439a38,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x101aa7108;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x101aa71d4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100fe2610;
    puStack_90 = &UNK_110439a50;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_80;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(uVar10);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_110439a88;
    func_0x000107c613fc(&UNK_110439a88,0x20,7);
    *(code **)(puVar4 + 0x10) = pcVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar10;
    puVar6 = &UNK_110439ab0;
    func_0x000107c613fc(&UNK_110439ab0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x101aa7128;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcStack_88 = (code *)0x101aa714c;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100de6bdc;
    puStack_90 = &UNK_110439ac8;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_80;
    func_0x000107c6157c(uVar10);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_110439b00;
    func_0x000107c613fc(&UNK_110439b00,0x20,7);
    *(code **)(puVar6 + 0x10) = pcVar1;
    *(undefined8 *)(puVar6 + 0x18) = uVar10;
    puVar8 = &UNK_110439b28;
    func_0x000107c613fc(&UNK_110439b28,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_101aa716c;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    pcStack_88 = FUN_101aa7174;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100fe2654;
    puStack_90 = &UNK_110439b40;
    ppuVar9 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar8 = puStack_80;
    func_0x000107c6157c(uVar10);
    func_0x000107c61574(puVar8);
    func_0x000107c4c744(param_1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101aa70c8; end: 101aa716b;  */

void FUN_101aa70c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101aa716c; end: 101aa7173;  */

void FUN_101aa716c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x21);
  func_0x000107c5fb78(0xd00000000000001f,0x800000010efcf690);
  uVar2 = 0x112d393f0;
  uStack_48 = param_3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_38);
  (*pcVar1)(0);
  return;
}



/* Entry: 101aa7174; end: 101aa7193;  */

void FUN_101aa7174(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101aa7194; end: 101aa71eb;  */

void FUN_101aa7194(long param_1,long param_2)

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



/* Entry: 101aa71ec; end: 101aa7233;  */

void FUN_101aa71ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 101aa7234; end: 101aa7323;  */

void FUN_101aa7234(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efcf700);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 101aa7324; end: 101aa7607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa7324(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  lVar10 = param_3 + 0x10;
  func_0x000107c61648();
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar10 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar10);
    uVar9 = uVar5;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  lVar10 = param_3 + 0x10;
  func_0x000107c61648();
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    lVar6 = *(long *)(lVar10 + 0x18);
    func_0x000107c61174();
    func_0x000107c61574(lVar10);
    lVar10 = lVar6;
    func_0x000107c5c800();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_a8,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(param_3);
    lVar6 = lVar7;
    func_0x000107c3f770();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
  }
  lVar2 = 0;
  FUN_101aa6094();
  lVar7 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112df5ca0) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112df5ca8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112df5cb0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar7 + _DAT_112df5c90) = param_2;
  if (lVar10 == 0) {
    func_0x000107c6157c(param_2);
    lVar8 = 0;
  }
  else {
    func_0x0001000285a8(0x112d563c0,&UNK_10d91d0e0);
    func_0x000107c6157c(param_2);
    lVar3 = lVar10;
    func_0x000107c61174();
    lVar8 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
  }
  *(long *)(lVar7 + _DAT_112df5c80) = lVar8;
  func_0x000101aa15c4(0);
  func_0x000107c613fc();
  uVar5 = uVar9;
  FUN_101aa1100();
  *(undefined8 *)(lVar7 + _DAT_112df5c88) = uVar5;
  if (lVar6 == 0) {
    func_0x000107c615f0(uVar9);
    lVar8 = 0;
  }
  else {
    func_0x0001000285a8(0x112df5dd0,&UNK_10d9c4ad0);
    func_0x000107c615f0(uVar9);
    func_0x000107c61174();
    lVar8 = lVar6;
    func_0x0001000bda74();
    func_0x000107c61170(lVar6);
  }
  *(long *)(lVar7 + _DAT_112df5c98) = lVar8;
  plVar4 = &lStack_b8;
  lStack_b8 = lVar7;
  lStack_b0 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar10);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 101aa7608; end: 101aa760f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa7608(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar11 + 0x10,auStack_78,0,0);
  lVar10 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar10 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar10);
    uVar9 = uVar6;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
  }
  func_0x000107c61428(lVar11 + 0x10,auStack_90,0,0);
  lVar10 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    lVar7 = *(long *)(lVar10 + 0x18);
    func_0x000107c61174();
    func_0x000107c61574(lVar10);
    lVar10 = lVar7;
    func_0x000107c5c800();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
  }
  func_0x000107c61428(lVar11 + 0x10,auStack_a8,0,0);
  lVar11 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar7 = *(long *)(lVar11 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(lVar11);
    lVar11 = lVar7;
    func_0x000107c3f770();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
  }
  lVar2 = 0;
  FUN_101aa6094();
  lVar7 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112df5ca0) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112df5ca8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112df5cb0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar7 + _DAT_112df5c90) = uVar4;
  if (lVar10 == 0) {
    func_0x000107c6157c(uVar4);
    lVar8 = 0;
  }
  else {
    func_0x0001000285a8(0x112d563c0,&UNK_10d91d0e0);
    func_0x000107c6157c(uVar4);
    lVar3 = lVar10;
    func_0x000107c61174();
    lVar8 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
  }
  *(long *)(lVar7 + _DAT_112df5c80) = lVar8;
  func_0x000101aa15c4(0);
  func_0x000107c613fc();
  uVar4 = uVar9;
  FUN_101aa1100();
  *(undefined8 *)(lVar7 + _DAT_112df5c88) = uVar4;
  if (lVar11 == 0) {
    func_0x000107c615f0(uVar9);
    lVar8 = 0;
  }
  else {
    func_0x0001000285a8(0x112df5dd0,&UNK_10d9c4ad0);
    func_0x000107c615f0(uVar9);
    func_0x000107c61174();
    lVar8 = lVar11;
    func_0x0001000bda74();
    func_0x000107c61170(lVar11);
  }
  *(long *)(lVar7 + _DAT_112df5c98) = lVar8;
  plVar5 = &lStack_b8;
  lStack_b8 = lVar7;
  lStack_b0 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 101aa7610; end: 101aa7633;  */

/* WARNING: Possible PIC construction at 0x000101aa761c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa7620) */

void FUN_101aa7610(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101aa7634; end: 101aa7687;  */

void FUN_101aa7634(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa7688; end: 101aa77ab;  */

void FUN_101aa7688(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  
  func_0x0001000285a8(0x112d62380,&UNK_10d990b80);
  func_0x000107c613fc();
  pcVar1 = FUN_101aa7234;
  func_0x0001000bdd8c(FUN_101aa7234,0);
  puVar2 = &UNK_110439b78;
  func_0x000107c613fc(&UNK_110439b78,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110439bc8;
  func_0x000107c613fc(&UNK_110439bc8,0x20,7);
  *(code **)(puVar3 + 0x10) = pcVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x0001000285a8(0x112df5ce8,&UNK_10d9c4a88);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  pcVar4 = FUN_101aa77d8;
  func_0x0001000bdd8c(FUN_101aa77d8,puVar3);
  pcVar5 = pcVar4;
  func_0x0001003a5b88();
  puVar2 = PTR_PTR_1126a87e0;
  func_0x000107c610f8();
  func_0x000107c49590();
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(pcVar4);
  func_0x000107c61170(pcVar5);
  *param_1 = puVar2;
  return;
}



/* Entry: 101aa77ac; end: 101aa77d7;  */

void FUN_101aa77ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101aa77d8; end: 101aa77db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa77d8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar11 + 0x10,auStack_78,0,0);
  lVar10 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar10 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar10);
    uVar9 = uVar6;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
  }
  func_0x000107c61428(lVar11 + 0x10,auStack_90,0,0);
  lVar10 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    lVar7 = *(long *)(lVar10 + 0x18);
    func_0x000107c61174();
    func_0x000107c61574(lVar10);
    lVar10 = lVar7;
    func_0x000107c5c800();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
  }
  func_0x000107c61428(lVar11 + 0x10,auStack_a8,0,0);
  lVar11 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar7 = *(long *)(lVar11 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(lVar11);
    lVar11 = lVar7;
    func_0x000107c3f770();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
  }
  lVar2 = 0;
  FUN_101aa6094();
  lVar7 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112df5ca0) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112df5ca8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112df5cb0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar7 + _DAT_112df5c90) = uVar4;
  if (lVar10 == 0) {
    func_0x000107c6157c(uVar4);
    lVar8 = 0;
  }
  else {
    func_0x0001000285a8(0x112d563c0,&UNK_10d91d0e0);
    func_0x000107c6157c(uVar4);
    lVar3 = lVar10;
    func_0x000107c61174();
    lVar8 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
  }
  *(long *)(lVar7 + _DAT_112df5c80) = lVar8;
  func_0x000101aa15c4(0);
  func_0x000107c613fc();
  uVar4 = uVar9;
  FUN_101aa1100();
  *(undefined8 *)(lVar7 + _DAT_112df5c88) = uVar4;
  if (lVar11 == 0) {
    func_0x000107c615f0(uVar9);
    lVar8 = 0;
  }
  else {
    func_0x0001000285a8(0x112df5dd0,&UNK_10d9c4ad0);
    func_0x000107c615f0(uVar9);
    func_0x000107c61174();
    lVar8 = lVar11;
    func_0x0001000bda74();
    func_0x000107c61170(lVar11);
  }
  *(long *)(lVar7 + _DAT_112df5c98) = lVar8;
  plVar5 = &lStack_b8;
  lStack_b8 = lVar7;
  lStack_b0 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 101aa77dc; end: 101aa78a7;  */

undefined1  [16] FUN_101aa77dc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd9;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efcf720);
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efcf750);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa78a8);
  (*pcVar1)();
}



/* Entry: 101aa78a8; end: 101aa78d7;  */

void FUN_101aa78a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa78d8; end: 101aa7dab;  */

void FUN_101aa78d8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x0001001f6f4c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar9 = PTR_PTR_1126a87e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3410);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efcf780);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined **)(param_2 + 0x50) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa7dac);
  (*pcVar1)();
}



/* Entry: 101aa7dac; end: 101aa7dbf;  */

void FUN_101aa7dac(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x0001001f6f4c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar10 = PTR_PTR_1126a87e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3410);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar10);
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efcf780);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(puVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(undefined **)(lVar2 + 0x50) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa7dac);
  (*pcVar1)();
}



/* Entry: 101aa7dc0; end: 101aa8223;  */

long FUN_101aa7dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a87e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3410);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efcf780);
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
    *(undefined **)(unaff_x20 + 0x50) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa8224);
  (*pcVar1)();
}



/* Entry: 101aa8224; end: 101aa829f;  */

void FUN_101aa8224(void)

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
  return;
}



/* Entry: 101aa82a0; end: 101aa82f3;  */

void FUN_101aa82a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101aa82f4; end: 101aa82fb;  */

void FUN_101aa82f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101aa82fc; end: 101aa834b;  */

undefined8 FUN_101aa82fc(void)

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



/* Entry: 101aa834c; end: 101aa838f;  */

undefined1  [16] FUN_101aa834c(void)

{
  return ZEXT816(0x110439cc0);
}



/* Entry: 101aa8390; end: 101aa83b7;  */

void FUN_101aa8390(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aa83b8; end: 101aa83bf;  */

undefined8 FUN_101aa83b8(void)

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



/* Entry: 101aa83c0; end: 101aa87a7;  */

long FUN_101aa83c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puVar1 = PTR_PTR_1126a87f0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3410);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
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
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  return unaff_x20;
}



/* Entry: 101aa87a8; end: 101aa881b;  */

void FUN_101aa87a8(void)

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
  return;
}



/* Entry: 101aa881c; end: 101aa886b;  */

undefined8 FUN_101aa881c(void)

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



/* Entry: 101aa886c; end: 101aa88af;  */

undefined1  [16] FUN_101aa886c(void)

{
  return ZEXT816(0x110439d88);
}



/* Entry: 101aa88b0; end: 101aa88d7;  */

void FUN_101aa88b0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aa88d8; end: 101aa88df;  */

undefined8 FUN_101aa88d8(void)

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



/* Entry: 101aa88e0; end: 101aa891b;  */

undefined8 FUN_101aa88e0(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006d3880(param_1);
  return unaff_x20;
}



/* Entry: 101aa891c; end: 101aa8947;  */

void FUN_101aa891c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


