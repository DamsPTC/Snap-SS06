/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b188d10; end: 10b188fa7;  */

void FUN_10b188d10(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b188fa8; end: 10b18900f;  */

void FUN_10b188fa8(long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  FUN_10b189010();
  lVar1 = 0;
  if (*(char *)(param_1 + 0x40) == '\0') {
    lVar1 = param_1;
  }
  FUN_10b205d78(0x31,**(undefined8 **)*param_2,lVar1,*(undefined4 *)(param_4 + 0x18));
  return;
}



/* Entry: 10b189010; end: 10b189173;  */

void FUN_10b189010(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined1 auStack_350 [32];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined1 auStack_300 [32];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  char cStack_2c0;
  undefined1 auStack_2b8 [80];
  undefined4 uStack_268;
  
  FUN_10b1f697c(auStack_2b8,param_2[1],param_3,1,0);
  FUN_10b199574(auStack_300,auStack_2b8,param_3,param_4,*(undefined8 *)*param_2);
  bVar1 = cStack_2c0 == '\x01';
  if (bVar1) {
    FUN_10b189364();
    if (bVar1) {
      uStack_328 = uStack_2d8;
      uStack_330 = uStack_2e0;
      uStack_320 = uStack_2d0;
LAB_10b1890e8:
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2e0 = 0;
      uStack_318 = 1;
    }
  }
  else {
    FUN_10b189174(auStack_350,param_2,auStack_2b8,param_4,uStack_268);
    func_0x00010563bef4(auStack_300,auStack_350);
    func_0x0001052a038c(auStack_350);
    bVar1 = cStack_2c0 == '\x01';
    if (!bVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,auStack_2b8);
      *(undefined1 *)(param_1 + 0x40) = 1;
      goto LAB_10b189124;
    }
    FUN_10b189364();
    if (bVar1) {
      uStack_328 = uStack_2d8;
      uStack_330 = uStack_2e0;
      uStack_320 = uStack_2d0;
      goto LAB_10b1890e8;
    }
  }
  FUN_10b0fb6ec(param_1,auStack_350);
  func_0x0001052a03ac(auStack_350);
LAB_10b189124:
  func_0x0001052a038c(auStack_300);
  func_0x00010b121af0(auStack_2b8);
  return;
}



/* Entry: 10b189174; end: 10b189363;  */

void FUN_10b189174(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  char cStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [64];
  undefined1 uStack_368;
  undefined4 auStack_360 [2];
  undefined1 auStack_358 [24];
  undefined1 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined1 auStack_2c8 [88];
  char cStack_270;
  byte bStack_240;
  
  uVar1 = *(undefined8 *)(*(long *)*param_2 + 0x10);
  FUN_10b20edf0(uVar1,*(undefined4 *)(param_4 + 0x18));
  uVar2 = param_2[1];
  FUN_10b202630(&uStack_320,param_3);
  auStack_360[0] = *(undefined4 *)(param_4 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_358,param_4);
  uStack_340 = 1;
  uStack_330 = 0;
  auStack_3a8[0] = 0;
  uStack_368 = 0;
  uStack_338 = uVar1;
  uStack_328 = param_5;
  FUN_10b1f6db4(auStack_2c8,uVar2,&uStack_320,auStack_360,0,0,auStack_3a8,0,0);
  FUN_10b121398(auStack_3a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_358);
  func_0x00010b121e00(&uStack_320);
  if ((cStack_270 == '\x01') && ((bStack_240 & 1) != 0)) {
    *param_1 = 0;
    param_1[0x40] = 0;
  }
  else {
    func_0x000107c278b8(&uStack_3c0,&UNK_10e562174);
    func_0x000107313018(&uStack_3e0,&UNK_10f730e83);
    uStack_310 = uStack_3b0;
    uStack_318 = uStack_3b8;
    uStack_320 = uStack_3c0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c0 = 0;
    uStack_308 = 5;
    uStack_300 = uStack_300 & 0xffffffffffffff00;
    uStack_2e8 = cStack_3c8 == '\x01';
    if ((bool)uStack_2e8) {
      uStack_2f8 = uStack_3d8;
      uStack_300 = uStack_3e0;
      uStack_2f0 = uStack_3d0;
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      uStack_3e0 = 0;
    }
    func_0x0001052b8c70(param_1,&uStack_320);
    func_0x0001052a03ac(&uStack_320);
    func_0x000107c279a4(&uStack_3e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3c0);
  }
  func_0x00010b121af0(auStack_2c8);
  return;
}



/* Entry: 10b189364; end: 10b18938f;  */

void FUN_10b189364(void)

{
  return;
}



/* Entry: 10b189390; end: 10b1893a7;  */

void FUN_10b189390(undefined8 param_1)

{
  FUN_10b1f7484(param_1,1);
  return;
}



/* Entry: 10b1893a8; end: 10b1894af;  */

void FUN_10b1893a8(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_5b0 [64];
  undefined1 auStack_570 [680];
  undefined1 auStack_2c8 [72];
  long lStack_280;
  char cStack_270;
  long lStack_248;
  byte bStack_240;
  undefined1 auStack_50 [32];
  
  FUN_10b206f18(auStack_50,param_3);
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10b1f697c(auStack_2c8,*(undefined8 *)(param_2 + 8),auStack_50,0,1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((((cStack_270 == '\x01') && ((bStack_240 & 1) != 0)) && (lStack_248 == 0)) &&
     (lStack_280 == 0)) {
    puVar1 = auStack_2c8;
    FUN_10b1c41c0();
    if ((puVar1 != (undefined1 *)0x0) && (((byte)puVar1[0x10] >> 4 & 1) != 0)) {
      FUN_10b20752c(auStack_5b0);
      FUN_10b123fcc(param_1,auStack_570);
      func_0x00010b0faf64(auStack_5b0);
      goto LAB_10b189430;
    }
  }
  *param_1 = 0;
  param_1[0x228] = 0;
LAB_10b189430:
  func_0x00010b121af0(auStack_2c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  return;
}



/* Entry: 10b1894b0; end: 10b1894b7;  */

void FUN_10b1894b0(long param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  double in_stack_00000008;
  double in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000030;
  undefined4 in_stack_0000003c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar3 = plVar2;
  FUN_10b1262f4();
  lVar4 = *plVar3;
  uVar1 = param_2;
  func_0x00010b1ee684(lVar4,plVar2);
  in_stack_0000003c = uVar1;
  if (0 < *(long *)(lVar4 + 0x690)) {
    func_0x00010b1ed2e8();
    __ZNSt3__16chrono12system_clock3nowEv();
    func_0x00010b1ecf3c(&stack0x00000020);
    lVar5 = in_stack_00000030;
    func_0x00010b1edf14();
    lVar5 = lVar5 + 0xd8;
    FUN_10b1c8738(lVar5,&stack0x0000003c);
    if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
      FUN_10b1c8a1c(lVar5,unaff_x22 + 0x690);
    }
    in_stack_00000008 = (double)param_3;
    in_stack_00000010 = (double)param_4;
    in_stack_00000018 = 0x3ff0000000000000;
    func_0x00010b1c87c8(lVar5,&stack0x00000008,lVar4);
    *(undefined1 *)(lVar5 + 0x38) = 1;
    func_0x000107c2798c(&stack0x00000020);
  }
  return;
}



/* Entry: 10b1894b8; end: 10b1894ff;  */

void FUN_10b1894b8(long *param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  double in_stack_00000008;
  double in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000030;
  undefined4 in_stack_0000003c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  plVar2 = param_1;
  FUN_10b1262f4();
  lVar3 = *plVar2;
  uVar1 = param_2;
  func_0x00010b1ee684(lVar3,param_1);
  in_stack_0000003c = uVar1;
  if (0 < *(long *)(lVar3 + 0x690)) {
    func_0x00010b1ed2e8();
    __ZNSt3__16chrono12system_clock3nowEv();
    func_0x00010b1ecf3c(&stack0x00000020);
    lVar4 = in_stack_00000030;
    func_0x00010b1edf14();
    lVar4 = lVar4 + 0xd8;
    FUN_10b1c8738(lVar4,&stack0x0000003c);
    if ((*(byte *)(lVar4 + 0x30) & 1) == 0) {
      FUN_10b1c8a1c(lVar4,unaff_x22 + 0x690);
    }
    in_stack_00000008 = (double)param_3;
    in_stack_00000010 = (double)param_4;
    in_stack_00000018 = 0x3ff0000000000000;
    func_0x00010b1c87c8(lVar4,&stack0x00000008,lVar3);
    *(undefined1 *)(lVar4 + 0x38) = 1;
    func_0x000107c2798c(&stack0x00000020);
  }
  return;
}



/* Entry: 10b189500; end: 10b189507;  */

void FUN_10b189500(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *extraout_x8;
  long lVar12;
  ulong uVar13;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *plVar14;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar15;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar16;
  long *plVar17;
  long *unaff_x24;
  long *plVar18;
  long lVar19;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined1 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  undefined4 in_stack_00000060;
  long in_stack_00000078;
  long *in_stack_00000080;
  undefined8 *in_stack_00000088;
  long *in_stack_00000090;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  plVar8 = *(long **)(param_2 + 8);
  plVar9 = plVar8;
  FUN_10b1262f4();
  lVar10 = *plVar9;
  func_0x00010b1ecc8c(param_1);
  uVar5 = *(long *)(lVar10 + 0x690) < 0;
  if (*(long *)(lVar10 + 0x690) < 1) {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 5) = 0;
  }
  else {
    func_0x00010b1ebb5c(&stack0x00000068);
    lVar12 = in_stack_00000078;
    func_0x00010b1ec1f4();
    if ((*(byte *)(lVar12 + 0x101) & 1) == 0) {
      in_stack_00000040 = 0;
      in_stack_00000048 = (long *)0x0;
      in_stack_00000050 = (long *)0x0;
      func_0x00010b1eb5b4(*(undefined8 *)(lVar10 + 0x238),0xd5,&stack0x00000040);
      FUN_10b120998(&stack0x00000040);
      *(undefined1 *)extraout_x8 = 0;
      *(undefined1 *)(extraout_x8 + 5) = 0;
    }
    else {
      func_0x00010b1ee44c();
      in_stack_00000060 = 0x3f800000;
      in_stack_00000028 = lVar12 + 0xd8;
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      puVar11 = &stack0x00000028;
      FUN_10b1c8f60();
      if (puVar11 == (undefined8 *)0x0) {
        func_0x00010b1ee464();
        func_0x00010b1eb5b4();
      }
      else {
        in_stack_00000010 = (undefined8 *)in_stack_00000028;
        in_stack_00000018 = (long *)((ulong)in_stack_00000018 & 0xffffffffffffff00);
        in_stack_00000020 = 0;
        puVar11 = &stack0x00000010;
        FUN_10b1c8f60();
        lVar10 = puVar11[8];
        in_stack_00000080 = (long *)&stack0x00000010;
        in_stack_00000088 = puVar11;
        in_stack_00000090 = plVar8;
        while (func_0x00010b1c8fa4(&stack0x00000088), in_stack_00000088 != (undefined8 *)0x0) {
          lVar12 = in_stack_00000088[8];
          uVar5 = lVar10 - lVar12 < 0;
          if (lVar10 <= lVar12) {
            lVar10 = lVar12;
          }
        }
        puVar11 = &stack0x00000028;
        FUN_10b1c8f60();
        in_stack_00000018 = plVar8;
        while (in_stack_00000010 = puVar11, puVar11 != (undefined8 *)0x0) {
          plVar9 = puVar11 + 3;
          FUN_10b1c8758(plVar9,lVar10);
          plVar8 = in_stack_00000048;
          iVar1 = *(int *)(puVar11 + 2);
          plVar18 = (long *)(long)iVar1;
          if (in_stack_00000048 != (long *)0x0) {
            uVar13 = (long)in_stack_00000048 - 1;
            if (((ulong)in_stack_00000048 & uVar13) == 0) {
              unaff_x24 = (long *)(uVar13 & (ulong)plVar18);
              uVar5 = false;
            }
            else {
              uVar5 = (long)in_stack_00000048 - (long)plVar18 < 0;
              unaff_x24 = plVar18;
              if (in_stack_00000048 <= plVar18) {
                uVar2 = 0;
                if (in_stack_00000048 != (long *)0x0) {
                  uVar2 = (ulong)plVar18 / (ulong)in_stack_00000048;
                }
                unaff_x24 = (long *)((long)plVar18 - uVar2 * (long)in_stack_00000048);
              }
            }
            plVar17 = *(long **)(in_stack_00000040 + (long)unaff_x24 * 8);
            if (plVar17 != (long *)0x0) {
              do {
                while( true ) {
                  plVar17 = (long *)*plVar17;
                  if (plVar17 == (long *)0x0) goto LAB_10b1c8bf4;
                  plVar14 = (long *)plVar17[1];
                  if (plVar14 != plVar18) break;
                  uVar5 = (int)plVar17[2] - iVar1 < 0;
                  if ((int)plVar17[2] == iVar1) goto LAB_10b1c8e44;
                }
                if (((ulong)in_stack_00000048 & uVar13) == 0) {
                  plVar14 = (long *)((ulong)plVar14 & uVar13);
                }
                else if (in_stack_00000048 <= plVar14) {
                  uVar2 = 0;
                  if (in_stack_00000048 != (long *)0x0) {
                    uVar2 = (ulong)plVar14 / (ulong)in_stack_00000048;
                  }
                  plVar14 = (long *)((long)plVar14 - uVar2 * (long)in_stack_00000048);
                }
                uVar5 = (long)plVar14 - (long)unaff_x24 < 0;
              } while (plVar14 == unaff_x24);
            }
          }
LAB_10b1c8bf4:
          func_0x00010b1ec5d4();
          in_stack_00000090 = (long *)0x1;
          in_stack_00000080 = plVar9;
          in_stack_00000088 = &stack0x00000050;
          *plVar9 = 0;
          plVar9[1] = (long)plVar18;
          *(int *)(plVar9 + 2) = iVar1;
          plVar9[4] = 0;
          plVar9[5] = 0;
          plVar9[3] = 0;
          plVar17 = plVar9;
          func_0x00010b1ebbc8(in_stack_00000058);
          if (plVar8 == (long *)0x0) {
LAB_10b1c8c30:
            bVar4 = (long *)0x2 < plVar8;
            bVar7 = plVar8 == (long *)0x3;
            func_0x00010b1eaeec((long)plVar8 << 1);
            plVar14 = extraout_x8_00;
            if (!bVar4 || bVar7) {
              plVar14 = extraout_x9;
            }
            plVar15 = plVar8;
            if ((long)plVar14 - 1U == 0) {
              plVar14 = (long *)0x2;
            }
            else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
              func_0x00010b1edda4();
              plVar14 = plVar17;
              plVar15 = in_stack_00000048;
            }
            if (plVar15 < plVar14) {
LAB_10b1c8c7c:
              if ((ulong)plVar14 >> 0x3d != 0) {
                func_0x000104bd35f4();
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1c8f0c);
                (*pcVar3)();
              }
              lVar12 = (long)plVar14 << 3;
              __Znwm(lVar12);
              FUN_10b1e63e4(&stack0x00000040,lVar12);
              plVar8 = (long *)0x0;
              in_stack_00000048 = plVar14;
              while (plVar14 != plVar8) {
                func_0x00010b1ebda4();
                plVar8 = extraout_x9_00;
              }
              plVar8 = plVar14;
              if (in_stack_00000050 != (long *)0x0) {
                func_0x00010b1ec57c();
                func_0x00010b1ed4a4();
                *(long ***)(extraout_x8_01 + (long)extraout_x11 * 8) = &stack0x00000050;
                lVar12 = extraout_x8_01;
                uVar13 = extraout_x9_01;
                plVar17 = extraout_x10;
                plVar15 = extraout_x11;
                while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
                  plVar16 = (long *)plVar17[1];
                  if (((ulong)plVar14 & uVar13) == 0) {
                    plVar16 = (long *)((ulong)plVar16 & uVar13);
                  }
                  else if (plVar14 <= plVar16) {
                    uVar2 = 0;
                    if (plVar14 != (long *)0x0) {
                      uVar2 = (ulong)plVar16 / (ulong)plVar14;
                    }
                    plVar16 = (long *)((long)plVar16 - uVar2 * (long)plVar14);
                  }
                  if (plVar16 != plVar15) {
                    if (*(long *)(lVar12 + (long)plVar16 * 8) == 0) {
                      func_0x00010b1ebf54();
                      lVar12 = extraout_x8_03;
                      uVar13 = extraout_x9_03;
                      plVar17 = extraout_x12;
                      plVar15 = extraout_x11_01;
                    }
                    else {
                      func_0x00010b1ead88();
                      lVar12 = extraout_x8_02;
                      uVar13 = extraout_x9_02;
                      plVar17 = extraout_x10_00;
                      plVar15 = extraout_x11_00;
                    }
                  }
                }
              }
            }
            else {
              plVar8 = plVar15;
              if (plVar14 < plVar15) {
                func_0x00010b1ebdb0((float)in_stack_00000058,in_stack_00000060);
                if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *)0x1 < plVar17) {
                  plVar17 = (long *)(1L << (-LZCOUNT((long)plVar17 + -1) & 0x3fU));
                }
                if (plVar14 <= plVar17) {
                  plVar14 = plVar17;
                }
                plVar8 = in_stack_00000048;
                if (plVar14 < plVar15) {
                  if (plVar14 != (long *)0x0) goto LAB_10b1c8c7c;
                  func_0x00010b1e63e8(&stack0x00000040,0);
                  in_stack_00000048 = (long *)0x0;
                  plVar8 = (long *)0x0;
                }
              }
            }
            if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
              uVar6 = false;
              unaff_x24 = (long *)((long)plVar8 - 1U & (ulong)plVar18);
            }
            else {
              uVar6 = (long)plVar8 - (long)plVar18 < 0;
              unaff_x24 = plVar18;
              if (plVar8 <= plVar18) {
                uVar13 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar13 = (ulong)plVar18 / (ulong)plVar8;
                }
                unaff_x24 = (long *)((long)plVar18 - uVar13 * (long)plVar8);
              }
            }
          }
          else {
            func_0x00010b1ebbbc();
            uVar6 = false;
            if ((bool)uVar5) goto LAB_10b1c8c30;
          }
          lVar12 = in_stack_00000040;
          plVar18 = *(long **)(in_stack_00000040 + (long)unaff_x24 * 8);
          if (plVar18 == (long *)0x0) {
            *plVar9 = (long)in_stack_00000050;
            in_stack_00000050 = plVar9;
            *(long ***)(lVar12 + (long)unaff_x24 * 8) = &stack0x00000050;
            if (*plVar9 != 0) {
              plVar18 = *(long **)(*plVar9 + 8);
              if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
                plVar18 = (long *)((ulong)plVar18 & (long)plVar8 - 1U);
                uVar6 = false;
              }
              else {
                uVar6 = (long)plVar18 - (long)plVar8 < 0;
                if (plVar8 <= plVar18) {
                  uVar13 = 0;
                  if (plVar8 != (long *)0x0) {
                    uVar13 = (ulong)plVar18 / (ulong)plVar8;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar13 * (long)plVar8);
                }
              }
              *(long **)(lVar12 + (long)plVar18 * 8) = plVar9;
            }
          }
          else {
            *plVar9 = *plVar18;
            *plVar18 = (long)plVar9;
          }
          in_stack_00000080 = (undefined8 *)0x0;
          in_stack_00000058 = in_stack_00000058 + 1;
          FUN_10b1e6400(&stack0x00000080);
          uVar5 = uVar6;
          plVar17 = plVar9;
