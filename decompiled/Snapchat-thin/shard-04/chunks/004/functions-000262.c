/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10340c52c; end: 10340c59f;  */

undefined8 * FUN_10340c52c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61170(uVar1);
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 10340c5a0; end: 10340c647;  */

int FUN_10340c5a0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10340c648; end: 10340c663;  */

void FUN_10340c648(void)

{
  long unaff_x20;
  
  FUN_10340bbc8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10340c664; end: 10340c81f;  */

ulong FUN_10340c664(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10340c748);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10340c74c);
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
  FUN_10340d718(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10340c820);
  (*pcVar2)();
}



/* Entry: 10340c820; end: 10340c853;  */

void FUN_10340c820(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10340c854();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10340c854; end: 10340c98f;  */

undefined *
FUN_10340c854(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10340c990);
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
    puVar3 = param_1;
    (*param_5)();
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
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10340d718(0,param_6,param_7);
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



/* Entry: 10340c990; end: 10340ca33;  */

undefined8 FUN_10340c990(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  
  if (lRam0000000112f65e18 != -1) {
    func_0x000107c61568(0x112f65e18,FUN_10340c0b8);
  }
  lVar5 = lRam0000000113807318;
  uVar4 = *(ulong *)(lRam0000000113807318 + 0x10);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10340ca34);
    (*pcVar3)();
  }
  func_0x0001016e7c78();
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10340ca2c);
    (*pcVar3)();
  }
  if (uVar4 < *(ulong *)(lVar5 + 0x10)) {
    lVar5 = lVar5 + uVar4 * 0x18;
    uVar1 = *(undefined8 *)(lVar5 + 0x20);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10340ca30);
  (*pcVar3)();
}



/* Entry: 10340ca34; end: 10340cd7b;  */

