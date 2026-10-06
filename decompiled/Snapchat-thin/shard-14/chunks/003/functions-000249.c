/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b167af4; end: 10b167b8f;  */

undefined8 * FUN_10b167af4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf2d0;
  FUN_10b166558(param_1 + 0x24);
  func_0x00010529fe04(param_1 + 0x15);
  FUN_10b12878c(param_1 + 0x13);
  func_0x00010b1759dc();
  func_0x000107c279a4(param_1 + 0xb);
  FUN_10b166c8c(param_1 + 9);
  func_0x00010539eeb0(param_1 + 7);
  FUN_10b166558(param_1 + 5);
  FUN_10b166558(param_1 + 3);
  func_0x00010b167b6c(param_1 + 1);
  return param_1;
}



/* Entry: 10b167b90; end: 10b167d57;  */

void FUN_10b167b90(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 extraout_w8;
  long lVar5;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  int extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_var;
  undefined8 *unaff_x20;
  undefined8 *unaff_x25;
  undefined8 uVar6;
  
  func_0x00010b1778a0();
  func_0x00010b175674();
  puVar3 = (undefined8 *)0xa8;
  __Znwm();
  *puVar3 = FUN_10b174028;
  puVar3[1] = FUN_10b1740c8;
  FUN_10b14be30(puVar3 + 2);
  func_0x00010b1758c0();
  FUN_10b14bde4();
  puVar4 = unaff_x20;
  FUN_10b15b3d4();
  if ((int)puVar4 == 0) {
    lVar5 = unaff_x20[1];
    uVar6 = *unaff_x20;
    puVar3[0x13] = unaff_x20[1];
    puVar3[0x12] = uVar6;
    if (lVar5 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    puVar4 = puVar3 + 0x12;
    FUN_10b15b3d4();
    if (((ulong)puVar4 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0x14) = 0;
      func_0x00010b1751f0();
      lVar5 = puVar3[0x12];
      if ((*(byte *)(lVar5 + 0x90) & 1) != 0) {
        func_0x00010b175068();
        func_0x00010b174f14(*puVar3);
        return;
      }
      func_0x00010b177020();
      if ((bool)in_CY) {
        lVar5 = *(long *)(lVar5 + 0x98);
        func_0x00010b174a38();
        if (CONCAT44(extraout_var,extraout_w10_00) != 0) {
          func_0x00010552fc6c();
LAB_10b167d00:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b167d04);
          (*pcVar2)();
        }
        func_0x00010b174770(extraout_x8 - lVar5);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b167d00;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b1747c8();
        func_0x00010b177dec();
        if (lVar5 != 0) {
          func_0x00010b175554();
        }
      }
      else {
        *unaff_x25 = puVar3;
      }
      func_0x00010b177de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    FUN_10b15b400();
    func_0x00010b175f84();
    func_0x00010b17613c();
  }
  else {
    FUN_10b15b400();
    func_0x00010b175f84();
  }
  func_0x00010b1750bc();
  *(undefined1 *)(puVar3 + 0x14) = extraout_w8;
  func_0x00010b174aa8();
  if ((bool)in_ZR) {
    func_0x00010b174ffc();
  }
  else {
    func_0x00010b174d90();
    func_0x00010b174ff0();
    func_0x00010b175084();
  }
  func_0x00010b174f7c();
  func_0x00010b174f24();
  return;
}



/* Entry: 10b167d58; end: 10b167d8f;  */

void FUN_10b167d58(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b175868();
  return;
}



/* Entry: 10b167d90; end: 10b167dd7;  */

void FUN_10b167d90(long param_1)

{
  undefined1 auStack_88 [104];
  
  func_0x0001052adc5c(auStack_88,*(undefined8 *)(param_1 + 0x10));
  func_0x00010b175078();
  FUN_10b167dd8();
  func_0x0001052ade48(auStack_88);
  return;
}



/* Entry: 10b167dd8; end: 10b167efb;  */

void FUN_10b167dd8(void)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  func_0x0001052ad910();
  func_0x00010b17522c();
  func_0x0001052ad944();
  func_0x00010b176c18();
  func_0x00010b175868();
  __ZNSt3__15mutex4lockEv(uStack_40 + 0xa0);
  if (*(char *)(uStack_40 + 0x68) == '\x01') {
    cVar1 = *(char *)(uStack_40 + 0x60);
    if (cVar1 == *(char *)(unaff_x19 + 0x60)) {
      if (cVar1 != '\0') {
        func_0x00010b1751c8();
        FUN_10b11ffec();
        uVar2 = *(undefined1 *)(unaff_x19 + 0x14);
        *(undefined4 *)(uStack_40 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
        *(undefined1 *)(uStack_40 + 0x14) = uVar2;
        FUN_10b122234(uStack_40 + 0x18,unaff_x19 + 0x18);
        uVar5 = *(undefined8 *)(unaff_x19 + 0x51);
        uVar4 = *(undefined8 *)(unaff_x19 + 0x49);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
        *(undefined8 *)(uStack_40 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
        *(undefined8 *)(uStack_40 + 0x40) = uVar6;
        *(undefined8 *)(uStack_40 + 0x51) = uVar5;
        *(undefined8 *)(uStack_40 + 0x49) = uVar4;
      }
    }
    else if (cVar1 == '\0') {
      func_0x00010b1751c8();
      func_0x0001052adddc();
    }
    else {
      func_0x0001052ade68(uStack_40);
      *(undefined1 *)(uStack_40 + 0x60) = 0;
    }
  }
  else {
    func_0x00010b1751c8();
    func_0x0001052add9c();
    *(undefined1 *)(uStack_40 + 0x68) = 1;
  }
  lVar3 = *(long *)(uStack_40 + 0xe8);
  *(undefined8 *)(uStack_40 + 0xe8) = 0;
  __ZNSt3__15mutex6unlockEv(uStack_40 + 0xa0);
  if (lVar3 == 0) {
    func_0x00010b17773c();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b176c80();
  return;
}



/* Entry: 10b167efc; end: 10b167f1b;  */

void FUN_10b167efc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b167f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b167f1c; end: 10b167f1f;  */

void FUN_10b167f1c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b167f20; end: 10b167f67;  */

void FUN_10b167f20(void)

{
  long unaff_x19;
  
  func_0x00010b1755f4();
  FUN_10b166aac();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10b167f68; end: 10b1683e7;  */

void FUN_10b167f68(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *plVar11;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar12;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *unaff_x28;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((bRam00000001137f4090 & 1) == 0) {
    iVar5 = 0x137f4090;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      puVar9 = (undefined8 *)0x68;
      __Znwm();
      *puVar9 = 0x32aaaba7;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      uVar18 = 0;
      uVar19 = 0;
      puVar9[2] = 0;
      puVar9[1] = 0;
      puVar9[4] = 0;
      puVar9[3] = 0;
      func_0x00010b176418();
      puVar9[10] = uVar19;
      puVar9[9] = uVar18;
      *(undefined4 *)(puVar9 + 0xc) = 0x3f800000;
      puRam00000001137f4088 = puVar9;
      ___cxa_guard_release(0x1137f4090);
    }
  }
  puVar9 = puRam00000001137f4088;
  plVar11 = puRam00000001137f4088 + 8;
  puStack_90 = puRam00000001137f4088;
  uStack_88 = 1;
  __ZNSt3__15mutex4lockEv(puRam00000001137f4088);
  lStack_a0 = 0;
  lStack_98 = 0;
  plVar6 = puVar9 + 0xb;
  plStack_80 = plVar11;
  func_0x000107c278c4(plVar6,param_2);
  plVar17 = (long *)puVar9[9];
  plVar7 = plVar6;
  if (plVar17 != (long *)0x0) {
    uVar16 = (long)plVar17 - 1;
    if (((ulong)plVar17 & uVar16) == 0) {
      unaff_x28 = (long *)(uVar16 & (ulong)plVar6);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar6 - (long)plVar17 < 0;
      unaff_x28 = plVar6;
      if (plVar17 <= plVar6) {
        uVar1 = 0;
        if (plVar17 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar17;
        }
        unaff_x28 = (long *)((long)plVar6 - uVar1 * (long)plVar17);
      }
    }
    plVar14 = *(long **)(*plVar11 + (long)unaff_x28 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10b16806c;
          plVar10 = (long *)plVar14[1];
          in_NG = (long)plVar10 - (long)plVar6 < 0;
          if (plVar10 != plVar6) break;
          plVar7 = plVar14 + 2;
          func_0x000107c278d0(plVar7,param_2);
          if (((ulong)plVar7 & 1) != 0) goto LAB_10b1682c0;
        }
        if (((ulong)plVar17 & uVar16) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar16);
        }
        else if (plVar17 <= plVar10) {
          uVar1 = 0;
          if (plVar17 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar17;
          }
          plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar17);
        }
        in_NG = (long)plVar10 - (long)unaff_x28 < 0;
      } while (plVar10 == unaff_x28);
    }
  }