LAB_10b1c8e44:
          lVar19 = puVar11[6];
          lVar12 = puVar11[5];
          plVar17[5] = puVar11[7];
          plVar17[4] = lVar19;
          plVar17[3] = lVar12;
          func_0x00010b1c8fa4(&stack0x00000010);
          puVar11 = in_stack_00000010;
        }
        func_0x00010b1ee464();
        func_0x00010b1eb5b4();
      }
      FUN_10b120998(&stack0x00000080);
      plVar9 = in_stack_00000048;
      lVar10 = in_stack_00000040;
      in_stack_00000040 = 0;
      in_stack_00000048 = (long *)0x0;
      *extraout_x8 = lVar10;
      extraout_x8[1] = (long)plVar9;
      extraout_x8[2] = (long)in_stack_00000050;
      extraout_x8[3] = in_stack_00000058;
      *(undefined4 *)(extraout_x8 + 4) = in_stack_00000060;
      if (in_stack_00000058 != 0) {
        plVar8 = (long *)in_stack_00000050[1];
        if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
          plVar8 = (long *)((ulong)plVar8 & (long)plVar9 - 1U);
        }
        else if (plVar9 <= plVar8) {
          uVar13 = 0;
          if (plVar9 != (long *)0x0) {
            uVar13 = (ulong)plVar8 / (ulong)plVar9;
          }
          plVar8 = (long *)((long)plVar8 - uVar13 * (long)plVar9);
        }
        *(long **)(lVar10 + (long)plVar8 * 8) = extraout_x8 + 2;
        in_stack_00000050 = (long *)0x0;
        in_stack_00000058 = 0;
      }
      func_0x00010b1ec94c();
      FUN_10b18c9cc(&stack0x00000040);
    }
    func_0x00010b1ed21c();
  }
  return;
}



/* Entry: 10b189508; end: 10b189537;  */

void FUN_10b189508(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *extraout_x8;
  long lVar11;
  ulong uVar12;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *plVar13;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar14;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x24;
  long *plVar18;
  long lVar19;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined1 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  undefined4 in_stack_00000060;
  long in_stack_00000078;
  long *in_stack_00000080;
  undefined8 *in_stack_00000088;
  long *in_stack_00000090;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  plVar8 = param_2;
  FUN_10b1262f4();
  lVar9 = *plVar8;
  func_0x00010b1ecc8c(param_1);
  uVar5 = *(long *)(lVar9 + 0x690) < 0;
  if (*(long *)(lVar9 + 0x690) < 1) {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 5) = 0;
  }
  else {
    func_0x00010b1ebb5c(&stack0x00000068);
    lVar11 = in_stack_00000078;
    func_0x00010b1ec1f4();
    if ((*(byte *)(lVar11 + 0x101) & 1) == 0) {
      in_stack_00000040 = 0;
      in_stack_00000048 = (long *)0x0;
      in_stack_00000050 = (long *)0x0;
      func_0x00010b1eb5b4(*(undefined8 *)(lVar9 + 0x238),0xd5,&stack0x00000040);
      FUN_10b120998(&stack0x00000040);
      *(undefined1 *)extraout_x8 = 0;
      *(undefined1 *)(extraout_x8 + 5) = 0;
    }
    else {
      func_0x00010b1ee44c();
      in_stack_00000060 = 0x3f800000;
      in_stack_00000028 = lVar11 + 0xd8;
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      puVar10 = &stack0x00000028;
      FUN_10b1c8f60();
      if (puVar10 == (undefined8 *)0x0) {
        func_0x00010b1ee464();
        func_0x00010b1eb5b4();
      }
      else {
        in_stack_00000010 = (undefined8 *)in_stack_00000028;
        in_stack_00000018 = (long *)((ulong)in_stack_00000018 & 0xffffffffffffff00);
        in_stack_00000020 = 0;
        puVar10 = &stack0x00000010;
        FUN_10b1c8f60();
        lVar9 = puVar10[8];
        in_stack_00000080 = (long *)&stack0x00000010;
        in_stack_00000088 = puVar10;
        in_stack_00000090 = param_2;
        while (func_0x00010b1c8fa4(&stack0x00000088), in_stack_00000088 != (undefined8 *)0x0) {
          lVar11 = in_stack_00000088[8];
          uVar5 = lVar9 - lVar11 < 0;
          if (lVar9 <= lVar11) {
            lVar9 = lVar11;
          }
        }
        puVar10 = &stack0x00000028;
        FUN_10b1c8f60();
        in_stack_00000018 = param_2;
        while (in_stack_00000010 = puVar10, puVar10 != (undefined8 *)0x0) {
          plVar8 = puVar10 + 3;
          FUN_10b1c8758(plVar8,lVar9);
          plVar15 = in_stack_00000048;
          iVar1 = *(int *)(puVar10 + 2);
          plVar18 = (long *)(long)iVar1;
          if (in_stack_00000048 != (long *)0x0) {
            uVar12 = (long)in_stack_00000048 - 1;
            if (((ulong)in_stack_00000048 & uVar12) == 0) {
              unaff_x24 = (long *)(uVar12 & (ulong)plVar18);
              uVar5 = false;
            }
            else {
              uVar5 = (long)in_stack_00000048 - (long)plVar18 < 0;
              unaff_x24 = plVar18;
              if (in_stack_00000048 <= plVar18) {
                uVar2 = 0;
                if (in_stack_00000048 != (long *)0x0) {
                  uVar2 = (ulong)plVar18 / (ulong)in_stack_00000048;
                }
                unaff_x24 = (long *)((long)plVar18 - uVar2 * (long)in_stack_00000048);
              }
            }
            plVar17 = *(long **)(in_stack_00000040 + (long)unaff_x24 * 8);
            if (plVar17 != (long *)0x0) {
              do {
                while( true ) {
                  plVar17 = (long *)*plVar17;
                  if (plVar17 == (long *)0x0) goto LAB_10b1c8bf4;
                  plVar13 = (long *)plVar17[1];
                  if (plVar13 != plVar18) break;
                  uVar5 = (int)plVar17[2] - iVar1 < 0;
                  if ((int)plVar17[2] == iVar1) goto LAB_10b1c8e44;
                }
                if (((ulong)in_stack_00000048 & uVar12) == 0) {
                  plVar13 = (long *)((ulong)plVar13 & uVar12);
                }
                else if (in_stack_00000048 <= plVar13) {
                  uVar2 = 0;
                  if (in_stack_00000048 != (long *)0x0) {
                    uVar2 = (ulong)plVar13 / (ulong)in_stack_00000048;
                  }
                  plVar13 = (long *)((long)plVar13 - uVar2 * (long)in_stack_00000048);
                }
                uVar5 = (long)plVar13 - (long)unaff_x24 < 0;
              } while (plVar13 == unaff_x24);
            }
          }
LAB_10b1c8bf4:
          func_0x00010b1ec5d4();
          in_stack_00000090 = (long *)0x1;
          in_stack_00000080 = plVar8;
          in_stack_00000088 = &stack0x00000050;
          *plVar8 = 0;
          plVar8[1] = (long)plVar18;
          *(int *)(plVar8 + 2) = iVar1;
          plVar8[4] = 0;
          plVar8[5] = 0;
          plVar8[3] = 0;
          plVar17 = plVar8;
          func_0x00010b1ebbc8(in_stack_00000058);
          if (plVar15 == (long *)0x0) {
LAB_10b1c8c30:
            bVar4 = (long *)0x2 < plVar15;
            bVar7 = plVar15 == (long *)0x3;
            func_0x00010b1eaeec((long)plVar15 << 1);
            plVar13 = extraout_x8_00;
            if (!bVar4 || bVar7) {
              plVar13 = extraout_x9;
            }
            plVar14 = plVar15;
            if ((long)plVar13 - 1U == 0) {
              plVar13 = (long *)0x2;
            }
            else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
              func_0x00010b1edda4();
              plVar13 = plVar17;
              plVar14 = in_stack_00000048;
            }
            if (plVar14 < plVar13) {
LAB_10b1c8c7c:
              if ((ulong)plVar13 >> 0x3d != 0) {
                func_0x000104bd35f4();
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1c8f0c);
                (*pcVar3)();
              }
              lVar11 = (long)plVar13 << 3;
              __Znwm(lVar11);
              FUN_10b1e63e4(&stack0x00000040,lVar11);
              plVar15 = (long *)0x0;
              in_stack_00000048 = plVar13;
              while (plVar13 != plVar15) {
                func_0x00010b1ebda4();
                plVar15 = extraout_x9_00;
              }
              plVar15 = plVar13;
              if (in_stack_00000050 != (long *)0x0) {
                func_0x00010b1ec57c();
                func_0x00010b1ed4a4();
                *(long ***)(extraout_x8_01 + (long)extraout_x11 * 8) = &stack0x00000050;
                lVar11 = extraout_x8_01;
                uVar12 = extraout_x9_01;
                plVar17 = extraout_x10;
                plVar14 = extraout_x11;
                while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
                  plVar16 = (long *)plVar17[1];
                  if (((ulong)plVar13 & uVar12) == 0) {
                    plVar16 = (long *)((ulong)plVar16 & uVar12);
                  }
                  else if (plVar13 <= plVar16) {
                    uVar2 = 0;
                    if (plVar13 != (long *)0x0) {
                      uVar2 = (ulong)plVar16 / (ulong)plVar13;
                    }
                    plVar16 = (long *)((long)plVar16 - uVar2 * (long)plVar13);
                  }
                  if (plVar16 != plVar14) {
                    if (*(long *)(lVar11 + (long)plVar16 * 8) == 0) {
                      func_0x00010b1ebf54();
                      lVar11 = extraout_x8_03;
                      uVar12 = extraout_x9_03;
                      plVar17 = extraout_x12;
                      plVar14 = extraout_x11_01;
                    }
                    else {
                      func_0x00010b1ead88();
                      lVar11 = extraout_x8_02;
                      uVar12 = extraout_x9_02;
                      plVar17 = extraout_x10_00;
                      plVar14 = extraout_x11_00;
                    }
                  }
                }
              }
            }
            else {
              plVar15 = plVar14;
              if (plVar13 < plVar14) {
                func_0x00010b1ebdb0((float)in_stack_00000058,in_stack_00000060);
                if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *)0x1 < plVar17) {
                  plVar17 = (long *)(1L << (-LZCOUNT((long)plVar17 + -1) & 0x3fU));
                }
                if (plVar13 <= plVar17) {
                  plVar13 = plVar17;
                }
                plVar15 = in_stack_00000048;
                if (plVar13 < plVar14) {
                  if (plVar13 != (long *)0x0) goto LAB_10b1c8c7c;
                  func_0x00010b1e63e8(&stack0x00000040,0);
                  in_stack_00000048 = (long *)0x0;
                  plVar15 = (long *)0x0;
                }
              }
            }
            if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
              uVar6 = false;
              unaff_x24 = (long *)((long)plVar15 - 1U & (ulong)plVar18);
            }
            else {
              uVar6 = (long)plVar15 - (long)plVar18 < 0;
              unaff_x24 = plVar18;
              if (plVar15 <= plVar18) {
                uVar12 = 0;
                if (plVar15 != (long *)0x0) {
                  uVar12 = (ulong)plVar18 / (ulong)plVar15;
                }
                unaff_x24 = (long *)((long)plVar18 - uVar12 * (long)plVar15);
              }
            }
          }
          else {
            func_0x00010b1ebbbc();
            uVar6 = false;
            if ((bool)uVar5) goto LAB_10b1c8c30;
          }
          lVar11 = in_stack_00000040;
          plVar18 = *(long **)(in_stack_00000040 + (long)unaff_x24 * 8);
          if (plVar18 == (long *)0x0) {
            *plVar8 = (long)in_stack_00000050;
            in_stack_00000050 = plVar8;
            *(long ***)(lVar11 + (long)unaff_x24 * 8) = &stack0x00000050;
            if (*plVar8 != 0) {
              plVar18 = *(long **)(*plVar8 + 8);
              if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
                plVar18 = (long *)((ulong)plVar18 & (long)plVar15 - 1U);
                uVar6 = false;
              }
              else {
                uVar6 = (long)plVar18 - (long)plVar15 < 0;
                if (plVar15 <= plVar18) {
                  uVar12 = 0;
                  if (plVar15 != (long *)0x0) {
                    uVar12 = (ulong)plVar18 / (ulong)plVar15;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar12 * (long)plVar15);
                }
              }
              *(long **)(lVar11 + (long)plVar18 * 8) = plVar8;
            }
          }
          else {
            *plVar8 = *plVar18;
            *plVar18 = (long)plVar8;
          }
          in_stack_00000080 = (undefined8 *)0x0;
          in_stack_00000058 = in_stack_00000058 + 1;
          FUN_10b1e6400(&stack0x00000080);
          uVar5 = uVar6;
          plVar17 = plVar8;
LAB_10b1c8e44:
          lVar19 = puVar10[6];
          lVar11 = puVar10[5];
          plVar17[5] = puVar10[7];
          plVar17[4] = lVar19;
          plVar17[3] = lVar11;
          func_0x00010b1c8fa4(&stack0x00000010);
          puVar10 = in_stack_00000010;
        }
        func_0x00010b1ee464();
        func_0x00010b1eb5b4();
      }
      FUN_10b120998(&stack0x00000080);
      plVar8 = in_stack_00000048;
      lVar9 = in_stack_00000040;
      in_stack_00000040 = 0;
      in_stack_00000048 = (long *)0x0;
      *extraout_x8 = lVar9;
      extraout_x8[1] = (long)plVar8;
      extraout_x8[2] = (long)in_stack_00000050;
      extraout_x8[3] = in_stack_00000058;
      *(undefined4 *)(extraout_x8 + 4) = in_stack_00000060;
      if (in_stack_00000058 != 0) {
        plVar15 = (long *)in_stack_00000050[1];
        if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
          plVar15 = (long *)((ulong)plVar15 & (long)plVar8 - 1U);
        }
        else if (plVar8 <= plVar15) {
          uVar12 = 0;
          if (plVar8 != (long *)0x0) {
            uVar12 = (ulong)plVar15 / (ulong)plVar8;
          }
          plVar15 = (long *)((long)plVar15 - uVar12 * (long)plVar8);
        }
        *(long **)(lVar9 + (long)plVar15 * 8) = extraout_x8 + 2;
        in_stack_00000050 = (long *)0x0;
        in_stack_00000058 = 0;
      }
      func_0x00010b1ec94c();
      FUN_10b18c9cc(&stack0x00000040);
    }
    func_0x00010b1ed21c();
  }
  return;
}



