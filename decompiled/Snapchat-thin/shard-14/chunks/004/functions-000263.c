/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1a60d0; end: 10b1a60d3;  */

void FUN_10b1a60d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2b18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a60d4; end: 10b1a60e7;  */

void FUN_10b1a60d4(void)

{
  func_0x00010b1a6104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a60e8; end: 10b1a610f;  */

void FUN_10b1a60e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1aa504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1a6110; end: 10b1a616f;  */

long * FUN_10b1a6110(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    plVar2 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    plVar2 = (long *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  FUN_10b16c96c();
  lVar3 = *plVar2;
  if ((*(byte *)(lVar3 + 0x88) & 1) != 0) {
    if ((*(byte *)(lVar3 + 0x88) & 1) != 0) {
      return (long *)(lVar3 + 0x40);
    }
    func_0x00010b177184();
    func_0x00010b176afc();
    func_0x00010b176bb4();
    func_0x00010552fc08();
    func_0x00010b1762c0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b166550);
    (*pcVar1)();
  }
  func_0x00010b175a08();
  func_0x00010b1757a4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b15b43c);
  (*pcVar1)();
}



/* Entry: 10b1a6170; end: 10b1a61e7;  */

void FUN_10b1a6170(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) &&
     ((lStack_18 = *(long *)(param_2 + 0x10), lStack_18 == 0 || (*(long *)(lStack_18 + 8) == -1))))
  {
    lStack_30 = param_2;
    lStack_28 = param_3;
    if (param_3 != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10 != 0);
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10_00 != 0);
      lStack_18 = *(long *)(param_2 + 0x10);
    }
    uStack_20 = *(undefined8 *)(param_2 + 8);
    *(long *)(param_2 + 8) = param_2;
    *(long *)(param_2 + 0x10) = param_3;
    func_0x00010b1a6544(&uStack_20);
    func_0x00010b1a5a0c(&lStack_30);
    return;
  }
  return;
}



/* Entry: 10b1a61e8; end: 10b1a61eb;  */

void FUN_10b1a61e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2bb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a61ec; end: 10b1a61ff;  */

void FUN_10b1a61ec(void)

{
  FUN_10b1a7424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a6200; end: 10b1a6207;  */

void FUN_10b1a6200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1aa504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1a6208; end: 10b1a63b7;  */

undefined8 *
FUN_10b1a6208(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  long *plVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc2c08;
  param_1[3] = 0x32aaaba7;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  lVar3 = param_2[1];
  lVar2 = *param_2;
  param_1[0xc] = param_2[1];
  param_1[0xb] = lVar2;
  if (lVar3 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  puVar1 = param_1 + 0xd;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1,param_3);
  lVar2 = param_4[1];
  lVar3 = *param_4;
  plVar4 = param_1 + 0x12;
  *plVar4 = 0;
  param_1[0x11] = lVar2;
  param_1[0x10] = lVar3;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_5;
  *(undefined1 *)(param_1 + 0x16) = param_7;
  *(undefined4 *)((long)param_1 + 0xb4) = param_8;
  *(undefined1 *)(param_1 + 0x17) = 0;
  __ZNSt3__16chrono12system_clock3nowEv();
  param_1[0x18] = puVar1;
  param_1[0x19] = param_6;
  lVar3 = *param_2;
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(lVar3 + 0x46a);
  if (*(long *)(lVar3 + 0x388) != *(long *)(lVar3 + 0x390)) {
    lVar3 = 0x150;
    __Znwm();
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_10b208300();
    func_0x000107c27f10(&uStack_70);
    lVar2 = *plVar4;
    *plVar4 = lVar3;
    if (lVar2 != 0) {
      func_0x00010b1aa32c();
    }
    if (0 < *param_4) {
      param_1[0x14] = 0xfffffffffffffff0;
    }
  }
  return param_1;
}



/* Entry: 10b1a63b8; end: 10b1a63bb;  */

undefined8 * FUN_10b1a63b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2c08;
  FUN_10b1a651c(param_1 + 0x12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd);
  func_0x00010b124c0c(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  func_0x00010b1a6544(param_1 + 1);
  return param_1;
}



/* Entry: 10b1a63bc; end: 10b1a63cf;  */

void FUN_10b1a63bc(void)

{
  func_0x00010b1a6568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a63d0; end: 10b1a649b;  */

void FUN_10b1a63d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  code *extraout_x8;
  long *plVar2;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  func_0x00010b1ab158();
  plVar2 = (long *)*param_3;
  if (plVar2 == (long *)0x0) {
    uStack_60 = uStack_60 & 0xffffffffffffff00;
  }
  else {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x18))(plVar2);
    func_0x00010b1aa5b4(*param_3);
    (*extraout_x8)();
    func_0x00010bd48000(&uStack_70,plVar1,param_2);
    uStack_58 = uStack_68;
    uStack_60 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  uStack_50 = plVar2 != (long *)0x0;
  FUN_10b1a65bc();
  func_0x000107c27f18(&uStack_60);
  if (plVar2 != (long *)0x0) {
    func_0x00010b1aa60c();
  }
  return;
}



/* Entry: 10b1a649c; end: 10b1a651b;  */

char FUN_10b1a649c(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  int extraout_w10;
  ulong uStack_40;
  ulong uStack_38;
  undefined1 uStack_30;
  
  cVar1 = *(char *)(param_1 + 0xd0);
  if (cVar1 == '\x01') {
    if ((char)param_3[2] == '\x01') {
      uStack_38 = param_3[1];
      uStack_40 = *param_3;
      if (param_3[1] != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10 != 0);
      }
      uStack_30 = 1;
    }
    else {
      uStack_30 = 0;
      uStack_40 = uStack_40 & 0xffffffffffffff00;
    }
    FUN_10b1a65bc();
    func_0x000107c27f18(&uStack_40);
  }
  return cVar1;
}



/* Entry: 10b1a651c; end: 10b1a65bb;  */

void FUN_10b1a651c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010b1aa788();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x00010b1aa32c();
  }
  return;
}



/* Entry: 10b1a65bc; end: 10b1a7393;  */