void FUN_10340ca34(byte *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  byte **ppbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbStack_50;
  ulong uStack_48;
  
  pbVar9 = (byte *)((ulong)param_1 & 0xffffffffffff);
  pbVar10 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar15 = pbVar9;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar15 = pbVar10;
  }
  if (pbVar15 == (byte *)0x0) goto LAB_10340cca0;
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        param_1 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        param_2 = pbVar9;
      }
      if (*param_1 != 0x2b) {
        if (*param_1 != 0x2d) {
          if (param_2 == (byte *)0x0) goto LAB_10340cca0;
          pbVar15 = (byte *)0x0;
          pbVar10 = param_1;
          while (pbVar10 != (byte *)0x0) {
            if (((9 < *param_1 - 0x30) ||
                (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar15, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
               (uVar14 = (long)pbVar15 * 10, uVar13 = (ulong)(byte)(*param_1 - 0x30),
               pbVar15 = (byte *)(uVar14 + uVar13), CARRY8(uVar14,uVar13))) goto LAB_10340cca0;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            pbVar10 = param_2;
          }
          goto LAB_10340cca8;
        }
        pbVar10 = param_2 + -1;
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10340cd6c);
          (*pcVar8)();
        }
        if (pbVar10 != (byte *)0x0) {
          pbVar15 = (byte *)0x0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (auVar2._8_8_ = 0, auVar2._0_8_ = pbVar15, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
               (uVar14 = (long)pbVar15 * 10, uVar13 = (ulong)(byte)(*param_1 - 0x30),
               pbVar15 = (byte *)(uVar14 - uVar13), uVar14 < uVar13)) goto LAB_10340cca0;
            pbVar10 = pbVar10 + -1;
          } while (pbVar10 != (byte *)0x0);
          goto LAB_10340cca8;
        }
        goto LAB_10340cca0;
      }
      pbVar10 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10340cd74);
        (*pcVar8)();
      }
      if (pbVar10 == (byte *)0x0) goto LAB_10340cca0;
      pbVar15 = (byte *)0x0;
      do {
        param_1 = param_1 + 1;
        if (((9 < *param_1 - 0x30) ||
            (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar15, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
           (uVar14 = (long)pbVar15 * 10, uVar13 = (ulong)(byte)(*param_1 - 0x30),
           pbVar15 = (byte *)(uVar14 + uVar13), CARRY8(uVar14,uVar13))) goto LAB_10340cca0;
        pbVar10 = pbVar10 + -1;
      } while (pbVar10 != (byte *)0x0);
      goto LAB_10340cca8;
    }
    pbStack_50 = param_1;
    uStack_48 = (ulong)param_2 & 0xffffffffffffff;
    uVar16 = (uint)param_1 & 0xff;
    if (uVar16 == 0x2b) {
      if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10340cd78);
        (*pcVar8)();
      }
      pbVar10 = pbVar10 + -1;
      if (pbVar10 == (byte *)0x0) goto LAB_10340cc8c;
      pbVar15 = (byte *)0x0;
      pbVar9 = (byte *)((ulong)&pbStack_50 | 1);
      do {
        if (((9 < *pbVar9 - 0x30) ||
            (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar15, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
           (uVar14 = (long)pbVar15 * 10, uVar13 = (ulong)(byte)(*pbVar9 - 0x30),
           pbVar15 = (byte *)(uVar14 + uVar13), CARRY8(uVar14,uVar13))) goto LAB_10340cc8c;
        uVar16 = 0;
        pbVar10 = pbVar10 + -1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar10 != (byte *)0x0);
    }
    else if (uVar16 == 0x2d) {
      if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10340cd70);
        (*pcVar8)();
      }
      pbVar10 = pbVar10 + -1;
      if (pbVar10 == (byte *)0x0) {
LAB_10340cc8c:
        uVar16 = 1;
        pbVar15 = (byte *)0x0;
      }
      else {
        pbVar15 = (byte *)0x0;
        pbVar9 = (byte *)((ulong)&pbStack_50 | 1);
        do {
          if (((9 < *pbVar9 - 0x30) ||
              (auVar3._8_8_ = 0, auVar3._0_8_ = pbVar15, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
             (uVar14 = (long)pbVar15 * 10, uVar13 = (ulong)(byte)(*pbVar9 - 0x30),
             pbVar15 = (byte *)(uVar14 - uVar13), uVar14 < uVar13)) goto LAB_10340cc8c;
          uVar16 = 0;
          pbVar10 = pbVar10 + -1;
          pbVar9 = pbVar9 + 1;
        } while (pbVar10 != (byte *)0x0);
      }
    }
    else {
      if (pbVar10 == (byte *)0x0) goto LAB_10340cc8c;
      pbVar15 = (byte *)0x0;
      ppbVar12 = &pbStack_50;
      do {
        if (((9 < *(byte *)ppbVar12 - 0x30) ||
            (auVar7._8_8_ = 0, auVar7._0_8_ = pbVar15, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
           (uVar14 = (long)pbVar15 * 10, uVar13 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30),
           pbVar15 = (byte *)(uVar14 + uVar13), CARRY8(uVar14,uVar13))) goto LAB_10340cc8c;
        uVar16 = 0;
        pbVar10 = pbVar10 + -1;
        ppbVar12 = (byte **)((long)ppbVar12 + 1);
      } while (pbVar10 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(param_2);
    pbVar15 = param_2;
    func_0x000100f5015c(param_1,param_2,10);
    uVar16 = (uint)pbVar15;
    func_0x000107c6142c(param_2);
    pbVar15 = param_1;
  }
  if ((uVar16 & 0xff) == 1) {
LAB_10340cca0:
    FUN_10340c990();
    return;
  }
LAB_10340cca8:
  if (lRam0000000112f65e18 != -1) {
    func_0x000107c61568(0x112f65e18,FUN_10340c0b8);
  }
  uVar13 = *(ulong *)(lRam0000000113807318 + 0x10);
  if (uVar13 != 0) {
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = (ulong)pbVar15 / uVar13;
    }
    lVar11 = lRam0000000113807318 + ((long)pbVar15 - uVar14 * uVar13) * 0x18;
    uVar1 = *(undefined8 *)(lVar11 + 0x28);
    func_0x000107c61434(*(undefined8 *)(lVar11 + 0x20));
    func_0x000107c61434(uVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10340cd7c);
  (*pcVar8)();
}



/* Entry: 10340cd7c; end: 10340ce67;  */

undefined * FUN_10340cd7c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    FUN_10340c820(0,lVar5,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    do {
      puVar4 = puVar3;
      func_0x000107c5af88();
      func_0x000107c61180();
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_10340c820(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar2 + uVar1 * 8 + 0x20) = puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puVar2;
}



/* Entry: 10340ce68; end: 10340d2fb;  */

undefined *
FUN_10340ce68(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  double dVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  double dVar14;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c54b80(0,0,param_2,param_3);
  if ((ulong)param_4 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_4) {
      puVar12 = param_4;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar12 != (undefined *)0x0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,(ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10340d2fc);
      (*pcVar2)();
    }
    puVar13 = (undefined *)0x0;
    puVar7 = puStack_88;
    do {
      if (((ulong)param_4 & 0xc000000000000001) == 0) {
        if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10340d2d8);
          (*pcVar2)();
        }
        if (*(undefined **)(((ulong)param_4 & 0xffffffffffffff8) + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10340d2dc);
          (*pcVar2)();
        }
        puVar4 = *(undefined **)(param_4 + (long)puVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar13;
        FUN_10340c664(puVar13,param_4,&PTR__OBJC_CLASS___UIColor_1126aea70,0x112d48390);
      }
      puVar5 = puVar4;
      func_0x000107c3ab24();
      func_0x000107c61180();
      uVar6 = 0;
      func_0x000100ef8bfc();
      puStack_a0 = (undefined *)uVar6;
      func_0x000107c61170(puVar4);
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puStack_b8 = puVar5;
      puStack_88 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        func_0x000100c077e4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      puVar7 = puStack_88;
      puVar13 = puVar13 + 1;
      *(ulong *)(puStack_88 + 0x10) = uVar1 + 1;
      func_0x000100102924(&puStack_b8,puStack_88 + uVar1 * 0x20 + 0x20);
    } while (puVar12 != puVar13);
  }
  puVar12 = puVar7;
  func_0x000107c5fc48(puVar7,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar7);
  func_0x000107c535a0(puVar3);
  func_0x000107c61170(puVar12);
  lVar11 = *(long *)(param_5 + 0x10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 != 0) {
    puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001002ecff4(0,lVar11,0);
    puVar10 = (undefined8 *)(param_5 + 0x20);
    do {
      puVar12 = puStack_b8;
      uVar6 = *puVar10;
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(uVar6);
      uVar1 = *(ulong *)(puVar12 + 0x10);
      puStack_b8 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        func_0x0001002ecff4(1 < *(ulong *)(puVar12 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_b8 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_b8 + uVar1 * 8 + 0x20) = puVar7;
      lVar11 = lVar11 + -1;
      puVar10 = puVar10 + 1;
      puVar12 = puStack_b8;
    } while (lVar11 != 0);
  }
  uVar6 = 0;
  FUN_10340d718(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar7 = puVar12;
  func_0x000107c5fc48(puVar12,uVar6);
  func_0x000107c6142c(puVar12);
  func_0x000107c56084(puVar3);
  func_0x000107c61170(puVar7);
  dVar9 = 180.0;
  dVar14 = (param_1 * 3.141592653589793) / 180.0;
  func_0x000107c60e70(dVar14);
  func_0x000107c597c4(0.5 - dVar9 * 0.5,0.5 - dVar14 * 0.5,puVar3);
  func_0x000107c54598(dVar9 * 0.5 + 0.5,dVar14 * 0.5 + 0.5,puVar3);
  puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x000107c453e4();
  func_0x000107c58bfc(0x3ff0000000000000);
  puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c486fc(param_2,param_3);
  puVar12 = &UNK_110651690;
  func_0x000107c613fc(&UNK_110651690,0x18,7);
  *(undefined **)(puVar12 + 0x10) = puVar3;
  puVar7 = &UNK_1106516b8;
  func_0x000107c613fc(&UNK_1106516b8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10340d684;
  *(undefined **)(puVar7 + 0x18) = puVar12;
  uStack_98 = 0x10340d6c0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_100f9148c;
  puStack_a0 = &UNK_1106516d0;
  ppuVar8 = &puStack_b8;
  puStack_90 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar13 = puStack_90;
  func_0x000107c61174(puVar3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar13);
  puVar13 = puVar5;
  func_0x000107c45138(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c60bd0(ppuVar8);
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x6a,0xcd,0x1f,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar12);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10340d2f8);
    (*pcVar2)();
  }
  return puVar13;
}



/* Entry: 10340d2fc; end: 10340d683;  */

/* WARNING: Possible PIC construction at 0x00010340d50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340d5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340d610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340d628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340d5f0) */
/* WARNING: Removing unreachable block (ram,0x00010340d510) */
/* WARNING: Removing unreachable block (ram,0x00010340d518) */
/* WARNING: Removing unreachable block (ram,0x00010340d520) */
/* WARNING: Removing unreachable block (ram,0x00010340d614) */
/* WARNING: Removing unreachable block (ram,0x00010340d624) */
/* WARNING: Removing unreachable block (ram,0x00010340d540) */
/* WARNING: Removing unreachable block (ram,0x00010340d5fc) */
/* WARNING: Removing unreachable block (ram,0x00010340d594) */
/* WARNING: Removing unreachable block (ram,0x00010340d604) */
/* WARNING: Removing unreachable block (ram,0x00010340d608) */
/* WARNING: Removing unreachable block (ram,0x00010340d610) */
/* WARNING: Removing unreachable block (ram,0x00010340d5cc) */
/* WARNING: Removing unreachable block (ram,0x00010340d62c) */
/* WARNING: Removing unreachable block (ram,0x00010340d680) */
/* WARNING: Removing unreachable block (ram,0x00010340d644) */

void FUN_10340d2fc(double param_1,double param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_120 [176];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar6 = auStack_120;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 0;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 6;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  uVar3 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  puVar4 = PTR___sSbN_11034dd40;
  *(undefined **)(lVar2 + 0x48) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar2 + 0x30) = 1;
  uVar3 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  *(undefined1 **)(lVar2 + 0x58) = puVar6;
  *(undefined **)(lVar2 + 0x78) = puVar4;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  uVar3 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x80) = uVar3;
  *(undefined1 **)(lVar2 + 0x88) = puVar6;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  uVar3 = 0x112da99a0;
  func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
  *(undefined8 *)(lVar2 + 0xa8) = uVar3;
  *(undefined **)(lVar2 + 0x90) = puVar4;
  lVar5 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  uVar3 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),3,uVar3);
  dVar7 = (double)(long)param_1;
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10340d66c);
    (*pcVar1)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10340d670);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10340d674);
    (*pcVar1)();
  }
  dVar8 = (double)(long)param_2;
  if ((ulong)ABS(dVar8) < 0x7ff0000000000000) {
    if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10340d67c);
      (*pcVar1)();
    }
    if (dVar8 < 9.223372036854776e+18) {
      uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      lVar2 = lVar5;
      func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar5);
      func_0x000107c60aa0(uVar3,(long)dVar7,(long)dVar8,0x42475241,lVar2,&uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10340d680);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10340d678);
  (*pcVar1)();
}



