/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b15655c; end: 10b1565fb;  */

void FUN_10b15655c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined1 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_2f8 [8];
  ulong uStack_2f0;
  byte bStack_2e1;
  undefined1 auStack_80 [80];
  
  if (*param_2 != 0) {
    func_0x00010b174be8();
    FUN_10b202630(auStack_80,param_3);
    func_0x00010b175940(auStack_2f8,*(undefined8 *)(unaff_x21 + 0x38),auStack_80);
    if (-1 < (char)bStack_2e1) {
      uStack_2f0 = (ulong)bStack_2e1;
    }
    if (uStack_2f0 != 0) {
      unaff_x19 = auStack_2f8;
    }
    FUN_10b1ae664(*unaff_x20 + 0x30,unaff_x19);
    func_0x00010b121af0(auStack_2f8);
    func_0x00010b121e00(auStack_80);
  }
  return;
}



/* Entry: 10b1565fc; end: 10b156823;  */

void FUN_10b1565fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 extraout_w8;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x25;
  undefined8 *puVar10;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  puVar4 = (undefined8 *)0x88;
  __Znwm();
  *puVar4 = FUN_10b17469c;
  puVar4[1] = FUN_10b174744;
  uVar7 = *param_2;
  puVar10 = puVar4 + 0xd;
  puVar4[0xe] = param_2[1];
  *puVar10 = uVar7;
  *param_2 = 0;
  param_2[1] = 0;
  uVar7 = *param_3;
  puVar4[0xb] = param_3[1];
  puVar4[10] = uVar7;
  puVar4[0xc] = param_3[2];
  puVar5 = puVar4;
  func_0x00010b175988();
  func_0x00010b176290();
  func_0x00010b175014();
  puVar4[0xf] = puVar4[0xd];
  func_0x00010b175608();
  if (((ulong)puVar5 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x10) = 0;
    lVar8 = puVar4[0xf];
    uVar7 = *(undefined8 *)(lVar8 + 0x68);
    func_0x00010b175d6c();
    lVar8 = *(long *)(lVar8 + 0x68);
    if ((*(byte *)(lVar8 + 0x78) & 1) == 0) {
      puVar5 = *(undefined8 **)(lVar8 + 0x88);
      uVar3 = *(undefined8 **)(lVar8 + 0x90) <= puVar5;
      if ((bool)uVar3) {
        lVar9 = *(long *)(lVar8 + 0x80);
        func_0x00010b175c40();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b1567c8:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1567cc);
          (*pcVar2)();
        }
        func_0x00010b174770(extraout_x8 - lVar9);
        uVar1 = extraout_x9;
        if ((bool)uVar3) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 == 0) {
          lVar6 = 0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1567c8;
          }
          lVar6 = uVar1 << 3;
          __Znwm();
        }
        param_2 = (undefined8 *)(lVar6 + (long)param_2);
        puVar10 = param_2 + 1;
        *param_2 = puVar4;
        func_0x00010b174c14();
        *(undefined8 **)(lVar8 + 0x80) = param_2 + -unaff_x25;
        *(undefined8 **)(lVar8 + 0x88) = puVar10;
        *(ulong *)(lVar8 + 0x90) = lVar6 + uVar1 * 8;
        if (lVar9 != 0) {
          func_0x00010b1761d0();
        }
      }
      else {
        puVar10 = puVar5 + 1;
        *puVar5 = puVar4;
      }
      *(undefined8 **)(lVar8 + 0x88) = puVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar7);
      return;
    }
    func_0x00010b175394();
    func_0x00010b174f14(*puVar4);
  }
  else {
    func_0x00010b17527c(puVar4[0xf]);
    func_0x00010b176b84(*puVar10);
    func_0x00010b174f74();
    func_0x00010b1750bc();
    *(undefined1 *)(puVar4 + 0x10) = extraout_w8;
    if (*(char *)(puVar4 + 8) == '\x01') {
      func_0x00010b174ea4();
      func_0x00010b174c9c();
    }
    else {
      func_0x00010b174ba0();
      puStack_68 = auStack_70;
      func_0x00010b174c90();
      func_0x00010b175084();
    }
    func_0x00010b175038();
    func_0x00010b176ad0();
    FUN_10b12878c(puVar10);
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b156824; end: 10b156d9b;  */

void FUN_10b156824(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined4 extraout_var;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long lVar7;
  long lVar8;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [40];
  undefined8 uStack_c8;
  long alStack_c0 [11];
  undefined8 uStack_68;
  
  func_0x00010b175674();
  func_0x00010b1749f4();
  puVar4 = (undefined8 *)0xf0;
  uStack_68 = extraout_x8;
  __Znwm();
  *puVar4 = FUN_10b16d904;
  puVar4[1] = FUN_10b16dda0;
  FUN_10b124f8c(puVar4 + 2);
  func_0x00010b175014();
  func_0x00010b177748(puVar4 + 0x19);
  FUN_10b154f80(&uStack_c8,puVar4[0x19]);
  *(undefined1 *)(puVar4[0x19] + 0x160) = 1;
  func_0x000107c2798c(&uStack_c8);
  lVar7 = *(long *)(puVar4[0x19] + 0x48);
  func_0x000107c27b50(puVar4 + 0x14);
  puVar6 = puVar4 + 10;
  func_0x000107c27b4c(puVar6,puVar4 + 0x14);
  FUN_10b163268(&puStack_f8,puVar4 + 0x14);
  func_0x00010b1779f8(FUN_10b163228);
  FUN_10b163230();
  func_0x00010bcce530(lVar7,&uStack_c8);
  func_0x00010b174ce0(alStack_c0[0]);
  func_0x000107c27b5c(&puStack_f8);
  puVar5 = puVar4 + 0x14;
  func_0x000107c27b5c();
  func_0x00010b17562c();
  if (((ulong)puVar5 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x1d) = 0;
    puStack_100 = puVar4;
    puStack_f8 = puVar6;
    func_0x00010b175634(&uStack_c8);
    if (alStack_c0[0] != 0) {
      do {
        func_0x00010b1748f0();
        lVar7 = extraout_x9;
      } while (extraout_w11 != 0);
      goto LAB_10b156acc;
    }
LAB_10b156bfc:
    func_0x000107c350b0(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010b1754ec();
    func_0x00010b175140();
    puVar4[0x1b] = puVar4[0x19];
    func_0x00010b175608();
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010b17527c(puVar4[0x1b]);
      puVar1 = puVar4 + 0xf;
      func_0x00010b176fd8(puVar5);
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10 != 0);
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_10b1ab5e4(puVar1);
        puVar5 = puVar1;
        FUN_10b12d174();
        if (((ulong)puVar5 & 1) == 0) {
          *(undefined1 *)(puVar4 + 0x1d) = 2;
          puStack_100 = puVar4;
          puStack_f8 = puVar1;
          func_0x00010b1765f4();
          if (alStack_c0[0] != 0) {
            do {
              func_0x00010b1748f0();
              lVar7 = extraout_x9_01;
            } while (extraout_w11_01 != 0);
            goto LAB_10b156acc;
          }
          goto LAB_10b156bfc;
        }
        FUN_10b12d0d0(puVar1);
        func_0x00010b176998();
      }
      func_0x00010b175b94();
      puVar4[0x15] = puVar4[0x1a];
      puVar4[0x14] = puVar4[0x19];
      if (puVar4[0x1a] != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c27b50(puVar1);
      func_0x000107c27b4c(puVar6,puVar1);
      puStack_f8 = (undefined8 *)puVar4[0x15];
      puStack_100 = (undefined8 *)puVar4[0x14];
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      FUN_10b163268(auStack_f0,puVar1);
      func_0x00010b1779f8(FUN_10b1632cc);
      func_0x00010b163438();
      func_0x00010b175150();
      func_0x00010b17555c();
      func_0x00010b174ce0(alStack_c0[0]);
      FUN_10b1632ac(&puStack_100);
      puVar5 = puVar1;
      func_0x000107c27b5c();
      func_0x00010b17562c();
      if (((ulong)puVar5 & 1) == 0) {
        *(undefined1 *)(puVar4 + 0x1d) = 3;
        puStack_100 = puVar4;
        puStack_f8 = puVar6;
        func_0x00010b175634(&uStack_c8);
        if (alStack_c0[0] != 0) {
          do {
            func_0x00010b1748f0();
            lVar7 = extraout_x9_00;
          } while (extraout_w11_00 != 0);
LAB_10b156acc:
          if (lVar7 == 0) {
            func_0x00010b174824();
            func_0x00010b174f98();
          }
        }
      }
      else {
        func_0x00010b1754ec();
        func_0x00010b175140();
        func_0x00010b175f9c();
        func_0x000107c27b50(puVar6);
        func_0x000107c27b4c(puVar1,puVar6);
        func_0x00010b17768c();
        uStack_c8 = 0x10b163484;
        FUN_10b16348c(alStack_c0,&puStack_100);
        func_0x00010b175150();
        func_0x00010b17555c();
        func_0x00010b174ec8(alStack_c0[0]);
        func_0x00010b176aac();
        func_0x00010b17751c();
        puVar6 = puVar1;
        FUN_10b12d174();
        if (((ulong)puVar6 & 1) == 0) {
          *(undefined1 *)(puVar4 + 0x1d) = 4;
          puStack_100 = puVar4;
          puStack_f8 = puVar1;
          func_0x00010b1765f4();
          if (alStack_c0[0] != 0) {
            do {
              func_0x00010b1748f0();
              lVar7 = extraout_x9_03;
            } while (extraout_w11_02 != 0);
            goto LAB_10b156acc;
          }
        }
        else {
          FUN_10b12d0d0(puVar1);
          func_0x00010b176998();
          func_0x00010b176238();
          func_0x00010b174f74();
          func_0x00010b1769c0();
          *(undefined1 *)(puVar4 + 0x1d) = extraout_w8;
          func_0x00010b175910();
          if ((bool)in_ZR) {
            func_0x00010b174ea4();
            func_0x00010b174c9c();
          }
          else {
            func_0x00010b174a5c();
            func_0x00010b174c90();
            func_0x00010b175084();
          }
          func_0x00010b175038();
          func_0x00010b174f24();
        }
      }
      goto LAB_10b156bfc;
    }
    func_0x00010b177c58();
    func_0x00010b1751f0();
    lVar7 = *(long *)(lVar7 + 0x68);
    if ((*(byte *)(lVar7 + 0x78) & 1) != 0) {
      func_0x00010b175068();
      func_0x00010b174f14(*puVar4);
      goto LAB_10b156bfc;
    }
    func_0x00010b177d28();
    if (!(bool)in_CY) {
      *unaff_x25 = puVar4;
      unaff_x25 = unaff_x25 + 1;
LAB_10b156bd8:
      *(undefined8 **)(lVar7 + 0x88) = unaff_x25;
      func_0x00010b175068();
      goto LAB_10b156bfc;
    }
    lVar8 = *(long *)(lVar7 + 0x80);
    func_0x00010b174a38();
    if (CONCAT44(extraout_var,extraout_w10_01) == 0) {
      func_0x00010b174770(extraout_x8_01 - lVar8);
      uVar2 = extraout_x9_02;
      if ((bool)in_CY) {
        uVar2 = extraout_x8_02;
      }
      if (uVar2 != 0) {
        if (uVar2 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10b156c20;
        }
        __Znwm(uVar2 << 3);
      }
      func_0x00010b1747c8();
      *(undefined8 *)(lVar7 + 0x80) = unaff_x23;
      *(undefined8 **)(lVar7 + 0x88) = unaff_x25;
      *(ulong *)(lVar7 + 0x90) = uVar2;
      if (lVar8 != 0) {
        func_0x00010b175554();
      }
      goto LAB_10b156bd8;
    }
  }
  func_0x00010552fc6c();
LAB_10b156c20:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b156c24);
  (*pcVar3)();
}



/* Entry: 10b156d9c; end: 10b1571db;  */

void FUN_10b156d9c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  code *extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 uVar6;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  int extraout_w12_00;
  long unaff_x21;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_58;
  
  func_0x00010b176b28();
  puVar3 = (undefined8 *)0x1d0;
  __Znwm();
  *puVar3 = FUN_10b16eedc;
  puVar3[1] = FUN_10b16efa0;
  lVar8 = *param_2;
  puVar3[0x30] = param_2[1];
  puVar3[0x2f] = lVar8;
  *param_2 = 0;
  param_2[1] = 0;
  puVar3[0x31] = param_3;
  puVar3[0x32] = param_4;
  puVar4 = (undefined8 *)*param_5;
  lVar8 = param_5[1];
  puVar3[0x33] = puVar4;
  puVar3[0x34] = lVar8;
  *param_5 = 0;
  param_5[1] = 0;
  func_0x00010b175858();
  func_0x00010b175008();
  if (puVar3[0x2f] == 0) {
    puVar4 = puVar3 + 0x29;
    func_0x00010b175314();
    puVar5 = (undefined8 *)&UNK_10f7308e0;
    FUN_10b1634c4(puVar3 + 0x21);
    lStack_a8 = puVar3[0x2a];
    uStack_b0 = *puVar4;
    func_0x00010b175988();
    uStack_98 = 1;
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    uStack_78 = 0;
    uVar2 = *(char *)(puVar3 + 0x24) == '\x01';
    uStack_a0 = extraout_x9;
    if ((bool)uVar2) {
      uStack_88 = puVar3[0x22];
      uStack_90 = puVar3[0x21];
      uStack_80 = puVar3[0x23];
      func_0x00010b177c4c();
      uStack_78 = extraout_w8;
    }
    func_0x00010b175290();
    func_0x00010b1756a8();
    func_0x00010b175c30();
  }
  else {
    uVar2 = *(char *)(*(long *)(unaff_x21 + 0x70) + 0x30) == '\x01';
    if (!(bool)uVar2) {
      func_0x00010b177b44();
      (*extraout_x8)();
      uVar7 = *(undefined8 *)(unaff_x21 + 0x70);
      puStack_c0 = puVar4;
      lStack_b8 = lVar8;
      if (lVar8 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10 != 0);
      }
      func_0x00010b175428();
      (*extraout_x9_00)(&puStack_70);
      puVar1 = puStack_68;
      puVar5 = puStack_70;
      puVar3[0x13] = &PTR_DAT_110cc01f0;
      puStack_70 = (undefined8 *)0x0;
      puStack_68 = (undefined8 *)0x0;
      puVar3[0x12] = FUN_10b16a154;
      puVar3[0x15] = puVar1;
      puVar3[0x14] = puVar5;
      uStack_b0 = 0;
      lStack_a8 = 0;
      FUN_10b210574(uVar7,puVar3 + 0x12);
      (**(code **)puVar3[0x13])(puVar3 + 0x13);
      func_0x0001052aad20(&uStack_b0);
      func_0x0001052aad20(&puStack_70);
      func_0x0001052aacf8(&puStack_c0);
      uVar7 = puVar3[0x2f];
      puVar3[0x35] = uVar7;
      puVar3[0x36] = puVar3[0x30];
      if (puVar3[0x30] == 0) {
        uVar6 = 0;
      }
      else {
        do {
          func_0x00010b174a1c();
        } while (extraout_w12 != 0);
        do {
          func_0x00010b174a1c();
          uVar7 = extraout_x8_00;
          uVar6 = extraout_x9_01;
        } while (extraout_w12_00 != 0);
      }
      puVar3[0x1c] = &PTR_FUN_110cc0208;
      puVar3[0x1b] = FUN_10b16a194;
      puVar3[0x1d] = uVar7;
      puVar3[0x1e] = uVar6;
      uStack_b0 = 0;
      lStack_a8 = 0;
      puVar5 = puVar3 + 0x1b;
      FUN_10b2104a8();
      puVar1 = puVar3 + 0x37;
      func_0x00010b174c34();
      FUN_10b16a170(&uStack_b0);
      FUN_10b14b830(puVar1,puVar4 + 3);
      puVar4 = puVar1;
      func_0x000105c417a8();
      if (((ulong)puVar4 & 1) == 0) {
        *(undefined1 *)(puVar3 + 0x39) = 0;
        puStack_70 = puVar3;
        puStack_68 = puVar1;
        func_0x00010b1764e0();
        func_0x000105c41834(puVar1);
        if (lStack_a8 == 0) {
          return;
        }
        do {
          func_0x00010b1748f0();
        } while (extraout_w11 != 0);
        if (extraout_x9_02 != 0) {
          return;
        }
        func_0x00010b174824();
        func_0x00010b174f98();
        return;
      }
      func_0x000105c40888(puVar3 + 0x12,puVar1);
      func_0x00010b174e1c();
      func_0x00010b175210();
      func_0x00010b1769a8();
      func_0x00010b1761e8();
      goto LAB_10b156f0c;
    }
    func_0x00010b1758f8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 0x2c);
    puVar5 = (undefined8 *)&UNK_10f730912;
    func_0x0001077b6764(puVar3 + 0x25);
    lStack_a8 = puVar3[0x2d];
    uStack_b0 = puVar3[0x2c];
    uStack_a0 = puVar3[0x2e];
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2c] = 0;
    uStack_98 = 4;
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    uStack_78 = 0;
    uVar2 = *(char *)(puVar3 + 0x28) == '\x01';
    if ((bool)uVar2) {
      func_0x00010b174dd8();
    }
    func_0x00010b175290();
    func_0x00010b1756a8();
    func_0x00010b17564c();
    puVar4 = puVar3 + 0x2c;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
LAB_10b156f0c:
  func_0x00010b1750bc();
  *(undefined1 *)(puVar3 + 0x39) = extraout_w8_00;
  func_0x00010b174aa8();
  if ((bool)uVar2) {
    puStack_c0 = puVar5;
    func_0x00010b177bfc();
    FUN_10b14bca0();
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_58);
    puStack_c0 = &uStack_58;
    func_0x00010b177bfc();
    FUN_10b14bb60();
    __ZNSt13exception_ptrD1Ev(&uStack_58);
  }
  func_0x00010b174f7c();
  func_0x00010b17691c();
  func_0x00010b176958();
  func_0x00010b174f24();
  return;
}



/* Entry: 10b1571dc; end: 10b15736b;  */

undefined8 * FUN_10b1571dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 auStack_a0 [11];
  undefined8 uStack_48;
  
  func_0x00010b17515c();
  func_0x00010b1749f4();
  uStack_48 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&pcStack_a8,param_3);
  FUN_10b15216c(&uStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_a8);
  lVar2 = *(long *)(unaff_x20 + 0x58);
  uStack_148 = *(undefined8 *)(lVar2 + 0x30);
  uStack_150 = *(undefined8 *)(lVar2 + 0x28);
  if (*(long *)(lVar2 + 0x30) != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  lStack_138 = lStack_128;
  uStack_140 = uStack_130;
  if (lStack_128 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b163540(auStack_d0);
  func_0x00010b1634e0();
  uStack_118 = uStack_148;
  uStack_120 = uStack_150;
  uStack_150 = 0;
  uStack_148 = 0;
  lStack_108 = lStack_138;
  uStack_110 = uStack_140;
  uStack_140 = 0;
  lStack_138 = 0;
  uStack_f0 = uStack_c0;
  uStack_f8 = uStack_c8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_e8 = uStack_b8;
  uStack_e0 = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  ppuStack_100 = &PTR_FUN_110cbf778;
  pcStack_a8 = FUN_10b1637b8;
  func_0x00010b163924(auStack_a0,&uStack_120);
  func_0x00010b1755e8();
  func_0x00010b1761b8();
  func_0x00010b175368(auStack_a0[0]);
  FUN_10b163518(&uStack_120);
  FUN_10b163678(auStack_d0);
  FUN_10b15736c(&uStack_150);
  puVar1 = &uStack_130;
  func_0x00010b1440f0();
  func_0x000107c350b0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b175368(auStack_a0[0]);
    FUN_10b163518(&uStack_120);
    FUN_10b163654();
    FUN_10b163678(auStack_d0);
    FUN_10b15736c(&uStack_150);
    func_0x00010b1440f0(&uStack_130);
    func_0x00010b174f1c();
    func_0x00010b1755f4();
    func_0x00010b1440f0();
    puVar1 = unaff_x19;
    func_0x0001005f1e70();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 10b15736c; end: 10b15738f;  */

long FUN_10b15736c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1755f4();
  func_0x00010b1440f0();
  lVar1 = unaff_x19;
  func_0x0001005f1e70();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b157390; end: 10b15820b;  */

void FUN_10b157390(undefined8 param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,ulong *param_8,
                  int param_9,undefined1 param_10,undefined4 param_11,undefined8 *param_12)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  byte bVar15;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long lVar16;
  long extraout_x8_11;
  code *extraout_x8_12;
  uint uVar17;
  uint extraout_w9;
  undefined8 extraout_x9;
  long extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
  code *extraout_x9_03;
  undefined8 extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  undefined8 extraout_x9_10;
  long extraout_x9_11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  uint uVar18;
  uint extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  long extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w12;
  bool bVar19;
  undefined1 uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  ulong *puVar26;
  ulong *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  ulong *puStack_180;
  char cStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar10 = (undefined8 *)0xcb8;
  __Znwm();
  *puVar10 = FUN_10b170860;
  puVar10[1] = FUN_10b171278;
  puVar10[0x193] = param_7;
  puVar11 = puVar10 + 0x177;
  puVar10[0x192] = param_6;
  puVar1 = puVar10 + 0x18b;
  puVar26 = puVar10 + 0x18d;
  *(undefined1 *)((long)puVar10 + 0xcb2) = param_10;
  *(char *)((long)puVar10 + 0xcb1) = (char)param_9;
  puVar10[0x191] = param_2;
  uVar22 = *param_3;
  puVar10[0x18e] = param_3[1];
  *puVar26 = uVar22;
  *param_3 = 0;
  param_3[1] = 0;
  uVar28 = *param_4;
  uVar30 = param_4[3];
  uVar29 = param_4[2];
  puVar10[0x168] = param_4[1];
  puVar10[0x167] = uVar28;
  puVar10[0x16a] = uVar30;
  puVar10[0x169] = uVar29;
  uVar28 = param_4[4];
  uVar30 = param_4[7];
  uVar29 = param_4[6];
  puVar10[0x16c] = param_4[5];
  puVar10[0x16b] = uVar28;
  puVar10[0x16e] = uVar30;
  puVar10[0x16d] = uVar29;
  uVar28 = *param_5;
  puVar10[0x195] = param_5[1];
  puVar10[0x194] = uVar28;
  *(undefined1 *)((long)puVar10 + 0xcb3) = *(undefined1 *)(param_5 + 2);
  *(undefined1 *)(puVar10 + 0x177) = 0;
  *(undefined1 *)(puVar10 + 0x17a) = 0;
  uVar8 = (char)param_8[3] != '\0';
  uVar9 = (char)param_8[3] == '\x01';
  if ((bool)uVar9) {
    uVar22 = *param_8;
    puVar10[0x178] = param_8[1];
    *puVar11 = uVar22;
    puVar10[0x179] = param_8[2];
    param_8[1] = 0;
    param_8[2] = 0;
    *param_8 = 0;
    *(undefined1 *)(puVar10 + 0x17a) = 1;
  }
  uVar28 = *param_12;
  puVar10[0x18c] = param_12[1];
  *puVar1 = uVar28;
  *param_12 = 0;
  param_12[1] = 0;
  FUN_10b163978(puVar10 + 2);
  puVar27 = puVar10 + 0xcc;
  func_0x00010b16a7d4(param_1,puVar10[5],puVar10[6]);
  FUN_10b16a26c(puVar10 + 0x189,*param_2,param_2[1]);
  bVar15 = 0;
  puVar2 = puVar10 + 0x15f;
  if ((param_9 == 0) && ((*(byte *)(puVar10 + 0x16e) & 1) != 0)) {
    bVar15 = *(byte *)(puVar10 + 0x16c);
  }
  *(byte *)((long)puVar10 + 0xcb4) = bVar15 & 1;
  FUN_10b16a424(puVar2,puVar26);
  uVar22 = *puVar2;
  func_0x00010b175434(uVar22 + 0x2c8);
  __ZNSt3__15mutex4lockEv();
  func_0x00010b163cc8();
  func_0x00010b1754d4();
  func_0x00010b163ca4(puVar2);
  if ((uVar22 & 1) == 0) {
    *(undefined1 *)(puVar10 + 0x196) = 0;
    puVar11 = puVar26;
    __ZNSt3__112__get_sp_mutEPKv();
    func_0x00010b1752bc();
    lVar16 = puVar10[0x18d];
    lVar23 = puVar10[0x18e];
    *puVar26 = 0;
    puVar10[0x18e] = 0;
    func_0x00010b175324();
    func_0x00010b1760ac();
    puVar27 = puVar11;
    func_0x00010b174f54();
    func_0x000107c27b54(puVar27 + 1,&puStack_a0);
    puVar11[4] = puVar11[2];
    puVar11[3] = puVar11[1];
    if (puVar11[2] == 0) {
      *puVar11 = (ulong)&PTR_DAT_1107e8958;
LAB_10b15787c:
      bVar19 = true;
    }
    else {
      do {
        func_0x00010b1749b8();
      } while (extraout_w11_00 != 0);
      *puVar11 = extraout_x8_00 + 0x10;
      if (puVar11[4] == 0) goto LAB_10b15787c;
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
      do {
        func_0x00010b17493c();
      } while (extraout_w10_00 != 0);
      do {
        func_0x00010b1748f0();
      } while (extraout_w11_01 != 0);
      if (extraout_x9_00 == 0) {
        func_0x00010b17533c();
        func_0x00010b177628();
      }
      bVar19 = false;
    }
    puStack_190 = puVar10;
    uStack_188 = puVar26;
    puStack_180 = puVar11;
    __ZNSt3__15mutex4lockEv(lVar16 + 0x2c8);
    if ((*(byte *)(lVar16 + 0x290) & 1) == 0) {
      puStack_a0 = (undefined8 *)0x0;
      lVar21 = *(long *)(lVar16 + 0x308);
      ppuVar12 = &puStack_a0;
      __ZNSt13exception_ptrD1Ev();
      if (lVar21 == 0) {
        func_0x00010b1751e0();
        *ppuVar12 = &PTR_FUN_110cc0230;
        puVar1 = puStack_190;
        ppuVar12[2] = uStack_188;
        ppuVar12[1] = puVar1;
        ppuVar12[3] = puVar11;
        lVar21 = *(long *)(lVar16 + 0x310);
        *(undefined8 ***)(lVar16 + 0x310) = ppuVar12;
        if (lVar21 != 0) {
          func_0x00010b174834();
        }
        func_0x00010b1772dc();
        if (lVar23 != 0) {
          do {
            func_0x00010b1748f0();
          } while (extraout_w11_04 != 0);
          if (extraout_x9_06 == 0) {
            func_0x00010b174ae4();
            func_0x00010b175c28();
          }
        }
        goto LAB_10b157904;
      }
    }
    func_0x00010b1772dc();
    if (lVar23 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_05 != 0);
    }
    FUN_10b16a45c(&puStack_190,lVar16,lVar23);
    if (lVar23 != 0) {
      do {
        func_0x00010b175100();
      } while (extraout_w10_06 != 0);
      if (extraout_x8_04 == 0) {
        func_0x00010b174ae4();
        func_0x00010b175c28();
      }
      do {
        func_0x00010b175100();
      } while (extraout_w10_07 != 0);
      if (extraout_x8_05 == 0) {
        func_0x00010b174ae4();
        func_0x00010b175c28();
      }
    }
    func_0x00010b1752ac();
LAB_10b157904:
    if (bVar19) {
      return;
    }
    do {
      func_0x00010b1748f0();
    } while (extraout_w11_03 != 0);
    if (extraout_x9_05 != 0) {
      return;
    }
    func_0x00010b17533c();
    func_0x00010b177628();
    return;
  }
  plVar3 = puVar10 + 0x185;
  uStack_78 = 0;
  lStack_70 = 0;
  *plVar3 = 0;
  puVar10[0x186] = 0;
  FUN_10b163c54(&puStack_190,puVar26,plVar3);
  puVar4 = puVar10 + 0x6f;
  func_0x00010b163c80(&uStack_78,&puStack_190);
  func_0x00010b175768();
  func_0x00010b163ca4(plVar3);
  puVar10[0x183] = uStack_78;
  puVar10[0x184] = lStack_70;
  if (lStack_70 == 0) {
    uStack_80 = 0;
    uStack_88 = uStack_78;
  }
  else {
    do {
      func_0x00010b174a1c();
      uStack_80 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
      uStack_88 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar5 = puVar10 + 0x183;
  puStack_190 = (undefined8 *)0x0;
  uStack_188 = (ulong *)0x0;
  *puVar4 = 0;
  puVar10[0x70] = 0;
  FUN_10b163c54(&puStack_a0,&uStack_88,puVar4);
  func_0x00010b163c80(&puStack_190,&puStack_a0);
  func_0x00010b163ca4(&puStack_a0);
  func_0x00010b177620();
  puVar13 = puStack_190;
  puStack_a0 = puStack_190 + 0x59;
  uStack_98 = CONCAT71(uStack_98._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  puVar10[0x187] = puVar13;
  puVar10[0x188] = uStack_188;
  if (uStack_188 != (ulong *)0x0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_01 != 0);
  }
  while (puVar24 = puVar13, func_0x00010b163cc8(), ((ulong)puVar24 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar13 + 0x53,&puStack_a0);
  }
  func_0x00010b163ca4(puVar10 + 0x187);
  if (puVar13[0x61] != 0) {
    __ZNSt13exception_ptrC1ERKS_(puVar10 + 399,puVar13 + 0x61);
    __ZSt17rethrow_exceptionSt13exception_ptr(puVar10 + 399);
LAB_10b157eec:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10b157ef0);
    (*pcVar7)();
  }
  FUN_10b163d00(puVar10 + 0xd5,puVar13);
  func_0x000107c2798c(&puStack_a0);
  func_0x00010b175768();
  func_0x00010b163ca4(&uStack_88);
  func_0x00010b163ca4(puVar5);
  func_0x00010b163ca4(&uStack_78);
  if (*(int *)(puVar10 + 0x126) != 0) {
    puVar10[0x70] = 0;
    *puVar4 = 0;
    puVar13 = puVar10 + 0x71;
    func_0x00010b163f4c();
    func_0x00010b1763ac();
    puVar27 = puVar10 + 0xce;
    func_0x00010b17638c();
    if ((bool)uVar9) {
      puVar10[0xcf] = puVar10[0x178];
      *puVar27 = *puVar11;
      puVar10[0xd0] = puVar10[0x179];
      puVar10[0x178] = 0;
      puVar10[0x179] = 0;
      *puVar11 = 0;
      *(undefined1 *)(puVar10 + 0xd1) = 1;
    }
    func_0x00010b174e28(*(undefined1 *)((long)puVar10 + 0xcb2));
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_02 != 0);
    }
    if (*(int *)(puVar10 + 0x126) != 1) {
      func_0x00010563ab98();
      goto LAB_10b157eec;
    }
    func_0x00010b177af0();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_03 != 0);
    }
    if (puVar13 == (undefined8 *)0x0) {
      func_0x00010b176664();
    }
    else {
      func_0x00010b176858();
      (*extraout_x9_01)(puVar2);
      puVar14 = puVar10 + 0xcc;
      if (*(char *)(puVar10 + 0x166) == '\x01') {
        FUN_10b122234(puVar10 + 199,puVar2);
        *(undefined4 *)puVar14 = *(undefined4 *)((long)puVar10 + 0xb24);
        *(undefined1 *)((long)puVar10 + 0x664) = *(undefined1 *)(puVar10 + 0x165);
      }
      func_0x00010b1763cc(*puVar5);
      (*extraout_x9_02)(&puStack_190);
      uVar8 = cStack_a8 != '\0';
      uVar9 = cStack_a8 == '\x01';
      if ((bool)uVar9) {
        *(undefined4 *)(puVar10 + 0xcd) = uStack_188._4_4_;
        *(undefined1 *)((long)puVar10 + 0x66c) = 1;
      }
      func_0x0001052b4218(&puStack_190);
      func_0x00010b175428(*puVar5);
      (*extraout_x9_03)(plVar3);
      if (*plVar3 == 0) {
        func_0x00010b176664();
      }
      else {
        func_0x00010b177a9c();
        puVar10[0x152] = extraout_x9_04;
        puVar10[0x153] = puVar10[0x186];
        if (puVar10[0x186] != 0) {
          do {
            func_0x00010b1749b8();
          } while (extraout_w11_02 != 0);
        }
        *(int *)(puVar10 + 0x154) = (int)*puVar14;
        func_0x00010b176e94();
        func_0x000107c279a0(puVar10 + 0x156,puVar27);
        func_0x00010b175df4(*(undefined1 *)((long)puVar10 + 0xcb2));
        if (extraout_x8_03 != 0) {
          do {
            func_0x00010b17493c();
          } while (extraout_w10_04 != 0);
        }
        func_0x00010b175a90(puVar10[0x191],puVar10 + 0x127);
        if ((*(byte *)((long)puVar10 + 0xcb1) & 1) == 0) {
          func_0x00010b176724(puVar10[0x191],puVar10 + 0x173);
          func_0x00010b176750(puVar10[0x191],puVar10 + 0x16f);
        }
        else {
          func_0x00010b177a60();
        }
        func_0x00010b176e7c();
        func_0x00010b177590();
        puVar13 = puVar10 + 399;
        FUN_10b16a59c();
        if (((ulong)puVar13 & 1) == 0) {
          *(undefined1 *)(puVar10 + 0x196) = 2;
          func_0x00010b175688(puVar10 + 399);
          return;
        }
        func_0x00010b17735c();
        func_0x00010b144014(puVar4,puVar10 + 0x187);
        FUN_10b144044(puVar10 + 0x187);
        func_0x00010b175fec();
        func_0x00010b176758();
        func_0x00010b176760();
        func_0x00010b176788();
        func_0x00010b176748();
        if ((*(byte *)((long)puVar10 + 0xcb4) & 1) == 0) {
          uVar18 = (uint)*(byte *)(puVar10 + 0x16e);
          uVar17 = (uint)*(byte *)(puVar10 + 0x169);
          if (((*puVar14 >> 0x20 & 1) != 0) &&
             (func_0x00010b177a54(), uVar18 = extraout_w10_08, uVar17 = extraout_w9, !(bool)uVar8))
          goto LAB_10b157adc;
          lVar16 = puVar10[0x191];
          uVar9 = *(char *)(lVar16 + 0x6a) == '\x01';
          if (((bool)uVar9) && ((*(byte *)((long)puVar10 + 0xcb3) & 1) != 0)) {
            lVar23 = puVar10[0x195] - puVar10[0x194];
            puVar27 = (ulong *)0x1;
          }
          else if ((((*(byte *)(puVar10 + 0x166) & 1) == 0) &&
                   (((uVar18 != 0 && (uVar17 != 0)) && ((*(uint *)(puVar10 + 0x193) & 1) != 0)))) &&
                  (uVar9 = puVar10[0x192] == 1, 0 < (long)puVar10[0x192])) {
            func_0x00010b176de0();
            lVar23 = 0;
            puVar27 = puVar26;
            if (extraout_x9_11 != 0) {
              lVar23 = extraout_x8_11 / extraout_x9_11;
            }
          }
          else {
            lVar23 = *(long *)(*(long *)(lVar16 + 0x58) + 0x150);
            puVar27 = (ulong *)(ulong)*(uint *)(lVar16 + 0x10);
            func_0x00010b1756f4();
            func_0x000107c278b8(&puStack_190);
            func_0x00010b175460();
            (*extraout_x8_12)(lVar23,puVar27,&puStack_190,plVar3,puVar2,puVar10 + 0x167);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_190);
          }
        }
        else {
LAB_10b157adc:
          lVar23 = 0x7fffffffffffffff;
          puVar27 = (ulong *)0x1;
        }
        func_0x00010b177e54(*(undefined1 *)(puVar10 + 0xc6));
        if ((extraout_x8_06 & 1) == 0) {
          *(undefined1 *)(puVar10 + 0xc6) = 1;
        }
        if (((ulong)puVar27 & 1) != 0) {
          func_0x00010b177a34();
          lVar16 = extraout_x10;
          if ((bool)uVar9) {
            lVar16 = 0;
          }
          lVar21 = extraout_x9_07;
          if (lVar16 + lVar23 <= extraout_x9_07) {
            lVar21 = lVar16 + lVar23;
          }
          puVar10[0xc4] = lVar16;
          if ((extraout_x8_07 & 1) == 0) {
            lVar21 = lVar23;
          }
          puVar10[0xc5] = lVar21;
        }
        func_0x00010b1771d0();
        puVar27 = puVar26;
      }
      func_0x00010b177368();
      func_0x0001052b41f8(puVar2);
    }
    func_0x0001052b4284(puVar5);
    func_0x00010b176a48();
    puVar26 = puVar27;
    goto LAB_10b157d68;
  }
  *(undefined1 *)(puVar10 + 0x15f) = 0;
  *(undefined1 *)(puVar10 + 0x163) = 0;
  puVar13 = puVar10 + 0xd7;
  FUN_10b1c41c0();
  if (puVar13 == (undefined8 *)0x0) {
    uVar20 = 0;
    uVar25 = 0;
    puVar24 = (undefined8 *)0x0;
  }
  else {
    ppuVar6 = &PTR_PTR_11336dcb0;
    if ((undefined **)puVar13[10] != (undefined **)0x0) {
      ppuVar6 = (undefined **)puVar13[10];
    }
    FUN_10b163e04(&puStack_a0,ppuVar6[3],ppuVar6[3] + (long)*(int *)(ppuVar6 + 2) * 4);
    uVar25 = *(undefined4 *)((long)ppuVar6 + 0x24);
    FUN_10b1222a8(puVar2);
    uVar29 = uStack_90;
    uVar28 = uStack_98;
    puVar24 = puStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    puStack_a0 = (undefined8 *)0x0;
    puVar10[0x160] = uVar28;
    *puVar2 = (ulong)puVar24;
    puVar10[0x161] = uVar29;
    uStack_188 = (ulong *)0x0;
    puStack_180 = (ulong *)0x0;
    puStack_190 = (undefined8 *)0x0;
    *(undefined4 *)(puVar10 + 0x162) = uVar25;
    func_0x000107c27a18(&puStack_190);
    *(undefined1 *)(puVar10 + 0x163) = 1;
    func_0x000107c27a18(&puStack_a0);
    uVar18 = *(uint *)((long)puVar13 + 0x8c);
    uVar22 = 3;
    uVar8 = 3 < uVar18;
    uVar9 = uVar18 == 4;
    switch(uVar18) {
    case 0:
      puVar24 = puVar10 + 0xd7;
      FUN_10b15821c();
      FUN_10b15820c();
      if ((ulong)puVar24 >> 0x20 == 0) {
        puVar24 = (undefined8 *)0x0;
      }
      else {
        func_0x00010b176628(*(undefined8 *)(*(long *)(puVar10[0x191] + 0x58) + 0x18));
      }
      goto code_r0x00010b157b74;
    case 2:
      uVar22 = 0;
      break;
    case 3:
      uVar22 = 1;
      break;
    case 4:
      uVar22 = 2;
    }
    puVar24 = (undefined8 *)(uVar22 | 0x100000000);
code_r0x00010b157b74:
    if ((*(byte *)(puVar13 + 2) >> 4 & 1) == 0) {
      uVar20 = 0;
      uVar25 = 0;
    }
    else {
      uVar25 = *(undefined4 *)(puVar13[0xe] + 0x88);
      func_0x00010b23fdbc();
      uVar20 = 1;
    }
  }
  *puVar4 = 0;
  puVar10[0x70] = 0;
  func_0x00010b177130();
  if (puVar13 == (undefined8 *)0x0) {
    puVar10[0xc2] = 0;
    puVar10[0xc3] = 0;
  }
  else {
    FUN_10b1b3d48(puVar13);
  }
  func_0x00010b177e54();
  *(undefined1 *)(puVar10 + 0xc6) = 1;
  puVar14 = puVar2;
  func_0x0001052ac5d8(puVar10 + 199);
  *(char *)((long)puVar10 + 0x664) = (char)((ulong)puVar24 >> 0x20);
  *(int *)puVar27 = (int)puVar24;
  *(undefined4 *)(puVar10 + 0xcd) = uVar25;
  *(undefined1 *)((long)puVar10 + 0x66c) = uVar20;
  func_0x00010b176e64();
  if ((bool)uVar9) {
    uVar22 = *puVar11;
    puVar14[1] = puVar10[0x178];
    *puVar14 = uVar22;
    puVar14[2] = puVar10[0x179];
    puVar10[0x178] = 0;
    puVar10[0x179] = 0;
    *puVar11 = 0;
    *(undefined1 *)(puVar10 + 0xd1) = 1;
  }
  func_0x00010b174e28(*(undefined1 *)((long)puVar10 + 0xcb2));
  if (extraout_x8_08 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_09 != 0);
  }
  if (((*(byte *)((long)puVar10 + 0xcb4) & 1) != 0) ||
     (((*puVar27 >> 0x20 & 1) != 0 && (func_0x00010b177a48(), !(bool)uVar8 || (bool)uVar9)))) {
    func_0x00010b1779e4();
    lVar23 = extraout_x9_08;
    if (extraout_x8_09 != 0) {
      do {
        func_0x00010b174af4();
        lVar23 = extraout_x9_09;
      } while (extraout_w11_05 != 0);
    }
    if (lVar23 != 0) {
      func_0x00010b177a9c();
      puVar10[0x145] = extraout_x9_10;
      puVar10[0x146] = puVar10[0x188];
      if (puVar10[0x188] != 0) {
        do {
          func_0x00010b1749b8();
        } while (extraout_w11_06 != 0);
      }
      *(int *)(puVar10 + 0x147) = (int)*puVar27;
      func_0x00010b176e40();
      func_0x000107c279a0(puVar10 + 0x149);
      func_0x00010b1779d0(*(undefined1 *)((long)puVar10 + 0xcb2));
      puVar10[0x151] = puVar10[0x18c];
      puVar10[0x150] = *puVar1;
      if (extraout_x8_10 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_10 != 0);
      }
      func_0x00010b175a90(puVar10[0x191],puVar10 + 0x136);
      if ((*(byte *)((long)puVar10 + 0xcb1) & 1) == 0) {
        func_0x00010b176724(puVar10[0x191],puVar10 + 0x17f);
        func_0x00010b176750(puVar10[0x191],puVar10 + 0x17b);
      }
      else {
        func_0x00010b1779bc();
      }
      func_0x00010b177994();
      func_0x00010b177590(puVar5);
      puVar13 = puVar5;
      FUN_10b16a59c();
      if (((ulong)puVar13 & 1) == 0) {
        *(undefined1 *)(puVar10 + 0x196) = 1;
        func_0x00010b175688(puVar5);
        return;
      }
      FUN_10b1583c4(plVar3,puVar5);
      func_0x00010b144014(puVar4,plVar3);
      FUN_10b144044(plVar3);
      func_0x00010b1774d0();
      func_0x00010b175fb4();
      func_0x00010b1766e8();
      func_0x00010b1766f0();
      func_0x00010b1766a0();
      puVar10[0xc5] = 0x7fffffffffffffff;
    }
    func_0x00010b176840();
  }
  func_0x00010b1771d0();
  func_0x00010b176a48();
  func_0x0001052ac664(puVar2);