void FUN_10b1a65bc(long param_1,long param_2,ulong *param_3,long param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  code *pcVar9;
  undefined1 in_ZR;
  undefined1 *puVar10;
  long ***ppplVar11;
  ulong *puVar12;
  char *pcVar13;
  undefined1 extraout_w8;
  undefined1 uVar14;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong *puVar15;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  int iVar16;
  ulong extraout_x9;
  ulong *puVar17;
  long extraout_x9_00;
  long lVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  ulong uVar19;
  ulong extraout_x10;
  int extraout_w11;
  long unaff_x19;
  ulong uVar20;
  long **pplVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int *piVar26;
  uint *puVar27;
  long lVar28;
  ulong *puVar29;
  ulong *unaff_x28;
  undefined1 auStack_218 [16];
  undefined1 uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 auStack_1e0 [16];
  long **applStack_1d0 [3];
  ulong auStack_1b8 [2];
  long lStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  undefined1 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  long *plStack_130;
  long *plStack_128;
  undefined1 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long **pplStack_90;
  ulong uStack_88;
  long **pplStack_80;
  long *plStack_78;
  long *plStack_70;
  ulong uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_18;
  
  func_0x00010b1aac94();
  func_0x00010b1aa2b8();
  lStack_1a8 = param_1 + 0x18;
  uStack_1a0 = 1;
  uStack_18 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(unaff_x19 + 0x99) & 1) != 0) goto LAB_10b1a6f1c;
  pplVar21 = (long **)(unaff_x19 + 0x58);
  func_0x00010b11fabc(auStack_1b8);
  if (auStack_1b8[0] == 0) {
    func_0x00010b1ab118();
  }
  else {
    if (*(long *)(unaff_x19 + 0xa0) == 0) {
      __ZNSt3__16chrono12system_clock3nowEv();
      lVar28 = *(long *)(unaff_x19 + 0xc0);
      uVar24 = *(undefined8 *)(auStack_1b8[0] + 0xc0);
      FUN_10b12983c(&pplStack_90,*(undefined4 *)(auStack_1b8[0] + 0x370));
      func_0x00010b1aa5a4(&plStack_130,&pplStack_90);
      FUN_10b11ef50(uVar24,0xc1,&plStack_130,((long)pplVar21 - lVar28) / 1000);
      pplVar21 = &plStack_130;
      FUN_10b120998();
      func_0x00010b1aa454(&pplStack_90);
    }
    iVar16 = (int)pplVar21;
    if (*(char *)(param_4 + 0x40) == '\x01') {
LAB_10b1a6688:
      pcVar13 = "NULL";
      func_0x0001072df81c(&plStack_130,param_4 + 0x20);
LAB_10b1a66cc:
      puVar27 = (uint *)(param_2 + 0x20);
      uVar4 = *puVar27;
      pplVar21 = &plStack_130;
      func_0x000107c27e5c();
      uStack_88 = 0;
      pplStack_90 = (long **)(ulong)uVar4;
      pplStack_80 = pplVar21;
      plStack_78 = (long *)pcVar13;
      func_0x000107c2793c(&UNK_10f7316c3);
      func_0x000107c3173c(applStack_1d0);
      func_0x00010b1aa8d4();
      iVar16 = 2;
      if (*puVar27 != 0x194) {
        iVar16 = 0;
      }
      if (*puVar27 == 0x193) {
        iVar16 = 1;
      }
      uVar20 = auStack_1b8[0];
      FUN_10b19af84(&uStack_170);
      in_ZR = *(char *)(auStack_1b8[0] + 0x718) == '\x01';
      if ((bool)in_ZR) {
        bVar8 = *(byte *)(unaff_x19 + 0xb8);
        func_0x00010b1aa6ec();
        if ((bVar8 & 1) != 0) {
LAB_10b1a6974:
          lVar28 = 0xbc;
          if (*(char *)(unaff_x19 + 0xb0) == '\0') {
            lVar28 = 0xb8;
          }
          iVar7 = *(int *)(auStack_1b8[0] + lVar28);
          in_ZR = *puVar27 == 0xca;
          if (((bool)in_ZR) && (in_ZR = (char)param_3[2] == '\x01', (bool)in_ZR)) {
            uVar20 = *param_3;
            FUN_10b19f588(uVar20,param_3[1]);
            param_3 = (ulong *)(ulong)((uint)uVar20 ^ 1);
          }
          else {
            param_3 = (ulong *)0x0;
          }
          func_0x00010b1aaeb4(auStack_1b8[0]);
          if ((int)uVar20 == 0) {
            uStack_160 = 0;
            uStack_158 = 0;
          }
          else {
            func_0x00010b1aaebc(auStack_1b8[0]);
            uStack_158 = *(ulong *)(uVar20 + 0x18);
            uStack_160 = *(ulong *)(uVar20 + 0x10);
            if (*(long *)(uVar20 + 0x18) != 0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_00 != 0);
            }
          }
          if ((iVar16 == 0) && (in_ZR = iVar7 == 1, 0 < iVar7)) {
            iVar5 = *(int *)(unaff_x19 + 0xb4);
            in_ZR = iVar5 == iVar7;
            if (iVar7 <= iVar5) goto LAB_10b1a6b3c;
            *(int *)(unaff_x19 + 0xb4) = iVar5 + 1;
            FUN_10b1969c0();
            if ((uVar20 & 1) == 0) {
              *(undefined1 *)(unaff_x19 + 0x99) = 0;
              __ZNSt3__16chrono12system_clock3nowEv();
              *(ulong *)(unaff_x19 + 0xc0) = uVar20;
              func_0x00010b1aa860();
              FUN_10b1a353c();
            }
            else {
              func_0x00010b1ab118();
              uVar20 = unaff_x19 + 0x68;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&plStack_130)
              ;
              pplVar21 = &plStack_130;
              func_0x000107c27e5c();
              pplStack_80 = (long **)(ulong)*(uint *)(unaff_x19 + 0xb4);
              plStack_78 = (long *)0x0;
              pplStack_90 = pplVar21;
              uStack_88 = uVar20;
              func_0x000107c2793c(&UNK_10f7316ea);
              func_0x000107c3173c(&uStack_100);
              func_0x00010b1aa860();
              func_0x00010b1aad48();
              if ((bool)in_ZR) {
                func_0x00010b1aaa24();
                (*extraout_x8_02)();
              }
              FUN_10b19af84(&puStack_b8,auStack_1b8[0]);
              FUN_10b19fac0(&pplStack_90,auStack_1b8[0] + 0x590,&plStack_130);
              if (((ulong)pplStack_80 & 1) != 0) {
                FUN_10b19e794(auStack_1b8[0] + 0x590,&pplStack_90,&uStack_100);
                uVar24 = *(undefined8 *)(unaff_x19 + 0xa8);
                uVar25 = *(undefined8 *)(unaff_x19 + 200);
                bVar8 = *(byte *)(unaff_x19 + 0xb0);
                uVar6 = *(undefined4 *)(unaff_x19 + 0xb4);
                param_3 = (ulong *)0xf0;
                __Znwm();
                param_3[1] = 0;
                param_3[2] = 0;
                *param_3 = (ulong)&PTR_FUN_110cc2bb8;
                FUN_10b1a6208(param_3 + 3,auStack_1b8,&uStack_100,&pplStack_90,uVar24,uVar25,
                              bVar8 & 1,uVar6);
                FUN_10b1a6170(auStack_1e0,param_3 + 3,param_3);
                FUN_10b19e958(auStack_1b8[0],auStack_1e0);
                func_0x00010b1a5a0c(auStack_1e0);
              }
              FUN_10b122f98(&puStack_b8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
              func_0x00010b1aa8d4();
            }
          }
          else {
LAB_10b1a6b3c:
            func_0x00010b1ab118();
            uVar20 = auStack_1b8[0];
            func_0x000107c27f70(&pplStack_90,unaff_x19 + 0x68);
            plStack_128 = *(long **)(unaff_x19 + 0x88);
            plStack_130 = (long *)((*(ulong *)(unaff_x19 + 0xa0) &
                                   ((long)*(ulong *)(unaff_x19 + 0xa0) >> 0x3f ^ 0xffffffffffffffffU
                                   )) + *(long *)(unaff_x19 + 0x80));
            FUN_10b1a0e84(uVar20,&pplStack_90,&plStack_130,iVar16,applStack_1d0,*puVar27);
            func_0x00010b1aab1c();
            if ((uVar20 & 1) != 0) {
              FUN_10b20bb2c(*(undefined8 *)(auStack_1b8[0] + 0xc0),
                            *(undefined4 *)(auStack_1b8[0] + 0x370),
                            *(undefined4 *)(auStack_1b8[0] + 0x374),
                            *(undefined1 *)(auStack_1b8[0] + 0x380),*puVar27,0,1,
                            (ulong)*(uint *)(auStack_1b8[0] + 0x3d0) | 0x100000000);
              func_0x00010b1aa860();
              func_0x00010b1aad48();
              if ((bool)in_ZR) {
                func_0x00010b1aaa24();
                (*extraout_x8_03)();
              }
            }
          }
          func_0x0001052a9ef8(&uStack_160);
        }
      }
      else {
        if (((*(long *)(auStack_1b8[0] + 0x498) == 0) || (*(char *)(param_2 + 0x50) != '\x01')) ||
           (*(long *)(param_2 + 0x30) == *(long *)(param_2 + 0x38))) {
          func_0x00010b1aa6ec();
          goto LAB_10b1a6974;
        }
        FUN_10b1a7394(auStack_1b8[0] + 0x6f8,param_2 + 0x30);
        FUN_10b4b3424(auStack_188,*(undefined8 *)(auStack_1b8[0] + 0x6f8),
                      *(undefined4 *)(auStack_1b8[0] + 0x710),param_2);
        func_0x00010b1aa860();
        uStack_198 = uStack_170;
        uStack_190 = uStack_168;
        uStack_170 = 0;
        uStack_168 = 0;
        puStack_b8 = (ulong *)0x0;
        puStack_b0 = (ulong *)0x0;
        puStack_a8 = (ulong *)0x0;
        uStack_88 = 0x7fffffffffffffff;
        pplStack_90 = (long **)0x0;
        FUN_10b19f5c4(&plStack_130,auStack_1b8[0] + 0x480,&pplStack_90);
        plVar23 = plStack_128;
        unaff_x28 = (ulong *)0x0;
        param_3 = (ulong *)0x0;
        for (plVar22 = plStack_130; plVar22 != plVar23; plVar22 = plVar22 + 7) {
          uStack_88 = plVar22[1];
          pplStack_90 = (long **)*plVar22;
          plStack_78 = (long *)plVar22[3];
          pplStack_80 = (long **)plVar22[2];
          if (plVar22[3] != 0) {
            do {
              func_0x00010b1aa2e0();
            } while (extraout_w10 != 0);
          }
          puVar12 = puStack_b8;
          uStack_68 = plVar22[6];
          plStack_70 = (long *)plVar22[5];
          uStack_60 = (undefined1)plVar22[4];
          if (param_3 < unaff_x28) {
            param_3[1] = uStack_88;
            *param_3 = (ulong)pplStack_90;
            param_3[3] = (ulong)plStack_78;
            param_3[2] = (ulong)pplStack_80;
            pplStack_80 = (long **)0x0;
            plStack_78 = (long *)0x0;
            param_3[5] = uStack_68;
            param_3[4] = (ulong)plStack_70;
            *(undefined1 *)(param_3 + 6) = uStack_60;
            puVar2 = param_3;
          }
          else {
            lVar28 = (long)param_3 - (long)puStack_b8;
            uVar20 = lVar28 / 0x38 + 1;
            if (0x492492492492492 < uVar20) goto LAB_10b1a7158;
            uVar19 = (((long)unaff_x28 - (long)puStack_b8) / 0x38) * 2;
            if (uVar19 < uVar20 || uVar19 - uVar20 == 0) {
              uVar19 = uVar20;
            }
            func_0x00010b1ab184(uVar19);
            uVar20 = extraout_x8_00;
            if (extraout_x10 <= extraout_x9) {
              uVar20 = 0x492492492492492;
            }
            if (0x492492492492492 < uVar20) {
              puStack_b0 = param_3;
              puStack_a8 = unaff_x28;
              func_0x000104bd35f4();
              goto LAB_10b1a716c;
            }
            lVar18 = uVar20 * 0x38;
            __Znwm();
            puVar2 = (ulong *)(lVar18 + lVar28);
            puVar2[1] = uStack_88;
            *puVar2 = (ulong)pplStack_90;
            puVar2[3] = (ulong)plStack_78;
            puVar2[2] = (ulong)pplStack_80;
            pplStack_80 = (long **)0x0;
            plStack_78 = (long *)0x0;
            puVar2[5] = uStack_68;
            puVar2[4] = (ulong)plStack_70;
            *(undefined1 *)(puVar2 + 6) = uStack_60;
            puVar29 = puVar2 + (lVar28 / -0x38) * 7;
            puVar15 = puVar29;
            puVar17 = puVar12;
            while (puVar17 != param_3) {
              func_0x00010b1aad6c(puVar15);
              uVar25 = *(undefined8 *)(extraout_x9_00 + 0x28);
              uVar24 = *(undefined8 *)(extraout_x9_00 + 0x20);
              *(undefined1 *)(extraout_x8_01 + 0x30) = *(undefined1 *)(extraout_x9_00 + 0x30);
              *(undefined8 *)(extraout_x8_01 + 0x28) = uVar25;
              *(undefined8 *)(extraout_x8_01 + 0x20) = uVar24;
              puVar15 = (ulong *)(extraout_x8_01 + 0x38);
              puVar17 = (ulong *)(extraout_x9_00 + 0x38);
            }
            for (; puVar12 != param_3; puVar12 = puVar12 + 7) {
              FUN_10b0fb81c(puVar12 + 2);
            }
            unaff_x28 = (ulong *)(lVar18 + uVar20 * 0x38);
            bVar3 = puStack_b8 != (ulong *)0x0;
            puStack_b8 = puVar29;
            if (bVar3) {
              __ZdlPv();
            }
          }
          param_3 = puVar2 + 7;
          FUN_10b0fb81c(&pplStack_80);
        }
        puStack_b0 = param_3;
        puStack_a8 = unaff_x28;
        FUN_10b1a453c(&plStack_130);
        (**(code **)(**(long **)(auStack_1b8[0] + 0x3b8) + 0x58))(&plStack_130);
        puVar1 = (undefined8 *)(auStack_1b8[0] + 0x3b8);
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_140 = 0x3f800000;
        FUN_10b194f30(&uStack_100,&plStack_130,&uStack_160);
        (**(code **)(*(long *)*puVar1 + 0x70))(&pplStack_90);
        FUN_10b194f00(&uStack_d0,auStack_188,&uStack_100,&pplStack_90,puVar1);
        uVar25 = uStack_c8;
        uVar24 = uStack_d0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_98 = *(undefined8 *)(auStack_1b8[0] + 0x3c0);
        uStack_a0 = *puVar1;
        *(undefined8 *)(auStack_1b8[0] + 0x3c0) = uVar25;
        *puVar1 = uVar24;
        func_0x0001052ac684(&uStack_a0);
        FUN_10b198334(&uStack_d0);
        func_0x0001052bb09c(&pplStack_90);
        func_0x000107c278e0(&uStack_100);
        func_0x000107c278e0(&uStack_160);
        pplVar21 = &plStack_130;
        func_0x000107c27bb0();
        func_0x00010b1aae90();
        uVar14 = *(undefined1 *)(auStack_1b8[0] + 0x46b);
        uStack_88 = 0;
        pplStack_80 = (long **)0x0;
        pplStack_90 = (long **)0x0;
        plStack_70 = pplVar21[3];
        plStack_78 = pplVar21[2];
        if (pplVar21[3] != (long *)0x0) {
          do {
            func_0x00010b1aa588();
            uVar14 = extraout_w8;
          } while (extraout_w11 != 0);
        }
        uStack_68 = CONCAT71(uStack_68._1_7_,uVar14);
        uStack_f8 = 0x7fffffffffffffff;
        uStack_100 = 0;
        FUN_10b19f8ac(&plStack_130,auStack_1b8[0] + 0x590,&uStack_100);
        plVar23 = plStack_128;
        for (plVar22 = plStack_130; plVar22 != plVar23; plVar22 = plVar22 + 5) {
          FUN_10b19faf4(&pplStack_90,plVar22 + 2);
          FUN_10b19fac0(&uStack_100,auStack_1b8[0] + 0x590,plVar22 + 2);
        }
        func_0x00010b1a457c(&plStack_130);
        uStack_100 = uStack_198;
        uStack_f8 = CONCAT71(uStack_f8._1_7_,uStack_190);
        uStack_198 = 0;
        uStack_190 = 0;
        FUN_10b19fb24(&pplStack_90,&uStack_100);
        FUN_10b122f98(&uStack_100);
        for (puVar12 = puStack_b8; in_ZR = puVar12 == param_3, !(bool)in_ZR; puVar12 = puVar12 + 7)
        {
          plStack_128 = (long *)puVar12[3];
          plStack_130 = (long *)puVar12[2];
          if (puVar12[3] != 0) {
            do {
              func_0x00010b1aa2e0();
            } while (extraout_w10_01 != 0);
          }
          uStack_120 = (undefined1)puVar12[6];
          uStack_110 = puVar12[5];
          uStack_118 = puVar12[4];
          FUN_10b19e108(auStack_1b8[0],&plStack_130,1);
          FUN_10b0fb81c(&plStack_130);
          uStack_158 = puVar12[3];
          uStack_160 = puVar12[2];
          if (puVar12[3] != 0) {
            do {
              func_0x00010b1aa2e0();
            } while (extraout_w10_02 != 0);
          }
          FUN_10b19d3ec(auStack_1b8[0]);
          FUN_10b0fb81c(&uStack_160);
        }
        FUN_10b1a45c4(&pplStack_90);
        FUN_10b1a0e44(&puStack_b8);
        FUN_10b122f98(&uStack_198);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
        func_0x00010b1aa6ec();
      }
      ppplVar11 = applStack_1d0;
    }
    else {
      piVar26 = (int *)(param_2 + 0x20);
      if (*piVar26 - 300U < 0xffffff9c) {
LAB_10b1a66bc:
        pcVar13 = "NULL";
        func_0x000107c278b8(&plStack_130);
        goto LAB_10b1a66cc;
      }
      if ((*piVar26 == 0xca) && (FUN_10b1969c0(), iVar16 != 0)) {
        if (*(char *)(param_4 + 0x40) == '\x01') goto LAB_10b1a6688;
        goto LAB_10b1a66bc;
      }
      in_ZR = (char)param_3[2] == '\x01';
      if ((bool)in_ZR) {
        uVar20 = *param_3;
        uVar19 = param_3[1];
        FUN_10b19f588(uVar20,uVar19);
        if ((uVar20 & 1) == 0) {
          if ((*(byte *)(unaff_x19 + 0x98) & 1) == 0) {
            in_ZR = false;
            if (*piVar26 == 200) {
              lVar28 = *(long *)(param_2 + 0x28);
              in_ZR = lVar28 == 0;
              if (lVar28 < 1) {
                lVar28 = 0x7fffffffffffffff;
              }
              *(undefined8 *)(unaff_x19 + 0x80) = 0;
              *(long *)(unaff_x19 + 0x88) = lVar28;
              *(undefined8 *)(unaff_x19 + 0xa0) = 0;
            }
            *(undefined1 *)(unaff_x19 + 0x98) = 1;
          }
          plVar22 = *(long **)(unaff_x19 + 0x90);
          if (plVar22 != (long *)0x0) {
            puVar12 = param_3;
            FUN_10b1a4fec(param_3);
            (**(code **)(*plVar22 + 0x20))(plVar22,puVar12,uVar19);
            lVar28 = *(long *)(unaff_x19 + 0xa0);
            if (lVar28 < 0) {
              uVar20 = *(ulong *)(unaff_x19 + 0x90);
              func_0x00010b1aa6d0();
              (*extraout_x8_04)();
              if ((ulong)-lVar28 <= uVar20) {
                uVar20 = -lVar28;
              }
              (**(code **)(**(long **)(unaff_x19 + 0x90) + 0x28))
                        (*(long **)(unaff_x19 + 0x90),uVar20);
              *(ulong *)(unaff_x19 + 0xa0) = *(long *)(unaff_x19 + 0xa0) + uVar20;
            }
            plVar23 = *(long **)(unaff_x19 + 0x90);
            plVar22 = plVar23;
            (**(code **)(*plVar23 + 0x10))(plVar23);
            (**(code **)(*plVar23 + 0x30))(&pplStack_90,plVar23,plVar22);
            func_0x000107c282f0(param_3,&pplStack_90);
            func_0x000107c27d78(&pplStack_90);
            uVar20 = auStack_1b8[0];
            in_ZR = *(char *)(*(long *)(unaff_x19 + 0x90) + 0x149) == '\x01';
            if ((bool)in_ZR) {
              *(undefined1 *)(unaff_x19 + 0x99) = 1;
              func_0x000107c27f70();
              func_0x000107c278b8(&plStack_130,&DAT_10f439f27);
              FUN_10b1a0e84(uVar20,&pplStack_90,unaff_x19 + 0x80,5,&plStack_130,*piVar26);
              uVar19 = uVar20;
              func_0x00010b1aa8d4();
              func_0x00010b1aab1c();
              if ((uVar20 & 1) != 0) {
                func_0x00010b1aaeb4(auStack_1b8[0]);
                if ((int)uVar19 == 0) {
                  pplVar21 = (long **)0x0;
                  pplStack_90 = (long **)0x0;
                  uStack_88 = 0;
                }
                else {
                  func_0x00010b1aaebc(auStack_1b8[0]);
                  pplVar21 = *(long ***)(uVar19 + 0x10);
                  uStack_88 = *(ulong *)(uVar19 + 0x18);
                  pplStack_90 = pplVar21;
                  if (uStack_88 != 0) {
                    do {
                      func_0x00010b1aa2e0();
                    } while (extraout_w10_03 != 0);
                  }
                }
                func_0x00010b1aa860();
                if (pplVar21 != (long **)0x0) {
                  func_0x00010b1aab58((*pplVar21)[4]);
                }
                func_0x0001052a9ef8(&pplStack_90);
              }
              goto LAB_10b1a6f14;
            }
          }
          uVar20 = *param_3;
          if (uVar20 != 0) {
            func_0x00010b1aa5b4();
            (*extraout_x8_05)();
            if (uVar20 != 0) {
              lVar28 = *(long *)(unaff_x19 + 0x80);
              lVar18 = *(long *)(unaff_x19 + 0xa0);
              uStack_200 = uStack_200 & 0xffffffffffffff00;
              in_ZR = (char)param_3[2] == '\x01';
              if ((bool)in_ZR) {
                uStack_1f8 = param_3[1];
                uStack_200 = *param_3;
                *param_3 = 0;
                param_3[1] = 0;
              }
              uStack_1f0 = in_ZR;
              FUN_10b19eb38(auStack_1b8[0],unaff_x19 + 0x68,param_2,(long *)(unaff_x19 + 0x80),
                            lVar18 + lVar28,&uStack_200,*(undefined8 *)(unaff_x19 + 0xa8));
              func_0x000107c27f18(&uStack_200);
              *(ulong *)(unaff_x19 + 0xa0) = *(long *)(unaff_x19 + 0xa0) + uVar20;
            }
          }
          goto LAB_10b1a6f14;
        }
      }
      auStack_218[0] = 0;
      uStack_208 = 0;
      FUN_10b19eb38(auStack_1b8[0],unaff_x19 + 0x68,param_2,(long *)(unaff_x19 + 0x80),
                    *(long *)(unaff_x19 + 0xa0) + *(long *)(unaff_x19 + 0x80),auStack_218,
                    *(undefined8 *)(unaff_x19 + 0xa8));
      puVar10 = auStack_218;
      func_0x000107c27f18();
      func_0x00010b1ab118();
      __ZNSt3__16chrono12system_clock3nowEv();
      uVar20 = (long)puVar10 - *(long *)(unaff_x19 + 0xc0);
      in_ZR = uVar20 == 1000;
      if ((long)uVar20 < 1000) goto LAB_10b1a6f14;
      lVar28 = *(long *)(unaff_x19 + 0x80);
      param_3 = *(ulong **)(unaff_x19 + 0x88);
      uVar24 = *(undefined8 *)(auStack_1b8[0] + 0xc0);
      FUN_10b12983c(&pplStack_90,*(undefined4 *)(auStack_1b8[0] + 0x370));
      func_0x00010b1aa5a4(&plStack_130,&pplStack_90);
      lVar18 = 0;
      if (uVar20 / 1000 != 0) {
        lVar18 = (((long)param_3 - lVar28) * 1000) / (long)(uVar20 / 1000);
      }
      FUN_10b11ef50(uVar24,0xc2,&plStack_130,lVar18);
      FUN_10b120998(&plStack_130);
      ppplVar11 = &pplStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppplVar11);
  }