LAB_10b16806c:
  func_0x00010b1773a8();
  plVar14 = puVar9 + 10;
  uStack_68 = 0;
  plVar10 = plVar7 + 2;
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  plStack_78 = plVar7;
  plStack_70 = plVar14;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar10,param_2);
  plVar7[6] = lStack_98;
  plVar7[5] = lStack_a0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  func_0x00010b177b10(puVar9[0xb]);
  if ((plVar17 == (long *)0x0) || (func_0x00010b177e98(), (bool)in_NG)) {
    bVar3 = (long *)0x2 < plVar17;
    bVar4 = plVar17 == (long *)0x3;
    func_0x00010b17519c((long)plVar17 << 1);
    plVar15 = extraout_x8;
    if (!bVar3 || bVar4) {
      plVar15 = extraout_x9;
    }
    if ((long)plVar15 - 1U == 0) {
      plVar15 = (long *)0x2;
    }
    else if (((ulong)plVar15 & (long)plVar15 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar10 = plVar15;
    }
    plVar17 = (long *)puVar9[9];
    if (plVar17 < plVar15) {
LAB_10b168110:
      if ((ulong)plVar15 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1683a0);
        (*pcVar2)();
      }
      lVar8 = (long)plVar15 << 3;
      __Znwm(lVar8);
      FUN_10b1683e8(plVar11,lVar8);
      plVar17 = (long *)0x0;
      puVar9[9] = plVar15;
      while (plVar15 != plVar17) {
        func_0x00010b177e48();
        plVar17 = extraout_x9_00;
      }
      plVar17 = plVar15;
      if (*plVar14 != 0) {
        func_0x00010b177e34();
        func_0x00010b177df8();
        lVar8 = extraout_x8_00;
        uVar16 = extraout_x9_01;
        plVar10 = extraout_x10;
        plVar12 = extraout_x11;
        while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
          plVar13 = (long *)plVar10[1];
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar16);
          }
          else if (plVar15 <= plVar13) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar13 / (ulong)plVar15;
            }
            plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar15);
          }
          if (plVar13 != plVar12) {
            if (*(long *)(lVar8 + (long)plVar13 * 8) == 0) {
              func_0x00010b177db4();
              lVar8 = extraout_x8_02;
              uVar16 = extraout_x9_03;
              plVar10 = extraout_x12;
              plVar12 = extraout_x11_01;
            }
            else {
              func_0x00010b174b5c();
              lVar8 = extraout_x8_01;
              uVar16 = extraout_x9_02;
              plVar10 = extraout_x10_00;
              plVar12 = extraout_x11_00;
            }
          }
        }
      }
    }
    else if (plVar15 < plVar17) {
      func_0x00010b177e60((float)(ulong)puVar9[0xb],*(undefined4 *)(puVar9 + 0xc));
      if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010b174b3c();
      }
      if (plVar15 <= plVar10) {
        plVar15 = plVar10;
      }
      if (plVar15 < plVar17) {
        if (plVar15 != (long *)0x0) goto LAB_10b168110;
        FUN_10b1683e8(plVar11,0);
        puVar9[9] = 0;
        plVar17 = (long *)0x0;
      }
      else {
        plVar17 = (long *)puVar9[9];
      }
    }
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      unaff_x28 = (long *)((long)plVar17 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x28 = plVar6;
      if (plVar17 <= plVar6) {
        uVar16 = 0;
        if (plVar17 != (long *)0x0) {
          uVar16 = (ulong)plVar6 / (ulong)plVar17;
        }
        unaff_x28 = (long *)((long)plVar6 - uVar16 * (long)plVar17);
      }
    }
  }
  lVar8 = *plVar11;
  plVar11 = *(long **)(lVar8 + (long)unaff_x28 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar7 = *plVar14;
    *plVar14 = (long)plVar7;
    *(long **)(lVar8 + (long)unaff_x28 * 8) = plVar14;
    if (*plVar7 != 0) {
      plVar11 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar11) {
        uVar16 = 0;
        if (plVar17 != (long *)0x0) {
          uVar16 = (ulong)plVar11 / (ulong)plVar17;
        }
        plVar11 = (long *)((long)plVar11 - uVar16 * (long)plVar17);
      }
      *(long **)(lVar8 + (long)plVar11 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar11;
    *plVar11 = (long)plVar7;
  }
  plStack_78 = (long *)0x0;
  puVar9[0xb] = puVar9[0xb] + 1;
  FUN_10b168400(&plStack_78);
  plVar14 = plVar7;
LAB_10b1682c0:
  func_0x00010b129550(&lStack_a0);
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = plVar14[6];
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar8;
    if (lVar8 != 0) {
      lVar8 = plVar14[5];
      *param_1 = lVar8;
      if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x160) & 1) == 0)) goto LAB_10b168318;
    }
  }
  FUN_10b12878c(param_1);
  (*(code *)*param_3)(param_1,param_3);
  func_0x00010b129518(plVar14 + 5,param_1);