LAB_10b157d68:
  func_0x00010b176838();
  func_0x00010b17686c();
  func_0x00010b175218();
  *(undefined1 *)(puVar10 + 0x196) = extraout_w8;
  if (*(char *)(puVar10 + 0x6d) == '\x01') {
    func_0x00010b175e68();
    FUN_10b16a2cc();
  }
  else {
    func_0x00010b175040(&puStack_190);
    FUN_10b163b78(puVar10 + 2,&puStack_190);
    func_0x00010b176540();
  }
  func_0x00010b1768bc();
  func_0x00010529fde0(puVar1);
  func_0x000107c279a4(puVar11);
  func_0x00010b163ca4(puVar26);
  func_0x00010b174f24();
  return;
}



/* Entry: 10b15820c; end: 10b15821b;  */

ulong FUN_10b15820c(ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 >> 0x20 & 1) == 0) {
    return 0;
  }
  iVar2 = (int)param_1;
  if (0x18 < iVar2 - 0x579U) {
    uVar3 = 0x100000000;
    uVar4 = 1;
    if (iVar2 - 0x4b0U < 0x14) goto LAB_10b23fd8c;
    uVar1 = iVar2 - 0x4ce;
    if (uVar1 < 0x3d) {
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x1e000003000000fU) != 0) goto LAB_10b23fd8c;
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x1e00000000000000U) != 0) goto LAB_10b23fd84;
    }
    if ((iVar2 - 0x516U < 4) || (iVar2 == 0x53b)) goto LAB_10b23fd8c;
    if (iVar2 != 0x545) {
      uVar3 = 0;
      uVar4 = 0;
      goto LAB_10b23fd8c;
    }
  }
LAB_10b23fd84:
  uVar3 = 0x100000000;
  uVar4 = 2;
LAB_10b23fd8c:
  return uVar4 | uVar3;
}



/* Entry: 10b15821c; end: 10b158267;  */

ulong FUN_10b15821c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  FUN_10b1c41c0();
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x10) >> 4 & 1) == 0)) {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x70);
    uVar3 = uVar1 & 0xffffff00;
    uVar1 = uVar1 & 0xff;
    uVar2 = 0x100000000;
  }
  return uVar2 | (uVar3 | uVar1);
}



/* Entry: 10b158268; end: 10b1583c3;  */

void FUN_10b158268(void)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long *plStack_30;
  
  func_0x00010b174eb4();
  FUN_10b145278(auStack_78);
  func_0x00010b177080();
  FUN_10b1452a0();
  FUN_10b141ca0(auStack_78);
  FUN_10b141ca0(auStack_40);
  func_0x00010b175600();
  func_0x00010b175d7c(uStack_48);
  func_0x00010b174bac();
  func_0x00010b1753f8(plStack_30 + 9);
  __ZNSt3__15mutex4lockEv();
  plVar1 = plStack_30;
  func_0x00010b1452c4();
  if ((int)plVar1 == 0) {
    func_0x00010b1751e0();
    func_0x00010b174bc4(&PTR_FUN_110cc0280);
    lVar2 = plStack_30[0x12];
    plStack_30[0x12] = (long)plVar1;
    if (lVar2 != 0) {
      func_0x00010b174834();
    }
    unaff_x19 = 0;
  }
  else {
    func_0x00010b176dd4();
    FUN_10b1452a0();
  }
  func_0x00010b175420();
  if (lStack_88 != 0) {
    lStack_98 = lStack_88;
    lStack_90 = lStack_80;
    if (lStack_80 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    FUN_10b16a624(auStack_78);
    plVar1 = &lStack_98;
    FUN_10b141ca0();
  }
  func_0x00010b174e68();
  FUN_10b141ca0();
  if (unaff_x19 != 0) {
    func_0x00010b1747fc();
  }
  func_0x00010b175238();
  func_0x00010b1753e0();
  if (plVar1 != (long *)0x0) {
    func_0x00010b174910();
  }
  func_0x00010b176b64();
  func_0x00010b175524();
  return;
}



/* Entry: 10b1583c4; end: 10b15846b;  */

void FUN_10b1583c4(void)

{
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w11;
  int extraout_w12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b175928();
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b145278(auStack_40,extraout_x9,&uStack_50);
  func_0x00010b17708c();
  FUN_10b1452a0();
  func_0x00010b175564();
  func_0x00010b17554c();
  func_0x00010b176dc8();
  if (extraout_x9_00 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b174a1c();
      uStack_38 = extraout_x9_01;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
    } while (extraout_w11 != 0);
  }
  FUN_10b145578(auStack_40);
  func_0x00010b175564();
  func_0x00010b175698();
  func_0x00010b176b64();
  return;
}



/* Entry: 10b15846c; end: 10b1584ab;  */

void FUN_10b15846c(long param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x00010b1751b0();
  FUN_10b16a790(param_1 + 0x28);
  func_0x00010b16a80c(param_1 + 0x28,auStack_28);
  *(undefined1 *)(param_1 + 0x360) = 1;
  func_0x00010b174f2c();
  return;
}



/* Entry: 10b1584ac; end: 10b1587bf;  */

void FUN_10b1584ac(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 extraout_w8;
  long extraout_x8;
  int extraout_w9;
  code *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int iVar6;
  undefined8 *unaff_x20;
  undefined8 unaff_x23;
  long lVar7;
  undefined8 uVar8;
  long in_stack_00000018;
  
  func_0x00010b177888();
  func_0x00010b175674();
  puVar3 = (undefined8 *)0x6b0;
  __Znwm();
  *puVar3 = FUN_10b172434;
  puVar3[1] = FUN_10b1726e8;
  puVar3[0xd4] = unaff_x20;
  uVar8 = *param_2;
  puVar3[0xc9] = param_2[1];
  puVar3[200] = uVar8;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010b175858();
  func_0x00010b1758c0();
  FUN_10b14bde4();
  FUN_10b16a26c(puVar3 + 0xca,*unaff_x20,unaff_x20[1]);
  puVar4 = puVar3 + 200;
  FUN_10b16a824();
  if (((ulong)puVar4 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0xd5) = 0;
    FUN_10b1587c0(puVar3 + 200,puVar3);
    return;
  }
  func_0x00010b177498();
  func_0x00010b1770ec();
  if (((bool)in_ZR) && (func_0x00010b175da8(), (bool)in_ZR || in_NG != in_OV)) {
LAB_10b15869c:
    func_0x00010b1748b8();
  }
  else {
    puVar5 = puVar3 + 0xcc;
    if ((puVar3[0x12] != 0) && ((*(byte *)(puVar3 + 0x75) & 1) != 0)) {
      func_0x00010b177d9c();
      (*extraout_x9)();
      FUN_10b148bb4();
      if (((ulong)puVar5 & 1) == 0) {
        *(undefined1 *)(puVar3 + 0xd5) = 1;
        func_0x00010b174cf8();
        FUN_10b148ca0();
        if (in_stack_00000018 == 0) {
          return;
        }
        do {
          func_0x00010b1748f0();
          lVar7 = extraout_x9_00;
        } while (extraout_w11 != 0);
LAB_10b15867c:
        if (lVar7 != 0) {
          return;
        }
        func_0x00010b174824();
        func_0x00010b174f98();
        return;
      }
      func_0x00010b17785c();
      func_0x00010b176960();
      bVar1 = *(byte *)(puVar3 + 199);
      if ((bVar1 & 1) == 0) {
        func_0x00010b1771e8();
        iVar6 = 3;
      }
      else {
        iVar6 = 0;
      }
      func_0x00010b176bcc();
      if (bVar1 == 0) goto LAB_10b1586a4;
      goto LAB_10b15869c;
    }
    lVar7 = puVar3[0x13];
    func_0x00010b17607c();
    puVar5 = puVar4;
    func_0x00010b176d48();
    func_0x00010b177bbc(&PTR_FUN_110cc0310);
    if (lVar7 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b177548();
    func_0x00010b176c20();
    func_0x00010b1770c8();
    if (extraout_x8 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b1770b0();
    puVar3[0xd2] = unaff_x23;
    puVar3[0xd3] = puVar4;
    do {
      func_0x00010b176d58();
    } while (extraout_w9 != 0);
    func_0x00010b176bdc();
    func_0x00010b1777fc();
    if (((ulong)puVar5 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0xd5) = 2;
      func_0x00010b1751d4();
      func_0x000105c41834(puVar3 + 0xce);
      if (lVar7 == 0) {
        return;
      }
      do {
        func_0x00010b1748f0();
        lVar7 = extraout_x9_01;
      } while (extraout_w11_00 != 0);
      goto LAB_10b15867c;
    }
    func_0x00010b177874();
    func_0x00010b17780c();
    func_0x00010b1762e4();
    func_0x00010b1762dc();
    func_0x00010b174e10();
    func_0x00010b175374();
    func_0x00010b176968();
  }
  iVar6 = 3;
LAB_10b1586a4:
  func_0x00010b1751e8();
  func_0x00010b17632c();
  uVar2 = iVar6 == 3;
  if ((bool)uVar2) {
    func_0x00010b175218();
    *(undefined1 *)(puVar3 + 0xd5) = extraout_w8;
    func_0x00010b174aa8();
    if ((bool)uVar2) {
      func_0x00010b175190();
      FUN_10b14bca0();
    }
    else {
      func_0x00010b17502c();
      func_0x00010b175190();
      FUN_10b14bb60();
      func_0x00010b17539c();
    }
  }
  func_0x00010b174f7c();
  func_0x00010b176ca8();
  func_0x00010b174f24();
  return;
}



/* Entry: 10b1587c0; end: 10b15890f;  */

void FUN_10b1587c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined1 *puVar3;
  undefined1 auStack_98 [16];
  undefined1 *puStack_88;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  func_0x00010b174eb4();
  func_0x00010b175960();
  FUN_10b163c04();
  func_0x00010b177080();
  FUN_10b163c30();
  FUN_10b163af0(auStack_78);
  FUN_10b163af0(auStack_40);
  func_0x00010b175600();
  func_0x00010b175d7c(uStack_48);
  func_0x00010b174bac();
  func_0x00010b1753f8(puStack_30 + 0x368);
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_30;
  FUN_10b1640bc();
  if ((int)puVar1 == 0) {
    func_0x00010b1751e0();
    func_0x00010b174bc4(&PTR_FUN_110cc02c0);
    lVar2 = *(long *)(puStack_30 + 0x3b0);
    *(undefined1 **)(puStack_30 + 0x3b0) = puVar1;
    if (lVar2 != 0) {
      func_0x00010b174834();
    }
    func_0x00010b177ed0();
    puVar3 = puStack_30;
  }
  else {
    func_0x00010b176dd4();
    FUN_10b163c30();
    puVar3 = puStack_88;
  }
  func_0x00010b175420();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x00010b177930();
    if (param_3 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b177954();
    FUN_10b16a8ac();
    puVar1 = auStack_98;
    FUN_10b163af0();
  }
  func_0x00010b174e68();
  FUN_10b163af0();
  if (unaff_x19 != 0) {
    func_0x00010b1747fc();
  }
  func_0x00010b175238();
  func_0x00010b1753e0();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010b174910();
  }
  func_0x00010b175ca8();
  func_0x00010b175524();
  return;
}



/* Entry: 10b158910; end: 10b1589ab;  */

void FUN_10b158910(undefined8 param_1,undefined8 param_2)

{
  long extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w11;
  int extraout_w12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b175928();
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b163c04(auStack_40,param_2,&uStack_50);
  func_0x00010b17708c();
  FUN_10b163c30();
  func_0x00010b175248();
  func_0x00010b1756b0();
  func_0x00010b176dc8();
  if (extraout_x9 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b174a1c();
      uStack_38 = extraout_x9_00;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
    } while (extraout_w11 != 0);
  }
  func_0x00010b1750c8();
  FUN_10b163fe4();
  func_0x00010b175248();
  func_0x00010b1753c8();
  func_0x00010b175ca8();
  return;
}



/* Entry: 10b1589ac; end: 10b158d83;  */

void FUN_10b1589ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 extraout_w8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  undefined8 *unaff_x21;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 unaff_x30;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_58;
  
  func_0x00010b176b28();
  puVar2 = (undefined8 *)0x338;
  __Znwm();
  *puVar2 = FUN_10b172d88;
  puVar2[1] = FUN_10b1730cc;
  puVar2[0x65] = param_4;
  puVar2[100] = unaff_x21;
  uVar10 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  puVar2[0x40] = param_3[1];
  puVar2[0x3f] = uVar10;
  puVar2[0x42] = uVar13;
  puVar2[0x41] = uVar12;
  uVar11 = param_3[5];
  uVar10 = param_3[4];
  puVar2[0x44] = uVar11;
  puVar2[0x43] = uVar10;
  puVar2[0x45] = param_3[6];
  func_0x00010b175858();
  func_0x00010b175008();
  FUN_10b16a26c(puVar2 + 0x58,*unaff_x21,unaff_x21[1]);
  puVar3 = puVar2 + 0x2e;
  FUN_10b1571dc();
  func_0x00010b177728();
  if (((ulong)puVar3 & 1) == 0) {
    *(undefined1 *)((long)puVar2 + 0x333) = 0;
    func_0x00010b175c94();
    goto LAB_10b158c4c;
  }
  plVar1 = puVar2 + 0x5a;
  func_0x00010b1776fc();
  func_0x00010b17549c();
  if (*plVar1 == 0) {
    puVar2[0x5c] = 0;
    puVar2[0x5d] = 0;
LAB_10b158aac:
    func_0x00010b175314();
    plVar5 = (long *)&UNK_10f730926;
    FUN_10b130968(puVar2 + 0x46);
    func_0x00010b1756c4();
    if ((bool)in_ZR) {
      uStack_88 = puVar2[0x47];
      uStack_90 = puVar2[0x46];
      uStack_80 = puVar2[0x48];
      func_0x00010b177e8c();
      cStack_78 = '\x01';
    }
    func_0x00010b176674();
    FUN_10b14be4c();
    func_0x00010b176c10();
    func_0x00010b176a60();
    func_0x00010b1761d8();
  }
  else {
    func_0x00010b175428();
    func_0x00010b1776f4();
    if (puVar2[0x5c] == 0) goto LAB_10b158aac;
    if (*plVar1 == 0) {
      uVar6 = 0;
      uVar9 = 0;
      auStack_b0[0] = 0;
      cStack_78 = '\0';
    }
    else {
      func_0x00010b176858();
      func_0x00010b176c98();
      in_ZR = cStack_78 == '\x01';
      if ((bool)in_ZR) {
        uVar6 = uStack_88._4_1_;
        func_0x00010b177ea4();
        uVar9 = (undefined1)uStack_80;
      }
      else {
        uVar6 = 0;
        uVar9 = 0;
      }
    }
    lVar7 = puVar2[100];
    func_0x0001052b41f8(auStack_b0);
    uVar8 = *(undefined8 *)(lVar7 + 0x58);
    puVar2[0x21] = puVar2[0x5c];
    puVar2[0x22] = puVar2[0x5d];
    if (puVar2[0x5d] != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    *(undefined1 *)(puVar2 + 0x23) = uVar6;
    func_0x00010b177044(puVar2[100]);
    *(undefined1 *)((long)puVar2 + 0x11c) = uVar9;
    func_0x00010b1764a8();
    func_0x00010b175a90(puVar2 + 0x12);
    func_0x00010b177e20();
    func_0x00010b176ff0();
    FUN_10b153dec(uVar8);
    func_0x00010b176abc();
    func_0x00010b176ab4();
    func_0x00010b1768f4();
    func_0x00010b176698();
    func_0x00010b177dcc();
    puVar2[0x38] = uVar11;
    puVar2[0x37] = uVar10;
    puVar2[0x3a] = uVar13;
    puVar2[0x39] = uVar12;
    puVar2[0x3c] = puVar2[0x44];
    puVar2[0x3b] = puVar2[0x43];
    puVar2[0x3d] = puVar2[0x45];
    *(undefined1 *)(puVar2 + 0x3e) = 1;
    func_0x00010b1756f4();
    func_0x000107c278b8(puVar2 + 0x55);
    puVar3 = puVar2 + 0x60;
    uVar4 = puVar2[100];
    plVar5 = puVar2 + 0x62;
    FUN_10b158f6c(puVar3,uVar4,plVar5,puVar2 + 0x37,puVar2[0x65],1,puVar2 + 0x55);
    func_0x00010b177638();
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)((long)puVar2 + 0x333) = 1;
      puStack_70 = puVar2;
      puStack_68 = puVar3;
      func_0x000105c41834(auStack_b0,puVar3,&puStack_70);
      if (lStack_a8 != 0) {
        do {
          func_0x00010b1748f0();
        } while (extraout_w11 != 0);
        if (extraout_x9 == 0) {
          func_0x00010b174824();
          func_0x00010b174f98();
        }
      }
      goto LAB_10b158c4c;
    }
    func_0x00010b176220(puVar2 + 0x2e);
    func_0x00010b1771f4();
    func_0x00010b176b44();
    func_0x00010b175484();
    func_0x00010b176260();
    func_0x00010b176248();
    func_0x00010b175bb0();
  }
  func_0x00010b176c40();
  func_0x00010b176970();
  func_0x00010b1762a8();
  func_0x00010b175654();
  *(undefined1 *)((long)puVar2 + 0x333) = extraout_w8;
  func_0x00010b174aa8();
  if ((bool)in_ZR) {
    plStack_58 = plVar5;
    func_0x00010b177480();
  }
  else {
    func_0x00010b1776a4();
    plStack_58 = plVar1;
    func_0x00010b177474();
    func_0x00010b176810();
  }
  func_0x00010b174f7c();
  func_0x00010b174f24();
LAB_10b158c4c:
  func_0x00010b177fd8(unaff_x30);
  return;
}



/* Entry: 10b158d84; end: 10b158ecf;  */

void FUN_10b158d84(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined1 *puVar3;
  undefined1 auStack_98 [16];
  undefined1 *puStack_88;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  undefined1 *puStack_30;
  
  func_0x00010b174eb4();
  func_0x00010b175960();
  FUN_10b163768();
  func_0x00010b177080();
  FUN_10b163794();
  FUN_10b163654(auStack_78);
  func_0x00010b176568();
  func_0x00010b175600();
  func_0x00010b175d7c(uStack_48);
  func_0x00010b174bac();
  func_0x00010b1753f8(puStack_30 + 0x48);
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_30;
  FUN_10b164280();
  if ((int)puVar1 == 0) {
    func_0x00010b1751e0();
    func_0x00010b174bc4(&PTR_FUN_110cc0360);
    lVar2 = *(long *)(puStack_30 + 0x90);
    *(undefined1 **)(puStack_30 + 0x90) = puVar1;
    if (lVar2 != 0) {
      func_0x00010b174834();
    }
    func_0x00010b177ed0();
    puVar3 = puStack_30;
  }
  else {
    func_0x00010b176dd4();
    FUN_10b163794();
    puVar3 = puStack_88;
  }
  func_0x00010b175420();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x00010b177930();
    if (param_3 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b177954();
    FUN_10b16ac24();
    puVar1 = auStack_98;
    FUN_10b163654();
  }
  func_0x00010b174e68();
  FUN_10b163654();
  if (unaff_x19 != 0) {
    func_0x00010b1747fc();
  }
  func_0x00010b175238();
  func_0x00010b1753e0();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010b174910();
  }
  func_0x00010b175cb8();
  func_0x00010b175524();
  return;
}



/* Entry: 10b158ed0; end: 10b158f6b;  */

void FUN_10b158ed0(undefined8 param_1,undefined8 param_2)

{
  long extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w11;
  int extraout_w12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b175928();
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b163768(auStack_40,param_2,&uStack_50);
  func_0x00010b17708c();
  FUN_10b163794();
  func_0x00010b175250();
  func_0x00010b17553c();
  func_0x00010b176dc8();
  if (extraout_x9 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b174a1c();
      uStack_38 = extraout_x9_00;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
    } while (extraout_w11 != 0);
  }
  func_0x00010b1750c8();
  FUN_10b1641b0();
  func_0x00010b175250();
  func_0x00010b17552c();
  func_0x00010b175cb8();
  return;
}



/* Entry: 10b158f6c; end: 10b15947f;  */

