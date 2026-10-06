/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10149ae5c; end: 10149b0eb;  */

undefined1  [16] FUN_10149ae5c(byte *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  code *pcVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  char cVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  iVar13 = (int)param_3;
  uVar16 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10149b0d8);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) goto LAB_10149b0c8;
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_10149b0c8;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_3;
      if ((SUB168(auVar5 * auVar8,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
         CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) goto LAB_10149b0ac;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar13 + 0x30;
        uVar2 = 0x61;
        if (10 < (long)param_3) {
          uVar2 = iVar13 + 0x57;
        }
        uVar11 = 0x41;
        if (10 < (long)param_3) {
          uVar1 = 0x3a;
          uVar11 = iVar13 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar15 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar17 = (uint)bVar3;
            if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
              uVar16 = 1;
              if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_10149b0c8;
              cVar18 = -0x57;
            }
            else {
              cVar18 = -0x37;
            }
          }
          else {
            cVar18 = -0x30;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar15;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_3;
          if ((SUB168(auVar6 * auVar9,8) != 0) ||
             (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
             CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar15;
            return auVar20;
          }
        } while( true );
      }
LAB_10149b0ac:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10149b0d4);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) {
LAB_10149b0c8:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar16;
      return auVar10 << 0x40;
    }
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_10149b0c8;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_3;
      if ((SUB168(auVar4 * auVar7,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 - (byte)(bVar3 + cVar18),
         uVar16 < (byte)(bVar3 + cVar18))) goto LAB_10149b0ac;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar15;
  return auVar19;
}



/* Entry: 10149b0ec; end: 10149b1f7;  */

void FUN_10149b0ec(long param_1)

{
  func_0x0001014992fc(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 10149b1f8; end: 10149b343;  */

long FUN_10149b1f8(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar5 = (ulong *)(param_4 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar7 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *puVar5;
  if (param_2 == (undefined8 *)0x0) {
    lVar9 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10149b344);
      (*pcVar2)();
    }
    lVar4 = 0;
    lVar8 = 0;
    uVar10 = 0x3f - uVar6 >> 6;
    lVar9 = lVar4;
    while( true ) {
      while (uVar7 == 0) {
        bVar3 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10149b340);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar9) {
          uVar7 = 0;
          if ((long)uVar10 <= lVar4 + 1) {
            uVar10 = lVar4 + 1;
          }
          lVar9 = uVar10 - 1;
          param_3 = lVar8;
          goto LAB_10149b304;
        }
        uVar7 = puVar5[lVar9];
      }
      lVar8 = lVar8 + 1;
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar9 * 0x200);
      if (lVar8 == param_3) break;
      func_0x000107c6157c();
      lVar4 = lVar9;
      param_2 = param_2 + 1;
    }
    func_0x000107c6157c();
  }
LAB_10149b304:
  *param_1 = param_4;
  param_1[1] = (long)puVar5;
  param_1[2] = ~uVar6;
  param_1[3] = lVar9;
  param_1[4] = uVar7;
  return param_3;
}



/* Entry: 10149b344; end: 10149b437;  */

long FUN_10149b344(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = (ulong *)(param_4 + 0x38);
  uVar5 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (-uVar5 < 0x40) {
    uVar6 = ~(-1L << (-uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *puVar4;
  if (param_2 == (undefined8 *)0x0) {
    lVar7 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10149b438);
      (*pcVar2)();
    }
    lVar7 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar5 >> 6;
    lVar8 = lVar7;
    do {
      while (uVar6 == 0) {
        bVar3 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10149b434);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar7) {
          uVar6 = 0;
          if ((long)uVar10 <= lVar8 + 1) {
            uVar10 = lVar8 + 1;
          }
          lVar7 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_10149b418;
        }
        uVar6 = puVar4[lVar7];
      }
      lVar9 = lVar9 + 1;
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar7 * 0x200);
      lVar8 = lVar7;
      param_2 = param_2 + 1;
    } while (lVar9 != param_3);
  }
LAB_10149b418:
  *param_1 = param_4;
  param_1[1] = (long)puVar4;
  param_1[2] = ~uVar5;
  param_1[3] = lVar7;
  param_1[4] = uVar6;
  return param_3;
}



/* Entry: 10149b438; end: 10149b58b;  */

undefined8 * FUN_10149b438(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((ulong)param_3 >> 0x3e == 0) {
    puVar5 = (undefined8 *)((undefined8 *)((ulong)param_3 & 0xffffffffffffff8))[2];
    puVar7 = param_1;
  }
  else {
    puVar5 = (undefined8 *)((ulong)param_3 & 0xffffffffffffff8);
    if (((ulong)param_3 & 0x8000000000000000) != 0) {
      puVar5 = param_3;
    }
    func_0x000107c60480();
    puVar7 = puVar5;
  }
  if (puVar5 != (undefined8 *)0x0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10149b58c);
      (*pcVar1)();
    }
    if ((ulong)param_3 >> 0x3e == 0) {
      lVar6 = *(long *)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10149b580);
        (*pcVar1)();
      }
      func_0x0001014a256c();
      func_0x000107c6140c(param_1,((ulong)param_3 & 0xffffffffffffff8) + 0x20,lVar6,puVar7);
    }
    else {
      puVar7 = (undefined8 *)((ulong)param_3 & 0xffffffffffffff8);
      if (((ulong)param_3 & 0x8000000000000000) != 0) {
        puVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)puVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10149b584);
        (*pcVar1)();
      }
      if ((long)puVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10149b588);
        (*pcVar1)();
      }
      if (((ulong)param_3 & 0xc000000000000001) == 0) {
        uVar3 = param_3[4];
        *param_1 = uVar3;
        lVar6 = (long)puVar5 + -1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar5 = param_3 + 5;
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar5;
            *param_1 = uVar3;
            func_0x000107c6157c(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar5 = puVar5 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c6157c(uVar3);
      }
      else {
        puVar7 = (undefined8 *)0x0;
        do {
          puVar2 = puVar7;
          func_0x00010149553c(puVar7,param_3);
          param_1[(long)puVar7] = puVar2;
          puVar7 = (undefined8 *)((long)puVar7 + 1);
        } while (puVar5 != puVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10149b58c; end: 10149b6bf;  */

undefined * FUN_10149b58c(undefined *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_50;
  ulong uStack_48;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    puVar4 = (undefined *)((ulong)param_1 & 0xffffffffffff);
    puVar5 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    puVar2 = puVar4;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar2 = puVar5;
    }
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar2 != (undefined *)0x0) {
      FUN_100edbfc8(puVar2,0);
      puVar3 = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          func_0x000107c60358(param_1);
          if ((long)puVar4 < (long)param_2) goto LAB_10149b6bc;
        }
        else {
          param_1 = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar4;
          if (SBORROW8((long)puVar4,(long)puVar4)) {
LAB_10149b6bc:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10149b6c0);
            (*pcVar1)();
          }
        }
        func_0x000107c610b4(puVar2 + 0x20,param_1,param_2);
        if (param_2 != puVar4) {
LAB_10149b628:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10149b62c);
          (*pcVar1)();
        }
      }
      else {
        uStack_48 = (ulong)param_2 & 0xffffffffffffff;
        puStack_50 = param_1;
        func_0x000107c610b4(puVar2 + 0x20,&puStack_50,puVar5);
      }
    }
  }
  else {
    puVar2 = param_1;
    func_0x000107c5fb8c(param_1,param_2);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      FUN_100edbfc8();
      puVar4 = puVar3 + 0x20;
      puVar5 = puVar2;
      func_0x000107c602ec(puVar4,puVar2,param_1,param_2);
      if (((uint)puVar5 & 0xff) == 1) goto LAB_10149b6bc;
      if (puVar4 != puVar2) goto LAB_10149b628;
    }
  }
  return puVar3;
}



/* Entry: 10149b6c0; end: 1014a0eb3;  */

/* WARNING: Removing unreachable block (ram,0x00010149e244) */
/* WARNING: Removing unreachable block (ram,0x00010149e238) */

void FUN_10149b6c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *****param_5)