LAB_10b1a6f14:
  func_0x00010b129c40(auStack_1b8);
LAB_10b1a6f1c:
  func_0x000107c2798c(&lStack_1a8);
  func_0x00010b1aa28c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1a7158:
  puStack_b0 = param_3;
  puStack_a8 = unaff_x28;
  func_0x00010b1a4a78();
LAB_10b1a716c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10b1a7170);
  (*pcVar9)();
}



/* Entry: 10b1a7394; end: 10b1a73bb;  */

void FUN_10b1a7394(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c278a8();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_10b1a7400();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b1aa574();
    func_0x000107c27d2c();
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 10b1a73bc; end: 10b1a73e3;  */

void FUN_10b1a73bc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1aa574();
  func_0x000107c27d2c();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1a73e4; end: 10b1a73ff;  */

void FUN_10b1a73e4(long param_1)

{
  FUN_10b1a7400();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b1a7400; end: 10b1a7423;  */

void FUN_10b1a7400(long param_1,long param_2)

{
  func_0x000107c2795c();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 10b1a7424; end: 10b1a742f;  */

void FUN_10b1a7424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2bb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a7430; end: 10b1a746f;  */

void FUN_10b1a7430(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b1aaf30(auStack_30);
  func_0x00010b1ab0b8();
  FUN_10b19fba0();
  func_0x00010b1aa478();
  return;
}



/* Entry: 10b1a7470; end: 10b1a74a3;  */

void FUN_10b1a7470(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1a74a4; end: 10b1a74af;  */

undefined8 * FUN_10b1a74a4(undefined8 *param_1)

{
  func_0x00010b1aa350();
  *param_1 = &PTR_FUN_110cc2c98;
  FUN_10b0fb81c(param_1 + 1);
  return param_1;
}



/* Entry: 10b1a74b0; end: 10b1a74db;  */

undefined8 * FUN_10b1a74b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2c98;
  FUN_10b0fb81c(param_1 + 1);
  return param_1;
}



/* Entry: 10b1a74dc; end: 10b1a74ef;  */

void FUN_10b1a74dc(void)

{
  FUN_10b1a74b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a74f0; end: 10b1a7537;  */

void FUN_10b1a74f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110cc2c98;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b1a7538; end: 10b1a758f;  */

void FUN_10b1a7538(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110cc2c98;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1aa2e0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b1a7590; end: 10b1a75b7;  */

void FUN_10b1a7590(undefined8 param_1)

{
  func_0x00010b1aab34();
  func_0x00010b1aa858(param_1,&PTR_DAT_110cc2cf8);
  func_0x00010b1aa684();
  return;
}



/* Entry: 10b1a75b8; end: 10b1a765f;  */

undefined ** FUN_10b1a75b8(void)

{
  return &PTR_DAT_110cc2cf8;
}



/* Entry: 10b1a7660; end: 10b1a76ab;  */

void FUN_10b1a7660(long param_1)

{
  func_0x00010b1aac80();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1a76ac; end: 10b1a76db;  */

void FUN_10b1a76ac(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x276276276276277) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x68);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc3038;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a76dc; end: 10b1a76df;  */

void FUN_10b1a76dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3038;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a76e0; end: 10b1a76f3;  */

void FUN_10b1a76e0(void)

{
  FUN_10b1a770c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a76f4; end: 10b1a76fb;  */

void FUN_10b1a76f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1aa504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1a76fc; end: 10b1a770b;  */

void FUN_10b1a76fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x000105277f8c();
  *param_3 = &PTR_FUN_110cc3038;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a770c; end: 10b1a772b;  */

void FUN_10b1a770c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3038;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a772c; end: 10b1a7737;  */

void FUN_10b1a772c(long param_1)

{
  undefined1 auStack_40 [16];
  
  func_0x00010b1aa350();
  FUN_10b19af84(auStack_40,*(undefined8 *)(param_1 + 0x10));
  FUN_10b19af40(*(undefined8 *)(param_1 + 0x10));
  func_0x00010b1aa478();
  return;
}



/* Entry: 10b1a7738; end: 10b1a7773;  */

void FUN_10b1a7738(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_10b19af84(auStack_30,*(undefined8 *)(param_1 + 0x10));
  FUN_10b19af40(*(undefined8 *)(param_1 + 0x10));
  func_0x00010b1aa478();
  return;
}



/* Entry: 10b1a7774; end: 10b1a7787;  */

void FUN_10b1a7774(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1a7788; end: 10b1a77b3;  */

undefined8 * FUN_10b1a7788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2d30;
  func_0x00010b1a085c(param_1 + 1);
  return param_1;
}



/* Entry: 10b1a77b4; end: 10b1a77c7;  */

void FUN_10b1a77b4(void)

{
  FUN_10b1a7788();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a77c8; end: 10b1a77eb;  */

void FUN_10b1a77c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x00010b1aa704();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110cc2d30;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  lVar3 = puVar2[4];
  uVar4 = puVar2[3];
  puVar1[5] = puVar2[4];
  puVar1[4] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10b1a77ec; end: 10b1a780f;  */

void FUN_10b1a77ec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110cc2d30;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  lVar2 = puVar1[4];
  uVar3 = puVar1[3];
  param_2[5] = puVar1[4];
  param_2[4] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10b1a7810; end: 10b1a7883;  */

void FUN_10b1a7810(long param_1)

{
  code *extraout_x8;
  int extraout_w11;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x00010b1aa6f4();
    } while (extraout_w11 != 0);
  }
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  func_0x00010b1aa6d0();
  (*extraout_x8)();
  func_0x000107c27d78(&uStack_30);
  func_0x00010b1aa60c();
  return;
}



/* Entry: 10b1a7884; end: 10b1a78ab;  */

void FUN_10b1a7884(undefined8 param_1)

{
  func_0x00010b1aab34();
  func_0x00010b1aa858(param_1,&PTR_DAT_110cc2d90);
  func_0x00010b1aa684();
  return;
}



/* Entry: 10b1a78ac; end: 10b1a7917;  */

undefined ** FUN_10b1a78ac(void)

{
  return &PTR_DAT_110cc2d90;
}



/* Entry: 10b1a7918; end: 10b1a7943;  */

undefined8 * FUN_10b1a7918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2db0;
  func_0x00010b1a087c(param_1 + 1);
  return param_1;
}



/* Entry: 10b1a7944; end: 10b1a7957;  */

void FUN_10b1a7944(void)

{
  FUN_10b1a7918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a7958; end: 10b1a797b;  */

void FUN_10b1a7958(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x00010b1aaad8();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110cc2db0;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_00 != 0);
  }
  uVar4 = puVar2[4];
  puVar1[6] = puVar2[5];
  puVar1[5] = uVar4;
  return;
}



/* Entry: 10b1a797c; end: 10b1a799f;  */

void FUN_10b1a797c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110cc2db0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_00 != 0);
  }
  uVar3 = puVar1[4];
  param_2[6] = puVar1[5];
  param_2[5] = uVar3;
  return;
}