void FUN_10b158f6c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  undefined8 uVar8;
  long lVar9;
  code *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x21;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  byte in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000078;
  
  func_0x00010b177fac();
  func_0x00010b176b28();
  puVar5 = (undefined8 *)0x410;
  __Znwm();
  *puVar5 = FUN_10b1728b0;
  puVar5[1] = FUN_10b172d04;
  puVar5[0x7e] = param_4;
  puVar5[0x7f] = param_5;
  puVar5[0x80] = unaff_x21;
  uVar8 = *param_2;
  puVar5[0x71] = param_2[1];
  puVar5[0x70] = uVar8;
  *param_2 = 0;
  param_2[1] = 0;
  uVar8 = *param_3;
  uVar15 = param_3[3];
  uVar14 = param_3[2];
  puVar5[0x5b] = param_3[1];
  puVar5[0x5a] = uVar8;
  puVar5[0x5d] = uVar15;
  puVar5[0x5c] = uVar14;
  uVar8 = param_3[4];
  uVar15 = param_3[7];
  uVar14 = param_3[6];
  puVar5[0x5f] = param_3[5];
  puVar5[0x5e] = uVar8;
  puVar5[0x61] = uVar15;
  puVar5[0x60] = uVar14;
  uVar14 = param_6[1];
  uVar8 = *param_6;
  puVar5[0x6f] = param_6[2];
  puVar5[0x6e] = uVar14;
  puVar5[0x6d] = uVar8;
  func_0x00010b177c4c();
  func_0x00010b175858();
  func_0x00010b175008();
  FUN_10b16a26c(puVar5 + 0x72,*unaff_x21,unaff_x21[1]);
  puVar7 = puVar5 + 0x70;
  FUN_10b16a59c();
  if (((ulong)puVar7 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x81) = 0;
    func_0x00010b175688(puVar5 + 0x70);
    return;
  }
  puVar7 = puVar5 + 0x70;
  FUN_10b1583c4(puVar5 + 0x74);
  puVar5[0x77] = puVar5[0x75];
  puVar5[0x76] = puVar5[0x74];
  if (puVar5[0x75] != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1774bc(puVar5[0x80]);
  puVar6 = puVar5 + 0x12;
  FUN_10b16b810();
  if (((ulong)puVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x81) = 1;
    func_0x00010b175cc8(puVar5 + 0x12);
    return;
  }
  func_0x00010b1775d0();
  func_0x00010b17614c();
  func_0x00010b176200();
  if ((*(byte *)(puVar5 + 0x3f) & 1) == 0) {
    func_0x00010b1771c4();
LAB_10b159224:
    func_0x00010b176208();
    func_0x00010b176990();
    func_0x00010b176218();
    func_0x00010b175bc0();
    *(undefined1 *)(puVar5 + 0x81) = extraout_w8;
    func_0x00010b174aa8();
    if ((bool)in_ZR) {
      in_stack_00000078 = puVar7;
      func_0x00010b1752f8();
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&stack0x00000070);
      in_stack_00000078 = (undefined8 *)&stack0x00000070;
      func_0x00010b1752ec();
      func_0x00010b1761f8();
    }
    func_0x00010b174f7c();
    func_0x00010b1761c8();
    func_0x00010b176a30();
    func_0x00010b174f24();
  }
  else {
    puVar7 = puVar5 + 0x7c;
    func_0x00010b176ee8(puVar5[0x74]);
    (*extraout_x9)(puVar7);
    puVar6 = puVar7;
    FUN_10b16b9dc();
    if (((ulong)puVar6 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x81) = 2;
      in_stack_00000060 = puVar5;
      in_stack_00000068 = puVar7;
      FUN_10b16ba64(&stack0x00000020,puVar7,&stack0x00000060);
      if (in_stack_00000028 == 0) {
        return;
      }
      do {
        func_0x00010b1748f0();
        lVar13 = extraout_x9_00;
      } while (extraout_w11 != 0);
    }
    else {
      FUN_10b15a1b8(puVar5 + 0x7a,puVar7);
      FUN_10b15a0e4(puVar5 + 0x12,puVar5[0x7a]);
      puVar6 = puVar5 + 0x52;
      if ((*(byte *)(puVar5 + 0x3f) & 1) == 0) {
        ___cxa_allocate_exception(0x48);
        puVar5[0x53] = puVar5[0x37];
        *puVar6 = puVar5[0x36];
        puVar5[0x54] = puVar5[0x38];
        func_0x00010b176470();
        if ((bool)in_ZR) {
          func_0x00010b175b40();
        }
        func_0x0001052a4718();
        func_0x00010b176178();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10b15937c);
        (*pcVar4)();
      }
      puVar1 = puVar5 + 0x62;
      puVar7 = (undefined8 *)puVar5[0x36];
      puVar5[0x49] = puVar7;
      uVar8 = puVar5[0x37];
      func_0x00010b176f90(uVar8,puVar5[0x39]);
      puVar5[0x39] = 0;
      puVar5[0x3a] = 0;
      puVar5[0x3b] = 0;
      puVar5[0x50] = puVar5[0x3d];
      puVar5[0x4f] = puVar5[0x3c];
      func_0x00010b175ebc();
      *puVar6 = 0;
      puVar5[0x53] = 0;
      puVar5[0x54] = 0;
      bVar3 = *(byte *)(puVar5 + 0x69);
      if ((bVar3 != 1) ||
         (((*(byte *)(puVar5 + 100) & 1) == 0 && ((*(byte *)(puVar5 + 0x66) & 1) == 0)))) {
        func_0x00010b177cd8();
        FUN_10b180068(&stack0x00000020);
        puVar5[99] = in_stack_00000028;
        *puVar1 = in_stack_00000020;
        puVar5[0x65] = in_stack_00000038;
        puVar5[100] = in_stack_00000030;
        puVar5[0x67] = in_stack_00000048;
        puVar5[0x66] = in_stack_00000040;
        puVar5[0x68] = in_stack_00000050;
        if ((bVar3 & 1) == 0) {
          *(undefined1 *)(puVar5 + 0x69) = 1;
        }
        puVar7 = (undefined8 *)puVar5[0x49];
        uVar8 = puVar5[0x4a];
      }
      func_0x00010b175bcc(uVar8,puVar5[0x80]);
      func_0x00010b1769e8();
      FUN_10b15ab78();
      func_0x00010b175e98();
      func_0x00010b1769e8();
      FUN_10b15a258();
      lVar13 = 0;
      puVar2 = puVar5 + 0x78;
      lVar12 = puVar5[0x80];
      plVar10 = (long *)puVar5[0x50];
      for (plVar11 = (long *)puVar5[0x4f]; in_ZR = plVar11 == plVar10, !(bool)in_ZR;
          plVar11 = plVar11 + 9) {
        if (((*(byte *)(lVar12 + 0x68) & 1) != 0) ||
           (puVar7 = puVar1,
           FUN_10b15a748(&stack0x00000020,puVar1,plVar11[3],(char)plVar11[5],lVar13),
           (in_stack_00000058 & 1) != 0)) {
          puVar7 = (undefined8 *)*plVar11;
          func_0x00010b1769e8(puVar5[0x80],puVar7,(plVar11[1] - (long)puVar7) / 0x68);
          FUN_10b15ab78();
        }
        if ((char)plVar11[8] == '\x01') {
          lVar9 = plVar11[7] - plVar11[6];
        }
        else {
          lVar9 = 0;
        }
        lVar13 = lVar9 + lVar13;
      }
      func_0x00010b177c38();
      func_0x00010b177e8c();
      FUN_10b15af44(puVar2,puVar5 + 0x6a);
      func_0x00010b17692c();
      FUN_10b1664d0(puVar6);
      puVar6 = puVar2;
      func_0x000105c417a8();
      if (((ulong)puVar6 & 1) != 0) {
        func_0x00010b1776c8(puVar5 + 0x40);
        func_0x00010b175c20();
        func_0x00010b1761a8();
        func_0x00010b176144();
        func_0x00010b177434();
        func_0x00010b17630c();
        func_0x00010b1771dc();
        func_0x00010b176914();
        goto LAB_10b159224;
      }
      *(undefined1 *)(puVar5 + 0x81) = 3;
      in_stack_00000060 = puVar5;
      in_stack_00000068 = puVar2;
      func_0x00010b1776c0(&stack0x00000020);
      if (in_stack_00000028 == 0) {
        return;
      }
      do {
        func_0x00010b1748f0();
        lVar13 = extraout_x9_01;
      } while (extraout_w11_00 != 0);
    }
    if (lVar13 == 0) {
      func_0x00010b174824();
      func_0x00010b174f98();
    }
  }
  return;
}



/* Entry: 10b159480; end: 10b159d4b;  */

void FUN_10b159480(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  uint uVar13;
  uint extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  undefined8 extraout_x9_05;
  long extraout_x9_06;
  undefined1 extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  long extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long extraout_x11;
  int iVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 in_stack_00000080;
  undefined1 in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined **in_stack_000000d0;
  ulong in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  func_0x00010b177f90();
  puVar8 = (undefined8 *)0x278;
  __Znwm();
  puVar3 = puVar8 + 0x29;
  *puVar8 = FUN_10b16efdc;
  puVar8[1] = FUN_10b16f734;
  uVar18 = *param_5;
  puVar8[0x3c] = param_5[1];
  puVar8[0x3b] = uVar18;
  puVar8[0x4b] = param_4;
  *param_5 = 0;
  param_5[1] = 0;
  func_0x00010b1642b8(puVar8 + 2);
  puVar15 = puVar8 + 7;
  *(undefined1 *)puVar15 = 0;
  *(undefined1 *)(puVar8 + 0x12) = 0;
  FUN_10b164760(extraout_x8,puVar8[5],puVar8[6]);
  puVar17 = puVar8 + 0x3d;
  FUN_10b16a26c(puVar17,*param_4,param_4[1]);
  plVar16 = puVar8 + 0x3f;
  *plVar16 = 0;
  puVar8[0x40] = 0;
  puVar8[0x4c] = param_4[0xb];
  func_0x00010b175608();
  if (((ulong)puVar17 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0x4e) = 0;
    lVar12 = puVar8[0x4c];
    uVar18 = *(undefined8 *)(lVar12 + 0x68);
    func_0x00010b177610();
    lVar12 = *(long *)(lVar12 + 0x68);
    if ((*(byte *)(lVar12 + 0x78) & 1) != 0) {
      func_0x00010b175840();
      func_0x00010b174f14(*puVar8);
      return;
    }
    puVar3 = *(undefined8 **)(lVar12 + 0x88);
    bVar6 = *(undefined8 **)(lVar12 + 0x90) <= puVar3;
    if (bVar6) {
      lVar19 = *(long *)(lVar12 + 0x80);
      lVar11 = (long)puVar3 - lVar19 >> 3;
      if (lVar11 + 1U >> 0x3d != 0) {
        func_0x00010552fc6c();
LAB_10b159bf4:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b159bf8);
        (*pcVar5)();
      }
      func_0x00010b174770((long)*(undefined8 **)(lVar12 + 0x90) - lVar19);
      uVar9 = extraout_x9_02;
      if (bVar6) {
        uVar9 = extraout_x8_06;
      }
      if (uVar9 == 0) {
        lVar10 = 0;
      }
      else {
        if (uVar9 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10b159bf4;
        }
        lVar10 = uVar9 << 3;
        __Znwm();
      }
      puVar3 = (undefined8 *)(lVar10 + ((long)puVar3 - lVar19));
      puVar17 = puVar3 + 1;
      *puVar3 = puVar8;
      func_0x00010b174e7c();
      *(undefined8 **)(lVar12 + 0x80) = puVar3 + -lVar11;
      *(undefined8 **)(lVar12 + 0x88) = puVar17;
      *(ulong *)(lVar12 + 0x90) = lVar10 + uVar9 * 8;
      if (lVar19 != 0) {
        func_0x00010b175b30();
      }
    }
    else {
      puVar17 = puVar3 + 1;
      *puVar3 = puVar8;
    }
    *(undefined8 **)(lVar12 + 0x88) = puVar17;
LAB_10b159bbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar18);
    return;
  }
  func_0x00010b17527c(puVar8[0x4c]);
  puVar1 = puVar8 + 0x13;
  puVar2 = puVar8 + 0x1f;
  lVar12 = puVar17[4];
  lVar19 = puVar17[5];
  puVar8[0x14] = lVar19;
  puVar8[0x13] = lVar12;
  if (lVar19 != 0) {
    do {
      func_0x00010b1749b8();
      lVar12 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  if (lVar12 != 0) {
    func_0x00010b1778f4();
    lVar12 = extraout_x9;
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010b174af4();
        lVar12 = extraout_x9_00;
      } while (extraout_w11_00 != 0);
    }
    puVar8[0x4d] = *(undefined8 *)(lVar12 + 0x10);
    func_0x00010b176cb8();
    if (((ulong)puVar17 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x4e) = 1;
      lVar12 = puVar8[0x4d];
      uVar18 = *(undefined8 *)(lVar12 + 0x100);
      __ZNSt3__115recursive_mutex4lockEv(uVar18);
      lVar12 = *(long *)(lVar12 + 0x100);
      if ((*(byte *)(lVar12 + 0x78) & 1) != 0) {
        __ZNSt3__115recursive_mutex6unlockEv(uVar18);
        (*(code *)*puVar8)(puVar8);
        return;
      }
      puVar3 = *(undefined8 **)(lVar12 + 0x88);
      uVar7 = *(undefined8 **)(lVar12 + 0x90) <= puVar3;
      if ((bool)uVar7) {
        lVar19 = *(long *)(lVar12 + 0x80);
        func_0x00010b177c2c();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
          goto LAB_10b159bf4;
        }
        func_0x00010b174770(extraout_x8_07 - lVar19);
        uVar9 = extraout_x9_04;
        if ((bool)uVar7) {
          uVar9 = extraout_x8_08;
        }
        if (uVar9 == 0) {
          lVar11 = 0;
        }
        else {
          if (uVar9 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b159bf4;
          }
          lVar11 = uVar9 << 3;
          __Znwm();
        }
        puVar3 = (undefined8 *)((long)puVar3 + (lVar11 - lVar19));
        puVar17 = puVar3 + 1;
        *puVar3 = puVar8;
        func_0x00010b176f6c();
        _memcpy();
        *(undefined8 **)(lVar12 + 0x80) = puVar3 + -extraout_x11;
        *(undefined8 **)(lVar12 + 0x88) = puVar17;
        *(ulong *)(lVar12 + 0x90) = lVar11 + uVar9 * 8;
        if (lVar19 != 0) {
          __ZdlPv(lVar19);
        }
      }
      else {
        puVar17 = puVar3 + 1;
        *puVar3 = puVar8;
      }
      *(undefined8 **)(lVar12 + 0x88) = puVar17;
      goto LAB_10b159bbc;
    }
    func_0x00010b176cb0(puVar8[0x4d]);
    func_0x00010b176a88();
    uVar18 = in_stack_00000068;
    lVar12 = (long)in_stack_00000060;
    in_stack_00000060 = (undefined8 *)0x0;
    in_stack_00000068 = (undefined8 *)0x0;
    in_stack_000000a8 = puVar8[0x40];
    in_stack_000000a0 = *plVar16;
    puVar8[0x40] = uVar18;
    *plVar16 = lVar12;
    func_0x0001052a9ed0(&stack0x000000a0);
    func_0x0001052a9ed0(&stack0x00000060);
    func_0x00010b1777a0();
  }
  func_0x00010b175b94();
  if ((*plVar16 == 0) || (func_0x00010b177bb0(), *(long *)(extraout_x8_02 + 0x150) == 0)) {
    func_0x00010b1758f8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar8 + 0x38);
    func_0x00010b176874();
    in_stack_00000068 = (undefined8 *)puVar8[0x39];
    in_stack_00000060 = (undefined8 *)puVar8[0x38];
    func_0x00010b177b64();
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    uVar13 = (uint)*(byte *)(puVar8 + 0x37);
    in_stack_00000070 = extraout_x8_05;
    in_stack_00000078 = extraout_x9_01;
    if (*(byte *)(puVar8 + 0x37) == 1) {
      func_0x00010b1763f8(&stack0x00000060);
      uVar13 = extraout_w9;
      in_stack_00000098 = extraout_w10;
    }
    in_stack_000000b0 = in_stack_00000070;
    in_stack_000000a8 = (long)in_stack_00000068;
    in_stack_000000a0 = (long)in_stack_00000060;
    in_stack_00000068 = (undefined8 *)0x0;
    in_stack_00000070 = 0;
    in_stack_00000060 = (undefined8 *)0x0;
    in_stack_000000b8 = 2;
    in_stack_000000c0 = in_stack_000000c0 & 0xffffffffffffff00;
    in_stack_000000d8 = in_stack_000000d8 & 0xffffffffffffff00;
    if (uVar13 != 0) {
      func_0x00010b1763d8();
      in_stack_000000d8 = CONCAT71(in_stack_000000d8._1_7_,extraout_w8_00);
    }
    func_0x00010b1773f0();
    func_0x0001052a03ac(&stack0x000000a0);
    func_0x0001052a03ac(&stack0x00000060);
    func_0x00010b1757e0();
    func_0x00010b176884();
    func_0x00010b1776b8();
    func_0x00010b1757e8();
  }
  else {
    FUN_10b16adb8(puVar2,1);
    puVar17 = (undefined8 *)puVar8[0x21];
    lVar12 = puVar8[0x3c];
    in_stack_000000a8 = puVar8[0x3c];
    in_stack_000000a0 = puVar8[0x3b];
    puVar17[2] = 0;
    *puVar17 = &PTR_FUN_110cc0908;
    puVar17[1] = 0;
    if (lVar12 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_00 != 0);
    }
    FUN_10b16ae24(puVar17 + 3,&stack0x000000a0);
    func_0x00010b17688c();
    func_0x00010b176f00();
    func_0x00010b16b410(puVar2);
    puVar8[0x43] = puVar8[0x3b];
    puVar8[0x44] = puVar8[0x3c];
    if (puVar8[0x3c] != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b177b84();
    if (extraout_x8_03 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_02 != 0);
    }
    uVar9 = puVar8[0x4b];
    func_0x00010b177390(puVar2,uVar9,puVar8 + 0x43);
    func_0x00010b177638();
    if ((uVar9 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x4e) = 2;
      in_stack_00000060 = puVar8;
      in_stack_00000068 = puVar2;
      func_0x000105c41834(&stack0x000000a0,puVar2,&stack0x00000060);
      if (in_stack_000000a8 == 0) {
        return;
      }
      do {
        func_0x00010b1748f0();
        lVar12 = extraout_x9_03;
      } while (extraout_w11_01 != 0);
LAB_10b1598ec:
      if (lVar12 != 0) {
        return;
      }
      func_0x00010b174824();
      func_0x00010b174f98();
      return;
    }
    func_0x00010b176220(puVar1);
    func_0x00010b175484();
    func_0x00010b1760cc();
    func_0x00010b1760bc();
    bVar4 = *(byte *)(puVar8 + 0x1b);
    uVar7 = bVar4 == 1;
    if ((bool)uVar7) {
      in_stack_000000a8 = puVar8[0x14];
      in_stack_000000a0 = *puVar1;
      func_0x00010b175444(puVar8[0x15]);
      in_stack_000000b8 = puVar8[0x16];
      in_stack_000000c0 = in_stack_000000c0 & 0xffffffffffffff00;
      in_stack_000000d8 = in_stack_000000d8 & 0xffffffffffffff00;
      in_stack_000000b0 = extraout_x8_04;
      func_0x00010b177b78();
      if ((bool)uVar7) {
        func_0x00010b176424(&stack0x000000a0);
        in_stack_000000d8 = CONCAT71(in_stack_000000d8._1_7_,extraout_w8);
      }
      func_0x00010b1773f0();
      func_0x0001052a03ac(&stack0x000000a0);
      iVar14 = 3;
    }
    else {
      iVar14 = 0;
    }
    func_0x0001052a038c(puVar1);
    if ((bVar4 & 1) == 0) {
      FUN_10b16455c(puVar1,puVar8[0x41] + 0x40);
      puVar17 = puVar1;
      FUN_10b16b444();
      if (((ulong)puVar17 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x4e) = 3;
        in_stack_00000060 = puVar8;
        in_stack_00000068 = puVar1;
        FUN_10b16b4cc(&stack0x000000a0,puVar1,&stack0x00000060);
        if (in_stack_000000a8 == 0) {
          return;
        }
        do {
          func_0x00010b1748f0();
          lVar12 = extraout_x9_06;
        } while (extraout_w11_02 != 0);
        goto LAB_10b1598ec;
      }
      FUN_10b159d4c(puVar8 + 0x47,puVar1);
      func_0x00010b176a50();
      func_0x00010b177bb0();
      plVar16 = *(long **)(extraout_x8_09 + 0x48);
      puVar8[0x29] = puVar8[0x3d];
      puVar8[0x2a] = puVar8[0x3e];
      if (puVar8[0x3e] != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_03 != 0);
      }
      puVar8[0x2b] = puVar8[0x3f];
      puVar8[0x2c] = puVar8[0x40];
      if (puVar8[0x40] != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_04 != 0);
      }
      puVar8[0x2d] = puVar8[0x47];
      puVar8[0x2e] = puVar8[0x48];
      if (puVar8[0x48] != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_05 != 0);
      }
      puVar17 = puVar8 + 0x2f;
      func_0x00010b1642b8();
      func_0x00010b177350();
      in_stack_000000a8 = puVar8[0x2a];
      uVar22 = puVar8[0x2a];
      uVar21 = *puVar3;
      uVar24 = puVar8[0x2c];
      uVar23 = puVar8[0x2b];
      *puVar3 = 0;
      puVar8[0x2a] = 0;
      in_stack_000000b8 = puVar8[0x2c];
      uVar9 = puVar8[0x2d];
      puVar8[0x2b] = 0;
      puVar8[0x2c] = 0;
      uVar20 = puVar8[0x2e];
      uVar18 = uVar21;
      in_stack_000000a0 = uVar21;
      in_stack_000000b0 = uVar23;
      in_stack_000000c0 = uVar9;
      func_0x00010b177cac();
      puVar8[0x30] = 0;
      puVar8[0x31] = 0;
      in_stack_000000f0 = puVar8[0x33];
      puVar8[0x32] = 0;
      puVar8[0x33] = 0;
      in_stack_000000d0 = &PTR_FUN_110cbf920;
      in_stack_000000c8 = uVar20;
      in_stack_000000d8 = param_3;
      in_stack_000000e0 = extraout_x8_10;
      in_stack_000000e8 = uVar18;
      func_0x00010b177aa8();
      puVar8[0x13] = extraout_x8_11;
      puVar8[0x14] = extraout_x9_05;
      func_0x00010b17607c();
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      puVar17[1] = uVar22;
      *puVar17 = uVar21;
      puVar17[3] = uVar24;
      puVar17[2] = uVar23;
      in_stack_000000b0 = 0;
      in_stack_000000b8 = 0;
      puVar17[4] = uVar9;
      puVar17[5] = uVar20;
      func_0x00010b176a90();
      puVar17[6] = &PTR_FUN_110cbf920;
      puVar8[0x15] = puVar17;
      (**(code **)(*plVar16 + 0x10))(plVar16,puVar1);
      func_0x00010b174ad4();
      FUN_10b164798(&stack0x000000a0);
      func_0x00010b176818();
      puVar17 = puVar8 + 0x49;
      FUN_10b16b810();
      if (((ulong)puVar17 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x4e) = 4;
        func_0x00010b175cc8(puVar8 + 0x49);
        return;
      }
      FUN_10b159f34(puVar2,puVar8 + 0x49);
      FUN_10b16ad94(puVar15);
      FUN_10b1649fc(puVar15,puVar2);
      *(undefined1 *)(puVar8 + 0x11) = 1;
      *(undefined1 *)(puVar8 + 0x12) = 1;
      func_0x00010b1777ec();
      func_0x00010b1757f0();
      FUN_10b15a0b8(puVar3);
      func_0x00010b176048();
      iVar14 = 3;
    }
    FUN_10b16b420(puVar8 + 0x41);
    func_0x00010b1776b8();
    func_0x00010b1757e8();
    if (iVar14 != 3) goto LAB_10b159890;
  }
  func_0x00010b1769c0();
  *(undefined1 *)(puVar8 + 0x4e) = extraout_w8_01;
  if (*(char *)(puVar8 + 0x11) == '\x01') {
    FUN_10b164850(puVar8 + 2,puVar15);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&stack0x00000100,puVar15);
    func_0x00010b177468();
    func_0x00010b1761f8();
  }
LAB_10b159890:
  func_0x00010b1768a4();
  func_0x00010b1774c8();
  func_0x00010b174f24();
  return;
}



/* Entry: 10b159d4c; end: 10b159deb;  */

void FUN_10b159d4c(void)

{
  long extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w11;
  int extraout_w12;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b1764ec();
  FUN_10b1645bc(auStack_40);
  func_0x00010b17708c();
  FUN_10b1645ec();
  func_0x00010b1753d8();
  func_0x00010b175534();
  func_0x00010b176dc8();
  if (extraout_x9 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b174a1c();
      uStack_38 = extraout_x9_00;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
    } while (extraout_w11 != 0);
  }
  FUN_10b164610(auStack_40);
  func_0x00010b1753d8();
  func_0x00010b1753b8();
  func_0x00010b175cb0();
  return;
}



/* Entry: 10b159dec; end: 10b159f33;  */

void FUN_10b159dec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long lStack_88;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b174eb4();
  func_0x00010b175960();
  FUN_10b16450c();
  func_0x00010b177080();
  FUN_10b164538();
  func_0x00010b17715c();
  FUN_10b1643f8(auStack_40);
  func_0x00010b175600();
  func_0x00010b175d7c(uStack_48);
  func_0x00010b174bac();
  func_0x00010b1753f8(lStack_30 + 0x88);
  __ZNSt3__15mutex4lockEv();
  lVar1 = lStack_30;
  FUN_10b164a64();
  if ((int)lVar1 == 0) {
    func_0x00010b1751e0();
    func_0x00010b174bc4(&PTR_FUN_110cc03a0);
    lVar2 = *(long *)(lStack_30 + 0xd0);
    *(long *)(lStack_30 + 0xd0) = lVar1;
    if (lVar2 != 0) {
      func_0x00010b174834();
    }
    func_0x00010b177ed0();
    lStack_88 = lStack_30;
  }
  else {
    func_0x00010b176dd4();
    FUN_10b164538();
  }
  func_0x00010b175420();
  if (lStack_88 != 0) {
    func_0x00010b177930();
    if (param_3 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b177954();
    FUN_10b16b898();
    func_0x00010b1766d0();
  }
  func_0x00010b174e68();
  FUN_10b1643f8();
  if (unaff_x19 != 0) {
    func_0x00010b1747fc();
  }
  func_0x00010b175238();
  func_0x00010b1753e0();
  if (lVar1 != 0) {
    func_0x00010b174910();
  }
  func_0x00010b1762b8();
  func_0x00010b175524();
  return;
}



/* Entry: 10b159f34; end: 10b15a0b7;  */

void FUN_10b159f34(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10b16450c(&uStack_30,param_2,&uStack_88);
  FUN_10b164538(&uStack_78,&uStack_30);
  func_0x00010b1762b8();
  FUN_10b1643f8(&uStack_88);
  uStack_a8 = uStack_78;
  lStack_a0 = lStack_70;
  if (lStack_70 == 0) {
    uStack_90 = 0;
    uStack_98 = uStack_78;
  }
  else {
    do {
      func_0x00010b174a1c();
      uStack_90 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
      uStack_98 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b16450c(&lStack_40,&uStack_98,&uStack_50);
  FUN_10b164538(&uStack_30,&lStack_40);
  FUN_10b1643f8(&lStack_40);
  FUN_10b1643f8(&uStack_50);
  uVar1 = uStack_30;
  lStack_40 = uStack_30 + 0x88;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  uStack_60 = uVar1;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  while (uVar3 = uVar1, FUN_10b164a64(), (uVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar1 + 0x58,&lStack_40);
  }
  FUN_10b1643f8(&uStack_60);
  if (*(long *)(uVar1 + 200) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b15a074);
    (*pcVar2)();
  }
  func_0x00010b1764c8();
  FUN_10b1649fc();
  func_0x00010b176560();
  func_0x00010b1762b8();
  func_0x00010b1766d0();
  FUN_10b1643f8(&uStack_a8);
  func_0x00010b17715c();
  return;
}



/* Entry: 10b15a0b8; end: 10b15a0e3;  */

long FUN_10b15a0b8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1770a4();
  func_0x000107c27d78();
  func_0x0001052a9ed0(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x00010b1750d4();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b15a0e4; end: 10b15a1b7;  */

void FUN_10b15a0e4(undefined1 *param_1,long *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 auStack_228 [280];
  byte bStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [208];
  
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
    param_1[0x118] = 0;
  }
  else {
    (**(code **)(*param_2 + 0x10))(auStack_108,param_2);
    FUN_10b164b20(auStack_228,auStack_108);
    bVar1 = (bStack_110 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      puVar2 = auStack_228;
      FUN_10b164bc0(puVar2);
      FUN_10b164c44(auStack_f0,puVar2);
      FUN_10b164c10(param_1,auStack_f0);
      func_0x00010792d368(auStack_f0);
    }
    param_1[0x118] = !bVar1;
    FUN_10b164d1c(auStack_228);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  }
  return;
}



/* Entry: 10b15a1b8; end: 10b15a257;  */

void FUN_10b15a1b8(void)

{
  long extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w11;
  int extraout_w12;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b1764ec();
  FUN_10b164d3c(auStack_40);
  func_0x00010b17708c();
  FUN_10b164d6c();
  func_0x00010b1753d0();
  func_0x00010b175544();
  func_0x00010b176dc8();
  if (extraout_x9 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b174a1c();
      uStack_38 = extraout_x9_00;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
    } while (extraout_w11 != 0);
  }
  FUN_10b164d90(auStack_40);
  func_0x00010b1753d0();
  func_0x00010b1753c0();
  func_0x00010b175ca0();
  return;
}



/* Entry: 10b15a258; end: 10b15a747;  */

void FUN_10b15a258(long param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong *param_5,
                  ulong *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong *puVar2;
  undefined1 uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 extraout_x8;
  long lVar11;
  ulong uVar12;
  int extraout_w10;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 uVar18;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong auStack_d0 [4];
  undefined4 uStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  char cStack_68;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined1 auStack_20 [8];
  ulong *puStack_18;
  undefined8 uStack_10;
  
  func_0x00010b176cc0();
  lVar15 = param_1;
  puVar6 = param_2;
  puVar7 = param_3;
  uVar9 = param_4;
  puVar10 = param_5;
  func_0x00010b1749f4();
  uStack_10 = extraout_x8;
  if ((*(char *)(lVar15 + 0x6b) == '\x01') && (param_3 != (ulong *)0x0)) {
    puVar6 = param_2 + (long)param_3 * 10;
    puVar7 = (ulong *)(LZCOUNT(((long)param_3 * 0x50) / 0x50) << 1 ^ 0x7e);
    uVar9 = 1;
    FUN_10b164f54(param_2);
    puVar16 = param_2;
    puVar17 = param_3;
    while (puVar2 = puVar16, puVar17 = (ulong *)((long)puVar17 + -1), puVar17 != (ulong *)0x0) {
      puVar16 = puVar2 + 10;
      if ((((((char)puVar2[3] == '\x01') && ((char)puVar2[6] == '\x01')) && ((puVar2[9] & 1) != 0))
          && (((puVar2[0xd] & 1) != 0 && ((char)puVar2[0x10] == '\x01')))) &&
         (((puVar2[0x13] & 1) != 0 &&
          (puVar4 = puVar2, puVar6 = puVar16, func_0x0001072eb9c0(), ((ulong)puVar4 & 1) == 0)))) {
        uVar13 = puVar2[0xe] - puVar2[5];
        uVar12 = -uVar13;
        if (-1 < (long)uVar13) {
          uVar12 = uVar13;
        }
        if (uVar12 < 2) {
          puVar2[0xe] = puVar2[4];
          puVar2[0x11] = puVar2[7];
          uStack_150 = uStack_150 & 0xffffffffffffff00;
          uStack_138 = uStack_138 & 0xffffffffffffff00;
          uStack_a0 = uStack_a0 & 0xffffffffffffff00;
          uStack_88 = uStack_88 & 0xffffffffffffff00;
          uStack_80 = uStack_80 & 0xffffffffffffff00;
          uStack_70 = uStack_70 & 0xffffffffffffff00;
          cStack_68 = '\0';
          uStack_58 = 0;
          puVar6 = &uStack_a0;
          FUN_10b164f24(puVar2);
          func_0x000107c279a4(&uStack_a0);
          func_0x000107c279a4(&uStack_150);
        }
      }
    }
  }
  puVar17 = (ulong *)0x0;
  auStack_d0[1] = 0;
  auStack_d0[0] = 0;
  auStack_d0[3] = 0;
  auStack_d0[2] = 0;
  uStack_b0 = 0x3f800000;
  puVar16 = param_2 + (long)param_3 * 10;
  while( true ) {
    uVar8 = (uint)uVar9;
    uVar3 = param_2 == puVar16;
    if ((bool)uVar3) break;
    if ((char)param_2[3] == '\x01') {
      if (*(char *)(param_1 + 0x68) == '\x01') {
        uStack_98 = param_5[1];
        uStack_a0 = *param_5;
        uStack_88 = param_5[3];
        uStack_90 = param_5[2];
        uStack_78 = param_5[5];
        uStack_80 = param_5[4];
        uStack_70 = param_5[6];
        cStack_68 = '\x01';
      }
      else {
        puVar7 = (ulong *)param_2[4];
        uVar9 = (ulong)(byte)param_2[6];
        puVar6 = param_5;
        puVar10 = puVar17;
        FUN_10b15a748(&uStack_a0);
      }
      if ((char)param_2[9] == '\x01') {
        lVar15 = param_2[8] - param_2[7];
      }
      else {
        lVar15 = 0;
      }
      if (cStack_68 == '\x01') {
        FUN_10b15a7dc(param_2,param_4);
        FUN_10b1571dc(auStack_f0,param_1,param_2);
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_30 = 0;
        uStack_28 = 0;
        FUN_10b163768(&uStack_170,auStack_f0,&uStack_30);
        FUN_10b163794(&uStack_150,&uStack_170);
        FUN_10b163654(&uStack_170);
        param_3 = &uStack_30;
        FUN_10b163654();
        func_0x00010b1760ac();
        param_3[4] = 0;
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        FUN_10b165ee0();
        FUN_10b165dd0(&uStack_170,param_3[3],param_3[4]);
        uVar9 = uStack_150;
        lStack_40 = 0;
        lStack_38 = 0;
        lStack_50 = uStack_150 + 0x48;
        lStack_48 = CONCAT71(lStack_48._1_7_,1);
        puStack_18 = param_3;
        __ZNSt3__15mutex4lockEv();
        uVar12 = uVar9;
        FUN_10b164280();
        if ((int)uVar12 == 0) {
          puVar5 = (undefined8 *)0x18;
          __Znwm();
          *puVar5 = &PTR_FUN_110cbfaa8;
          puStack_18 = (ulong *)0x0;
          puVar5[2] = param_3;
          lVar11 = *(long *)(uVar9 + 0x90);
          *(undefined8 **)(uVar9 + 0x90) = puVar5;
          if (lVar11 != 0) {
            func_0x00010b174834();
          }
          lVar11 = 0;
          param_3 = (ulong *)0x0;
        }
        else {
          FUN_10b163794(&lStack_40,&uStack_150);
          lVar11 = lStack_40;
        }
        func_0x000107c2798c(&lStack_50);
        if (lVar11 != 0) {
          lStack_48 = lStack_38;
          lStack_50 = lVar11;
          if (lStack_38 != 0) {
            do {
              func_0x00010b17493c();
            } while (extraout_w10 != 0);
          }
          FUN_10b165e08(auStack_20,lVar11);
          FUN_10b163654(&lStack_50);
        }
        uVar12 = uStack_168;
        uVar9 = uStack_170;
        uStack_170 = 0;
        uStack_168 = 0;
        FUN_10b163654(&lStack_40);
        if (param_3 != (ulong *)0x0) {
          func_0x00010b176798();
        }
        func_0x00010b163ca4(&uStack_170);
        FUN_10b163654(&uStack_150);
        FUN_10b163654(auStack_f0);
        uStack_108 = uVar12;
        uStack_110 = uVar9;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_148 = uStack_98;
        uStack_150 = uStack_a0;
        uStack_138 = uStack_88;
        uStack_140 = uStack_90;
        uStack_128 = uStack_78;
        uStack_130 = uStack_80;
        uStack_120 = uStack_70;
        uStack_118 = 1;
        uStack_168 = param_2[8];
        uStack_170 = param_2[7];
        uStack_160 = param_2[9];
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_1a0 = 0;
        uStack_198 = 0;
        puVar7 = &uStack_150;
        uVar9 = 0;
        puVar10 = param_6;
        FUN_10b157390(auStack_100,param_1,&uStack_110);
        FUN_10b1584ac(&uStack_30,param_1,auStack_100);
        puVar6 = &uStack_30;
        FUN_10b1663b8(param_8);
        func_0x0001052a55c0(&uStack_30);
        FUN_10b163af0(auStack_100);
        func_0x00010529fde0(&uStack_1a0);
        func_0x00010b176808();
        func_0x00010b163ca4(&uStack_110);
        func_0x00010b163ca4(&uStack_e0);
      }
      puVar17 = (ulong *)(lVar15 + (long)puVar17);
    }
    param_2 = param_2 + 10;
  }
  func_0x000107c2826c(auStack_d0);
  func_0x000107c350b0(uStack_10);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2798c(&lStack_50);
  FUN_10b163654(&lStack_40);
  puStack_18 = (ulong *)0x0;
  if (param_3 != (ulong *)0x0) {
    func_0x00010b176798();
  }
  func_0x00010b163ca4(&uStack_170);
  FUN_10b163654(&uStack_150);
  FUN_10b163654(auStack_f0);
  puVar17 = auStack_d0;
  func_0x000107c2826c();
  func_0x00010b174f0c();
  uVar9 = puVar6[2];
  uVar8 = uVar8 & (byte)uVar9;
  uVar12 = puVar6[1];
  if (((uVar8 & 1) == 0) || ((long)puVar7 < (long)uVar12)) {
    cVar1 = (char)puVar6[4];
    uVar13 = puVar6[3];
    if (cVar1 != '\x01' || (long)puVar10 < (long)uVar13) {
      uVar14 = *puVar6;
      *(undefined4 *)((long)puVar17 + 0x11) = *(undefined4 *)((long)puVar6 + 0x11);
      *(undefined4 *)((long)puVar17 + 0x14) = *(undefined4 *)((long)puVar6 + 0x14);
      uVar18 = *(undefined8 *)((long)puVar6 + 0x21);
      *(undefined8 *)((long)puVar17 + 0x29) = *(undefined8 *)((long)puVar6 + 0x29);
      *(undefined8 *)((long)puVar17 + 0x21) = uVar18;
      puVar17[6] = puVar6[6];
      if ((uVar8 & 1) == 0) {
        puVar7 = (ulong *)0x0;
      }
      if (cVar1 == '\0') {
        puVar10 = (ulong *)0x0;
      }
      *puVar17 = uVar14;
      puVar17[1] = uVar12 - (long)puVar7;
      *(byte *)(puVar17 + 2) = (byte)uVar9;
      puVar17[3] = uVar13 - (long)puVar10;
      uVar3 = 1;
      *(char *)(puVar17 + 4) = cVar1;
      goto LAB_10b15a7d4;
    }
  }
  uVar3 = 0;
  *(undefined1 *)puVar17 = 0;
LAB_10b15a7d4:
  *(undefined1 *)(puVar17 + 7) = uVar3;
  return;
}