LAB_10b168318:
  func_0x000107c2798c(&puStack_90);
  return;
}



/* Entry: 10b1683e8; end: 10b1683ff;  */

void FUN_10b1683e8(long *param_1,long param_2)

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



/* Entry: 10b168400; end: 10b168447;  */

void FUN_10b168400(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b176bec();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x00010b129550(unaff_x20 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20 + 0x10);
    }
    __ZdlPv();
  }
  return;
}



/* Entry: 10b168448; end: 10b168563;  */

void FUN_10b168448(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined8 in_x4;
  undefined8 extraout_x8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  lVar3 = param_1;
  func_0x000107c350b4();
  uStack_38 = extraout_x8;
  FUN_10b1ab974(&uStack_80,*(undefined8 *)(lVar3 + 0x10));
  FUN_10b189580(&uStack_90,*(undefined8 *)(lVar3 + 0x10));
  FUN_10b13dca0(auStack_a0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b177780();
  func_0x00010b176708();
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_10b153254(param_1 + 0x18,auStack_a0,uVar1,uVar2,in_x4,&uStack_60,&uStack_70);
  func_0x00010539e8a8(&uStack_70);
  FUN_10b120a3c(&uStack_60);
  func_0x00010b175fbc();
  func_0x00010b176b94();
  func_0x00010b12487c(auStack_a0);
  func_0x00010539e8a8(&uStack_90);
  func_0x00010b176c90();
  func_0x000107c350b0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010539e8a8(&uStack_70);
  FUN_10b120a3c(&uStack_60);
  func_0x00010b176978();
  func_0x00010b176b94();
  func_0x00010b12487c(auStack_a0);
  func_0x00010539e8a8(&uStack_90);
  func_0x00010b176c90();
  func_0x00010b174f0c();
  return;
}



/* Entry: 10b168564; end: 10b168587;  */

void FUN_10b168564(void)

{
  return;
}



/* Entry: 10b168588; end: 10b168613;  */

void FUN_10b168588(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  FUN_10b189580(auStack_40,*puVar1);
  uStack_48 = 0;
  FUN_10b1141c0(auStack_58,puVar1 + 4);
  func_0x00010b177d9c();
  FUN_10b114210();
  FUN_10b120a3c(auStack_58);
  func_0x00010539e8a8(auStack_40);
  return;
}



/* Entry: 10b168614; end: 10b168633;  */

void FUN_10b168614(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1531f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b168634; end: 10b168637;  */

void FUN_10b168634(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b168638; end: 10b16865b;  */

void FUN_10b168638(void)

{
  func_0x00010b175110();
  FUN_10b16865c();
  func_0x00010b174c70();
  func_0x00010b176cf8();
  return;
}



/* Entry: 10b16865c; end: 10b16867f;  */

void FUN_10b16865c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b160560();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b168680; end: 10b1687f7;  */

void FUN_10b168680(long param_1)

{
  undefined1 in_ZR;
  undefined8 in_x4;
  undefined8 extraout_x8;
  long lVar1;
  int extraout_w10;
  long unaff_x20;
  long *plVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  func_0x000107c350b4();
  plVar2 = *(long **)(param_1 + 0x10);
  uStack_38 = extraout_x8;
  FUN_10b13dca0(auStack_80);
  lVar1 = *plVar2;
  uStack_88 = *(undefined8 *)(lVar1 + 0x20);
  uStack_90 = *(undefined8 *)(lVar1 + 0x18);
  if (*(long *)(lVar1 + 0x20) != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*(long *)plVar2[4] + 0x70))(auStack_a0);
  FUN_10b1ab974(&uStack_b0,plVar2 + 6);
  FUN_10b189580(&uStack_c0,plVar2 + 6);
  func_0x00010b177780();
  func_0x00010b176708();
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_10b153254(unaff_x20 + 0x18,auStack_80,&uStack_90,plVar2 + 2,in_x4,&uStack_60,&uStack_70);
  func_0x00010539e8a8(&uStack_70);
  FUN_10b120a3c(&uStack_60);
  func_0x00010b175fbc();
  func_0x00010b176b94();
  func_0x00010539e8a8(&uStack_c0);
  func_0x00010b1762fc();
  func_0x0001052a9ed0(auStack_a0);
  func_0x0001052a1398(&uStack_90);
  func_0x00010b12487c(auStack_80);
  func_0x000107c350b0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010539e8a8(&uStack_70);
    FUN_10b120a3c(&uStack_60);
    func_0x00010b176978();
    func_0x00010b176b94();
    func_0x00010539e8a8(&uStack_c0);
    func_0x00010b1762fc();
    func_0x0001052a9ed0(auStack_a0);
    func_0x0001052a1398(&uStack_90);
    func_0x00010b12487c(auStack_80);
    do {
      func_0x00010b174f0c();
    } while( true );
  }
  return;
}



/* Entry: 10b1687f8; end: 10b168817;  */

void FUN_10b1687f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b15321c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b168818; end: 10b16881f;  */

void FUN_10b168818(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b168820; end: 10b168833;  */

void FUN_10b168820(void)

{
  FUN_10b168878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b168834; end: 10b168877;  */

void FUN_10b168834(void)

{
  long unaff_x19;
  
  func_0x00010b1777a8();
  if (*(char *)(unaff_x19 + 0x90) == '\x01') {
    if (*(char *)(unaff_x19 + 0x88) == '\x01') {
      FUN_10b1609c8();
    }
    else {
      __ZNSt13exception_ptrD1Ev(unaff_x19 + 0x58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b168878; end: 10b168887;  */

void FUN_10b168878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b168888; end: 10b1688bf;  */

undefined8 FUN_10b168888(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010b17494c(*(undefined8 *)(param_1 + 0xa8));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b1688c0; end: 10b168ba7;  */

void FUN_10b1688c0(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [8];
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  uStack_e0 = param_2;
  lStack_d8 = param_3;
  func_0x00010b1751f0();
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_10b160b04(&lStack_60,&uStack_e0,&uStack_70);
  FUN_10b160b30(&uStack_50,&lStack_60);
  func_0x00010b1772a0();
  func_0x00010b1609f4(&uStack_70);
  uVar1 = uStack_50;
  lStack_60 = uStack_50 + 0x68;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  uStack_80 = uVar1;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_01 != 0);
  }
  while (uVar3 = uVar1, FUN_10b168888(), (uVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar1 + 0x38,&lStack_60);
  }
  func_0x00010b1609f4(&uStack_80);
  if (*(long *)(uVar1 + 0xa8) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b168a90);
    (*pcVar2)();
  }
  FUN_10b160c44(auStack_b8,uVar1);
  func_0x000107c2798c(&lStack_60);
  func_0x00010b1609f4(&uStack_50);
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x78) == '\x01') {
    if (*(char *)(lVar4 + 0x70) == '\x01') {
      func_0x00010b175668();
      FUN_10b160be8();
    }
    else {
      func_0x00010b1776e0();
      func_0x00010b175668();
      FUN_10b160c44();
      *(undefined1 *)(lVar4 + 0x70) = 1;
    }
  }
  else {
    func_0x00010b175668();
    FUN_10b160c44();
    *(undefined1 *)(lVar4 + 0x70) = 1;
    *(undefined1 *)(lVar4 + 0x78) = 1;
  }
  func_0x00010b1609c8(auStack_b8);
  lVar4 = *param_1;
  puVar5 = *(undefined8 **)(lVar4 + 0x80);
  uStack_c0 = *(undefined8 *)(lVar4 + 0x90);
  puVar6 = *(undefined8 **)(lVar4 + 0x88);
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  puStack_d0 = puVar5;
  puStack_c8 = puVar6;
  func_0x00010b175068();
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    (**(code **)*puVar5)();
  }
  func_0x00010b1767c4();
  func_0x00010b1609f4(&uStack_e0);
  func_0x00010b176c88();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b168ba8; end: 10b168bab;  */

undefined8 * FUN_10b168ba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbfee0;
  func_0x00010b168c30(param_1 + 1);
  return param_1;
}



/* Entry: 10b168bac; end: 10b168bbf;  */

void FUN_10b168bac(void)

{
  FUN_10b168c04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b168bc0; end: 10b168c03;  */

void FUN_10b168bc0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b1688c0(param_1 + 8);
  func_0x00010b175878();
  return;
}



/* Entry: 10b168c04; end: 10b168c4f;  */

undefined8 * FUN_10b168c04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbfee0;
  func_0x00010b168c30(param_1 + 1);
  return param_1;
}



/* Entry: 10b168c50; end: 10b168cab;  */

void FUN_10b168c50(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x000107c350b4();
  func_0x000107c350e4();
  FUN_10b168cac();
  FUN_10b168cfc(uStack_30);
  func_0x000107c350b8();
  func_0x00010b168d68();
  func_0x000107c350b0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b175048();
  func_0x00010b168d68();
  func_0x00010b174f0c();
  func_0x00010b175f04();
  FUN_10b168ccc();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b168cac; end: 10b168ccb;  */

void FUN_10b168cac(void)

{
  func_0x00010b175f04();
  FUN_10b168ccc();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b168ccc; end: 10b168cfb;  */

undefined8 * FUN_10b168ccc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x92492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc0760;
  param_1[1] = 0;
  FUN_10b17f70c(param_1 + 3);
  return param_1;
}



/* Entry: 10b168cfc; end: 10b168d3b;  */

undefined8 * FUN_10b168cfc(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc0760;
  param_1[1] = 0;
  FUN_10b17f70c(param_1 + 3);
  return param_1;
}



/* Entry: 10b168d3c; end: 10b168d3f;  */

void FUN_10b168d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0760;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b168d40; end: 10b168d53;  */

void FUN_10b168d40(void)

{
  func_0x00010b168d5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b168d54; end: 10b168d77;  */

void FUN_10b168d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b168d78; end: 10b168dcf;  */

void FUN_10b168d78(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b168dd0; end: 10b168def;  */

void FUN_10b168dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvE9set_valueEv_1103468a8)(param_1 + 0x10);
  return;
}



/* Entry: 10b168df0; end: 10b168e2b;  */

undefined8 * FUN_10b168df0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  puVar2 = (undefined8 *)0x0;
  func_0x00010527822c();
  func_0x00010b174c44();
  func_0x00010b174c54();
  FUN_10b145278();
  func_0x00010b17522c();
  FUN_10b1452a0();
  func_0x00010b17554c();
  func_0x00010b175698();
  func_0x00010b1754fc();
  func_0x00010b1750c8();
  FUN_10b168ec4();
  func_0x00010b174894();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b174cb4();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b175564();
  return puVar2;
}



/* Entry: 10b168e2c; end: 10b168ec3;  */

void FUN_10b168e2c(void)

{
  long unaff_x19;
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  FUN_10b145278();
  func_0x00010b17522c();
  FUN_10b1452a0();
  func_0x00010b17554c();
  func_0x00010b175698();
  func_0x00010b1754fc();
  func_0x00010b1750c8();
  FUN_10b168ec4();
  func_0x00010b174894();
  if (unaff_x19 == 0) {
    func_0x00010b174cb4();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b175564();
  return;
}



/* Entry: 10b168ec4; end: 10b168ed3;  */

long FUN_10b168ec4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x10) == '\x01') {
    func_0x00010b144014(lVar1);
  }
  else {
    func_0x00010b176f18(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 10b168ed4; end: 10b168f3b;  */

long FUN_10b168ed4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010b144014(param_1);
  }
  else {
    func_0x00010b176f18();
  }
  return param_1;
}