/* Entry: 10b1a79a0; end: 10b1a7a1f;  */

void FUN_10b1a79a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *extraout_x8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010b1aa6d0(uVar4);
  (*extraout_x8)();
  func_0x000107c27d78(&uStack_30);
  func_0x00010b1aa60c();
  return;
}



/* Entry: 10b1a7a20; end: 10b1a7a47;  */

void FUN_10b1a7a20(undefined8 param_1)

{
  func_0x00010b1aab34();
  func_0x00010b1aa858(param_1,&PTR_DAT_110cc2e10);
  func_0x00010b1aa684();
  return;
}



/* Entry: 10b1a7a48; end: 10b1a7ab3;  */

undefined ** FUN_10b1a7a48(void)

{
  return &PTR_DAT_110cc2e10;
}



/* Entry: 10b1a7ab4; end: 10b1a7b23;  */

undefined8 * FUN_10b1a7ab4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  func_0x000105302f48(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10b1a7b24; end: 10b1a7b37;  */

void FUN_10b1a7b24(void)

{
  func_0x00010b1a7af8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a7b38; end: 10b1a7b6f;  */

undefined8 FUN_10b1a7b38(undefined8 param_1)

{
  func_0x00010b1aaad8();
  FUN_10b1a7bf4();
  return param_1;
}



/* Entry: 10b1a7b70; end: 10b1a7b93;  */

undefined8 * FUN_10b1a7b70(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_110cc2e30;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010724cbe8(param_2 + 3,puVar1 + 2);
  return param_2;
}



/* Entry: 10b1a7b94; end: 10b1a7be7;  */

void FUN_10b1a7b94(void)

{
  long unaff_x19;
  
  func_0x00010b1ab1b8();
  func_0x000104c003e8();
                    /* WARNING: Could not recover jumptable at 0x00010b1a7bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x19 + 8) + 0x20))();
  return;
}



/* Entry: 10b1a7be8; end: 10b1a7bf3;  */

undefined ** FUN_10b1a7be8(void)

{
  return &PTR_DAT_110cc2e90;
}



/* Entry: 10b1a7bf4; end: 10b1a7c57;  */

undefined8 * FUN_10b1a7bf4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_110cc2e30;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010724cbe8(param_1 + 3,param_2 + 2);
  return param_1;
}



/* Entry: 10b1a7c58; end: 10b1a7ccb;  */

long FUN_10b1a7c58(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = plVar2;
  plVar6 = plVar2;
  while (plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
    bVar1 = plVar5[5] < param_3;
    if (plVar5[4] != param_2) {
      bVar1 = plVar5[4] < param_2;
    }
    lVar3 = 8;
    if (!bVar1) {
      lVar3 = 0;
    }
    plVar6 = (long *)((long)plVar5 + lVar3);
    if (!bVar1) {
      plVar4 = plVar5;
    }
  }
  if (plVar2 != plVar4) {
    bVar1 = param_3 < plVar4[5];
    if (param_2 != plVar4[4]) {
      bVar1 = param_2 < plVar4[4];
    }
    if (!bVar1) {
      FUN_10b1a7cf4(param_1,plVar4);
      func_0x00010b1aa42c();
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10b1a7ccc; end: 10b1a7cf3;  */

undefined8 FUN_10b1a7ccc(undefined8 param_1)

{
  FUN_10b1a7cf4();
  func_0x00010b1aa42c();
  return param_1;
}



/* Entry: 10b1a7cf4; end: 10b1a7d2b;  */

long FUN_10b1a7cf4(long param_1)

{
  long unaff_x19;
  long *unaff_x21;
  
  func_0x00010b1aa9b4();
  if (*unaff_x21 == unaff_x19) {
    *unaff_x21 = param_1;
  }
  func_0x00010b1aa7d8();
  return param_1;
}



/* Entry: 10b1a7d2c; end: 10b1a7d4b;  */

void FUN_10b1a7d2c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 2;
  return;
}



/* Entry: 10b1a7d4c; end: 10b1a827b;  */

void FUN_10b1a7d4c(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  code **ppcVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  code **ppcVar6;
  byte bVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_748 [152];
  undefined1 auStack_6b0 [152];
  int iStack_618;
  undefined1 uStack_610;
  undefined4 auStack_530 [2];
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 uStack_510;
  uint7 uStack_50f;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined1 auStack_4f0 [16];
  undefined1 auStack_4e0 [28];
  int iStack_4c4;
  undefined1 auStack_3b8 [56];
  undefined1 uStack_380;
  byte bStack_378;
  char cStack_360;
  undefined1 auStack_358 [8];
  undefined4 uStack_350;
  int iStack_33c;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 uStack_2b0;
  code *pcStack_2a8;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  code *pcStack_288;
  undefined4 auStack_280 [2];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined1 auStack_240 [8];
  byte bStack_238;
  undefined1 uStack_198;
  undefined1 uStack_158;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  int iStack_148;
  undefined1 uStack_144;
  undefined8 uStack_48;
  
  func_0x00010b1aa2f0();
  plVar10 = *(long **)(param_1 + 0x10);
  ppcVar6 = (code **)plVar10[0x18];
  uStack_48 = extraout_x8;
  FUN_10b1a4670(auStack_748,plVar10 + 2);
  pcVar8 = (code *)plVar10[0x17];
  auStack_4e0[0] = 0;
  cStack_360 = '\0';
  func_0x00010b1aabf8(auStack_4f0);
  uVar1 = ppcVar6[0xbd] == pcVar8;
  if ((bool)uVar1) {
    func_0x00010b1aa5c8(auStack_358);
    auStack_6b0[0] = 0;
    uStack_610 = 0;
    if (((*(char *)(ppcVar6 + 0x8d) == '\x01') && (ppcVar6[0x6d] != (code *)0x0)) &&
       (FUN_10b11fdb8(auStack_6b0), iStack_33c != 0)) {
      iStack_618 = iStack_33c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pcStack_2c0,ppcVar6[0x6f]);
    pcStack_2a0 = ppcVar6[0x2b];
    pcStack_2a8 = ppcVar6[0x2a];
    pcStack_290 = ppcVar6[0x2d];
    pcStack_298 = ppcVar6[0x2c];
    pcStack_288 = ppcVar6[0x2e];
    auStack_530[0] = *(undefined4 *)(ppcVar6 + 0x6e);
    uStack_518 = 0;
    uStack_528 = 0;
    uStack_520 = 0;
    uStack_510 = 0;
    uStack_500 = 0;
    uStack_4fc = 0;
    uStack_508 = 0;
    uStack_504 = 0;
    uStack_4f8 = 0;
    if (*(char *)(ppcVar6 + 0x29) == '\x01') {
      func_0x00010b125750(auStack_280,ppcVar6 + 0x21);
    }
    else {
      uStack_268 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_520 = 0;
      uStack_518 = 0;
      uStack_528 = 0;
      lStack_260 = (ulong)uStack_50f << 8;
      uStack_258 = 0;
      uStack_24c = 0;
      uStack_254 = 0;
      uStack_250 = 0;
      auStack_280[0] = auStack_530[0];
    }
    FUN_10b121494(auStack_240,auStack_6b0);
    uStack_198 = 0;
    uStack_158 = 0;
    uStack_150 = uStack_350;
    uStack_14c = 1;
    iStack_148 = iStack_33c;
    uStack_144 = 1;
    uVar1 = cStack_360 == '\x01';
    if ((bool)uVar1) {
      FUN_10b1213b8(auStack_4e0);
      cStack_360 = '\0';
    }
    func_0x00010b1213e8(auStack_4e0,&pcStack_2c0);
    cStack_360 = '\x01';
    FUN_10b1213b8(&pcStack_2c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_528);
    ppcVar3 = ppcVar6 + 0x1e;
    FUN_10b1c4ae8();
    if (ppcVar3 != (code **)0x0) {
      func_0x00010b11fdec(auStack_3b8);
    }
    FUN_10b12130c(auStack_6b0);
    func_0x00010529fe04(auStack_358);
    func_0x00010b1aaf38();
    if ((bRam00000001137f40d0 & 1) == 0) goto LAB_10b1a813c;
    while( true ) {
      if (((bRam00000001137f40c8 & 1) != 0) && (uVar1 = iStack_4c4 == 2, (bool)uVar1)) {
        if ((bStack_378 & 1) == 0) {
          func_0x00010b114b5c(auStack_3b8);
        }
        uStack_380 = 1;
      }
      func_0x00010b1aaec4();
      if (((ulong)ppcVar6[0xb1] & 1) == 0) {
        pcVar8 = ppcVar6[0x1c];
        func_0x00010b1213e8(auStack_6b0,auStack_4e0);
        FUN_10b1a4670(auStack_358,auStack_748);
        FUN_10b1a4728(auStack_530,auStack_358,1);
        FUN_10b1f6c00(&pcStack_2c0,pcVar8,auStack_6b0,auStack_530);
        bVar7 = (byte)uStack_268 | bStack_238;
        func_0x00010b121af0(&pcStack_2c0);
        FUN_10b17dec8(auStack_530);
        func_0x00010b17dd64(auStack_358);
        FUN_10b1213b8(auStack_6b0);
      }
      else {
        bVar7 = 0;
      }
      func_0x00010b1aaac8();
LAB_10b1a7fdc:
      FUN_10b1a4918(auStack_4e0);
      func_0x00010b17dd64(auStack_748);
      FUN_10b19af84(auStack_6b0,*plVar10);
      if ((((ulong)ppcVar6[0xb1] & 1) == 0) &&
         (uVar1 = ppcVar6[0xbd] == (code *)plVar10[0x17], (bool)uVar1)) {
        lVar11 = *plVar10;
        if ((bVar7 & 1) == 0) {
          ppcVar6 = &pcStack_2c0;
          pcStack_2c0 = FUN_10b1a827c;
          ppuStack_2b8 = &PTR_DAT_110cc2eb8;
          FUN_10b1a08f8(lVar11 + 0x4a0,plVar10 + 0x15,&pcStack_2c0);
          func_0x00010b1aa748(ppuStack_2b8);
          FUN_10b20a8d4(*plVar10 + 0x5d0,plVar10[0x15],plVar10[0x16]);
        }
        else {
          pcStack_2c0 = (code *)((ulong)pcStack_2c0 & 0xffffffffffffff00);
          uStack_2b0 = 0;
          pcStack_2a8 = (code *)((ulong)pcStack_2a8 & 0xffffffff00000000);
          pcVar8 = ppcVar6[0x6f];
          ppcVar6 = (code **)(plVar10 + 0x15);
          FUN_10b19ada4(auStack_4e0,*ppcVar6,plVar10[0x16]);
          FUN_10b2026a0(&pcStack_2a0,pcVar8,auStack_4e0);
          lVar4 = lVar11 + 0x4a0;
          func_0x00010b1a546c(lVar4,ppcVar6);
          lVar5 = lVar4;
          while ((lVar9 = lVar11 + 0x4b0, lVar5 != lVar11 + 0x4b0 &&
                 (lVar9 = lVar5, *(long *)(lVar5 + 0x20) < plVar10[0x16]))) {
            func_0x00010b1ab164();
            func_0x000107c27be0();
          }
          while (uVar1 = lVar4 == lVar9, !(bool)uVar1) {
            lVar5 = lVar11 + 0x4a8;
            FUN_10b1a3a48(lVar5,lVar4);
            lVar4 = lVar5;
          }
          FUN_10b1a54dc(lVar11 + 0x4a8,lVar9,ppcVar6,&pcStack_2c0);
          func_0x00010b1ab164(plVar10[0x16]);
          FUN_10b1a3808(&pcStack_2c0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4e0);
        }
      }
      func_0x00010b1aaa40();
      func_0x00010b1aa28c(uStack_48);
      if ((bool)uVar1) break;
      ___stack_chk_fail();
LAB_10b1a813c:
      iVar2 = 0x137f40d0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        bVar7 = 0xe0;
        func_0x000107c2be10();
        bRam00000001137f40c8 = bVar7;
        ___cxa_guard_release(0x1137f40d0);
      }
    }
    return;
  }
  func_0x00010b1aaf38();
  bVar7 = 0;
  goto LAB_10b1a7fdc;
}



/* Entry: 10b1a827c; end: 10b1a829b;  */

void FUN_10b1a827c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b1a829c; end: 10b1a82bb;  */

void FUN_10b1a829c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1a0960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1a82bc; end: 10b1a82bf;  */

void FUN_10b1a82bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1a82c0; end: 10b1a8337;  */

undefined8 * FUN_10b1a82c0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b1aa568();
  puVar1 = (undefined8 *)(param_1 + 0x58);
  func_0x000107c278d0(puVar1,*(long *)(param_2 + 0x10) + 0x38);
  if (((ulong)puVar1 & 1) == 0) {
    **(undefined1 **)(unaff_x20 + 0x18) = 1;
  }
  else {
    puVar1 = *(undefined8 **)(unaff_x20 + 0x20);
    if ((*(byte *)(unaff_x19 + 2) & 1) != 0) {
      uVar4 = unaff_x19[1];
      uVar3 = *unaff_x19;
      if (unaff_x19[1] != 0) {
        do {
          func_0x00010897c270();
        } while (extraout_w10 != 0);
      }
      uStack_28 = puVar1[1];
      uStack_30 = *puVar1;
      puVar1[1] = uVar4;
      *puVar1 = uVar3;
      func_0x000107c27d78(&uStack_30);
      return puVar1;
    }
    lVar2 = puVar1[1];
    uVar3 = *puVar1;
    unaff_x19[1] = puVar1[1];
    *unaff_x19 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b1ab124();
  }
  return puVar1;
}



/* Entry: 10b1a8338; end: 10b1a835b;  */

void FUN_10b1a8338(void)

{
  return;
}



/* Entry: 10b1a835c; end: 10b1a83b7;  */

undefined8 FUN_10b1a835c(void)

{
  undefined8 uVar1;
  undefined8 auStack_30 [2];
  
  FUN_10b1a83b8(auStack_30);
  __ZNSt3__15mutex4lockEv();
  uVar1 = auStack_30[0];
  func_0x00010b195eac(auStack_30[0]);
  func_0x00010b1aa894();
  func_0x00010b1aa7d0();
  return uVar1;
}



/* Entry: 10b1a83b8; end: 10b1a8403;  */

void FUN_10b1a83b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10b1a8404; end: 10b1a85e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b1a8404(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long alStack_48 [5];
  
  alStack_48[3] = 0;
  alStack_48[4] = 0;
  alStack_48[1] = 0;
  alStack_48[2] = 0;
  FUN_10b195e24(&uStack_80,param_2,alStack_48 + 1);
  FUN_10b195e74(alStack_48 + 3,&uStack_80);
  func_0x00010b1960f8(&uStack_80);
  func_0x00010b1960f8(alStack_48 + 1);
  func_0x000107c27b48(alStack_48);
  func_0x000107c27b4c(&uStack_60,alStack_48[0]);
  lStack_70 = alStack_48[0];
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  alStack_48[0] = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_a0 = alStack_48[3] + 0x6b0;
  uStack_98 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_48[3];
  func_0x00010b195eac();
  if ((int)lVar1 == 0) {
    FUN_10b1a86a8(&lStack_a8,&uStack_80);
    lVar1 = lStack_a8;
    lStack_a8 = 0;
    lVar2 = *(long *)(alStack_48[3] + 0x6f8);
    *(long *)(alStack_48[3] + 0x6f8) = lVar1;
    if (lVar2 != 0) {
      func_0x00010b1aa32c();
      lVar1 = lStack_a8;
      lStack_a8 = 0;
      if (lVar1 != 0) {
        func_0x00010b1aa32c();
      }
    }
  }
  else {
    FUN_10b195e74(&lStack_90,alStack_48 + 3);
  }
  func_0x000107c2798c(&lStack_a0);
  if (lStack_90 != 0) {
    lStack_b8 = lStack_90;
    lStack_b0 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10 != 0);
    }
    FUN_10b1a85e4(&uStack_80,&lStack_b8);
    func_0x00010b1960f8(&lStack_b8);
  }
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010b1960f8(&lStack_90);
  lVar1 = lStack_70;
  lStack_70 = 0;
  if (lVar1 != 0) {
    func_0x00010b1aa32c();
  }
  func_0x000107c27b58(&uStack_60);
  lVar1 = alStack_48[0];
  alStack_48[0] = 0;
  if (lVar1 != 0) {
    func_0x00010b1aa32c();
  }
  func_0x00010b1aa9ac();
  return;
}