/* Entry: 10b15a748; end: 10b15a7db;  */

void FUN_10b15a748(undefined8 *param_1,undefined8 *param_2,long param_3,byte param_4,long param_5)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  bVar1 = *(byte *)(param_2 + 2);
  param_4 = param_4 & bVar1;
  lVar4 = param_2[1];
  if (((param_4 & 1) == 0) || (param_3 < lVar4)) {
    cVar2 = *(char *)(param_2 + 4);
    lVar5 = param_2[3];
    if (cVar2 != '\x01' || param_5 < lVar5) {
      uVar6 = *param_2;
      *(undefined4 *)((long)param_1 + 0x11) = *(undefined4 *)((long)param_2 + 0x11);
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
      uVar7 = *(undefined8 *)((long)param_2 + 0x21);
      *(undefined8 *)((long)param_1 + 0x29) = *(undefined8 *)((long)param_2 + 0x29);
      *(undefined8 *)((long)param_1 + 0x21) = uVar7;
      param_1[6] = param_2[6];
      if ((param_4 & 1) == 0) {
        param_3 = 0;
      }
      if (cVar2 == '\0') {
        param_5 = 0;
      }
      *param_1 = uVar6;
      param_1[1] = lVar4 - param_3;
      *(byte *)(param_1 + 2) = bVar1;
      param_1[3] = lVar5 - param_5;
      uVar3 = 1;
      *(char *)(param_1 + 4) = cVar2;
      goto LAB_10b15a7d4;
    }
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10b15a7d4:
  *(undefined1 *)(param_1 + 7) = uVar3;
  return;
}



/* Entry: 10b15a7dc; end: 10b15aa8b;  */

undefined8 FUN_10b15a7dc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long unaff_x21;
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [23];
  undefined1 uStack_391;
  ulong uStack_390;
  undefined **ppuStack_388;
  undefined1 auStack_2c0 [72];
  char cStack_278;
  ulong uStack_268;
  undefined **ppuStack_260;
  char cStack_150;
  undefined1 auStack_148 [24];
  byte bStack_130;
  undefined1 uStack_78;
  undefined8 auStack_70 [2];
  undefined1 uStack_59;
  byte bStack_58;
  
  if (*(char *)(param_2 + 0x118) != '\x01') {
    return param_1;
  }
  FUN_10b164b20(&uStack_268,param_1);
  if (cStack_150 == '\x01') {
    FUN_10b4dbc70(&uStack_390,&uStack_268);
    func_0x00010b175778();
    if (unaff_x21 == 0) goto LAB_10b15a874;
    func_0x00010b4dbd9c(&uStack_390,&uStack_268);
    func_0x00010b175778();
    if (unaff_x21 != 0) goto LAB_10b15a9d0;
    uStack_390 = uStack_390 & 0xffffffffffffff00;
    cStack_278 = 0;
    if (cStack_150 != '\x01') {
      ppuStack_388 = ppuStack_260;
      uStack_390 = uStack_268;
    }
    else {
      FUN_10b165db8(&uStack_390,&uStack_268);
    }
    cStack_278 = cStack_150 == '\x01';
  }
  else {
LAB_10b15a874:
    func_0x00010792d3b8(auStack_70,param_1);
    if ((bStack_58 & 1) == 0) {
      uStack_390 = 1;
      ppuStack_388 = &PTR_PTR_110cf1458;
      cStack_278 = '\0';
    }
    else {
      puVar8 = auStack_70;
      func_0x00010792d3e0();
      bVar4 = *(byte *)((long)puVar8 + 0x17);
      puVar2 = (undefined8 *)*puVar8;
      uVar3 = puVar8[1];
      FUN_10b164c44(auStack_148,param_2);
      uStack_78 = 1;
      if (-1 < (char)bVar4) {
        uVar3 = (ulong)bVar4;
        puVar2 = puVar8;
      }
      FUN_10b4dbb9c(&uStack_390,puVar2,uVar3,auStack_148);
      func_0x00010792d620(auStack_148);
    }
    func_0x00010792d540(auStack_70);
  }
  func_0x00010b4dbd9c(auStack_70,param_2);
  if (cStack_278 == '\x01') {
    func_0x00010b4dbd9c(auStack_3a8,&uStack_390);
  }
  else {
    func_0x00010b1756f4();
    func_0x00010b177298();
  }
  if (((cStack_278 == '\x01') && (func_0x00010b1758b4(uStack_391), extraout_x8 == 0)) &&
     (func_0x00010b1758b4(uStack_59), extraout_x8_00 != 0)) {
    func_0x00010792d3b8(auStack_148,auStack_70);
    uVar10 = (uint)bStack_130;
    cVar6 = SBORROW4(uVar10,1);
    cVar7 = (int)(uVar10 - 1) < 0;
    if (uVar10 == 1) {
      puVar9 = auStack_148;
      func_0x00010792d3e0(puVar9);
      func_0x00010b175174();
      uVar1 = extraout_x11;
      puVar5 = extraout_x10;
      if (cVar7 == cVar6) {
        uVar1 = extraout_x8_01;
        puVar5 = puVar9;
      }
      FUN_10b4dbe10(auStack_3c0,&uStack_390,puVar5,uVar1);
    }
    func_0x00010792d540(auStack_148);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_148,auStack_2c0);
  func_0x000107c27b9c(param_1,auStack_148);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
  func_0x00010b175a14();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  FUN_10b164d1c(&uStack_390);
LAB_10b15a9d0:
  FUN_10b164d1c(&uStack_268);
  return param_1;
}



/* Entry: 10b15aa8c; end: 10b15ab77;  */

void FUN_10b15aa8c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  
  for (param_3 = param_3 * 0x68; param_3 != 0; param_3 = param_3 + -0x68) {
    FUN_10b15a258(param_1,*(long *)(param_2 + 0x40),
                  (*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40)) / 0x50,param_4,param_5,
                  *(undefined8 *)(param_2 + 0x58),1,param_6);
    if (*(char *)(param_2 + 0x18) == '\x01') {
      func_0x00010b177cc0();
      FUN_10b15a7dc();
      uStack_98 = param_5[1];
      uStack_a0 = *param_5;
      uStack_88 = param_5[3];
      uStack_90 = param_5[2];
      uStack_78 = param_5[5];
      uStack_80 = param_5[4];
      uStack_70 = param_5[6];
      FUN_10b1589ac(auStack_60,param_1,param_2,&uStack_a0,*(undefined8 *)(param_2 + 0x58));
      FUN_10b1663b8(param_6,auStack_60);
      func_0x00010b17732c();
    }
    param_2 = param_2 + 0x68;
  }
  return;
}



/* Entry: 10b15ab78; end: 10b15af43;  */

void FUN_10b15ab78(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                  undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar9;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *plVar10;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  long *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  
  func_0x00010b177f3c();
  if (*(char *)(param_1 + 0x69) == '\x01') {
    func_0x00010b177fd8(param_1);
    for (param_3 = param_3 * 0x68; param_3 != 0; param_3 = param_3 + -0x68) {
      FUN_10b15a258(param_1,*(long *)(param_2 + 0x40),
                    (*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40)) / 0x50,param_4,param_5,
                    *(undefined8 *)(param_2 + 0x58),1,param_6);
      if (*(char *)(param_2 + 0x18) == '\x01') {
        func_0x00010b177cc0();
        FUN_10b15a7dc();
        in_stack_00000018 = (long *)param_5[1];
        in_stack_00000010 = *param_5;
        in_stack_00000028 = param_5[3];
        in_stack_00000020 = (long *)param_5[2];
        in_stack_00000038 = (long *)param_5[5];
        in_stack_00000030 = param_5[4];
        in_stack_00000040 = (undefined8 *)param_5[6];
        FUN_10b1589ac(&stack0x00000050,param_1,param_2,&stack0x00000010,
                      *(undefined8 *)(param_2 + 0x58));
        FUN_10b1663b8(param_6,&stack0x00000050);
        func_0x00010b17732c();
      }
      param_2 = param_2 + 0x68;
    }
    return;
  }
  in_stack_00000018 = (long *)0x0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = (long *)0x0;
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,0x3f800000);
  lVar14 = param_2 + param_3 * 0x68;
  do {
    plVar12 = in_stack_00000018;
    uVar5 = param_2 - lVar14 < 0;
    if (param_2 == lVar14) {
      FUN_10b16bda8(&stack0x00000010);
      func_0x00010b177fd8();
      return;
    }
    iVar1 = *(int *)(param_2 + 0x60);
    plVar15 = (long *)(long)iVar1;
    if (in_stack_00000018 != (long *)0x0) {
      uVar8 = (long)in_stack_00000018 - 1;
      if (((ulong)in_stack_00000018 & uVar8) == 0) {
        unaff_x25 = (long *)(uVar8 & (ulong)plVar15);
        uVar5 = false;
      }
      else {
        uVar5 = (long)in_stack_00000018 - (long)plVar15 < 0;
        unaff_x25 = plVar15;
        if (in_stack_00000018 <= plVar15) {
          uVar2 = 0;
          if (in_stack_00000018 != (long *)0x0) {
            uVar2 = (ulong)plVar15 / (ulong)in_stack_00000018;
          }
          unaff_x25 = (long *)((long)plVar15 - uVar2 * (long)in_stack_00000018);
        }
      }
      plVar9 = *(long **)(in_stack_00000010 + (long)unaff_x25 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_10b15ac88;
            plVar10 = (long *)plVar9[1];
            if (plVar10 != plVar15) break;
            uVar5 = *(int *)(plVar9 + 2) - iVar1 < 0;
            if (*(int *)(plVar9 + 2) == iVar1) goto LAB_10b15aeec;
          }
          if (((ulong)in_stack_00000018 & uVar8) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar8);
          }
          else if (in_stack_00000018 <= plVar10) {
            uVar2 = 0;
            if (in_stack_00000018 != (long *)0x0) {
              uVar2 = (ulong)plVar10 / (ulong)in_stack_00000018;
            }
            plVar10 = (long *)((long)plVar10 - uVar2 * (long)in_stack_00000018);
          }
          uVar5 = (long)plVar10 - (long)unaff_x25 < 0;
        } while (plVar10 == unaff_x25);
      }
    }
LAB_10b15ac88:
    plVar10 = (long *)0x18;
    __Znwm();
    in_stack_00000048 = 1;
    *plVar10 = 0;
    plVar10[1] = (long)plVar15;
    *(int *)(plVar10 + 2) = iVar1;
    plVar9 = plVar10;
    in_stack_00000038 = plVar10;
    in_stack_00000040 = &stack0x00000020;
    func_0x00010b177b10(in_stack_00000028);
    if ((plVar12 == (long *)0x0) || (func_0x00010b177e98(), (bool)uVar5)) {
      bVar4 = (long *)0x2 < plVar12;
      bVar6 = plVar12 == (long *)0x3;
      func_0x00010b17519c((long)plVar12 << 1);
      plVar13 = extraout_x8;
      if (!bVar4 || bVar6) {
        plVar13 = extraout_x9;
      }
      plVar11 = plVar12;
      if ((long)plVar13 - 1U == 0) {
        plVar13 = (long *)0x2;
      }
      else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        plVar9 = plVar13;
        plVar11 = in_stack_00000018;
      }
      plVar12 = plVar13;
      if (plVar11 < plVar13) {
LAB_10b15ad18:
        if ((ulong)plVar12 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b15af1c);
          (*pcVar3)();
        }
        lVar7 = (long)plVar12 << 3;
        __Znwm(lVar7);
        FUN_10b16bdec(&stack0x00000010,lVar7);
        plVar9 = (long *)0x0;
        in_stack_00000018 = plVar12;
        while (plVar12 != plVar9) {
          func_0x00010b177e48();
          plVar9 = extraout_x9_00;
        }
        if (in_stack_00000020 != (long *)0x0) {
          func_0x00010b177e34();
          func_0x00010b177df8();
          lVar7 = extraout_x8_00;
          uVar8 = extraout_x9_01;
          plVar9 = extraout_x10;
          plVar13 = extraout_x11;
          while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
            plVar11 = (long *)plVar9[1];
            if (((ulong)plVar12 & uVar8) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar8);
            }
            else if (plVar12 <= plVar11) {
              uVar2 = 0;
              if (plVar12 != (long *)0x0) {
                uVar2 = (ulong)plVar11 / (ulong)plVar12;
              }
              plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar12);
            }
            if (plVar11 != plVar13) {
              if (*(long *)(lVar7 + (long)plVar11 * 8) == 0) {
                func_0x00010b177db4();
                lVar7 = extraout_x8_02;
                uVar8 = extraout_x9_03;
                plVar9 = extraout_x12;
                plVar13 = extraout_x11_01;
              }
              else {
                func_0x00010b174b5c();
                lVar7 = extraout_x8_01;
                uVar8 = extraout_x9_02;
                plVar9 = extraout_x10_00;
                plVar13 = extraout_x11_00;
              }
            }
          }
        }
      }
      else {
        plVar12 = plVar11;
        if (plVar13 < plVar11) {
          func_0x00010b177e60((float)in_stack_00000028,in_stack_00000030 & 0xffffffff);
          if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x00010b174b3c();
          }
          if (plVar13 <= plVar9) {
            plVar13 = plVar9;
          }
          plVar12 = in_stack_00000018;
          if (plVar13 < plVar11) {
            plVar12 = plVar13;
            if (plVar13 != (long *)0x0) goto LAB_10b15ad18;
            FUN_10b16bdec(&stack0x00000010,0);
            in_stack_00000018 = (long *)0x0;
            plVar12 = (long *)0x0;
          }
        }
      }
      if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
        unaff_x25 = (long *)((long)plVar12 - 1U & (ulong)plVar15);
      }
      else {
        unaff_x25 = plVar15;
        if (plVar12 <= plVar15) {
          uVar8 = 0;
          if (plVar12 != (long *)0x0) {
            uVar8 = (ulong)plVar15 / (ulong)plVar12;
          }
          unaff_x25 = (long *)((long)plVar15 - uVar8 * (long)plVar12);
        }
      }
    }
    plVar15 = *(long **)(in_stack_00000010 + (long)unaff_x25 * 8);
    if (plVar15 == (long *)0x0) {
      *plVar10 = (long)in_stack_00000020;
      *(long ***)(in_stack_00000010 + (long)unaff_x25 * 8) = &stack0x00000020;
      in_stack_00000020 = plVar10;
      if (*plVar10 != 0) {
        plVar15 = *(long **)(*plVar10 + 8);
        if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
          plVar15 = (long *)((ulong)plVar15 & (long)plVar12 - 1U);
        }
        else if (plVar12 <= plVar15) {
          uVar8 = 0;
          if (plVar12 != (long *)0x0) {
            uVar8 = (ulong)plVar15 / (ulong)plVar12;
          }
          plVar15 = (long *)((long)plVar15 - uVar8 * (long)plVar12);
        }
        *(long **)(in_stack_00000010 + (long)plVar15 * 8) = plVar10;
      }
    }
    else {
      *plVar10 = *plVar15;
      *plVar15 = (long)plVar10;
    }
    in_stack_00000038 = (long *)0x0;
    in_stack_00000028 = in_stack_00000028 + 1;
    FUN_10b16be04(&stack0x00000038);
    FUN_10b15aa8c(param_1,param_2,1,param_4,param_5,param_6);
    unaff_x25 = param_5;
LAB_10b15aeec:
    param_2 = param_2 + 0x68;
  } while( true );
}



/* Entry: 10b15af44; end: 10b15b0e7;  */

void FUN_10b15af44(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 extraout_w8;
  long extraout_x9;
  int extraout_w11;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 *puStack_48;
  
  plVar2 = param_1;
  func_0x00010b177714();
  *plVar2 = (long)FUN_10b172754;
  plVar2[1] = (long)FUN_10b172888;
  lVar4 = *param_1;
  plVar2[0x1b] = lVar4;
  lVar6 = param_1[2];
  lVar5 = param_1[1];
  plVar2[0x1e] = lVar5;
  plVar2[0x1d] = lVar6;
  plVar2[0x1c] = lVar5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = plVar2;
  func_0x00010b175858();
  func_0x00010b175008();
  do {
    plVar2[0x1f] = lVar4;
    uVar1 = lVar4 == plVar2[0x1e];
    if ((bool)uVar1) {
      func_0x00010b1748b8();
LAB_10b15b02c:
      func_0x00010b1750bc();
      *(undefined1 *)(plVar2 + 0x20) = extraout_w8;
      func_0x00010b174aa8();
      if ((bool)uVar1) {
        puStack_48 = param_2;
        func_0x00010b175190();
        FUN_10b14bca0();
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(auStack_50);
        puStack_48 = auStack_50;
        func_0x00010b175190();
        FUN_10b14bb60();
        func_0x00010b17539c();
      }
      func_0x00010b174f7c();
      FUN_10b1664d0(plVar2 + 0x1b);
      func_0x00010b174f24();
      return;
    }
    func_0x00010b1777fc();
    if (((ulong)plVar3 & 1) == 0) {
      *(undefined1 *)(plVar2 + 0x20) = 0;
      func_0x00010b1751d4();
      func_0x000105c41834();
      if (lStack_58 == 0) {
        return;
      }
      do {
        func_0x00010b1748f0();
      } while (extraout_w11 != 0);
      if (extraout_x9 != 0) {
        return;
      }
      func_0x00010b174824();
      func_0x00010b174f98();
      return;
    }
    plVar3 = (long *)plVar2[0x1f];
    func_0x000105c40888(plVar2 + 0x12);
    func_0x00010b177b78();
    if ((bool)uVar1) {
      func_0x00010b174e1c();
      func_0x00010b175210();
      goto LAB_10b15b02c;
    }
    lVar4 = plVar2[0x1f];
    func_0x00010b175210();
    lVar4 = lVar4 + 0x10;
  } while( true );
}



/* Entry: 10b15b0e8; end: 10b15b0ff;  */

void FUN_10b15b0e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b17738c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
  return;
}



/* Entry: 10b15b100; end: 10b15b39b;  */

void FUN_10b15b100(void)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_CY;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 extraout_w8;
  long lVar7;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined4 extraout_w10_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long unaff_x20;
  int iVar8;
  undefined8 *unaff_x25;
  undefined8 uVar9;
  
  func_0x00010b1778a0();
  func_0x00010b175674();
  puVar5 = (undefined8 *)0x100;
  __Znwm();
  *puVar5 = FUN_10b173640;
  puVar5[1] = FUN_10b1737fc;
  FUN_10b14be30(puVar5 + 2);
  func_0x00010b1758c0();
  FUN_10b15b39c();
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar5[0x1c] = *(undefined8 *)(unaff_x20 + 0x20);
  puVar5[0x1b] = uVar9;
  if (lVar7 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  lVar7 = *(long *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5[0x1e] = *(undefined8 *)(unaff_x20 + 0x30);
  puVar5[0x1d] = uVar9;
  if (lVar7 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  puVar6 = puVar5 + 0x1b;
  FUN_10b15b3d4();
  if (((ulong)puVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x1f) = 0;
    func_0x00010b1751f0();
    lVar7 = puVar5[0x1b];
    if ((*(byte *)(lVar7 + 0x90) & 1) != 0) {
      func_0x00010b175068();
      func_0x00010b174f14(*puVar5);
      return;
    }
    func_0x00010b177020();
    if (!(bool)in_CY) {
LAB_10b15b1e4:
      *unaff_x25 = puVar5;
      goto LAB_10b15b30c;
    }
    lVar7 = *(long *)(lVar7 + 0x98);
    func_0x00010b174a38();
    if (CONCAT44(extraout_var,extraout_w10_01) != 0) {
      func_0x00010552fc6c();
LAB_10b15b334:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10b15b338);
      (*pcVar3)();
    }
    func_0x00010b174770(extraout_x8 - lVar7);
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) {
      if (uVar1 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10b15b334;
      }
      __Znwm(uVar1 << 3);
    }
  }
  else {
    FUN_10b15b400();
    func_0x0001052a06f8(puVar5 + 0x12);
    bVar2 = *(byte *)(puVar5 + 0x1a);
    uVar4 = bVar2 != 0;
    if (bVar2 == 1) {
      func_0x00010b174e1c();
      iVar8 = 3;
    }
    else {
      iVar8 = 0;
    }
    func_0x00010b175210();
    if ((bVar2 & 1) != 0) {
LAB_10b15b218:
      func_0x00010b176268();
      func_0x00010b176288();
      uVar4 = iVar8 == 3;
      if ((bool)uVar4) {
        func_0x00010b175654();
        *(undefined1 *)(puVar5 + 0x1f) = extraout_w8;
        func_0x00010b174aa8();
        if ((bool)uVar4) {
          func_0x00010b174ffc();
        }
        else {
          func_0x00010b174d90();
          func_0x00010b174ff0();
          func_0x00010b175084();
        }
      }
      func_0x00010b174f7c();
      func_0x00010b174f24();
      return;
    }
    puVar6 = puVar5 + 0x1d;
    FUN_10b15b3d4();
    if (((ulong)puVar6 & 1) != 0) {
      FUN_10b15b400();
      func_0x00010b175f84();
      iVar8 = 3;
      goto LAB_10b15b218;
    }
    *(undefined1 *)(puVar5 + 0x1f) = 1;
    func_0x00010b1751f0();
    lVar7 = puVar5[0x1d];
    if ((*(byte *)(lVar7 + 0x90) & 1) != 0) {
      func_0x00010b175068();
      func_0x00010b174f14(*puVar5);
      return;
    }
    func_0x00010b177020();
    if (!(bool)uVar4) goto LAB_10b15b1e4;
    lVar7 = *(long *)(lVar7 + 0x98);
    func_0x00010b174a38();
    if (CONCAT44(extraout_var_00,extraout_w10_02) != 0) {
      func_0x00010552fc6c();
      goto LAB_10b15b334;
    }
    func_0x00010b174770(extraout_x8_01 - lVar7);
    uVar1 = extraout_x9_00;
    if ((bool)uVar4) {
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) {
      if (uVar1 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10b15b334;
      }
      __Znwm(uVar1 << 3);
    }
  }
  func_0x00010b1747c8();
  func_0x00010b177dec();
  if (lVar7 != 0) {
    func_0x00010b175554();
  }
LAB_10b15b30c:
  func_0x00010b177de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 10b15b39c; end: 10b15b3d3;  */

void FUN_10b15b39c(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b14bde4(auStack_30);
  func_0x00010b177f14();
  FUN_10b16be88();
  func_0x0001052a55c0(auStack_30);
  return;
}



/* Entry: 10b15b3d4; end: 10b15b3ff;  */

undefined1 FUN_10b15b3d4(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b176bec();
  func_0x00010b1751f0();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x90);
  func_0x00010b175068();
  return uVar1;
}



/* Entry: 10b15b400; end: 10b15b443;  */

void FUN_10b15b400(long *param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(*param_1 + 0x88) & 1) == 0) {
    func_0x00010b175a08();
    func_0x00010b1757a4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b15b43c);
    (*pcVar1)();
  }
  if ((*(byte *)(*param_1 + 0x88) & 1) != 0) {
    return;
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



/* Entry: 10b15b444; end: 10b15b5c7;  */

void FUN_10b15b444(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined1 extraout_w8;
  code *extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  long *unaff_x20;
  long lStack_48;
  
  func_0x00010b175674();
  func_0x00010b1776b0();
  *param_1 = FUN_10b17141c;
  param_1[1] = FUN_10b1714dc;
  FUN_10b16657c(param_1 + 2);
  func_0x00010b1758c0();
  FUN_10b15b5c8();
  if (unaff_x20[0x53] == 0) {
    if (*unaff_x20 == 0) {
      FUN_10b16c740(param_1 + 7);
      param_1[7] = 0;
      param_1[8] = 0;
      func_0x00010b17546c();
    }
    else {
      puVar1 = param_1 + 0xb;
      func_0x00010b176ee8();
      (*extraout_x9)(puVar1);
      puVar2 = puVar1;
      FUN_10b16b9dc();
      if (((ulong)puVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xf) = 0;
        func_0x00010b174cf8();
        FUN_10b16ba64();
        if (lStack_48 == 0) {
          return;
        }
        do {
          func_0x00010b1748f0();
        } while (extraout_w11 != 0);
        if (extraout_x9_00 != 0) {
          return;
        }
        func_0x00010b174824();
        func_0x00010b174f98();
        return;
      }
      FUN_10b15a1b8(param_1 + 0xd,puVar1);
      func_0x00010b177200();
      func_0x00010b176700();
      func_0x00010b177504();
    }
  }
  else {
    func_0x00010b16c718(param_1 + 7,unaff_x20 + 0x53);
  }
  func_0x00010b1750bc();
  *(undefined1 *)(param_1 + 0xf) = extraout_w8;
  func_0x00010b175904();
  if ((bool)in_ZR) {
    func_0x00010b175190();
    FUN_10b16c638();
  }
  else {
    func_0x00010b17502c();
    func_0x00010b175190();
    FUN_10b16688c();
    func_0x00010b17539c();
  }
  func_0x00010b1768c4();
  func_0x00010b174f24();
  return;
}



/* Entry: 10b15b5c8; end: 10b15b5df;  */

void FUN_10b15b5c8(void)

{
  FUN_10b16c7bc();
  return;
}



/* Entry: 10b15b5e0; end: 10b15b613;  */

void FUN_10b15b5e0(void)

{
  func_0x00010b1751b0();
  func_0x00010b177a74();
  FUN_10b16c7f8();
  func_0x00010b174f2c();
  return;
}



/* Entry: 10b15b614; end: 10b15b7bb;  */

void FUN_10b15b614(void)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x9;
  int extraout_w11;
  long *unaff_x20;
  long lStack_48;
  
  func_0x00010b175674();
  puVar2 = (undefined8 *)0x90;
  __Znwm();
  *puVar2 = FUN_10b171338;
  puVar2[1] = FUN_10b1713f0;
  FUN_10b14704c(puVar2 + 2);
  func_0x00010b1758c0();
  FUN_10b147440();
  if (*(char *)((long)unaff_x20 + 0x37) < '\0') {
    if (unaff_x20[5] == 0) goto LAB_10b15b6b8;
  }
  else if (*(char *)((long)unaff_x20 + 0x37) == '\0') {
LAB_10b15b6b8:
    if ((long *)*unaff_x20 == (long *)0x0) {
      FUN_10b147988(puVar2 + 7);
      func_0x00010b1756f4();
      func_0x000107c278b8(puVar2 + 7);
      *(undefined1 *)(puVar2 + 10) = 1;
      *(undefined1 *)(puVar2 + 0xb) = 1;
    }
    else {
      puVar1 = puVar2 + 0xf;
      (**(code **)(*(long *)*unaff_x20 + 0x38))(puVar1);
      puVar3 = puVar1;
      FUN_10b1479ac();
      if (((ulong)puVar3 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x11) = 0;
        func_0x00010b174cf8();
        FUN_10b147a3c();
        if (lStack_48 == 0) {
          return;
        }
        do {
          func_0x00010b1748f0();
        } while (extraout_w11 != 0);
        if (extraout_x9 != 0) {
          return;
        }
        func_0x00010b174824();
        func_0x00010b174f98();
        return;
      }
      FUN_10b146f6c(puVar2 + 0xc,puVar1);
      func_0x00010b17720c();
      func_0x00010b176a28();
      func_0x00010b147278(puVar1);
    }
    goto LAB_10b15b670;
  }
  FUN_10b16c83c(puVar2 + 7);
LAB_10b15b670:
  func_0x00010b1750bc();
  func_0x00010b177a88();
  if ((bool)in_ZR) {
    func_0x00010b175190();
    FUN_10b147d74();
  }
  else {
    func_0x00010b17502c();
    func_0x00010b175190();
    FUN_10b147358();
    func_0x00010b17539c();
  }
  func_0x00010b1768d4();
  func_0x00010b174f24();
  return;
}



/* Entry: 10b15b7bc; end: 10b15bc87;  */