/* Entry: 10b168f3c; end: 10b168f5f;  */

void FUN_10b168f3c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b145244();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b168f60; end: 10b168f83;  */

void FUN_10b168f60(void)

{
  func_0x00010b175110();
  FUN_10b168f3c();
  func_0x00010b174c70();
  func_0x00010b176cf8();
  return;
}



/* Entry: 10b168f84; end: 10b168f9f;  */

void FUN_10b168f84(long *param_1,long param_2)

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



/* Entry: 10b168fa0; end: 10b168fb3;  */

void FUN_10b168fa0(void)

{
  FUN_10b169000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b168fb4; end: 10b168fff;  */

void FUN_10b168fb4(long param_1)

{
  func_0x000107c281bc(param_1 + 0x80);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(char *)(param_1 + 0x70) == '\x01') {
      FUN_10b1616c4();
    }
    else {
      __ZNSt13exception_ptrD1Ev(param_1 + 0x58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b169000; end: 10b16900f;  */

void FUN_10b169000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b169010; end: 10b169047;  */

undefined8 FUN_10b169010(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x00010b17494c(*(undefined8 *)(param_1 + 0x90));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b169048; end: 10b16932f;  */

void FUN_10b169048(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  uStack_c8 = param_2;
  lStack_c0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  uStack_b8 = param_2;
  lStack_b0 = param_3;
  func_0x00010b1751f0();
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10b161a04(&lStack_50,&uStack_b8,&uStack_60);
  FUN_10b161a30(&uStack_40,&lStack_50);
  FUN_10b1618e4(&lStack_50);
  FUN_10b1618e4(&uStack_60);
  uVar1 = uStack_40;
  lStack_50 = uStack_40 + 0x50;
  uStack_48 = 1;
  __ZNSt3__15mutex4lockEv();
  uStack_70 = uVar1;
  lStack_68 = lStack_38;
  if (lStack_38 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_01 != 0);
  }
  while (uVar3 = uVar1, FUN_10b169010(), (uVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar1 + 0x20,&lStack_50);
  }
  FUN_10b1618e4(&uStack_70);
  if (*(long *)(uVar1 + 0x90) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_78);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_78);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b169214);
    (*pcVar2)();
  }
  FUN_10b163074(auStack_90,uVar1);
  func_0x000107c2798c(&lStack_50);
  func_0x00010b176558();
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x60) == '\x01') {
    if (*(char *)(lVar4 + 0x58) == '\x01') {
      func_0x00010b17649c();
      FUN_10b162d30();
    }
    else {
      func_0x00010b1776e0();
      func_0x00010b17649c();
      FUN_10b163074();
      *(undefined1 *)(lVar4 + 0x58) = 1;
    }
  }
  else {
    func_0x00010b17649c();
    FUN_10b163074();
    *(undefined1 *)(lVar4 + 0x58) = 1;
    *(undefined1 *)(lVar4 + 0x60) = 1;
  }
  func_0x00010b1757b4();
  lVar4 = *param_1;
  puVar5 = *(undefined8 **)(lVar4 + 0x68);
  uStack_98 = *(undefined8 *)(lVar4 + 0x78);
  puVar6 = *(undefined8 **)(lVar4 + 0x70);
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  puStack_a8 = puVar5;
  puStack_a0 = puVar6;
  func_0x00010b175068();
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    (**(code **)*puVar5)();
  }
  func_0x000107c281bc(&puStack_a8);
  FUN_10b1618e4(&uStack_b8);
  FUN_10b1618e4(&uStack_c8);
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b169330; end: 10b169333;  */