/* Entry: 10b1a85e4; end: 10b1a86a7;  */

void FUN_10b1a85e4(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long *extraout_x10;
  int extraout_w12;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *param_2;
  if (param_2[1] == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b1aa43c();
    } while (extraout_w12 != 0);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x10,0x10);
      if (bVar2) {
        *extraout_x10 = *extraout_x10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      uStack_40 = extraout_x8;
      uStack_38 = extraout_x9;
    } while (cVar1 != '\0');
  }
  FUN_10b1a877c(param_1,&uStack_40);
  func_0x00010b1aa848();
  func_0x00010b1aa7d0();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b1a86a8; end: 10b1a86e7;  */

void FUN_10b1a86a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b1ab1ac();
  func_0x00010b1aaff8();
  *param_1 = &PTR_FUN_110cc2ff8;
  uVar1 = *unaff_x19;
  param_1[2] = unaff_x19[1];
  param_1[1] = uVar1;
  uVar1 = unaff_x19[2];
  unaff_x19[2] = 0;
  param_1[3] = uVar1;
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10b1a86e8; end: 10b1a86eb;  */

undefined8 * FUN_10b1a86e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2ff8;
  func_0x000107c27b70(param_1 + 3);
  return param_1;
}



/* Entry: 10b1a86ec; end: 10b1a86ff;  */