void FUN_10b15b7bc(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long lVar11;
  long extraout_x8_00;
  ulong extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong uVar12;
  ulong extraout_x9_01;
  int extraout_w10;
  uint extraout_w10_00;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  ulong extraout_x11;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong unaff_x24;
  uint uVar16;
  long unaff_x26;
  ulong uVar17;
  undefined8 *puVar18;
  long in_stack_00000010;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  
  func_0x00010b177fac();
  puVar5 = (undefined8 *)0x478;
  __Znwm();
  *puVar5 = FUN_10b173c10;
  puVar5[1] = FUN_10b173fc4;
  puVar5[0x89] = param_1;
  FUN_10b166980(puVar5 + 2);
  puVar1 = puVar5 + 0x83;
  puVar18 = puVar5 + 7;
  *(undefined1 *)puVar18 = 0;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  FUN_10b167d58(extraout_x8,puVar5[5],puVar5[6]);
  FUN_10b16c89c(puVar5 + 0x81,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  lVar15 = *(long *)(param_1 + 0x50);
  puVar5[0x83] = *(undefined8 *)(param_1 + 0x48);
  puVar5[0x84] = lVar15;
  if (lVar15 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  puVar6 = puVar1;
  FUN_10b15bc88();
  if (((ulong)puVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x8e) = 0;
    uVar14 = puVar5[0x83];
    func_0x00010b17563c();
    uVar7 = *puVar1;
    if ((*(byte *)(uVar7 + 0x378) & 1) != 0) {
      func_0x00010b1751f8();
      func_0x00010b174f14(*puVar5);
      return;
    }
    puVar18 = *(undefined8 **)(uVar7 + 0x388);
    uVar4 = *(undefined8 **)(uVar7 + 0x390) <= puVar18;
    if ((bool)uVar4) {
      lVar15 = *(long *)(uVar7 + 0x380);
      func_0x00010b177cec();
      if (extraout_x10 != 0) {
        func_0x00010552fc6c();
        goto LAB_10b15bbdc;
      }
      func_0x00010b174770(extraout_x8_00 - lVar15);
      uVar17 = extraout_x9_00;
      if ((bool)uVar4) {
        uVar17 = extraout_x8_01;
      }
      if (uVar17 == 0) {
        lVar11 = 0;
      }
      else {
        if (uVar17 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10b15bbdc;
        }
        lVar11 = uVar17 << 3;
        __Znwm();
      }
      puVar18 = (undefined8 *)(lVar11 + unaff_x24);
      puVar8 = puVar18 + 1;
      *puVar18 = puVar5;
      func_0x00010b174a4c();
      *(undefined8 **)(uVar7 + 0x380) = puVar18 + -unaff_x26;
      *(undefined8 **)(uVar7 + 0x388) = puVar8;
      *(ulong *)(uVar7 + 0x390) = lVar11 + uVar17 * 8;
      if (lVar15 != 0) {
        func_0x00010b17550c();
      }
    }
    else {
      puVar8 = puVar18 + 1;
      *puVar18 = puVar5;
    }
    *(undefined8 **)(uVar7 + 0x388) = puVar8;
    goto LAB_10b15bb54;
  }
  uVar7 = *puVar1;
  FUN_10b15bcb4();
  FUN_10b166bac(puVar5 + 0x16);
  FUN_10b166c8c(puVar1);
  puVar8 = puVar5 + 0x16;
  FUN_10b15b444(puVar5 + 0x85);
  func_0x00010b177580();
  if (((ulong)puVar8 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x8e) = 1;
    in_stack_00000068 = puVar5;
    in_stack_00000070 = puVar5 + 0x85;
    func_0x00010b177598(&stack0x00000008);
    if (in_stack_00000010 == 0) {
      return;
    }
    do {
      func_0x00010b1748f0();
    } while (extraout_w11 != 0);
    if (extraout_x9 != 0) {
      return;
    }
    func_0x00010b174824();
    func_0x00010b174f98();
    return;
  }
  func_0x00010b175c68();
  func_0x00010b175ba8();
  bVar2 = *(byte *)(puVar5 + 0x2b);
  uVar17 = (ulong)bVar2;
  uVar4 = bVar2 == 1;
  if ((bool)uVar4) {
    uVar12 = puVar5[0x28];
    uVar13 = puVar5[0x29];
    unaff_x24 = uVar12 >> 8;
    lVar15 = 1;
    lVar11 = 1;
    uVar4 = uVar12 == 0;
    if ((long)uVar12 < 1) goto LAB_10b15b970;
LAB_10b15b99c:
    uVar16 = (uint)uVar12;
    uVar9 = uVar12 & 0xff | unaff_x24 << 8;
    uVar4 = uVar9 == 0;
    uVar7 = unaff_x24;
    if ((long)uVar9 < 1) goto LAB_10b15b9b0;
  }
  else {
    lVar15 = 0;
    uVar12 = 0;
    uVar13 = 0;
LAB_10b15b970:
    uVar16 = (uint)uVar12;
    uVar9 = puVar5[0x16];
    lVar11 = lVar15;
    if (uVar9 != 0) {
      func_0x00010b176edc();
      (*extraout_x8_02)();
      if ((uVar7 & 1) != 0) {
        bVar2 = bVar2 & 1;
        uVar13 = uVar9;
        lVar11 = 1;
      }
    }
    uVar7 = unaff_x24;
    if (bVar2 != 0) goto LAB_10b15b99c;
LAB_10b15b9b0:
    func_0x00010b1769cc();
    if (!(bool)uVar4) {
      lVar15 = 1;
      uVar16 = extraout_w10_00;
    }
    uVar12 = (ulong)uVar16;
    unaff_x24 = extraout_x11;
    if ((bool)uVar4) {
      unaff_x24 = uVar7;
    }
    uVar7 = uVar12 & 0xff | unaff_x24 << 8;
    lVar11 = extraout_x8_03;
    if ((int)lVar15 != 1 || uVar7 != 0x7fffffffffffffff) {
      if ((int)lVar15 == 0) {
        uVar7 = 0;
      }
      if ((extraout_x8_03 == 0) || ((long)uVar7 <= (long)uVar13)) goto LAB_10b15b9f8;
    }
    unaff_x24 = uVar13 >> 8;
    uVar12 = uVar13;
    lVar15 = extraout_x8_03;
  }
LAB_10b15b9f8:
  *(int *)(puVar5 + 0x8d) = (int)unaff_x24;
  *(char *)((long)puVar5 + 0x46e) = (char)(unaff_x24 >> 0x30);
  *(short *)((long)puVar5 + 0x46c) = (short)(unaff_x24 >> 0x20);
  *(char *)((long)puVar5 + 0x471) = (char)uVar12;
  puVar5[0x8c] = lVar15;
  puVar5[0x8b] = lVar11;
  puVar5[0x8a] = uVar13;
  uVar7 = puVar5[0x89] + 0x28;
  FUN_10b15b3d4();
  if ((uVar7 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x8e) = 2;
    lVar15 = puVar5[0x89];
    uVar14 = *(undefined8 *)(lVar15 + 0x28);
    func_0x00010b17563c();
    lVar15 = *(long *)(lVar15 + 0x28);
    if ((*(byte *)(lVar15 + 0x90) & 1) == 0) {
      puVar18 = *(undefined8 **)(lVar15 + 0xa0);
      uVar4 = *(undefined8 **)(lVar15 + 0xa8) <= puVar18;
      if ((bool)uVar4) {
        lVar11 = *(long *)(lVar15 + 0x98);
        func_0x00010b177cec();
        if (extraout_x10_00 != 0) {
          func_0x00010552fc6c();
LAB_10b15bbdc:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b15bbe0);
          (*pcVar3)();
        }
        func_0x00010b174770(extraout_x8_04 - lVar11);
        uVar7 = extraout_x9_01;
        if ((bool)uVar4) {
          uVar7 = extraout_x8_05;
        }
        if (uVar7 == 0) {
          lVar10 = 0;
        }
        else {
          if (uVar7 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b15bbdc;
          }
          lVar10 = uVar7 << 3;
          __Znwm();
        }
        puVar18 = (undefined8 *)(lVar10 + unaff_x24);
        puVar8 = puVar18 + 1;
        *puVar18 = puVar5;
        func_0x00010b174a4c();
        *(undefined8 **)(lVar15 + 0x98) = puVar18 + -uVar17;
        *(undefined8 **)(lVar15 + 0xa0) = puVar8;
        *(ulong *)(lVar15 + 0xa8) = lVar10 + uVar7 * 8;
        if (lVar11 != 0) {
          func_0x00010b17550c();
        }
      }
      else {
        puVar8 = puVar18 + 1;
        *puVar18 = puVar5;
      }
      *(undefined8 **)(lVar15 + 0xa0) = puVar8;
LAB_10b15bb54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar14);
      return;
    }
    func_0x00010b1751f8();
    func_0x00010b174f14(*puVar5);
  }
  else {
    FUN_10b15b400(puVar5[0x89] + 0x28);
    puVar5[0x88] = puVar5[0x84];
    puVar5[0x87] = *puVar1;
    *puVar1 = 0;
    puVar5[0x84] = 0;
    func_0x00010b177554();
    func_0x00010b1758cc((ulong)*(uint3 *)((long)puVar5 + 0x46c));
    func_0x0001052ac574();
    FUN_10b16c8fc(puVar18);
    func_0x00010b176bb4();
    func_0x0001052addf8();
    func_0x00010b175b7c();
    func_0x0001052ac664(puVar5 + 0x7c);
    func_0x00010b176924();
    func_0x00010b175d74();
    func_0x00010b1761e0();
    func_0x00010b175f60();
    func_0x00010b175218();
    *(undefined1 *)(puVar5 + 0x8e) = extraout_w8;
    if (*(char *)(puVar5 + 0x14) == '\x01') {
      FUN_10b167dd8(puVar5 + 2,puVar18);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&stack0x00000078,puVar18);
      func_0x00010b17745c();
      __ZNSt13exception_ptrD1Ev(&stack0x00000078);
    }
    func_0x00010b1768b4();
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b15bc88; end: 10b15bcb3;  */

undefined1 FUN_10b15bc88(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b176bec();
  func_0x00010b1751f0();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x378);
  func_0x00010b175068();
  return uVar1;
}



/* Entry: 10b15bcb4; end: 10b15bcef;  */

long FUN_10b15bcb4(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x370) & 1) != 0) {
    return param_1 + 0x40;
  }
  func_0x00010b175a08();
  func_0x00010b1757a4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b15bce8);
  (*pcVar1)();
}



/* Entry: 10b15bcf0; end: 10b15c1cf;  */

void FUN_10b15bcf0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  long extraout_x11;
  undefined8 *unaff_x21;
  long lVar9;
  long unaff_x22;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lStack_70;
  
  puVar5 = (undefined8 *)0x4e8;
  __Znwm();
  *puVar5 = FUN_10b1738e0;
  puVar5[1] = FUN_10b173bb4;
  puVar11 = puVar5 + 2;
  *puVar11 = &PTR_FUN_110cbfc08;
  puVar5[0x9b] = param_2;
  puVar10 = puVar5;
  func_0x00010b175850();
  func_0x00010b176ae0();
  plVar1 = puVar5 + 0x97;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_110cbfc28;
  puVar10[4] = 0;
  puVar10[5] = 0;
  func_0x00010b17702c();
  puVar10[6] = extraout_x10;
  func_0x00010b177fc8();
  puVar10[0xb] = 0;
  puVar10[0xc] = 0x32aaaba7;
  func_0x00010b17508c();
  *(undefined8 **)(unaff_x22 + 8) = puVar10;
  *(undefined8 *)(unaff_x22 + 0x10) = extraout_x8;
  *(undefined8 **)(unaff_x22 + 0x18) = puVar10;
  do {
    func_0x00010b1749b8();
  } while (extraout_w11 != 0);
  func_0x00010b177dc0();
  unaff_x21[-5] = &PTR_FUN_110cbfbc0;
  *(undefined1 *)(unaff_x21 + 3) = 0;
  lStack_70 = extraout_x8_00;
  do {
    func_0x00010b1749b8();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b1749b8();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x8_01;
  param_1[1] = puVar10;
  func_0x0001052ae2f8(&lStack_70);
  FUN_10b16c89c(puVar5 + 0x95,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  lVar7 = *(long *)(param_2 + 0x50);
  puVar5[0x97] = *(undefined8 *)(param_2 + 0x48);
  puVar5[0x98] = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  plVar6 = plVar1;
  FUN_10b15bc88();
  if (((ulong)plVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x9c) = 0;
    func_0x00010b177610();
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x378) & 1) == 0) {
      puVar10 = *(undefined8 **)(lVar7 + 0x388);
      uVar4 = *(undefined8 **)(lVar7 + 0x390) <= puVar10;
      if ((bool)uVar4) {
        lVar9 = *(long *)(lVar7 + 0x380);
        func_0x00010b177c2c();
        if (extraout_x10_00 != 0) {
          func_0x00010552fc6c();
LAB_10b15c0dc:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b15c0e0);
          (*pcVar3)();
        }
        func_0x00010b174770(extraout_x8_03 - lVar9);
        uVar2 = extraout_x9_00;
        if ((bool)uVar4) {
          uVar2 = extraout_x8_04;
        }
        if (uVar2 == 0) {
          lVar8 = 0;
        }
        else {
          if (uVar2 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b15c0dc;
          }
          lVar8 = uVar2 << 3;
          __Znwm();
        }
        puVar10 = (undefined8 *)((long)puVar10 + (lVar8 - lVar9));
        puVar11 = puVar10 + 1;
        *puVar10 = puVar5;
        func_0x00010b174e7c();
        *(undefined8 **)(lVar7 + 0x380) = puVar10 + -extraout_x11;
        *(undefined8 **)(lVar7 + 0x388) = puVar11;
        *(ulong *)(lVar7 + 0x390) = lVar8 + uVar2 * 8;
        if (lVar9 != 0) {
          func_0x00010b175b30();
        }
      }
      else {
        puVar11 = puVar10 + 1;
        *puVar10 = puVar5;
      }
      *(undefined8 **)(lVar7 + 0x388) = puVar11;
      func_0x00010b175840();
    }
    else {
      func_0x00010b175840();
      func_0x00010b174f14(*puVar5);
    }
  }
  else {
    lVar7 = *plVar1;
    FUN_10b15bcb4(lVar7);
    FUN_10b166bac(puVar5 + 0xb,lVar7);
    func_0x00010b1776d8();
    if ((puVar5[0xb] == 0) && (puVar5[0xd] != 0)) {
      param_2 = *(long *)(puVar5[0x9b] + 0x98);
      puVar5[0x80] = puVar5[0xd];
      puVar5[0x81] = puVar5[0xe];
      if (puVar5[0xe] != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b175e74();
      func_0x00010b17743c();
      func_0x00010b175af8();
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b177124(puVar5[0x9b]);
      func_0x00010b177428(puVar5[0x9b]);
      func_0x00010b17741c(puVar5[0x9b]);
      func_0x00010b176f30();
      FUN_10b153dec(param_2);
      puVar10 = puVar5 + 0x99;
      FUN_10b16a59c();
      if (((ulong)puVar10 & 1) == 0) {
        *(undefined1 *)(puVar5 + 0x9c) = 1;
        func_0x00010b175688(puVar5 + 0x99);
        return;
      }
      FUN_10b1583c4(plVar1,puVar5 + 0x99);
      func_0x00010b177804();
      puVar5[8] = puVar5[0x98];
      puVar5[7] = *plVar1;
      *plVar1 = 0;
      puVar5[0x98] = 0;
      func_0x00010b17546c();
      FUN_10b144044(plVar1);
      func_0x00010b176114();
      func_0x00010b17611c();
      func_0x00010b176124();
      func_0x00010b175f2c();
      func_0x00010b17610c();
    }
    else {
      func_0x00010b177804();
      puVar5[8] = puVar5[0xc];
      puVar5[7] = puVar5[0xb];
      if (puVar5[0xc] != 0) {
        do {
          func_0x00010b17493c();
        } while (extraout_w10_02 != 0);
      }
      func_0x00010b17546c();
    }
    func_0x00010b175f8c();
    func_0x00010b176154();
    func_0x00010b175654();
    *(undefined1 *)(puVar5 + 0x9c) = extraout_w8;
    func_0x00010b175904();
    if ((bool)in_ZR) {
      func_0x00010b177588();
      func_0x00010b177570();
      func_0x00010b175304();
      lStack_70 = param_2;
      __ZNSt3__15mutex4lockEv(param_2 + 0x48);
      if (*(char *)(param_2 + 0x10) == '\x01') {
        func_0x00010b177c84();
        lVar7 = lStack_70;
        if (unaff_x21 != (undefined8 *)0x0) {
          do {
            func_0x00010b1748f0();
          } while (extraout_w11_02 != 0);
          lVar7 = lStack_70;
          if (extraout_x9 == 0) {
            func_0x00010b174874();
            func_0x00010b1751c0();
            lVar7 = lStack_70;
          }
        }
      }
      else {
        func_0x00010b17693c(*unaff_x21);
        lVar7 = param_2;
      }
      lVar9 = *(long *)(lVar7 + 0x90);
      *(undefined8 *)(lVar7 + 0x90) = 0;
      __ZNSt3__15mutex6unlockEv(param_2 + 0x48);
      if (lVar9 == 0) {
        __ZNSt3__118condition_variable10notify_allEv(lVar7 + 0x18);
      }
      else {
        func_0x00010b175150();
        func_0x00010b17555c();
        func_0x00010b1748a8();
      }
      if (unaff_x22 != 0) {
        do {
          func_0x00010b1748f0();
        } while (extraout_w11_03 != 0);
        if (extraout_x9_01 == 0) {
          func_0x00010b174874();
          func_0x00010b1751c0();
        }
      }
    }
    else {
      func_0x00010b177568(&lStack_70);
      FUN_10b166e10(puVar11,&lStack_70);
      func_0x00010b175d64();
    }
    FUN_10b166ea8(puVar11);
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b15c1d0; end: 10b15c693;  */

void FUN_10b15c1d0(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  code *extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined4 extraout_var;
  int extraout_w11;
  int extraout_w11_00;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x25;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long *in_stack_000000a8;
  char in_stack_00000108;
  
  func_0x00010b177f90();
  puVar5 = (undefined8 *)0x438;
  __Znwm();
  plVar7 = puVar5 + 0x7b;
  *puVar5 = FUN_10b171508;
  puVar5[1] = FUN_10b171874;
  puVar5[0x85] = param_1;
  lVar11 = *param_2;
  puVar5[0x7c] = param_2[1];
  *plVar7 = lVar11;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010b175858();
  FUN_10b14bde4(extraout_x8,puVar5 + 2);
  *(undefined1 *)((long)puVar5 + 0x431) = *(undefined1 *)(param_3 + 0x38);
  *(undefined1 *)((long)puVar5 + 0x432) = *(undefined1 *)(param_3 + 0x28);
  lVar11 = param_1[1];
  puVar5[0x7d] = *param_1;
  if (lVar11 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    puVar5[0x7e] = lVar11;
    if (lVar11 != 0) {
      plVar6 = plVar7;
      FUN_10b15bc88();
      if (((ulong)plVar6 & 1) == 0) {
        *(undefined1 *)(puVar5 + 0x86) = 0;
        uVar10 = puVar5[0x7b];
        func_0x00010b175d6c();
        lVar11 = *plVar7;
        if ((*(byte *)(lVar11 + 0x378) & 1) != 0) {
          func_0x00010b175394();
          func_0x00010b174f14(*puVar5);
          return;
        }
        puVar12 = *(undefined8 **)(lVar11 + 0x388);
        uVar3 = *(undefined8 **)(lVar11 + 0x390) <= puVar12;
        if (!(bool)uVar3) {
          puVar13 = puVar12 + 1;
          *puVar12 = puVar5;
LAB_10b15c48c:
          *(undefined8 **)(lVar11 + 0x388) = puVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar10);
          return;
        }
        lVar9 = *(long *)(lVar11 + 0x380);
        func_0x00010b175c40();
        if (CONCAT44(extraout_var,extraout_w10_01) == 0) {
          func_0x00010b174770(extraout_x8_00 - lVar9);
          uVar1 = extraout_x9_01;
          if ((bool)uVar3) {
            uVar1 = extraout_x8_01;
          }
          if (uVar1 == 0) {
            lVar8 = 0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b15c57c;
            }
            lVar8 = uVar1 << 3;
            __Znwm();
          }
          puVar12 = (undefined8 *)(lVar8 + extraout_x8);
          puVar13 = puVar12 + 1;
          *puVar12 = puVar5;
          func_0x00010b174c14();
          *(undefined8 **)(lVar11 + 0x380) = puVar12 + -unaff_x25;
          *(undefined8 **)(lVar11 + 0x388) = puVar13;
          *(ulong *)(lVar11 + 0x390) = lVar8 + uVar1 * 8;
          if (lVar9 != 0) {
            func_0x00010b1761d0();
          }
          goto LAB_10b15c48c;
        }
        func_0x00010552fc6c();
        goto LAB_10b15c57c;
      }
      plVar7 = (long *)*plVar7;
      FUN_10b15bcb4();
      func_0x00010b1768ec();
      if ((((*(byte *)((long)puVar5 + 0x431) & 1) == 0) ||
          ((*(byte *)((long)puVar5 + 0x432) & 1) == 0)) &&
         ((((ulong)puVar5[0x6f] >> 0x20 & 1) == 0 || (func_0x00010b177a54(), (bool)in_CY)))) {
        func_0x00010b1748b8();
LAB_10b15c514:
        func_0x00010b1751e8();
        func_0x00010b1761a0();
        func_0x00010b175218();
        *(undefined1 *)(puVar5 + 0x86) = extraout_w8;
        func_0x00010b174aa8();
        if ((bool)in_ZR) {
          in_stack_000000a8 = plVar7;
          func_0x00010b177c08();
          FUN_10b14bca0();
        }
        else {
          func_0x00010b17739c();
          in_stack_000000a8 = param_1;
          func_0x00010b177c08();
          FUN_10b14bb60();
          __ZNSt13exception_ptrD1Ev(&stack0x000000f0);
        }
        func_0x00010b174f7c();
        func_0x00010b175814();
        func_0x00010b174f24();
      }
      else {
        param_1 = puVar5 + 0x81;
        puVar5[0x7f] = puVar5[0x12];
        puVar5[0x80] = puVar5[0x13];
        if (puVar5[0x13] != 0) {
          do {
            func_0x00010b17493c();
          } while (extraout_w10 != 0);
        }
        func_0x00010b1774a4();
        plVar6 = param_1;
        FUN_10b1479ac();
        if (((ulong)plVar6 & 1) == 0) {
          *(undefined1 *)(puVar5 + 0x86) = 1;
          in_stack_00000008 = puVar5;
          in_stack_00000010 = param_1;
          FUN_10b147a3c(&stack0x00000058,param_1,&stack0x00000008);
          if (in_stack_00000060 == 0) {
            return;
          }
          do {
            func_0x00010b1748f0();
            lVar11 = extraout_x9_00;
          } while (extraout_w11 != 0);
        }
        else {
          func_0x00010b177868();
          func_0x00010b176c68();
          func_0x00010b1774b0();
          func_0x00010b177580();
          if (((ulong)plVar6 & 1) != 0) {
            func_0x00010b175c68();
            func_0x00010b175ba8();
            if (*param_1 == 0) {
              func_0x00010b1748b8();
            }
            else {
              func_0x00010b175428();
              (*extraout_x9)(&stack0x00000008);
              plVar7 = (long *)&stack0x00000008;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (&stack0x00000058);
              FUN_10b15c694(puVar5 + 0x83,&stack0x00000058);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000058)
              ;
              func_0x000107c350e0();
              in_stack_00000058 = puVar5[0x83];
              in_stack_00000060 = puVar5[0x84];
              if (in_stack_00000060 != 0) {
                do {
                  func_0x00010b17493c();
                } while (extraout_w10_00 != 0);
              }
              FUN_10b17a83c(&stack0x000000f0,&stack0x00000058);
              func_0x0001052b41d0(&stack0x00000058);
              in_ZR = in_stack_00000108 == '\x01';
              if ((bool)in_ZR) {
                iVar4 = (int)&stack0x000000f0;
                plVar7 = puVar5 + 0x78;
                func_0x000105978288();
                if (iVar4 != 0) goto LAB_10b15c370;
                uVar10 = *(undefined8 *)(*(long *)(puVar5[0x85] + 0x58) + 0x38);
                FUN_10b202630(&stack0x00000058,&stack0x000000f0);
                FUN_10b202630(&stack0x00000008,puVar5 + 0x78);
                FUN_10b1f7560(&stack0x000000a8,uVar10,&stack0x00000058,&stack0x00000008);
                plVar7 = (long *)&stack0x000000a8;
                FUN_10b16a20c(puVar5 + 7);
                func_0x0001052a038c(&stack0x000000a8);
                func_0x00010b175fac();
                func_0x00010b121e00(&stack0x00000058);
              }
              else {
LAB_10b15c370:
                func_0x00010b1748b8();
              }
              func_0x000107c279a4(&stack0x000000f0);
              func_0x00010b1769b0();
            }
            func_0x00010b175d74();
            func_0x00010b1762d4();
            func_0x00010b17608c();
            goto LAB_10b15c514;
          }
          *(undefined1 *)(puVar5 + 0x86) = 2;
          in_stack_00000008 = puVar5;
          in_stack_00000010 = puVar5 + 0x83;
          func_0x00010b177598(&stack0x00000058);
          if (in_stack_00000060 == 0) {
            return;
          }
          do {
            func_0x00010b1748f0();
            lVar11 = extraout_x9_02;
          } while (extraout_w11_00 != 0);
        }
        if (lVar11 == 0) {
          func_0x00010b174824();
          func_0x00010b174f98();
        }
      }
      return;
    }
  }
  func_0x00010527822c();
LAB_10b15c57c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b15c580);
  (*pcVar2)();
}



/* Entry: 10b15c694; end: 10b15c6b3;  */

void FUN_10b15c694(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b16cb90(&uStack_11,param_1);
  return;
}



/* Entry: 10b15c6b4; end: 10b15d2e3;  */