/* Entry: 10b189538; end: 10b18953b;  */

undefined8 * FUN_10b189538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1be8;
  func_0x00010b1257f8(param_1 + 1);
  return param_1;
}



/* Entry: 10b18953c; end: 10b18954f;  */

void FUN_10b18953c(void)

{
  FUN_10b189550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b189550; end: 10b18957f;  */

undefined8 * FUN_10b189550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1be8;
  func_0x00010b1257f8(param_1 + 1);
  return param_1;
}



/* Entry: 10b189580; end: 10b189e33;  */

void FUN_10b189580(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 **ppuVar13;
  long *plVar14;
  long lVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x9;
  undefined8 *extraout_x9_00;
  ulong uVar16;
  ulong extraout_x9_01;
  long *plVar17;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long *extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *extraout_x11;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 **ppuVar24;
  long *plVar25;
  undefined8 **ppuVar26;
  undefined8 *puVar27;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  puVar10 = (undefined8 *)0x1c0;
  __Znwm();
  *puVar10 = FUN_10b18a2b8;
  puVar10[1] = FUN_10b18aa7c;
  FUN_10b128cf8(puVar10 + 2);
  plVar1 = puVar10 + 0x29;
  FUN_10b128cac(param_1,puVar10 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar10 + 0x26,param_2);
  puVar2 = puVar10 + 0xb;
  FUN_10b1b9728(puVar2);
  puVar11 = puVar2;
  FUN_10b1270a8();
  if (((ulong)puVar11 & 1) == 0) {
    *(undefined1 *)(puVar10 + 0x37) = 0;
    puStack_90 = puVar10;
    puStack_88 = puVar2;
    FUN_10b12713c(&uStack_80,puVar2,&puStack_90);
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_78 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 != 0) {
      return;
    }
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    return;
  }
  FUN_10b113e08(puVar10 + 0x2b,puVar2);
  FUN_10b120e24(puVar2);
  FUN_10b13d714(puVar10 + 0x2d,puVar10 + 0x2b,puVar10 + 0x26);
  puVar11 = (undefined8 *)puVar10[0x2d];
  FUN_10b189e34();
  uVar4 = puVar10[0x2d];
  lVar12 = puVar10[0x2e];
  func_0x00010b18abf4();
  plVar17 = puVar11 + 1;
  *plVar17 = 0;
  func_0x00010b18acf0();
  if (lVar12 != 0) {
    do {
      func_0x00010b18aabc();
    } while (extraout_w10 != 0);
  }
  puVar22 = puVar11 + 3;
  *puVar22 = &PTR_FUN_110cc1be8;
  puVar11[4] = uVar4;
  puVar11[5] = lVar12;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  func_0x00010b1257f8(&uStack_80);
  puVar10[0x2f] = puVar22;
  puVar10[0x30] = puVar11;
  lVar12 = 0x108;
  __Znwm();
  *(undefined8 *)(lVar12 + 8) = 0;
  puVar3 = puVar10 + 0x35;
  func_0x00010b18ab50();
  func_0x00010b18ab24();
  *(undefined8 *)(lVar12 + 0x38) = 0x32aaaba7;
  func_0x00010b18abfc();
  *(undefined8 *)(lVar12 + 0xa0) = 0x32aaaba7;
  func_0x00010b18ab88();
  puVar10[0x31] = extraout_x8;
  puVar10[0x32] = lVar12;
  puStack_88 = (undefined8 *)lVar12;
  do {
    func_0x00010b18ab78();
  } while (extraout_w11 != 0);
  do {
    func_0x00010b18ab78();
  } while (extraout_w11_00 != 0);
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  *(undefined8 *)(lVar12 + 0x28) = extraout_x8_00;
  *(long *)(lVar12 + 0x30) = lVar12;
  FUN_10b189f60(&uStack_80);
  ppuVar24 = &puStack_90;
  func_0x00010b189f84();
  func_0x00010b18ac18();
  ppuVar13 = ppuVar24;
  func_0x00010b18acdc();
  ppuVar26 = ppuVar13 + 3;
  *ppuVar26 = extraout_x8_01;
  func_0x00010b18acb4();
  ppuVar13[4] = (undefined8 *)0x32aaaba7;
  func_0x00010b18ac28();
  puVar10[0x33] = ppuVar26;
  puVar10[0x34] = ppuVar13;
  puVar10[0x17] = puVar22;
  puVar10[0x18] = puVar11;
  do {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = *plVar17 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar27 = (undefined8 *)puVar10[0x31];
  puVar10[0x19] = puVar27;
  puVar21 = (undefined8 *)puVar10[0x32];
  puVar10[0x1a] = puVar21;
  if (puVar21 == (undefined8 *)0x0) {
    puVar10[0x1b] = ppuVar26;
    puVar10[0x1c] = ppuVar24;
LAB_10b1897c0:
    do {
      func_0x00010b18aabc();
    } while (extraout_w10_01 != 0);
  }
  else {
    do {
      func_0x00010b18aabc();
    } while (extraout_w10_00 != 0);
    puVar10[0x1b] = ppuVar26;
    ppuVar24 = (undefined8 **)puVar10[0x34];
    puVar10[0x1c] = ppuVar24;
    if (ppuVar24 != (undefined8 **)0x0) goto LAB_10b1897c0;
  }
  func_0x00010b18ac8c();
  puVar18 = puVar10 + 0x12;
  *puVar18 = extraout_x9;
  puVar10[0x11] = extraout_x8_02;
  func_0x00010b18abf4();
  *ppuVar13 = puVar22;
  ppuVar13[1] = puVar11;
  puVar10[0x17] = 0;
  puVar10[0x18] = 0;
  ppuVar13[2] = puVar27;
  ppuVar13[3] = puVar21;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  ppuVar13[4] = ppuVar26;
  ppuVar13[5] = ppuVar24;
  puVar10[0x1b] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x13] = ppuVar13;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar10 + 0x23,puVar10 + 0x26);
  puVar10[0xb] = puVar10[0x11];
  puVar11 = puVar10 + 0xc;
  (**(code **)(puVar10[0x12] + 0x10))(puVar11,puVar18);
  iVar9 = (int)puVar11;
  if (((bRam00000001137f40b0 & 1) == 0) && (func_0x00010b18ac4c(), iVar9 != 0)) {
    func_0x00010b18ac18();
    func_0x00010b18aacc();
  }
  lVar12 = lRam00000001137f40a8;
  puVar10[0x20] = lRam00000001137f40a8;
  *(undefined1 *)(puVar10 + 0x21) = 1;
  __ZNSt3__15mutex4lockEv(lVar12);
  plVar17 = (long *)(lVar12 + 0x40);
  puVar10[0x22] = plVar17;
  *plVar1 = 0;
  puVar10[0x2a] = 0;
  puVar11 = (undefined8 *)(lVar12 + 0x58);
  func_0x000107c278c4(puVar11,puVar10 + 0x23);
  puVar22 = *(undefined8 **)(lVar12 + 0x48);
  if (puVar22 != (undefined8 *)0x0) {
    uVar23 = (long)puVar22 - 1;
    if (((ulong)puVar22 & uVar23) == 0) {
      puVar27 = (undefined8 *)(uVar23 & (ulong)puVar11);
    }
    else {
      puVar27 = puVar11;
      if (puVar22 <= puVar11) {
        uVar16 = 0;
        if (puVar22 != (undefined8 *)0x0) {
          uVar16 = (ulong)puVar11 / (ulong)puVar22;
        }
        puVar27 = (undefined8 *)((long)puVar11 - uVar16 * (long)puVar22);
      }
    }
    plVar25 = *(long **)(*plVar17 + (long)puVar27 * 8);
    if (plVar25 != (long *)0x0) {
      do {
        while( true ) {
          plVar25 = (long *)*plVar25;
          if (plVar25 == (long *)0x0) goto LAB_10b1898fc;
          puVar21 = (undefined8 *)plVar25[1];
          if (puVar21 != puVar11) break;
          plVar14 = plVar25 + 2;
          func_0x000107c278d0(plVar14,puVar10 + 0x23);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10b189b80;
        }
        if (((ulong)puVar22 & uVar23) == 0) {
          puVar21 = (undefined8 *)((ulong)puVar21 & uVar23);
        }
        else if (puVar22 <= puVar21) {
          uVar16 = 0;
          if (puVar22 != (undefined8 *)0x0) {
            uVar16 = (ulong)puVar21 / (ulong)puVar22;
          }
          puVar21 = (undefined8 *)((long)puVar21 - uVar16 * (long)puVar22);
        }
      } while (puVar21 == puVar27);
    }
  }
LAB_10b1898fc:
  plVar25 = (long *)0x38;
  __Znwm();
  plVar14 = (long *)(lVar12 + 0x50);
  puVar10[0x1d] = plVar25;
  puVar10[0x1e] = plVar14;
  puVar10[0x1f] = 0;
  *plVar25 = 0;
  plVar25[1] = (long)puVar11;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (plVar25 + 2,puVar10 + 0x23);
  lVar15 = *plVar1;
  plVar25[6] = puVar10[0x2a];
  plVar25[5] = lVar15;
  *plVar1 = 0;
  puVar10[0x2a] = 0;
  *(undefined1 *)(puVar10 + 0x1f) = 1;
  if ((puVar22 != (undefined8 *)0x0) &&
     ((float)(*(long *)(lVar12 + 0x58) + 1) <= *(float *)(lVar12 + 0x60) * (float)puVar22))
  goto LAB_10b189b08;
  bVar7 = (undefined8 *)0x2 < puVar22;
  bVar8 = puVar22 == (undefined8 *)0x3;
  func_0x00010b18aca0((long)puVar22 << 1);
  puVar27 = extraout_x8_03;
  if (!bVar7 || bVar8) {
    puVar27 = extraout_x9_00;
  }
  if ((long)puVar27 - 1U == 0) {
    puVar27 = (undefined8 *)0x2;
  }
  else if (((ulong)puVar27 & (long)puVar27 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  puVar22 = *(undefined8 **)(lVar12 + 0x48);
  if (puVar22 < puVar27) {
LAB_10b1899ac:
    puVar22 = puVar27;
    if ((ulong)puVar22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10b189cec);
      (*pcVar6)();
    }
    lVar15 = (long)puVar22 << 3;
    __Znwm(lVar15);
    FUN_10b18a084(plVar17,lVar15);
    *(undefined8 **)(lVar12 + 0x48) = puVar22;
    lVar15 = *(long *)(lVar12 + 0x40);
    for (puVar27 = (undefined8 *)0x0; puVar22 != puVar27;
        puVar27 = (undefined8 *)((long)puVar27 + 1)) {
      *(undefined8 *)(lVar15 + (long)puVar27 * 8) = 0;
    }
    plVar19 = (long *)*plVar14;
    if (plVar19 != (long *)0x0) {
      puVar27 = (undefined8 *)plVar19[1];
      uVar16 = (long)puVar22 - 1;
      uVar23 = 0;
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = (ulong)puVar27 / (ulong)puVar22;
      }
      puVar21 = puVar27;
      if (puVar22 <= puVar27) {
        puVar21 = (undefined8 *)((long)puVar27 - uVar23 * (long)puVar22);
      }
      if (((ulong)puVar22 & uVar16) == 0) {
        puVar21 = (undefined8 *)((ulong)puVar27 & uVar16);
      }
      *(long **)(lVar15 + (long)puVar21 * 8) = plVar14;
      while (plVar20 = plVar19, plVar19 = (long *)*plVar20, plVar19 != (long *)0x0) {
        puVar27 = (undefined8 *)plVar19[1];
        if (((ulong)puVar22 & uVar16) == 0) {
          puVar27 = (undefined8 *)((ulong)puVar27 & uVar16);
        }
        else if (puVar22 <= puVar27) {
          uVar23 = 0;
          if (puVar22 != (undefined8 *)0x0) {
            uVar23 = (ulong)puVar27 / (ulong)puVar22;
          }
          puVar27 = (undefined8 *)((long)puVar27 - uVar23 * (long)puVar22);
        }
        if (puVar27 != puVar21) {
          if (*(long *)(lVar15 + (long)puVar27 * 8) == 0) {
            *(long **)(lVar15 + (long)puVar27 * 8) = plVar20;
            puVar21 = puVar27;
          }
          else {
            func_0x00010b18abd4();
            lVar15 = extraout_x8_04;
            uVar16 = extraout_x9_01;
            plVar19 = extraout_x10;
            puVar21 = extraout_x11;
          }
        }
      }
    }
  }
  else if (puVar27 < puVar22) {
    puVar21 = (undefined8 *)(long)((float)*(ulong *)(lVar12 + 0x58) / *(float *)(lVar12 + 0x60));
    if ((puVar22 < (undefined8 *)0x3) || (((ulong)puVar22 & (long)puVar22 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b18abb4();
    }
    if (puVar27 <= puVar21) {
      puVar27 = puVar21;
    }
    if (puVar27 < puVar22) {
      if (puVar27 != (undefined8 *)0x0) goto LAB_10b1899ac;
      FUN_10b18a084(plVar17,0);
      puVar22 = (undefined8 *)0x0;
      *(undefined8 *)(lVar12 + 0x48) = 0;
    }
    else {
      puVar22 = *(undefined8 **)(lVar12 + 0x48);
    }
  }
  if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
    puVar27 = (undefined8 *)((long)puVar22 - 1U & (ulong)puVar11);
  }
  else {
    puVar27 = puVar11;
    if (puVar22 <= puVar11) {
      uVar23 = 0;
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = (ulong)puVar11 / (ulong)puVar22;
      }
      puVar27 = (undefined8 *)((long)puVar11 - uVar23 * (long)puVar22);
    }
  }
LAB_10b189b08:
  lVar15 = *plVar17;
  plVar17 = *(long **)(lVar15 + (long)puVar27 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar25 = *plVar14;
    *plVar14 = (long)plVar25;
    *(long **)(lVar15 + (long)puVar27 * 8) = plVar14;
    if (*plVar25 != 0) {
      puVar11 = *(undefined8 **)(*plVar25 + 8);
      if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
        puVar11 = (undefined8 *)((ulong)puVar11 & (long)puVar22 - 1U);
      }
      else if (puVar22 <= puVar11) {
        uVar23 = 0;
        if (puVar22 != (undefined8 *)0x0) {
          uVar23 = (ulong)puVar11 / (ulong)puVar22;
        }
        puVar11 = (undefined8 *)((long)puVar11 - uVar23 * (long)puVar22);
      }
      *(long **)(lVar15 + (long)puVar11 * 8) = plVar25;
    }
  }
  else {
    *plVar25 = *plVar17;
    *plVar17 = (long)plVar25;
  }
  puVar10[0x1d] = 0;
  *(long *)(lVar12 + 0x58) = *(long *)(lVar12 + 0x58) + 1;
  func_0x00010b18a09c(puVar10 + 0x1d);
LAB_10b189b80:
  func_0x00010b18a0e4(plVar1);
  func_0x00010b189ff8(puVar3,plVar25 + 5);
  if (puVar10[0x35] == 0) {
    func_0x00010b18a108(puVar3);
    (*(code *)*puVar2)(puVar3,puVar2);
    func_0x00010b18a038(plVar25 + 5,puVar10[0x35],puVar10[0x36]);
  }
  func_0x000107c2798c(puVar10 + 0x20);
  func_0x00010b18ac74(puVar10[0xc]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10 + 0x23);
  FUN_10b129140(puVar10 + 7);
  puVar10[8] = puVar10[0x36];
  puVar10[7] = *puVar3;
  *puVar3 = 0;
  puVar10[0x36] = 0;
  *(undefined1 *)(puVar10 + 9) = 1;
  *(undefined1 *)(puVar10 + 10) = 1;
  func_0x00010b18a108(puVar3);
  (**(code **)puVar10[0x12])(puVar18);
  func_0x00010b189e5c(puVar10 + 0x17);
  func_0x00010b189fd4(puVar10 + 0x33);
  func_0x00010b189f84(puVar10 + 0x31);
  FUN_10b189f10(puVar10 + 0x2f);
  func_0x00010b1257f8(puVar10 + 0x2d);
  func_0x00010b125908(puVar10 + 0x2b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10 + 0x26);
  *puVar10 = 0;
  *(undefined1 *)(puVar10 + 0x37) = 1;
  puStack_68 = puVar10 + 7;
  if (*(char *)(puVar10 + 9) == '\x01') {
    FUN_10b129190(puVar10 + 2,&puStack_68);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_70);
    puStack_68 = &uStack_70;
    FUN_10b129038(puVar10 + 2,&puStack_68);
    __ZNSt13exception_ptrD1Ev(&uStack_70);
  }
  func_0x00010b129274(puVar10 + 2);
  func_0x00010b18ac60();
  return;
}



/* Entry: 10b189e34; end: 10b189e8b;  */