{
  undefined8 ***pppuVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *****pppppuVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 ****ppppuVar23;
  undefined8 ***pppuVar24;
  ulong uVar25;
  undefined8 ****ppppuVar26;
  undefined8 *****pppppuVar27;
  undefined8 ****ppppuVar28;
  undefined8 *****pppppuVar29;
  long *plVar30;
  undefined8 *****pppppuVar31;
  ulong uVar32;
  undefined8 ***pppuVar33;
  uint uVar34;
  undefined8 ***pppuVar35;
  double dVar36;
  double dVar37;
  undefined8 ****appppuStack_300 [4];
  long lStack_2e0;
  undefined8 ***pppuStack_2d8;
  ulong uStack_2d0;
  undefined8 ***pppuStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined8 ***pppuStack_2b8;
  undefined *puStack_2b0;
  undefined8 ***pppuStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 ****ppppuStack_298;
  long lStack_290;
  undefined8 ***pppuStack_288;
  undefined8 ***pppuStack_280;
  undefined8 ***pppuStack_278;
  undefined8 ***pppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ***pppuStack_260;
  long lStack_258;
  undefined8 ***pppuStack_250;
  undefined8 ***pppuStack_248;
  undefined8 ****ppppuStack_238;
  undefined8 ****ppppuStack_230;
  undefined8 ***pppuStack_228;
  undefined8 ****ppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 ****ppppuStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 ***apppuStack_1c8 [3];
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ****ppppuStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  undefined8 ***pppuStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ****ppppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  byte bStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined1 auStack_98 [40];
  
  lVar8 = 0;
  appppuStack_300[3] = (undefined8 ****)param_1;
  puStack_2b0 = (undefined *)param_2;
  pppuStack_2a8 = (undefined8 ***)param_3;
  func_0x000107c5eea4();
  ppppuStack_298 = *(undefined8 *****)(lVar8 + -8);
  pppuStack_280 = (undefined8 ***)lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)ppppuStack_298 + 0x40));
  lVar15 = (long)appppuStack_300 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  pppuStack_2a0 = (undefined8 ***)lVar15;
  func_0x000107c5eec8();
  pppuStack_2c0 = *(undefined8 ****)(lVar8 + -8);
  pppuStack_2b8 = (undefined8 ***)lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppuStack_2c0[8]);
  pppuStack_2c8 = (undefined8 ***)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c6157c(param_4);
  uVar25 = *(ulong *)(param_4 + 0x10);
  func_0x000107c6157c();
  uVar12 = uVar25;
  func_0x0001052fb77c();
  uVar7 = (undefined4)uVar12;
  func_0x0001052fb010();
  func_0x0001052fb7a0();
  uVar32 = uVar25 & 0xffffffff;
  func_0x0001052fb0a4();
  uVar9 = uVar25;
  func_0x0001014a258c();
  func_0x000107c61534();
  uVar10 = uVar9;
  func_0x0001052fb0ac();
  *(int *)(uVar9 + 0x28) = (int)uVar10;
  pppppuVar29 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1014a1c60();
  plVar30 = (long *)(uVar9 + 0x50);
  *plVar30 = (long)puVar11;
  *(undefined8 *)(uVar9 + 0x58) = 0;
  *(undefined8 *)(uVar9 + 0x60) = 0;
  *(undefined8 ******)(uVar9 + 0x10) = param_5;
  *(undefined1 *)(uVar9 + 0x18) = 0;
  *(ulong *)(uVar9 + 0x30) = uVar12 & 0xffffffff;
  *(undefined4 *)(uVar9 + 0x38) = uVar7;
  *(ulong *)(uVar9 + 0x40) = uVar32;
  *(int *)(uVar9 + 0x48) = (int)uVar25;
  *(undefined **)(uVar9 + 0x20) = PTR___swiftEmptySetSingleton_11034f1d8;
  ppppuStack_238 = param_5;
  func_0x000107c61628(param_5);
  lStack_290 = param_4;
  FUN_101493cd0(&ppppuStack_190,0x1014a3390,uVar9);
  pppuVar35 = pppuStack_180;
  bVar2 = (byte)pppuStack_178;
  pppuStack_228 = pppuStack_168;
  ppppuStack_230 = (undefined8 ****)pppuStack_170;
  pppuStack_268 = pppuStack_138;
  pppuStack_270 = pppuStack_140;
  lStack_258 = lStack_148;
  pppuStack_260 = (undefined8 ***)lStack_150;
  pppuStack_248 = pppuStack_158;
  pppuStack_250 = pppuStack_160;
  func_0x000107c61428(plVar30,auStack_98,0,0);
  lVar8 = *plVar30;
  pppppuVar31 = *(undefined8 ******)(lVar8 + 0x10);
  pppuStack_278 = pppuVar35;
  if (pppppuVar31 != (undefined8 *****)0x0) {
    func_0x000107c61434(lVar8);
    pppppuVar29 = pppppuVar31;
    FUN_101494b34(pppppuVar31,0);
    pppppuVar27 = &ppppuStack_220;
    FUN_10149b1f8(pppppuVar27,pppppuVar29 + 4,pppppuVar31,lVar8);
    FUN_100cb2ca8(ppppuStack_220,puStack_218,uStack_210,uStack_208,uStack_200);
    if (pppppuVar27 != pppppuVar31) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e11c);
      (*pcVar3)();
    }
  }
  ppppuVar28 = *(undefined8 *****)(uVar9 + 0x58);
  ppppuVar26 = *(undefined8 *****)(uVar9 + 0x60);
  func_0x000107c61588(uVar9);
  func_0x000107c61624(*(undefined8 *)(uVar9 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(uVar9 + 0x20));
  func_0x000107c6142c(lVar8);
  func_0x000107c61574(lStack_290);
  bStack_f0 = bVar2 & 1;
  pppuStack_108 = ppppuStack_190;
  pppuStack_100 = pppuStack_188;
  pppuStack_f8 = pppuStack_278;
  pppuStack_d0 = pppuStack_248;
  pppuStack_d8 = pppuStack_250;
  pppuStack_e0 = pppuStack_228;
  pppuStack_e8 = ppppuStack_230;
  pppuStack_b0 = pppuStack_268;
  pppuStack_b8 = pppuStack_270;
  lStack_c0 = lStack_258;
  lStack_c8 = (long)pppuStack_260;
  pppuStack_288 = (undefined8 ***)((ulong)pppppuVar29 >> 0x3e);
  pppuStack_2d8 = ppppuVar26;
  pppuStack_270 = ppppuVar28;
  ppppuStack_110 = pppppuVar29;
  pppuStack_a8 = ppppuVar28;
  pppuStack_a0 = ppppuVar26;
  if ((undefined8 ****)pppuStack_288 == (undefined8 ****)0x0) {
    FUN_1014a2c3c(&ppppuStack_110,&ppppuStack_190,0x112da2f70,&UNK_10d9473a8);
    ppppuStack_190 = (undefined8 *****)((ulong)pppppuVar29 & 0xffffffffffffff8);
  }
  else {
    pppppuVar31 = (undefined8 *****)((ulong)pppppuVar29 & 0xffffffffffffff8);
    if (((ulong)pppppuVar29 & 0x8000000000000000) != 0) {
      pppppuVar31 = pppppuVar29;
    }
    func_0x000107c60480();
    ppppuStack_190 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppuVar31 != (undefined8 *****)0x0) {
      FUN_1014a2c3c(&ppppuStack_110,&ppppuStack_190,0x112da2f70,&UNK_10d9473a8);
      pppppuVar27 = pppppuVar31;
      FUN_101494b34(pppppuVar31,0);
      pppppuVar13 = pppppuVar29;
      FUN_10149b438(pppppuVar27 + 4,pppppuVar31);
      func_0x000107c6142c();
      ppppuStack_190 = pppppuVar27;
      if (pppppuVar13 != pppppuVar31) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d17c);
        (*pcVar3)();
      }
    }
  }
  lVar8 = lStack_290;
  FUN_101495270(&ppppuStack_190);
  ppppuVar28 = ppppuStack_190;
  ppppuVar26 = *(undefined8 *****)(lVar8 + 0x18);
  ppppuStack_190 = ppppuVar26;
  func_0x000107c61438(ppppuVar26,2);
  FUN_101495108(&ppppuStack_190);
  lStack_2e0 = 0;
  func_0x000107c6142c(ppppuVar26);
  pppuStack_250 = ppppuStack_190;
  pppuStack_1a0 = (undefined8 ***)PTR___swiftEmptySetSingleton_11034f1d8;
  uVar12 = 0x40;
  puVar11 = PTR___sSuN_11034e220;
  func_0x000107c5fc70(0x40,PTR___sSuN_11034e220);
  *(undefined8 *)(uVar12 + 0x10) = 0x40;
  *(undefined8 *)(uVar12 + 0x28) = 0;
  *(undefined8 *)(uVar12 + 0x20) = 0;
  *(undefined8 *)(uVar12 + 0x38) = 0;
  *(undefined8 *)(uVar12 + 0x30) = 0;
  *(undefined8 *)(uVar12 + 0x48) = 0;
  *(undefined8 *)(uVar12 + 0x40) = 0;
  *(undefined8 *)(uVar12 + 0x58) = 0;
  *(undefined8 *)(uVar12 + 0x50) = 0;
  *(undefined8 *)(uVar12 + 0x68) = 0;
  *(undefined8 *)(uVar12 + 0x60) = 0;
  *(undefined8 *)(uVar12 + 0x78) = 0;
  *(undefined8 *)(uVar12 + 0x70) = 0;
  *(undefined8 *)(uVar12 + 0x88) = 0;
  *(undefined8 *)(uVar12 + 0x80) = 0;
  *(undefined8 *)(uVar12 + 0x98) = 0;
  *(undefined8 *)(uVar12 + 0x90) = 0;
  *(undefined8 *)(uVar12 + 0xa8) = 0;
  *(undefined8 *)(uVar12 + 0xa0) = 0;
  *(undefined8 *)(uVar12 + 0xb8) = 0;
  *(undefined8 *)(uVar12 + 0xb0) = 0;
  *(undefined8 *)(uVar12 + 200) = 0;
  *(undefined8 *)(uVar12 + 0xc0) = 0;
  *(undefined8 *)(uVar12 + 0xd8) = 0;
  *(undefined8 *)(uVar12 + 0xd0) = 0;
  *(undefined8 *)(uVar12 + 0xe8) = 0;
  *(undefined8 *)(uVar12 + 0xe0) = 0;
  *(undefined8 *)(uVar12 + 0xf8) = 0;
  *(undefined8 *)(uVar12 + 0xf0) = 0;
  *(undefined8 *)(uVar12 + 0x108) = 0;
  *(undefined8 *)(uVar12 + 0x100) = 0;
  *(undefined8 *)(uVar12 + 0x118) = 0;
  *(undefined8 *)(uVar12 + 0x110) = 0;
  *(undefined8 *)(uVar12 + 0x128) = 0;
  *(undefined8 *)(uVar12 + 0x120) = 0;
  *(undefined8 *)(uVar12 + 0x138) = 0;
  *(undefined8 *)(uVar12 + 0x130) = 0;
  *(undefined8 *)(uVar12 + 0x148) = 0;
  *(undefined8 *)(uVar12 + 0x140) = 0;
  *(undefined8 *)(uVar12 + 0x158) = 0;
  *(undefined8 *)(uVar12 + 0x150) = 0;
  *(undefined8 *)(uVar12 + 0x168) = 0;
  *(undefined8 *)(uVar12 + 0x160) = 0;
  *(undefined8 *)(uVar12 + 0x178) = 0;
  *(undefined8 *)(uVar12 + 0x170) = 0;
  *(undefined8 *)(uVar12 + 0x188) = 0;
  *(undefined8 *)(uVar12 + 0x180) = 0;
  *(undefined8 *)(uVar12 + 0x198) = 0;
  *(undefined8 *)(uVar12 + 400) = 0;
  *(undefined8 *)(uVar12 + 0x1a8) = 0;
  *(undefined8 *)(uVar12 + 0x1a0) = 0;
  *(undefined8 *)(uVar12 + 0x1b8) = 0;
  *(undefined8 *)(uVar12 + 0x1b0) = 0;
  *(undefined8 *)(uVar12 + 0x1c8) = 0;
  *(undefined8 *)(uVar12 + 0x1c0) = 0;
  *(undefined8 *)(uVar12 + 0x1d8) = 0;
  *(undefined8 *)(uVar12 + 0x1d0) = 0;
  *(undefined8 *)(uVar12 + 0x1e8) = 0;
  *(undefined8 *)(uVar12 + 0x1e0) = 0;
  *(undefined8 *)(uVar12 + 0x1f8) = 0;
  *(undefined8 *)(uVar12 + 0x1f0) = 0;
  *(undefined8 *)(uVar12 + 0x208) = 0;
  *(undefined8 *)(uVar12 + 0x200) = 0;
  *(undefined8 *)(uVar12 + 0x218) = 0;
  *(undefined8 *)(uVar12 + 0x210) = 0;
  ppppuStack_190 = (undefined8 ****)0x0;
  pppuStack_188 = (undefined8 ***)0xe000000000000000;
  uStack_2d0 = uVar12;
  func_0x000107c602fc(0x18);
  pppuVar33 = pppuStack_188;
  func_0x000107c6142c(pppuStack_188);
  pppuVar35 = pppuStack_2c8;
  ppppuStack_190 = (undefined8 ****)0xd000000000000015;
  pppuStack_188 = (undefined8 ***)0x800000010ef84cc0;
  func_0x000107c5eec4(pppuStack_2c8);
  func_0x000107c5eeac();
  (*(code *)pppuStack_2c0[1])(pppuVar35,pppuStack_2b8);
  func_0x000107c5fb78(pppuVar33,puVar11);
  func_0x000107c6142c(puVar11);
  func_0x000107c5fb78(10,0xe100000000000000);
  pppuStack_1b0 = ppppuStack_190;
  uStack_1a8 = pppuStack_188;
  func_0x000107c5fb78(0xd000000000000035,0x800000010ef84ce0);
  ppppuStack_190 = (undefined8 ****)0x203a6e6f73616572;
  pppuStack_188 = (undefined8 ***)0xe800000000000000;
  func_0x000107c5fb78(puStack_2b0,pppuStack_2a8);
  func_0x000107c5fb78(10,0xe100000000000000);
  pppuVar35 = pppuStack_188;
  func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
  func_0x000107c6142c(pppuVar35);
  pppuVar35 = pppuStack_2a0;
  ppppuStack_190 = (undefined8 ****)0x203a65746164;
  pppuStack_188 = (undefined8 ***)0xe600000000000000;
  func_0x000107c5eea0(pppuStack_2a0);
  uVar18 = 0x112d5b7b8;
  FUN_101490b04(0x112d5b7b8,PTR___s10Foundation4DateVMa_110350bb8,
                PTR___s10Foundation4DateVs23CustomStringConvertibleAAMc_110350bf0);
  pppuVar33 = pppuStack_280;
  func_0x000107c6057c(pppuStack_280,uVar18);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar18);
  (**(code **)((long)ppppuStack_298 + 8))(pppuVar35,pppuVar33);
  func_0x000107c5fb78(10,0xe100000000000000);
  pppuVar35 = pppuStack_188;
  func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
  func_0x000107c6142c(pppuVar35);
  ppppuStack_190 = (undefined8 ****)0x0;
  pppuStack_188 = (undefined8 ***)0xe000000000000000;
  func_0x000107c602fc(0x2e);
  func_0x000107c6142c(pppuStack_188);
  ppppuStack_190 = (undefined8 ****)0xd00000000000002a;
  pppuStack_188 = (undefined8 ***)0x800000010ef84d20;
  pppppuVar27 = *(undefined8 ******)(lVar8 + 0x10);
  pppppuVar31 = pppppuVar27;
  func_0x0001052fb7c4();
  bVar6 = (int)pppppuVar31 == 0;
  uVar18 = 0x65757274;
  if (bVar6) {
    uVar18 = 0x65736c6166;
  }
  uVar20 = 0xe400000000000000;
  if (bVar6) {
    uVar20 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar18,uVar20);
  func_0x000107c6142c(uVar20);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  pppuVar35 = pppuStack_188;
  func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
  func_0x000107c6142c(pppuVar35);
  ppppuStack_190 = (undefined8 ****)0xd00000000000001e;
  pppuStack_188 = (undefined8 ***)0x800000010ef84d50;
  pppppuVar31 = pppppuVar27;
  func_0x0001052fb77c();
  puVar22 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  puVar11 = PTR___ss6UInt64VN_11034f048;
  ppppuStack_220 = (undefined8 ****)((ulong)pppppuVar31 & 0xffffffff);
  puVar17 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar17);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  pppuVar35 = pppuStack_188;
  func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
  func_0x000107c6142c(pppuVar35);
  ppppuStack_190 = (undefined8 ****)0xd000000000000024;
  pppuStack_188 = (undefined8 ***)0x800000010ef84d70;
  pppppuVar31 = pppppuVar27;
  func_0x0001052fb7a0();
  ppppuStack_220 = (undefined8 ****)((ulong)pppppuVar31 & 0xffffffff);
  puVar17 = puVar22;
  func_0x000107c6057c(puVar11,puVar22);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar17);
  func_0x000107c5fb78(10,0xe100000000000000);
  pppuVar35 = pppuStack_188;
  func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
  func_0x000107c6142c(pppuVar35);
  ppppuStack_190 = (undefined8 ****)0x6a626f206576696c;
  pppuStack_188 = (undefined8 ***)0xee00203a73746365;
  ppppuStack_220 = (undefined8 ****)pppuStack_108;
  puVar17 = puVar22;
  func_0x000107c6057c(puVar11,puVar22);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar17);
  func_0x000107c5fb78(10,0xe100000000000000);
  pppuVar35 = pppuStack_188;
  func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
  func_0x000107c6142c(pppuVar35);
  pppuVar35 = pppuStack_100;
  ppppuStack_190 = (undefined8 ****)0x747962206576696c;
  pppuStack_188 = (undefined8 ***)0xec000000203a7365;
  ppppuStack_220 = (undefined8 ****)pppuStack_100;
  func_0x000107c6057c(puVar11,puVar22);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar22);
  uVar18 = 0xe200000000000000;
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  FUN_1014a1d5c(pppuVar35);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar18);
  func_0x000107c5fb78(0x2029,0xe200000000000000);
  pppuVar35 = pppuStack_188;
  func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
  func_0x000107c6142c(pppuVar35);
  func_0x000107c5fb78(0xd00000000000003a,0x800000010ef84da0);
  pppppuVar31 = pppppuVar27;
  func_0x0001052fb77c();
  ppppuVar26 = (undefined8 ****)((ulong)pppppuVar31 & 0xffffffff);
  ppppuStack_298 = pppppuVar27;
  func_0x0001052fb7a0();
  pppuStack_260 = (undefined8 ***)((ulong)pppppuVar27 & 0xffffffff);
  bVar6 = false;
  bVar4 = true;
  if ((uint)pppppuVar31 < 2) {
    bVar4 = (int)pppppuVar27 != 0;
    bVar6 = (int)pppppuVar27 == 1;
  }
  ppppuStack_230 = ppppuVar28;
  uVar34 = (uint)(bVar4 && !bVar6);
  pppuStack_278 = ppppuVar26;
  if (bVar4 && !bVar6) {
    if ((undefined8 ****)pppuStack_288 == (undefined8 ****)0x0) {
      pppppuVar31 = *(undefined8 ******)(((ulong)pppppuVar29 & 0xffffffffffffff8) + 0x10);
    }
    else {
      pppppuVar31 = (undefined8 *****)((ulong)pppppuVar29 & 0xffffffffffffff8);
      if (((ulong)pppppuVar29 & 0x8000000000000000) != 0) {
        pppppuVar31 = pppppuVar29;
      }
      func_0x000107c60480();
    }
    pppppuVar27 = (undefined8 *****)0x0;
    pppuVar35 = (undefined8 ***)0x0;
    while (pppppuVar31 != pppppuVar27) {
      if (((ulong)pppppuVar29 & 0xc000000000000001) == 0) {
        if (*(undefined8 ******)(((ulong)pppppuVar29 & 0xffffffffffffff8) + 0x10) <= pppppuVar27) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d104);
          (*pcVar3)();
        }
        pppppuVar13 = (undefined8 *****)pppppuVar29[(long)((long)pppppuVar27 + 4)];
        func_0x000107c6157c();
      }
      else {
        pppppuVar13 = pppppuVar27;
        func_0x00010149553c(pppppuVar27,pppppuVar29);
      }
      if (SCARRY8((long)pppppuVar27,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10149bf60);
        (*pcVar3)();
      }
      ppppuVar28 = pppppuVar13[4];
      func_0x000107c61574();
      pppppuVar27 = (undefined8 *****)((long)pppppuVar27 + 1);
      bVar5 = CARRY8((ulong)pppuVar35,(ulong)ppppuVar28);
      pppuVar35 = (undefined8 ***)((long)pppuVar35 + (long)ppppuVar28);
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d108);
        (*pcVar3)();
      }
    }
    pppppuVar27 = (undefined8 *****)0x0;
    pppuVar33 = (undefined8 ***)0x0;
    while (pppppuVar31 != pppppuVar27) {
      if (((ulong)pppppuVar29 & 0xc000000000000001) == 0) {
        if (*(undefined8 ******)(((ulong)pppppuVar29 & 0xffffffffffffff8) + 0x10) <= pppppuVar27) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d10c);
          (*pcVar3)();
        }
        pppppuVar13 = (undefined8 *****)pppppuVar29[(long)((long)pppppuVar27 + 4)];
        func_0x000107c6157c();
      }
      else {
        pppppuVar13 = pppppuVar27;
        func_0x00010149553c(pppppuVar27,pppppuVar29);
      }
      if (SCARRY8((long)pppppuVar27,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10149bfc4);
        (*pcVar3)();
      }
      ppppuVar28 = pppppuVar13[5];
      func_0x000107c61574();
      pppppuVar27 = (undefined8 *****)((long)pppppuVar27 + 1);
      bVar5 = CARRY8((ulong)pppuVar33,(ulong)ppppuVar28);
      pppuVar33 = (undefined8 ***)((long)pppuVar33 + (long)ppppuVar28);
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d110);
        (*pcVar3)();
      }
    }
    pppuStack_280 = (undefined8 ***)CONCAT44(pppuStack_280._4_4_,(uint)(bVar4 && !bVar6));
    ppppuStack_220 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    ppppuVar28 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < (uint)pppuStack_278) {
      ppppuStack_190 = (undefined8 ****)0x2d6e692d31;
      pppuStack_188 = (undefined8 ***)0xe500000000000000;
      apppuStack_1c8[0] = pppuStack_278;
      puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar11);
      puVar11 = PTR__swift_bridgeObjectRelease_11034f258;
      uVar7 = 0x6c656220;
      func_0x000107c5fb78(0x20776f6c656220,0xe700000000000000);
      func_0x0001052fb010();
      apppuStack_1c8[0] = (undefined8 ***)CONCAT44(apppuStack_1c8[0]._4_4_,uVar7);
      puVar22 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
      func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                          PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar22);
      func_0x000107c5fb78(0x6f6e616e28204220,0xe900000000000029);
      pppuVar1 = pppuStack_188;
      ppppuVar26 = ppppuStack_190;
      ppppuVar14 = (undefined8 ****)0x0;
      FUN_10149944c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8,puVar11);
      pppuVar24 = ppppuVar14[2];
      ppppuVar28 = ppppuVar14;
      if ((undefined8 ***)((ulong)ppppuVar14[3] >> 1) <= pppuVar24) {
        ppppuVar28 = (undefined8 ****)(ulong)((undefined8 ***)0x1 < ppppuVar14[3]);
        FUN_10149944c(ppppuVar28,(undefined8 ***)((long)pppuVar24 + 1U),1,ppppuVar14,
                      PTR__swift_bridgeObjectRelease_11034f258);
      }
      ppppuVar28[2] = (undefined8 ***)((long)pppuVar24 + 1U);
      ppppuVar28[(long)pppuVar24 * 2 + 4] = ppppuVar26;
      ppppuVar28[(long)pppuVar24 * 2 + 5] = pppuVar1;
    }
    ppppuStack_220 = ppppuVar28;
    if (1 < (uint)pppuStack_260) {
      ppppuStack_190 = (undefined8 ****)0x2d6e692d31;
      pppuStack_188 = (undefined8 ***)0xe500000000000000;
      apppuStack_1c8[0] = pppuStack_260;
      puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar11);
      uVar7 = 0x206e6920;
      func_0x000107c5fb78(0x5b206e6920,0xe500000000000000);
      func_0x0001052fb010();
      puVar22 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
      puVar11 = PTR___ss6UInt32VN_11034f020;
      puVar17 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
      apppuStack_1c8[0]._0_4_ = uVar7;
      func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                          PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar17);
      uVar7 = 0x202c;
      func_0x000107c5fb78(0x202c,0xe200000000000000);
      func_0x0001052fb0a4();
      apppuStack_1c8[0] = (undefined8 ***)CONCAT44(apppuStack_1c8[0]._4_4_,uVar7);
      func_0x000107c6057c(puVar11,puVar22);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar22);
      func_0x000107c5fb78(0x616d732820422029,0xeb00000000296c6c);
      pppuVar24 = pppuStack_188;
      ppppuVar26 = ppppuStack_190;
      ppppuVar14 = ppppuVar28;
      func_0x000107c61558();
      ppppuVar16 = ppppuVar28;
      if (((ulong)ppppuVar14 & 1) == 0) {
        ppppuVar16 = (undefined8 ****)0x0;
        FUN_10149944c(0,(long)ppppuVar28[2] + 1,1,ppppuVar28,
                      PTR__swift_bridgeObjectRelease_11034f258);
      }
      pppuVar1 = ppppuVar16[2];
      ppppuVar28 = ppppuVar16;
      if ((undefined8 ***)((ulong)ppppuVar16[3] >> 1) <= pppuVar1) {
        ppppuVar28 = (undefined8 ****)(ulong)((undefined8 ***)0x1 < ppppuVar16[3]);
        FUN_10149944c(ppppuVar28,(undefined8 ***)((long)pppuVar1 + 1U),1,ppppuVar16,
                      PTR__swift_bridgeObjectRelease_11034f258);
      }
      ppppuVar28[2] = (undefined8 ***)((long)pppuVar1 + 1U);
      ppppuVar28[(long)pppuVar1 * 2 + 4] = ppppuVar26;
      ppppuVar28[(long)pppuVar1 * 2 + 5] = pppuVar24;
      ppppuStack_220 = ppppuVar28;
    }
    ppppuVar28 = ppppuStack_220;
    ppppuStack_190 = (undefined8 ****)0xd000000000000010;
    pppuStack_188 = (undefined8 ***)0x800000010ef85030;
    uVar18 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar20 = 0x112d38278;
    func_0x0001014a2e4c(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
    uVar19 = 0xe200000000000000;
    func_0x000107c5fa80(0x202c,0xe200000000000000,uVar18,uVar20);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar19);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    pppuVar24 = pppuStack_188;
    func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
    func_0x000107c6142c(pppuVar24);
    func_0x000107c5fb78(0xd000000000000048,0x800000010ef85050);
    puVar22 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    puVar11 = PTR___ss6UInt64VN_11034f048;
    ppppuStack_190 = (undefined8 ****)0xd000000000000018;
    pppuStack_188 = (undefined8 ***)0x800000010ef850a0;
    puVar17 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    apppuStack_1c8[0] = pppuVar35;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar17);
    func_0x000107c5fb78(10,0xe100000000000000);
    pppuVar35 = pppuStack_188;
    func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
    func_0x000107c6142c(pppuVar35);
    ppppuStack_190 = (undefined8 ****)0xd000000000000016;
    pppuStack_188 = (undefined8 ***)0x800000010ef850c0;
    apppuStack_1c8[0] = pppuVar33;
    func_0x000107c6057c(puVar11,puVar22);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar22);
    uVar18 = 0xe200000000000000;
    func_0x000107c5fb78(0x2820,0xe200000000000000);
    FUN_1014a1d5c(pppuVar33);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar18);
    func_0x000107c5fb78(0xa29,0xe200000000000000);
    pppuVar35 = pppuStack_188;
    func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
    func_0x000107c6142c(ppppuVar28);
    func_0x000107c6142c(pppuVar35);
    uVar34 = (uint)pppuStack_280;
  }
  ppppuVar26 = (undefined8 ****)pppuStack_260;
  pppuVar35 = pppuStack_270;
  ppppuVar28 = (undefined8 ****)pppuStack_278;
  ppppuStack_190 = (undefined8 ****)0x6c6e6f2d70616568;
  pppuStack_188 = (undefined8 ****)0xeb00000000203a79;
  ppppuStack_220 = (undefined8 ****)pppuStack_270;
  puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar11);
  uVar18 = 0xe200000000000000;
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  FUN_1014a1d5c(pppuVar35);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar18);
  func_0x000107c5fb78(0x2029,0xe200000000000000);
  pppuVar35 = pppuStack_188;
  func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
  func_0x000107c6142c(pppuVar35);
  func_0x000107c5fb78(0x1000000000000065,0x800000010ef84de0);
  pppuVar35 = pppuStack_2d8;
  if (uVar34 != 0) {
    ppppuStack_190 = (undefined8 ****)0xd000000000000015;
    pppuStack_188 = (undefined8 ****)0x800000010ef85010;
    ppppuStack_220 = (undefined8 ****)pppuStack_2d8;
    puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar11);
    uVar18 = 0xe200000000000000;
    func_0x000107c5fb78(0x2820,0xe200000000000000);
    FUN_1014a1d5c(pppuVar35);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar18);
    func_0x000107c5fb78(0xa29,0xe200000000000000);
    pppuVar35 = pppuStack_188;
    func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
    func_0x000107c6142c(pppuVar35);
  }
  ppppuVar14 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((undefined8 ****)pppuStack_f8 != (undefined8 ****)0x0) {
    ppppuStack_190 = (undefined8 ****)0xd000000000000029;
    pppuStack_188 = (undefined8 ****)0x800000010ef84fe0;
    ppppuStack_220 = (undefined8 ****)pppuStack_f8;
    puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar11);
    func_0x000107c5fb78(10,0xe100000000000000);
    pppuVar35 = pppuStack_188;
    func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
    func_0x000107c6142c(pppuVar35);
  }
  ppppuVar16 = (undefined8 ****)pppuStack_d0;
  pppuVar35 = pppuStack_d8;
  puVar11 = PTR___ss6UInt64Vs7CVarArgsWP_11034f078;
  if (CARRY8((ulong)pppuStack_e8,(ulong)pppuStack_b8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d180);
    (*pcVar3)();
  }
  puVar22 = (undefined *)((long)pppuStack_b8 + (long)pppuStack_e8) + (long)pppuStack_d8;
  if (CARRY8((ulong)((long)pppuStack_b8 + (long)pppuStack_e8),(ulong)pppuStack_d8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d184);
    (*pcVar3)();
  }
  pppuStack_280 = pppuStack_b0;
  if (CARRY8((ulong)pppuStack_e0,(ulong)pppuStack_b0)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d188);
    (*pcVar3)();
  }
  pppuStack_2a0 = pppuStack_d0;
  ppppuVar23 = (undefined8 ****)((long)pppuStack_e0 + (long)pppuStack_b0 + (long)pppuStack_d0);
  if (CARRY8((long)pppuStack_e0 + (long)pppuStack_b0,(ulong)pppuStack_d0)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d18c);
    (*pcVar3)();
  }
  pppuStack_270 = pppuStack_b8;
  pppuStack_2b8 = pppuStack_d8;
  puStack_2b0 = puVar22;
  pppuStack_2a8 = ppppuVar23;
  if ((undefined8 ****)pppuStack_d8 != (undefined8 ****)0x0 || lStack_c0 != 0) {
    dVar36 = 0.0;
    dVar37 = 0.0;
    if (puVar22 != (undefined *)0x0) {
      dVar37 = ((double)pppuStack_d8 / (double)puVar22) * 100.0;
    }
    if (ppppuVar23 != (undefined8 ****)0x0) {
      dVar36 = ((double)pppuStack_d0 / (double)ppppuVar23) * 100.0;
    }
    lVar8 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    uVar18 = 0xc0;
    lVar15 = lVar8;
    func_0x000107c613fc();
    *(undefined8 *)(lVar15 + 0x18) = 8;
    *(undefined8 *)(lVar15 + 0x10) = 4;
    *(undefined **)(lVar15 + 0x38) = PTR___ss6UInt64VN_11034f048;
    *(undefined **)(lVar15 + 0x40) = puVar11;
    *(undefined8 ****)(lVar15 + 0x20) = pppuVar35;
    puVar11 = PTR___sSdN_11034dd90;
    *(undefined **)(lVar15 + 0x60) = PTR___sSdN_11034dd90;
    puVar22 = PTR___sSds7CVarArgsWP_11034ddc0;
    *(undefined **)(lVar15 + 0x68) = PTR___sSds7CVarArgsWP_11034ddc0;
    *(double *)(lVar15 + 0x48) = dVar37;
    FUN_1014a1d5c();
    *(undefined **)(lVar15 + 0x88) = PTR___sSSN_11034da80;
    ppppuVar28 = ppppuVar16;
    func_0x00010075bbf0();
    *(undefined8 *****)(lVar15 + 0x90) = ppppuVar28;
    *(undefined8 *****)(lVar15 + 0x70) = ppppuVar16;
    *(undefined8 *)(lVar15 + 0x78) = uVar18;
    *(undefined **)(lVar15 + 0xb0) = puVar11;
    *(undefined **)(lVar15 + 0xb8) = puVar22;
    puVar11 = PTR___ss6UInt64Vs7CVarArgsWP_11034f078;
    *(double *)(lVar15 + 0x98) = dVar36;
    uVar18 = 0x800000010ef84f70;
    func_0x000107c5fb00(0xd000000000000045,0x800000010ef84f70,lVar15);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar18);
    lVar15 = lStack_c8;
    if (lStack_c8 != 0 || lStack_c0 != 0) {
      uVar20 = 0x98;
      func_0x000107c613fc(lVar8,0x98,7);
      *(undefined8 *)(lVar8 + 0x18) = 6;
      *(undefined8 *)(lVar8 + 0x10) = 3;
      puVar22 = PTR___ss6UInt64VN_11034f048;
      *(undefined **)(lVar8 + 0x38) = PTR___ss6UInt64VN_11034f048;
      *(undefined **)(lVar8 + 0x40) = puVar11;
      *(long *)(lVar8 + 0x20) = lVar15;
      uVar18 = 0x42694b;
      func_0x000101493814(0x4050000000000000);
      *(undefined **)(lVar8 + 0x60) = PTR___sSSN_11034da80;
      *(undefined8 *****)(lVar8 + 0x68) = ppppuVar28;
      *(undefined8 *)(lVar8 + 0x48) = uVar18;
      *(undefined8 *)(lVar8 + 0x50) = uVar20;
      *(undefined **)(lVar8 + 0x88) = puVar22;
      *(undefined **)(lVar8 + 0x90) = puVar11;
      *(long *)(lVar8 + 0x70) = lStack_c0;
      uVar18 = 0x800000010ef84fc0;
      func_0x000107c5fb00(0x1000000000000019,0x800000010ef84fc0,lVar8);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar18);
    }
    func_0x000107c5fb78(10,0xe100000000000000);
    ppppuVar26 = (undefined8 ****)pppuStack_260;
    ppppuVar14 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    ppppuVar28 = (undefined8 ****)pppuStack_278;
  }
  ppppuVar16 = (undefined8 ****)pppuStack_270;
  if ((undefined8 ****)pppuStack_270 == (undefined8 ****)0x0) goto LAB_10149cc28;
  dVar36 = 0.0;
  dVar37 = 0.0;
  if (puStack_2b0 != (undefined *)0x0) {
    dVar37 = ((double)pppuStack_270 / (double)puStack_2b0) * 100.0;
  }
  if ((undefined8 ****)pppuStack_2a8 != (undefined8 ****)0x0) {
    dVar36 = ((double)pppuStack_280 / (double)pppuStack_2a8) * 100.0;
  }
  if (1 < (uint)ppppuVar28) {
    ppppuStack_190 = (undefined8 ****)0x2f31206f6e616e;
    pppuStack_188 = (undefined8 ****)0xe700000000000000;
    puVar22 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    ppppuStack_220 = ppppuVar14;
    apppuStack_1c8[0] = ppppuVar28;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar22);
    puVar22 = PTR__swift_bridgeObjectRelease_11034f258;
    uVar7 = 0x3c20;
    func_0x000107c5fb78(0x3c20,0xe200000000000000);
    func_0x0001052fb010();
    apppuStack_1c8[0] = (undefined8 ***)CONCAT44(apppuStack_1c8[0]._4_4_,uVar7);
    puVar17 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
    func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                        PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar17);
    func_0x000107c5fb78(0x42,0xe100000000000000);
    pppuVar33 = pppuStack_188;
    ppppuVar28 = ppppuStack_190;
    ppppuVar26 = (undefined8 ****)0x0;
    FUN_10149944c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8,puVar22);
    pppuVar35 = ppppuVar26[2];
    ppppuVar14 = ppppuVar26;
    if ((undefined8 ***)((ulong)ppppuVar26[3] >> 1) <= pppuVar35) {
      ppppuVar14 = (undefined8 ****)(ulong)((undefined8 ***)0x1 < ppppuVar26[3]);
      FUN_10149944c(ppppuVar14,(undefined8 ***)((long)pppuVar35 + 1U),1,ppppuVar26,
                    PTR__swift_bridgeObjectRelease_11034f258);
    }
    ppppuVar14[2] = (undefined8 ***)((long)pppuVar35 + 1U);
    ppppuVar14[(long)pppuVar35 * 2 + 4] = ppppuVar28;
    ppppuVar14[(long)pppuVar35 * 2 + 5] = pppuVar33;
    ppppuVar26 = (undefined8 ****)pppuStack_260;
  }
  ppppuStack_220 = ppppuVar14;
  if ((uint)ppppuVar26 < 2) {
    if (ppppuVar14[2] != (undefined8 ***)0x0) goto LAB_10149cab0;
    pppuStack_260 = (undefined8 ****)0x0;
    pppuStack_2c0 = (undefined8 ****)0xe000000000000000;
    ppppuVar28 = (undefined8 ****)pppuStack_270;
    pppuStack_278 = ppppuVar14;
  }
  else {
    ppppuStack_190 = (undefined8 ****)0x2f31206c6c616d73;
    pppuStack_188 = (undefined8 ***)0xe800000000000000;
    puVar22 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    apppuStack_1c8[0] = ppppuVar26;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar22);
    uVar7 = 0x5b20;
    func_0x000107c5fb78(0x5b20,0xe200000000000000);
    func_0x0001052fb010();
    puVar17 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
    puVar22 = PTR___ss6UInt32VN_11034f020;
    puVar21 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
    apppuStack_1c8[0]._0_4_ = uVar7;
    func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                        PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar21);
    uVar7 = 0x2c;
    func_0x000107c5fb78(0x2c,0xe100000000000000);
    func_0x0001052fb0a4();
    apppuStack_1c8[0] = (undefined8 ***)CONCAT44(apppuStack_1c8[0]._4_4_,uVar7);
    func_0x000107c6057c(puVar22,puVar17);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar17);
    func_0x000107c5fb78(0x4229,0xe200000000000000);
    pppuVar35 = pppuStack_188;
    ppppuVar28 = ppppuStack_190;
    ppppuVar26 = ppppuVar14;
    func_0x000107c61558();
    ppppuVar16 = ppppuVar14;
    if (((ulong)ppppuVar26 & 1) == 0) {
      ppppuVar16 = (undefined8 ****)0x0;
      FUN_10149944c(0,(long)ppppuVar14[2] + 1,1,ppppuVar14,PTR__swift_bridgeObjectRelease_11034f258)
      ;
    }
    pppuVar33 = ppppuVar16[2];
    ppppuVar26 = ppppuVar16;
    if ((undefined8 ***)((ulong)ppppuVar16[3] >> 1) <= pppuVar33) {
      ppppuVar26 = (undefined8 ****)(ulong)((undefined8 ***)0x1 < ppppuVar16[3]);
      FUN_10149944c(ppppuVar26,(undefined8 ***)((long)pppuVar33 + 1U),1,ppppuVar16,
                    PTR__swift_bridgeObjectRelease_11034f258);
    }
    ppppuVar26[2] = (undefined8 ***)((long)pppuVar33 + 1U);
    ppppuVar26[(long)pppuVar33 * 2 + 4] = ppppuVar28;
    ppppuVar26[(long)pppuVar33 * 2 + 5] = pppuVar35;
    ppppuStack_220 = ppppuVar26;