void FUN_10b15c6b4(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  undefined1 in_ZR;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  uint extraout_w8;
  undefined8 extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  code *extraout_x8_11;
  long extraout_x8_12;
  uint extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w12;
  int extraout_w12_00;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [8];
  undefined1 *puStack_d8;
  code *pcStack_d0;
  long *aplStack_c8 [11];
  undefined8 uStack_70;
  
  func_0x00010b1749f4();
  plVar15 = (long *)0xc90;
  uStack_70 = extraout_x8;
  __Znwm();
  *plVar15 = (long)FUN_10b1718dc;
  plVar15[1] = (long)FUN_10b172360;
  plVar15[0x18c] = (long)param_2;
  plVar27 = plVar15 + 0x71;
  lVar19 = *param_3;
  plVar26 = plVar15 + 0x17b;
  plVar15[0x180] = param_3[1];
  plVar15[0x17f] = lVar19;
  *param_3 = 0;
  param_3[1] = 0;
  lVar19 = *param_4;
  plVar15[0x17c] = param_4[1];
  plVar15[0x17b] = lVar19;
  *param_4 = 0;
  param_4[1] = 0;
  lVar19 = *param_5;
  lVar22 = param_5[3];
  lVar23 = param_5[2];
  plVar15[0x160] = param_5[1];
  plVar15[0x15f] = lVar19;
  plVar15[0x162] = lVar22;
  plVar15[0x161] = lVar23;
  plVar15[0x163] = param_5[4];
  *(char *)((long)plVar15 + 0xc5f) = (char)param_5[5];
  lVar19 = *(long *)((long)param_5 + 0x29);
  *(long *)((long)plVar15 + 0xc4f) = param_5[6];
  plVar15[0x189] = lVar19;
  *(char *)((long)plVar15 + 0xc8c) = (char)param_5[7];
  uVar6 = *(undefined4 *)((long)param_5 + 0x39);
  *(undefined4 *)((long)plVar15 + 0xc5a) = *(undefined4 *)((long)param_5 + 0x3c);
  *(undefined4 *)((long)plVar15 + 0xc57) = uVar6;
  func_0x00010b176290();
  FUN_10b124f40(param_1,plVar15 + 2);
  FUN_10b16a26c(plVar15 + 0x185,*param_2,param_2[1]);
  plVar25 = plVar26;
  FUN_10b15bc88();
  plVar20 = plVar15;
  if (((ulong)plVar25 & 1) == 0) {
    *(undefined1 *)((long)plVar15 + 0xc5e) = 0;
    lVar23 = plVar15[0x17b];
    func_0x00010b17563c();
    lVar19 = *plVar26;
    if ((*(byte *)(lVar19 + 0x378) & 1) != 0) {
      func_0x00010b1751f8();
      func_0x00010b174f14(*plVar15);
      goto LAB_10b15c8fc;
    }
    puVar28 = *(undefined8 **)(lVar19 + 0x388);
    uVar10 = *(undefined8 **)(lVar19 + 0x390) <= puVar28;
    in_ZR = puVar28 == *(undefined8 **)(lVar19 + 0x390);
    if ((bool)uVar10) {
      lVar22 = *(long *)(lVar19 + 0x380);
      func_0x00010b177ac8();
      if (extraout_x10 != 0) {
        func_0x00010552fc6c();
LAB_10b15d04c:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10b15d050);
        (*pcVar9)();
      }
      func_0x00010b174770(extraout_x8_02 - lVar22);
      uVar21 = extraout_x9_00;
      if ((bool)uVar10) {
        uVar21 = extraout_x8_03;
      }
      if (uVar21 == 0) {
        lVar24 = 0;
      }
      else {
        if (uVar21 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10b15d04c;
        }
        lVar24 = uVar21 << 3;
        __Znwm();
      }
      puVar28 = (undefined8 *)(lVar24 + (long)plVar26);
      puVar29 = puVar28 + 1;
      *puVar28 = plVar15;
      func_0x00010b174a4c();
      *(undefined8 **)(lVar19 + 0x380) = puVar28 + -(long)(plVar15 + 0x189);
      *(undefined8 **)(lVar19 + 0x388) = puVar29;
      *(ulong *)(lVar19 + 0x390) = lVar24 + uVar21 * 8;
      if (lVar22 != 0) {
        func_0x00010b17550c();
      }
    }
    else {
      puVar29 = puVar28 + 1;
      *puVar28 = plVar15;
    }
    *(undefined8 **)(lVar19 + 0x388) = puVar29;
LAB_10b15c9b8:
    func_0x000107c350b0(uStack_70);
    plVar27 = plVar26;
    if (!(bool)in_ZR) goto LAB_10b15d000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar23);
    return;
  }
  lVar19 = *plVar26;
  FUN_10b15bcb4(lVar19);
  FUN_10b166bac(plVar15 + 10,lVar19);
  in_ZR = (char)plVar15[0x1f] == '\x01';
  if ((bool)in_ZR) {
    plVar25 = plVar15 + 0xe;
    FUN_10b1c41c0();
    plVar15[0x18d] = (long)plVar25;
    if (plVar25 == (long *)0x0) goto LAB_10b15c874;
    plVar15[0x18e] = *(long *)(plVar15[0x18c] + 0x58);
    func_0x00010b175608();
    if (((ulong)plVar25 & 1) == 0) {
      *(undefined1 *)((long)plVar15 + 0xc5e) = 1;
      lVar19 = plVar15[0x18e];
      lVar23 = *(long *)(lVar19 + 0x68);
      func_0x00010b17563c();
      lVar22 = *(long *)(lVar19 + 0x68);
      if ((*(byte *)(lVar22 + 0x78) & 1) != 0) {
        func_0x00010b1751f8();
        func_0x00010b174f14(*plVar15);
        goto LAB_10b15c8fc;
      }
      puVar28 = *(undefined8 **)(lVar22 + 0x88);
      uVar10 = *(undefined8 **)(lVar22 + 0x90) <= puVar28;
      in_ZR = puVar28 == *(undefined8 **)(lVar22 + 0x90);
      if ((bool)uVar10) {
        lVar24 = *(long *)(lVar22 + 0x80);
        func_0x00010b177ac8();
        if (extraout_x10_00 != 0) {
          func_0x00010552fc6c();
          goto LAB_10b15d04c;
        }
        func_0x00010b174770(extraout_x8_04 - lVar24);
        uVar21 = extraout_x9_01;
        if ((bool)uVar10) {
          uVar21 = extraout_x8_05;
        }
        if (uVar21 == 0) {
          lVar16 = 0;
        }
        else {
          if (uVar21 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b15d04c;
          }
          lVar16 = uVar21 << 3;
          __Znwm();
        }
        puVar28 = (undefined8 *)(lVar16 + (long)plVar26);
        puVar29 = puVar28 + 1;
        *puVar28 = plVar15;
        func_0x00010b174a4c();
        *(undefined8 **)(lVar22 + 0x80) = puVar28 + -lVar19;
        *(undefined8 **)(lVar22 + 0x88) = puVar29;
        *(ulong *)(lVar22 + 0x90) = lVar16 + uVar21 * 8;
        if (lVar24 != 0) {
          func_0x00010b17550c();
        }
      }
      else {
        puVar29 = puVar28 + 1;
        *puVar28 = plVar15;
      }
      *(undefined8 **)(lVar22 + 0x88) = puVar29;
      goto LAB_10b15c9b8;
    }
    func_0x00010b17527c(plVar15[0x18e]);
    func_0x00010b177908();
    iVar13 = (int)plVar25;
    lVar19 = extraout_x8_00;
    if (extraout_x9 != 0) {
      do {
        func_0x00010b1749b8();
        iVar13 = (int)plVar25;
        lVar19 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    if (lVar19 == 0) {
      func_0x00010b174f74();
    }
    else {
      func_0x00010b175aac();
      FUN_10b1ad9fc(plVar15 + 0x146);
      uVar18 = (uint)*(byte *)(plVar15 + 0x150);
      cVar11 = SBORROW4(uVar18,1);
      cVar12 = (int)(uVar18 - 1) < 0;
      in_ZR = uVar18 == 1;
      if (((bool)in_ZR) &&
         (((*(byte *)((long)plVar15 + 0xa6c) & 1) != 0 ||
          ((*(byte *)((long)plVar15 + 0xa6d) & 1) != 0)))) {
        func_0x00010b17636c();
        func_0x00010b177308();
        func_0x00010b175e18();
        if ((cVar12 == cVar11) && (func_0x00010b177708(plVar15[0x179]), iVar13 == 0)) {
          func_0x00010b1767d4();
          plVar25 = *(long **)(extraout_x9_02 + 0x48);
          lVar19 = *(long *)(extraout_x9_02 + 0x30);
          lVar23 = *(long *)(extraout_x9_02 + 0x28);
          plVar15[0xd7] = *(long *)(extraout_x9_02 + 0x30);
          plVar15[0xd6] = lVar23;
          if (lVar19 != 0) {
            do {
              func_0x00010b17493c();
            } while (extraout_w10 != 0);
          }
          plVar1 = plVar15 + 0xd6;
          plVar2 = plVar15 + 0x70;
          plVar15[0xd9] = plVar15[0x180];
          plVar15[0xd8] = plVar15[0x17f];
          if (plVar15[0x180] != 0) {
            do {
              func_0x00010b17493c();
            } while (extraout_w10_00 != 0);
          }
          FUN_10b163540(plVar2);
          func_0x00010b176770();
          plStack_128 = (long *)plVar15[0xd7];
          plStack_130 = (long *)plVar15[0xd6];
          lStack_118 = plVar15[0xd9];
          lStack_120 = plVar15[0xd8];
          lStack_100 = plVar15[0x72];
          lStack_108 = *plVar27;
          lStack_f0 = plVar15[0x74];
          lStack_f8 = plVar15[0x73];
          *plVar1 = 0;
          plVar15[0xd7] = 0;
          plVar15[0xd8] = 0;
          plVar15[0xd9] = 0;
          *plVar27 = 0;
          plVar15[0x72] = 0;
          ppuStack_110 = &PTR_FUN_110cbf778;
          pcStack_d0 = FUN_10b166f28;
          plVar15[0x73] = 0;
          plVar15[0x74] = 0;
          FUN_10b166f94(aplStack_c8,&plStack_130);
          (**(code **)(*plVar25 + 0x10))(plVar25,&pcStack_d0);
          func_0x00010b174ec8(aplStack_c8[0]);
          FUN_10b166f04(&plStack_130);
          FUN_10b163678(plVar2);
          plVar25 = plVar15 + 0x128;
          FUN_10b16ab9c();
          if (((ulong)plVar25 & 1) == 0) {
            *(undefined1 *)((long)plVar15 + 0xc5e) = 2;
            func_0x00010b175cc0(plVar15 + 0x128);
            goto LAB_10b15c8fc;
          }
          plVar25 = plVar15 + 0x183;
          FUN_10b158ed0(plVar25,plVar15 + 0x128);
          func_0x00010b1757ac();
          FUN_10b15d2e4(plVar1);
          if (*plVar25 == 0) {
            func_0x00010b174f74();
          }
          else {
            func_0x00010b1763cc();
            (*extraout_x9_03)(plVar15 + 0x128);
            if ((*(byte *)(plVar15 + 0x145) & 1) == 0) {
              func_0x00010b174f74();
            }
            else {
              func_0x00010b175dd0();
              if (extraout_x8_06 != 0) {
                do {
                  func_0x00010b17493c();
                } while (extraout_w10_01 != 0);
              }
              *(undefined4 *)(plVar15 + 0x127) = 1;
              FUN_10b165f00(plVar15 + 0x164);
              FUN_10b1661e0(plVar15 + 0x164,plVar1);
              plVar3 = plVar15 + 0x151;
              plVar4 = plVar15 + 0x16d;
              uVar10 = *(undefined1 *)((long)plVar15 + 0xc8c);
              func_0x00010b176010();
              func_0x00010b176768();
              plVar15[0x152] = plVar15[0x160];
              *plVar3 = plVar15[0x15f];
              plVar15[0x154] = plVar15[0x162];
              plVar15[0x153] = plVar15[0x161];
              plVar15[0x155] = plVar15[0x163];
              *(char *)(plVar15 + 0x156) = (char)plVar25;
              *(long *)((long)plVar15 + 0xab1) = plVar15[0x189];
              plVar15[0x157] = *(long *)((long)plVar15 + 0xc4f);
              *(undefined1 *)(plVar15 + 0x158) = uVar10;
              *(undefined4 *)((long)plVar15 + 0xac1) = *(undefined4 *)((long)plVar15 + 0xc57);
              func_0x00010b175a44(*(undefined4 *)((long)plVar15 + 0xc5a));
              if (extraout_x8_07 != 0) {
                do {
                  func_0x00010b17493c();
                } while (extraout_w10_02 != 0);
              }
              func_0x00010b177e6c(plVar15[0x18c]);
              func_0x00010b17672c(plVar4);
              FUN_10b157390();
              plVar17 = plVar4;
              FUN_10b16a824();
              if (((ulong)plVar17 & 1) == 0) {
                *(undefined1 *)((long)plVar15 + 0xc5e) = 3;
                func_0x00010b1751c8();
                FUN_10b1587c0();
                goto LAB_10b15c8fc;
              }
              FUN_10b158910(plVar2,plVar4);
              bVar7 = *(byte *)((long)plVar15 + 0xc8c);
              bVar8 = *(byte *)((long)plVar15 + 0xc5f);
              FUN_10b163af0(plVar4);
              func_0x00010529fde0(plVar15 + 0x181);
              func_0x00010b175fd0();
              func_0x00010b175ff4();
              FUN_10b163d6c(plVar1);
              if (((((bVar7 & 1) != 0) && ((bVar8 & 1) != 0)) ||
                  ((((ulong)plVar15[0xcd] >> 0x20 & 1) != 0 &&
                   (in_ZR = (int)plVar15[0xcd] == 1, (bool)in_ZR)))) ||
                 ((((func_0x00010b177a20(), (extraout_x8_08 & 1) != 0 || (*plVar2 == 0)) ||
                   (in_ZR = (char)plVar15[199] == '\x01', !(bool)in_ZR)) ||
                  (in_ZR = plVar15[0xc6] == plVar15[0xc5], plVar15[0xc6] <= plVar15[0xc5])))) {
                func_0x00010b174f74();
              }
              else {
                FUN_10b15b614(plVar1,plVar2);
                plVar17 = plVar1;
                FUN_10b1479ac();
                if (((ulong)plVar17 & 1) == 0) {
                  *(undefined1 *)((long)plVar15 + 0xc5e) = 4;
                  plStack_130 = plVar15;
                  plStack_128 = plVar1;
                  FUN_10b147a3c(&pcStack_d0,plVar1,&plStack_130);
                  plVar20 = aplStack_c8[0];
                  if (aplStack_c8[0] != (long *)0x0) {
                    do {
                      func_0x00010b1748f0();
                      lVar19 = extraout_x9_07;
                      if (extraout_w11_00 == 0) goto LAB_10b15cfd8;
                    } while( true );
                  }
                  goto LAB_10b15c8fc;
                }
                FUN_10b146f6c(plVar3,plVar1);
                plVar17 = plVar1;
                func_0x00010b147278();
                uVar14 = (uint)plVar17;
                func_0x00010b1758b4(*(undefined1 *)((long)plVar15 + 0xa9f));
                uVar18 = 0;
                if (extraout_x8_09 != 0) {
                  plVar17 = plVar3;
                  func_0x000107c278d0(plVar3,plVar15 + 0x170);
                  uVar14 = (uint)plVar17;
                  uVar18 = uVar14 ^ 1;
                }
                uVar21 = 0;
                in_ZR = *(char *)((long)plVar15 + 0x33c) == '\x01';
                if (((bool)in_ZR) && ((int)plVar15[0x67] == 0)) {
                  func_0x00010b177a0c();
                  uVar21 = (ulong)(extraout_w9 & extraout_w8);
                  uVar18 = extraout_w8;
                }
                if (uVar18 == 0) {
LAB_10b15cfe8:
                  func_0x00010b174f74();
                }
                else {
                  func_0x00010b17556c();
                  func_0x00010b175ffc();
                  if (((uint)uVar21 & uVar14 & 1) == 0) goto LAB_10b15cfe8;
                  func_0x00010b175888();
                  plVar17 = (long *)(uVar21 + 0x30);
                  FUN_10b1ae120(plVar17,plVar15 + 0x170,plVar3);
                  plVar15[0xd7] = 1;
                  func_0x00010b1776b0();
                  plVar15[0xd8] = (long)plVar17;
                  func_0x00010b176b0c();
                  aplStack_c8[0] = (long *)plVar15[0x71];
                  pcStack_d0 = (code *)*plVar2;
                  if (*plVar27 != 0) {
                    do {
                      func_0x00010b17493c();
                    } while (extraout_w10_03 != 0);
                  }
                  plVar27 = plVar15 + 0x187;
                  func_0x00010b1779a8();
                  if (extraout_x8_10 != 0) {
                    do {
                      func_0x00010b17493c();
                    } while (extraout_w10_04 != 0);
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (plVar4,plVar3);
                  plVar5 = plVar17 + 3;
                  FUN_10b16aa3c(plVar5,&pcStack_d0);
                  plVar17[3] = (long)&PTR_FUN_110cc04a8;
                  lVar19 = *plVar27;
                  plVar17[0xc] = plVar15[0x188];
                  plVar17[0xb] = lVar19;
                  *plVar27 = 0;
                  plVar15[0x188] = 0;
                  lVar19 = *plVar4;
                  plVar17[0xe] = plVar15[0x16e];
                  plVar17[0xd] = lVar19;
                  plVar17[0xf] = plVar15[0x16f];
                  *plVar4 = 0;
                  plVar15[0x16e] = 0;
                  plVar15[0x16f] = 0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                  func_0x00010b176228();
                  func_0x0001052aad48(&pcStack_d0);
                  plVar15[0xd8] = 0;
                  plVar15[0x164] = (long)plVar5;
                  plVar15[0x165] = (long)plVar17;
                  FUN_10b16ccac(plVar1);
                  func_0x00010b177b44(plVar15[0x70]);
                  (*extraout_x8_11)();
                  func_0x00010b176e10();
                  pcStack_d0 = (code *)plVar15[0xc5];
                  plStack_130 = plVar5;
                  plStack_128 = plVar17;
                  if ((bool)in_ZR) {
                    pcStack_d0 = (code *)0x0;
                  }
                  do {
                    func_0x00010b176ce8();
                  } while (extraout_w9_00 != 0);
                  func_0x00010b175428();
                  (*extraout_x9_04)(plVar4);
                  func_0x0001052aacf8(&plStack_130);
                  func_0x00010b17796c();
                  if (extraout_x9_05 != 0) {
                    do {
                      func_0x00010b174a1c();
                    } while (extraout_w12 != 0);
                    do {
                      func_0x00010b174a1c();
                    } while (extraout_w12_00 != 0);
                  }
                  func_0x00010b176638();
                  plVar15[0x15b] = extraout_x8_12;
                  plVar15[0x15c] = extraout_x9_06;
                  pcStack_d0 = (code *)0x0;
                  aplStack_c8[0] = (long *)0x0;
                  func_0x00010b1ae2f4(uVar21 + 0x30,plVar3,plVar15 + 0x159);
                  func_0x00010b176980();
                  FUN_10b16cdc8(&pcStack_d0);
                  plVar17 = plVar17 + 6;
                  FUN_10b14b830(plVar27);
                  func_0x00010b177638();
                  if (((ulong)plVar17 & 1) == 0) goto LAB_10b15d004;
                  func_0x00010b176220(plVar1);
                  func_0x00010b175484();
                  func_0x0001052a038c(plVar1);
                  func_0x00010b174f74();
                  func_0x00010b175f7c();
                  func_0x0001052aad20(plVar4);
                  func_0x00010b176024();
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar3);
              }
              FUN_10b163f04(plVar2);
            }
            func_0x00010b17602c();
          }
          func_0x0001052b4284(plVar25);
        }
        else {
          func_0x00010b174f74();
        }
        func_0x00010b176058();
      }
      else {
        func_0x00010b174f74();
      }
      func_0x00010b176050();
    }
    func_0x00010b125888(plVar15 + 0x179);
  }
  else {
LAB_10b15c874:
    func_0x00010b174f74();
  }
  func_0x00010b176278();
  func_0x00010b176074();
  *plVar15 = 0;
  *(undefined1 *)((long)plVar15 + 0xc5e) = 6;
  func_0x00010b175910();
  if ((bool)in_ZR) {
    puStack_d8 = auStack_e0;
    func_0x00010b177c08();
    func_0x000107c27b6c();
  }
  else {
    func_0x00010b175040(auStack_e0);
    puStack_d8 = auStack_e0;
    func_0x00010b177c08();
    func_0x000104bf33ec();
    __ZNSt13exception_ptrD1Ev(auStack_e0);
  }
  func_0x00010b175038();
  FUN_10b166c8c(plVar26);
  func_0x00010529fde0(plVar15 + 0x17f);
  func_0x00010b174f24();
LAB_10b15c8fc:
  while (func_0x000107c350b0(uStack_70), plVar27 = plVar26, !(bool)in_ZR) {
LAB_10b15d000:
    ___stack_chk_fail();
LAB_10b15d004:
    *(undefined1 *)((long)plVar15 + 0xc5e) = 5;
    plStack_130 = plVar20;
    plStack_128 = plVar27;
    func_0x00010b175934(&pcStack_d0);
    plVar20 = aplStack_c8[0];
    plVar26 = plVar27;
    if (aplStack_c8[0] != (long *)0x0) {
      do {
        func_0x00010b1748f0();
        lVar19 = extraout_x9_08;
      } while (extraout_w11_01 != 0);
LAB_10b15cfd8:
      if (lVar19 == 0) {
        func_0x00010b174824();
        func_0x00010b174f98();
      }
    }
  }
  return;
}



/* Entry: 10b15d2e4; end: 10b15d32b;  */

long FUN_10b15d2e4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1755f4();
  func_0x00010529fde0();
  lVar1 = unaff_x19;
  func_0x0001005f1e70();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b15d32c; end: 10b15d96f;  */

void FUN_10b15d32c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 extraout_w8;
  undefined8 uVar12;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar13;
  undefined4 *extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined8 extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w13;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long in_stack_00000018;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000068;
  
  func_0x00010b177f20();
  func_0x00010b176b28();
  puVar7 = (undefined8 *)0x598;
  __Znwm();
  *puVar7 = FUN_10b173130;
  puVar7[1] = FUN_10b1735c8;
  puVar7[0xb1] = unaff_x21;
  plVar1 = puVar7 + 0xa4;
  uVar12 = *param_2;
  puVar7[0xa5] = param_2[1];
  puVar7[0xa4] = uVar12;
  *param_2 = 0;
  param_2[1] = 0;
  uVar12 = *param_3;
  uVar18 = param_3[3];
  uVar17 = param_3[2];
  puVar7[0x94] = param_3[1];
  puVar7[0x93] = uVar12;
  puVar7[0x96] = uVar18;
  puVar7[0x95] = uVar17;
  puVar7[0x97] = param_3[4];
  *(undefined1 *)((long)puVar7 + 0x587) = *(undefined1 *)(param_3 + 5);
  uVar12 = *(undefined8 *)((long)param_3 + 0x29);
  *(undefined8 *)((long)puVar7 + 0x577) = param_3[6];
  puVar7[0xae] = uVar12;
  *(undefined1 *)(puVar7 + 0xb2) = *(undefined1 *)(param_3 + 7);
  uVar4 = *(undefined4 *)((long)param_3 + 0x39);
  *(undefined4 *)((long)puVar7 + 0x582) = *(undefined4 *)((long)param_3 + 0x3c);
  *(undefined4 *)((long)puVar7 + 0x57f) = uVar4;
  func_0x00010b175858();
  func_0x00010b175008();
  FUN_10b16a26c(puVar7 + 0xa6,*unaff_x21,unaff_x21[1]);
  plVar16 = plVar1;
  FUN_10b15bc88();
  if (((ulong)plVar16 & 1) != 0) {
    puVar8 = (undefined8 *)*plVar1;
    FUN_10b15bcb4();
    func_0x00010b1768ec();
    if ((((puVar7[0x14] == 0) && ((*(byte *)(puVar7 + 0x21) & 1) == 0)) &&
        ((*(byte *)(puVar7 + 0x27) & 1) == 0)) && (puVar7[0x12] == 0)) {
      func_0x00010b1758f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar7 + 0x9c);
      func_0x00010b17657c();
      func_0x00010b175730();
      if ((bool)in_ZR) {
        func_0x00010b174dd8();
      }
      func_0x00010b175290();
      func_0x00010b1756a8();
      func_0x00010b17564c();
      func_0x00010b17781c();
    }
    else {
      unaff_x20 = puVar7 + 0x81;
      puVar10 = puVar7 + 0x89;
      if ((((*(byte *)(puVar7 + 0xb2) & 1) != 0) && ((*(byte *)((long)puVar7 + 0x587) & 1) != 0)) ||
         ((((ulong)puVar7[0x6f] >> 0x20 & 1) != 0 &&
          (func_0x00010b177a48(), !(bool)in_CY || (bool)in_ZR)))) {
        func_0x00010b1770ec();
        if (((bool)in_ZR) && (func_0x00010b175da8(), (bool)in_ZR || in_NG != in_OV)) {
          func_0x00010b1748b8();
        }
        else {
          lVar15 = puVar7[0xb1];
          in_ZR = *(char *)(*(long *)(lVar15 + 0x58) + 0x98) == '\x01';
          if ((bool)in_ZR) {
            func_0x000104bffddc(lVar15 + 0x18);
            func_0x000104bffddc(lVar15 + 0x38);
          }
          func_0x00010b1756f4();
          func_0x000107c278b8(puVar10);
          FUN_10b1612e8(puVar7 + 0x8e);
          in_stack_00000050 = (undefined8 *)0x0;
          in_stack_00000058 = (undefined8 *)0x0;
          puVar7[0xa2] = 0;
          puVar7[0xa3] = 0;
          FUN_10b145278(&stack0x00000010,puVar7 + 0x8f,puVar7 + 0xa2);
          func_0x00010b177344();
          func_0x00010b17554c();
          func_0x00010b176a58();
          puVar8 = in_stack_00000050;
          __ZNSt3__15mutex4lockEv(in_stack_00000050 + 9);
          func_0x00010b177d74();
          if ((bool)in_ZR) {
            if (extraout_x9 != 0) {
              do {
                func_0x00010b174e00();
              } while (extraout_w13 != 0);
            }
            func_0x00010b175f18();
            puVar13 = in_stack_00000050;
          }
          else {
            *extraout_x8 = extraout_x10;
            extraout_x8[1] = extraout_x9;
            puVar13 = extraout_x8;
            if (extraout_x9 != 0) {
              do {
                func_0x00010b1749b8();
                puVar13 = extraout_x8_02;
              } while (extraout_w11 != 0);
            }
            *(undefined1 *)(puVar13 + 2) = 1;
          }
          plVar16 = (long *)puVar13[0x12];
          puVar13[0x12] = 0;
          __ZNSt3__15mutex6unlockEv(puVar8 + 9);
          if (plVar16 == (long *)0x0) {
            func_0x00010b177680();
          }
          else {
            (**(code **)(*plVar16 + 0x10))(plVar16,&stack0x00000050);
            func_0x00010b175848(*(undefined8 *)(*plVar16 + 8));
          }
          func_0x00010b1767f8();
          func_0x00010b177110();
          puVar13 = puVar7 + 0xa8;
          puVar2 = puVar7 + 0x9f;
          uVar6 = *(undefined1 *)((long)puVar7 + 0x587);
          uVar12 = puVar7[0xb1];
          func_0x00010b176550();
          uVar18 = puVar7[0x94];
          uVar17 = puVar7[0x93];
          puVar7[0x82] = uVar18;
          *unaff_x20 = uVar17;
          puVar7[0x84] = puVar7[0x96];
          puVar7[0x83] = puVar7[0x95];
          puVar7[0x85] = puVar7[0x97];
          *(undefined1 *)(puVar7 + 0x86) = uVar6;
          func_0x00010b1764f8();
          *extraout_x8_03 = *(undefined4 *)((long)puVar7 + 0x57f);
          *(undefined4 *)((long)puVar7 + 0x444) = *(undefined4 *)((long)puVar7 + 0x582);
          func_0x00010b177d48();
          puVar7[0xa1] = extraout_x8_04;
          puVar7[0xa0] = uVar18;
          *puVar2 = uVar17;
          func_0x00010b175444();
          puVar8 = puVar7 + 0xaa;
          FUN_10b158f6c(puVar13,uVar12,puVar8,unaff_x20,0,0,puVar2);
          puVar11 = puVar13;
          func_0x000105c417a8();
          if (((ulong)puVar11 & 1) == 0) {
            *(undefined1 *)((long)puVar7 + 0x586) = 1;
            in_stack_00000050 = puVar7;
            in_stack_00000058 = puVar13;
            func_0x00010b1764e0();
            func_0x000105c41834(puVar13);
            if (in_stack_00000018 == 0) {
              return;
            }
            do {
              func_0x00010b1748f0();
              lVar15 = extraout_x9_01;
            } while (extraout_w11_00 != 0);
            goto LAB_10b15d804;
          }
          func_0x000105c40888(puVar7 + 0x78,puVar13);
          func_0x00010b174e10();
          func_0x00010b175374();
          func_0x0001052a55c0(puVar13);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
          func_0x00010b176324();
          func_0x00010b1761c8();
          unaff_x20 = puVar10;
        }
      }
      else {
        FUN_10b1639a0(puVar10);
        func_0x00010b1774ec();
        func_0x00010b175f3c();
        func_0x00010b176c38();
        puVar8 = puVar7 + 0xac;
        FUN_10b1584ac(unaff_x20,param_3);
        puVar10 = unaff_x20;
        func_0x000105c417a8();
        if (((ulong)puVar10 & 1) == 0) {
          *(undefined1 *)((long)puVar7 + 0x586) = 2;
          in_stack_00000050 = puVar7;
          in_stack_00000058 = unaff_x20;
          func_0x00010b1764e0();
          func_0x000105c41834(unaff_x20);
          if (in_stack_00000018 == 0) {
            return;
          }
          do {
            func_0x00010b1748f0();
            lVar15 = extraout_x9_02;
          } while (extraout_w11_01 != 0);
LAB_10b15d804:
          if (lVar15 != 0) {
            return;
          }
          func_0x00010b174824();
          func_0x00010b174f98();
          return;
        }
        func_0x000105c40888(puVar7 + 0x78,unaff_x20);
        func_0x00010b174e10();
        func_0x00010b175374();
        func_0x0001052a55c0(unaff_x20);
        func_0x00010b175f10();
      }
    }
    func_0x00010b1751e8();
    func_0x00010b175f58();
    func_0x00010b175218();
    *(undefined1 *)((long)puVar7 + 0x586) = extraout_w8;
    func_0x00010b174aa8();
    if ((bool)in_ZR) {
      in_stack_00000068 = puVar8;
      func_0x00010b1752f8();
    }
    else {
      func_0x00010b175d84();
      in_stack_00000068 = unaff_x20;
      func_0x00010b1752ec();
      func_0x00010b177640();
    }
    func_0x00010b174f7c();
    FUN_10b166c8c(plVar1);
    func_0x00010b174f24();
    return;
  }
  *(undefined1 *)((long)puVar7 + 0x586) = 0;
  uVar12 = puVar7[0xa4];
  func_0x00010b175d6c();
  lVar15 = *plVar1;
  if ((*(byte *)(lVar15 + 0x378) & 1) != 0) {
    func_0x00010b175394();
    func_0x00010b174f14(*puVar7);
    return;
  }
  puVar8 = *(undefined8 **)(lVar15 + 0x388);
  uVar6 = *(undefined8 **)(lVar15 + 0x390) <= puVar8;
  if ((bool)uVar6) {
    lVar14 = *(long *)(lVar15 + 0x380);
    func_0x00010b175c40();
    if (extraout_x10_00 != 0) {
      func_0x00010552fc6c();
LAB_10b15d820:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10b15d824);
      (*pcVar5)();
    }
    func_0x00010b174770(extraout_x8_00 - lVar14);
    uVar3 = extraout_x9_00;
    if ((bool)uVar6) {
      uVar3 = extraout_x8_01;
    }
    if (uVar3 == 0) {
      lVar9 = 0;
    }
    else {
      if (uVar3 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10b15d820;
      }
      lVar9 = uVar3 << 3;
      __Znwm();
    }
    param_3 = (undefined8 *)(lVar9 + (long)param_3);
    puVar10 = param_3 + 1;
    *param_3 = puVar7;
    func_0x00010b174c14();
    *(undefined8 **)(lVar15 + 0x380) = param_3 + -(long)plVar1;
    *(undefined8 **)(lVar15 + 0x388) = puVar10;
    *(ulong *)(lVar15 + 0x390) = lVar9 + uVar3 * 8;
    if (lVar14 != 0) {
      func_0x00010b1761d0();
    }
  }
  else {
    puVar10 = puVar8 + 1;
    *puVar8 = puVar7;
  }
  *(undefined8 **)(lVar15 + 0x388) = puVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar12);
  return;
}



/* Entry: 10b15d970; end: 10b15d993;  */

long FUN_10b15d970(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1755f4();
  func_0x00010529fde0();
  lVar1 = unaff_x19;
  func_0x00010b1750d4();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b15d994; end: 10b15e3a7;  */

void FUN_10b15d994(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  code **ppcVar4;
  code ****ppppcVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  code **ppcVar7;
  undefined8 extraout_x8;
  code **ppcVar8;
  long lVar9;
  long extraout_x8_00;
  code **extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  code ***extraout_x9;
  code ***pppcVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  long *unaff_x19;
  undefined8 *unaff_x21;
  code ***pppcVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  code **ppcStack_270;
  long lStack_268;
  undefined1 uStack_258;
  undefined8 *apuStack_250 [2];
  long alStack_240 [2];
  code ***pppcStack_230;
  undefined **ppuStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  code **ppcStack_210;
  undefined8 *puStack_208;
  code ***pppcStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  code ***pppcStack_1c0;
  undefined **ppuStack_1b8;
  long alStack_1b0 [2];
  ulong uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code **ppcStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code ***pppcStack_d0;
  undefined **ppuStack_c8;
  code ***pppcStack_c0;
  undefined **ppuStack_b8;
  code **ppcStack_b0;
  long lStack_a8;
  code ***pppcStack_a0;
  undefined **ppuStack_98;
  code ***pppcStack_90;
  undefined **ppuStack_88;
  code **ppcStack_80;
  long lStack_78;
  undefined8 uStack_8;
  
  func_0x00010b176cc0();
  func_0x00010b175054();
  func_0x000107c350b4();
  uStack_8 = extraout_x8;
  FUN_10b13e138(alStack_240,param_2);
  if (alStack_240[0] == 0) {
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
    uStack_188 = uStack_188 & 0xffffffffffffff00;
  }
  else {
    func_0x000107c279a0(&uStack_1a0,alStack_240[0] + 0x88);
    if (alStack_240[0] != 0) {
      func_0x000107c279a0(&ppcStack_270,alStack_240[0] + 0xa8);
      goto LAB_10b15da08;
    }
  }
  ppcStack_270 = (code **)((ulong)ppcStack_270 & 0xffffffffffffff00);
  uStack_258 = 0;
LAB_10b15da08:
  func_0x00010b177748(&ppcStack_b0);
  uVar1 = *param_3;
  puVar6 = (undefined8 *)0x110;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110cc05a8;
  func_0x000107c279a0(&uStack_150,&uStack_1a0);
  func_0x000107c279a0(&ppcStack_f8,&ppcStack_270);
  ppuStack_98 = (undefined **)lStack_a8;
  pppcStack_a0 = (code ***)ppcStack_b0;
  ppcStack_b0 = (code **)0x0;
  lStack_a8 = 0;
  FUN_10b123790(&pppcStack_90,param_3);
  FUN_10b16d26c(puVar6 + 3,uVar1,&uStack_150,&ppcStack_f8,&pppcStack_a0,&pppcStack_90);
  FUN_10b0faf98(&pppcStack_90);
  FUN_10b12878c(&pppcStack_a0);
  func_0x000107c279a4(&ppcStack_f8);
  func_0x00010b176bf8();
  FUN_10b16d190(apuStack_250,puVar6 + 3,puVar6);
  FUN_10b12878c(&ppcStack_b0);
  func_0x00010b176808();
  func_0x000107c279a4(&uStack_1a0);
  uStack_2a8 = param_4[1];
  uStack_2b0 = *param_4;
  uStack_298 = param_4[3];
  uStack_2a0 = param_4[2];
  uStack_288 = param_4[5];
  uStack_290 = param_4[4];
  uStack_278 = param_4[7];
  uStack_280 = param_4[6];
  FUN_10b16a26c(&uStack_160,*apuStack_250[0],apuStack_250[0][1]);
  lStack_198 = lStack_158;
  uStack_1a0 = uStack_160;
  if (lStack_158 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  uStack_188 = unaff_x21[1];
  uStack_190 = *unaff_x21;
  if (unaff_x21[1] != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  puStack_180 = apuStack_250[0];
  FUN_10b165ee0(&ppcStack_f8);
  FUN_10b165dd0(&uStack_170,uStack_e0,uStack_d8);
  lStack_148 = lStack_198;
  uStack_150 = uStack_1a0;
  uStack_1a0 = 0;
  lStack_198 = 0;
  uStack_138 = uStack_188;
  uStack_140 = uStack_190;
  if (uStack_188 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_01 != 0);
  }
  uStack_118 = uStack_e8;
  uStack_120 = puStack_f0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puStack_130 = puStack_180;
  ppuStack_128 = &PTR_FUN_110cbf9f0;
  pppcStack_90 = (code ***)FUN_10b166ff0;
  FUN_10b1670e4(&ppuStack_88,&uStack_150);
  func_0x00010b175460();
  func_0x00010b1769a0();
  func_0x00010b174ce0(ppuStack_88);
  FUN_10b166fcc(&uStack_150);
  FUN_10b166054(&ppcStack_f8);
  FUN_10b15d970(&uStack_1a0);
  FUN_10b13e138(alStack_1b0);
  uStack_1d8 = uStack_168;
  uStack_1e0 = uStack_170;
  uStack_170 = 0;
  uStack_168 = 0;
  pppcStack_90 = (code ***)((ulong)pppcStack_90 & 0xffffffffffffff00);
  ppcStack_80 = (code **)((ulong)ppcStack_80 & 0xffffffffffffff00);
  if (alStack_1b0[0] == 0) {
    uStack_150 = uStack_150 & 0xffffffffffffff00;
    uStack_138 = uStack_138 & 0xffffffffffffff00;
  }
  else {
    func_0x000107c279a0(&uStack_150,alStack_1b0[0] + 0x68);
  }
  uStack_1e8 = unaff_x21[1];
  uStack_1f0 = *unaff_x21;
  if (unaff_x21[1] != 0) {
    do {
      func_0x00010b1749b8();
    } while (extraout_w11 != 0);
  }
  func_0x00010b17672c(&uStack_1d0,apuStack_250[0],&uStack_1e0,&uStack_2b0,&pppcStack_90);
  FUN_10b157390();
  ppcVar7 = (code **)0x3b0;
  __Znwm();
  ppcVar7[1] = (code *)0x0;
  ppcVar7[2] = (code *)0x0;
  func_0x00010b177bbc(&PTR_DAT_110cc0518);
  _bzero(&pppcStack_90,0x398);
  __ZNSt3__115recursive_mutexC1Ev(&pppcStack_90);
  *(undefined1 *)(ppcVar7 + 0xb) = 0;
  *(undefined1 *)(ppcVar7 + 0x72) = 0;
  ppcVar7[0x73] = (code *)0x0;
  ppcVar7[0x75] = (code *)0x0;
  ppcVar7[0x74] = (code *)0x0;
  pppcStack_1c0 = (code ***)&pppcStack_90;
  ppuStack_1b8 = ppcVar7;
  pppcStack_d0 = (code ***)&pppcStack_90;
  ppuStack_c8 = ppcVar7;
  do {
    func_0x00010b17548c();
  } while (extraout_w9 != 0);
  ppcStack_f8 = (code **)0x0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  lStack_198 = 0;
  FUN_10b163c04(&pppcStack_90,&uStack_1d0,&uStack_1a0);
  FUN_10b163c30(&ppcStack_f8,&pppcStack_90);
  FUN_10b163af0(&pppcStack_90);
  FUN_10b163af0(&uStack_1a0);
  func_0x000107c27b48(&pppcStack_200);
  func_0x00010b175d7c(pppcStack_200);
  ppcVar4 = ppcStack_f8;
  ppcStack_80 = (code **)pppcStack_200;
  pppcStack_d0 = (code ***)0x0;
  ppuStack_c8 = (undefined **)0x0;
  pppcStack_200 = (code ***)0x0;
  pppcStack_a0 = (code ***)0x0;
  ppuStack_98 = (undefined **)0x0;
  ppcStack_b0 = ppcStack_f8 + 0x6d;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  pppcStack_90 = (code ***)&pppcStack_90;
  ppuStack_88 = ppcVar7;
  __ZNSt3__15mutex4lockEv();
  pppcVar11 = (code ***)ppcVar4;
  FUN_10b1640bc();
  if ((int)pppcVar11 == 0) {
    func_0x00010b1751e0();
    ppcVar8 = ppcStack_80;
    *pppcVar11 = (code **)&PTR_FUN_110cc0568;
    pppcVar11[2] = (code **)ppuStack_88;
    pppcVar11[1] = (code **)pppcStack_90;
    pppcStack_90 = (code ***)0x0;
    ppuStack_88 = (code **)0x0;
    ppcStack_80 = (code **)0x0;
    pppcVar11[3] = ppcVar8;
    ppcVar8 = (code **)ppcVar4[0x76];
    ppcVar4[0x76] = (code *)pppcVar11;
    if (ppcVar8 != (code **)0x0) {
      func_0x00010b174834();
    }
    pppcVar11 = (code ***)0x0;
  }
  else {
    FUN_10b163c30(&pppcStack_a0,&ppcStack_f8);
    pppcVar11 = pppcStack_a0;
  }
  func_0x000107c2798c(&ppcStack_b0);
  if (pppcVar11 != (code ***)0x0) {
    lStack_a8 = (long)ppuStack_98;
    ppcStack_b0 = (code **)pppcVar11;
    if (ppuStack_98 != (undefined **)0x0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_02 != 0);
    }
    FUN_10b16ceb0(&pppcStack_90,pppcVar11);
    FUN_10b163af0(&ppcStack_b0);
  }
  ppuStack_b8 = (undefined **)lStack_268;
  pppcStack_c0 = (code ***)ppcStack_270;
  ppcStack_270 = (code **)0x0;
  lStack_268 = 0;
  FUN_10b163af0(&pppcStack_a0);
  func_0x00010b16d170(&pppcStack_90);
  func_0x00010b175238();
  pppcVar11 = pppcStack_200;
  pppcStack_200 = (code ***)0x0;
  if (pppcVar11 != (code ***)0x0) {
    func_0x00010b174910();
  }
  FUN_10b163af0(&ppcStack_f8);
  func_0x000107c27b58(&pppcStack_c0);
  FUN_10b166c8c(&pppcStack_d0);
  FUN_10b163af0(&uStack_1d0);
  func_0x00010529fde0(&uStack_1f0);
  func_0x00010b176bf8();
  func_0x00010b163ca4(&uStack_1e0);
  pppcStack_c0 = (code ***)&pppcStack_90;
  ppuStack_b8 = ppcVar7;
  do {
    func_0x00010b17548c();
  } while (extraout_w9_00 != 0);
  FUN_10b15c1d0(&ppcStack_b0,apuStack_250[0],&pppcStack_c0,&uStack_2b0);
  FUN_10b166c8c(&pppcStack_c0);
  uStack_1c8 = unaff_x21[1];
  uStack_1d0 = *unaff_x21;
  ppppcVar5 = &pppcStack_90;
  ppuStack_1f8 = ppcVar7;
  if (unaff_x21[1] != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_03 != 0);
  }
  do {
    pppcStack_200 = (code ***)ppppcVar5;
    func_0x00010b17548c();
    ppppcVar5 = (code ****)pppcStack_200;
  } while (extraout_w9_01 != 0);
  FUN_10b15c6b4(&pppcStack_d0,apuStack_250[0],&uStack_1d0,&pppcStack_200,&uStack_2b0);
  func_0x000107c27b58(&pppcStack_d0);
  FUN_10b166c8c(&pppcStack_200);
  func_0x00010529fde0(&uStack_1d0);
  pppcStack_230 = (code ***)&pppcStack_90;
  ppuStack_228 = ppcVar7;
  do {
    func_0x00010b17548c();
  } while (extraout_w9_02 != 0);
  FUN_10b15d32c(&uStack_220,apuStack_250[0],&pppcStack_230,&uStack_2b0);
  puVar6 = (undefined8 *)0x148;
  __Znwm();
  plVar12 = puVar6 + 1;
  *plVar12 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110cc03f0;
  pppcVar11 = (code ***)(puVar6 + 3);
  lStack_198 = uStack_218;
  uStack_1a0 = uStack_220;
  uStack_220 = 0;
  uStack_218 = 0;
  lStack_268 = lStack_a8;
  ppcStack_270 = ppcStack_b0;
  ppcStack_b0 = (code **)0x0;
  lStack_a8 = 0;
  pppcStack_a0 = (code ***)&pppcStack_90;
  ppuStack_98 = ppcVar7;
  do {
    func_0x00010b17548c();
  } while (extraout_w9_03 != 0);
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[3] = &PTR_FUN_110cbf2d0;
  FUN_10b16be88(puVar6 + 6,&uStack_1a0);
  func_0x00010b17649c();
  FUN_10b16be88();
  FUN_10b210424(puVar6 + 10,apuStack_250[0][0xe]);
  puVar6[0xc] = &pppcStack_90;
  puVar6[0xd] = ppcVar7;
  pppcStack_a0 = (code ***)0x0;
  ppuStack_98 = (undefined **)0x0;
  func_0x000107c279a0(puVar6 + 0xe,apuStack_250[0] + 3);
  func_0x000107c279a0(puVar6 + 0x12,apuStack_250[0] + 7);
  lVar9 = apuStack_250[0][0xc];
  uVar13 = apuStack_250[0][0xb];
  puVar6[0x17] = apuStack_250[0][0xc];
  puVar6[0x16] = uVar13;
  if (lVar9 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_04 != 0);
  }
  FUN_10b121fd0(puVar6 + 0x18,apuStack_250[0] + 0x10);
  FUN_10b15b100(puVar6 + 0x27,pppcVar11);
  if (*(long *)(puVar6[0x16] + 0x88) != 0) {
    pppcVar10 = (code ***)puVar6[0x27];
    puStack_f0 = (undefined8 *)puVar6[0x28];
    lStack_78 = 0;
    ppcStack_f8 = (code **)pppcVar10;
    if (puStack_f0 != (undefined8 *)0x0) {
      do {
        func_0x00010b174a1c();
        lStack_78 = extraout_x8_00;
        pppcVar10 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    pppcStack_90 = (code ***)0x10b16c964;
    ppuStack_88 = &PTR_FUN_110cc0430;
    ppcStack_80 = (code **)pppcVar10;
    if (lStack_78 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_05 != 0);
    }
    FUN_10b1491bc();
    func_0x00010b176b74();
    FUN_10b166558(&ppcStack_f8);
  }
  FUN_10b166c8c(&pppcStack_a0);
  func_0x0001052a55c0(&ppcStack_270);
  func_0x0001052a55c0(&uStack_1a0);
  if ((puVar6[5] == 0) || (in_ZR = *(long *)(puVar6[5] + 8) == -1, (bool)in_ZR)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppcStack_210 = (code **)pppcVar11;
      puStack_208 = puVar6;
      ppcStack_f8 = (code **)pppcVar11;
      puStack_f0 = puVar6;
    } while (cVar2 != '\0');
    do {
      func_0x00010b1749b8();
    } while (extraout_w11_00 != 0);
    pppcStack_90 = (code ***)puVar6[4];
    puVar6[4] = pppcVar11;
    puVar6[5] = puVar6;
    ppuStack_88 = extraout_x8_01;
    func_0x00010b167b6c(&pppcStack_90);
    func_0x00010b16c8d8(&ppcStack_f8);
  }
  *unaff_x19 = (long)pppcVar11;
  unaff_x19[1] = (long)puVar6;
  ppcStack_210 = (code **)0x0;
  puStack_208 = (undefined8 *)0x0;
  func_0x00010b16c8d8(&ppcStack_210);
  func_0x0001052a55c0(&uStack_220);
  FUN_10b166c8c(&pppcStack_230);
  func_0x0001052a55c0(&ppcStack_b0);
  func_0x00010b17718c();
  func_0x00010b1440f0(alStack_1b0);
  func_0x00010b17776c();
  func_0x00010b16a2a8(&uStack_160);
  func_0x00010b16a2a8(apuStack_250);
  func_0x00010b1440f0(alStack_240);
  func_0x000107c350b0(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x000107c279a4(&uStack_1a0);
      func_0x00010b1440f0(alStack_240);
      func_0x00010b174f0c();
      func_0x00010b176808();
    } while( true );
  }
  return;
}