void FUN_10b189e34(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  FUN_10b1262f4();
  puVar2 = (undefined8 *)*puVar2;
  func_0x00010b1eaf00(puVar2,param_1);
  uVar1 = puVar2[0xd2] == 1;
  if (0 < (long)puVar2[0xd2]) {
    func_0x00010b1ebbb0();
    func_0x00010b1ebb5c(&pcStack_98);
    puVar2 = puStack_88;
    func_0x00010b1ec1f4();
    if ((*(byte *)(puVar2 + 0x20) & 1) == 0) {
      *(undefined1 *)(puVar2 + 0x20) = 1;
      func_0x00010b1ebe94();
      FUN_10b1fe814(auStack_a8);
      func_0x00010b1ec1fc(auStack_d0);
      puVar2 = &uStack_b8;
      func_0x00010b1ecd44();
      pcStack_98 = FUN_10b1e5e70;
      ppuStack_90 = &PTR_FUN_110cc4398;
      func_0x00010b1ec004();
      func_0x00010b1edfec();
      puVar2[4] = uStack_b0;
      puVar2[3] = uStack_b8;
      uStack_b8 = 0;
      uStack_b0 = 0;
      puStack_88 = puVar2;
      func_0x00010b1ebe1c();
      func_0x00010b1ebbe0();
      func_0x00010b1edd5c(ppuStack_90);
      FUN_10b1c8944(auStack_d0);
      puVar2 = auStack_a8;
      func_0x000106e50c54();
    }
    else {
      func_0x00010b1ebe94();
    }
  }
  func_0x00010b1eaddc(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eba88(&pcStack_98);
  FUN_10b1c8944(auStack_d0);
  func_0x000106e50c54(auStack_a8);
  func_0x00010b1eb590();
  func_0x00010b1ebd60();
  func_0x00010b125908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (puVar2);
  return;
}



/* Entry: 10b189e8c; end: 10b189ee3;  */

void FUN_10b189e8c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,&UNK_10f730e91);
  FUN_10b189580(param_1,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10b189ee4; end: 10b189ee7;  */

void FUN_10b189ee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1c48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b189ee8; end: 10b189efb;  */

void FUN_10b189ee8(void)

{
  func_0x00010b189f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b189efc; end: 10b189f0f;  */

void FUN_10b189efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b18ab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b189f10; end: 10b189f33;  */

void FUN_10b189f10(long param_1)

{
  func_0x00010b18aba8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b189f34; end: 10b189f37;  */

void FUN_10b189f34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1c98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b189f38; end: 10b189f4b;  */

void FUN_10b189f38(void)

{
  func_0x00010b189f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b189f4c; end: 10b189f5f;  */

void FUN_10b189f4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b18ab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b189f60; end: 10b189fa7;  */

void FUN_10b189f60(long param_1)

{
  func_0x00010b18aba8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b189fa8; end: 10b189fab;  */

void FUN_10b189fa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1ce8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b189fac; end: 10b189fbf;  */

void FUN_10b189fac(void)

{
  func_0x00010b189fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b189fc0; end: 10b189fd3;  */

void FUN_10b189fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b18ab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b189fd4; end: 10b18a083;  */

void FUN_10b189fd4(long param_1)

{
  func_0x00010b18aba8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b18a084; end: 10b18a09b;  */

void FUN_10b18a084(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b18a09c; end: 10b18a12b;  */

long * FUN_10b18a09c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b18a0e4(lVar1 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    func_0x00010b18ac60();
  }
  return param_1;
}



/* Entry: 10b18a12c; end: 10b18a22f;  */

void FUN_10b18a12c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int extraout_w10;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  lVar7 = puVar6[1];
  uVar9 = puVar6[1];
  puVar8 = (undefined8 *)*puVar6;
  puVar4 = (undefined8 *)0xf0;
  __Znwm();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cc1d38;
  puVar1 = puVar4 + 3;
  puStack_50 = puVar8;
  puStack_48 = (undefined8 *)uVar9;
  if (lVar7 != 0) {
    do {
      FUN_10b18aabc();
    } while (extraout_w10 != 0);
  }
  FUN_10b21cf5c(puVar1,&puStack_50,puVar6 + 2,puVar6 + 4);
  FUN_10b18a250(&puStack_50);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  if ((puVar4[7] == 0) || (*(long *)(puVar4[7] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_50 = puVar1;
    puStack_48 = puVar4;
    func_0x00010b18a038(puVar4 + 6,puVar1,puVar4);
    func_0x00010b18a108(&puStack_50);
  }
  return;
}



/* Entry: 10b18a230; end: 10b18a233;  */

void FUN_10b18a230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1d38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b18a234; end: 10b18a247;  */

void FUN_10b18a234(void)

{
  FUN_10b18a274();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18a248; end: 10b18a24f;  */

void FUN_10b18a248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b18ab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b18a250; end: 10b18a273;  */

void FUN_10b18a250(long param_1)

{
  func_0x00010b18aba8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b18a274; end: 10b18a27f;  */

void FUN_10b18a274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1d38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b18a280; end: 10b18a29f;  */

void FUN_10b18a280(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b189e5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b18a2a0; end: 10b18a2b7;  */

void FUN_10b18a2a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b18a2b8; end: 10b18aa7b;  */

void FUN_10b18a2b8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 **ppuVar11;
  long *plVar12;
  long lVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x9;
  undefined8 *extraout_x9_00;
  ulong uVar14;
  ulong extraout_x9_01;
  long *plVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar16;
  long *plVar17;
  long *extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *extraout_x11;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 **ppuVar20;
  long *plVar21;
  undefined8 **ppuVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  plVar1 = (long *)(param_1 + 0x148);
  FUN_10b113e08(param_1 + 0x158,param_1 + 0x58);
  FUN_10b120e24(param_1 + 0x58);
  FUN_10b13d714(param_1 + 0x168,param_1 + 0x158,param_1 + 0x130);
  puVar9 = *(undefined8 **)(param_1 + 0x168);
  FUN_10b189e34();
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  lVar10 = *(long *)(param_1 + 0x170);
  func_0x00010b18abf4();
  plVar15 = puVar9 + 1;
  *plVar15 = 0;
  func_0x00010b18acf0();
  if (lVar10 != 0) {
    do {
      func_0x00010b18aabc();
    } while (extraout_w10 != 0);
  }
  puVar19 = puVar9 + 3;
  *puVar19 = &PTR_FUN_110cc1be8;
  puVar9[4] = uVar3;
  puVar9[5] = lVar10;
  puStack_70 = (undefined8 *)0x0;
  lStack_68 = 0;
  func_0x00010b1257f8(&puStack_70);
  *(undefined8 **)(param_1 + 0x178) = puVar19;
  *(undefined8 **)(param_1 + 0x180) = puVar9;
  lVar10 = 0x108;
  __Znwm();
  *(undefined8 *)(lVar10 + 8) = 0;
  puVar2 = (undefined8 *)(param_1 + 0x1a8);
  func_0x00010b18ab50();
  func_0x00010b18ab24();
  *(undefined8 *)(lVar10 + 0x38) = 0x32aaaba7;
  func_0x00010b18abfc();
  *(undefined8 *)(lVar10 + 0xa0) = 0x32aaaba7;
  func_0x00010b18ab88();
  *(undefined8 *)(param_1 + 0x188) = extraout_x8;
  *(long *)(param_1 + 400) = lVar10;
  lStack_68 = lVar10;
  do {
    func_0x00010b18ab78();
  } while (extraout_w11 != 0);
  do {
    func_0x00010b18ab78();
  } while (extraout_w11_00 != 0);
  uStack_80 = 0;
  uStack_78 = 0;
  *(undefined8 *)(lVar10 + 0x28) = extraout_x8_00;
  *(long *)(lVar10 + 0x30) = lVar10;
  FUN_10b189f60(&uStack_80);
  ppuVar20 = &puStack_70;
  func_0x00010b189f84();
  func_0x00010b18ac18();
  ppuVar11 = ppuVar20;
  func_0x00010b18acdc();
  ppuVar22 = ppuVar11 + 3;
  *ppuVar22 = extraout_x8_01;
  func_0x00010b18acb4();
  ppuVar11[4] = (undefined8 *)0x32aaaba7;
  func_0x00010b18ac28();
  *(undefined8 ***)(param_1 + 0x198) = ppuVar22;
  *(undefined8 ***)(param_1 + 0x1a0) = ppuVar11;
  *(undefined8 **)(param_1 + 0xb8) = puVar19;
  *(undefined8 **)(param_1 + 0xc0) = puVar9;
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = *plVar15 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar24 = *(undefined8 **)(param_1 + 0x188);
  puVar23 = (undefined8 *)(param_1 + 200);
  *puVar23 = puVar24;
  puVar18 = *(undefined8 **)(param_1 + 400);
  *(undefined8 **)(param_1 + 0xd0) = puVar18;
  if (puVar18 == (undefined8 *)0x0) {
    *(undefined8 ***)(param_1 + 0xd8) = ppuVar22;
    *(undefined8 ***)(param_1 + 0xe0) = ppuVar20;
LAB_10b18a44c:
    do {
      func_0x00010b18aabc();
    } while (extraout_w10_01 != 0);
  }
  else {
    do {
      func_0x00010b18aabc();
    } while (extraout_w10_00 != 0);
    *(undefined8 ***)(param_1 + 0xd8) = ppuVar22;
    ppuVar20 = *(undefined8 ***)(param_1 + 0x1a0);
    *(undefined8 ***)(param_1 + 0xe0) = ppuVar20;
    if (ppuVar20 != (undefined8 **)0x0) goto LAB_10b18a44c;
  }
  func_0x00010b18ac8c();
  *(undefined8 *)(param_1 + 0x90) = extraout_x9;
  *(undefined8 *)(param_1 + 0x88) = extraout_x8_02;
  func_0x00010b18abf4();
  *ppuVar11 = puVar19;
  ppuVar11[1] = puVar9;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  ppuVar11[2] = puVar24;
  ppuVar11[3] = puVar18;
  *puVar23 = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  ppuVar11[4] = ppuVar22;
  ppuVar11[5] = ppuVar20;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 ***)(param_1 + 0x98) = ppuVar11;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x118,param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x88);
  lVar10 = param_1 + 0x60;
  (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(lVar10,(undefined8 *)(param_1 + 0x90));
  iVar8 = (int)lVar10;
  if (((bRam00000001137f40b0 & 1) == 0) && (func_0x00010b18ac4c(), iVar8 != 0)) {
    func_0x00010b18ac18();
    func_0x00010b18aacc();
  }
  lVar10 = lRam00000001137f40a8;
  *(long *)(param_1 + 0x100) = lRam00000001137f40a8;
  *(undefined1 *)(param_1 + 0x108) = 1;
  __ZNSt3__15mutex4lockEv(lVar10);
  plVar15 = (long *)(lVar10 + 0x40);
  *(long **)(param_1 + 0x110) = plVar15;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  puVar9 = (undefined8 *)(lVar10 + 0x58);
  func_0x000107c278c4(puVar9,param_1 + 0x118);
  puVar19 = *(undefined8 **)(lVar10 + 0x48);
  if (puVar19 != (undefined8 *)0x0) {
    uVar25 = (long)puVar19 - 1;
    if (((ulong)puVar19 & uVar25) == 0) {
      puVar23 = (undefined8 *)(uVar25 & (ulong)puVar9);
    }
    else {
      puVar23 = puVar9;
      if (puVar19 <= puVar9) {
        uVar14 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          uVar14 = (ulong)puVar9 / (ulong)puVar19;
        }
        puVar23 = (undefined8 *)((long)puVar9 - uVar14 * (long)puVar19);
      }
    }
    plVar21 = *(long **)(*plVar15 + (long)puVar23 * 8);
    if (plVar21 != (long *)0x0) {
      do {
        while( true ) {
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_10b18a584;
          puVar18 = (undefined8 *)plVar21[1];
          if (puVar18 != puVar9) break;
          plVar12 = plVar21 + 2;
          func_0x000107c278d0(plVar12,param_1 + 0x118);
          if (((ulong)plVar12 & 1) != 0) goto LAB_10b18a80c;
        }
        if (((ulong)puVar19 & uVar25) == 0) {
          puVar18 = (undefined8 *)((ulong)puVar18 & uVar25);
        }
        else if (puVar19 <= puVar18) {
          uVar14 = 0;
          if (puVar19 != (undefined8 *)0x0) {
            uVar14 = (ulong)puVar18 / (ulong)puVar19;
          }
          puVar18 = (undefined8 *)((long)puVar18 - uVar14 * (long)puVar19);
        }
      } while (puVar18 == puVar23);
    }
  }
LAB_10b18a584:
  plVar21 = (long *)0x38;
  __Znwm();
  plVar12 = (long *)(lVar10 + 0x50);
  *(long **)(param_1 + 0xe8) = plVar21;
  *(long **)(param_1 + 0xf0) = plVar12;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *plVar21 = 0;
  plVar21[1] = (long)puVar9;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (plVar21 + 2,param_1 + 0x118);
  lVar13 = *plVar1;
  plVar21[6] = *(long *)(param_1 + 0x150);
  plVar21[5] = lVar13;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  if ((puVar19 != (undefined8 *)0x0) &&
     ((float)(*(long *)(lVar10 + 0x58) + 1) <= *(float *)(lVar10 + 0x60) * (float)puVar19))
  goto LAB_10b18a794;
  bVar6 = (undefined8 *)0x2 < puVar19;
  bVar7 = puVar19 == (undefined8 *)0x3;
  func_0x00010b18aca0((long)puVar19 << 1);
  puVar23 = extraout_x8_03;
  if (!bVar6 || bVar7) {
    puVar23 = extraout_x9_00;
  }
  if ((long)puVar23 - 1U == 0) {
    puVar23 = (undefined8 *)0x2;
  }
  else if (((ulong)puVar23 & (long)puVar23 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  puVar19 = *(undefined8 **)(lVar10 + 0x48);
  if (puVar19 < puVar23) {
LAB_10b18a638:
    puVar19 = puVar23;
    if ((ulong)puVar19 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10b18a96c);
      (*pcVar5)();
    }
    lVar13 = (long)puVar19 << 3;
    __Znwm(lVar13);
    FUN_10b18a084(plVar15,lVar13);
    *(undefined8 **)(lVar10 + 0x48) = puVar19;
    lVar13 = *(long *)(lVar10 + 0x40);
    for (puVar23 = (undefined8 *)0x0; puVar19 != puVar23;
        puVar23 = (undefined8 *)((long)puVar23 + 1)) {
      *(undefined8 *)(lVar13 + (long)puVar23 * 8) = 0;
    }
    plVar16 = (long *)*plVar12;
    if (plVar16 != (long *)0x0) {
      puVar23 = (undefined8 *)plVar16[1];
      uVar14 = (long)puVar19 - 1;
      uVar25 = 0;
      if (puVar19 != (undefined8 *)0x0) {
        uVar25 = (ulong)puVar23 / (ulong)puVar19;
      }
      puVar18 = puVar23;
      if (puVar19 <= puVar23) {
        puVar18 = (undefined8 *)((long)puVar23 - uVar25 * (long)puVar19);
      }
      if (((ulong)puVar19 & uVar14) == 0) {
        puVar18 = (undefined8 *)((ulong)puVar23 & uVar14);
      }
      *(long **)(lVar13 + (long)puVar18 * 8) = plVar12;
      while (plVar17 = plVar16, plVar16 = (long *)*plVar17, plVar16 != (long *)0x0) {
        puVar23 = (undefined8 *)plVar16[1];
        if (((ulong)puVar19 & uVar14) == 0) {
          puVar23 = (undefined8 *)((ulong)puVar23 & uVar14);
        }
        else if (puVar19 <= puVar23) {
          uVar25 = 0;
          if (puVar19 != (undefined8 *)0x0) {
            uVar25 = (ulong)puVar23 / (ulong)puVar19;
          }
          puVar23 = (undefined8 *)((long)puVar23 - uVar25 * (long)puVar19);
        }
        if (puVar23 != puVar18) {
          if (*(long *)(lVar13 + (long)puVar23 * 8) == 0) {
            *(long **)(lVar13 + (long)puVar23 * 8) = plVar17;
            puVar18 = puVar23;
          }
          else {
            func_0x00010b18abd4();
            lVar13 = extraout_x8_04;
            uVar14 = extraout_x9_01;
            plVar16 = extraout_x10;
            puVar18 = extraout_x11;
          }
        }
      }
    }
  }
  else if (puVar23 < puVar19) {
    puVar18 = (undefined8 *)(long)((float)*(ulong *)(lVar10 + 0x58) / *(float *)(lVar10 + 0x60));
    if ((puVar19 < (undefined8 *)0x3) || (((ulong)puVar19 & (long)puVar19 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b18abb4();
    }
    if (puVar23 <= puVar18) {
      puVar23 = puVar18;
    }
    if (puVar23 < puVar19) {
      if (puVar23 != (undefined8 *)0x0) goto LAB_10b18a638;
      FUN_10b18a084(plVar15,0);
      puVar19 = (undefined8 *)0x0;
      *(undefined8 *)(lVar10 + 0x48) = 0;
    }
    else {
      puVar19 = *(undefined8 **)(lVar10 + 0x48);
    }
  }
  if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
    puVar23 = (undefined8 *)((long)puVar19 - 1U & (ulong)puVar9);
  }
  else {
    puVar23 = puVar9;
    if (puVar19 <= puVar9) {
      uVar25 = 0;
      if (puVar19 != (undefined8 *)0x0) {
        uVar25 = (ulong)puVar9 / (ulong)puVar19;
      }
      puVar23 = (undefined8 *)((long)puVar9 - uVar25 * (long)puVar19);
    }
  }
LAB_10b18a794:
  lVar13 = *plVar15;
  plVar15 = *(long **)(lVar13 + (long)puVar23 * 8);
  if (plVar15 == (long *)0x0) {
    *plVar21 = *plVar12;
    *plVar12 = (long)plVar21;
    *(long **)(lVar13 + (long)puVar23 * 8) = plVar12;
    if (*plVar21 != 0) {
      puVar9 = *(undefined8 **)(*plVar21 + 8);
      if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
        puVar9 = (undefined8 *)((ulong)puVar9 & (long)puVar19 - 1U);
      }
      else if (puVar19 <= puVar9) {
        uVar25 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          uVar25 = (ulong)puVar9 / (ulong)puVar19;
        }
        puVar9 = (undefined8 *)((long)puVar9 - uVar25 * (long)puVar19);
      }
      *(long **)(lVar13 + (long)puVar9 * 8) = plVar21;
    }
  }
  else {
    *plVar21 = *plVar15;
    *plVar15 = (long)plVar21;
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(long *)(lVar10 + 0x58) = *(long *)(lVar10 + 0x58) + 1;
  func_0x00010b18a09c(param_1 + 0xe8);
LAB_10b18a80c:
  func_0x00010b18a0e4(plVar1);
  func_0x00010b189ff8(puVar2,plVar21 + 5);
  if (*(long *)(param_1 + 0x1a8) == 0) {
    func_0x00010b18a108(puVar2);
    (**(code **)(param_1 + 0x58))(puVar2,param_1 + 0x58);
    func_0x00010b18a038(plVar21 + 5,*(undefined8 *)(param_1 + 0x1a8),
                        *(undefined8 *)(param_1 + 0x1b0));
  }
  func_0x000107c2798c(param_1 + 0x100);
  func_0x00010b18ac68(*(undefined8 *)(param_1 + 0x60));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x118);
  FUN_10b129140(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x38) = *puVar2;
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x50) = 1;
  func_0x00010b18a108(puVar2);
  func_0x00010b18ac80(*(undefined8 *)(param_1 + 0x90));
  func_0x00010b189e5c(param_1 + 0xb8);
  func_0x00010b189fd4(param_1 + 0x198);
  func_0x00010b189f84(param_1 + 0x188);
  FUN_10b189f10(param_1 + 0x178);
  func_0x00010b1257f8(param_1 + 0x168);
  func_0x00010b125908(param_1 + 0x158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x130);
  func_0x00010b18acc8();
  puStack_70 = (undefined8 *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10b129190(param_1 + 0x10,&puStack_70);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_80);
    puStack_70 = &uStack_80;
    FUN_10b129038(param_1 + 0x10,&puStack_70);
    __ZNSt13exception_ptrD1Ev(&uStack_80);
  }
  func_0x00010b129274(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10b18aa7c; end: 10b18aabb;  */

void FUN_10b18aa7c(long param_1)

{
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    FUN_10b120e24(param_1 + 0x58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x130);
  }
  func_0x00010b129274(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b18aabc; end: 10b18ad03;  */

void FUN_10b18aabc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b18ad04; end: 10b18b60f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010b18b0c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10b18ad04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *plVar14;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar15;
  long extraout_x9;
  long extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong uVar16;
  ulong extraout_x9_03;
  long *plVar17;
  undefined8 uVar18;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  long *extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  long *plVar19;
  long *plVar20;
  long *extraout_x11;
  long *plVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar7 = (undefined8 *)0x190;
  __Znwm();
  *puVar7 = FUN_10b18d9c4;
  puVar7[1] = FUN_10b18e134;
  puVar24 = puVar7 + 2;
  *puVar24 = &PTR_FUN_110cc1f60;
  puVar8 = (undefined8 *)0xb0;
  __Znwm();
  puVar13 = puVar8 + 3;
  *puVar13 = 0;
  puVar12 = puVar7 + 3;
  *puVar12 = puVar13;
  puVar8[1] = 0;
  plVar23 = puVar7 + 0x2f;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110cc1f80;
  puVar1 = puVar7 + 0xb;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0x3cb0b1bb;
  puVar8[8] = 0;
  puVar8[7] = 0;
  puVar8[10] = 0;
  puVar8[9] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0x32aaaba7;
  puVar8[0xe] = 0;
  puVar8[0xd] = 0;
  puVar8[0x10] = 0;
  puVar8[0xf] = 0;
  puVar8[0x12] = 0;
  puVar8[0x11] = 0;
  puVar8[0x14] = 0;
  puVar8[0x13] = 0;
  puVar8[0x15] = 0;
  puVar7[4] = puVar8;
  puVar7[5] = puVar13;
  puVar7[6] = puVar8;
  do {
    func_0x00010b18e2d0();
  } while (extraout_w11 != 0);
  puVar13 = puVar7 + 7;
  *(undefined1 *)puVar13 = 0;
  puVar7[2] = &PTR_DAT_110cc1f18;
  *(undefined1 *)(puVar7 + 10) = 0;
  puStack_68 = puVar8;
  do {
    func_0x00010b18e2d0();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b18e2d0();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x8;
  param_1[1] = puVar8;
  func_0x00010b0f95bc(&puStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar7 + 0x24,param_3);
  FUN_10b1b9728(puVar1);
  puVar8 = puVar1;
  FUN_10b1270a8();
  if (((ulong)puVar8 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x31) = 0;
    puStack_90 = puVar7;
    puStack_88 = puVar1;
    FUN_10b12713c(&puStack_80,puVar1,&puStack_90);
    if (plStack_78 == (long *)0x0) {
      return;
    }
    do {
      func_0x00010b18e1d4();
    } while (extraout_w11_02 != 0);
    if (extraout_x9_00 != 0) {
      return;
    }
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    return;
  }
  FUN_10b113e08(puVar7 + 0x29,puVar1);
  FUN_10b120e24(puVar1);
  FUN_10b13d714(puVar7 + 0x2b,puVar7 + 0x29,puVar7 + 0x24);
  FUN_10b189e34(puVar7[0x2b]);
  puVar9 = (undefined8 *)0x108;
  __Znwm();
  plVar17 = puVar9 + 1;
  *plVar17 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110cc1fd0;
  puVar27 = puVar9 + 3;
  *puVar27 = &PTR_FUN_110cc2138;
  puVar8 = puVar9;
  func_0x00010b18e324();
  func_0x00010b18e250(extraout_x9 + 0x40);
  puVar7[0x2d] = puVar27;
  puVar7[0x2e] = puVar8;
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = *plVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puStack_80 = puVar27;
    plStack_78 = puVar8;
  } while (cVar2 != '\0');
  do {
    func_0x00010b18e19c();
  } while (extraout_w10 != 0);
  puStack_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  puVar9[5] = puVar27;
  puVar9[6] = puVar9;
  FUN_10b18cb8c(&puStack_70);
  iVar6 = (int)&puStack_80;
  func_0x00010b18cbb0();
  uVar15 = puVar7[0x2b];
  lVar22 = puVar7[0x2c];
  if (lVar22 != 0) {
    plVar10 = (long *)(lVar22 + 8);
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = *plVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar7[0x12] = &PTR_DAT_110cc2060;
  puVar7[0x11] = FUN_10b18ccb8;
  puVar7[0x13] = uVar15;
  puVar7[0x14] = lVar22;
  puVar7[0x17] = 0;
  puVar7[0x18] = 0;
  puVar7[0x15] = puVar27;
  puVar7[0x16] = puVar9;
  puVar7[0x19] = 0;
  puVar7[0x1a] = 0;
  func_0x00010b18e4a8();
  func_0x00010b18e4d8();
  (*extraout_x8_00)();
  if (((bRam00000001137f40c0 & 1) == 0) && (func_0x00010b18e490(), iVar6 != 0)) {
    __Znwm(0x68);
    func_0x00010b18e1f8();
  }
  lVar22 = lRam00000001137f40b8;
  puVar7[0x1e] = lRam00000001137f40b8;
  *(undefined1 *)(puVar7 + 0x1f) = 1;
  __ZNSt3__15mutex4lockEv(lVar22);
  plVar17 = (long *)(lVar22 + 0x40);
  puVar7[0x20] = plVar17;
  puVar7[0x27] = 0;
  puVar7[0x28] = 0;
  plVar10 = (long *)(lVar22 + 0x58);
  func_0x000107c278c4(plVar10,puVar7 + 0x21);
  plVar26 = *(long **)(lVar22 + 0x48);
  plVar29 = plVar23;
  if (plVar26 != (long *)0x0) {
    uVar25 = (long)plVar26 - 1;
    if (((ulong)plVar26 & uVar25) == 0) {
      plVar29 = (long *)(uVar25 & (ulong)plVar10);
      in_ZR = true;
      in_NG = false;
    }
    else {
      in_NG = (long)plVar10 - (long)plVar26 < 0;
      in_ZR = plVar10 == plVar26;
      plVar29 = plVar10;
      if (plVar26 <= plVar10) {
        uVar16 = 0;
        if (plVar26 != (long *)0x0) {
          uVar16 = (ulong)plVar10 / (ulong)plVar26;
        }
        plVar29 = (long *)((long)plVar10 - uVar16 * (long)plVar26);
      }
    }
    plVar28 = *(long **)(*plVar17 + (long)plVar29 * 8);
    if (plVar28 != (long *)0x0) {
      do {
        while( true ) {
          plVar28 = (long *)*plVar28;
          if (plVar28 == (long *)0x0) goto LAB_10b18b080;
          plVar14 = (long *)plVar28[1];
          in_NG = (long)plVar14 - (long)plVar10 < 0;
          in_ZR = plVar14 == plVar10;
          if (!(bool)in_ZR) break;
          plVar14 = plVar28 + 2;
          func_0x000107c278d0(plVar14,puVar7 + 0x21);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10b18b2f4;
        }
        if (((ulong)plVar26 & uVar25) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar25);
        }
        else if (plVar26 <= plVar14) {
          uVar16 = 0;
          if (plVar26 != (long *)0x0) {
            uVar16 = (ulong)plVar14 / (ulong)plVar26;
          }
          plVar14 = (long *)((long)plVar14 - uVar16 * (long)plVar26);
        }
        in_NG = (long)plVar14 - (long)plVar29 < 0;
        in_ZR = plVar14 == plVar29;
      } while ((bool)in_ZR);
    }
  }
LAB_10b18b080:
  plVar28 = (long *)0x38;
  __Znwm();
  plVar14 = (long *)(lVar22 + 0x50);
  puVar7[0x1b] = plVar28;
  puVar7[0x1c] = plVar14;
  puVar7[0x1d] = 0;
  plVar19 = plVar28 + 2;
  *plVar28 = 0;
  plVar28[1] = (long)plVar10;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar19,puVar7 + 0x21);
  plVar28[5] = 0;
  plVar28[6] = 0;
  puVar7[0x27] = 0;
  puVar7[0x28] = 0;
  *(undefined1 *)(puVar7 + 0x1d) = 1;
  func_0x00010b18e4f8(*(undefined8 *)(lVar22 + 0x58));
  if ((plVar26 != (long *)0x0) &&
     (func_0x00010b18e510(param_2,*(undefined4 *)(lVar22 + 0x60),(float)plVar26), !(bool)in_NG))
  goto LAB_10b18b280;
  bVar4 = (long *)0x2 < plVar26;
  bVar5 = plVar26 == (long *)0x3;
  func_0x00010b18e1e4((long)plVar26 << 1);
  plVar29 = extraout_x8_01;
  if (!bVar4 || bVar5) {
    plVar29 = extraout_x9_01;
  }
  if ((long)plVar29 - 1U == 0) {
    plVar29 = (long *)0x2;
  }
  else if (((ulong)plVar29 & (long)plVar29 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar19 = plVar29;
  }
  plVar26 = *(long **)(lVar22 + 0x48);
  if (plVar26 < plVar29) {
LAB_10b18b124:
    plVar26 = plVar29;
    if ((ulong)plVar26 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10b18b4cc);
      (*pcVar3)();
    }
    lVar11 = (long)plVar26 << 3;
    __Znwm(lVar11);
    FUN_10b18cc54(plVar17,lVar11);
    plVar29 = (long *)0x0;
    *(long **)(lVar22 + 0x48) = plVar26;
    lVar11 = *(long *)(lVar22 + 0x40);
    while (plVar26 != plVar29) {
      func_0x00010b18e4ec();
      lVar11 = extraout_x8_02;
      plVar29 = extraout_x9_02;
    }
    plVar29 = (long *)*plVar14;
    if (plVar29 != (long *)0x0) {
      plVar19 = (long *)plVar29[1];
      uVar16 = (long)plVar26 - 1;
      uVar25 = 0;
      if (plVar26 != (long *)0x0) {
        uVar25 = (ulong)plVar19 / (ulong)plVar26;
      }
      plVar20 = plVar19;
      if (plVar26 <= plVar19) {
        plVar20 = (long *)((long)plVar19 - uVar25 * (long)plVar26);
      }
      if (((ulong)plVar26 & uVar16) == 0) {
        plVar20 = (long *)((ulong)plVar19 & uVar16);
      }
      *(long **)(lVar11 + (long)plVar20 * 8) = plVar14;
      while (plVar19 = plVar29, plVar29 = (long *)*plVar19, plVar29 != (long *)0x0) {
        plVar21 = (long *)plVar29[1];
        if (((ulong)plVar26 & uVar16) == 0) {
          plVar21 = (long *)((ulong)plVar21 & uVar16);
        }
        else if (plVar26 <= plVar21) {
          uVar25 = 0;
          if (plVar26 != (long *)0x0) {
            uVar25 = (ulong)plVar21 / (ulong)plVar26;
          }
          plVar21 = (long *)((long)plVar21 - uVar25 * (long)plVar26);
        }
        if (plVar21 != plVar20) {
          if (*(long *)(lVar11 + (long)plVar21 * 8) == 0) {
            *(long **)(lVar11 + (long)plVar21 * 8) = plVar19;
            plVar20 = plVar21;
          }
          else {
            *plVar19 = *plVar29;
            func_0x00010b18e1bc();
            lVar11 = extraout_x8_03;
            uVar16 = extraout_x9_03;
            plVar29 = extraout_x10;
            plVar20 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar29 < plVar26) {
    func_0x00010b18e504(param_2,*(undefined4 *)(lVar22 + 0x60));
    if ((plVar26 < (long *)0x3) || (((ulong)plVar26 & (long)plVar26 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b18e17c();
    }
    if (plVar29 <= plVar19) {
      plVar29 = plVar19;
    }
    if (plVar29 < plVar26) {
      if (plVar29 != (long *)0x0) goto LAB_10b18b124;
      FUN_10b18cc54(plVar17,0);
      plVar26 = (long *)0x0;
      *(undefined8 *)(lVar22 + 0x48) = 0;
    }
    else {
      plVar26 = *(long **)(lVar22 + 0x48);
    }
  }
  if (((ulong)plVar26 & (long)plVar26 - 1U) == 0) {
    in_ZR = 1;
    plVar29 = (long *)((long)plVar26 - 1U & (ulong)plVar10);
  }
  else {
    in_ZR = plVar10 == plVar26;
    plVar29 = plVar10;
    if (plVar26 <= plVar10) {
      uVar25 = 0;
      if (plVar26 != (long *)0x0) {
        uVar25 = (ulong)plVar10 / (ulong)plVar26;
      }
      plVar29 = (long *)((long)plVar10 - uVar25 * (long)plVar26);
    }
  }
LAB_10b18b280:
  lVar11 = *plVar17;
  plVar17 = *(long **)(lVar11 + (long)plVar29 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar28 = *plVar14;
    *plVar14 = (long)plVar28;
    *(long **)(lVar11 + (long)plVar29 * 8) = plVar14;
    if (*plVar28 != 0) {
      plVar17 = *(long **)(*plVar28 + 8);
      if (((ulong)plVar26 & (long)plVar26 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar26 - 1U);
        in_ZR = true;
      }
      else {
        in_ZR = plVar17 == plVar26;
        if (plVar26 <= plVar17) {
          uVar25 = 0;
          if (plVar26 != (long *)0x0) {
            uVar25 = (ulong)plVar17 / (ulong)plVar26;
          }
          plVar17 = (long *)((long)plVar17 - uVar25 * (long)plVar26);
        }
      }
      *(long **)(lVar11 + (long)plVar17 * 8) = plVar28;
    }
  }
  else {
    *plVar28 = *plVar17;
    *plVar17 = (long)plVar28;
  }
  puVar7[0x1b] = 0;
  *(long *)(lVar22 + 0x58) = *(long *)(lVar22 + 0x58) + 1;
  func_0x00010b18e37c();
LAB_10b18b2f4:
  func_0x00010b18e374();
  func_0x00010b18cbd4(plVar23,plVar28 + 5);
  if (*plVar23 == 0) {
    func_0x00010b18cb3c(plVar23);
    (*(code *)*puVar1)(plVar23,puVar1);
    func_0x00010b18cc10(plVar28 + 5,puVar7[0x2f],puVar7[0x30]);
  }
  func_0x00010b18e410();
  func_0x00010b18e23c(puVar7[0xc]);
  func_0x00010b18e3bc();
  FUN_10b18ce98(puVar13);
  func_0x00010b18e294();
  func_0x00010b18e4c0(puVar7[0x12]);
  func_0x00010b18e3ec();
  func_0x00010b18e3e4();
  func_0x00010b18e3dc();
  func_0x00010b18e39c();
  func_0x00010b18e35c();
  func_0x00010b18e438();
  if ((bool)in_ZR) {
    __ZNSt3__112__get_sp_mutEPKv(puVar12);
    __ZNSt3__18__sp_mut4lockEv();
    puVar1 = (undefined8 *)puVar7[3];
    lVar22 = puVar7[4];
    puVar7[3] = 0;
    puVar7[4] = 0;
    __ZNSt3__18__sp_mut6unlockEv(puVar12);
    puStack_70 = puVar1;
    puStack_68 = (undefined8 *)lVar22;
    __ZNSt3__15mutex4lockEv(puVar1 + 9);
    uVar15 = puVar7[7];
    if (*(char *)(puVar1 + 2) == '\x01') {
      uVar18 = puVar7[8];
      *puVar13 = 0;
      puVar7[8] = 0;
      lVar22 = puVar1[1];
      *puVar1 = uVar15;
      puVar1[1] = uVar18;
      puVar7 = puStack_70;
      if (lVar22 != 0) {
        do {
          func_0x00010b18e1d4();
        } while (extraout_w11_03 != 0);
        puVar7 = puStack_70;
        if (extraout_x9_04 == 0) {
          func_0x00010b18e16c();
          func_0x00010b18e2bc();
          puVar7 = puStack_70;
        }
      }
    }
    else {
      *puVar1 = uVar15;
      puVar1[1] = puVar7[8];
      *puVar13 = 0;
      puVar7[8] = 0;
      *(undefined1 *)(puVar1 + 2) = 1;
      puVar7 = puVar1;
    }
    plVar23 = (long *)puVar7[0x12];
    puVar7[0x12] = 0;
    __ZNSt3__15mutex6unlockEv(puVar1 + 9);
    if (plVar23 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(puVar7 + 3);
    }
    else {
      (**(code **)(*plVar23 + 0x10))(plVar23,&puStack_70);
      func_0x00010b18e1ac();
    }
    if (puStack_68 != (undefined8 *)0x0) {
      do {
        func_0x00010b18e1d4();
      } while (extraout_w11_04 != 0);
      if (extraout_x9_05 == 0) {
        func_0x00010b18e16c();
        func_0x00010b18e2bc();
      }
    }
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&puStack_70,puVar13);
    FUN_10b18c770(puVar24,&puStack_70);
    __ZNSt13exception_ptrD1Ev(&puStack_70);
  }
  FUN_10b18c850(puVar24);
  func_0x00010b18e394();
  return;
}



/* Entry: 10b18b610; end: 10b18b637;  */

undefined8 FUN_10b18b610(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b18cbb0(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b18b638; end: 10b18b687;  */

void FUN_10b18b638(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,&UNK_10f730e92);
  FUN_10b18ad04(param_1,auStack_38);
  func_0x00010b18e364();
  return;
}



/* Entry: 10b18b688; end: 10b18b6b3;  */

void FUN_10b18b688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10b18cebc(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10b18b6b4; end: 10b18b77f;  */

undefined8 * FUN_10b18b6b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [16];
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110cc1db8;
  param_1[1] = &PTR_DAT_110cc1e10;
  param_1[2] = &PTR_DAT_110cc1e48;
  FUN_10b18bf20(auStack_38,param_1 + 0xc);
  if (plStack_28[3] != 0) {
    FUN_10b18c8ac(plStack_28[2]);
    plStack_28[2] = 0;
    lVar2 = plStack_28[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*plStack_28 + lVar1 * 8) = 0;
    }
    plStack_28[3] = 0;
  }
  func_0x000107c2798c(auStack_38);
  FUN_10b18c8ac(param_1[0x16]);
  lVar1 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  func_0x000106e50c54(param_1 + 9);
  func_0x00010b18cbb0(param_1 + 7);
  func_0x00010b1257f8(param_1 + 5);
  func_0x00010b18cb18(param_1 + 3);
  return param_1;
}



/* Entry: 10b18b780; end: 10b18b793;  */

undefined8 * FUN_10b18b780(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [16];
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110cc1db8;
  param_1[1] = &PTR_DAT_110cc1e10;
  param_1[2] = &PTR_DAT_110cc1e48;
  FUN_10b18bf20(auStack_38,param_1 + 0xc);
  if (plStack_28[3] != 0) {
    FUN_10b18c8ac(plStack_28[2]);
    plStack_28[2] = 0;
    lVar2 = plStack_28[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*plStack_28 + lVar1 * 8) = 0;
    }
    plStack_28[3] = 0;
  }
  func_0x000107c2798c(auStack_38);
  FUN_10b18c8ac(param_1[0x16]);
  lVar1 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  func_0x000106e50c54(param_1 + 9);
  func_0x00010b18cbb0(param_1 + 7);
  func_0x00010b1257f8(param_1 + 5);
  func_0x00010b18cb18(param_1 + 3);
  return param_1;
}



/* Entry: 10b18b794; end: 10b18b7a7;  */

void FUN_10b18b794(void)

{
  FUN_10b18b6b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18b7a8; end: 10b18b7b7;  */

void FUN_10b18b7a8(long param_1)

{
  FUN_10b18b6b4(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18b7b8; end: 10b18bf1f;  */

void FUN_10b18b7b8(undefined8 *param_1,long param_2,undefined **param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined1 in_NG;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 *puVar13;
  long **pplVar14;
  undefined8 *puVar15;
  undefined8 extraout_x8;
  undefined **ppuVar16;
  undefined **extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *extraout_x8_03;
  long lVar17;
  undefined8 *puVar18;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  code *extraout_x9_01;
  undefined **ppuVar19;
  undefined8 *puVar20;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  long *plVar21;
  long *extraout_x10;
  int extraout_w11;
  undefined **extraout_x11;
  ulong uVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  code *pcVar25;
  long lVar26;
  undefined **ppuVar27;
  long *plVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined8 uVar31;
  undefined **ppuStack_140;
  undefined *puStack_138;
  long *aplStack_130 [4];
  undefined8 uStack_110;
  long lStack_108;
  long **pplStack_100;
  undefined1 auStack_f8 [24];
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_70;
  
  lVar17 = param_2;
  func_0x00010b18e428();
  plVar28 = (long *)(lVar17 + 0x58);
  do {
    puVar23 = (undefined *)*plVar28;
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar8) {
      *plVar28 = (long)(puVar23 + 1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  ppuVar19 = *(undefined ***)(param_2 + 0x18);
  puVar1 = *(undefined **)(param_2 + 0x20);
  ppuStack_140 = ppuVar19;
  puStack_138 = puVar1;
  uStack_70 = extraout_x8;
  if (puVar1 != (undefined *)0x0) {
    do {
      func_0x00010b18e19c();
    } while (extraout_w10 != 0);
  }
  ppuVar10 = (undefined **)0x40;
  __Znwm();
  ppuVar10[1] = (undefined *)0x0;
  ppuVar10[2] = (undefined *)0x0;
  *ppuVar10 = (undefined *)&PTR_FUN_110cc2088;
  ppuVar30 = ppuVar10 + 3;
  *ppuVar30 = (undefined *)&PTR_DAT_110cc20d8;
  ppuVar10[4] = (undefined *)ppuVar19;
  ppuStack_140 = (undefined **)0x0;
  puStack_138 = (undefined *)0x0;
  ppuVar10[5] = puVar1;
  ppuStack_d0 = ppuVar19;
  ppuStack_c8 = (undefined **)puVar1;
  if (puVar1 != (undefined *)0x0) {
    do {
      func_0x00010b18e19c();
    } while (extraout_w10_00 != 0);
  }
  ppuVar10[6] = puVar23;
  *(undefined1 *)(ppuVar10 + 7) = 0;
  func_0x00010b18cb18(&ppuStack_d0);
  ppuStack_e0 = ppuVar30;
  ppuStack_d8 = ppuVar10;
  func_0x00010b18e470();
  FUN_10b18bf20(&ppuStack_140,param_2 + 0x60);
  func_0x00010b206f0c(auStack_f8,param_3);
  ppuVar19 = (undefined **)(aplStack_130[0] + 3);
  func_0x000107c278c4(ppuVar19,auStack_f8);
  ppuVar24 = (undefined **)aplStack_130[0][1];
  ppuVar29 = param_3;
  if (ppuVar24 != (undefined **)0x0) {
    pcVar25 = (code *)((long)ppuVar24 - 1);
    if (((ulong)ppuVar24 & (ulong)pcVar25) == 0) {
      ppuVar29 = (undefined **)((ulong)pcVar25 & (ulong)ppuVar19);
      in_NG = false;
    }
    else {
      in_NG = (long)ppuVar19 - (long)ppuVar24 < 0;
      ppuVar29 = ppuVar19;
      if (ppuVar24 <= ppuVar19) {
        uVar5 = 0;
        if (ppuVar24 != (undefined **)0x0) {
          uVar5 = (ulong)ppuVar19 / (ulong)ppuVar24;
        }
        ppuVar29 = (undefined **)((long)ppuVar19 - uVar5 * (long)ppuVar24);
      }
    }
    ppuVar27 = *(undefined ***)(*aplStack_130[0] + (long)ppuVar29 * 8);
    if (ppuVar27 != (undefined **)0x0) {
      do {
        while( true ) {
          ppuVar27 = (undefined **)*ppuVar27;
          if (ppuVar27 == (undefined **)0x0) goto LAB_10b18b940;
          ppuVar16 = (undefined **)ppuVar27[1];
          in_NG = (long)ppuVar16 - (long)ppuVar19 < 0;
          if (ppuVar16 != ppuVar19) break;
          ppuVar16 = ppuVar27 + 2;
          func_0x000107c278d0(ppuVar16,auStack_f8);
          ppuVar11 = ppuVar30;
          ppuVar6 = ppuVar10;
          if (((ulong)ppuVar16 & 1) != 0) goto LAB_10b18bbc0;
        }
        if (((ulong)ppuVar24 & (ulong)pcVar25) == 0) {
          ppuVar16 = (undefined **)((ulong)ppuVar16 & (ulong)pcVar25);
        }
        else if (ppuVar24 <= ppuVar16) {
          uVar5 = 0;
          if (ppuVar24 != (undefined **)0x0) {
            uVar5 = (ulong)ppuVar16 / (ulong)ppuVar24;
          }
          ppuVar16 = (undefined **)((long)ppuVar16 - uVar5 * (long)ppuVar24);
        }
        in_NG = (long)ppuVar16 - (long)ppuVar29 < 0;
      } while (ppuVar16 == ppuVar29);
    }
  }
LAB_10b18b940:
  ppuVar27 = (undefined **)0x40;
  __Znwm();
  ppuVar16 = (undefined **)(aplStack_130[0] + 2);
  puStack_c0 = (undefined8 *)0x0;
  ppuVar11 = ppuVar27 + 2;
  *ppuVar27 = (undefined *)0x0;
  ppuVar27[1] = (undefined *)ppuVar19;
  ppuStack_d0 = ppuVar27;
  ppuStack_c8 = ppuVar16;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(ppuVar11,auStack_f8);
  ppuVar27[5] = (undefined *)0x0;
  ppuVar27[6] = (undefined *)0x0;
  ppuVar27[7] = (undefined *)0x0;
  puStack_c0 = (undefined8 *)CONCAT71(puStack_c0._1_7_,1);
  func_0x00010b18e4f8(aplStack_130[0][3]);
  if ((ppuVar24 == (undefined **)0x0) || (func_0x00010b18e510(), (bool)in_NG)) {
    bVar7 = (undefined **)0x2 < ppuVar24;
    bVar8 = ppuVar24 == (undefined **)0x3;
    func_0x00010b18e1e4((long)ppuVar24 << 1);
    ppuVar29 = extraout_x8_00;
    if (!bVar7 || bVar8) {
      ppuVar29 = extraout_x9;
    }
    if ((code *)((long)ppuVar29 - 1U) == (code *)0x0) {
      ppuVar29 = (undefined **)0x2;
    }
    else if (((ulong)ppuVar29 & (long)ppuVar29 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      ppuVar11 = ppuVar29;
    }
    ppuVar24 = (undefined **)aplStack_130[0][1];
    if (ppuVar24 < ppuVar29) {
LAB_10b18b9e4:
      ppuVar24 = ppuVar29;
      if ((ulong)ppuVar24 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10b18be80;
      }
      lVar17 = (long)ppuVar24 << 3;
      __Znwm(lVar17);
      FUN_10b18d190(aplStack_130[0],lVar17);
      ppuVar29 = (undefined **)0x0;
      aplStack_130[0][1] = (long)ppuVar24;
      lVar17 = *aplStack_130[0];
      while (ppuVar24 != ppuVar29) {
        func_0x00010b18e4ec();
        lVar17 = extraout_x8_01;
        ppuVar29 = extraout_x9_00;
      }
      plVar28 = (long *)*ppuVar16;
      if (plVar28 != (long *)0x0) {
        ppuVar29 = (undefined **)plVar28[1];
        pcVar25 = (code *)((long)ppuVar24 - 1);
        uVar5 = 0;
        if (ppuVar24 != (undefined **)0x0) {
          uVar5 = (ulong)ppuVar29 / (ulong)ppuVar24;
        }
        ppuVar11 = ppuVar29;
        if (ppuVar24 <= ppuVar29) {
          ppuVar11 = (undefined **)((long)ppuVar29 - uVar5 * (long)ppuVar24);
        }
        if (((ulong)ppuVar24 & (ulong)pcVar25) == 0) {
          ppuVar11 = (undefined **)((ulong)ppuVar29 & (ulong)pcVar25);
        }
        *(undefined ***)(lVar17 + (long)ppuVar11 * 8) = ppuVar16;
        while (plVar21 = plVar28, plVar28 = (long *)*plVar21, plVar28 != (long *)0x0) {
          ppuVar29 = (undefined **)plVar28[1];
          if (((ulong)ppuVar24 & (ulong)pcVar25) == 0) {
            ppuVar29 = (undefined **)((ulong)ppuVar29 & (ulong)pcVar25);
          }
          else if (ppuVar24 <= ppuVar29) {
            uVar5 = 0;
            if (ppuVar24 != (undefined **)0x0) {
              uVar5 = (ulong)ppuVar29 / (ulong)ppuVar24;
            }
            ppuVar29 = (undefined **)((long)ppuVar29 - uVar5 * (long)ppuVar24);
          }
          if (ppuVar29 != ppuVar11) {
            if (*(long *)(lVar17 + (long)ppuVar29 * 8) == 0) {
              *(long **)(lVar17 + (long)ppuVar29 * 8) = plVar21;
              ppuVar11 = ppuVar29;
            }
            else {
              *plVar21 = *plVar28;
              func_0x00010b18e1bc();
              lVar17 = extraout_x8_02;
              pcVar25 = extraout_x9_01;
              plVar28 = extraout_x10;
              ppuVar11 = extraout_x11;
            }
          }
        }
      }
    }
    else if (ppuVar29 < ppuVar24) {
      func_0x00010b18e504((float)(ulong)aplStack_130[0][3],(int)aplStack_130[0][4]);
      if ((ppuVar24 < (undefined **)0x3) || (((ulong)ppuVar24 & (ulong)((long)ppuVar24 - 1U)) != 0))
      {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010b18e17c();
      }
      if (ppuVar29 <= ppuVar11) {
        ppuVar29 = ppuVar11;
      }
      if (ppuVar29 < ppuVar24) {
        if (ppuVar29 != (undefined **)0x0) goto LAB_10b18b9e4;
        FUN_10b18d190(aplStack_130[0],0);
        ppuVar24 = (undefined **)0x0;
        aplStack_130[0][1] = 0;
      }
      else {
        ppuVar24 = (undefined **)aplStack_130[0][1];
      }
    }
    if (((ulong)ppuVar24 & (long)ppuVar24 - 1U) == 0) {
      ppuVar29 = (undefined **)((ulong)((long)ppuVar24 - 1U) & (ulong)ppuVar19);
    }
    else {
      ppuVar29 = ppuVar19;
      if (ppuVar24 <= ppuVar19) {
        uVar5 = 0;
        if (ppuVar24 != (undefined **)0x0) {
          uVar5 = (ulong)ppuVar19 / (ulong)ppuVar24;
        }
        ppuVar29 = (undefined **)((long)ppuVar19 - uVar5 * (long)ppuVar24);
      }
    }
  }
  lVar17 = *aplStack_130[0];
  plVar28 = *(long **)(lVar17 + (long)ppuVar29 * 8);
  if (plVar28 == (long *)0x0) {
    *ppuVar27 = *ppuVar16;
    *ppuVar16 = (undefined *)ppuVar27;
    *(undefined ***)(lVar17 + (long)ppuVar29 * 8) = ppuVar16;
    if (*ppuVar27 != (undefined *)0x0) {
      ppuVar19 = *(undefined ***)(*ppuVar27 + 8);
      if (((ulong)ppuVar24 & (long)ppuVar24 - 1U) == 0) {
        ppuVar19 = (undefined **)((ulong)ppuVar19 & (ulong)((long)ppuVar24 - 1U));
      }
      else if (ppuVar24 <= ppuVar19) {
        uVar5 = 0;
        if (ppuVar24 != (undefined **)0x0) {
          uVar5 = (ulong)ppuVar19 / (ulong)ppuVar24;
        }
        ppuVar19 = (undefined **)((long)ppuVar19 - uVar5 * (long)ppuVar24);
      }
      *(undefined ***)(lVar17 + (long)ppuVar19 * 8) = ppuVar27;
    }
  }
  else {
    *ppuVar27 = (undefined *)*plVar28;
    *plVar28 = (long)ppuVar27;
  }
  ppuStack_d0 = (undefined **)0x0;
  aplStack_130[0][3] = aplStack_130[0][3] + 1;
  func_0x00010b18d1a8(&ppuStack_d0);
  ppuVar11 = ppuVar30;
  ppuVar6 = ppuVar10;
LAB_10b18bbc0:
  do {
    ppuStack_c8 = ppuVar6;
    ppuStack_d0 = ppuVar11;
    func_0x00010b18e19c();
    ppuVar11 = ppuStack_d0;
    ppuVar6 = ppuStack_c8;
  } while (extraout_w10_01 != 0);
  uVar31 = *param_4;
  lVar17 = param_4[1];
  puVar15 = (undefined8 *)ppuVar27[6];
  puVar20 = (undefined8 *)ppuVar27[7];
  uVar9 = puVar15 == puVar20;
  if (puVar15 < puVar20) {
    *puVar15 = uVar31;
    puVar15[1] = lVar17;
    ppuVar19 = ppuVar10;
    if (lVar17 != 0) {
      do {
        func_0x00010b18e2d0();
        puVar15 = extraout_x8_03;
        ppuVar19 = ppuStack_c8;
      } while (extraout_w11 != 0);
    }
    puVar15[2] = ppuVar30;
    puVar15[3] = ppuVar19;
    ppuStack_d0 = (undefined **)0x0;
    ppuStack_c8 = (undefined **)0x0;
    puVar20 = puVar15 + 5;
    puVar15[4] = puVar23;
LAB_10b18bd38:
    ppuVar27[6] = (undefined *)puVar20;
    func_0x00010b18d1ec(&ppuStack_d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
    func_0x000107c2798c(&ppuStack_140);
    plVar28 = *(long **)(param_2 + 0x48);
    puStack_138 = *(undefined **)(param_2 + 0x20);
    ppuStack_140 = *(undefined ***)(param_2 + 0x18);
    if (*(long *)(param_2 + 0x20) != 0) {
      do {
        func_0x00010b18e19c();
      } while (extraout_w10_03 != 0);
    }
    pplVar14 = aplStack_130;
    func_0x00010b121ddc(pplVar14,param_3);
    lStack_108 = param_4[1];
    uStack_110 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x00010b18e19c();
      } while (extraout_w10_04 != 0);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    ppuStack_d0 = (undefined **)FUN_10b18d210;
    ppuStack_c8 = &PTR_FUN_110cc20f8;
    puVar15 = (undefined8 *)0x48;
    pplStack_100 = pplVar14;
    __Znwm();
    puVar15[1] = puStack_138;
    *puVar15 = ppuStack_140;
    ppuStack_140 = (undefined **)0x0;
    puStack_138 = (undefined *)0x0;
    func_0x00010b121ddc(puVar15 + 2,aplStack_130);
    puVar15[7] = lStack_108;
    puVar15[6] = uStack_110;
    if (lStack_108 != 0) {
      do {
        func_0x00010b18e19c();
      } while (extraout_w10_05 != 0);
    }
    puVar15[8] = pplStack_100;
    puStack_c0 = puVar15;
    (**(code **)(*plVar28 + 0x10))(plVar28,&ppuStack_d0);
    func_0x00010b18e384();
    func_0x00010b18bf40(&ppuStack_140);
    *param_1 = ppuVar30;
    param_1[1] = ppuVar10;
    ppuStack_e0 = (undefined **)0x0;
    ppuStack_d8 = (undefined **)0x0;
    FUN_10b18d16c(&ppuStack_e0);
    func_0x00010b18e2e0(uStack_70);
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar26 = (long)puVar15 - (long)ppuVar27[5];
    uVar5 = lVar26 / 0x28 + 1;
    if (uVar5 < 0x666666666666667) {
      uVar3 = ((long)puVar20 - (long)ppuVar27[5]) / 0x28;
      uVar22 = uVar3 * 2;
      if (uVar22 < uVar5 || uVar22 - uVar5 == 0) {
        uVar22 = uVar5;
      }
      if (0x333333333333332 < uVar3) {
        uVar22 = 0x666666666666666;
      }
      if (uVar22 == 0) {
        lVar12 = 0;
      }
      else {
        if (0x666666666666666 < uVar22) {
          func_0x000104bd35f4();
          goto LAB_10b18be80;
        }
        lVar12 = uVar22 * 0x28;
        __Znwm();
      }
      puVar15 = (undefined8 *)(lVar12 + lVar26);
      *puVar15 = uVar31;
      puVar15[1] = lVar17;
      ppuVar19 = ppuVar10;
      if (lVar17 != 0) {
        do {
          func_0x00010b18e19c();
          ppuVar19 = ppuStack_c8;
        } while (extraout_w10_02 != 0);
      }
      puVar15[2] = ppuVar30;
      puVar15[3] = ppuVar19;
      ppuStack_d0 = (undefined **)0x0;
      ppuStack_c8 = (undefined **)0x0;
      puVar15[4] = puVar23;
      puVar13 = (undefined8 *)ppuVar27[5];
      puVar2 = (undefined8 *)ppuVar27[6];
      lVar17 = (long)puVar2 - (long)puVar13;
      puVar18 = puVar15 + (lVar17 / -0x28) * 5;
      for (puVar20 = puVar13; puVar20 != puVar2; puVar20 = puVar20 + 5) {
        uVar31 = *puVar20;
        puVar18[1] = puVar20[1];
        *puVar18 = uVar31;
        *puVar20 = 0;
        puVar20[1] = 0;
        uVar31 = puVar20[2];
        puVar18[3] = puVar20[3];
        puVar18[2] = uVar31;
        puVar20[2] = 0;
        puVar20[3] = 0;
        puVar18[4] = puVar20[4];
        puVar18 = puVar18 + 5;
      }
      for (; uVar9 = puVar13 == puVar2, !(bool)uVar9; puVar13 = puVar13 + 5) {
        func_0x00010b18c954();
      }
      puVar20 = puVar15 + 5;
      puVar23 = ppuVar27[5];
      ppuVar27[5] = (undefined *)(puVar15 + (lVar17 / -0x28) * 5);
      ppuVar27[6] = (undefined *)puVar20;
      ppuVar27[7] = (undefined *)(lVar12 + uVar22 * 0x28);
      if (puVar23 != (undefined *)0x0) {
        __ZdlPv();
      }
      goto LAB_10b18bd38;
    }
  }
  FUN_10b18c97c();
LAB_10b18be80:
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x10b18be84);
  (*pcVar25)();
}



/* Entry: 10b18bf20; end: 10b18bfbb;  */

void FUN_10b18bf20(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b18bfbc; end: 10b18bfe3;  */

void FUN_10b18bfbc(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b18e19c(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b18bfe4; end: 10b18c11b;  */

void FUN_10b18bfe4(undefined1 *param_1,long param_2)

{
  double *pdVar1;
  long *plVar2;
  double dVar3;
  double dVar4;
  undefined4 uStack_a4;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  double dStack_78;
  double dStack_70;
  undefined1 auStack_60 [16];
  long *plStack_50;
  byte bStack_38;
  
  FUN_10b189508(auStack_60,*(undefined8 *)(param_2 + 0x28));
  if ((bStack_38 & 1) == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  else {
    uStack_98 = 0;
    dStack_a0 = 0.0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    dStack_70 = 0.0;
    dStack_78 = 0.0;
    for (plVar2 = plStack_50; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      dStack_78 = dStack_78 + (double)plVar2[3];
      dStack_70 = dStack_70 + (double)plVar2[5];
    }
    if ((dStack_78 == 0.0) || (plVar2 = plStack_50, dStack_70 == 0.0)) {
      *param_1 = 0;
      param_1[0x38] = 0;
    }
    else {
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uStack_a4 = *(undefined4 *)(plVar2 + 2);
        pdVar1 = &dStack_a0;
        FUN_10b18c11c(pdVar1,&uStack_a4);
        dVar3 = (double)plVar2[3];
        dVar4 = dVar3 / dStack_78;
        pdVar1[1] = (double)plVar2[5] / dStack_70;
        *pdVar1 = dVar4;
        dVar4 = 0.0;
        if (0.0 < (double)plVar2[4]) {
          dVar4 = (double)NEON_fminnm(dVar3 / (double)plVar2[4],0x3ff0000000000000);
        }
        pdVar1[2] = dVar4;
      }
      func_0x00010b18c990(param_1,&dStack_a0);
    }
    func_0x00010b125198(&dStack_a0);
  }
  func_0x00010b18c9ac(auStack_60);
  return;
}



/* Entry: 10b18c11c; end: 10b18c14f;  */

long FUN_10b18c11c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b18d34c(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 10b18c150; end: 10b18c157;  */

void FUN_10b18c150(undefined1 *param_1,long param_2)

{
  double *pdVar1;
  long *plVar2;
  double dVar3;
  double dVar4;
  undefined4 uStack_a4;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  double dStack_78;
  double dStack_70;
  undefined1 auStack_60 [16];
  long *plStack_50;
  byte bStack_38;
  
  FUN_10b189508(auStack_60,*(undefined8 *)(param_2 + 0x18));
  if ((bStack_38 & 1) == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  else {
    uStack_98 = 0;
    dStack_a0 = 0.0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    dStack_70 = 0.0;
    dStack_78 = 0.0;
    for (plVar2 = plStack_50; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      dStack_78 = dStack_78 + (double)plVar2[3];
      dStack_70 = dStack_70 + (double)plVar2[5];
    }
    if ((dStack_78 == 0.0) || (plVar2 = plStack_50, dStack_70 == 0.0)) {
      *param_1 = 0;
      param_1[0x38] = 0;
    }
    else {
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uStack_a4 = *(undefined4 *)(plVar2 + 2);
        pdVar1 = &dStack_a0;
        FUN_10b18c11c(pdVar1,&uStack_a4);
        dVar3 = (double)plVar2[3];
        dVar4 = dVar3 / dStack_78;
        pdVar1[1] = (double)plVar2[5] / dStack_70;
        *pdVar1 = dVar4;
        dVar4 = 0.0;
        if (0.0 < (double)plVar2[4]) {
          dVar4 = (double)NEON_fminnm(dVar3 / (double)plVar2[4],0x3ff0000000000000);
        }
        pdVar1[2] = dVar4;
      }
      func_0x00010b18c990(param_1,&dStack_a0);
    }
    func_0x00010b125198(&dStack_a0);
  }
  func_0x00010b18c9ac(auStack_60);
  return;
}



/* Entry: 10b18c158; end: 10b18c3f3;  */

undefined1 * FUN_10b18c158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 *puVar6;
  int extraout_w10;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [32];
  undefined8 *puStack_320;
  undefined1 auStack_318 [560];
  undefined1 auStack_e8 [16];
  long lStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_70;
  
  func_0x00010b18e428();
  uStack_70 = extraout_x8;
  FUN_10b18bf20(auStack_e8,param_1 + 0x60);
  lVar1 = lStack_d8;
  func_0x00010b206f0c(&uStack_350,param_2);
  FUN_10b18d778(lVar1,&uStack_350);
  puVar2 = &uStack_350;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (lVar1 == 0) goto LAB_10b18c348;
  puVar9 = (undefined8 *)(lVar1 + 0x28);
  puVar3 = *(undefined8 **)(lVar1 + 0x30);
  puVar6 = (undefined8 *)*puVar9;
  for (puVar8 = puVar6; puVar8 != puVar3; puVar8 = puVar8 + 5) {
    puVar10 = puVar8;
    if ((puVar8[3] == 0) || (*(long *)(puVar8[3] + 8) == -1)) goto LAB_10b18c1f8;
  }
  goto LAB_10b18c264;
LAB_10b18c1f8:
  while (puVar2 = puVar10 + 5, puVar2 != puVar3) {
    plVar7 = puVar10 + 8;
    puVar10 = puVar2;
    if ((*plVar7 != 0) && (*(long *)(*plVar7 + 8) != -1)) {
      FUN_10b18cab0(puVar8,puVar2);
      puVar8 = puVar8 + 5;
    }
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x30);
  if (puVar8 == puVar2) {
    puVar6 = *(undefined8 **)(lVar1 + 0x28);
    puVar3 = puVar8;
  }
  else {
    FUN_10b18ca5c(puVar2,puVar2,puVar8);
    func_0x00010b18c91c(puVar9,puVar2);
    puVar6 = *(undefined8 **)(lVar1 + 0x28);
    puVar2 = puVar9;
    puVar3 = *(undefined8 **)(lVar1 + 0x30);
  }
LAB_10b18c264:
  in_ZR = puVar6 == puVar3;
  if ((bool)in_ZR) {
    FUN_10b18d84c(lStack_d8,lVar1);
  }
  else {
    __ZNSt3__16chrono12system_clock3nowEv();
    puVar6 = *(undefined8 **)(lVar1 + 0x30);
    for (puVar8 = *(undefined8 **)(lVar1 + 0x28); in_ZR = puVar8 == puVar6, !(bool)in_ZR;
        puVar8 = puVar8 + 5) {
      plVar7 = *(long **)(param_1 + 0x48);
      uStack_348 = puVar8[1];
      uStack_350 = *puVar8;
      if (puVar8[1] != 0) {
        do {
          func_0x00010b18e19c();
        } while (extraout_w10 != 0);
      }
      func_0x00010b121ddc(auStack_340,param_2);
      puStack_320 = puVar2;
      FUN_10b12402c(auStack_318,param_3);
      pcStack_d0 = FUN_10b18d980;
      ppuStack_c8 = &PTR_FUN_110cc2110;
      puVar3 = (undefined8 *)0x260;
      __Znwm();
      puVar3[1] = uStack_348;
      *puVar3 = uStack_350;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x00010b121ddc(puVar3 + 2,auStack_340);
      puVar3[6] = puStack_320;
      FUN_10b12402c(puVar3 + 7,auStack_318);
      puStack_c0 = puVar3;
      (**(code **)(*plVar7 + 0x10))(plVar7,&pcStack_d0);
      func_0x00010b18e348();
      FUN_10b18c3f4(&uStack_350);
    }
  }
LAB_10b18c348:
  puVar4 = auStack_e8;
  func_0x000107c2798c();
  func_0x00010b18e2e0(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar5 = auStack_e8;
    func_0x000107c2798c();
    func_0x00010b18e248();
    func_0x0001052b5d04(puVar5 + 0x38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5 + 0x10);
    func_0x00010b0f9c1c();
    if (puVar5 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10b18c3f4; end: 10b18c423;  */

undefined8 FUN_10b18c3f4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001052b5d04(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x00010b0f9c1c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b18c424; end: 10b18c42b;  */

undefined1 * FUN_10b18c424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 *puVar6;
  int extraout_w10;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [32];
  undefined8 *puStack_320;
  undefined1 auStack_318 [560];
  undefined1 auStack_e8 [16];
  long lStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_70;
  
  func_0x00010b18e428();
  uStack_70 = extraout_x8;
  FUN_10b18bf20(auStack_e8,param_1 + 0x58);
  lVar1 = lStack_d8;
  func_0x00010b206f0c(&uStack_350,param_2);
  FUN_10b18d778(lVar1,&uStack_350);
  puVar2 = &uStack_350;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (lVar1 == 0) goto LAB_10b18c348;
  puVar9 = (undefined8 *)(lVar1 + 0x28);
  puVar3 = *(undefined8 **)(lVar1 + 0x30);
  puVar6 = (undefined8 *)*puVar9;
  for (puVar8 = puVar6; puVar8 != puVar3; puVar8 = puVar8 + 5) {
    puVar10 = puVar8;
    if ((puVar8[3] == 0) || (*(long *)(puVar8[3] + 8) == -1)) goto LAB_10b18c1f8;
  }
  goto LAB_10b18c264;
LAB_10b18c1f8:
  while (puVar2 = puVar10 + 5, puVar2 != puVar3) {
    plVar7 = puVar10 + 8;
    puVar10 = puVar2;
    if ((*plVar7 != 0) && (*(long *)(*plVar7 + 8) != -1)) {
      FUN_10b18cab0(puVar8,puVar2);
      puVar8 = puVar8 + 5;
    }
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x30);
  if (puVar8 == puVar2) {
    puVar6 = *(undefined8 **)(lVar1 + 0x28);
    puVar3 = puVar8;
  }
  else {
    FUN_10b18ca5c(puVar2,puVar2,puVar8);
    func_0x00010b18c91c(puVar9,puVar2);
    puVar6 = *(undefined8 **)(lVar1 + 0x28);
    puVar2 = puVar9;
    puVar3 = *(undefined8 **)(lVar1 + 0x30);
  }
LAB_10b18c264:
  in_ZR = puVar6 == puVar3;
  if ((bool)in_ZR) {
    FUN_10b18d84c(lStack_d8,lVar1);
  }
  else {
    __ZNSt3__16chrono12system_clock3nowEv();
    puVar6 = *(undefined8 **)(lVar1 + 0x30);
    for (puVar8 = *(undefined8 **)(lVar1 + 0x28); in_ZR = puVar8 == puVar6, !(bool)in_ZR;
        puVar8 = puVar8 + 5) {
      plVar7 = *(long **)(param_1 + 0x40);
      uStack_348 = puVar8[1];
      uStack_350 = *puVar8;
      if (puVar8[1] != 0) {
        do {
          func_0x00010b18e19c();
        } while (extraout_w10 != 0);
      }
      func_0x00010b121ddc(auStack_340,param_2);
      puStack_320 = puVar2;
      FUN_10b12402c(auStack_318,param_3);
      pcStack_d0 = FUN_10b18d980;
      ppuStack_c8 = &PTR_FUN_110cc2110;
      puVar3 = (undefined8 *)0x260;
      __Znwm();
      puVar3[1] = uStack_348;
      *puVar3 = uStack_350;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x00010b121ddc(puVar3 + 2,auStack_340);
      puVar3[6] = puStack_320;
      FUN_10b12402c(puVar3 + 7,auStack_318);
      puStack_c0 = puVar3;
      (**(code **)(*plVar7 + 0x10))(plVar7,&pcStack_d0);
      func_0x00010b18e348();
      FUN_10b18c3f4(&uStack_350);
    }
  }
LAB_10b18c348:
  puVar4 = auStack_e8;
  func_0x000107c2798c();
  func_0x00010b18e2e0(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar5 = auStack_e8;
    func_0x000107c2798c();
    func_0x00010b18e248();
    func_0x0001052b5d04(puVar5 + 0x38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5 + 0x10);
    func_0x00010b0f9c1c();
    if (puVar5 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10b18c42c; end: 10b18c52f;  */

void FUN_10b18c42c(long *param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_3 == 1) {
    lVar2 = param_1[7];
    lVar3 = lVar2;
    func_0x00010b18f810(lVar2,param_2);
    func_0x00010b18f904();
    func_0x00010b18f8c8();
    if (lVar3 != 0) {
      (**(code **)(**(long **)(lVar3 + 0x28) + 0x10))();
      FUN_10b18f524(lStack_40,lVar3);
    }
    func_0x00010b18f808();
    FUN_10b18e5c4(&uStack_50,lVar2 + 0x20);
    FUN_10b18f648(lStack_40,&lStack_38);
    func_0x00010b18f808();
    func_0x00010b18f800();
    return;
  }
  if (param_3 == 0) {
    uVar1 = param_1[7];
    FUN_10b18e8c0(uVar1,param_2);
    if ((uVar1 & 1) == 0) {
      FUN_10b18e684(param_1[7],param_2);
      lStack_38 = param_1[8];
      lStack_40 = 0;
      if (param_1[7] != 0) {
        lStack_40 = param_1[7] + 8;
      }
      if (lStack_38 != 0) {
        do {
          func_0x00010b18e19c();
        } while (extraout_w10 != 0);
      }
      (**(code **)(*param_1 + 0x10))(&uStack_30,param_1,param_2,&lStack_40);
      func_0x00010b18e450();
      lStack_48 = lStack_28;
      uStack_50 = uStack_30;
      if (lStack_28 != 0) {
        do {
          func_0x00010b18e19c();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b18e76c();
      func_0x00010539eeb0(&uStack_50);
      func_0x00010539eeb0(&uStack_30);
    }
  }
  return;
}



/* Entry: 10b18c530; end: 10b18c537;  */

void FUN_10b18c530(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_3 == 1) {
    lVar2 = *(long *)(param_1 + 0x30);
    lVar3 = lVar2;
    func_0x00010b18f810(lVar2,param_2);
    func_0x00010b18f904();
    func_0x00010b18f8c8();
    if (lVar3 != 0) {
      (**(code **)(**(long **)(lVar3 + 0x28) + 0x10))();
      FUN_10b18f524(lStack_40,lVar3);
    }
    func_0x00010b18f808();
    FUN_10b18e5c4(&uStack_50,lVar2 + 0x20);
    FUN_10b18f648(lStack_40,&lStack_38);
    func_0x00010b18f808();
    func_0x00010b18f800();
    return;
  }
  if (param_3 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    FUN_10b18e8c0(uVar1,param_2);
    if ((uVar1 & 1) == 0) {
      FUN_10b18e684(*(undefined8 *)(param_1 + 0x30),param_2);
      lStack_38 = *(long *)(param_1 + 0x38);
      lStack_40 = 0;
      if (*(long *)(param_1 + 0x30) != 0) {
        lStack_40 = *(long *)(param_1 + 0x30) + 8;
      }
      if (lStack_38 != 0) {
        do {
          func_0x00010b18e19c();
        } while (extraout_w10 != 0);
      }
      (**(code **)(*(long *)(param_1 + -8) + 0x10))
                (&uStack_30,(long *)(param_1 + -8),param_2,&lStack_40);
      func_0x00010b18e450();
      lStack_48 = lStack_28;
      uStack_50 = uStack_30;
      if (lStack_28 != 0) {
        do {
          func_0x00010b18e19c();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b18e76c();
      func_0x00010539eeb0(&uStack_50);
      func_0x00010539eeb0(&uStack_30);
    }
  }
  return;
}



/* Entry: 10b18c538; end: 10b18c5cb;  */

void FUN_10b18c538(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined1 auStack_298 [164];
  uint uStack_1f4;
  undefined8 uStack_1e0;
  byte bStack_110;
  byte bStack_70;
  char cStack_38;
  
  if (param_3 == 1) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(auStack_298);
    if (((cStack_38 == '\x01') && ((bStack_70 & 1) != 0)) && ((bStack_110 & 1) != 0)) {
      uVar1 = (ulong)uStack_1f4;
      FUN_10b18c5cc();
      if ((int)uVar1 != 0) {
        FUN_10b1894b8(*(undefined8 *)(param_1 + 0x28),uVar1,*param_4,uStack_1e0);
      }
    }
    FUN_10b0ff68c(auStack_298);
  }
  return;
}



/* Entry: 10b18c5cc; end: 10b18c617;  */

undefined4 FUN_10b18c5cc(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x2d0;
  if (900 < param_1) {
    uVar2 = 0x438;
  }
  uVar1 = 0x21c;
  if (0x276 < param_1) {
    uVar1 = uVar2;
  }
  uVar2 = 0x1e0;
  if (0x1fe < param_1) {
    uVar2 = uVar1;
  }
  uVar1 = 0x168;
  if (0x1a4 < (int)param_1) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10b18c618; end: 10b18c62b;  */

void FUN_10b18c618(void)

{
  FUN_10b18c6d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18c62c; end: 10b18c62f;  */

undefined8 * FUN_10b18c62c(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110cc1f60;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b18c770(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b0f95bc(param_1 + 3);
  func_0x00010b0f95bc(param_1 + 1);
  return param_1;
}



/* Entry: 10b18c630; end: 10b18c643;  */

void FUN_10b18c630(void)

{
  FUN_10b18c6d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18c644; end: 10b18c647;  */

void FUN_10b18c644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1f80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b18c648; end: 10b18c65b;  */

void FUN_10b18c648(void)

{
  FUN_10b18c6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18c65c; end: 10b18c6bf;  */

long FUN_10b18c65c(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  lVar2 = param_1 + 0x30;
  __ZNSt3__118condition_variableD1Ev(lVar2);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x18;
    func_0x00010b0f9c1c();
    if (param_1 != 0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return lVar2;
}



/* Entry: 10b18c6c0; end: 10b18c6cf;  */

void FUN_10b18c6c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18c6d0; end: 10b18c76f;  */

undefined8 * FUN_10b18c6d0(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110cc1f60;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b18c770(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b0f95bc(param_1 + 3);
  func_0x00010b0f95bc(param_1 + 1);
  return param_1;
}



/* Entry: 10b18c770; end: 10b18c84f;  */

void FUN_10b18c770(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b0f9670(auStack_40,param_1 + 8,&uStack_50);
  FUN_10b0f96cc(alStack_30,auStack_40);
  func_0x00010b0f95bc(auStack_40);
  func_0x00010b0f95bc(&uStack_50);
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x48);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x88,param_2);
  plVar2 = *(long **)(alStack_30[0] + 0x90);
  *(undefined8 *)(alStack_30[0] + 0x90) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x18);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x00010b18e3a4();
  }
  func_0x00010b0f95bc(alStack_30);
  return;
}



/* Entry: 10b18c850; end: 10b18c883;  */

undefined8 * FUN_10b18c850(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10b18c884(param_1 + 5);
  }
  *param_1 = &PTR_FUN_110cc1f60;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b18c770(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b0f95bc(param_1 + 3);
  func_0x00010b0f95bc(param_1 + 1);
  return param_1;
}



/* Entry: 10b18c884; end: 10b18c8ab;  */

void FUN_10b18c884(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b0f964c();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b18c8ac; end: 10b18c97b;  */

void FUN_10b18c8ac(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = (long)(param_1 + 2);
    param_1 = (long *)*param_1;
    func_0x00010b18c8e0(lVar1);
    func_0x00010b18e394();
  }
  return;
}



/* Entry: 10b18c97c; end: 10b18c9cb;  */

void FUN_10b18c97c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  FUN_10b1251f8();
  puVar1[0x38] = 1;
  return;
}



/* Entry: 10b18c9cc; end: 10b18ca43;  */

long FUN_10b18c9cc(long param_1)

{
  func_0x00010b18c9f4(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10b18ca44(param_1,0);
  return param_1;
}



/* Entry: 10b18ca44; end: 10b18ca5b;  */

void FUN_10b18ca44(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b18ca5c; end: 10b18caaf;  */

long FUN_10b18ca5c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_10b18cab0(param_3,param_1);
    param_3 = param_3 + 0x28;
    lVar1 = lVar1 + 0x28;
  }
  return lVar1;
}



/* Entry: 10b18cab0; end: 10b18cb5f;  */

long FUN_10b18cab0(long param_1,long param_2)

{
  func_0x00010b18e3f4();
  func_0x00010b0f9b20();
  func_0x00010b18caf0(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 10b18cb60; end: 10b18cb63;  */

void FUN_10b18cb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1fd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b18cb64; end: 10b18cb77;  */

void FUN_10b18cb64(void)

{
  func_0x00010b18cb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18cb78; end: 10b18cb8b;  */

void FUN_10b18cb78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b18e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b18cb8c; end: 10b18cc53;  */

void FUN_10b18cb8c(long param_1)

{
  func_0x00010b18e3c4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b18cc54; end: 10b18cc6b;  */

void FUN_10b18cc54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b18cc6c; end: 10b18ccb7;  */

long * FUN_10b18cc6c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b18cb18(lVar1 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b18ccb8; end: 10b18ce3b;  */

void FUN_10b18ccb8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar3 = (undefined8 *)0xe0;
  __Znwm();
  plVar6 = puVar3 + 1;
  *plVar6 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cc2020;
  puVar5 = puVar3 + 3;
  *puVar5 = &PTR_FUN_110cc1db8;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = &PTR_DAT_110cc1e10;
  puVar3[5] = &PTR_DAT_110cc1e48;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  puVar3[9] = *(undefined8 *)(param_2 + 0x18);
  puVar3[8] = uVar7;
  puVar4 = puVar3;
  if (*(long *)(param_2 + 0x18) != 0) {
    do {
      func_0x00010b18e19c();
    } while (extraout_w10 != 0);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  puVar3[0xb] = *(undefined8 *)(param_2 + 0x28);
  puVar3[10] = uVar7;
  if (*(long *)(param_2 + 0x28) != 0) {
    do {
      func_0x00010b18e19c();
    } while (extraout_w10_00 != 0);
  }
  puStack_60 = (undefined8 *)CONCAT44(puStack_60._4_4_,3);
  func_0x000107c31444();
  FUN_10b18b688(puVar3 + 0xc,&UNK_10f730e93,&puStack_60,puVar4);
  puVar3[0xf] = 0x32aaaba7;
  puVar3[0xe] = 1;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  puVar3[0x1a] = 0;
  *(undefined4 *)(puVar3 + 0x1b) = 0x3f800000;
  *param_1 = puVar5;
  param_1[1] = puVar3;
  if ((puVar3[7] == 0) || (*(long *)(puVar3[7] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_60 = puVar5;
    puStack_58 = puVar3;
    func_0x00010b18cc10(puVar3 + 6,puVar5,puVar3);
    func_0x00010b18e3b4();
  }
  return;
}



/* Entry: 10b18ce3c; end: 10b18ce3f;  */

void FUN_10b18ce3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b18ce40; end: 10b18ce53;  */

void FUN_10b18ce40(void)

{
  func_0x00010b18ce5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18ce54; end: 10b18ce97;  */

void FUN_10b18ce54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b18e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b18ce98; end: 10b18cebb;  */

void FUN_10b18ce98(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b18c884();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b18cebc; end: 10b18cf5b;  */

undefined8 *
FUN_10b18cebc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_50 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  func_0x00010b18e428();
  uStack_38 = extraout_x8;
  func_0x000106e54980(auStack_50,1);
  FUN_10b18cf5c(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000106e54adc();
  func_0x00010b18e2e0(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000106e54adc();
  func_0x00010b18e248();
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_11097ffd8;
  puVar3[1] = 0;
  FUN_10b18cfa0(puVar3 + 3);
  return puVar3;
}



/* Entry: 10b18cf5c; end: 10b18cf9f;  */

undefined8 * FUN_10b18cf5c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11097ffd8;
  param_1[1] = 0;
  FUN_10b18cfa0(param_1 + 3);
  return param_1;
}



/* Entry: 10b18cfa0; end: 10b18d003;  */

void FUN_10b18cfa0(void)

{
  func_0x00010b18e3d0();
  func_0x000107c278b8();
  func_0x000107c31438();
  func_0x00010b18e364();
  return;
}



/* Entry: 10b18d004; end: 10b18d007;  */

void FUN_10b18d004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b18d008; end: 10b18d01b;  */

void FUN_10b18d008(void)

{
  FUN_10b18d160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18d01c; end: 10b18d027;  */

void FUN_10b18d01c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b18e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b18d028; end: 10b18d03b;  */

void FUN_10b18d028(void)

{
  FUN_10b18d044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18d03c; end: 10b18d043;  */

void FUN_10b18d03c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long alStack_48 [2];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  pbVar1 = (byte *)(param_1 + 0x20);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) == 0) {
    func_0x00010b18cbd4(alStack_48,param_1 + 8);
    if (alStack_48[0] != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      FUN_10b18bf20(auStack_38,alStack_48[0] + 0x60);
      plVar7 = (long *)(lStack_28 + 0x10);
      while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
        for (lVar5 = plVar7[5]; lVar5 != plVar7[6]; lVar5 = lVar5 + 0x28) {
          if (*(long *)(lVar5 + 0x20) == lVar6) {
            lVar5 = lVar5 + 0x28;
            FUN_10b18ca5c(lVar5);
            func_0x00010b18c91c(plVar7 + 5,lVar5);
            if (plVar7[5] == plVar7[6]) {
              lVar6 = lStack_28;
              FUN_10b18d778(lStack_28,plVar7 + 2);
              if (lVar6 != 0) {
                FUN_10b18d84c(lStack_28,lVar6);
              }
            }
            goto LAB_10b18d13c;
          }
        }
      }
LAB_10b18d13c:
      func_0x000107c2798c(auStack_38);
    }
    func_0x00010b18cb3c(alStack_48);
  }
  return;
}



/* Entry: 10b18d044; end: 10b18d07b;  */

undefined8 * FUN_10b18d044(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc20d8;
  FUN_10b18d07c();
  func_0x00010b18cb18(param_1 + 1);
  return param_1;
}