void FUN_10b1a86ec(void)

{
  FUN_10b1a8750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a8700; end: 10b1a874f;  */

void FUN_10b1a8700(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  FUN_10b1a85e4(param_1 + 8,&uStack_30);
  func_0x00010b1aa89c();
  return;
}



/* Entry: 10b1a8750; end: 10b1a877b;  */

undefined8 * FUN_10b1a8750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2ff8;
  func_0x000107c27b70(param_1 + 3);
  return param_1;
}



/* Entry: 10b1a877c; end: 10b1a87cb;  */

void FUN_10b1a877c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  FUN_10b1a83b8(auStack_30,param_2);
  func_0x00010b1ab0b8();
  FUN_10b1a87cc();
  func_0x00010b1aa89c();
  (**(code **)*param_1)();
  return;
}



/* Entry: 10b1a87cc; end: 10b1a8807;  */

void FUN_10b1a87cc(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b1aa574();
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar1 = *unaff_x19;
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x19[1] = uVar3;
  *unaff_x19 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(param_1);
  return;
}



/* Entry: 10b1a8808; end: 10b1a8827;  */

void FUN_10b1a8808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b1a8828(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10b1a8828; end: 10b1a8a2f;  */

undefined1  [16] FUN_10b1a8828(long *param_1,ulong *param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  uVar9 = *param_2;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar4 = uVar8 - 1;
    if ((uVar8 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar5 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10b1a88dc;
          uVar5 = plVar7[1];
          if (uVar5 != uVar9) break;
          if (plVar7[2] == uVar9) {
            uVar3 = 0;
            goto LAB_10b1a8a04;
          }
        }
        if ((uVar8 & uVar4) == 0) {
          uVar5 = uVar5 & uVar4;
        }
        else if (uVar8 <= uVar5) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar2 * uVar8;
        }
      } while (uVar5 == unaff_x24);
    }
  }