LAB_10149cab0:
    ppppuVar28 = (undefined8 ****)pppuStack_270;
    ppppuStack_190 = (undefined8 ****)0x2820;
    pppuStack_188 = (undefined8 ****)0xe200000000000000;
    uVar18 = 0x112d38270;
    pppuStack_278 = ppppuStack_220;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar20 = 0x112d38278;
    func_0x0001014a2e4c(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
    uVar19 = 0xe200000000000000;
    func_0x000107c5fa80(0x202c,0xe200000000000000,uVar18,uVar20);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar19);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    pppuStack_260 = ppppuStack_190;
    pppuStack_2c0 = pppuStack_188;
  }
  lVar8 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  uVar18 = 0xe8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 10;
  *(undefined8 *)(lVar8 + 0x10) = 5;
  *(undefined **)(lVar8 + 0x38) = PTR___ss6UInt64VN_11034f048;
  *(undefined **)(lVar8 + 0x40) = puVar11;
  *(undefined8 *****)(lVar8 + 0x20) = ppppuVar28;
  puVar17 = PTR___sSdN_11034dd90;
  *(undefined **)(lVar8 + 0x60) = PTR___sSdN_11034dd90;
  puVar21 = PTR___sSds7CVarArgsWP_11034ddc0;
  *(undefined **)(lVar8 + 0x68) = PTR___sSds7CVarArgsWP_11034ddc0;
  *(double *)(lVar8 + 0x48) = dVar37;
  ppppuVar28 = (undefined8 ****)pppuStack_280;
  FUN_1014a1d5c();
  puVar22 = PTR___sSSN_11034da80;
  *(undefined **)(lVar8 + 0x88) = PTR___sSSN_11034da80;
  ppppuVar26 = ppppuVar28;
  func_0x00010075bbf0();
  ppppuVar16 = (undefined8 ****)pppuStack_270;
  *(undefined8 *****)(lVar8 + 0x90) = ppppuVar26;
  *(undefined8 *****)(lVar8 + 0x70) = ppppuVar28;
  *(undefined8 *)(lVar8 + 0x78) = uVar18;
  *(undefined **)(lVar8 + 0xb0) = puVar17;
  *(undefined **)(lVar8 + 0xb8) = puVar21;
  *(double *)(lVar8 + 0x98) = dVar36;
  *(undefined **)(lVar8 + 0xd8) = puVar22;
  *(undefined8 *****)(lVar8 + 0xe0) = ppppuVar26;
  *(undefined8 ****)(lVar8 + 0xc0) = pppuStack_260;
  *(undefined8 ****)(lVar8 + 200) = pppuStack_2c0;
  uVar18 = 0x800000010ef84f20;
  func_0x000107c5fb00(0xd000000000000041,0x800000010ef84f20,lVar8);
  func_0x000107c5fb78();
  func_0x000107c6142c(pppuStack_278);
  func_0x000107c6142c(uVar18);
LAB_10149cc28:
  ppppuVar28 = ppppuStack_230;
  puVar22 = (undefined *)((long)ppppuVar16 + (long)pppuStack_2b8);
  if (CARRY8((ulong)ppppuVar16,(ulong)pppuStack_2b8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10149d190);
    (*pcVar3)();
  }
  if (puVar22 != (undefined *)0x0) {
    uVar12 = (long)pppuStack_280 + (long)pppuStack_2a0;
    if (CARRY8((ulong)pppuStack_280,(ulong)pppuStack_2a0)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e120);
      (*pcVar3)();
    }
    dVar36 = 0.0;
    dVar37 = 0.0;
    if (puStack_2b0 != (undefined *)0x0) {
      dVar37 = ((double)puVar22 / (double)puStack_2b0) * 100.0;
    }
    if ((undefined8 ****)pppuStack_2a8 != (undefined8 ****)0x0) {
      dVar36 = ((double)uVar12 / (double)pppuStack_2a8) * 100.0;
    }
    lVar8 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    uVar18 = 0xc0;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 8;
    *(undefined8 *)(lVar8 + 0x10) = 4;
    *(undefined **)(lVar8 + 0x38) = PTR___ss6UInt64VN_11034f048;
    *(undefined **)(lVar8 + 0x40) = puVar11;
    *(undefined **)(lVar8 + 0x20) = puVar22;
    puVar11 = PTR___sSdN_11034dd90;
    *(undefined **)(lVar8 + 0x60) = PTR___sSdN_11034dd90;
    puVar22 = PTR___sSds7CVarArgsWP_11034ddc0;
    *(undefined **)(lVar8 + 0x68) = PTR___sSds7CVarArgsWP_11034ddc0;
    *(double *)(lVar8 + 0x48) = dVar37;
    FUN_1014a1d5c();
    *(undefined **)(lVar8 + 0x88) = PTR___sSSN_11034da80;
    uVar9 = uVar12;
    func_0x00010075bbf0();
    *(ulong *)(lVar8 + 0x90) = uVar9;
    *(ulong *)(lVar8 + 0x70) = uVar12;
    *(undefined8 *)(lVar8 + 0x78) = uVar18;
    *(undefined **)(lVar8 + 0xb0) = puVar11;
    *(undefined **)(lVar8 + 0xb8) = puVar22;
    *(double *)(lVar8 + 0x98) = dVar36;
    uVar18 = 0x800000010ef84ee0;
    func_0x000107c5fb00(0xd00000000000003e,0x800000010ef84ee0,lVar8);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar18);
  }
  ppppuStack_190 = (undefined8 ****)0x0;
  pppuStack_188 = (undefined8 ****)0xe000000000000000;
  func_0x000107c602fc(0x39);
  func_0x000107c5fb78(0x69726f6765746163,0xec000000203a7365);
  if ((undefined8 ****)pppuStack_288 == (undefined8 ****)0x0) {
    pppppuVar31 = *(undefined8 ******)(((ulong)pppppuVar29 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pppppuVar31 = (undefined8 *****)((ulong)pppppuVar29 & 0xffffffffffffff8);
    if (((ulong)pppppuVar29 & 0x8000000000000000) != 0) {
      pppppuVar31 = pppppuVar29;
    }
    func_0x000107c60480();
  }
  func_0x0001014a3298(&ppppuStack_110,0x112da2f70,&UNK_10d9473a8);
  puVar22 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar11 = PTR___sSiN_11034deb0;
  puVar17 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  ppppuStack_220 = pppppuVar31;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar17);
  func_0x000107c5fb78(0xd00000000000001e,0x800000010ef84e50);
  ppppuVar26 = ppppuStack_238;
  func_0x000107c61428(ppppuStack_238 + 3,apppuStack_1c8,0,0);
  ppppuStack_220 = (undefined8 ****)ppppuVar26[3];
  func_0x000107c6057c(puVar11,puVar22);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar22);
  func_0x000107c5fb78(0x55206c6c61202b20,0xeb000000000a2949);
  pppuVar35 = pppuStack_188;
  func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
  func_0x000107c6142c(pppuVar35);
  func_0x000107c5fb78(0xd00000000000002a,0x800000010ef84e70);
  if (((long)ppppuVar28 < 0) || (((ulong)ppppuVar28 >> 0x3e & 1) != 0)) {
    pppppuVar29 = (undefined8 *****)ppppuVar28;
    func_0x000107c60480();
    ppppuVar26 = (undefined8 ****)PTR___ss6UInt64VN_11034f048;
    puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  }
  else {
    pppppuVar29 = (undefined8 *****)ppppuVar28[2];
    ppppuVar26 = (undefined8 ****)PTR___ss6UInt64VN_11034f048;
    puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  }
  pppppuVar31 = (undefined8 *****)ppppuVar28;
  PTR___ss6UInt64VN_11034f048 = (undefined *)ppppuVar26;
  PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068 = puVar11;
  if (pppppuVar29 != (undefined8 *****)0x0) {
    if ((long)pppppuVar29 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e124);
      (*pcVar3)();
    }
    pppppuVar27 = (undefined8 *****)0x0;
    do {
      if (((ulong)ppppuVar28 & 0xc000000000000001) == 0) {
        pppppuVar31 = (undefined8 *****)pppppuVar31[(long)((long)pppppuVar27 + 4)];
        func_0x000107c6157c(pppppuVar31);
      }
      else {
        pppppuVar31 = pppppuVar27;
        func_0x00010149553c();
      }
      ppppuStack_190 = (undefined8 ****)0x0;
      pppuStack_188 = (undefined8 ****)0xe000000000000000;
      func_0x000107c602fc(0x19);
      uVar18 = 0x205d49555b;
      if (*(char *)(pppppuVar31 + 6) == '\0') {
        uVar18 = 0x2020202020;
      }
      func_0x000107c5fb78(uVar18,0xe500000000000000);
      func_0x000107c6142c(0xe500000000000000);
      func_0x000107c5fb78(pppppuVar31[2],pppppuVar31[3]);
      func_0x000107c5fb78(0x2020,0xe200000000000000);
      ppppuStack_220 = pppppuVar31[4];
      puVar22 = puVar11;
      func_0x000107c6057c(ppppuVar26,puVar11);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar22);
      func_0x000107c5fb78(0x20206a626f20,0xe600000000000000);
      ppppuStack_220 = pppppuVar31[5];
      puVar22 = puVar11;
      func_0x000107c6057c(ppppuVar26,puVar11);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar22);
      puVar22 = (undefined *)0xe500000000000000;
      func_0x000107c5fb78(0x2820204220,0xe500000000000000);
      ppppuVar14 = pppppuVar31[5];
      if ((ulong)ppppuVar14 >> 0x1e == 0) {
        if ((ulong)ppppuVar14 >> 0x14 != 0) {
          dVar36 = (double)ppppuVar14 / 1048576.0;
          uVar18 = 0x42694d;
          goto LAB_10149cf10;
        }
        if ((undefined8 ****)0x3ff < ppppuVar14) {
          dVar36 = (double)ppppuVar14 / 1024.0;
          uVar18 = 0x42694b;
          goto LAB_10149cf10;
        }
        ppppuVar16 = ppppuVar26;
        puVar22 = puVar11;
        pppuStack_1d8 = ppppuVar14;
        func_0x000107c6057c();
        ppppuStack_220 = ppppuVar16;
        puStack_218 = puVar22;
        func_0x000107c5fb78(0x42,0xe100000000000000);
        puVar22 = puStack_218;
      }
      else {
        dVar36 = (double)ppppuVar14 / 1073741824.0;
        uVar18 = 0x426947;
LAB_10149cf10:
        func_0x000101493814(dVar36,uVar18);
      }
      pppppuVar27 = (undefined8 *****)((long)pppppuVar27 + 1);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar22);
      func_0x000107c5fb78(0xa29,0xe200000000000000);
      pppuVar35 = pppuStack_188;
      func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
      func_0x000107c61574(pppppuVar31);
      func_0x000107c6142c(pppuVar35);
      pppppuVar31 = (undefined8 *****)ppppuStack_230;
    } while (pppppuVar29 != pppppuVar27);
  }
  func_0x000107c5fb78(0xd00000000000001b,0x800000010ef84ea0);
  pppppuVar29 = pppppuVar31;
  FUN_101493084();
  func_0x000107c61574(pppppuVar31);
  pppuVar35 = pppuStack_250;
  pppuStack_2d8 = pppppuVar29[2];
  uVar12 = uStack_2d0;
  if ((undefined8 ****)pppuStack_2d8 != (undefined8 ****)0x0) {
    ppppuVar28 = (undefined8 ****)0x0;
    appppuStack_300[1] = pppppuVar29 + 4;
    puStack_2b0 = (undefined *)0x426947;
    ppppuVar26 = (undefined8 ****)PTR___ss6UInt64VN_11034f048;
    puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    appppuStack_300[2] = pppppuVar29;
    do {
      if (appppuStack_300[2][2] <= ppppuVar28) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e114);
        (*pcVar3)();
      }
      ppppuVar14 = (undefined8 ****)appppuStack_300[1][(long)ppppuVar28 * 2];
      ppppuVar16 = (undefined8 ****)(appppuStack_300[1] + (long)ppppuVar28 * 2)[1];
      ppppuStack_190 = (undefined8 ****)0x20230a;
      pppuStack_188 = (undefined8 ****)0xe300000000000000;
      uVar18 = 0x205d49555b;
      if (*(char *)(ppppuVar14 + 6) == '\0') {
        uVar18 = 0;
      }
      uVar20 = 0xe500000000000000;
      if (*(char *)(ppppuVar14 + 6) == '\0') {
        uVar20 = 0xe000000000000000;
      }
      pppuStack_280 = ppppuVar28;
      func_0x000107c6157c(ppppuVar14);
      pppuStack_288 = ppppuVar16;
      func_0x000107c61434(ppppuVar16);
      func_0x000107c5fb78(uVar18,uVar20);
      func_0x000107c6142c(uVar20);
      func_0x000107c5fb78(ppppuVar14[2],ppppuVar14[3]);
      func_0x000107c5fb78(0x282020,0xe300000000000000);
      ppppuStack_220 = (undefined8 ****)ppppuVar14[4];
      puVar22 = puVar11;
      func_0x000107c6057c(ppppuVar26,puVar11);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar22);
      puVar22 = (undefined *)0xe600000000000000;
      func_0x000107c5fb78(0x202c6a626f20,0xe600000000000000);
      ppppuVar28 = (undefined8 ****)pppuStack_280;
      ppppuVar16 = (undefined8 ****)pppuStack_288;
      ppppuVar23 = (undefined8 ****)ppppuVar14[5];
      pppuStack_2c8 = ppppuVar14;
      if ((ulong)ppppuVar23 >> 0x1e == 0) {
        if ((ulong)ppppuVar23 >> 0x14 == 0) {
          if (ppppuVar23 < (undefined8 ****)0x400) {
            ppppuVar14 = ppppuVar26;
            puVar22 = puVar11;
            pppuStack_1d8 = ppppuVar23;
            func_0x000107c6057c();
            ppppuStack_220 = ppppuVar14;
            puStack_218 = puVar22;
            func_0x000107c5fb78(0x42,0xe100000000000000);
            puVar22 = puStack_218;
            goto LAB_10149d398;
          }
          dVar36 = (double)ppppuVar23 / 1024.0;
          uVar18 = 0x42694b;
        }
        else {
          dVar36 = (double)ppppuVar23 / 1048576.0;
          uVar18 = 0x42694d;
        }
        func_0x000101493814(dVar36,uVar18);
      }
      else {
        func_0x000101493814((double)ppppuVar23 / 1073741824.0,puStack_2b0);
        ppppuVar16 = (undefined8 ****)pppuStack_288;
        ppppuVar28 = (undefined8 ****)pppuStack_280;
      }