/* Entry: 10340d684; end: 10340d6df;  */

void FUN_10340d684(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ab28();
  func_0x000107c61180();
  func_0x000107c500d4(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10340d6e0; end: 10340d6fb;  */

void FUN_10340d6e0(long param_1,long param_2)

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



/* Entry: 10340d6fc; end: 10340d717;  */

void FUN_10340d6fc(void)

{
  long unaff_x20;
  
  FUN_10340be78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10340d718; end: 10340d7bb;  */

void FUN_10340d718(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10340d7bc; end: 10340d81f;  */

undefined8 * FUN_10340d7bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 10340d820; end: 10340d863;  */

undefined8 * FUN_10340d820(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 10340d864; end: 10340d903;  */

int FUN_10340d864(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10340d904; end: 10340dc2b;  */

void FUN_10340d904(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  uVar4 = *unaff_x20;
  func_0x0001007d6c6c(1,0x654c64616f6c6572,0xea0000000000736e,uVar4,&PTR_DAT_110651a98);
  func_0x0001000285a8(0x112f4beb8,&UNK_10db9bc80);
  uVar1 = unaff_x20[2];
  func_0x000107c437ec(uVar1);
  func_0x000107c61180();
  func_0x0001000d224c(&uStack_58);
  uVar2 = uVar1;
  func_0x000100759c94(uVar1,uStack_58);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uStack_58);
  puVar3 = &UNK_110651790;
  func_0x000107c613fc(&UNK_110651790,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  func_0x000107c6157c(param_2);
  func_0x00010075a04c(0,1,FUN_10340dc78,puVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 10340dc2c; end: 10340dc77;  */

void FUN_10340dc2c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10340dc78; end: 10340dc83;  */

/* WARNING: Possible PIC construction at 0x00010340db90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340db94) */

void FUN_10340dc78(undefined8 *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar6 = (undefined *)*param_1;
  cVar2 = *(char *)(param_1 + 1);
  if (cVar2 == '\x01') {
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x18);
    func_0x000107c5fb78(0xd000000000000016,0x800000010f14b790);
    uVar4 = 0x112d393f0;
    puStack_68 = puVar6;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&puStack_68,&uStack_60,uVar4,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar4 = uStack_58;
    func_0x0001007d6c6c(3,uStack_60,uStack_58,uVar5,&PTR_DAT_110651a98);
    func_0x000107c6142c(uVar4);
    (*pcVar1)(puVar6,1);
    return;
  }
  if (puVar6 == (undefined *)0x0) {
    uVar4 = 0xd00000000000002b;
    func_0x000104366fc4(0xd00000000000002b,0x800000010f14b7b0,uVar5,&PTR_DAT_110651a98);
    FUN_10340dc84();
    puVar6 = &UNK_110651828;
    func_0x000107c613f8(&UNK_110651828,uVar4,0,0);
    (*pcVar1)();
  }
  else {
    puVar3 = puVar6;
    func_0x000107c61174(puVar6,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f14b7e0,uVar5,&PTR_DAT_110651a98);
    func_0x000107c61174(puVar3);
    (*pcVar1)(puVar6,0);
    if (cVar2 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar6);
  return;
}



/* Entry: 10340dc84; end: 10340dcc3;  */

void FUN_10340dc84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f66350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc200c;
  func_0x000107c61520(&UNK_10dbc200c,&UNK_110651828);
  puRam0000000112f66350 = puVar1;
  return;
}



/* Entry: 10340dcc4; end: 10340ddbb;  */

uint FUN_10340dcc4(uint *param_1,int param_2)

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



/* Entry: 10340ddbc; end: 10340de5b;  */

void FUN_10340ddbc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10340de5c; end: 10340de87;  */

undefined1  [16] FUN_10340de5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f14b7b0;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 10340de88; end: 10340dec7;  */

void FUN_10340de88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f66358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc1fe4;
  func_0x000107c61520(&UNK_10dbc1fe4,&UNK_110651828);
  puRam0000000112f66358 = puVar1;
  return;
}



/* Entry: 10340dec8; end: 10340dedf;  */

void FUN_10340dec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10340dee0; end: 10340e037;  */

void FUN_10340dee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106518d8;
  func_0x000107c613fc(&UNK_1106518d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10340e038,puVar1);
  return;
}



/* Entry: 10340e038; end: 10340e043;  */

void FUN_10340e038(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_10340e590();
  func_0x000107c613fc();
  FUN_10340e0a8(uStack_48,uStack_50,uStack_58,uStack_60);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110651978;
  return;
}



/* Entry: 10340e044; end: 10340e0a7;  */

undefined8
FUN_10340e044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10340e0a8(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 10340e0a8; end: 10340e40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10340e0a8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 auStack_70 [2];
  
  auStack_70[0] = 0;
  uVar10 = *(undefined8 *)(param_2 + _DAT_11306fae0);
  puVar2 = &UNK_110651900;
  func_0x000107c613fc(&UNK_110651900,0x18,7);
  *(undefined8 **)(puVar2 + 0x10) = auStack_70;
  puVar3 = &UNK_110651928;
  func_0x000107c613fc(&UNK_110651928,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10340e410;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  ppuStack_80 = (undefined **)0x10340e448;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1019dec60;
  puStack_88 = &UNK_110651940;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar6 = puStack_78;
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c4c590(uVar10);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar10);
  puVar11 = *(undefined **)(param_2 + _DAT_11306fb08);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11306fb20);
  uVar5 = 0;
  func_0x000103400550();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  puVar6 = puVar11;
  FUN_1034007f0(puVar11,uVar10);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x18) = puVar6;
  uVar12 = *(undefined8 *)(param_1 + _DAT_11306f9c8);
  func_0x0001000285a8(0x112d5c260,&UNK_10d9230d0);
  func_0x000107c61534();
  func_0x000107c61580(uVar12,2);
  func_0x000107c6157c(puVar6);
  pcVar1 = FUN_10340e510;
  func_0x0001000bdd8c(FUN_10340e510,uVar12);
  uVar10 = auStack_70[0];
  func_0x0001000285a8(0x112d5ce60,&UNK_10d923870);
  func_0x000107c61174(uVar10);
  uVar8 = param_3;
  func_0x000107c4f598(param_3);
  func_0x000107c61180();
  uVar7 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_4 + _DAT_1130344e8);
  ppuStack_80 = &PTR_DAT_1106507f8;
  puStack_a0 = puVar6;
  puStack_88 = (undefined *)uVar5;
  FUN_10341afc8(0);
  func_0x000107c610f8();
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(uVar9);
  uVar8 = 0;
  FUN_1034191d0(0,0,&puStack_a0,pcVar1,uVar10,uVar7,uVar9);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar12);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  uVar10 = auStack_70[0];
  *(undefined8 *)(unaff_x20 + 0x10) = uVar8;
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar10);
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x82,0x2a,0x25,1);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10340e410);
  (*pcVar1)();
}