undefined8 * FUN_10b169330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbff98;
  func_0x00010b1693bc(param_1 + 1);
  return param_1;
}



/* Entry: 10b169334; end: 10b169347;  */

void FUN_10b169334(void)

{
  FUN_10b169390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b169348; end: 10b16938f;  */

void FUN_10b169348(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b169048(param_1 + 8);
  FUN_10b1618e4(auStack_30);
  return;
}



/* Entry: 10b169390; end: 10b1693db;  */

undefined8 * FUN_10b169390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbff98;
  func_0x00010b1693bc(param_1 + 1);
  return param_1;
}



/* Entry: 10b1693dc; end: 10b169417;  */

void FUN_10b1693dc(undefined8 *param_1,long param_2)

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
      func_0x00010b174e00();
    } while (extraout_w13 != 0);
    do {
      func_0x00010b174e00();
      param_1 = extraout_x8;
      uVar1 = extraout_x9;
      uVar2 = extraout_x10;
    } while (extraout_w13_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x00010b175698();
  return;
}



/* Entry: 10b169418; end: 10b169443;  */

void FUN_10b169418(void)

{
  FUN_10b168f3c();
  func_0x00010b1751c8();
  FUN_10b14579c();
  func_0x00010b177c6c();
  return;
}



/* Entry: 10b169444; end: 10b169527;  */