LAB_10149d398:
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar22);
      func_0x000107c5fb78(0xa29,0xe200000000000000);
      pppuVar33 = pppuStack_188;
      func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
      func_0x000107c6142c(pppuVar33);
      if ((ulong)ppppuVar16 >> 0x3e == 0) {
        ppppuVar14 = *(undefined8 *****)(((ulong)ppppuVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        ppppuVar14 = (undefined8 ****)((ulong)ppppuVar16 & 0xffffffffffffff8);
        if ((undefined8 ****)0x7fffffffffffffff < ppppuVar16) {
          ppppuVar14 = ppppuVar16;
        }
        func_0x000107c60480();
      }
      if (ppppuVar14 != (undefined8 ****)0x0) {
        pppuStack_2a0 = (undefined8 ***)((ulong)ppppuVar16 & 0xc000000000000001);
        pppuStack_2b8 = (undefined8 ***)((ulong)ppppuVar16 & 0xffffffffffffff8);
        pppuStack_2c0 = ppppuVar16 + 4;
        ppppuVar23 = (undefined8 ****)0x0;
        pppuStack_2a8 = ppppuVar14;
        do {
          if ((undefined8 ****)pppuStack_2a0 == (undefined8 ****)0x0) {
            if (pppuStack_2b8[2] <= ppppuVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e118);
              (*pcVar3)();
            }
            ppppuVar28 = (undefined8 ****)pppuStack_2c0[(long)ppppuVar23];
            func_0x000107c6157c(ppppuVar28);
            puVar22 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
          }
          else {
            ppppuVar28 = ppppuVar23;
            func_0x0001014953a8(ppppuVar23,ppppuVar16);
            puVar22 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
          }
          PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030 = puVar22;
          if (SCARRY8((long)ppppuVar23,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e100);
            (*pcVar3)();
          }
          pppuStack_278 = (undefined8 ***)((long)ppppuVar23 + 1);
          ppppuStack_190 = (undefined8 ****)0x206b636174732020;
          pppuStack_188 = (undefined8 ****)0xe900000000000023;
          func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,puVar22);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar22);
          func_0x000107c5fb78(0x203a,0xe200000000000000);
          ppppuStack_220 = (undefined8 ****)ppppuVar28[3];
          puVar22 = puVar11;
          func_0x000107c6057c(ppppuVar26,puVar11);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar22);
          func_0x000107c5fb78(0x202c6a626f20,0xe600000000000000);
          puVar17 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar22 = PTR___sSiN_11034deb0;
          ppppuVar14 = (undefined8 ****)ppppuVar28[4];
          pppuStack_270 = ppppuVar28;
          if ((ulong)ppppuVar14 >> 0x1e == 0) {
            if ((ulong)ppppuVar14 >> 0x14 != 0) {
              dVar36 = (double)(long)(((double)ppppuVar14 / 1048576.0) * 100.0);
              if ((dVar36 == INFINITY) || (NAN(dVar36))) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e128);
                (*pcVar3)();
              }
              if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e12c);
                (*pcVar3)();
              }
              if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e130);
                (*pcVar3)();
              }
              pppuStack_1d8 = (undefined8 ***)((long)dVar36 / 100);
              ppppuVar26 = (undefined8 ****)((long)dVar36 % 100);
              ppppuVar28 = (undefined8 ****)PTR___sSiN_11034deb0;
              puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c();
              ppppuStack_220 = ppppuVar28;
              puStack_218 = puVar11;
              func_0x000107c5fb78(0x2e,0xe100000000000000);
              uVar18 = 0x30;
              if (9 < (long)ppppuVar26) {
                uVar18 = 0;
              }
              uVar20 = 0xe100000000000000;
              if (9 < (long)ppppuVar26) {
                uVar20 = 0xe000000000000000;
              }
              func_0x000107c5fb78(uVar18,uVar20);
              func_0x000107c6142c(uVar20);
              pppuStack_1d8 = ppppuVar26;
              func_0x000107c6057c(puVar22,puVar17);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar17);
              puVar22 = (undefined *)0x42694d;
              goto LAB_10149d878;
            }
            if ((undefined8 ****)0x3ff < ppppuVar14) {
              dVar36 = (double)(long)(((double)ppppuVar14 / 1024.0) * 100.0);
              if ((dVar36 == INFINITY) || (NAN(dVar36))) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e1b8);
                (*pcVar3)();
              }
              if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e1bc);
                (*pcVar3)();
              }
              if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e1c0);
                (*pcVar3)();
              }
              pppuStack_1d8 = (undefined8 ***)((long)dVar36 / 100);
              ppppuVar26 = (undefined8 ****)((long)dVar36 % 100);
              ppppuVar28 = (undefined8 ****)PTR___sSiN_11034deb0;
              puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c();
              ppppuStack_220 = ppppuVar28;
              puStack_218 = puVar11;
              func_0x000107c5fb78(0x2e,0xe100000000000000);
              uVar18 = 0x30;
              if (9 < (long)ppppuVar26) {
                uVar18 = 0;
              }
              uVar20 = 0xe100000000000000;
              if (9 < (long)ppppuVar26) {
                uVar20 = 0xe000000000000000;
              }
              func_0x000107c5fb78(uVar18,uVar20);
              func_0x000107c6142c(uVar20);
              pppuStack_1d8 = ppppuVar26;
              func_0x000107c6057c(puVar22,puVar17);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar17);
              puVar22 = (undefined *)0x42694b;
              goto LAB_10149d878;
            }
            pppuStack_1d8 = ppppuVar14;
            func_0x000107c6057c();
            puVar22 = (undefined *)0x42;
            uVar18 = 0xe100000000000000;
            ppppuStack_220 = ppppuVar26;
            puStack_218 = puVar11;
          }
          else {
            dVar36 = (double)(long)(((double)ppppuVar14 / 1073741824.0) * 100.0);
            if ((dVar36 == INFINITY) || (NAN(dVar36))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e108);
              (*pcVar3)();
            }
            if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e10c);
              (*pcVar3)();
            }
            if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e110);
              (*pcVar3)();
            }
            pppuStack_1d8 = (undefined8 ***)((long)dVar36 / 100);
            ppppuVar26 = (undefined8 ****)((long)dVar36 % 100);
            ppppuVar28 = (undefined8 ****)PTR___sSiN_11034deb0;
            puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            func_0x000107c6057c();
            ppppuStack_220 = ppppuVar28;
            puStack_218 = puVar11;
            func_0x000107c5fb78(0x2e,0xe100000000000000);
            uVar18 = 0x30;
            if (9 < (long)ppppuVar26) {
              uVar18 = 0;
            }
            uVar20 = 0xe100000000000000;
            if (9 < (long)ppppuVar26) {
              uVar20 = 0xe000000000000000;
            }
            func_0x000107c5fb78(uVar18,uVar20);
            func_0x000107c6142c(uVar20);
            pppuStack_1d8 = ppppuVar26;
            func_0x000107c6057c(puVar22,puVar17);
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar17);
            puVar22 = puStack_2b0;
LAB_10149d878:
            uVar18 = 0xe300000000000000;
          }
          func_0x000107c5fb78(puVar22,uVar18);
          puVar11 = puStack_218;
          func_0x000107c5fb78(ppppuStack_220,puStack_218);
          func_0x000107c6142c(puVar11);
          func_0x000107c5fb78(10,0xe100000000000000);
          pppuVar33 = pppuStack_188;
          func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
          func_0x000107c6142c(pppuVar33);
          uVar9 = uVar12;
          func_0x000107c61558();
          if ((uVar9 & 1) == 0) {
            FUN_10149ad14();
          }
          ppppuStack_230 = (undefined8 ****)(uVar12 + 0x20);
          pppppuVar29 = (undefined8 *****)ppppuStack_298;
          func_0x0001052fb8a0(ppppuStack_298,*(undefined4 *)(pppuStack_270 + 2),ppppuStack_230,
                              *(undefined8 *)(uVar12 + 0x10));
          if ((long)pppppuVar29 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e104);
            (*pcVar3)();
          }
          if (pppppuVar29 != (undefined8 *****)0x0) {
            pppppuVar31 = (undefined8 *****)0x0;
            ppppuStack_238 = (undefined8 ****)pppuStack_250[2];
            pppuStack_260 = (undefined8 ***)((long)ppppuStack_238 + -1);
            do {
              puVar11 = PTR___sSiN_11034deb0;
              if (*(undefined8 ******)(uVar12 + 0x10) <= pppppuVar31) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e0f0);
                (*pcVar3)();
              }
              ppppuVar28 = (undefined8 ****)ppppuStack_230[(long)pppppuVar31];
              if ((undefined8 *****)ppppuStack_238 == (undefined8 *****)0x0) {
LAB_10149d914:
                ppppuStack_190 = (undefined8 ****)0x0;
                pppuStack_188 = (undefined8 ***)0xe000000000000000;
                func_0x000107c602fc(0x1d);
                func_0x000107c6142c(pppuStack_188);
                ppppuStack_190 = (undefined8 ****)0x2020;
                pppuStack_188 = (undefined8 ****)0xe200000000000000;
                puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                ppppuStack_220 = pppppuVar31;
                func_0x000107c6057c(PTR___sSiN_11034deb0,
                                    PTR___sSis23CustomStringConvertiblesWP_11034df00);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar11);
                uVar18 = 0x20203f3f3f202020;
                func_0x000107c5fb78(0x20203f3f3f202020,0xeb00000000783020);
                ppppuStack_220 = ppppuVar28;
                FUN_1014a2c84();
                puVar11 = PTR___sSuN_11034e220;
                uVar20 = 0x10;
                func_0x000107c5fbc8(&ppppuStack_220,0x10,0,PTR___sSuN_11034e220,uVar18);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar20);
                func_0x000107c5fb78(0x2b20307830202020,0xe900000000000020);
                puVar22 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
                ppppuStack_220 = ppppuVar28;
                func_0x000107c6057c(puVar11,PTR___sSus23CustomStringConvertiblesWP_11034e240);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar22);
                func_0x000107c5fb78(10,0xe100000000000000);
                pppuVar33 = pppuStack_188;
                func_0x000107c5fb78(ppppuStack_190,pppuStack_188);
                func_0x000107c6142c(pppuVar33);
              }
              else {
                lVar8 = 0;
                pppuVar33 = (undefined8 ***)0xffffffffffffffff;
                ppppuVar26 = (undefined8 ****)pppuStack_260;
                do {
                  if (SCARRY8(lVar8,(long)ppppuVar26)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10149dde4);
                    (*pcVar3)();
                  }
                  if (((long)ppppuVar26 + lVar8 < -1) ||
                     (pppuVar24 = (undefined8 ***)((long)((long)ppppuVar26 + lVar8) / 2),
                     (long)pppuStack_250[2] <= (long)pppuVar24)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10149dde8);
                    (*pcVar3)();
                  }
                  ppppuVar14 = (undefined8 ****)((long)pppuVar24 - 1);
                  if (pppuVar35[(long)pppuVar24 * 8 + 4] <= ppppuVar28) {
                    lVar8 = (long)pppuVar24 + 1;
                    ppppuVar14 = ppppuVar26;
                    pppuVar33 = pppuVar24;
                  }
                  ppppuVar26 = ppppuVar14;
                } while (lVar8 <= (long)ppppuVar26);
                if ((long)pppuVar33 < 0) goto LAB_10149d914;
                if (pppuStack_250[2] <= pppuVar33) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e0f4);
                  (*pcVar3)();
                }
                ppppuVar26 = (undefined8 ****)(pppuVar35 + (long)pppuVar33 * 8 + 4);
                if (ppppuVar26[1] < ppppuVar28) goto LAB_10149d914;
                FUN_101499ae8(&ppppuStack_190,pppuVar33,0x112d4f358,&UNK_10d9151b0,
                              PTR___sSiN_11034deb0);
                pppuStack_188 = ppppuVar26[1];
                ppppuStack_190 = (undefined8 ****)*ppppuVar26;
                pppuStack_178 = ppppuVar26[3];
                pppuStack_180 = ppppuVar26[2];
                pppuStack_168 = ppppuVar26[5];
                pppuStack_170 = ppppuVar26[4];
                pppuStack_158 = ppppuVar26[7];
                pppuStack_160 = ppppuVar26[6];
                pppuStack_1d8 = (undefined8 ***)0x2020;
                uStack_1d0 = 0xe200000000000000;
                ppppuStack_1e0 = pppppuVar31;
                FUN_1014a2cc4(&ppppuStack_190,&ppppuStack_220);
                puVar22 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                func_0x000107c6057c(puVar11,PTR___sSis23CustomStringConvertiblesWP_11034df00);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar22);
                func_0x000107c5fb78(0x202020,0xe300000000000000);
                pppuVar24 = pppuStack_168;
                pppuVar33 = pppuStack_170;
                func_0x000107c61434(pppuStack_168);
                func_0x000107c5fb78(pppuVar33,pppuVar24);
                func_0x000107c6142c(pppuVar24);
                uVar20 = 0x7830202020;
                func_0x000107c5fb78(0x7830202020,0xe500000000000000);
                ppppuStack_220 = ppppuVar28;
                FUN_1014a2c84();
                puVar11 = PTR___sSuN_11034e220;
                uVar18 = 0x10;
                func_0x000107c5fbc8(&ppppuStack_220,0x10,0,PTR___sSuN_11034e220,uVar20);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar18);
                func_0x000107c5fb78(0x202020,0xe300000000000000);
                uVar18 = uStack_1d0;
                func_0x000107c5fb78(pppuStack_1d8,uStack_1d0);
                func_0x000107c6142c(uVar18);
                ppppuVar26 = ppppuStack_190;
                ppppuStack_220 = (undefined8 ****)0x7830;
                puStack_218 = (undefined *)0xe200000000000000;
                pppuStack_1d8 = ppppuStack_190;
                uVar18 = 0x10;
                func_0x000107c5fbc8(&pppuStack_1d8,0x10,0,puVar11,uVar20);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar18);
                func_0x000107c5fb78(0x202b20,0xe300000000000000);
                FUN_1014a2cd4(&ppppuStack_190);
                if (ppppuVar28 < ppppuVar26) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e0fc);
                  (*pcVar3)();
                }
                puVar22 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
                pppuStack_1d8 = (undefined8 ****)((long)ppppuVar28 - (long)ppppuVar26);
                func_0x000107c6057c(puVar11,PTR___sSus23CustomStringConvertiblesWP_11034e240);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar22);
                func_0x000107c5fb78(10,0xe100000000000000);
                puVar11 = puStack_218;
                func_0x000107c5fb78(ppppuStack_220,puStack_218);
                func_0x000107c6142c(puVar11);
              }
              pppppuVar31 = (undefined8 *****)((long)pppppuVar31 + 1);
            } while (pppppuVar31 != pppppuVar29);
          }
          func_0x000107c61574(pppuStack_270);
          ppppuVar23 = (undefined8 ****)pppuStack_278;
          ppppuVar16 = (undefined8 ****)pppuStack_288;
          ppppuVar28 = (undefined8 ****)pppuStack_280;
          ppppuVar26 = (undefined8 ****)PTR___ss6UInt64VN_11034f048;
          puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        } while (pppuStack_278 != pppuStack_2a8);
      }
      ppppuVar28 = (undefined8 ****)((long)ppppuVar28 + 1);
      func_0x000107c61574(pppuStack_2c8);
      func_0x000107c6142c(ppppuVar16);
      pppppuVar29 = (undefined8 *****)appppuStack_300[2];
    } while (ppppuVar28 != (undefined8 ****)pppuStack_2d8);
  }
  func_0x000107c6142c(pppppuVar29);
  func_0x000107c5fb78(0xd000000000000010,0x800000010ef84ec0);
  pppuVar35 = pppuStack_1a0;
  pppppuVar31 = (undefined8 *****)pppuStack_1a0[2];
  pppppuVar29 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pppppuVar31 != (undefined8 *****)0x0) {
    func_0x000107c61434(pppuStack_1a0);
    pppppuVar29 = pppppuVar31;
    func_0x000101494bcc(pppppuVar31,0);
    pppppuVar27 = &ppppuStack_190;
    FUN_10149b344(pppppuVar27,pppppuVar29 + 4,pppppuVar31,pppuVar35);
    func_0x000100cb2cac(ppppuStack_190,pppuStack_188,pppuStack_180,pppuStack_178,pppuStack_170);
    if (pppppuVar27 != pppppuVar31) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10149dde0);
      (*pcVar3)();
    }
  }
  lVar8 = lStack_2e0;
  ppppuStack_190 = pppppuVar29;
  FUN_101494fd4(&ppppuStack_190);
  pppppuVar29 = (undefined8 *****)ppppuStack_190;
  if (lVar8 != 0) {
    func_0x000107c61574(ppppuStack_190);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e25c);
    (*pcVar3)();
  }
  ppppuVar28 = (undefined8 ****)ppppuStack_190[2];
  if (ppppuVar28 != (undefined8 ****)0x0) {
    pppuStack_260 = pppuVar35;
    ppppuStack_238 = ppppuStack_190;
    ppppuVar26 = (undefined8 ****)ppppuStack_190[4];
    if (-1 < (long)ppppuVar26) {
      ppppuStack_230 = (undefined8 ****)(pppuStack_250 + 4);
      pppppuVar29 = (undefined8 *****)(ppppuStack_190 + 5);
      do {
        ppppuVar28 = (undefined8 ****)((long)ppppuVar28 + -1);
        if (pppuStack_250[2] <= ppppuVar26) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e0f8);
          (*pcVar3)();
        }
        pppppuVar31 = (undefined8 *****)(ppppuStack_230 + (long)ppppuVar26 * 8);
        pppuStack_168 = pppppuVar31[5];
        pppuStack_170 = pppppuVar31[4];
        pppuStack_158 = pppppuVar31[7];
        pppuStack_160 = pppppuVar31[6];
        pppuStack_188 = pppppuVar31[1];
        ppppuStack_190 = *pppppuVar31;
        ppppuVar14 = pppppuVar31[3];
        ppppuVar26 = pppppuVar31[2];
        uVar9 = (ulong)ppppuVar26 & 0xffffffffffff;
        if (((ulong)ppppuVar14 & 0x2000000000000000) != 0) {
          uVar9 = (ulong)ppppuVar14 >> 0x38 & 0xf;
        }
        pppuStack_180 = ppppuVar26;
        pppuStack_178 = ppppuVar14;
        if (uVar9 != 0) {
          pppuStack_1d8 = (undefined8 ****)0x7830;
          uStack_1d0 = 0xe200000000000000;
          pppppuVar31 = &ppppuStack_190;
          ppppuStack_1e0 = ppppuStack_190;
          FUN_1014a2cc4(pppppuVar31,&ppppuStack_220);
          FUN_1014a2c84();
          puVar11 = PTR___sSuN_11034e220;
          uVar18 = 0x10;
          func_0x000107c5fbc8(&ppppuStack_1e0,0x10,0,PTR___sSuN_11034e220,pppppuVar31);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar18);
          func_0x000107c5fb78(0x7830202d20,0xe500000000000000);
          ppppuStack_220 = (undefined8 ****)pppuStack_188;
          uVar18 = 0x10;
          func_0x000107c5fbc8(&ppppuStack_220,0x10,0,puVar11,pppppuVar31);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar18);
          func_0x000107c5fb78(0x20,0xe100000000000000);
          uVar18 = uStack_1d0;
          func_0x000107c5fb78(pppuStack_1d8,uStack_1d0);
          func_0x000107c6142c(uVar18);
          pppuVar33 = pppuStack_168;
          pppuVar35 = pppuStack_170;
          ppppuStack_220 = (undefined8 ****)0x2b;
          puStack_218 = (undefined *)0xe100000000000000;
          func_0x000107c61434(pppuStack_168);
          func_0x000107c5fb78(pppuVar35,pppuVar33);
          func_0x000107c6142c(pppuVar33);
          func_0x000107c5fb78(0x3c2034366d726120,0xe800000000000000);
          func_0x000107c61434(ppppuVar14);
          func_0x000107c5fb78(ppppuVar26,ppppuVar14);
          func_0x000107c6142c(ppppuVar14);
          func_0x000107c5fb78(0x203e,0xe200000000000000);
          pppuVar33 = pppuStack_158;
          pppuVar35 = pppuStack_160;
          func_0x000107c61434(pppuStack_158);
          func_0x000107c5fb78(pppuVar35,pppuVar33);
          FUN_1014a2cd4(&ppppuStack_190);
          func_0x000107c6142c(pppuVar33);
          func_0x000107c5fb78(10,0xe100000000000000);
          puVar11 = puStack_218;
          func_0x000107c5fb78(ppppuStack_220,puStack_218);
          func_0x000107c6142c(puVar11);
        }
        if (ppppuVar28 == (undefined8 ****)0x0) {
          func_0x000107c61574(pppuStack_250);
          func_0x000107c6142c(pppuStack_260);
          pppppuVar29 = (undefined8 *****)ppppuStack_238;
          goto LAB_10149e06c;
        }
        ppppuVar26 = *pppppuVar29;
        pppppuVar29 = pppppuVar29 + 1;
      } while (-1 < (long)ppppuVar26);
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10149e040);
    (*pcVar3)();
  }
  func_0x000107c61574(pppuStack_250);
  func_0x000107c6142c(pppuVar35);