/* Entry: 10b15e3a8; end: 10b15e52b;  */

void FUN_10b15e3a8(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long extraout_x8;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined1 uStack_301;
  char cStack_290;
  char cStack_156;
  undefined1 auStack_a0 [80];
  undefined1 auStack_50 [24];
  byte bStack_38;
  
  if (*param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
    return;
  }
  func_0x00010b175f50(auStack_50);
  if ((bStack_38 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
    goto LAB_10b15e4ec;
  }
  FUN_10b202630(auStack_a0,auStack_50);
  func_0x00010b177794(&lStack_318);
  if (lStack_318 == 0) {
    func_0x00010b129c40(&lStack_318);
    func_0x00010b175270(&lStack_318,*(undefined8 *)(param_2 + 0x38),auStack_a0);
    func_0x00010b1758b4(uStack_301);
    if (extraout_x8 == 0) {
LAB_10b15e468:
      FUN_10b1f72cc(*(undefined8 *)(param_2 + 0x38),&lStack_318);
      if ((cStack_156 == '\x01') || (cStack_290 != '\x01')) {
LAB_10b15e4d4:
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 0x4f) = 0;
      }
      else {
        func_0x00010b1755dc();
        FUN_10b121c1c();
        *(undefined4 *)(param_1 + 0x4f) = 1;
      }
    }
    else {
      plVar1 = &lStack_318;
      func_0x000107c278d0(plVar1,auStack_a0);
      if (((ulong)plVar1 & 1) != 0) goto LAB_10b15e468;
      func_0x00010b177534(&lStack_328);
      if (lStack_328 == 0) {
        func_0x00010b1766b0();
        goto LAB_10b15e4d4;
      }
      *param_1 = lStack_328;
      param_1[1] = lStack_320;
      lStack_328 = 0;
      lStack_320 = 0;
      *(undefined4 *)(param_1 + 0x4f) = 0;
      func_0x00010b1766b0();
    }
    func_0x00010b121af0(&lStack_318);
  }
  else {
    *param_1 = lStack_318;
    param_1[1] = lStack_310;
    lStack_318 = 0;
    lStack_310 = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
    func_0x00010b129c40(&lStack_318);
  }
  func_0x00010b121e00(auStack_a0);
LAB_10b15e4ec:
  func_0x00010b176b9c();
  return;
}



/* Entry: 10b15e52c; end: 10b15e587;  */

undefined8
FUN_10b15e52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_2b0 [640];
  
  FUN_10b15e3a8(auStack_2b0);
  FUN_10b15e588(auStack_2b0,param_4);
  FUN_10b1671c8(auStack_2b0);
  return param_1;
}



/* Entry: 10b15e588; end: 10b15e693;  */

float FUN_10b15e588(long *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *unaff_x20;
  double dVar4;
  double dVar5;
  undefined1 auStack_2b8 [632];
  
  if ((int)param_1[0x4f] == 1) {
    if ((param_2 != 0) && (plVar2 = param_1, FUN_10b167168(), (int)plVar2 == 0)) {
      return 0.0;
    }
    if (*(int *)((long)param_1 + 100) != 2) {
      if (param_1[0xe] == 0) {
        return 0.0;
      }
      return 1.0;
    }
    if ((char)param_1[0x11] != '\x01') {
      return 0.0;
    }
    if (param_1[0xf] == 0) {
      return 0.0;
    }
    uVar1 = param_1[0xe];
    if ((ulong)param_1[0xe] <= (ulong)param_1[0xd]) {
      uVar1 = param_1[0xd];
    }
    dVar4 = (double)uVar1;
    dVar5 = (double)(ulong)param_1[0xf];
  }
  else {
    if ((int)param_1[0x4f] != 0) {
      return 0.0;
    }
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0.0;
    }
    if (param_2 != 0) {
      FUN_10b1a23e0(auStack_2b8,lVar3);
      unaff_x20 = auStack_2b8;
      FUN_10b167168();
      func_0x00010b121af0(auStack_2b8);
      if (((ulong)unaff_x20 & 1) == 0) {
        return 0.0;
      }
    }
    FUN_10b19cdec(lVar3);
    if ((param_2 & 1) == 0) {
      return 0.0;
    }
    func_0x00010b1754a4();
    FUN_10b1a2354();
    dVar4 = (double)lVar3;
    dVar5 = (double)(long)unaff_x20;
  }
  return (float)(dVar4 / dVar5);
}



/* Entry: 10b15e694; end: 10b15e7db;  */

void FUN_10b15e694(undefined8 param_1,float param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 uStack_538;
  undefined1 uStack_4f8;
  undefined1 uStack_4f0;
  undefined1 uStack_4c8;
  undefined1 uStack_4c0;
  undefined1 uStack_420;
  undefined1 uStack_418;
  undefined1 uStack_3d8;
  undefined1 uStack_3d0;
  undefined1 uStack_398;
  undefined2 uStack_390;
  undefined1 uStack_38e;
  undefined1 auStack_388 [176];
  long alStack_2d8 [79];
  int iStack_60;
  long lStack_58;
  long lStack_50;
  
  (**(code **)(**(long **)(param_3 + 0x28) + 0x38))(&lStack_58);
  lVar1 = lStack_58;
  while( true ) {
    if (lVar1 == lStack_50) {
      func_0x00010b17711c();
      func_0x00010b163f4c(param_1);
      return;
    }
    func_0x00010b1770e0(alStack_2d8);
    FUN_10b15e3a8();
    FUN_10b15e588(alStack_2d8,0);
    if (0.0 < param_2) break;
    func_0x00010b177164();
    lVar1 = lVar1 + 0x10;
  }
  if (iStack_60 == 1) {
    FUN_10b12394c(&uStack_550,alStack_2d8);
  }
  else if ((iStack_60 == 0) && (alStack_2d8[0] != 0)) {
    FUN_10b1a23e0(&uStack_550);
  }
  else {
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_38e = 0;
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    _bzero(auStack_388,0xb0);
  }
  func_0x00010b1764c8();
  FUN_10b167220();
  func_0x00010b121af0(&uStack_550);
  func_0x00010b177164();
  func_0x00010b17711c();
  return;
}



/* Entry: 10b15e7dc; end: 10b15ec0b;  */

void FUN_10b15e7dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 extraout_w8;
  undefined8 extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  undefined8 extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long unaff_x21;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar3 = param_2;
  func_0x00010b177714();
  *puVar3 = FUN_10b16f7d0;
  puVar3[1] = FUN_10b16fa28;
  puVar3[2] = &PTR_FUN_110cbfd08;
  puVar3[0x1f] = param_2;
  puVar4 = (undefined8 *)0xd0;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_110cbfd28;
  uVar8 = 0;
  uVar9 = 0;
  func_0x00010b176418();
  puVar4[4] = uVar9;
  puVar4[3] = uVar8;
  func_0x00010b17702c();
  puVar4[9] = 0;
  puVar4[10] = extraout_x10;
  puVar4[0xc] = uVar9;
  puVar4[0xb] = uVar8;
  puVar4[0xe] = uVar9;
  puVar4[0xd] = uVar8;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0x32aaaba7;
  func_0x00010b177008();
  puVar6 = puVar3 + 3;
  *puVar6 = extraout_x9;
  puVar3[4] = puVar4;
  puVar3[5] = extraout_x9;
  puVar3[6] = puVar4;
  do {
    func_0x00010b174af4();
  } while (extraout_w11 != 0);
  func_0x00010b177dc0();
  *(undefined ***)(unaff_x21 + -0x28) = &PTR_FUN_110cbfcc0;
  *(undefined1 *)(unaff_x21 + 0x38) = 0;
  puStack_70 = extraout_x9_00;
  puStack_68 = puVar4;
  do {
    func_0x00010b174af4();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b174af4();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x9_01;
  param_1[1] = puVar4;
  func_0x00010b175d4c();
  func_0x000107c279a0(puVar3 + 0x15,param_3);
  *(undefined1 *)(puVar3 + 0xf) = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  uVar2 = *(char *)(puVar3 + 0x18) == '\x01';
  if ((bool)uVar2) {
    uVar8 = puVar3[0x15];
    puVar3[0x10] = puVar3[0x16];
    puVar3[0xf] = uVar8;
    puVar3[0x11] = puVar3[0x17];
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x15] = 0;
    *(undefined1 *)(puVar3 + 0x12) = 1;
  }
  fVar7 = (float)uVar8;
  *(undefined2 *)(puVar3 + 0x13) = 1;
  puVar3[0x14] = 0;
  func_0x000107c279a4(puVar3 + 0x15);
  if ((param_5 == 0) || ((*(byte *)(param_4 + 0x18) & 1) == 0)) {
    func_0x00010b1774f8();
  }
  else {
    FUN_10b16a26c(puVar3 + 0x19,*param_2,param_2[1]);
    FUN_10b15a7dc(param_4,param_6);
    FUN_10b1571dc(puVar3 + 0x1d,param_2,param_4);
    puVar4 = puVar3 + 0x1d;
    FUN_10b16ab9c();
    if (((ulong)puVar4 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0x20) = 0;
      func_0x00010b175cc0(puVar3 + 0x1d);
      return;
    }
    FUN_10b158ed0(puVar3 + 0x1b,puVar3 + 0x1d);
    func_0x00010b176270();
    if (puVar3[0x1b] == 0) {
      puStack_70 = (undefined8 *)0x0;
      puStack_68 = (undefined8 *)0x0;
    }
    else {
      func_0x00010b175428();
      func_0x00010b176c98();
    }
    func_0x00010b177824(*(undefined8 *)(puVar3[0x1f] + 0x58));
    uVar2 = fVar7 == 0.0;
    *(bool *)((long)puVar3 + 0x99) = !(bool)uVar2 && 0.0 <= fVar7;
    func_0x00010b1774f8();
    func_0x00010b176c08();
    func_0x00010b176ad8();
    func_0x00010b176240();
  }
  func_0x00010b1759dc();
  func_0x00010b1750bc();
  *(undefined1 *)(puVar3 + 0x20) = extraout_w8;
  func_0x00010b177c78();
  if ((bool)uVar2) {
    func_0x00010b177588();
    func_0x00010b177570();
    func_0x00010b175304();
    puStack_70 = param_2;
    puStack_68 = puVar6;
    __ZNSt3__15mutex4lockEv(param_2 + 0xd);
    if (*(char *)(param_2 + 6) == '\x01') {
      cVar1 = *(char *)(param_2 + 3);
      if (cVar1 == *(char *)(puVar3 + 10)) {
        if (cVar1 != '\0') {
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            __ZdlPv(*param_2);
          }
          func_0x00010b175c74();
          *(undefined1 *)((long)puVar3 + 0x4f) = 0;
          *(undefined1 *)(puVar3 + 7) = 0;
        }
      }
      else if (cVar1 == '\0') {
        func_0x00010b175c74();
        func_0x00010b176570();
        *(undefined1 *)(param_2 + 3) = 1;
      }
      else {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        *(undefined1 *)(param_2 + 3) = 0;
      }
      uVar8 = puVar3[0xb];
      param_2[5] = puVar3[0xc];
      param_2[4] = uVar8;
    }
    else {
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)(param_2 + 3) = 0;
      if (*(char *)(puVar3 + 10) == '\x01') {
        func_0x00010b175c74();
        func_0x00010b176570();
        *(undefined1 *)(param_2 + 3) = 1;
      }
      uVar8 = puVar3[0xb];
      param_2[5] = puVar3[0xc];
      param_2[4] = uVar8;
      *(undefined1 *)(param_2 + 6) = 1;
    }
    lVar5 = param_2[0x16];
    param_2[0x16] = 0;
    __ZNSt3__15mutex6unlockEv(param_2 + 0xd);
    if (lVar5 == 0) {
      __ZNSt3__118condition_variable10notify_allEv(param_2 + 7);
    }
    else {
      func_0x00010b175150();
      func_0x00010b17555c();
      func_0x00010b1748a8();
      puVar6 = puStack_68;
    }
    if (puVar6 != (undefined8 *)0x0) {
      do {
        func_0x00010b1748f0();
      } while (extraout_w11_02 != 0);
      if (extraout_x9_02 == 0) {
        func_0x00010b174900();
        func_0x00010b17547c();
      }
    }
  }
  else {
    func_0x00010b177568(&puStack_70);
    func_0x00010b1754c8();
    FUN_10b167398();
    func_0x00010b175084();
  }
  func_0x00010b167470(puVar3 + 2);
  func_0x00010b174f24();
  return;
}



/* Entry: 10b15ec0c; end: 10b15eedb;  */

void FUN_10b15ec0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 extraout_w8;
  code *extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long in_stack_00000018;
  undefined1 *in_stack_00000028;
  
  func_0x00010b177888();
  func_0x00010b175054();
  puVar4 = (undefined8 *)0x218;
  __Znwm();
  *puVar4 = FUN_10b1700ec;
  puVar4[1] = FUN_10b170360;
  puVar4[0x3f] = unaff_x21;
  puVar4[0x40] = param_3;
  puVar4[0x3d] = param_4;
  puVar4[0x3e] = param_5;
  puVar4[0x3c] = unaff_x20;
  func_0x00010b176290();
  func_0x00010b177450();
  FUN_10b16a26c(puVar4 + 0x38,*unaff_x20,unaff_x20[1]);
  do {
    puVar4[0x41] = unaff_x21;
    uVar3 = unaff_x21 == puVar4[0x3f] + puVar4[0x40] * 0x68;
    if ((bool)uVar3) {
      func_0x00010b17609c();
      func_0x00010b174f74();
      func_0x00010b175218();
      *(undefined1 *)(puVar4 + 0x42) = extraout_w8;
      func_0x00010b175910();
      if ((bool)uVar3) {
        func_0x00010b1750f0();
        func_0x00010b174e4c();
      }
      else {
        func_0x00010b174ee0();
        in_stack_00000028 = &stack0x00000020;
        func_0x00010b174e40();
        func_0x00010b17539c();
      }
      func_0x00010b175038();
      func_0x00010b174f24();
      return;
    }
    if (*(char *)(unaff_x21 + 0x18) == '\x01') {
      if (*(char *)(unaff_x21 + 0x17) < '\0') {
        if (*(long *)(unaff_x21 + 8) == 0) goto LAB_10b15ecf0;
      }
      else if (*(char *)(unaff_x21 + 0x17) == '\0') goto LAB_10b15ecf0;
      FUN_10b15a7dc(unaff_x21,puVar4[0x3d]);
      func_0x00010b17771c();
      func_0x00010b177728();
      if ((unaff_x21 & 1) == 0) {
        *(undefined1 *)(puVar4 + 0x42) = 0;
        func_0x00010b175c94();
        return;
      }
      func_0x00010b1776e8();
      func_0x00010b17549c();
      if (puVar4[10] == 0) {
        puVar4[0x2e] = 0;
        puVar4[0x2f] = 0;
      }
      else {
        func_0x00010b175428();
        (*extraout_x9)(puVar4 + 0x2e);
      }
      func_0x00010b1773c0(puVar4[0x41]);
      uVar6 = puVar4[0x3c];
      func_0x00010b17615c();
      func_0x00010b17562c();
      if ((uVar6 & 1) == 0) {
        *(undefined1 *)(puVar4 + 0x42) = 1;
        func_0x00010b174c24();
        if (in_stack_00000018 == 0) {
          return;
        }
        do {
          func_0x00010b1748f0();
        } while (extraout_w11 != 0);
        if (extraout_x9_00 != 0) {
          return;
        }
        func_0x00010b174824();
        func_0x00010b174f98();
        return;
      }
      func_0x00010b1754ec();
      func_0x00010b175140();
      func_0x00010b1757e0();
      func_0x00010b176298();
      func_0x00010b176280();
    }
    else {
LAB_10b15ecf0:
      lVar1 = *(long *)(unaff_x21 + 0x40);
      lVar2 = *(long *)(unaff_x21 + 0x48);
      if (lVar1 != lVar2) {
        *(undefined1 *)(puVar4 + 10) = 0;
        *(undefined1 *)(puVar4 + 0x2d) = 0;
        func_0x00010b1774e0(puVar4[0x3c],unaff_x21 + 0x20,lVar1,(lVar2 - lVar1) / 0x50);
        puVar5 = puVar4 + 0x3a;
        FUN_10b16d5c0();
        if (((ulong)puVar5 & 1) == 0) {
          *(undefined1 *)(puVar4 + 0x42) = 2;
          func_0x00010b1751c8();
          FUN_10b15f414();
          return;
        }
        func_0x00010b177730();
        FUN_10b1674cc(puVar4[0x3e],puVar4 + 0x2e);
        func_0x00010b176b3c();
        func_0x00010b1761c0();
        func_0x00010b175224();
      }
    }
    unaff_x21 = puVar4[0x41] + 0x68;
  } while( true );
}



/* Entry: 10b15eedc; end: 10b15f413;  */

void FUN_10b15eedc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long *param_5,uint param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  ulong uVar10;
  long extraout_x8;
  code *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int iVar11;
  float fVar12;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  puVar2 = (undefined8 *)0x3e0;
  __Znwm();
  *puVar2 = FUN_10b16fa60;
  puVar2[1] = FUN_10b16fdc4;
  puVar2[0x7a] = param_5;
  puVar2[0x79] = param_2;
  *(undefined1 *)(puVar2 + 0x5d) = 0;
  *(undefined1 *)(puVar2 + 0x60) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    param_1 = *param_3;
    puVar2[0x5e] = param_3[1];
    puVar2[0x5d] = param_1;
    puVar2[0x5f] = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(puVar2 + 0x60) = 1;
  }
  fVar12 = (float)param_1;
  FUN_10b124f8c(puVar2 + 2);
  func_0x00010b175014();
  FUN_10b16a26c(puVar2 + 0x6d,*param_2,param_2[1]);
  FUN_10b15e52c(param_2[0xb],param_4,param_6 ^ 1);
  puVar6 = puVar2 + 0x4a;
  uVar1 = fVar12 == 1.0;
  if (fVar12 < 1.0) {
    if (param_6 != 0) {
      puStack_68 = (undefined1 *)((ulong)puStack_68 & 0xffffffffffffff00);
      uVar10 = param_5[2];
      uVar3 = param_5[1];
      uVar1 = uVar3 == uVar10;
      if (uVar3 < uVar10) {
        func_0x00010b1760e4();
        lVar9 = uVar3 + 0x30;
      }
      else {
        plVar8 = param_5;
        FUN_10b1675ac(param_5,(long)(uVar3 - *param_5) / 0x30 + 1);
        FUN_10b1676e4(puVar6,plVar8,(param_5[1] - *param_5) / 0x30,param_5 + 2);
        lVar9 = puVar2[0x4c];
        func_0x00010b1760e4();
        puVar2[0x4c] = lVar9 + 0x30;
        func_0x00010b177cc0();
        FUN_10b1675fc();
        lVar9 = param_5[1];
        FUN_10b167750(puVar6);
      }
      param_5[1] = lVar9;
    }
    func_0x00010b174f74();
    func_0x00010b175af0();
  }
  else {
    lVar9 = param_4[1];
    puVar2[0x3d] = *param_4;
    puVar2[0x3e] = lVar9;
    if (lVar9 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    *(undefined1 *)(puVar2 + 0x3f) = 0;
    *(undefined1 *)((long)puVar2 + 0x1fc) = 0;
    *(undefined1 *)(puVar2 + 0x40) = 0;
    *(undefined1 *)((long)puVar2 + 0x204) = 0;
    *(undefined1 *)(puVar2 + 0x41) = 0;
    *(undefined1 *)(puVar2 + 0x44) = 0;
    *(undefined1 *)(puVar2 + 0x45) = 0;
    puVar2[0x47] = 0;
    puVar2[0x46] = 0;
    puVar2[0x49] = 0;
    puVar2[0x48] = 0;
    FUN_10b121fd0(puVar2 + 0x2e,param_2 + 0x10);
    *(undefined1 *)(puVar2 + 0x61) = 0;
    *(undefined1 *)(puVar2 + 100) = 0;
    *(undefined1 *)(puVar2 + 0x65) = 0;
    *(undefined1 *)(puVar2 + 0x68) = 0;
    func_0x00010b177590(puVar6);
    puVar4 = puVar6;
    FUN_10b16a59c();
    if (((ulong)puVar4 & 1) == 0) {
      *(undefined1 *)(puVar2 + 0x7b) = 0;
      func_0x00010b175688(puVar6);
      return;
    }
    func_0x00010b177cc0();
    FUN_10b1583c4();
    puVar4 = puVar2 + 0x71;
    FUN_10b141ca0(puVar6);
    func_0x00010b1760dc();
    func_0x00010b1760d4();
    func_0x00010b1762a0();
    func_0x00010b176134();
    func_0x00010b177be8();
    if (extraout_x8 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_00 != 0);
    }
    FUN_10b159480(puVar4,puVar2[0x79],puVar2 + 0x73);
    puVar5 = puVar4;
    FUN_10b16b810();
    if (((ulong)puVar5 & 1) == 0) {
      *(undefined1 *)(puVar2 + 0x7b) = 1;
      func_0x00010b175cc8(puVar4);
      return;
    }
    FUN_10b159f34(puVar6,puVar4);
    FUN_10b1643f8(puVar4);
    func_0x00010b1760c4();
    if ((*(byte *)(puVar2 + 0x53) & 1) == 0) {
      func_0x00010b174f74();
      iVar11 = 3;
    }
    else {
      puVar5 = puVar2 + 0x77;
      puVar2[0x55] = puVar2[0x4b];
      puVar2[0x54] = puVar2[0x4a];
      puVar2[0x56] = puVar2[0x4c];
      puVar2[0x4c] = 0;
      puVar2[0x4b] = 0;
      *puVar6 = 0;
      func_0x00010b1755a4();
      if ((bool)uVar1) {
        puVar2[0x6a] = puVar2[0x5e];
        puVar2[0x69] = puVar2[0x5d];
        puVar2[0x6b] = puVar2[0x5f];
        func_0x00010b174f44();
        *(undefined1 *)(puVar2 + 0x6c) = extraout_w8;
      }
      func_0x00010b176ee8(puVar2[0x6f]);
      (*extraout_x9)(puVar5);
      puVar6 = puVar5;
      FUN_10b16b9dc();
      if (((ulong)puVar6 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x7b) = 2;
        func_0x00010b1751d4();
        FUN_10b16ba64(puVar5);
        if (lStack_78 == 0) {
          return;
        }
        do {
          func_0x00010b1748f0();
          lVar9 = extraout_x9_00;
        } while (extraout_w11 != 0);
LAB_10b15f304:
        if (lVar9 != 0) {
          return;
        }
        func_0x00010b174824();
        func_0x00010b174f98();
        return;
      }
      puVar6 = puVar2 + 0x75;
      FUN_10b15a1b8(puVar6,puVar5);
      FUN_10b15a0e4(puVar2 + 10,*puVar6);
      FUN_10b15f708(puVar4,puVar2[0x79],puVar2 + 0x54,puVar2 + 0x69,puVar2 + 10,puVar2[0x7a]);
      puVar7 = puVar4;
      FUN_10b12d174();
      if (((ulong)puVar7 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x7b) = 3;
        func_0x00010b1751d4();
        FUN_10b12d1c8(puVar4);
        if (lStack_78 == 0) {
          return;
        }
        do {
          func_0x00010b1748f0();
          lVar9 = extraout_x9_01;
        } while (extraout_w11_00 != 0);
        goto LAB_10b15f304;
      }
      FUN_10b12d0d0(puVar4);
      func_0x000107c27b58(puVar4);
      func_0x00010b175224();
      func_0x0001052ac684(puVar6);
      FUN_10b164e6c(puVar5);
      func_0x00010b176a60();
      func_0x00010b1760a4();
      iVar11 = 0;
    }
    func_0x00010b1777ec();
    func_0x00010b176990();
    func_0x00010b175af0();
    uVar1 = iVar11 == 3;
    if (!(bool)uVar1) {
      if (iVar11 != 0) goto LAB_10b15f258;
      func_0x00010b174f74();
    }
  }
  func_0x00010b175bc0();
  *(undefined1 *)(puVar2 + 0x7b) = extraout_w8_00;
  func_0x00010b175910();
  if ((bool)uVar1) {
    func_0x00010b1750f0();
    func_0x00010b174e4c();
  }
  else {
    func_0x00010b174ee0();
    puStack_68 = auStack_70;
    func_0x00010b174e40();
    func_0x00010b17539c();
  }
LAB_10b15f258:
  func_0x00010b175038();
  func_0x00010b1754e4();
  func_0x00010b174f24();
  return;
}



/* Entry: 10b15f414; end: 10b15f55b;  */