/* Entry: 10340e410; end: 10340e467;  */

void FUN_10340e410(void)

{
  undefined8 in_x6;
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c4f4a8();
  func_0x000107c61180();
  uVar1 = *puVar2;
  *puVar2 = in_x6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10340e468; end: 10340e48f;  */

void FUN_10340e468(long param_1,long param_2)

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



/* Entry: 10340e490; end: 10340e4bb;  */

void FUN_10340e490(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10340e4bc; end: 10340e4fb;  */

undefined1  [16] FUN_10340e4bc(void)

{
  long unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x10)) + 0x188))()
  ;
  return ZEXT816(0);
}



/* Entry: 10340e4fc; end: 10340e50f;  */

void FUN_10340e4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110651968;
  return;
}



/* Entry: 10340e510; end: 10340e557;  */

void FUN_10340e510(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d3b7d8;
  func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
  uVar2 = 0x10340e484;
  func_0x0001000bfde0(0x10340e484,0,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10340e558; end: 10340e58f;  */

undefined ** FUN_10340e558(void)

{
  return &PTR_DAT_113066700;
}



/* Entry: 10340e590; end: 10340e5af;  */

void FUN_10340e590(void)

{
  func_0x000107c61168(&PTR_PTR_112f663e0);
  return;
}



/* Entry: 10340e5b0; end: 10340e677;  */

undefined4 FUN_10340e5b0(ulong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  undefined8 uStack_40;
  ulong uStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 - 8) + 0x40));
  lVar3 = (long)&uStack_40 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar3);
  puVar1 = &uStack_40;
  func_0x000107c6147c(puVar1,lVar3,param_1,&UNK_1107ac098,6);
  if (((int)puVar1 != 0) && (2 < uStack_38)) {
    if (uStack_38 == 3) {
      return 1;
    }
    func_0x000101d70adc(uStack_40);
  }
  FUN_10340e678(param_1,param_2);
  uVar2 = 0;
  if ((param_1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 10340e678; end: 10340eb63;  */

uint FUN_10340e678(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 extraout_x8;
  long extraout_x12;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  
  lVar13 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = auStack_90 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar13 + 0x10))(puVar8,extraout_x8,param_1);
  puVar3 = puVar8;
  func_0x000107c605a0(puVar8,param_1,param_2);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = param_1;
    func_0x000107c613f8(param_1,param_2,0,0);
    (**(code **)(lVar13 + 0x20))(param_2,puVar8,param_1);
  }
  else {
    (**(code **)(lVar13 + 8))(puVar8);
    puVar8 = param_1;
  }
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = PTR___sSSN_11034da80;
  lVar13 = *(long *)PTR__NSUnderlyingErrorKey_110345660;
  do {
    func_0x000107c614b0(puVar3);
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    puVar5 = puVar4;
    func_0x000107c4b85c();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    puStack_80 = puVar6;
    puStack_78 = puVar8;
    func_0x000100e8b654();
    uVar7 = 0;
    func_0x000107c6022c(&UNK_1106519e8,puVar1,puVar1,puVar5,puVar5);
    func_0x000107c6142c(puVar8);
    if ((uVar7 & 1) != 0) {
      func_0x000107c614ac(puVar3);
LAB_10340e8b8:
      func_0x000107c61170(puVar4);
      break;
    }
    puVar8 = puVar4;
    func_0x000107c5d9a4();
    func_0x000107c61180();
    puVar5 = puVar8;
    puVar11 = puVar1;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar8);
    lVar9 = lVar13;
    func_0x000107c5faec(lVar13);
    if ((*(long *)(puVar5 + 0x10) == 0) ||
       (puVar12 = puVar11, func_0x000100029284(), ((ulong)puVar12 & 1) == 0)) {
      func_0x000107c614ac(puVar3);
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(puVar11);
      goto LAB_10340e8b8;
    }
    func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar9 * 0x20,auStack_90 + 0x10);
    func_0x000107c614ac(puVar3);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar11);
    func_0x000107c61170(puVar4);
    uVar10 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = auStack_90 + 8;
    puVar8 = auStack_90 + 0x10;
    func_0x000107c6147c(puVar4,puVar8,puVar2 + 8,uVar10,0xe);
    puVar3 = puStack_88;
  } while (((ulong)puVar4 & 1) != 0);
  return (uint)uVar7 & 1;
}



/* Entry: 10340eb64; end: 10340ebf3;  */