LAB_10b1a88dc:
  lVar10 = *param_3;
  plVar1 = param_1 + 2;
  plVar7 = (long *)0xc0;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar9;
  plVar7[2] = lVar10;
  FUN_10b139e18(plVar7 + 3,param_4);
  lVar10 = *(long *)(param_4 + 0x80);
  lVar12 = *(long *)(param_4 + 0x98);
  lVar11 = *(long *)(param_4 + 0x90);
  plVar7[0x14] = *(long *)(param_4 + 0x88);
  plVar7[0x13] = lVar10;
  plVar7[0x16] = lVar12;
  plVar7[0x15] = lVar11;
  *(undefined1 *)(plVar7 + 0x17) = *(undefined1 *)(param_4 + 0xa0);
  func_0x00010b1ab06c();
  if ((uVar8 == 0) || ((float)lVar11 * (float)uVar8 < (float)lVar10)) {
    func_0x00010b1aad24(uVar8 << 1);
    FUN_10b1a5ee0(param_1);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar4 * uVar8;
      }
    }
  }
  lVar10 = *param_1;
  plVar6 = *(long **)(lVar10 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar7 = *plVar1;
    *plVar1 = (long)plVar7;
    *(long **)(lVar10 + unaff_x24 * 8) = plVar1;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar4 * uVar8;
      }
      *(long **)(lVar10 + uVar9 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  func_0x00010b1aa720();
  uVar3 = 1;
LAB_10b1a8a04:
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = plVar7;
  return auVar13;
}