LAB_10149e06c:
  func_0x000107c61574(lStack_290);
  func_0x000107c6142c(uVar12);
  func_0x000107c61574(pppppuVar29);
  *appppuStack_300[3] = pppuStack_1b0;
  appppuStack_300[3][1] = (undefined8 ***)uStack_1a8;
  appppuStack_300[3][3] = pppuStack_100;
  appppuStack_300[3][2] = pppuStack_108;
  appppuStack_300[3][4] = pppuStack_f8;
  *(byte *)(appppuStack_300[3] + 5) = bStack_f0 & 1;
  appppuStack_300[3][7] = pppuStack_e0;
  appppuStack_300[3][6] = pppuStack_e8;
  appppuStack_300[3][9] = pppuStack_d0;
  appppuStack_300[3][8] = pppuStack_d8;
  appppuStack_300[3][0xb] = (undefined8 ***)lStack_c0;
  appppuStack_300[3][10] = (undefined8 ***)lStack_c8;
  appppuStack_300[3][0xd] = pppuStack_b0;
  appppuStack_300[3][0xc] = pppuStack_b8;
  return;
}



/* Entry: 1014a0eb4; end: 1014a11c7;  */

/* WARNING: Removing unreachable block (ram,0x0001014a1088) */

ulong FUN_1014a0eb4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lStack_68;
  
  lStack_68 = param_1;
  func_0x000107c61434();
  FUN_101494d90(&lStack_68);
  lVar6 = lStack_68;
  uVar11 = *(ulong *)(lStack_68 + 0x10);
  uVar8 = 0;
  func_0x000101499794(0,uVar11,0,PTR___swiftEmptyArrayStorage_11034f1c8,
                      PTR__swift_bridgeObjectRelease_11034f258);
  uVar13 = *(ulong *)(lVar6 + 0x10);
  if (uVar13 != 0) {
    uVar16 = 0;
    plVar15 = (long *)(lVar6 + 0x48);
    uVar17 = uVar8;
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1014a1084);
        (*pcVar7)();
      }
      lVar1 = plVar15[-5];
      lVar4 = plVar15[-4];
      lVar2 = plVar15[-3];
      lVar5 = plVar15[-2];
      uVar16 = uVar16 + 1;
      lVar18 = plVar15[-1];
      if (uVar16 < uVar11) {
        if (*(ulong *)(lVar6 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1014a1088);
          (*pcVar7)();
        }
        lVar14 = *plVar15 + -1;
      }
      else {
        lVar14 = lVar1 + 0x1000000;
      }
      func_0x000107c61438(lVar2,2);
      func_0x000107c61438(lVar18,2);
      lVar9 = lVar5;
      lVar12 = lVar18;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar18);
      lVar10 = lVar9;
      func_0x000107c4aa34();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      lVar9 = lVar10;
      func_0x000107c5faec();
      func_0x000107c6142c(lVar2);
      func_0x000107c61170(lVar10);
      uVar3 = *(ulong *)(uVar17 + 0x10);
      uVar8 = uVar17;
      if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar3) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
        func_0x000101499794(uVar8,uVar3 + 1,1,uVar17,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
      lVar10 = uVar8 + uVar3 * 0x40;
      *(long *)(lVar10 + 0x20) = lVar1;
      *(long *)(lVar10 + 0x28) = lVar14;
      *(long *)(lVar10 + 0x30) = lVar4;
      *(long *)(lVar10 + 0x38) = lVar2;
      *(long *)(lVar10 + 0x40) = lVar9;
      *(long *)(lVar10 + 0x48) = lVar12;
      plVar15 = plVar15 + 5;
      *(long *)(lVar10 + 0x50) = lVar5;
      *(long *)(lVar10 + 0x58) = lVar18;
      uVar17 = uVar8;
    } while (uVar13 != uVar16);
  }
  func_0x000107c61574(lVar6);
  return uVar8;
}



/* Entry: 1014a11c8; end: 1014a12e7;  */

undefined1  [16] FUN_1014a11c8(int *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long extraout_x8;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 auStack_50 [2];
  
  lVar8 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  iVar11 = param_1[4];
  if (iVar11 != 0) {
    lVar1 = 0x20;
    if (*param_1 != -0x30051202 && *param_1 != -0x1120531) {
      lVar1 = 0x1c;
    }
    param_1 = (int *)((long)param_1 + lVar1);
    do {
      if (*param_1 == 0x1b) {
        uVar2 = *(undefined1 *)((long)param_1 + 0xf);
        uVar3 = *(undefined1 *)((long)param_1 + 0xe);
        uVar4 = *(undefined1 *)((long)param_1 + 0xd);
        iVar11 = param_1[3];
        uVar5 = *(undefined1 *)((long)param_1 + 0xb);
        uVar6 = *(undefined1 *)((long)param_1 + 10);
        uVar10 = (ulong)*(byte *)((long)param_1 + 9);
        uVar9 = (ulong)*(byte *)(param_1 + 2);
        *(undefined8 *)((long)auStack_50 + lVar7) = *(undefined8 *)(param_1 + 4);
        func_0x000107c5eebc(&stack0xffffffffffffffc0 + lVar7,uVar9,uVar10,uVar6,uVar5,(char)iVar11,
                            uVar4,uVar3,uVar2);
        func_0x000107c5eeac();
        (**(code **)(lVar12 + 8))(&stack0xffffffffffffffc0 + lVar7,lVar8);
        goto LAB_1014a12d0;
      }
      param_1 = (int *)((long)param_1 + (ulong)(uint)param_1[1]);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  uVar9 = 0;
  uVar10 = 0;
LAB_1014a12d0:
  auVar13._8_8_ = uVar10;
  auVar13._0_8_ = uVar9;
  return auVar13;
}



/* Entry: 1014a12e8; end: 1014a163f;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1014a12e8(long param_1,byte *param_2,ulong param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar5 = (uint)(param_4 >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar9 = 4L << uVar5;
  pbVar3 = param_2;
  if (((ulong)param_2 & 0xc) == uVar9) {
    FUN_100e36e7c(param_2,param_4,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_1014a1390;
LAB_1014a1330:
    pbVar8 = (byte *)((ulong)pbVar3 >> 0x10);
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_1014a1330;
LAB_1014a1390:
    uVar7 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar7 = param_5 >> 0x38 & 0xf;
    }
    if (uVar7 < (ulong)pbVar3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a1640);
      (*pcVar2)();
    }
    pbVar8 = (byte *)0xf;
    func_0x000107c5fb98(0xf,pbVar3,param_4,param_5);
  }
  if (((ulong)param_2 & 0xc) == uVar9) {
    FUN_100e36e7c(param_2,param_4,param_5);
  }
  if ((param_3 & 0xc) == uVar9) {
    FUN_100e36e7c(param_3,param_4,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_1014a1448;
LAB_1014a134c:
    param_2 = (byte *)((param_3 >> 0x10) - ((ulong)param_2 >> 0x10));
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_1014a134c;
LAB_1014a1448:
    uVar9 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar9 = param_5 >> 0x38 & 0xf;
    }
    if (uVar9 < (ulong)param_2 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a1630);
      (*pcVar2)();
    }
    if (uVar9 < param_3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a1634);
      (*pcVar2)();
    }
    func_0x000107c5fb98(param_2,param_3,param_4,param_5);
  }
  pbVar3 = pbVar8 + (long)param_2;
  if (SCARRY8((long)pbVar8,(long)param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a1628);
    (*pcVar2)();
  }
  if ((long)pbVar3 < (long)pbVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a162c);
    (*pcVar2)();
  }
  pbVar6 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar6 = pbVar8 + param_1;
  }
  if (*pbVar6 == 0x2b) {
    if (pbVar3 == pbVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a163c);
      (*pcVar2)();
    }
    if ((long)pbVar3 - (long)pbVar8 == 1) goto LAB_1014a1604;
    uVar9 = 0;
    param_2 = param_2 + -1;
    do {
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar5 = bVar1 - 0x30;
      if (9 < uVar5) {
        uVar5 = (uint)bVar1;
        if (bVar1 - 0x41 < 6) {
          uVar5 = uVar5 - 0x37;
        }
        else {
          if (5 < uVar5 - 0x61) goto LAB_1014a1604;
          uVar5 = uVar5 - 0x57;
        }
      }
      if (uVar9 >> 0x3c != 0) goto LAB_1014a1604;
      uVar9 = uVar9 * 0x10 + (ulong)(byte)uVar5;
      param_2 = param_2 + -1;
    } while (param_2 != (byte *)0x0);
  }
  else if (*pbVar6 == 0x2d) {
    if (pbVar3 == pbVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a1638);
      (*pcVar2)();
    }
    if ((long)pbVar3 - (long)pbVar8 == 1) {
LAB_1014a1604:
      uVar9 = 0;
      uVar4 = 1;
      goto LAB_1014a160c;
    }
    uVar9 = 0;
    param_2 = param_2 + -1;
    do {
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
      uVar5 = bVar1 - 0x30;
      if (9 < uVar5) {
        uVar5 = (uint)bVar1;
        if (bVar1 - 0x41 < 6) {
          uVar5 = uVar5 - 0x37;
        }
        else {
          if (5 < uVar5 - 0x61) goto LAB_1014a1604;
          uVar5 = uVar5 - 0x57;
        }
      }
      if ((uVar9 >> 0x3c != 0) ||
         (uVar7 = uVar9 * 0x10, uVar9 = uVar7 - (byte)uVar5, uVar7 < (byte)uVar5))
      goto LAB_1014a1604;
      param_2 = param_2 + -1;
    } while (param_2 != (byte *)0x0);
  }
  else {
    if (pbVar3 == pbVar8) goto LAB_1014a1604;
    uVar9 = 0;
    pbVar3 = pbVar6;
    while (pbVar3 != (byte *)0x0) {
      bVar1 = *pbVar6;
      uVar5 = bVar1 - 0x30;
      if (9 < uVar5) {
        uVar5 = (uint)bVar1;
        if (bVar1 - 0x41 < 6) {
          uVar5 = uVar5 - 0x37;
        }
        else {
          if (5 < uVar5 - 0x61) goto LAB_1014a1604;
          uVar5 = uVar5 - 0x57;
        }
      }
      if (uVar9 >> 0x3c != 0) goto LAB_1014a1604;
      uVar9 = uVar9 * 0x10 + (ulong)(byte)uVar5;
      pbVar6 = pbVar6 + 1;
      param_2 = param_2 + -1;
      pbVar3 = param_2;
    }
  }
  uVar4 = 0;
LAB_1014a160c:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = uVar9;
  return auVar10;
}



/* Entry: 1014a1640; end: 1014a1c5f;  */

undefined * FUN_1014a1640(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *****pppppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puStack_e8;
  undefined *puStack_a0;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 10;
  uStack_68 = 0xe100000000000000;
  puStack_80 = &uStack_70;
  func_0x000107c61434(param_2);
  lVar7 = 0x7fffffffffffffff;
  FUN_1014784b8(0x7fffffffffffffff,1,FUN_1014a2f4c,&ppppuStack_90,param_1,param_2);
  uVar25 = *(ulong *)(lVar7 + 0x10);
  if (uVar25 == 0) {
    puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar26 = 0;
    puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1014a1c50);
        (*pcVar6)();
      }
      puVar2 = (ulong *)(lVar7 + 0x20 + uVar26 * 0x20);
      uVar8 = *puVar2;
      uVar21 = puVar2[1];
      uVar24 = puVar2[2];
      uVar3 = puVar2[3];
      uVar28 = uVar21 >> 0xe;
      func_0x000107c61434(uVar3);
      if (uVar28 == uVar8 >> 0xe) {
        uVar28 = uVar8;
        uVar11 = uVar21;
        func_0x000107c601b8();
        puVar9 = (undefined *)0x0;
        FUN_1014788a4(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar24 = *(ulong *)(puVar9 + 0x10);
        puVar18 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar24) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_1014788a4(puVar18,uVar24 + 1,1,puVar9);
        }
        *(ulong *)(puVar18 + 0x10) = uVar24 + 1;
        *(ulong *)(puVar18 + uVar24 * 0x20 + 0x20) = uVar8;
        *(ulong *)(puVar18 + uVar24 * 0x20 + 0x28) = uVar21;
        *(ulong *)(puVar18 + uVar24 * 0x20 + 0x30) = uVar28;
        *(ulong *)(puVar18 + uVar24 * 0x20 + 0x38) = uVar11;
      }
      else {
        func_0x000107c61434(uVar3);
        puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar11 = uVar8;
        do {
          uVar27 = uVar11 >> 0xe;
          uVar29 = uVar27;
          uVar12 = uVar11;
          while( true ) {
            if (uVar29 == uVar28) {
              uVar12 = uVar11;
              if (uVar27 <= uVar28) goto LAB_1014a1924;
              goto LAB_1014a1c54;
            }
            uVar10 = uVar12;
            uVar20 = uVar8;
            func_0x000107c601b4(uVar12,uVar8,uVar21,uVar24,uVar3);
            if ((uVar10 == 9) && (uVar20 == 0xe100000000000000)) break;
            func_0x000107c605b8();
            func_0x000107c6142c(uVar20);
            if ((uVar10 & 1) != 0) goto LAB_1014a1848;
            func_0x000107c601a4(uVar12,uVar8,uVar21,uVar24,uVar3);
            uVar29 = uVar12 >> 0xe;
          }
          func_0x000107c6142c(0xe100000000000000);
LAB_1014a1848:
          if (uVar29 < uVar27) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1014a1c54);
            (*pcVar6)();
          }
          uVar29 = uVar12;
          uVar27 = uVar8;
          uVar10 = uVar21;
          func_0x000107c601b8();
          puVar18 = puStack_a0;
          func_0x000107c61558();
          if (((ulong)puVar18 & 1) == 0) {
            plVar1 = (long *)(puStack_a0 + 0x10);
            puStack_a0 = (undefined *)0x0;
            FUN_1014788a4(0,*plVar1 + 1,1);
          }
          uVar20 = *(ulong *)(puStack_a0 + 0x10);
          if (*(ulong *)(puStack_a0 + 0x18) >> 1 <= uVar20) {
            puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puStack_a0 + 0x18));
            FUN_1014788a4(puVar18,uVar20 + 1,1,puStack_a0);
            puStack_a0 = puVar18;
          }
          *(ulong *)(puStack_a0 + 0x10) = uVar20 + 1;
          *(ulong *)(puStack_a0 + uVar20 * 0x20 + 0x20) = uVar11;
          *(ulong *)(puStack_a0 + uVar20 * 0x20 + 0x28) = uVar29;
          *(ulong *)(puStack_a0 + uVar20 * 0x20 + 0x30) = uVar27;
          *(ulong *)(puStack_a0 + uVar20 * 0x20 + 0x38) = uVar10;
          func_0x000107c601a4(uVar12,uVar8,uVar21,uVar24,uVar3);
          uVar11 = uVar12;
        } while (*(long *)(puStack_a0 + 0x10) != 2);
        if (uVar28 < uVar12 >> 0xe) {
LAB_1014a1c54:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1014a1c58);
          (*pcVar6)();
        }