void FUN_10340eb64(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100d47fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 10340ebf4; end: 10340eccb;  */

void FUN_10340ebf4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  FUN_10340eccc();
  plVar7 = *(long **)(unaff_x20 + 0x10);
  puVar2 = &UNK_110651b90;
  func_0x000107c613fc(&UNK_110651b90,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_103410004;
  puVar5 = puVar2;
  (**(code **)(*plVar7 + 0x60))(FUN_103410004);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(uVar1,pcVar4,puVar5);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 10340eccc; end: 10340ee97;  */

void FUN_10340eccc(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar5 = &UNK_110651cf8;
  func_0x000107c613fc(&UNK_110651cf8,0x20,7);
  *(ulong **)(puVar5 + 0x10) = &uStack_50;
  *(ulong **)(puVar5 + 0x18) = &uStack_60;
  puVar6 = &UNK_110651d20;
  func_0x000107c613fc(&UNK_110651d20,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_103410270;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  uStack_70 = 0x1034102fc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1019dec60;
  puStack_78 = &UNK_110651d38;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_68;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c4c590(uVar8);
  func_0x000107c60bd0(ppuVar7);
  uVar9 = uStack_58;
  uVar3 = uStack_60;
  if (uStack_48 == 0) {
LAB_10340edf4:
    if (uStack_58 == 0) goto LAB_10340ee30;
    uVar1 = uStack_60 & 0xffffffffffff;
    if ((uStack_58 & 0x2000000000000000) != 0) {
      uVar1 = uStack_58 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_10340ee30;
    func_0x000107c61434(uStack_58);
    func_0x00010340f1d8(uVar3,uVar9);
  }
  else {
    uVar1 = uStack_50 & 0xffffffffffff;
    if ((uStack_48 & 0x2000000000000000) != 0) {
      uVar1 = uStack_48 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_10340edf4;
    uVar9 = *(ulong *)(unaff_x20 + 0x58);
    *(ulong *)(unaff_x20 + 0x50) = uStack_50;
    *(ulong *)(unaff_x20 + 0x58) = uStack_48;
    func_0x000107c61434();
  }
  func_0x000107c6142c(uVar9);
LAB_10340ee30:
  func_0x000107c6142c(uStack_58);
  uVar3 = uStack_48;
  func_0x000107c61574(puVar5);
  func_0x000107c6142c(uVar3);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x82,0x47,0x25,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10340ee98);
  (*pcVar4)();
}



/* Entry: 10340ee98; end: 10340eef3;  */

void FUN_10340ee98(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10340eef4(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10340eef4; end: 10340f35b;  */

/* WARNING: Possible PIC construction at 0x00010340eff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340f040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340f6e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340f728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340f924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340f96c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340f9e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340fa40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340f830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340efd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340f834) */
/* WARNING: Removing unreachable block (ram,0x00010340fa44) */
/* WARNING: Removing unreachable block (ram,0x00010340f9e8) */
/* WARNING: Removing unreachable block (ram,0x00010340f970) */
/* WARNING: Removing unreachable block (ram,0x00010340f928) */
/* WARNING: Removing unreachable block (ram,0x00010340f72c) */
/* WARNING: Removing unreachable block (ram,0x00010340f9b0) */
/* WARNING: Removing unreachable block (ram,0x00010340fa88) */
/* WARNING: Removing unreachable block (ram,0x00010340f6e4) */
/* WARNING: Removing unreachable block (ram,0x00010340f044) */
/* WARNING: Removing unreachable block (ram,0x00010340f3f0) */
/* WARNING: Removing unreachable block (ram,0x00010340f42c) */
/* WARNING: Removing unreachable block (ram,0x00010340f444) */
/* WARNING: Removing unreachable block (ram,0x00010340f450) */
/* WARNING: Removing unreachable block (ram,0x00010340f544) */
/* WARNING: Removing unreachable block (ram,0x00010340f774) */
/* WARNING: Removing unreachable block (ram,0x00010340fa8c) */
/* WARNING: Removing unreachable block (ram,0x00010340f54c) */
/* WARNING: Removing unreachable block (ram,0x00010340f7c4) */
/* WARNING: Removing unreachable block (ram,0x00010340f5dc) */
/* WARNING: Removing unreachable block (ram,0x00010340f7d0) */
/* WARNING: Removing unreachable block (ram,0x00010340f7d8) */
/* WARNING: Removing unreachable block (ram,0x00010340f690) */
/* WARNING: Removing unreachable block (ram,0x00010340f6a0) */
/* WARNING: Removing unreachable block (ram,0x00010340f874) */
/* WARNING: Removing unreachable block (ram,0x00010340f7e4) */
/* WARNING: Removing unreachable block (ram,0x00010340f7f4) */
/* WARNING: Removing unreachable block (ram,0x00010340f7fc) */
/* WARNING: Removing unreachable block (ram,0x00010340f88c) */
/* WARNING: Removing unreachable block (ram,0x00010340f9b8) */
/* WARNING: Removing unreachable block (ram,0x00010340f8bc) */
/* WARNING: Removing unreachable block (ram,0x00010340f9cc) */
/* WARNING: Removing unreachable block (ram,0x00010340f9fc) */
/* WARNING: Removing unreachable block (ram,0x00010340fa38) */
/* WARNING: Removing unreachable block (ram,0x00010340f8dc) */
/* WARNING: Removing unreachable block (ram,0x00010340f904) */
/* WARNING: Removing unreachable block (ram,0x00010340f9e0) */
/* WARNING: Removing unreachable block (ram,0x00010340f90c) */
/* WARNING: Removing unreachable block (ram,0x00010340f6ac) */
/* WARNING: Removing unreachable block (ram,0x00010340eff8) */
/* WARNING: Removing unreachable block (ram,0x00010340efd8) */
/* WARNING: Removing unreachable block (ram,0x00010340f010) */

void FUN_10340eef4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x38) = 1;
    lVar1 = param_1;
    func_0x000107c49b94();
    if ((int)lVar1 == 0) {
      return;
    }
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    lVar2 = *(long *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x40) = lVar1;
    *(long *)(unaff_x20 + 0x48) = param_2;
  }
  else {
    lVar1 = param_1;
    func_0x000107c49b94();
    if ((int)lVar1 == 0) {
      lVar2 = *(long *)(unaff_x20 + 0x48);
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      *(undefined8 *)(unaff_x20 + 0x48) = 0;
    }
    else {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      lVar1 = param_1;
      lVar2 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      lVar3 = *(long *)(unaff_x20 + 0x48);
      if ((lVar3 != 0) && ((lVar1 != *(long *)(unaff_x20 + 0x40) || (lVar3 != lVar2)))) {
        func_0x000107c605b8(lVar1,lVar2,*(long *)(unaff_x20 + 0x40),lVar3,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 10340f35c; end: 10340f3ef;  */

void FUN_10340f35c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x28);
      uVar1 = *(ulong *)(param_1 + 0x20) & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        uVar3 = *(undefined8 *)(param_2 + 0x58);
        *(ulong *)(param_2 + 0x50) = *(ulong *)(param_1 + 0x20);
        *(ulong *)(param_2 + 0x58) = uVar2;
        func_0x000107c61434(uVar2);
        func_0x000107c61574(param_2);
        func_0x000107c6142c(uVar3);
        return;
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10340f3f0; end: 10340faaf;  */

void FUN_10340f3f0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long unaff_x20;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  code *pcStack_148;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  puVar2 = *(undefined **)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = puVar2;
  func_0x000107c501d0();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = *(undefined **)(unaff_x20 + 0x20);
    func_0x000107c61174(puVar3);
  }
  puStack_b8 = (undefined *)0x0;
  puStack_b0 = (undefined *)0x0;
  puStack_c0 = (undefined *)0x0;
  puStack_d0 = (undefined *)0x0;
  puStack_c8 = (undefined *)0x0;
  puStack_d8 = (undefined *)0x0;
  puVar4 = &UNK_110651bb8;
  func_0x000107c613fc(&UNK_110651bb8,0x40,7);
  *(undefined ***)(puVar4 + 0x10) = &puStack_b0;
  *(undefined ***)(puVar4 + 0x18) = &puStack_b8;
  *(undefined ***)(puVar4 + 0x20) = &puStack_c0;
  *(undefined ***)(puVar4 + 0x28) = &puStack_c8;
  *(undefined ***)(puVar4 + 0x30) = &puStack_d0;
  *(undefined ***)(puVar4 + 0x38) = &puStack_d8;
  puVar5 = &UNK_110651be0;
  uVar16 = 0x20;
  func_0x000107c613fc(&UNK_110651be0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10341000c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = (undefined *)0x103410040;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = (undefined *)0x42000000;
  puStack_98 = &UNK_1019dec60;
  puStack_90 = &UNK_110651bf8;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_80);
  func_0x000107c4c590(puVar3);
  func_0x000107c60bd0(ppuVar6);
  puVar8 = puStack_b0;
  puVar9 = puStack_b8;
  puVar10 = puStack_c0;
  puVar11 = puStack_c8;
  puVar5 = puStack_d0;
  if ((puStack_b0 == (undefined *)0x0) || (puStack_b8 == (undefined *)0x0)) {
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puStack_d8);
    func_0x000107c61170(puStack_d0);
    func_0x000107c61170(puStack_c8);
    func_0x000107c61170(puStack_c0);
    func_0x000107c61170(puStack_b8);
    puVar2 = puStack_b0;
    func_0x000107c61574(puVar4);
    func_0x000107c61170(puVar2);
    return;
  }
  puStack_a8 = puStack_b0;
  puStack_a0 = puStack_b8;
  puStack_98 = puStack_c0;
  puStack_90 = puStack_c8;
  puStack_88 = puStack_d0;
  puStack_80 = puStack_d8;
  uStack_e8 = 0;
  uStack_e0 = 0;
  puVar7 = puStack_d8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  puVar12 = puVar8;
  func_0x000107c501d8();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    pcStack_148 = (code *)0x0;
LAB_10340f7d8:
    uVar18 = *(ulong *)(unaff_x20 + 0x58);
    if (uVar18 == 0) goto LAB_10340f88c;
LAB_10340f7e4:
    uVar20 = *(ulong *)(unaff_x20 + 0x50);
    uVar1 = uVar20 & 0xffffffffffff;
    if ((uVar18 & 0x2000000000000000) != 0) {
      uVar1 = uVar18 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_10340f88c;
    func_0x000107c61434(uVar18);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    FUN_103410080(uVar20,uVar18,&puStack_a8,puVar2);
    func_0x000107c6142c(uVar18);
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
  }
  else {
    puVar19 = &UNK_110651c30;
    func_0x000107c613fc(&UNK_110651c30,0x18,7);
    *(ulong **)(puVar19 + 0x10) = &uStack_e8;
    puVar13 = &UNK_110651c58;
    uVar16 = 0x20;
    func_0x000107c613fc(&UNK_110651c58,0x20,7);
    *(code **)(puVar13 + 0x10) = FUN_1034101f4;
    *(undefined **)(puVar13 + 0x18) = puVar19;
    pcStack_f8 = FUN_1034101f8;
    puStack_118 = puVar14;
    uStack_110 = 0x42000000;
    puStack_108 = &UNK_100de6bdc;
    puStack_100 = &UNK_110651c70;
    ppuVar6 = &puStack_118;
    puStack_f0 = puVar13;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_f0);
    func_0x000107c4c79c(puVar12);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar12);
    uVar1 = uStack_e0;
    uVar18 = uStack_e8;
    if (uStack_e0 == 0) {
      pcStack_148 = FUN_1034101f4;
      goto LAB_10340f7d8;
    }
    uVar20 = uStack_e8 & 0xffffffffffff;
    if ((uStack_e0 & 0x2000000000000000) != 0) {
      uVar20 = uStack_e0 >> 0x38 & 0xf;
    }
    if (uVar20 != 0) {
      func_0x000107c61434(uStack_e0);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
      FUN_103410080(uVar18,uVar1,&puStack_a8,puVar2);
      func_0x000107c6142c(uVar1);
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      func_0x000107c6142c(uStack_e0);
      func_0x000107c61170(puStack_d8);
      func_0x000107c61170(puStack_d0);
      func_0x000107c61170(puStack_c8);
      func_0x000107c61170(puStack_c0);
      func_0x000107c61170(puStack_b8);
      puVar2 = puStack_b0;
      func_0x000107c61574(puVar4);
      func_0x000107c61170(puVar2);
      pcStack_148 = FUN_1034101f4;
      goto LAB_10340fa88;
    }
    pcStack_148 = FUN_1034101f4;
    uVar18 = *(ulong *)(unaff_x20 + 0x58);
    if (uVar18 != 0) goto LAB_10340f7e4;
LAB_10340f88c:
    puVar14 = puVar8;
    func_0x000107c4e004();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    puVar12 = puVar7;
    puVar13 = puVar11;
    puVar17 = puVar8;
    if (puVar14 != (undefined *)0x0) {
      puVar15 = puVar14;
      func_0x000107c50210();
      func_0x000107c61180();
      func_0x000107c61170(puVar14);
      if (puVar15 != (undefined *)0x0) {
        puVar14 = puVar15;
        func_0x000107c5faec();
        func_0x000107c61170(puVar15);
        uVar18 = (ulong)puVar14 & 0xffffffffffff;
        if ((uVar16 & 0x2000000000000000) != 0) {
          uVar18 = uVar16 >> 0x38 & 0xf;
        }
        if (uVar18 != 0) {
          func_0x00010340fb98(puVar14,uVar16,param_1,&puStack_a8);
          func_0x000107c6142c(uVar16);
          func_0x000107c615e8(puVar2);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar8);
          func_0x000107c6142c(uStack_e0);
          func_0x000107c61170(puStack_d8);
          func_0x000107c61170(puStack_d0);
          func_0x000107c61170(puStack_c8);
          func_0x000107c61170(puStack_c0);
          func_0x000107c61170(puStack_b8);
          puVar2 = puStack_b0;
          func_0x000107c61574(puVar4);
          func_0x000107c61170(puVar2);
          goto LAB_10340fa88;
        }
        func_0x000107c6142c(uVar16);
        puVar12 = puVar3;
        puVar13 = puVar5;
        puVar3 = puVar8;
        puVar17 = puVar9;
        puVar9 = puVar10;
        puVar10 = puVar11;
        puVar5 = puVar7;
      }
    }
    puVar8 = puVar3;
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar17);
  }
  func_0x000107c61170(puVar8);
  func_0x000107c6142c(uStack_e0);
  func_0x000107c61170(puStack_d8);
  func_0x000107c61170(puStack_d0);
  func_0x000107c61170(puStack_c8);
  func_0x000107c61170(puStack_c0);
  func_0x000107c61170(puStack_b8);
  puVar2 = puStack_b0;
  func_0x000107c61574(puVar4);
  func_0x000107c61170(puVar2);
LAB_10340fa88:
  func_0x0001010398f0(pcStack_148,puVar19);
  return;
}