long FUN_10b169444(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  ulong unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x00010b176cc0();
  func_0x00010b17515c();
  FUN_10b1695d4();
  lVar5 = 0;
  uVar3 = param_2 >> 7;
  uVar6 = unaff_x19[3];
  while( true ) {
    uVar3 = uVar3 & uVar6;
    uVar7 = *(ulong *)(*unaff_x19 + uVar3);
    uVar4 = uVar7 ^ (param_2 & 0x7f) * 0x101010101010101;
    for (uVar4 = uVar4 + 0xfefefefefefefeff & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar2 = unaff_x20;
      FUN_10b169604();
      if ((uVar2 & 1) != 0) {
        return *unaff_x19 + (uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar6);
      }
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar3 = lVar5 + uVar3;
  }
  return *unaff_x19 + unaff_x19[3];
}



/* Entry: 10b169528; end: 10b1695d3;  */

void FUN_10b169528(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)(param_2 + 0x30);
  if (lVar4 != *plVar3) {
    func_0x00010b176bb4();
    FUN_10b160f34();
    func_0x00010b9a09e0(lVar4,0,*plVar3);
    lVar1 = *plVar3;
    *plVar3 = lVar4;
    FUN_10b160fd0(lVar1);
    if (*(long *)(*plVar3 + 0x18) == 0) {
      FUN_10b169630(param_2 + 0x38,plVar3);
    }
  }
  func_0x00010b1759ec();
  uVar2 = 0;
  if (*plVar3 != 0) {
    do {
      func_0x00010b175450();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 10b1695d4; end: 10b169603;  */

void FUN_10b1695d4(long param_1)

{
  long lVar1;
  long lVar2;
  char in_NG;
  char in_OV;
  long extraout_x8;
  long extraout_x10;
  long extraout_x11;
  
  func_0x00010b175174();
  lVar1 = extraout_x11;
  lVar2 = extraout_x10;
  if (in_NG == in_OV) {
    lVar1 = extraout_x8;
    lVar2 = param_1;
  }
  func_0x000107c278c8(lVar2,lVar2 + lVar1);
  func_0x00010b177760();
  return;
}



/* Entry: 10b169604; end: 10b16962f;  */

bool FUN_10b169604(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if ((long)uVar4 < 0) {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
  }
  uStack_18 = param_2[1];
  puStack_20 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_20 = param_2;
  }
  iVar1 = (int)&puStack_20;
  if (uStack_18 == uVar4) {
    func_0x000100067218(&puStack_20,puVar3,uVar4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10b169630; end: 10b169673;  */

long * FUN_10b169630(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b175450();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_10b160fd0();
  }
  return param_1;
}



/* Entry: 10b169674; end: 10b1697d3;  */

void FUN_10b169674(long *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 *unaff_x19;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  char cStack_c8;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  
  func_0x000107c350b4();
  lVar5 = *(long *)(param_2 + 0x10);
  uStack_48 = extraout_x8;
  func_0x00010bcd5688(auStack_78,lVar5 + 0x28,lVar5 + 0x40);
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = 0;
    lStack_80 = 0;
  }
  else {
    func_0x00010b175ad4();
    (*extraout_x8_00)();
    lStack_80 = *param_1;
    if (lStack_80 != 0) {
      func_0x00010b176edc();
      (*extraout_x8_01)();
    }
  }
  lStack_88 = lVar2;
  func_0x00010bcd58c8(auStack_e0,auStack_78,&lStack_88);
  uVar1 = cStack_c8 == '\x01';
  if ((bool)uVar1) {
    func_0x000107c3171c(auStack_118,auStack_e0);
    func_0x00010b176bb4();
    func_0x0001054918e8();
    puVar3 = auStack_118;
    func_0x000107c27d78();
    *unaff_x19 = 0;
    unaff_x19[0x40] = 0;
    func_0x00010b177334();
  }
  else {
    func_0x00010b177334();
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    FUN_10b202630(auStack_e0,lVar5);
    func_0x00010b1f72a0(uVar4,auStack_e0,2);
    func_0x00010b1767cc();
    func_0x00010b1758f8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f8);
    func_0x0001078d3f18(auStack_118,&UNK_10f730ba5);
    func_0x00010b1770f8();
    func_0x00010b176e28();
    if ((bool)uVar1) {
      func_0x00010b175994();
    }
    func_0x00010b177194();
    puVar3 = auStack_e0;
    func_0x0001052a03ac();
    func_0x00010b1766c0();
    func_0x00010b176528();
  }
  func_0x000107c350b0(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b176528();
  func_0x00010b174f0c();
  if (*(long *)(puVar3 + 8) != 0) {
    FUN_10b15583c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1697d4; end: 10b1697f3;  */

void FUN_10b1697d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b15583c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1697f4; end: 10b1697f7;  */

void FUN_10b1697f4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1697f8; end: 10b16981b;  */

void FUN_10b1697f8(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b16981c; end: 10b16993f;  */

void FUN_10b16981c(undefined1 *param_1,long *param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010b1752c4();
    lVar2 = *param_2;
    if (lVar2 != 0) {
      func_0x00010b176edc();
      (*extraout_x8)();
      goto LAB_10b16986c;
    }
  }
  lVar2 = 0;
LAB_10b16986c:
  func_0x00010bcd2bf8(auStack_48,lVar1,lVar2);
  puVar3 = auStack_48;
  func_0x000107c278d0(puVar3,lVar4);
  if (((ulong)puVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
    FUN_10b202630(auStack_a0,lVar4 + 0x18);
    func_0x00010b1f72a0(uVar5,auStack_a0,2);
    func_0x00010b1767cc();
    func_0x00010b1758f8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8);
    func_0x00010b1491a4(auStack_d8,&UNK_10f730bbb);
    func_0x00010b1770f8();
    func_0x00010b176e28();
    if ((bool)in_ZR) {
      func_0x00010b175994();
    }
    func_0x00010b177194();
    func_0x0001052a03ac(auStack_a0);
    func_0x00010b1766c0();
    func_0x00010b176528();
  }
  else {
    *param_1 = 0;
    param_1[0x40] = 0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10b169940; end: 10b16995f;  */

void FUN_10b169940(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b155870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b169960; end: 10b169967;  */

void FUN_10b169960(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b169968; end: 10b16997b;  */

void FUN_10b169968(void)

{
  func_0x00010b169984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16997c; end: 10b16998f;  */

void FUN_10b16997c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b169990; end: 10b1699af;  */

void FUN_10b169990(void)

{
  func_0x00010b175f04();
  FUN_10b1699b0();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b1699b0; end: 10b1699db;  */

void FUN_10b1699b0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x4ec4ec4ec4ec4f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x340);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc0868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1699dc; end: 10b1699df;  */

void FUN_10b1699dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1699e0; end: 10b1699f3;  */

void FUN_10b1699e0(void)

{
  func_0x00010b1699fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1699f4; end: 10b169a17;  */

void FUN_10b1699f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b169a18; end: 10b169a3b;  */

void FUN_10b169a18(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b169a3c; end: 10b169a3f;  */

undefined8 * FUN_10b169a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0068;
  FUN_10b169e98(param_1 + 4);
  *param_1 = &PTR_DAT_110d7e800;
  func_0x00010b9a0948();
  func_0x00010b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 10b169a40; end: 10b169a53;  */

void FUN_10b169a40(void)

{
  FUN_10b169a54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b169a54; end: 10b169a83;  */

undefined8 * FUN_10b169a54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0068;
  FUN_10b169e98(param_1 + 4);
  *param_1 = &PTR_DAT_110d7e800;
  func_0x00010b9a0948();
  func_0x00010b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 10b169a84; end: 10b169b47;  */

void FUN_10b169a84(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long lVar3;
  ulong uVar4;
  
  func_0x00010b17515c();
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b169b48(lVar3,uVar4);
  lVar2 = unaff_x19[5];
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + lVar1) == -2) {
      lVar2 = 0;
    }
    else {
      if ((uVar4 == 0) || (uVar4 - (uVar4 >> 3) >> 1 < (ulong)unaff_x19[2])) {
        FUN_10b169b88();
      }
      else {
        func_0x00010b169cb0();
      }
      lVar3 = *unaff_x19;
      lVar1 = lVar3;
      FUN_10b169b48(lVar3,unaff_x19[3]);
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b169b48; end: 10b169b87;  */

ulong FUN_10b169b48(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b169b88; end: 10b169e3b;  */

void FUN_10b169b88(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x20;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b169e3c();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b169b48(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b169e6c(param_1[1] + lVar4 * 0x20,lVar5);
    }
    lVar5 = lVar5 + 0x20;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b169e3c; end: 10b169e6b;  */

void FUN_10b169e3c(long param_1)

{
  long lVar1;
  long lVar2;
  char in_NG;
  char in_OV;
  long extraout_x8;
  long extraout_x10;
  long extraout_x11;
  
  func_0x00010b175174();
  lVar1 = extraout_x11;
  lVar2 = extraout_x10;
  if (in_NG == in_OV) {
    lVar1 = extraout_x8;
    lVar2 = param_1;
  }
  func_0x000107c278c8(lVar2,lVar2 + lVar1);
  func_0x00010b177760();
  return;
}



/* Entry: 10b169e6c; end: 10b169e97;  */

void FUN_10b169e6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  FUN_10b160ffc(param_2 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 10b169e98; end: 10b169ebb;  */

void FUN_10b169e98(long param_1)

{
  FUN_10b1616c4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b169ebc; end: 10b169ebf;  */

void FUN_10b169ebc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc00b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b169ec0; end: 10b169ed3;  */

void FUN_10b169ec0(void)

{
  FUN_10b16a020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b169ed4; end: 10b169edf;  */

void FUN_10b169ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b169ee0; end: 10b169ef3;  */

void FUN_10b169ee0(void)

{
  FUN_10b169f78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b169ef4; end: 10b169f4f;  */

void FUN_10b169ef4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2 + 0x20);
  return;
}



/* Entry: 10b169f50; end: 10b169f73;  */

void FUN_10b169f50(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x000105642268(param_1,&uStack_18);
  return;
}



/* Entry: 10b169f74; end: 10b169f77;  */

void FUN_10b169f74(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b169f78; end: 10b169fb7;  */

undefined8 * FUN_10b169f78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc0100;
  func_0x0001052bb09c(param_1 + 7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
  func_0x00010b1761c8();
  return param_1;
}



/* Entry: 10b169fb8; end: 10b16a01f;  */

void FUN_10b169fb8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b17515c();
  func_0x000107c279a0();
  func_0x000107c279a0(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x000107c279a0(unaff_x19 + 0x40,unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  return;
}



/* Entry: 10b16a020; end: 10b16a02b;  */

void FUN_10b16a020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc00b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16a02c; end: 10b16a04f;  */

void FUN_10b16a02c(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b16a050; end: 10b16a053;  */

void FUN_10b16a050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc01b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16a054; end: 10b16a067;  */

void FUN_10b16a054(void)

{
  func_0x00010b16a070();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16a068; end: 10b16a07b;  */

void FUN_10b16a068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