LAB_1014a1924:
        uVar24 = uVar21;
        func_0x000107c601b8();
        func_0x000107c6142c(uVar3);
        puVar18 = puStack_a0;
        func_0x000107c61558();
        puVar9 = puStack_a0;
        if (((ulong)puVar18 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_1014788a4(0,*(long *)(puStack_a0 + 0x10) + 1,1,puStack_a0);
        }
        uVar28 = *(ulong *)(puVar9 + 0x10);
        puVar18 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar28) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_1014788a4(puVar18,uVar28 + 1,1,puVar9);
        }
        *(ulong *)(puVar18 + 0x10) = uVar28 + 1;
        *(ulong *)(puVar18 + uVar28 * 0x20 + 0x20) = uVar12;
        *(ulong *)(puVar18 + uVar28 * 0x20 + 0x28) = uVar21;
        *(ulong *)(puVar18 + uVar28 * 0x20 + 0x30) = uVar8;
        *(ulong *)(puVar18 + uVar28 * 0x20 + 0x38) = uVar24;
      }
      func_0x000107c6142c(uVar3);
      if (*(long *)(puVar18 + 0x10) == 3) {
        pppppuVar16 = *(undefined8 ******)(puVar18 + 0x20);
        uVar8 = *(ulong *)(puVar18 + 0x28);
        if ((uVar8 ^ (ulong)pppppuVar16) >> 0xe == 0) goto LAB_1014a16d0;
        pppppuVar17 = *(undefined8 ******)(puVar18 + 0x30);
        uVar24 = *(ulong *)(puVar18 + 0x38);
        if ((uVar24 >> 0x3c & 1) == 0) {
          if ((uVar24 >> 0x3d & 1) == 0) {
            if (((ulong)pppppuVar17 >> 0x3c & 1) == 0) {
              func_0x000107c60358(pppppuVar17,uVar24);
              pppppuVar13 = pppppuVar17;
            }
            else {
              pppppuVar13 = (undefined8 *****)((uVar24 & 0xfffffffffffffff) + 0x20);
            }
          }
          else {
            uStack_88 = uVar24 & 0xffffffffffffff;
            pppppuVar13 = &ppppuStack_90;
            ppppuStack_90 = pppppuVar17;
          }
          FUN_1014a12e8();
          uVar19 = (uint)pppppuVar16;
          pppppuVar16 = pppppuVar13;
        }
        else {
          func_0x000107c61434(uVar24);
          FUN_10149ad50(pppppuVar16,uVar8,pppppuVar17,uVar24,0x10);
          func_0x000107c6142c(uVar24);
          uVar19 = (uint)uVar8;
        }
        if ((uVar19 & 0xff) == 1) goto LAB_1014a16d0;
        if (*(ulong *)(puVar18 + 0x10) < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1014a1c5c);
          (*pcVar6)();
        }
        uVar14 = *(undefined8 *)(puVar18 + 0x40);
        uVar22 = *(undefined8 *)(puVar18 + 0x48);
        uVar15 = *(undefined8 *)(puVar18 + 0x50);
        uVar4 = *(undefined8 *)(puVar18 + 0x58);
        func_0x000107c61434(uVar4);
        func_0x000107c5fb2c(uVar14,uVar22,uVar15,uVar4);
        func_0x000107c6142c(uVar4);
        if (*(ulong *)(puVar18 + 0x10) < 3) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1014a1c60);
          (*pcVar6)();
        }
        uVar15 = *(undefined8 *)(puVar18 + 0x60);
        uVar23 = *(undefined8 *)(puVar18 + 0x68);
        uVar4 = *(undefined8 *)(puVar18 + 0x70);
        uVar5 = *(undefined8 *)(puVar18 + 0x78);
        func_0x000107c61434(uVar5);
        func_0x000107c6142c(puVar18);
        func_0x000107c5fb2c(uVar15,uVar23,uVar4,uVar5);
        func_0x000107c6142c(uVar5);
        puVar18 = puStack_e8;
        func_0x000107c61558();
        if (((ulong)puVar18 & 1) == 0) {
          puVar18 = (undefined *)0x0;
          func_0x0001014992fc(0,*(long *)(puStack_e8 + 0x10) + 1,1,puStack_e8,
                              PTR__swift_bridgeObjectRelease_11034f258);
          puStack_e8 = puVar18;
        }
        uVar8 = *(ulong *)(puStack_e8 + 0x10);
        if (*(ulong *)(puStack_e8 + 0x18) >> 1 <= uVar8) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puStack_e8 + 0x18));
          func_0x0001014992fc(puVar18,uVar8 + 1,1,puStack_e8,
                              PTR__swift_bridgeObjectRelease_11034f258);
          puStack_e8 = puVar18;
        }
        *(ulong *)(puStack_e8 + 0x10) = uVar8 + 1;
        *(undefined8 ******)(puStack_e8 + uVar8 * 0x28 + 0x20) = pppppuVar16;
        *(undefined8 *)(puStack_e8 + uVar8 * 0x28 + 0x28) = uVar14;
        *(undefined8 *)(puStack_e8 + uVar8 * 0x28 + 0x30) = uVar22;
        *(undefined8 *)(puStack_e8 + uVar8 * 0x28 + 0x38) = uVar15;
        *(undefined8 *)(puStack_e8 + uVar8 * 0x28 + 0x40) = uVar23;
      }
      else {
LAB_1014a16d0:
        func_0x000107c6142c(puVar18);
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar25);
  }
  func_0x000107c6142c();
  puVar18 = puStack_e8;
  FUN_1014a0eb4(puStack_e8);
  func_0x000107c6142c(puStack_e8);
  return puVar18;
}



/* Entry: 1014a1c60; end: 1014a1d5b;  */

undefined * FUN_1014a1c60(long param_1)

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
    func_0x0001000285a8(0x112da2fc0,&UNK_10d947400);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014a1d58);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014a1d5c);
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



/* Entry: 1014a1d5c; end: 1014a1dff;  */

undefined1  [16] FUN_1014a1d5c(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar8 = PTR___sSiN_11034deb0;
  if (param_1 >> 0x1e == 0) {
    if (param_1 < 0x100000) {
      if (param_1 < 0x400) {
        puVar8 = PTR___ss6UInt64VN_11034f048;
        puVar10 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        func_0x000107c6057c();
        func_0x000107c5fb78(0x42,0xe100000000000000);
        auVar4._8_8_ = puVar10;
        auVar4._0_8_ = puVar8;
        return auVar4;
      }
      dVar11 = (double)param_1 / 1024.0;
      uVar7 = 0x42694b;
    }
    else {
      dVar11 = (double)param_1 / 1048576.0;
      uVar7 = 0x42694d;
    }
  }
  else {
    dVar11 = (double)param_1 / 1073741824.0;
    uVar7 = 0x426947;
  }
  dVar11 = (double)(long)(dVar11 * 100.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101493960);
    (*pcVar5)();
  }
  if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101493964);
    (*pcVar5)();
  }
  if (dVar11 < 9.223372036854776e+18) {
    puVar6 = PTR___sSiN_11034deb0;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c();
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    uVar1 = 0x30;
    if (9 < (long)dVar11 % 100) {
      uVar1 = 0;
    }
    uVar2 = 0xe100000000000000;
    if (9 < (long)dVar11 % 100) {
      uVar2 = 0xe000000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6057c(puVar8,puVar10);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar10);
    func_0x000107c5fb78(uVar7,0xe300000000000000);
    auVar3._8_8_ = puVar9;
    auVar3._0_8_ = puVar6;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101493968);
  (*pcVar5)();
}



/* Entry: 1014a1e00; end: 1014a222b;  */

undefined1  [16]
FUN_1014a1e00(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar4 = param_4;
  func_0x000107c5fb5c(param_4,param_5);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_98 = lVar12;
  lStack_90 = lVar3;
  if (uVar4 != 0) {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101499164(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a2228);
      (*pcVar1)();
    }
    uVar15 = 0xf;
    puVar8 = puStack_80;
    lStack_a8 = param_2;
    uStack_a0 = param_3;
    do {
      uVar13 = uVar15;
      uVar16 = param_4;
      func_0x000107c5fbcc(uVar15,param_4,param_5);
      uVar5 = uVar13;
      FUN_101493754();
      if ((uVar5 & 1) != 0) {
        func_0x000107c6142c(uVar16);
        uVar16 = 0xe100000000000000;
        uVar13 = 0x5f;
      }
      uVar5 = *(ulong *)(puVar8 + 0x10);
      puStack_80 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
        func_0x000101499164(1 < *(ulong *)(puVar8 + 0x18),uVar5 + 1,1);
      }
      puVar8 = puStack_80;
      *(ulong *)(puStack_80 + 0x10) = uVar5 + 1;
      *(ulong *)(puStack_80 + uVar5 * 0x10 + 0x20) = uVar13;
      *(ulong *)(puStack_80 + uVar5 * 0x10 + 0x28) = uVar16;
      func_0x000107c5fb60(uVar15,param_4,param_5);
      uVar4 = uVar4 - 1;
      param_3 = uStack_a0;
      param_2 = lStack_a8;
    } while (uVar4 != 0);
  }
  uVar6 = 0x112da2fe0;
  puStack_80 = puVar8;
  func_0x0001000285a8(0x112da2fe0,&UNK_10d947420);
  uVar11 = 0x112da2fe8;
  func_0x0001014a2e4c(0x112da2fe8,0x112da2fe0,&UNK_10d947420,PTR___sSayxGSTsMc_11034dd08);
  ppuVar7 = &puStack_80;
  func_0x000107c5fbd0(ppuVar7,uVar6,uVar11);
  func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lStack_98 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_90);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a221c);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a2220);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a2224);
    (*pcVar1)();
  }
  puStack_80 = (undefined *)0x0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(uStack_78);
  puStack_80 = (undefined *)0x724779726f6d654d;
  uStack_78 = 0xec0000005f687061;
  func_0x000107c5fb78(ppuVar7,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  lStack_88 = (long)param_1;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar8);
  lVar3 = 0x7478742e;
  func_0x000107c5fb78(0x7478742e,0xe400000000000000);
  uVar6 = uStack_78;
  puVar8 = puStack_80;
  func_0x0001005c6500();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a222c);
    (*pcVar1)();
  }
  uVar11 = uVar6;
  func_0x000107c5fadc(puVar8,uVar6);
  func_0x000107c6142c(uVar6);
  lVar12 = lVar3;
  func_0x000107c5c168();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar8);
  lVar10 = lVar12;
  func_0x000107c5faec();
  func_0x000107c61170(lVar12);
  lVar12 = lVar10;
  func_0x000107c5fb28(lVar10,uVar11);
  lVar3 = lVar12 + 0x20;
  func_0x000107c5f1d4(lVar3,0x601,0x1a4);
  func_0x000107c61574(lVar12);
  if ((int)lVar3 < 0) {
    func_0x000107c6142c(uVar11);
  }
  else {
    func_0x000107c61434(param_3);
    FUN_10149b58c(param_2,param_3);
    func_0x000107c6142c(param_3);
    lVar12 = 0;
    lVar14 = *(long *)(param_2 + 0x10);
    while( true ) {
      if (lVar14 <= lVar12) {
        func_0x000107c61574(param_2);
        func_0x000107c60f10(lVar3);
        goto LAB_1014a21ec;
      }
      if (SBORROW8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a2218);
        (*pcVar1)();
      }
      lVar9 = lVar3;
      func_0x000107c616d4(lVar3,param_2 + 0x20 + lVar12,lVar14 - lVar12);
      if (lVar9 < 1) break;
      bVar2 = SCARRY8(lVar12,lVar9);
      lVar12 = lVar12 + lVar9;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a21a8);
        (*pcVar1)();
      }
    }
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar11);
    func_0x000107c60f10(lVar3);
  }
  lVar10 = 0;
  uVar11 = 0;
LAB_1014a21ec:
  auVar17._8_8_ = uVar11;
  auVar17._0_8_ = lVar10;
  return auVar17;
}



/* Entry: 1014a222c; end: 1014a2243;  */

void FUN_1014a222c(uint param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + 0x30,auStack_80,0,0);
    pcVar4 = *(code **)(lVar3 + 0x30);
    if (pcVar4 == (code *)0x0) {
      func_0x000107c61574(lVar3);
    }
    else {
      uVar5 = *(undefined8 *)(lVar3 + 0x38);
      FUN_10148f368(pcVar4,uVar5);
      func_0x000107c61574(lVar3);
      (*pcVar4)(uVar1,uVar2,param_1 & 1,param_2);
      func_0x00010148f378(pcVar4,uVar5);
    }
  }
  return;
}



/* Entry: 1014a2244; end: 1014a22ff;  */

void FUN_1014a2244(undefined1 *param_1,double param_2)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x20;
  long lVar3;
  double dVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  if ((*(char *)(lVar3 + 0x10) == '\x01') && ((*(byte *)(lVar3 + 0x58) & 1) == 0)) {
    if ((cVar1 != '\0') && (*(char *)(lVar3 + 0x68) != '\x01')) {
      dVar4 = *(double *)(lVar3 + 0x60);
      func_0x00010028941c();
      func_0x000107c61428(lVar3 + 0x70,auStack_70,0,0);
      if (param_2 - dVar4 < *(double *)(lVar3 + 0x70)) goto LAB_1014a2294;
    }
    uVar2 = 1;
    *(undefined1 *)(lVar3 + 0x58) = 1;
  }
  else {
LAB_1014a2294:
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1014a2300; end: 1014a2337;  */

void FUN_1014a2300(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014a2338; end: 1014a23db;  */

void FUN_1014a2338(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  puVar2 = PTR___sytN_11034f1b0;
  if (lVar3 != 0) {
    lStack_60 = lVar3;
    uStack_58 = uVar1;
    uStack_50 = uVar4;
    func_0x000100087bd4(FUN_1014a2bb4,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000100087bd4(FUN_1014a2be0,lVar3,puVar2 + 8);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1014a23dc; end: 1014a23f7;  */

void FUN_1014a23dc(void)

{
  if (lRam0000000113444448 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e63bc00);
  return;
}



/* Entry: 1014a23f8; end: 1014a2427;  */

void FUN_1014a23f8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1014a2428; end: 1014a24f7;  */

void FUN_1014a2428(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_a0 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_a8 = &UNK_10d947148;
  puStack_90 = &UNK_10d947160;
  puStack_80 = PTR___sBoWV_11034d678 + 0x40;
  puStack_88 = &UNK_10d947178;
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  puStack_68 = &UNK_10d947148;
  puStack_60 = &UNK_10d947190;
  lVar2 = 0x13f;
  puStack_98 = puStack_a0;
  puStack_78 = puVar1;
  puStack_70 = puStack_80;
  puStack_58 = puStack_a0;
  FUN_1014a24f8();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar2 + -8) + 0x40;
    puStack_48 = &UNK_10d947160;
    puStack_40 = &UNK_10d947178;
    puStack_38 = puVar1;
    func_0x000107c61630(param_1,0x100,0xf,&puStack_a8,param_1 + 0x50);
  }
  return;
}



/* Entry: 1014a24f8; end: 1014a254b;  */

void FUN_1014a24f8(long param_1)

{
  long lVar1;
  
  if (lRam0000000112da2900 == 0) {
    lVar1 = 0xff;
    FUN_10148f580();
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112da2900 = param_1;
    }
  }
  return;
}



/* Entry: 1014a254c; end: 1014a260b;  */

void FUN_1014a254c(void)

{
  func_0x000107c61168(&PTR_PTR_112da2a30);
  return;
}



/* Entry: 1014a260c; end: 1014a2667;  */

long FUN_1014a260c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1014a2668; end: 1014a275f;  */

undefined8 * FUN_1014a2668(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1014a2760; end: 1014a27bb;  */

undefined8 * FUN_1014a2760(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1014a27bc; end: 1014a28c3;  */

int FUN_1014a27bc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1014a28c4; end: 1014a28ef;  */

long FUN_1014a28c4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1014a28f0; end: 1014a29b3;  */

int FUN_1014a28f0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 6)) {
    uVar1 = *(byte *)(param_1 + 6) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1014a29b4; end: 1014a2b33;  */

void FUN_1014a29b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001014a29ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2,lVar1);
  return;
}



/* Entry: 1014a2b34; end: 1014a2b4b;  */

void FUN_1014a2b34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1014a2b4c; end: 1014a2bb3;  */

void FUN_1014a2b4c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,1,&lStack_28,param_1 + 0x10);
  }
  return;
}



/* Entry: 1014a2bb4; end: 1014a2bdf;  */

void FUN_1014a2bb4(void)