/* Entry: 10340fab0; end: 10340fe23;  */

/* WARNING: Possible PIC construction at 0x00010340fb00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340fb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340fb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340fb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340fb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340fb4c) */
/* WARNING: Removing unreachable block (ram,0x00010340fb34) */
/* WARNING: Removing unreachable block (ram,0x00010340fb1c) */
/* WARNING: Removing unreachable block (ram,0x00010340fb04) */
/* WARNING: Removing unreachable block (ram,0x00010340fb64) */

void FUN_10340fab0(undefined8 param_1)

{
  undefined8 *in_x7;
  undefined8 uVar1;
  
  uVar1 = *in_x7;
  *in_x7 = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10340fe24; end: 10340ff77;  */

void FUN_10340fe24(long param_1,long param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10340ff58:
    func_0x000107c61574();
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  uVar4 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar4 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) goto LAB_10340ff58;
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(ulong *)(param_2 + 0x50) = uVar1;
  *(ulong *)(param_2 + 0x58) = uVar2;
  func_0x000107c61438(uVar2,2);
  func_0x000107c6142c(uVar5);
  lVar3 = *(long *)(param_2 + 0x48);
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_2 + 0x40);
    if (((uVar4 != param_3) || (lVar3 != param_4)) &&
       (func_0x000107c605b8(uVar4,lVar3,param_3,param_4,0), (uVar4 & 1) == 0)) {
      func_0x000107c6142c(uVar2);
      goto LAB_10340ff58;
    }
    lVar3 = *(long *)(param_2 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      FUN_103410080(uVar1,uVar2,param_5,lVar3);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar3);
      goto LAB_10340ff3c;
    }
  }
  func_0x000107c61574(param_2);