void FUN_10b15f414(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long lStack_88;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b174eb4();
  func_0x00010b175960();
  FUN_10b167420();
  func_0x00010b177080();
  FUN_10b16744c();
  func_0x00010b177154();
  FUN_10b167314(auStack_40);
  func_0x00010b175600();
  func_0x00010b175d7c(uStack_48);
  func_0x00010b174bac();
  func_0x00010b1753f8(lStack_30 + 0x68);
  __ZNSt3__15mutex4lockEv();
  lVar1 = lStack_30;
  func_0x00010b167794();
  if ((int)lVar1 == 0) {
    func_0x00010b1751e0();
    func_0x00010b174bc4(&PTR_FUN_110cc05f8);
    lVar2 = *(long *)(lStack_30 + 0xb0);
    *(long *)(lStack_30 + 0xb0) = lVar1;
    if (lVar2 != 0) {
      func_0x00010b174834();
    }
    func_0x00010b177ed0();
    lStack_88 = lStack_30;
  }
  else {
    func_0x00010b176dd4();
    FUN_10b16744c();
  }
  func_0x00010b175420();
  if (lStack_88 != 0) {
    func_0x00010b177930();
    if (param_3 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b177954();
    FUN_10b16d648();
    func_0x00010b1766c8();
  }
  func_0x00010b174e68();
  FUN_10b167314();
  if (unaff_x19 != 0) {
    func_0x00010b1747fc();
  }
  func_0x00010b175238();
  func_0x00010b1753e0();
  if (lVar1 != 0) {
    func_0x00010b174910();
  }
  func_0x00010b1762b0();
  func_0x00010b175524();
  return;
}



/* Entry: 10b15f55c; end: 10b15f707;  */

void FUN_10b15f55c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  undefined8 uVar4;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10b167420(&puStack_30,param_2,&uStack_88);
  FUN_10b16744c(&uStack_78,&puStack_30);
  func_0x00010b1762b0();
  FUN_10b167314(&uStack_88);
  uStack_a8 = uStack_78;
  lStack_a0 = lStack_70;
  if (lStack_70 == 0) {
    uStack_90 = 0;
    uStack_98 = uStack_78;
  }
  else {
    do {
      func_0x00010b174a1c();
      uStack_90 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
      uStack_98 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b167420(&puStack_40,&uStack_98,&uStack_50);
  FUN_10b16744c(&puStack_30,&puStack_40);
  FUN_10b167314(&puStack_40);
  FUN_10b167314(&uStack_50);
  puVar1 = puStack_30;
  puStack_40 = puStack_30 + 0xd;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puVar1;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  while (puVar3 = puVar1, func_0x00010b167794(), ((ulong)puVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar1 + 7,&puStack_40);
  }
  FUN_10b167314(&puStack_60);
  if (puVar1[0x15] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b15f6c4);
    (*pcVar2)();
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x00010b176ef4();
  if ((bool)in_ZR) {
    uVar4 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar4;
    param_1[2] = puVar1[2];
    func_0x00010b174f44();
    *(undefined1 *)(param_1 + 3) = extraout_w8;
  }
  uVar4 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar4;
  func_0x00010b176560();
  func_0x00010b1762b0();
  func_0x00010b1766c8();
  FUN_10b167314(&uStack_a8);
  func_0x00010b177154();
  return;
}



/* Entry: 10b15f708; end: 10b15f9fb;  */

void FUN_10b15f708(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 extraout_w8;
  long *plVar6;
  long *plVar7;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x21;
  long lVar8;
  undefined8 uVar9;
  long in_stack_00000018;
  undefined1 *in_stack_00000028;
  
  func_0x00010b177888();
  func_0x00010b176b28();
  puVar3 = (undefined8 *)0x250;
  __Znwm();
  *puVar3 = FUN_10b16fe6c;
  puVar3[1] = FUN_10b17008c;
  puVar3[0x46] = param_5;
  puVar3[0x45] = unaff_x21;
  FUN_10b103e98(puVar3 + 0x2e,param_2);
  *(undefined1 *)(puVar3 + 0x3d) = 0;
  *(undefined1 *)(puVar3 + 0x40) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar9 = *param_3;
    puVar3[0x3e] = param_3[1];
    puVar3[0x3d] = uVar9;
    puVar3[0x3f] = param_3[2];
    func_0x00010b177e8c();
    *(undefined1 *)(puVar3 + 0x40) = 1;
  }
  *(undefined1 *)(puVar3 + 10) = 0;
  *(undefined1 *)(puVar3 + 0x2d) = 0;
  if (*(char *)(param_4 + 0x118) == '\x01') {
    FUN_10b165db8(puVar3 + 10,param_4);
    *(undefined1 *)(puVar3 + 0x2d) = 1;
  }
  FUN_10b124f8c(puVar3 + 2);
  func_0x00010b177450();
  FUN_10b16a26c(puVar3 + 0x41,*unaff_x21,unaff_x21[1]);
  puVar1 = puVar3 + 0x37;
  plVar6 = (long *)puVar3[0x34];
  plVar7 = (long *)puVar3[0x35];
  puVar3[0x47] = plVar7;
  do {
    puVar3[0x48] = plVar6;
    uVar4 = puVar3[0x45];
    if (plVar6 == plVar7) {
      func_0x00010b175bcc(puVar3[0x2f],uVar4,puVar3[0x2e]);
      func_0x00010b1773d8();
      func_0x00010b176c60();
      if ((uVar4 & 1) != 0) {
        func_0x00010b176c48();
        func_0x00010b175880();
        uVar2 = 0;
        if ((*(char *)(puVar3 + 0x40) == '\x01') &&
           (uVar2 = puVar3[0x31] == puVar3[0x32], !(bool)uVar2)) {
          func_0x00010b177b1c();
          FUN_10b15e7dc(puVar3 + 0x43);
          puVar5 = puVar3 + 0x43;
          FUN_10b16d5c0();
          if (((ulong)puVar5 & 1) == 0) {
            *(undefined1 *)(puVar3 + 0x49) = 2;
            func_0x00010b1773e4();
            return;
          }
          FUN_10b15f55c(puVar1,puVar3 + 0x43);
          FUN_10b1674cc(puVar3[0x46],puVar1);
          func_0x00010b1777f4();
          func_0x00010b1760b4();
        }
        func_0x00010b176084();
        func_0x00010b174f74();
        func_0x00010b175218();
        *(undefined1 *)(puVar3 + 0x49) = extraout_w8;
        func_0x00010b175910();
        if ((bool)uVar2) {
          func_0x00010b1750f0();
          func_0x00010b174e4c();
        }
        else {
          func_0x00010b174ee0();
          in_stack_00000028 = &stack0x00000020;
          func_0x00010b174e40();
          func_0x00010b17539c();
        }
        func_0x00010b175038();
        func_0x00010b175224();
        func_0x00010b1754e4();
        func_0x00010b176b4c();
        func_0x00010b174f24();
        return;
      }
      *(undefined1 *)(puVar3 + 0x49) = 1;
      func_0x00010b1751d4();
      FUN_10b12d1c8(puVar1);
      if (in_stack_00000018 == 0) {
        return;
      }
      do {
        func_0x00010b1748f0();
        lVar8 = extraout_x9_00;
      } while (extraout_w11_00 != 0);
LAB_10b15f91c:
      if (lVar8 == 0) {
        func_0x00010b174824();
        func_0x00010b174f98();
      }
      return;
    }
    func_0x00010b1773d8(uVar4,*plVar6,(plVar6[1] - *plVar6) / 0x68);
    func_0x00010b176c60();
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0x49) = 0;
      func_0x00010b1751d4();
      FUN_10b12d1c8(puVar1);
      if (in_stack_00000018 == 0) {
        return;
      }
      do {
        func_0x00010b1748f0();
        lVar8 = extraout_x9;
      } while (extraout_w11 != 0);
      goto LAB_10b15f91c;
    }
    func_0x00010b176c48();
    lVar8 = puVar3[0x48];
    func_0x00010b175880();
    plVar6 = (long *)(lVar8 + 0x48);
    plVar7 = (long *)puVar3[0x47];
  } while( true );
}



/* Entry: 10b15f9fc; end: 10b15fefb;  */

void FUN_10b15f9fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 **ppuVar5;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined8 uVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
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
  int extraout_w12;
  long unaff_x21;
  ulong *puVar7;
  bool bVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  ulong *puStack_c0;
  undefined1 uStack_58;
  
  func_0x00010b176b28();
  puVar2 = (undefined8 *)0x120;
  __Znwm();
  *puVar2 = FUN_10b170470;
  puVar2[1] = FUN_10b170828;
  func_0x00010b167864(puVar2 + 2);
  FUN_10b15fefc();
  FUN_10b168df0(&uStack_e0,unaff_x21 + 8);
  puVar3 = (undefined8 *)0x110;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cc05a8;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  puVar2[0x17] = uStack_d8;
  puVar2[0x16] = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puStack_d0 = (undefined8 *)((ulong)puStack_d0 & 0xffffffffffffff00);
  uStack_58 = 0;
  FUN_10b16d26c(puVar3 + 3,5,puVar2 + 0xc,puVar2 + 0x10,puVar2 + 0x16,&puStack_d0);
  FUN_10b0faf98(&puStack_d0);
  FUN_10b12878c(puVar2 + 0x16);
  func_0x000107c279a4(puVar2 + 0x10);
  func_0x00010b175838();
  FUN_10b16d190(puVar2 + 0x1c,puVar3 + 3,puVar3);
  FUN_10b12878c(&uStack_e0);
  (**(code **)(**(long **)(unaff_x21 + 0x28) + 0x38))
            (puVar2 + 0xc,*(long **)(unaff_x21 + 0x28),param_2);
  puVar7 = (ulong *)puVar2[0xc];
  puVar9 = (ulong *)puVar2[0xd];
  puVar2[0x20] = puVar9;
  puVar2[0x21] = puVar2[0x1c];
  do {
    puVar2[0x22] = puVar7;
    if (puVar7 == puVar9) {
      puStack_d0 = (undefined8 *)0x0;
      puStack_c8 = (undefined8 *)0x0;
      puStack_c0 = (ulong *)0x0;
      FUN_10b16a0dc(puVar2 + 7,&puStack_d0);
      ppuVar5 = &puStack_d0;
LAB_10b15fc88:
      func_0x0001052a9de8(ppuVar5);
      func_0x00010b176210();
      func_0x00010b175fa4();
      func_0x00010b1750bc();
      *(undefined1 *)(puVar2 + 0x23) = extraout_w8;
      func_0x00010b176bd4();
      func_0x00010b17561c();
      func_0x00010b174f24();
      return;
    }
    uVar4 = *puVar7;
    FUN_10b155d08();
    if (((uVar4 >> 0x20 & 1) == 0) || (func_0x00010b167190(), (int)uVar4 != 0)) {
      func_0x00010b177698(puVar2[0x21]);
      func_0x00010b177268();
      func_0x00010b177adc();
      __ZNSt3__15mutex4lockEv();
      puVar9 = puVar7;
      func_0x0001052a9c04();
      func_0x00010b17713c();
      func_0x00010b1759e4();
      if (((ulong)puVar7 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x23) = 0;
        func_0x00010b1754f4();
        func_0x00010b1752bc();
        lVar10 = puVar2[0x1e];
        lVar1 = puVar2[0x1f];
        puVar2[0x1e] = 0;
        puVar2[0x1f] = 0;
        func_0x00010b175324();
        func_0x00010b1760ac();
        puVar7 = puVar9;
        func_0x00010b174f54();
        func_0x000107c27b54(puVar7 + 1,&puStack_d0);
        func_0x00010b176eac();
        if (extraout_x9_00 != 0) break;
        func_0x00010b177abc();
        goto LAB_10b15fcc8;
      }
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
      func_0x00010b1767a8();
      func_0x00010b17725c();
      func_0x00010b175bf0();
      func_0x00010b176c50();
      uVar6 = puVar2[0x14];
      puVar2[0x1a] = uVar6;
      puVar2[0x1b] = puVar2[0x15];
      if (puVar2[0x15] == 0) {
        puVar2[0x17] = 0;
      }
      else {
        do {
          func_0x00010b174a1c();
        } while (extraout_w12 != 0);
        puVar2[0x17] = extraout_x9;
        do {
          func_0x00010b174b1c();
          uVar6 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puVar2[0x16] = uVar6;
      func_0x00010b177314();
      func_0x00010b175bf0();
      func_0x0001052a9c3c(puVar2 + 0x1a);
      func_0x00010b1759e4();
      func_0x00010b1761b0();
      if (puVar2[0x10] != puVar2[0x11]) {
        func_0x00010b175284();
        ppuVar5 = (undefined8 **)(puVar2 + 0x10);
        goto LAB_10b15fc88;
      }
      func_0x00010b1757bc();
      puVar7 = (ulong *)puVar2[0x22];
      puVar9 = (ulong *)puVar2[0x20];
    }
    puVar7 = puVar7 + 2;
  } while( true );
  do {
    func_0x00010b1749b8();
  } while (extraout_w11_00 != 0);
  uVar4 = puVar9[4];
  func_0x00010b177abc();
  if (uVar4 == 0) {
LAB_10b15fcc8:
    bVar8 = true;
  }
  else {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
    do {
      func_0x00010b1748f0();
    } while (extraout_w11_01 != 0);
    if (extraout_x9_01 == 0) {
      func_0x00010b174900();
      func_0x00010b17547c();
    }
    bVar8 = false;
  }
  puVar3 = (undefined8 *)(lVar10 + 0x50);
  puStack_d0 = puVar2;
  puStack_c8 = puVar2 + 0x1e;
  puStack_c0 = puVar9;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(lVar10 + 0x18) & 1) == 0) {
    uStack_e0 = 0;
    lVar10 = *(long *)(lVar10 + 0x90);
    func_0x00010b175084();
    if (lVar10 == 0) {
      func_0x00010b1751e0();
      *puVar3 = &PTR_FUN_110cc0648;
      func_0x00010b177b50(puStack_d0);
      if (extraout_x8_02 != 0) {
        func_0x00010b174834();
      }
      func_0x00010b176790();
      if (lVar1 != 0) {
        do {
          func_0x00010b1748f0();
        } while (extraout_w11_03 != 0);
        if (extraout_x9_03 == 0) {
          func_0x00010b174874();
          func_0x00010b1751c0();
        }
      }
      goto LAB_10b15fd44;
    }
  }
  func_0x00010b176790();
  if (lVar1 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b177320(&puStack_d0);
  if (lVar1 != 0) {
    do {
      func_0x00010b175100();
    } while (extraout_w10_02 != 0);
    if (extraout_x8_00 == 0) {
      func_0x00010b174874();
      func_0x00010b1751c0();
    }
    do {
      func_0x00010b175100();
    } while (extraout_w10_03 != 0);
    if (extraout_x8_01 == 0) {
      func_0x00010b174874();
      func_0x00010b1751c0();
    }
  }
  func_0x00010b174efc();
LAB_10b15fd44:
  if (!bVar8) {
    do {
      func_0x00010b1748f0();
    } while (extraout_w11_02 != 0);
    if (extraout_x9_02 == 0) {
      func_0x00010b174900();
      func_0x00010b17547c();
    }
  }
  return;
}



/* Entry: 10b15fefc; end: 10b15ff33;  */

void FUN_10b15fefc(undefined8 *param_1,undefined8 param_2,long param_3)

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
  func_0x00010b1762ec();
  return;
}



/* Entry: 10b15ff34; end: 10b16006b;  */

void FUN_10b15ff34(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 extraout_w8;
  long extraout_x9;
  int extraout_w11;
  long lStack_48;
  
  puVar1 = param_2;
  func_0x00010b175850();
  *puVar1 = FUN_10b1703cc;
  puVar1[1] = FUN_10b17043c;
  func_0x00010b167864(puVar1 + 2);
  FUN_10b15fefc(param_1,puVar1[5],puVar1[6]);
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  FUN_10b15eedc(puVar1 + 0x13,param_2,puVar1 + 0xc,param_3,puVar1 + 0x10,0);
  func_0x00010b17562c();
  if (((ulong)param_2 & 1) == 0) {
    *(undefined1 *)(puVar1 + 0x15) = 0;
    func_0x00010b174c24();
    if (lStack_48 != 0) {
      do {
        func_0x00010b1748f0();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b174824();
        func_0x00010b174f98();
      }
    }
  }
  else {
    func_0x00010b1754ec();
    func_0x00010b175140();
    func_0x00010b175838();
    func_0x00010b175284();
    func_0x00010b1757bc();
    func_0x00010b1750bc();
    *(undefined1 *)(puVar1 + 0x15) = extraout_w8;
    func_0x00010b176bd4();
    func_0x00010b17561c();
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b16006c; end: 10b1600af;  */

void FUN_10b16006c(long param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x00010b1751b0();
  FUN_10b16a10c(param_1 + 0x28);
  __ZNSt13exception_ptrC1ERKS_(param_1 + 0x28,auStack_28);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  func_0x00010b174f2c();
  return;
}



/* Entry: 10b1600b0; end: 10b1601f3;  */

void FUN_10b1600b0(void)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  code *extraout_x8;
  long unaff_x19;
  long lVar3;
  long *plVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long *plStack_40;
  undefined8 uStack_38;
  
  func_0x00010b176d98();
  if ((bool)in_ZR) {
    plStack_40 = (long *)0x0;
    uStack_38 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x0001052a9b74(auStack_50,unaff_x19 + 0x18,&uStack_60);
    func_0x00010b175db8();
    func_0x0001052a9bc8();
    func_0x00010b17631c();
    func_0x00010b176304();
    plVar1 = plStack_40;
    __ZNSt3__15mutex4lockEv(plStack_40 + 10);
    plVar4 = plStack_40;
    func_0x00010b176ef4();
    if ((bool)in_ZR) {
      plVar2 = plVar4;
      if (*plVar4 != 0) {
        func_0x0001052a9e54(plVar4);
        func_0x00010b1773b0();
        func_0x00010b177b04();
        plVar2 = plStack_40;
      }
      lVar3 = *(long *)(unaff_x19 + 0x38);
      plVar4[1] = *(long *)(unaff_x19 + 0x40);
      *plVar4 = lVar3;
      plVar4[2] = *(long *)(unaff_x19 + 0x48);
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      plVar4 = plVar2;
    }
    else {
      func_0x00010b177b04();
      lVar3 = *(long *)(unaff_x19 + 0x38);
      plVar4[1] = *(long *)(unaff_x19 + 0x40);
      *plVar4 = lVar3;
      plVar4[2] = *(long *)(unaff_x19 + 0x48);
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      func_0x00010b177c6c();
    }
    lVar3 = plVar4[0x13];
    plVar4[0x13] = 0;
    __ZNSt3__15mutex6unlockEv(plVar1 + 10);
    if (lVar3 == 0) {
      __ZNSt3__118condition_variable10notify_allEv(plStack_40 + 4);
    }
    else {
      func_0x00010b174f84();
      (*extraout_x8)(lVar3,&plStack_40);
      func_0x00010b1747fc();
    }
    func_0x00010b176548();
  }
  else {
    func_0x00010b174fa0();
    func_0x00010b175078();
    FUN_10b1679f4();
    func_0x00010b174f2c();
  }
  return;
}



/* Entry: 10b1601f4; end: 10b1601f7;  */

undefined8 * FUN_10b1601f4(undefined8 *param_1)

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



/* Entry: 10b1601f8; end: 10b16020b;  */

void FUN_10b1601f8(void)

{
  FUN_10b167af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16020c; end: 10b160213;  */

void FUN_10b16020c(long param_1)

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
  
  func_0x00010b1778a0(param_1 + 0x120);
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



/* Entry: 10b160214; end: 10b160393;  */

undefined1 * FUN_10b160214(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 in_ZR;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x19;
  long lVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_70;
  
  func_0x000107c350b4();
  lVar8 = *(long *)(param_1 + 0x98);
  uStack_70 = extraout_x8;
  FUN_10b15b7bc(&uStack_120);
  lVar8 = *(long *)(lVar8 + 0x88);
  if (lVar8 == 0) {
    *unaff_x19 = uStack_120;
    unaff_x19[1] = uStack_118;
    uStack_120 = 0;
    uStack_118 = 0;
  }
  else {
    uStack_110 = uStack_120;
    uStack_108 = uStack_118;
    uStack_120 = 0;
    uStack_118 = 0;
    FUN_10b166980(auStack_c8);
    uVar6 = uStack_a8;
    uVar5 = uStack_b0;
    FUN_10b167d58();
    uVar4 = uStack_b8;
    uVar3 = uStack_c0;
    uVar2 = uStack_108;
    uVar1 = uStack_110;
    uStack_100 = uStack_110;
    uStack_f8 = uStack_108;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_e0 = uVar4;
    uStack_d8 = uStack_b0;
    uStack_d0 = uStack_a8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    ppuStack_f0 = &PTR_FUN_110cbfb08;
    uStack_e8 = uVar3;
    pcStack_a0 = FUN_10b167d90;
    ppuStack_98 = &PTR_FUN_110cbfe20;
    func_0x00010b1773a8();
    *unaff_x19 = uVar1;
    unaff_x19[1] = uVar2;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    unaff_x19[4] = uVar4;
    unaff_x19[5] = uVar5;
    unaff_x19[6] = uVar6;
    uStack_d8 = 0;
    uStack_d0 = 0;
    unaff_x19[2] = &PTR_FUN_110cbfb08;
    unaff_x19[3] = uVar3;
    FUN_10b1491bc(lVar8,&pcStack_a0);
    func_0x00010b176738();
    FUN_10b167f20(&uStack_100);
    param_1 = auStack_c8;
    FUN_10b166aac();
    func_0x00010b176c18();
  }
  func_0x00010b175868();
  func_0x000107c350b0(uStack_70);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b176738();
  FUN_10b167f20(&uStack_100);
  func_0x0001052adbac();
  puVar7 = auStack_c8;
  FUN_10b166aac(puVar7);
  func_0x00010b176c18();
  func_0x00010b175868();
  func_0x00010b174f1c();
  func_0x00010b174b2c(&PTR_FUN_110cbf3a8);
  if (extraout_x8_00 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b160494();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x00010b1419a8(puVar7 + 0x18);
  func_0x00010b1419a8(param_1);
  return puVar7;
}



/* Entry: 10b160394; end: 10b160397;  */

long FUN_10b160394(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbf3a8);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b160494();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x00010b1419a8(param_1 + 0x18);
  func_0x00010b1419a8();
  return param_1;
}



/* Entry: 10b160398; end: 10b1603ab;  */

void FUN_10b160398(void)

{
  FUN_10b160430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1603ac; end: 10b1603af;  */

long FUN_10b1603ac(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbf3a8);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b160494();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x00010b1419a8(param_1 + 0x18);
  func_0x00010b1419a8();
  return param_1;
}



/* Entry: 10b1603b0; end: 10b1603c3;  */

void FUN_10b1603b0(void)

{
  FUN_10b160430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1603c4; end: 10b1603c7;  */

void FUN_10b1603c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf3c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1603c8; end: 10b1603db;  */

void FUN_10b1603c8(void)

{
  FUN_10b160420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1603dc; end: 10b16041f;  */

long FUN_10b1603dc(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b176d88();
  if (param_1 != 0) {
    func_0x00010b174910();
  }
  func_0x00010b177274();
  func_0x00010b1775f8();
  func_0x00010b1772ec();
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    lVar1 = unaff_x19 + 0x18;
    func_0x000107c350ac();
    if (lVar1 != 0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return param_1;
}



/* Entry: 10b160420; end: 10b16042f;  */

void FUN_10b160420(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b160430; end: 10b160493;  */

long FUN_10b160430(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbf3a8);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b160494();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x00010b1419a8(param_1 + 0x18);
  func_0x00010b1419a8();
  return param_1;
}



/* Entry: 10b160494; end: 10b16052b;  */

void FUN_10b160494(void)

{
  long unaff_x19;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  FUN_10b14195c();
  func_0x00010b17522c();
  FUN_10b141984();
  func_0x00010b1419a8(auStack_40);
  func_0x00010b1419a8(auStack_50);
  func_0x00010b1754fc();
  func_0x00010b175514(alStack_30[0] + 0x88);
  func_0x00010b174894();
  if (unaff_x19 == 0) {
    func_0x00010b174cb4();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b1419a8(alStack_30);
  return;
}



/* Entry: 10b16052c; end: 10b16055f;  */

long FUN_10b16052c(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x20;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b160560(param_1 + 0x28);
  }
  func_0x00010b174b2c(&PTR_FUN_110cbf3a8);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b160494();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x00010b1419a8(param_1 + 0x18);
  func_0x00010b1419a8(unaff_x20);
  return param_1;
}



/* Entry: 10b160560; end: 10b160587;  */

void FUN_10b160560(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b12878c();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b160588; end: 10b160917;  */

undefined8 ** FUN_10b160588(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 **ppuVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar4;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  long lVar5;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  long lStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_1;
  func_0x00010b1749f4();
  lVar5 = *(long *)(lVar5 + 0x28);
  uStack_48 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  puStack_90 = (undefined8 *)0x10b160c6c;
  ppuStack_88 = &PTR_DAT_110cbf510;
  uStack_100 = param_2;
  lStack_f8 = param_3;
  lStack_80 = param_1;
  FUN_10b113618(&lStack_a8,&uStack_100);
  if (lStack_a8 == 0) {
    func_0x00010b125888(&lStack_a8);
    func_0x000107c3144c();
    func_0x000107c27c1c(&lStack_60,1);
    puStack_50[2] = 0;
    *puStack_50 = &PTR_DAT_1107ea880;
    puStack_50[1] = 0;
    func_0x000107c278b8(&lStack_a8,&UNK_10f730993);
    func_0x00010b176f54();
    func_0x000107c31460();
    func_0x00010b1766e0();
    puStack_e8 = puStack_50;
    puStack_50 = (undefined8 *)0x0;
    puStack_f0 = puStack_e8 + 3;
    func_0x000107c27c24(&lStack_60);
    func_0x00010bcce5f4();
    func_0x000106e54980(&lStack_60,1);
    puStack_50[2] = 0;
    *puStack_50 = &PTR_DAT_11097ffd8;
    puStack_50[1] = 0;
    func_0x000107c278b8(&lStack_a8,&UNK_10f7309b5);
    func_0x00010b176f54();
    func_0x000107c31438();
    func_0x00010b1766e0();
    puStack_d8 = puStack_50;
    puStack_50 = (undefined8 *)0x0;
    puStack_e0 = puStack_d8 + 3;
    func_0x000106e54adc(&lStack_60);
    lStack_d0 = 0;
    lStack_c8 = 0;
  }
  else {
    lVar4 = *(long *)(lStack_a8 + 0x20);
    lStack_58 = *(long *)(lStack_a8 + 0x28);
    lStack_60 = lVar4;
    if (lStack_58 != 0) {
      do {
        func_0x00010b174a1c();
        lStack_a8 = extraout_x8_00;
        lVar4 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    lVar4 = *(long *)(lVar4 + 0x30);
    puStack_e8 = *(undefined8 **)(lVar4 + 0x58);
    puStack_f0 = *(undefined8 **)(lVar4 + 0x50);
    if (*(long *)(lVar4 + 0x58) != 0) {
      do {
        func_0x00010b1749b8();
        lStack_a8 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    lVar4 = *(long *)(lStack_a8 + 0x20);
    lStack_b0 = *(long *)(lStack_a8 + 0x28);
    lStack_b8 = lVar4;
    if (lStack_b0 != 0) {
      do {
        func_0x00010b174a1c();
        lStack_a8 = extraout_x8_02;
        lVar4 = extraout_x9_00;
      } while (extraout_w12_00 != 0);
    }
    lVar4 = *(long *)(lVar4 + 0x30);
    puStack_d8 = *(undefined8 **)(lVar4 + 0x68);
    puStack_e0 = *(undefined8 **)(lVar4 + 0x60);
    if (*(long *)(lVar4 + 0x68) != 0) {
      do {
        func_0x00010b1749b8();
        lStack_a8 = extraout_x8_03;
      } while (extraout_w11_00 != 0);
    }
    lStack_c8 = lStack_a0;
    lStack_d0 = lStack_a8;
    if (lStack_a0 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b1257d4(&lStack_b8);
    func_0x00010b1257d4(&lStack_60);
    func_0x00010b125888(&lStack_a8);
  }
  func_0x000107c281f0(&puStack_90);
  puStack_90 = (undefined8 *)0x0;
  ppuStack_88 = (undefined **)0x0;
  lStack_60 = 0;
  lStack_58 = 0;
  FUN_10b160b04(&lStack_a8,lVar5 + 8,&lStack_60);
  FUN_10b160b30(&puStack_90,&lStack_a8);
  func_0x00010b1609f4(&lStack_a8);
  func_0x00010b1772a0();
  puVar1 = puStack_90;
  func_0x00010b177758();
  uVar2 = *(char *)(puVar1 + 6) == '\x01';
  if ((bool)uVar2) {
    FUN_10b160be8();
  }
  else {
    FUN_10b160c44(puVar1,&puStack_f0);
    *(undefined1 *)(puVar1 + 6) = 1;
  }
  lVar4 = puVar1[0x16];
  func_0x00010b1759bc();
  if (lVar4 == 0) {
    func_0x00010b1772b0();
  }
  else {
    func_0x00010b175460();
    func_0x00010b1769a0();
    func_0x00010b1768dc();
  }
  func_0x00010b1609f4(&puStack_90);
  ppuVar3 = &puStack_f0;
  func_0x00010b1609c8(ppuVar3);
  func_0x00010b176c90();
  func_0x00010b1762fc();
  while( true ) {
    func_0x000107c350b0(uStack_48);
    if ((bool)uVar2) {
      return ppuVar3;
    }
    ___stack_chk_fail();
    func_0x00010b175054();
    func_0x00010b1766e0();
    func_0x00010b175644();
    func_0x000106e54adc(&lStack_60);
    func_0x000107c27c20(&puStack_f0);
    ppuVar3 = &puStack_90;
    func_0x000107c281f0(ppuVar3);
    func_0x00010b176c90();
    func_0x00010b1762fc();
    uVar2 = (int)lVar5 == 1;
    if (!(bool)uVar2) break;
    func_0x00010b1750a4();
    func_0x00010b1751b0();
    func_0x000107c350d8();
    FUN_10b160a7c();
    func_0x00010b174f2c();
    ___cxa_end_catch();
  }
  func_0x00010b174f1c();
  func_0x00010b177514();
  func_0x00010b174b2c(&PTR_FUN_110cbf460);
  if (extraout_x8_04 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b160a7c();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x00010b1609f4(ppuVar3 + 3);
  func_0x00010b1609f4(puVar1);
  return ppuVar3;
}



/* Entry: 10b160918; end: 10b16091b;  */

long FUN_10b160918(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbf460);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b160a7c();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x00010b1609f4(param_1 + 0x18);
  func_0x00010b1609f4();
  return param_1;
}



/* Entry: 10b16091c; end: 10b16092f;  */

void FUN_10b16091c(void)

{
  FUN_10b160a18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b160930; end: 10b160933;  */

long FUN_10b160930(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbf460);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b160a7c();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x00010b1609f4(param_1 + 0x18);
  func_0x00010b1609f4();
  return param_1;
}



/* Entry: 10b160934; end: 10b160947;  */

void FUN_10b160934(void)

{
  FUN_10b160a18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b160948; end: 10b16094b;  */

void FUN_10b160948(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbf480;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16094c; end: 10b16095f;  */

void FUN_10b16094c(void)

{
  FUN_10b1609b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b160960; end: 10b1609b7;  */

long FUN_10b160960(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (lVar1 != 0) {
    func_0x00010b174910();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xc0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x80);
  lVar1 = param_1 + 0x50;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  func_0x00010b175904();
  if ((bool)in_ZR) {
    func_0x00010b1770a4(param_1 + 0x18);
    func_0x00010b125888();
    func_0x000106e50c54(unaff_x19 + 0x10);
    lVar1 = unaff_x19;
    func_0x000100450bd8();
    if (lVar1 != 0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 10b1609b8; end: 10b1609c7;  */

void FUN_10b1609b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1609c8; end: 10b160a17;  */

long FUN_10b1609c8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1770a4();
  func_0x00010b125888();
  func_0x000106e50c54(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x000100450bd8();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b160a18; end: 10b160a7b;  */

long FUN_10b160a18(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbf460);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b160a7c();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x00010b1609f4(param_1 + 0x18);
  func_0x00010b1609f4();
  return param_1;
}



/* Entry: 10b160a7c; end: 10b160b03;  */

void FUN_10b160a7c(void)

{
  long lVar1;
  undefined8 uStack_30;
  
  func_0x00010b174a94();
  func_0x00010b174dc8();
  FUN_10b160b04();
  func_0x00010b17522c();
  FUN_10b160b30();
  func_0x00010b1777d0();
  func_0x00010b175878();
  func_0x00010b177758();
  func_0x00010b175514(uStack_30 + 0xa8);
  lVar1 = *(long *)(uStack_30 + 0xb0);
  func_0x00010b1759bc();
  if (lVar1 == 0) {
    func_0x00010b1772b0();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b176c88();
  return;
}



/* Entry: 10b160b04; end: 10b160b2f;  */

void FUN_10b160b04(void)

{
  func_0x00010b174884();
  func_0x00010b1752bc();
  func_0x00010b17480c();
  func_0x00010b174da8();
  return;
}



/* Entry: 10b160b30; end: 10b160b8b;  */

void FUN_10b160b30(void)

{
  func_0x00010b1747a8();
  func_0x00010b1609f4();
  return;
}



/* Entry: 10b160b8c; end: 10b160b9f;  */

void FUN_10b160b8c(void)

{
  func_0x00010b160b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b160ba0; end: 10b160be7;  */

void FUN_10b160ba0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b160588(param_1 + 8);
  FUN_10b120a3c(auStack_30);
  return;
}



/* Entry: 10b160be8; end: 10b160c43;  */

void FUN_10b160be8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b175110();
  func_0x000107c2836c();
  func_0x000106e50b28(unaff_x20 + 0x10,unaff_x19 + 0x10);
  func_0x00010b160c20(unaff_x20 + 0x20,unaff_x19 + 0x20);
  return;
}