{
  long unaff_x20;
  
  func_0x000101492348(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1014a2be0; end: 1014a2c0f;  */

void FUN_1014a2be0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  func_0x00010028941c();
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 1014a2c10; end: 1014a2c3b;  */

void FUN_1014a2c10(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014a2c3c; end: 1014a2c83;  */

undefined8 FUN_1014a2c3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1014a2c84; end: 1014a2cc3;  */

void FUN_1014a2c84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da2f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSuSzsMc_11034e238;
  func_0x000107c61520(PTR___sSuSzsMc_11034e238,PTR___sSuN_11034e220);
  puRam0000000112da2f78 = puVar1;
  return;
}



/* Entry: 1014a2cc4; end: 1014a2cd3;  */

undefined8 * FUN_1014a2cc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar2;
  uVar2 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar2;
  uVar2 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar2;
  uVar1 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  return param_2;
}



/* Entry: 1014a2cd4; end: 1014a2cf7;  */

undefined8 FUN_1014a2cd4(undefined8 param_1)

{
  func_0x0001014a2638();
  return param_1;
}



/* Entry: 1014a2cf8; end: 1014a2cff;  */

void FUN_1014a2cf8(ulong *param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  code *pcVar11;
  long lVar12;
  long unaff_x20;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uStack_78;
  code *pcStack_70;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar3 = param_2;
  func_0x000107c6162c(uVar15);
  uVar13 = (uint)param_2;
  if ((param_3 & 1) == 0) {
    if ((*(char *)(unaff_x20 + 0x18) == '\x01' && 7 < uVar13) && param_1 != (ulong *)0x0) {
      pcVar11 = *(code **)(unaff_x20 + 0x20);
      puVar16 = param_1;
      func_0x000107c610a8();
      if (puVar16 == (ulong *)0x0) goto LAB_101492bb0;
      uVar17 = *param_1;
      if (lRam0000000113444468 != -1) {
        pcVar3 = FUN_10149304c;
        func_0x000107c61568(0x113444468,FUN_10149304c);
      }
      uVar17 = uRam0000000113444470 & uVar17;
      if ((uVar17 == 0) || (uVar6 = uVar17, FUN_101492fb4(), pcVar3 = pcVar11, (uVar6 & 1) == 0))
      goto LAB_101492bb0;
      uVar6 = uVar17;
      func_0x000107c614e8();
      func_0x000107c60b14();
      func_0x000107c61180();
      uVar9 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      func_0x000107c61574(uVar15);
    }
    else {
LAB_101492bb0:
      uStack_78 = 0x20636f6c6c614d;
      pcStack_70 = (code *)0xe700000000000000;
      FUN_1014a1d5c((ulong)param_2 & 0xffffffff);
      func_0x000107c5fb78();
      func_0x000107c6142c(pcVar3);
      func_0x000107c61574(uVar15);
      uVar17 = 0;
      pcVar11 = pcStack_70;
      uVar9 = uStack_78;
    }
    if (uVar13 < *(uint *)(unaff_x20 + 0x48)) {
      lVar12 = 0x30;
      if (*(uint *)(unaff_x20 + 0x38) <= uVar13) {
        lVar12 = 0x40;
      }
      uVar6 = *(ulong *)(unaff_x20 + lVar12);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 1;
    }
    uVar7 = (ulong)param_2 & 0xffffffff;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar7;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar6;
    if (SUB168(auVar1 * auVar2,8) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f8c);
      (*pcVar3)();
    }
    if (CARRY8(*(ulong *)(unaff_x20 + 0x58),uVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f90);
      (*pcVar3)();
    }
    uVar18 = uVar7 * uVar6;
    *(ulong *)(unaff_x20 + 0x58) = *(ulong *)(unaff_x20 + 0x58) + uVar7;
    if (CARRY8(*(ulong *)(unaff_x20 + 0x60),uVar18)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f94);
      (*pcVar3)();
    }
    *(ulong *)(unaff_x20 + 0x60) = *(ulong *)(unaff_x20 + 0x60) + uVar18;
  }
  else {
    uStack_78 = 0x20676174203a4d56;
    pcStack_70 = (code *)0xe800000000000000;
    puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
    func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                        PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c61574(uVar15);
    uVar17 = 0;
    uVar18 = (ulong)param_2 & 0xffffffff;
    uVar6 = 1;
    pcVar11 = pcStack_70;
    uVar9 = uStack_78;
  }
  func_0x000107c61428(unaff_x20 + 0x50,&uStack_78,0x20,0);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    uVar7 = uVar9;
    pcVar3 = pcVar11;
    func_0x000100029284();
    if (((ulong)pcVar3 & 1) != 0) {
      puVar16 = *(ulong **)(*(long *)(lVar12 + 0x38) + uVar7 * 8);
      func_0x000107c6157c(puVar16);
      func_0x000107c614a8(&uStack_78);
      func_0x000107c6142c(lVar12);
      func_0x000107c6142c(pcVar11);
      func_0x000107c6157c(puVar16);
      goto LAB_101492e1c;
    }
    func_0x000107c6142c(lVar12);
  }
  puVar16 = &uStack_78;
  func_0x000107c614a8();
  func_0x0001014a256c();
  func_0x000107c613fc();
  puVar16[4] = 0;
  puVar16[5] = 0;
  *(undefined1 *)(puVar16 + 6) = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1014a2d00();
  puVar16[7] = (ulong)puVar5;
  puVar16[2] = uVar9;
  puVar16[3] = (ulong)pcVar11;
  if (uVar17 == 0) {
LAB_101492d7c:
    func_0x000107c61434(pcVar11);
  }
  else {
    uVar15 = 0;
    FUN_1014a2e0c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c61488(uVar17,uVar15);
    if (uVar17 == 0) goto LAB_101492d7c;
    func_0x000107c614e8();
    uVar4 = (undefined1)uVar17;
    FUN_1014a2e0c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c614e8();
    func_0x000107c61434(pcVar11);
    func_0x000107c4a560();
    if ((uVar17 & 1) == 0) {
      FUN_1014a2e0c(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
      func_0x000107c614e8();
      func_0x000107c4a560();
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(puVar16 + 6) = uVar4;
  }
  func_0x000107c61428(unaff_x20 + 0x50,&uStack_78,0x21,0);
  func_0x000107c61580(puVar16,2);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c61558(uVar15);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = 0x8000000000000000;
  FUN_10149a3f4(puVar16,uVar9,pcVar11,uVar15);
  func_0x000107c6142c(pcVar11);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar8;
  func_0x000107c614a8(&uStack_78);
LAB_101492e1c:
  if (CARRY8(puVar16[4],uVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f84);
    (*pcVar3)();
  }
  puVar16[4] = puVar16[4] + uVar6;
  if (!CARRY8(puVar16[5],uVar18)) {
    puVar16[5] = puVar16[5] + uVar18;
    func_0x000107c61574(puVar16);
    iVar14 = (int)((ulong)param_2 >> 0x20);
    if (*(int *)(unaff_x20 + 0x28) != iVar14) {
      puVar10 = &uStack_78;
      func_0x000107c61428(puVar16 + 7,puVar10,0x20,0);
      uVar17 = puVar16[7];
      if ((*(long *)(uVar17 + 0x10) == 0) ||
         (uVar9 = (ulong)param_2 >> 0x20, FUN_10149a22c(), ((ulong)puVar10 & 1) == 0)) {
        puVar10 = &uStack_78;
        func_0x000107c614a8();
        FUN_1014a254c();
        func_0x000107c613fc();
        puVar10[3] = 0;
        puVar10[4] = 0;
        *(int *)(puVar10 + 2) = iVar14;
        func_0x000107c61428(puVar16 + 7,&uStack_78,0x21,0);
        func_0x000107c61580(puVar10,2);
        uVar17 = puVar16[7];
        func_0x000107c61558(uVar17);
        uVar9 = puVar16[7];
        puVar16[7] = 0x8000000000000000;
        FUN_10149a2c4(puVar10,(ulong)param_2 >> 0x20,uVar17);
        puVar16[7] = uVar9;
        func_0x000107c614a8(&uStack_78);
        func_0x000107c61574(puVar16);
        puVar16 = puVar10;
      }
      else {
        puVar10 = *(ulong **)(*(long *)(uVar17 + 0x38) + uVar9 * 8);
        func_0x000107c614a8(&uStack_78);
        func_0x000107c6157c(puVar10);
      }
      func_0x000107c61574(puVar16);
      if (CARRY8(puVar10[3],uVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f98);
        (*pcVar3)();
      }
      puVar10[3] = puVar10[3] + uVar6;
      if (CARRY8(puVar10[4],uVar18)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f9c);
        (*pcVar3)();
      }
      puVar10[4] = puVar10[4] + uVar18;
      puVar16 = puVar10;
    }
    func_0x000107c61574(puVar16);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101492f88);
  (*pcVar3)();
}



/* Entry: 1014a2d00; end: 1014a2e0b;  */

undefined * FUN_1014a2d00(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar4 = 0;
  func_0x0001000285a8(0x112da2fb8);
  puVar2 = puVar7;
  func_0x000107c60498();
  uVar8 = (ulong)*(uint *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar8;
  FUN_10149a22c();
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar6 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) = *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << (uVar3 & 0x3f);
      *(int *)(*(long *)(puVar2 + 0x30) + uVar3 * 4) = (int)uVar8;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a2e0c);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c6157c();
        return puVar2;
      }
      uVar8 = (ulong)*(uint *)(puVar5 + -1);
      uVar9 = *puVar5;
      func_0x000107c6157c();
      uVar3 = uVar8;
      FUN_10149a22c();
      puVar5 = puVar5 + 2;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a2ddc);
  (*pcVar1)();
}



/* Entry: 1014a2e0c; end: 1014a2e8f;  */

void FUN_1014a2e0c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1014a2e90; end: 1014a2f2b;  */

void FUN_1014a2e90(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,1,0);
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  func_0x000107c61428(lVar3 + 0x10,auStack_80,1,0);
  *(ulong *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + (param_2 & 0xffffffff);
  (*pcVar2)(param_1,param_2,param_3);
  return;
}



/* Entry: 1014a2f2c; end: 1014a2f4b;  */

void FUN_1014a2f2c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014a2f4c; end: 1014a2f9f;  */

uint FUN_1014a2f4c(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 1014a2fa0; end: 1014a2fb3;  */

void FUN_1014a2fa0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c6eb0;
  if (lRam0000000112da3010 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112da3010 = param_1;
  }
  return;
}



/* Entry: 1014a2fb4; end: 1014a2ff7;  */

void FUN_1014a2fb4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1014a2ff8; end: 1014a301f;  */

uint FUN_1014a2ff8(uint param_1)

{
  FUN_101494174();
  return param_1 & 1;
}



/* Entry: 1014a3020; end: 1014a3213;  */

undefined * FUN_1014a3020(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar14 != (undefined *)0x0) {
    puVar7 = &UNK_10d947450;
    func_0x0001000285a8(0x112da3008,&UNK_10d947450);
    puVar2 = puVar14;
    func_0x000107c602e8();
    puVar16 = (undefined *)0x0;
    do {
      puVar15 = *(undefined **)(param_1 + 0x20 + (long)puVar16 * 8);
      uVar13 = *(undefined8 *)(puVar2 + 0x28);
      puVar3 = puVar15;
      func_0x000107c5faec();
      func_0x000107c6068c(auStack_a8,uVar13);
      puVar4 = puVar15;
      func_0x000107c61174();
      puVar5 = auStack_a8;
      func_0x000107c5fb58(puVar5,puVar3,puVar7);
      func_0x000107c606a8();
      func_0x000107c6142c(puVar7);
      uVar12 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar17 = (ulong)puVar5 & (uVar12 ^ 0xffffffffffffffff);
      uVar9 = uVar17 >> 6;
      uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
      uVar11 = 1L << (uVar17 & 0x3f);
      if ((uVar11 & uVar10) != 0) {
        puVar7 = puVar3;
        do {
          puVar6 = *(undefined **)(*(long *)(puVar2 + 0x30) + uVar17 * 8);
          func_0x000107c5faec();
          puVar3 = puVar15;
          puVar8 = puVar7;
          func_0x000107c5faec();
          if (puVar6 == puVar3 && puVar7 == puVar8) {
            puVar3 = puVar8;
            func_0x000107c61170(puVar4);
            func_0x000107c6142c(puVar7);
            func_0x000107c6142c(puVar8);
            goto LAB_1014a30a8;
          }
          puVar3 = puVar7;
          func_0x000107c605b8();
          func_0x000107c6142c(puVar7);
          func_0x000107c6142c(puVar8);
          if (((ulong)puVar6 & 1) != 0) {
            func_0x000107c61170(puVar4);
            goto LAB_1014a30a8;
          }
          uVar17 = uVar17 + 1 & ~uVar12;
          uVar9 = uVar17 >> 6;
          uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
          uVar11 = 1L << (uVar17 & 0x3f);
          puVar7 = puVar3;
        } while ((uVar11 & uVar10) != 0);
      }
      *(ulong *)(puVar2 + uVar9 * 8 + 0x38) = uVar11 | uVar10;
      *(undefined **)(*(long *)(puVar2 + 0x30) + uVar17 * 8) = puVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a3214);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_1014a30a8:
      puVar16 = puVar16 + 1;
      puVar7 = puVar3;
    } while (puVar16 != puVar14);
  }
  return puVar2;
}



/* Entry: 1014a3214; end: 1014a32d7;  */

undefined8 FUN_1014a3214(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1014a32d8; end: 1014a32df;  */

/* WARNING: Removing unreachable block (ram,0x000101490604) */

void FUN_1014a32d8(void)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  long unaff_x20;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong auStack_100 [4];
  undefined1 auStack_e0 [8];
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  undefined8 *puStack_68;
  
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c5ede0();
  lStack_d0 = *(long *)(lVar3 + -8);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  puVar17 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x000107c5fb10();
  lStack_a8 = *(long *)(uVar4 - 8);
  uStack_a0 = uVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar3 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar3;
  func_0x000107c60e98();
  puVar12 = (undefined8 *)(uVar4 & 0xffffffff);
  uVar5 = 0;
  func_0x0001014992fc(0,puVar12,0,PTR___swiftEmptyArrayStorage_11034f1c8,
                      PTR__swift_bridgeObjectRelease_11034f258);
  puStack_d8 = puVar17;
  if ((uint)uVar4 != 0) {
    uVar21 = 0;
    puVar14 = puVar12;
    uVar20 = uVar5;
    do {
      uVar6 = uVar21;
      func_0x000107c60e90();
      puVar12 = puVar14;
      uVar5 = uVar20;
      if (uVar6 != 0) {
        uVar7 = uVar21;
        func_0x000107c60e94();
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10149066c);
          (*pcVar2)();
        }
        func_0x000107c5fb80();
        uVar8 = uVar6;
        puVar12 = puVar14;
        FUN_1014a11c8();
        if (puVar12 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
          puVar19 = (undefined8 *)0xe000000000000000;
        }
        else {
          uStack_88 = 0x2d;
          uStack_80 = 0xe100000000000000;
          uStack_98 = 0;
          uStack_90 = 0xe000000000000000;
          uStack_70 = uVar8;
          puStack_68 = puVar12;
          FUN_100e8b654();
          *(ulong *)(lVar3 + -0x10) = uVar8;
          *(ulong *)(lVar3 + -8) = uVar8;
          puVar18 = &uStack_88;
          puVar13 = &uStack_98;
          *(ulong *)(lVar3 + -0x18) = uVar8;
          *(undefined **)(lVar3 + -0x20) = PTR___sSSN_11034da80;
          func_0x000107c601fc(puVar18,puVar13,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
          func_0x000107c6142c(puVar12);
          puVar19 = puVar13;
          func_0x000107c5fb1c();
          puVar12 = puVar19;
          func_0x000107c6142c(puVar13);
        }
        uVar8 = *(ulong *)(uVar20 + 0x10);
        puVar13 = (undefined8 *)(uVar8 + 1);
        if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
          puVar12 = puVar13;
          func_0x0001014992fc(uVar5,puVar13,1,uVar20,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(undefined8 **)(uVar5 + 0x10) = puVar13;
        lVar16 = uVar5 + uVar8 * 0x28;
        *(ulong *)(lVar16 + 0x20) = uVar6;
        *(undefined8 **)(lVar16 + 0x28) = puVar18;
        *(undefined8 **)(lVar16 + 0x30) = puVar19;
        *(ulong *)(lVar16 + 0x38) = uVar7;
        *(undefined8 **)(lVar16 + 0x40) = puVar14;
      }
      uVar1 = (int)uVar21 + 1;
      uVar21 = (ulong)uVar1;
      puVar14 = puVar12;
      uVar20 = uVar5;
    } while ((uint)uVar4 != uVar1);
  }
  uVar4 = uVar5;
  FUN_1014a0eb4();
  func_0x000107c6142c(uVar5);
  uVar5 = uVar4;
  func_0x0001014a1094();
  func_0x000107c6142c(uVar4);
  uVar9 = uStack_c0;
  func_0x000107c5fadc(uStack_c0,uStack_b8);
  uVar10 = 0x742e736567616d69;
  uVar15 = 0xea00000000007478;
  func_0x000107c5fadc(0x742e736567616d69,0xea00000000007478);
  uVar11 = uVar9;
  func_0x000107c5c168(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar9 = uVar11;
  func_0x000107c5faec(uVar11);
  func_0x000107c61170(uVar11);
  lVar3 = lStack_b0;
  uStack_70 = uVar5;
  puStack_68 = puVar12;
  func_0x000107c5fb04(lStack_b0);
  FUN_100e8b654();
  uVar5 = 0;
  lVar16 = lVar3;
  func_0x000107c60214(lVar3,0,PTR___sSSN_11034da80,uVar11);
  (**(code **)(lStack_a8 + 8))(lVar3,uStack_a0);
  func_0x000107c6142c(puVar12);
  puVar17 = puStack_d8;
  if (uVar5 >> 0x3c < 0xf) {
    func_0x000107c5ed80(puStack_d8,uVar9,uVar15);
    func_0x000107c6142c(uVar15);
    func_0x000107c5ee40(puVar17,1,lVar16,uVar5);
    (**(code **)(lStack_d0 + 8))(puVar17,lStack_c8);
    func_0x0001000b44c0(lVar16,uVar5);
  }
  else {
    func_0x000107c6142c(uVar15);
  }
  return;
}



/* Entry: 1014a32e0; end: 1014a3363;  */

void FUN_1014a32e0(void)

{
  FUN_101490b04(0x112da3018,FUN_1014a2fa0,&UNK_10db90110);
  return;
}



/* Entry: 1014a3364; end: 1014a33bb;  */

void FUN_1014a3364(uint param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + 0x30,auStack_80,0,0);
    pcVar4 = *(code **)(lVar3 + 0x30);
    if (pcVar4 == (code *)0x0) {
      func_0x000107c61574(lVar3);
    }
    else {
      uVar5 = *(undefined8 *)(lVar3 + 0x38);
      FUN_10148f368(pcVar4,uVar5);
      func_0x000107c61574(lVar3);
      (*pcVar4)(uVar1,uVar2,param_1 & 1,param_2);
      func_0x00010148f378(pcVar4,uVar5);
    }
  }
  return;
}



/* Entry: 1014a33bc; end: 1014a34f7;  */