/* Entry: 10b1a8a30; end: 10b1a8a9f;  */

void FUN_10b1a8a30(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_84 [4];
  undefined1 uStack_80;
  undefined8 uStack_7c;
  undefined1 uStack_74;
  undefined1 auStack_70 [80];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_10b202630(auStack_70,param_1 + 0x20);
  auStack_84[0] = 0;
  uStack_80 = 0;
  uStack_7c = *(undefined8 *)(param_1 + 0x3c);
  uStack_74 = 0;
  FUN_10b1f7590(uVar1,auStack_70,*(undefined4 *)(param_1 + 0x38),auStack_84,param_1 + 0x48);
  func_0x00010b121e00(auStack_70);
  return;
}



/* Entry: 10b1a8aa0; end: 10b1a8b2b;  */

void FUN_10b1a8aa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_DAT_110cc2f00;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar6 = param_2[3];
  uVar1 = param_2[2];
  param_1[5] = param_2[4];
  param_1[4] = uVar6;
  param_1[3] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  uVar1 = param_2[5];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 6);
  param_1[6] = uVar1;
  plVar2 = param_2 + 8;
  lVar3 = *plVar2;
  uVar1 = param_2[7];
  plVar4 = param_1 + 9;
  *plVar4 = lVar3;
  param_1[8] = uVar1;
  lVar5 = param_2[9];
  param_1[10] = lVar5;
  if (lVar5 != 0) {
    *(long **)(lVar3 + 0x10) = plVar4;
    param_2[7] = plVar2;
    *plVar2 = 0;
    param_2[9] = 0;
    return;
  }
  param_1[8] = plVar4;
  return;
}



/* Entry: 10b1a8b2c; end: 10b1a8b67;  */

void FUN_10b1a8b2c(void)

{
  func_0x00010b1aa574();
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010b1aad18();
  FUN_10b1a8b68();
  return;
}



/* Entry: 10b1a8b68; end: 10b1a8c37;  */

undefined8 FUN_10b1a8b68(long param_1)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar3;
  
  func_0x00010b1aa934();
  func_0x000107c27d0c();
  lVar2 = unaff_x19;
  __ZNSt3__15mutex4lockEv();
  if (*(long *)(unaff_x19 + 0x78) == param_1) {
    if (*(long *)(unaff_x19 + 0x70) != -1) {
      *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x70) + 1;
      uVar3 = 1;
      goto LAB_10b1a8c10;
    }
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    bVar1 = lVar2 < *unaff_x21;
    while( true ) {
      if (!bVar1) break;
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_10b1a8c08;
      lVar2 = unaff_x19 + 0x40;
      func_0x000104c38e48(lVar2,&stack0xffffffffffffffc0);
      bVar1 = (int)lVar2 == 0;
    }
    if (*(long *)(unaff_x19 + 0x70) == 0) {
LAB_10b1a8c08:
      uVar3 = 1;
      *(undefined8 *)(unaff_x19 + 0x70) = 1;
      *(long *)(unaff_x19 + 0x78) = param_1;
      goto LAB_10b1a8c10;
    }
  }
  uVar3 = 0;
LAB_10b1a8c10:
  func_0x00010b1aa894();
  return uVar3;
}



/* Entry: 10b1a8c38; end: 10b1a8c3b;  */

void FUN_10b1a8c38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a8c3c; end: 10b1a8c4f;  */

void FUN_10b1a8c3c(void)

{
  FUN_10b1a8dfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a8c50; end: 10b1a8c5b;  */

void FUN_10b1a8c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1aa504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1a8c5c; end: 10b1a8c6f;  */

void FUN_10b1a8c5c(void)

{
  FUN_10b1a8dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a8c70; end: 10b1a8c73;  */

void FUN_10b1a8c70(void)

{
  return;
}



/* Entry: 10b1a8c74; end: 10b1a8d7b;  */

void FUN_10b1a8c74(long param_1,int param_2,undefined8 param_3)

{
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char cStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_78 [72];
  
  func_0x00010b1aa928();
  func_0x000107c278b8(&uStack_d8);
  func_0x000107c27f70(&uStack_f8,param_3);
  uStack_b0 = uStack_c8;
  lStack_a8 = (long)param_2;
  uStack_b8 = uStack_d0;
  uStack_c0 = uStack_d8;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  uStack_88 = cStack_e0 == '\x01';
  if ((bool)uStack_88) {
    uStack_98 = uStack_f0;
    uStack_a0 = uStack_f8;
    uStack_90 = uStack_e8;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
  }
  func_0x0001052b8c70(auStack_78,&uStack_c0);
  FUN_10b14bc84(param_1 + 0x18,auStack_78);
  func_0x0001052a038c(auStack_78);
  func_0x0001052a03ac(&uStack_c0);
  func_0x000107c279a4(&uStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d8);
  return;
}



/* Entry: 10b1a8d7c; end: 10b1a8dbf;  */

void FUN_10b1a8d7c(long param_1)

{
  undefined1 auStack_68 [64];
  undefined1 uStack_28;
  
  auStack_68[0] = 0;
  uStack_28 = 0;
  FUN_10b14bc84(param_1 + 0x18,auStack_68);
  func_0x0001052a038c(auStack_68);
  return;
}



/* Entry: 10b1a8dc0; end: 10b1a8dfb;  */

undefined8 * FUN_10b1a8dc0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc2f78;
  FUN_10b14bab0(param_1 + 3);
  func_0x00010b129c40(param_1 + 1);
  return param_1;
}



/* Entry: 10b1a8dfc; end: 10b1a8e07;  */

void FUN_10b1a8dfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a8e08; end: 10b1a8e2b;  */

void FUN_10b1a8e08(long param_1)

{
  func_0x00010b1aac80();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1a8e2c; end: 10b1a8e5f;  */

void FUN_10b1a8e2c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [48];
  undefined8 uStack_18;
  
  func_0x00010b1aa2f0();
  func_0x00010b1aaab0();
  puVar1 = auStack_48;
  func_0x000107c281f0();
  func_0x00010b1aa28c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 8) != 0) {
    func_0x000107c281f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1a8e60; end: 10b1a8e87;  */

void FUN_10b1a8e60(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c281f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1a8e88; end: 10b1a8e8b;  */

void FUN_10b1a8e88(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}