LAB_10340ff3c:
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10340ff78; end: 103410003;  */

void FUN_10340ff78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 103410004; end: 10341000b;  */

void FUN_103410004(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10340eef4(uVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10341000c; end: 103410063;  */

void FUN_10341000c(void)

{
  FUN_10340fab0();
  return;
}



/* Entry: 103410064; end: 10341007f;  */

void FUN_103410064(long param_1,long param_2)

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



/* Entry: 103410080; end: 1034101f3;  */

void FUN_103410080(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  undefined8 auStack_70 [2];
  
  lVar2 = 0;
  uVar6 = param_2;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(&stack0xffffffffffffffa0 + lVar1);
  func_0x000107c5eeac();
  (**(code **)(lVar8 + 8))(&stack0xffffffffffffffa0 + lVar1,lVar2);
  uVar7 = uVar6;
  func_0x000107c5fb1c(lVar3,uVar6);
  func_0x000107c6142c(uVar6);
  puVar4 = PTR_PTR_1126c55c8;
  func_0x000107c610f8(PTR_PTR_1126c55c8);
  func_0x000107c5fadc(lVar3,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c48618(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  puVar5 = PTR_PTR_1126b1bb0;
  func_0x000107c61168(PTR_PTR_1126b1bb0);
  *(undefined8 *)((long)auStack_70 + lVar1) = *(undefined8 *)(param_3 + 0x28);
  func_0x000107c4b3c4();
  func_0x000107c61180();
  func_0x000107c57d4c(param_4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1034101f4; end: 1034101f7;  */

void FUN_1034101f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1034101f8; end: 103410217;  */

void FUN_1034101f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103410218; end: 103410227;  */

void FUN_103410218(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10340ff58:
    func_0x000107c61574();
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  uVar7 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar7 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar7 == 0) goto LAB_10340ff58;
  uVar8 = *(undefined8 *)(lVar4 + 0x58);
  *(ulong *)(lVar4 + 0x50) = uVar1;
  *(ulong *)(lVar4 + 0x58) = uVar2;
  func_0x000107c61438(uVar2,2);
  func_0x000107c6142c(uVar8);
  lVar5 = *(long *)(lVar4 + 0x48);
  if (lVar5 != 0) {
    uVar7 = *(ulong *)(lVar4 + 0x40);
    if (((uVar7 != uVar3) || (lVar5 != lVar6)) &&
       (func_0x000107c605b8(uVar7,lVar5,uVar3,lVar6,0), (uVar7 & 1) == 0)) {
      func_0x000107c6142c(uVar2);
      goto LAB_10340ff58;
    }
    lVar6 = *(long *)(lVar4 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      FUN_103410080(uVar1,uVar2,unaff_x20 + 0x28,lVar6);
      func_0x000107c61574(lVar4);
      func_0x000107c615e8(lVar6);
      goto LAB_10340ff3c;
    }
  }
  func_0x000107c61574(lVar4);
LAB_10340ff3c:
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103410228; end: 10341026f;  */

undefined8 FUN_103410228(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103410270; end: 103410293;  */

void FUN_103410270(void)

{
  func_0x00010340f05c();
  return;
}



/* Entry: 103410294; end: 10341029b;  */

void FUN_103410294(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x28);
      uVar1 = *(ulong *)(param_1 + 0x20) & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x58);
        *(ulong *)(lVar3 + 0x50) = *(ulong *)(param_1 + 0x20);
        *(ulong *)(lVar3 + 0x58) = uVar2;
        func_0x000107c61434(uVar2);
        func_0x000107c61574(lVar3);
        func_0x000107c6142c(uVar4);
        return;
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10341029c; end: 1034102cb;  */

void FUN_10341029c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1034102cc; end: 1034102ff;  */

void FUN_1034102cc(long param_1,long param_2)

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



/* Entry: 103410300; end: 10341040b;  */

void FUN_103410300(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c4c188();
  func_0x000107c61180();
  func_0x000107c4da80();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = &UNK_110651e10;
  func_0x000107c613fc(&UNK_110651e10,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_40 = FUN_103410564;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100c1de60;
  puStack_48 = &UNK_110651e28;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar3 = uVar4;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10341040c; end: 10341045f;  */

void FUN_10341040c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103410460();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103410460; end: 103410507;  */

void FUN_103410460(void)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  lVar1 = unaff_x20[2];
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c501d0();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x0001007d6c6c(1,0xd000000000000042,0x800000010f14b830,uVar3,&PTR_DAT_110651b58);
      func_0x000107c57d4c(lVar1);
    }
    else {
      func_0x000107c61170();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 103410508; end: 103410563;  */

void FUN_103410508(void)

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



/* Entry: 103410564; end: 103410587;  */

void FUN_103410564(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103410460();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103410588; end: 103410763;  */

void FUN_103410588(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plStack_48;
  
  func_0x0001000d224c(&plStack_48);
  plVar1 = plStack_48;
  func_0x000100471e0c(plStack_48,0);
  func_0x000107c615e8(plStack_48);
  puVar2 = &UNK_110651e60;
  func_0x000107c613fc(&UNK_110651e60,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_1034107c0;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_1034107c0);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x28),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 103410764; end: 1034107bf;  */

void FUN_103410764(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034107c0; end: 1034107c7;  */

void FUN_1034107c0(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  uVar6 = param_1[2];
  puVar2 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar2,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((uint)((ulong)uVar6 >> 0x3d) - 1 < 3) {
      func_0x000107c4b1dc(uVar4);
      func_0x000107c61180();
      uVar6 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      FUN_103400e38(uVar6,puVar2);
      func_0x000107c61574(lVar1);
      func_0x000107c6142c(puVar2);
    }
    else {
      lVar3 = *(long *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar3 + 0x28);
      if (lVar5 == 0) {
        func_0x000107c61574();
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        FUN_103400cfc(uVar4,lVar5);
        func_0x000107c61574(lVar1);
        func_0x000107c6142c(lVar5);
      }
    }
  }
  return;
}



/* Entry: 1034107c8; end: 1034107d3; -[SCGamesLensActivationEntryPoint gamesScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034107c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666b0;
  func_0x000107c61428(param_1 + _DAT_112f666b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034107d4; end: 1034107df; -[SCGamesLensActivationEntryPoint setGamesScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034107d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666b0;
  func_0x000107c61428(param_1 + _DAT_112f666b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034107e0; end: 1034107eb; -[SCGamesLensActivationEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034107e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666b8;
  func_0x000107c61428(param_1 + _DAT_112f666b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034107ec; end: 1034107f7; -[SCGamesLensActivationEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034107ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666b8;
  func_0x000107c61428(param_1 + _DAT_112f666b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034107f8; end: 103410803; -[SCGamesLensActivationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034107f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666c0;
  func_0x000107c61428(param_1 + _DAT_112f666c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103410804; end: 10341080f; -[SCGamesLensActivationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410804(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666c0;
  func_0x000107c61428(param_1 + _DAT_112f666c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103410810; end: 10341081b; -[SCGamesLensActivationEntryPoint lensModeFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410810(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666c8;
  func_0x000107c61428(param_1 + _DAT_112f666c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10341081c; end: 103410827; -[SCGamesLensActivationEntryPoint setLensModeFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341081c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666c8;
  func_0x000107c61428(param_1 + _DAT_112f666c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103410828; end: 103410833; -[SCGamesLensActivationEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410828(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666d0;
  func_0x000107c61428(param_1 + _DAT_112f666d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103410834; end: 10341083f; -[SCGamesLensActivationEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410834(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666d0;
  func_0x000107c61428(param_1 + _DAT_112f666d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103410840; end: 10341084b; -[SCGamesLensActivationEntryPoint lensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410840(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666d8;
  func_0x000107c61428(param_1 + _DAT_112f666d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10341084c; end: 103410857; -[SCGamesLensActivationEntryPoint setLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341084c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666d8;
  func_0x000107c61428(param_1 + _DAT_112f666d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103410858; end: 103410863; -[SCGamesLensActivationEntryPoint launchDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410858(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666e0;
  func_0x000107c61428(param_1 + _DAT_112f666e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103410864; end: 10341086f; -[SCGamesLensActivationEntryPoint setLaunchDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410864(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666e0;
  func_0x000107c61428(param_1 + _DAT_112f666e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103410870; end: 10341087b; -[SCGamesLensActivationEntryPoint playGamesLensScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410870(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666e8;
  func_0x000107c61428(param_1 + _DAT_112f666e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10341087c; end: 103410887; -[SCGamesLensActivationEntryPoint setPlayGamesLensScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341087c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666e8;
  func_0x000107c61428(param_1 + _DAT_112f666e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103410888; end: 103410893; -[SCGamesLensActivationEntryPoint lensErrorHandlingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410888(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666f0;
  func_0x000107c61428(param_1 + _DAT_112f666f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103410894; end: 10341089f; -[SCGamesLensActivationEntryPoint setLensErrorHandlingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410894(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666f0;
  func_0x000107c61428(param_1 + _DAT_112f666f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034108a0; end: 1034108ab; -[SCGamesLensActivationEntryPoint lensDownloadMetadataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034108a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f666f8;
  func_0x000107c61428(param_1 + _DAT_112f666f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034108ac; end: 1034108b7; -[SCGamesLensActivationEntryPoint setLensDownloadMetadataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034108ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f666f8;
  func_0x000107c61428(param_1 + _DAT_112f666f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034108b8; end: 1034108c3; -[SCGamesLensActivationEntryPoint lensDataFetcherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034108b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f66700;
  func_0x000107c61428(param_1 + _DAT_112f66700,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034108c4; end: 1034108cf; -[SCGamesLensActivationEntryPoint setLensDataFetcherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034108c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f66700;
  func_0x000107c61428(param_1 + _DAT_112f66700,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034108d0; end: 1034108db; -[SCGamesLensActivationEntryPoint playGamesCapturingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034108d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f66708;
  func_0x000107c61428(param_1 + _DAT_112f66708,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034108dc; end: 1034108e7; -[SCGamesLensActivationEntryPoint setPlayGamesCapturingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034108dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f66708;
  func_0x000107c61428(param_1 + _DAT_112f66708,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034108e8; end: 1034108f3; -[SCGamesLensActivationEntryPoint webLensPlayerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034108e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f66710;
  func_0x000107c61428(param_1 + _DAT_112f66710,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034108f4; end: 1034108ff; -[SCGamesLensActivationEntryPoint setWebLensPlayerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034108f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f66710;
  func_0x000107c61428(param_1 + _DAT_112f66710,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103410900; end: 10341090b; -[SCGamesLensActivationEntryPoint playGamesPresenterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410900(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f66718;
  func_0x000107c61428(param_1 + _DAT_112f66718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10341090c; end: 10341094f;  */

void FUN_10341090c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103410950; end: 10341095b; -[SCGamesLensActivationEntryPoint setPlayGamesPresenterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410950(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f66718;
  func_0x000107c61428(param_1 + _DAT_112f66718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