void FUN_1014a33bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7f08;
  func_0x000107c610f8(PTR_PTR_1126b7f08);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126b7f68;
  func_0x000107c61168(PTR_PTR_1126b7f68);
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b7f00;
  func_0x000107c610f8(PTR_PTR_1126b7f00);
  func_0x000107c48394();
  func_0x000107c61170(puVar2);
  puVar4 = PTR_PTR_1126dfba8;
  func_0x000107c61168();
  func_0x000107c408f0();
  func_0x000107c61180();
  puVar2 = &UNK_1103c7118;
  func_0x000107c613fc(&UNK_1103c7118,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar4;
  func_0x000107c61174();
  uVar5 = 5;
  func_0x0001001ca524(5,0,0x44,1,0,0,&UNK_10d9476a0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  *param_1 = puVar4;
  return;
}



/* Entry: 1014a34f8; end: 1014a351f;  */

undefined1  [16] FUN_1014a34f8(void)

{
  return ZEXT816(0x1103c70f8);
}



/* Entry: 1014a3520; end: 1014a35d7;  */

void FUN_1014a3520(void)

{
  long unaff_x22;
  
  func_0x000107c4c8dc(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014a354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014a35d8; end: 1014a3607;  */

undefined1  [16] FUN_1014a35d8(void)

{
  return ZEXT816(0x1103c71e8);
}



/* Entry: 1014a3608; end: 1014a3637;  */

void FUN_1014a3608(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1014a3638; end: 1014a3a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1014a3638(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = *(long *)(param_1 + 0x10);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar16 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1014a41b0(0,lVar16,0);
    lVar14 = 0;
    do {
      puVar18 = puStack_68;
      puVar13 = (undefined8 *)(param_1 + 0x20 + lVar14 * 0x30);
      uVar7 = *puVar13;
      uVar8 = puVar13[1];
      uVar11 = puVar13[2];
      uVar2 = puVar13[3];
      lVar3 = puVar13[5];
      lVar17 = *(long *)(lVar3 + 0x10);
      if (lVar17 == 0) {
        func_0x000107c61434(uVar8);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(lVar3);
      }
      else {
        puStack_70 = puVar12;
        func_0x000107c61434(uVar8);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(lVar3);
        func_0x0001014a41ec(0,lVar17,0);
        lVar15 = lVar3 + 0x30;
        do {
          puVar12 = puStack_70;
          uVar6 = *(undefined8 *)(lVar15 + -0x10);
          uVar4 = *(undefined8 *)(lVar15 + -8);
          puVar5 = PTR_PTR_1126b7278;
          func_0x000107c610f8();
          func_0x000107c61434(uVar4);
          func_0x000107c5fadc(uVar6,uVar4);
          func_0x000107c6142c(uVar4);
          func_0x000107c478c0();
          func_0x000107c61170(uVar6);
          uVar1 = *(ulong *)(puVar12 + 0x10);
          puStack_70 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
            func_0x0001014a41ec(1 < *(ulong *)(puVar12 + 0x18),uVar1 + 1,1);
          }
          lVar15 = lVar15 + 0x18;
          *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
          *(undefined **)(puStack_70 + uVar1 * 8 + 0x20) = puVar5;
          lVar17 = lVar17 + -1;
          puVar12 = puStack_70;
        } while (lVar17 != 0);
      }
      puVar5 = PTR_PTR_1126b7258;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar7,uVar8);
      func_0x000107c6142c(uVar8);
      func_0x000107c5fadc(uVar11,uVar2);
      func_0x000107c6142c(uVar2);
      uVar8 = 0;
      FUN_1014a4248(0,0x112da3060,&PTR_PTR_1126b7278);
      puVar9 = puVar12;
      func_0x000107c5fc48(puVar12,uVar8);
      func_0x000107c6142c(puVar12);
      func_0x000107c48364();
      func_0x000107c6142c(lVar3);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar9);
      uVar1 = *(ulong *)(puVar18 + 0x10);
      puStack_68 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar1) {
        FUN_1014a41b0(1 < *(ulong *)(puVar18 + 0x18),uVar1 + 1,1);
      }
      lVar14 = lVar14 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_68 + uVar1 * 8 + 0x20) = puVar5;
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar18 = puStack_68;
    } while (lVar14 != lVar16);
  }
  lVar14 = 0;
  func_0x0001014a4228();
  lVar16 = lVar14;
  func_0x000107c610f8();
  puVar13 = (undefined8 *)(lVar16 + _DAT_112da3068);
  *puVar13 = param_2;
  puVar13[1] = param_3;
  puVar12 = PTR_s_init_1125d9248;
  lStack_80 = lVar16;
  lStack_78 = lVar14;
  func_0x000107c615f0(param_2);
  plVar10 = &lStack_80;
  func_0x000107c61154(plVar10,puVar12);
  uVar7 = plRam0000000112da3070;
  plRam0000000112da3070 = plVar10;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = 0;
  FUN_1014a4248(0,0x112da3078,&PTR_PTR_1126b7258);
  puVar12 = puVar18;
  func_0x000107c5fc48(puVar18,uVar11);
  func_0x000107c6142c(puVar18);
  func_0x000107c50994(uVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  uVar7 = uVar8;
  func_0x000107c5faec(uVar8);
  func_0x000107c61170(plVar10);
  func_0x000107c61170(uVar8);
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = uVar7;
  return auVar19;
}



/* Entry: 1014a3a04; end: 1014a3a37;  */

void FUN_1014a3a04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c3f4e4(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014a3a38; end: 1014a3a5b;  */

void FUN_1014a3a38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014a3a5c; end: 1014a3a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1014a3a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = *(long *)(param_1 + 0x10);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar16 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1014a41b0(0,lVar16,0);
    lVar14 = 0;
    do {
      puVar18 = puStack_68;
      puVar13 = (undefined8 *)(param_1 + 0x20 + lVar14 * 0x30);
      uVar7 = *puVar13;
      uVar8 = puVar13[1];
      uVar11 = puVar13[2];
      uVar2 = puVar13[3];
      lVar3 = puVar13[5];
      lVar17 = *(long *)(lVar3 + 0x10);
      if (lVar17 == 0) {
        func_0x000107c61434(uVar8);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(lVar3);
      }
      else {
        puStack_70 = puVar12;
        func_0x000107c61434(uVar8);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(lVar3);
        func_0x0001014a41ec(0,lVar17,0);
        lVar15 = lVar3 + 0x30;
        do {
          puVar12 = puStack_70;
          uVar6 = *(undefined8 *)(lVar15 + -0x10);
          uVar4 = *(undefined8 *)(lVar15 + -8);
          puVar5 = PTR_PTR_1126b7278;
          func_0x000107c610f8();
          func_0x000107c61434(uVar4);
          func_0x000107c5fadc(uVar6,uVar4);
          func_0x000107c6142c(uVar4);
          func_0x000107c478c0();
          func_0x000107c61170(uVar6);
          uVar1 = *(ulong *)(puVar12 + 0x10);
          puStack_70 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
            func_0x0001014a41ec(1 < *(ulong *)(puVar12 + 0x18),uVar1 + 1,1);
          }
          lVar15 = lVar15 + 0x18;
          *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
          *(undefined **)(puStack_70 + uVar1 * 8 + 0x20) = puVar5;
          lVar17 = lVar17 + -1;
          puVar12 = puStack_70;
        } while (lVar17 != 0);
      }
      puVar5 = PTR_PTR_1126b7258;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar7,uVar8);
      func_0x000107c6142c(uVar8);
      func_0x000107c5fadc(uVar11,uVar2);
      func_0x000107c6142c(uVar2);
      uVar8 = 0;
      FUN_1014a4248(0,0x112da3060,&PTR_PTR_1126b7278);
      puVar9 = puVar12;
      func_0x000107c5fc48(puVar12,uVar8);
      func_0x000107c6142c(puVar12);
      func_0x000107c48364();
      func_0x000107c6142c(lVar3);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar9);
      uVar1 = *(ulong *)(puVar18 + 0x10);
      puStack_68 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar1) {
        FUN_1014a41b0(1 < *(ulong *)(puVar18 + 0x18),uVar1 + 1,1);
      }
      lVar14 = lVar14 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_68 + uVar1 * 8 + 0x20) = puVar5;
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar18 = puStack_68;
    } while (lVar14 != lVar16);
  }
  lVar14 = 0;
  func_0x0001014a4228();
  lVar16 = lVar14;
  func_0x000107c610f8();
  puVar13 = (undefined8 *)(lVar16 + _DAT_112da3068);
  *puVar13 = param_2;
  puVar13[1] = param_3;
  puVar12 = PTR_s_init_1125d9248;
  lStack_80 = lVar16;
  lStack_78 = lVar14;
  func_0x000107c615f0(param_2);
  plVar10 = &lStack_80;
  func_0x000107c61154(plVar10,puVar12);
  uVar7 = plRam0000000112da3070;
  plRam0000000112da3070 = plVar10;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = 0;
  FUN_1014a4248(0,0x112da3078,&PTR_PTR_1126b7258);
  puVar12 = puVar18;
  func_0x000107c5fc48(puVar18,uVar11);
  func_0x000107c6142c(puVar18);
  func_0x000107c50994(uVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  uVar7 = uVar8;
  func_0x000107c5faec(uVar8);
  func_0x000107c61170(plVar10);
  func_0x000107c61170(uVar8);
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = uVar7;
  return auVar19;
}



/* Entry: 1014a3a60; end: 1014a3a93;  */

void FUN_1014a3a60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c3f4e4(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014a3a94; end: 1014a3e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a3a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  puVar4 = param_4;
  func_0x000107c50300();
  func_0x000107c61180();
  puVar15 = puVar4;
  func_0x000107c4e6a0();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar5 = (undefined *)0x0;
  FUN_1014a4248(0,0x112da3060,&PTR_PTR_1126b7278);
  puVar4 = puVar15;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar15);
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar15 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar15 == (undefined *)0x0) {
    func_0x000107c6142c(puVar4);
    puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001014a42a8(0,(ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014a3e9c);
      (*pcVar3)();
    }
    puVar5 = (undefined *)0x0;
    do {
      puVar9 = puStack_e0;
      puVar10 = puVar4;
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        puVar6 = *(undefined **)(puVar4 + (long)puVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar5;
        func_0x0001014a45a4();
      }
      puVar7 = puVar6;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      puVar8 = puVar7;
      func_0x000107c5faec();
      func_0x000107c61170(puVar7);
      puVar7 = puVar6;
      func_0x000107c3eea4();
      func_0x000107c61170(puVar6);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      puStack_e0 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        func_0x0001014a42a8(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puStack_e0;
      puVar5 = puVar5 + 1;
      *(ulong *)(puStack_e0 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_e0 + uVar1 * 0x18 + 0x20) = puVar8;
      *(undefined **)(puStack_e0 + uVar1 * 0x18 + 0x28) = puVar10;
      *(undefined **)(puStack_e0 + uVar1 * 0x18 + 0x30) = puVar7;
    } while (puVar15 != puVar5);
    func_0x000107c6142c(puVar4);
    puVar5 = puVar4;
    puStack_b8 = puVar9;
  }
  puVar4 = param_4;
  func_0x000107c50300();
  func_0x000107c61180();
  puVar15 = puVar4;
  func_0x000107c50374();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar15;
  func_0x000107c5faec();
  puVar13 = puVar5;
  func_0x000107c61170(puVar15);
  puVar15 = param_4;
  func_0x000107c50300();
  func_0x000107c61180();
  puVar9 = puVar15;
  func_0x000107c42284();
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  puVar15 = puVar9;
  func_0x000107c5faec();
  puVar14 = puVar13;
  func_0x000107c61170(puVar9);
  puVar9 = param_4;
  func_0x000107c50300();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c5ca4c();
  func_0x000107c61170(puVar9);
  puVar9 = param_4;
  func_0x000107c506c8();
  func_0x000107c61180();
  puVar6 = puVar9;
  func_0x000107c5c3b4();
  func_0x000107c61170(puVar9);
  puVar9 = param_4;
  func_0x000107c506c8();
  func_0x000107c61180();
  puVar7 = puVar9;
  func_0x000107c42a44();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar9 = puVar7;
  func_0x000107c5faec();
  func_0x000107c61170(puVar7);
  puVar7 = param_4;
  func_0x000107c506c8(param_4);
  func_0x000107c61180();
  func_0x000107c42280();
  func_0x000107c61170(puVar7);
  puVar7 = param_4;
  func_0x000107c506c8();
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c50954();
  func_0x000107c61170(puVar7);
  puVar7 = param_4;
  func_0x000107c506c8();
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c5ca68();
  func_0x000107c61170(puVar7);
  func_0x000107c506c8();
  func_0x000107c61180();
  puVar7 = param_4;
  func_0x000107c42380();
  func_0x000107c61170(param_4);
  uStack_b0 = SUB81(puVar6,0);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112da3068);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112da3068))[1];
  puStack_e0 = puVar4;
  puStack_d8 = puVar5;
  puStack_d0 = puVar15;
  puStack_c8 = puVar13;
  puStack_c0 = puVar10;
  puStack_a8 = puVar9;
  puStack_a0 = puVar14;
  uStack_98 = param_1;
  puStack_90 = puVar8;
  puStack_88 = puVar11;
  puStack_80 = puVar7;
  func_0x000107c614f0(uVar12);
  (**(code **)(lVar2 + 8))(param_2,param_3,&puStack_e0,uVar12,lVar2);
  FUN_1014a4768(&puStack_e0);
  return;
}



/* Entry: 1014a3e9c; end: 1014a3f0f; -[_TtC23SpeedTestImplementationP33_326DDA405BBE80BC88262FF2AAB512FE24SpeedTestCallbackAdapter onRequestCompleted:response:] */

void FUN_1014a3e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1014a3a94(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014a3f10; end: 1014a3fa3; -[_TtC23SpeedTestImplementationP33_326DDA405BBE80BC88262FF2AAB512FE24SpeedTestCallbackAdapter onAllCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a3f10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  func_0x000107c5faec(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da3068);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112da3068))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x10);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,param_2,uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014a3fa4; end: 1014a4063; -[_TtC23SpeedTestImplementationP33_326DDA405BBE80BC88262FF2AAB512FE24SpeedTestCallbackAdapter onFatalError:errorMessage:] */

/* WARNING: Possible PIC construction at 0x0001014a4040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014a4044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a3fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  func_0x000107c5faec(param_3);
  uVar3 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da3068);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112da3068))[1];
  func_0x000107c614f0(uVar2);
  pcVar4 = *(code **)(lVar1 + 0x18);
  func_0x000107c61174(param_1);
  (*pcVar4)(param_3,param_2,param_4,uVar3,uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014a4064; end: 1014a413f; -[_TtC23SpeedTestImplementationP33_326DDA405BBE80BC88262FF2AAB512FE24SpeedTestCallbackAdapter onProgress:currentPhaseIndex:totalPhases:phaseName:currentRequestIndex:totalRequests:] */

/* WARNING: Possible PIC construction at 0x0001014a4118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014a411c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a4064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  func_0x000107c5faec(param_3);
  uVar3 = param_2;
  func_0x000107c5faec(param_6);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da3068);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112da3068))[1];
  func_0x000107c614f0();
  pcVar4 = *(code **)(lVar1 + 0x20);
  func_0x000107c61174(param_1);
  (*pcVar4)(param_3,param_2,param_4,param_5,param_6,uVar3,param_7,param_8,uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014a4140; end: 1014a419f; -[_TtC23SpeedTestImplementationP33_326DDA405BBE80BC88262FF2AAB512FE24SpeedTestCallbackAdapter init] */

void FUN_1014a4140(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpeedTestImplementation.SpeedTestCallbackAdapter",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a416c);
  (*pcVar1)();
}



/* Entry: 1014a41a0; end: 1014a41af; -[_TtC23SpeedTestImplementationP33_326DDA405BBE80BC88262FF2AAB512FE24SpeedTestCallbackAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a41a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112da3068));
  return;
}



/* Entry: 1014a41b0; end: 1014a4247;  */

void FUN_1014a41b0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1014a42c4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1014a4248; end: 1014a4287;  */

void FUN_1014a4248(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1014a4288; end: 1014a42c3;  */

void FUN_1014a4288(void)

{
  func_0x000107c61168(&PTR_PTR_112da30c0);
  return;
}



/* Entry: 1014a42c4; end: 1014a440f;  */

undefined *
FUN_1014a42c4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a4410);
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
    func_0x0001014a452c(param_5,param_6,param_7,param_8);
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
    FUN_1014a4248(0,param_5,param_6);
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



/* Entry: 1014a4410; end: 1014a4767;  */

undefined * FUN_1014a4410(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a452c);
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
    puVar3 = (undefined *)0x112da3158;
    func_0x0001000285a8(0x112da3158,&UNK_10d9477f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110636300);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1014a4768; end: 1014a479b;  */

undefined8 FUN_1014a4768(undefined8 param_1)

{
  (*(code *)&DAT_1032bf3e8)();
  return param_1;
}



/* Entry: 1014a479c; end: 1014a47fb;  */

undefined1  [16] FUN_1014a479c(void)

{
  return ZEXT816(0x1103c73c0);
}



/* Entry: 1014a47fc; end: 1014a48b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1014a47fc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3de88();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  lVar1 = _DAT_1137ff4d8;
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5edb4(unaff_x20 + _DAT_1137ff4d8,puVar3);
    func_0x000107c61170(puVar3);
  }
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar1,puVar3 == (undefined *)0x0,1,lVar4);
  return unaff_x20;
}



/* Entry: 1014a48b8; end: 1014a48e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a48b8(void)

{
  long unaff_x20;
  
  func_0x0001000293e4(unaff_x20 + _DAT_1137ff4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014a48e8; end: 1014a48ff;  */

undefined1  [16] FUN_1014a48e8(void)

{
  return ZEXT816(0x1103c75c0);
}



/* Entry: 1014a4900; end: 1014a4993;  */

void FUN_1014a4900(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010009a4a4();
  func_0x000107c613fc();
  FUN_1014a49f4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1014a4994; end: 1014a499f;  */

void FUN_1014a4994(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010009a4a4();
  func_0x000107c613fc();
  FUN_1014a49f4(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014a49a0; end: 1014a49f3;  */

undefined8 FUN_1014a49a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1014a49f4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1014a49f4; end: 1014a4acf;  */

void FUN_1014a49f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1014a9200(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001014a8f0c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001014a8f40();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1014a4ad0; end: 1014a4b0b;  */

void FUN_1014a4ad0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014a4b0c; end: 1014a4b5f;  */

void FUN_1014a4b0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014a4b60; end: 1014a4bab;  */

void FUN_1014a4b60(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014a4bac; end: 1014a4bff;  */

void FUN_1014a4bac(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014a4c00; end: 1014a4cb7;  */

long FUN_1014a4c00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x00010097aa40(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010097aabc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010097aae4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 1014a4cb8; end: 1014a4ceb;  */

void FUN_1014a4cb8(void)

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



/* Entry: 1014a4cec; end: 1014a4d2f;  */

undefined1  [16] FUN_1014a4cec(void)

{
  return ZEXT816(0x1103c77c0);
}



/* Entry: 1014a4d30; end: 1014a4d83;  */

void FUN_1014a4d30(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014a4d84; end: 1014a4def;  */

long FUN_1014a4d84(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x000100979b44();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000100979c3c();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 1014a4df0; end: 1014a4e1b;  */

void FUN_1014a4df0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014a4e1c; end: 1014a4e5f;  */

undefined1  [16] FUN_1014a4e1c(void)

{
  return ZEXT816(0x1103c7860);
}



/* Entry: 1014a4e60; end: 1014a4eb3;  */

void FUN_1014a4e60(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014a4eb4; end: 1014a4eff;  */

undefined8 FUN_1014a4eb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010018088c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1014a4f00; end: 1014a4f33;  */

void FUN_1014a4f00(void)

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



/* Entry: 1014a4f34; end: 1014a4f83;  */

undefined8 FUN_1014a4f34(void)

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



/* Entry: 1014a4f84; end: 1014a4fc7;  */

undefined1  [16] FUN_1014a4f84(void)

{
  return ZEXT816(0x1103c7928);
}


