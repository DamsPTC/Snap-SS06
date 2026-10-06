/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8fcffc; end: 10b8fcfff;  */

void FUN_10b8fcffc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fd000; end: 10b8fd05f;  */

undefined8 * FUN_10b8fd000(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[2] = 0;
  puVar1[3] = 0x32aaaba7;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3cb0b1bb;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *puVar1 = &PTR_FUN_110d74010;
  puVar1[1] = 0;
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 10b8fd060; end: 10b8fd063;  */

void FUN_10b8fd060(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b8fd064; end: 10b8fd077;  */

void FUN_10b8fd064(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fd078; end: 10b8fd0af;  */

void FUN_10b8fd078(long *param_1)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_10b8fab94(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8fd0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10b8fd0b0; end: 10b8fd0cb;  */

void FUN_10b8fd0b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73fc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8fd0cc; end: 10b8fd133;  */

void FUN_10b8fd0cc(long param_1)

{
  func_0x00010b8fe548();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b8fd134; end: 10b8fd18b;  */

void FUN_10b8fd134(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *unaff_x20;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  puVar3 = auStack_70;
  func_0x00010b8fd9b8();
  func_0x000107c2837c();
  func_0x00010b8feaa8();
  func_0x000107c28378();
  lVar1 = *unaff_x20;
  *unaff_x20 = (long)puVar2;
  unaff_x20[1] = unaff_x20[1] + (lVar1 - (long)puVar2);
  FUN_10b8fd18c();
  *param_3 = puVar3;
  return;
}



/* Entry: 10b8fd18c; end: 10b8fd223;  */

undefined1 * FUN_10b8fd18c(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [8];
  long alStack_390 [20];
  undefined1 auStack_2f0 [72];
  long lStack_2a8;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [512];
  
  func_0x00010b8fd3f4();
  puStack_248 = auStack_230;
  ppuStack_250 = &PTR_DAT_11099bc38;
  uStack_238 = 500;
  uStack_240 = 0;
  FUN_10b8fd224(&ppuStack_250);
  puStack_260 = puStack_248;
  uStack_258 = uStack_240;
  puVar1 = param_1;
  func_0x000107c28388(param_1,&puStack_260);
  func_0x000107c283e8(&ppuStack_250);
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar2 = param_3;
  func_0x00010b8fda54();
  lStack_2a8 = lVar2;
  func_0x000107c284f4(auStack_2f0,puVar1);
  func_0x000107c284ec(alStack_390,auStack_2f0);
  if (param_3 != 0) {
    lVar2 = *(long *)(alStack_390[0] + -0x18);
    func_0x00010bd490d0(auStack_3a0,&lStack_2a8);
    func_0x0001080c9df4(auStack_398,(long)alStack_390 + lVar2,auStack_3a0);
    __ZNSt3__16localeD1Ev(auStack_398);
    __ZNSt3__16localeD1Ev(auStack_3a0);
  }
  FUN_10b99fdb4(alStack_390,param_1);
  func_0x000107c284fc((long)alStack_390 + *(long *)(alStack_390[0] + -0x18),5);
  func_0x000107c283e0(puVar1,*(undefined8 *)(puVar1 + 0x10));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(alStack_390);
  puVar1 = auStack_2f0;
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(puVar1);
  return puVar1;
}



/* Entry: 10b8fd224; end: 10b8fd2eb;  */

void FUN_10b8fd224(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long alStack_130 [20];
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lVar1 = param_3;
  func_0x00010b8fda54();
  lStack_48 = lVar1;
  func_0x000107c284f4(auStack_90);
  func_0x000107c284ec(alStack_130,auStack_90);
  if (param_3 != 0) {
    lVar1 = *(long *)(alStack_130[0] + -0x18);
    func_0x00010bd490d0(auStack_140,&lStack_48);
    func_0x0001080c9df4(auStack_138,(long)alStack_130 + lVar1,auStack_140);
    __ZNSt3__16localeD1Ev(auStack_138);
    __ZNSt3__16localeD1Ev(auStack_140);
  }
  FUN_10b99fdb4(alStack_130);
  func_0x000107c284fc((long)alStack_130 + *(long *)(alStack_130[0] + -0x18),5);
  func_0x000107c283e0();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(alStack_130);
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(auStack_90);
  return;
}



/* Entry: 10b8fd2ec; end: 10b8feba3;  */

void FUN_10b8fd2ec(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *unaff_x20;
  *unaff_x19 = *(undefined8 *)(lVar1 + 0x140);
  uVar2 = *(undefined8 *)(lVar1 + 0x148);
  unaff_x19[2] = *(undefined8 *)(lVar1 + 0x150);
  unaff_x19[1] = uVar2;
  *(undefined1 *)(unaff_x19 + 3) = 0;
  return;
}



/* Entry: 10b8feba4; end: 10b8ffc3b;  */

undefined8 *
FUN_10b8feba4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  func_0x00010b8ffa88(param_1 + 3);
  param_1[10] = &UNK_10f7ccb13;
  param_1[0xb] = 6;
  param_1[0xc] = &UNK_10f7ccb1a;
  param_1[0xd] = 10;
  param_1[0xe] = &UNK_10f7ccb25;
  param_1[0xf] = 0xe;
  param_1[0x10] = &UNK_10f7ccb34;
  param_1[0x11] = 6;
  param_1[0x12] = &UNK_10f7ccb3b;
  param_1[0x13] = 0x12;
  param_1[0x14] = &UNK_10f7ccb4e;
  param_1[0x15] = 0xd;
  func_0x00010b8fec3c(param_1 + 3,param_2);
  return param_1;
}



/* Entry: 10b8ffc3c; end: 10b8ffcb7;  */

long FUN_10b8ffc3c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  lVar2 = param_2;
  FUN_10b8a3cc8();
  if ((long *)(*param_1 + param_1[3]) == plVar1) {
    plVar1 = param_1 + 6;
    lVar2 = param_1[7] - *plVar1 >> 3;
    FUN_10b8a3cf8(param_1,param_2);
    *param_1 = lVar2;
    func_0x000104bdd2f0(plVar1,param_2);
  }
  else {
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}



/* Entry: 10b8ffcb8; end: 10b8ffcff;  */

void FUN_10b8ffcb8(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  
  if (param_3 < (ulong)(*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3)) {
    lVar5 = *(long *)(*(long *)(param_2 + 0x30) + param_3 * 8);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar5;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  return;
}



/* Entry: 10b8ffd00; end: 10b8ffdeb;  */

undefined8 FUN_10b8ffd00(void)

{
  int iVar1;
  
  if ((bRam00000001137fd050 & 1) == 0) {
    iVar1 = 0x137fd050;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137fd058 = 0;
      uRam00000001137fd060 = 0;
      uRam00000001137fd068 = 0;
      ___cxa_guard_release(0x1137fd050);
    }
  }
  return 0x1137fd058;
}



/* Entry: 10b8ffdec; end: 10b8ffdef;  */

long FUN_10b8ffdec(long param_1)

{
  FUN_10b9a00dc();
  FUN_10b9001c4(param_1 + 0x50);
  func_0x00010b8e159c(param_1 + 0x48);
  func_0x0001090e1d60(param_1 + 0x38);
  func_0x0001080e0bc0(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b8ffdf0; end: 10b8ffe03;  */

void FUN_10b8ffdf0(void)

{
  func_0x00010b8ffdac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8ffe04; end: 10b8ffeeb;  */

ulong * FUN_10b8ffe04(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  ulong *extraout_x8;
  ulong uVar8;
  undefined8 *extraout_x8_00;
  ulong uVar9;
  long extraout_x9;
  ulong *puVar10;
  undefined1 *puVar11;
  ulong auStack_278 [5];
  undefined1 *puStack_250;
  undefined8 **ppuStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [32];
  ulong auStack_208 [5];
  undefined1 *puStack_1e0;
  ulong *puStack_1d8;
  undefined1 **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [40];
  ulong *puStack_190;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [40];
  ulong *puStack_130;
  undefined1 *puStack_128;
  undefined8 **ppuStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [48];
  undefined8 uStack_e0;
  ulong *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [48];
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = uStack_68 & 0xffffffffffffff00;
  uStack_60 = 0;
  if ((char)param_2[8] == '\x01') {
    uStack_68 = param_2[7];
    param_2[7] = 0;
    uStack_60 = 1;
    func_0x00010b900268();
    *(undefined1 *)(param_2 + 1) = 1;
    func_0x00010b900534(auStack_58,param_2[2],&uStack_68,param_2);
    func_0x0001080df8d0(param_1,auStack_58);
    func_0x0001080e0bc0(auStack_58);
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  else {
    func_0x00010b900268();
    *(undefined1 *)(param_2 + 1) = 1;
  }
  puVar5 = &uStack_68;
  func_0x0001090e1d60();
  uVar4 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38;
  if ((bool)uVar4) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar7 = auStack_c0;
  pcStack_78 = FUN_10b8ffeec;
  puVar10 = puVar5;
  uStack_90 = param_1;
  plStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010b900228();
  *(undefined1 *)(puVar10 + 1) = 1;
  func_0x00010b900250();
  func_0x0001080df8d0(puVar5 + 3);
  func_0x0001080e0bc0(auStack_c0);
  puVar10 = puVar5 + 7;
  func_0x0001090e1db8();
  func_0x00010b900210();
  puVar6 = puVar10;
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    uStack_c8 = 0x10b8fff40;
    uStack_e0 = param_1;
    puStack_d8 = puVar5;
    ppuStack_d0 = &puStack_80;
    func_0x00010b900228();
    func_0x00010b900250();
    func_0x0001080df8d0(puVar10 + 3,auStack_110);
    func_0x0001080e0bc0(auStack_110);
    puVar6 = puVar10 + 7;
    puVar11 = puVar7;
    FUN_10b8af534();
    func_0x00010b900210();
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      uStack_118 = 0x10b8fff94;
      puStack_130 = puVar10;
      puStack_128 = puVar7;
      ppuStack_120 = &ppuStack_d0;
      func_0x00010b900228();
      uVar4 = (char)puVar6[8] == '\x01';
      if ((bool)uVar4) {
        puVar5 = (ulong *)(extraout_x9 + 0x38);
        FUN_10b900024();
        uVar8 = *puVar5;
        if (uVar8 != 0) {
          plVar1 = (long *)(uVar8 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *extraout_x8 = uVar8;
      }
      else {
        puVar10 = *(ulong **)(extraout_x9 + 0x10);
        FUN_10b8dd210(auStack_158,extraout_x9 + 0x18);
        puVar11 = auStack_158;
        puVar5 = puVar10;
        func_0x00010b900274(extraout_x8,puVar10,puVar11,0);
        func_0x00010b900260();
      }
      func_0x00010b900210();
      puVar6 = puVar5;
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        if ((puVar5[1] & 1) != 0) {
          return puVar5;
        }
        pcStack_168 = FUN_10b900024;
        ppuStack_170 = &ppuStack_120;
        func_0x0001080da3e4();
        pcStack_178 = FUN_10b90003c;
        puStack_190 = puVar10;
        puStack_180 = (undefined1 *)&ppuStack_170;
        func_0x00010b900228();
        FUN_10b9a00dc();
        puVar6 = puVar5 + 3;
        func_0x0001080df8d0(puVar6,puVar11);
        if ((puVar5[6] & 1) == 0) {
          func_0x0001080e07a8(auStack_1b8,puVar5[2],puVar5 + 4);
          puVar6 = puVar5 + 3;
          func_0x0001080df8d0(puVar6,auStack_1b8);
          func_0x00010b900260();
        }
        *(undefined1 *)(puVar5 + 1) = 0;
        func_0x00010b900210();
        if (!(bool)uVar4) {
          ___stack_chk_fail();
          uStack_1c8 = 0x10b9000a8;
          puStack_1e0 = puVar11;
          puStack_1d8 = puVar5;
          ppuStack_1d0 = &puStack_180;
          func_0x00010b900228();
          if ((puVar6[1] & 1) == 0) {
            FUN_10b9a0084(auStack_208);
            *extraout_x8_00 = 2;
            extraout_x8_00[1] = auStack_208[0];
            auStack_208[0] = 0;
            puVar6 = (ulong *)0x0;
            func_0x000104bda960();
          }
          else {
            puVar11 = (undefined1 *)puVar6[2];
            func_0x0001080e08ac(auStack_228);
            FUN_10b8db52c(auStack_208,puVar11,auStack_228);
            FUN_10b8fc868(extraout_x8_00,auStack_208);
            puVar6 = auStack_208;
            func_0x0001080e0bc0();
            func_0x00010b900260();
          }
          func_0x00010b900210();
          if ((bool)uVar4) {
            return puVar6;
          }
          ___stack_chk_fail();
          uStack_238 = 0x10b90013c;
          puVar5 = puVar6;
          puStack_250 = puVar11;
          ppuStack_240 = &ppuStack_1d0;
          func_0x00010b900228();
          func_0x0001080e07a8(auStack_278,puVar5[2]);
          puVar5 = auStack_278;
          FUN_10b90003c();
          func_0x00010b900260();
          func_0x00010b900210();
          if (!(bool)uVar4) {
            ___stack_chk_fail();
            if (puVar6 != puVar5) {
              uVar9 = *puVar5;
              *puVar5 = 0;
              uVar8 = *puVar6;
              *puVar6 = uVar9;
              FUN_10b8e15c0(uVar8);
            }
            return puVar6;
          }
        }
      }
    }
  }
  return puVar6;
}



/* Entry: 10b8ffeec; end: 10b900023;  */

long * FUN_10b8ffeec(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *extraout_x8;
  long lVar7;
  undefined8 *extraout_x8_00;
  long lVar8;
  long extraout_x9;
  long *plVar9;
  undefined1 *puVar10;
  long alStack_208 [5];
  undefined1 *puStack_1e0;
  undefined8 **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [32];
  long alStack_198 [5];
  undefined1 *puStack_170;
  long *plStack_168;
  undefined1 **ppuStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [40];
  long *plStack_120;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 **ppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [40];
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [48];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  puVar6 = auStack_50;
  lVar7 = param_1;
  func_0x00010b900228();
  *(undefined1 *)(lVar7 + 8) = 1;
  func_0x00010b900250();
  func_0x0001080df8d0(param_1 + 0x18);
  func_0x0001080e0bc0(auStack_50);
  plVar9 = (long *)(param_1 + 0x38);
  func_0x0001090e1db8();
  func_0x00010b900210();
  plVar5 = plVar9;
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_58 = 0x10b8fff40;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010b900228();
    func_0x00010b900250();
    func_0x0001080df8d0(plVar9 + 3,auStack_a0);
    func_0x0001080e0bc0(auStack_a0);
    plVar5 = plVar9 + 7;
    puVar10 = puVar6;
    FUN_10b8af534();
    func_0x00010b900210();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_a8 = 0x10b8fff94;
      plStack_c0 = plVar9;
      puStack_b8 = puVar6;
      ppuStack_b0 = &puStack_60;
      func_0x00010b900228();
      uVar3 = (char)plVar5[8] == '\x01';
      if ((bool)uVar3) {
        plVar4 = (long *)(extraout_x9 + 0x38);
        FUN_10b900024();
        lVar7 = *plVar4;
        if (lVar7 != 0) {
          plVar5 = (long *)(lVar7 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        *extraout_x8 = lVar7;
      }
      else {
        plVar9 = *(long **)(extraout_x9 + 0x10);
        FUN_10b8dd210(auStack_e8,extraout_x9 + 0x18);
        puVar10 = auStack_e8;
        plVar4 = plVar9;
        FUN_10b900274(extraout_x8,plVar9,puVar10,0);
        func_0x00010b900260();
      }
      func_0x00010b900210();
      plVar5 = plVar4;
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        if ((*(byte *)(plVar4 + 1) & 1) != 0) {
          return plVar4;
        }
        pcStack_f8 = FUN_10b900024;
        ppuStack_100 = &ppuStack_b0;
        func_0x0001080da3e4();
        pcStack_108 = FUN_10b90003c;
        plStack_120 = plVar9;
        puStack_110 = (undefined1 *)&ppuStack_100;
        func_0x00010b900228();
        FUN_10b9a00dc();
        plVar5 = plVar4 + 3;
        func_0x0001080df8d0(plVar5,puVar10);
        if ((*(byte *)(plVar4 + 6) & 1) == 0) {
          func_0x0001080e07a8(auStack_148,plVar4[2],plVar4 + 4);
          plVar5 = plVar4 + 3;
          func_0x0001080df8d0(plVar5,auStack_148);
          func_0x00010b900260();
        }
        *(undefined1 *)(plVar4 + 1) = 0;
        func_0x00010b900210();
        if (!(bool)uVar3) {
          ___stack_chk_fail();
          uStack_158 = 0x10b9000a8;
          puStack_170 = puVar10;
          plStack_168 = plVar4;
          ppuStack_160 = &puStack_110;
          func_0x00010b900228();
          if ((*(byte *)(plVar5 + 1) & 1) == 0) {
            FUN_10b9a0084(alStack_198);
            *extraout_x8_00 = 2;
            extraout_x8_00[1] = alStack_198[0];
            alStack_198[0] = 0;
            plVar5 = (long *)0x0;
            func_0x000104bda960();
          }
          else {
            puVar10 = (undefined1 *)plVar5[2];
            func_0x0001080e08ac(auStack_1b8);
            FUN_10b8db52c(alStack_198,puVar10,auStack_1b8);
            FUN_10b8fc868(extraout_x8_00,alStack_198);
            plVar5 = alStack_198;
            func_0x0001080e0bc0();
            func_0x00010b900260();
          }
          func_0x00010b900210();
          if ((bool)uVar3) {
            return plVar5;
          }
          ___stack_chk_fail();
          uStack_1c8 = 0x10b90013c;
          plVar9 = plVar5;
          puStack_1e0 = puVar10;
          ppuStack_1d0 = &ppuStack_160;
          func_0x00010b900228();
          func_0x0001080e07a8(alStack_208,plVar9[2]);
          plVar9 = alStack_208;
          FUN_10b90003c();
          func_0x00010b900260();
          func_0x00010b900210();
          if (!(bool)uVar3) {
            ___stack_chk_fail();
            if (plVar5 != plVar9) {
              lVar8 = *plVar9;
              *plVar9 = 0;
              lVar7 = *plVar5;
              *plVar5 = lVar8;
              FUN_10b8e15c0(lVar7);
            }
            return plVar5;
          }
        }
      }
    }
  }
  return plVar5;
}



/* Entry: 10b900024; end: 10b90003b;  */

undefined8 * FUN_10b900024(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  undefined8 uVar4;
  undefined8 auStack_118 [5];
  undefined8 uStack_f0;
  undefined8 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [32];
  undefined8 auStack_a8 [5];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [40];
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return param_1;
  }
  func_0x0001080da3e4();
  pcStack_18 = FUN_10b90003c;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00010b900228();
  FUN_10b9a00dc();
  puVar1 = param_1 + 3;
  func_0x0001080df8d0(puVar1,param_2);
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    func_0x0001080e07a8(auStack_58,param_1[2],param_1 + 4);
    puVar1 = param_1 + 3;
    func_0x0001080df8d0(puVar1,auStack_58);
    func_0x00010b900260();
  }
  *(undefined1 *)(param_1 + 1) = 0;
  func_0x00010b900210();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_68 = 0x10b9000a8;
    uStack_80 = param_2;
    puStack_78 = param_1;
    ppuStack_70 = &puStack_20;
    func_0x00010b900228();
    if ((*(byte *)(puVar1 + 1) & 1) == 0) {
      FUN_10b9a0084(auStack_a8);
      *extraout_x8 = 2;
      extraout_x8[1] = auStack_a8[0];
      auStack_a8[0] = 0;
      puVar1 = (undefined8 *)0x0;
      func_0x000104bda960();
    }
    else {
      param_2 = puVar1[2];
      func_0x0001080e08ac(auStack_c8);
      FUN_10b8db52c(auStack_a8,param_2,auStack_c8);
      FUN_10b8fc868(extraout_x8,auStack_a8);
      puVar1 = auStack_a8;
      func_0x0001080e0bc0();
      func_0x00010b900260();
    }
    func_0x00010b900210();
    if ((bool)in_ZR) {
      return puVar1;
    }
    ___stack_chk_fail();
    uStack_d8 = 0x10b90013c;
    puVar2 = puVar1;
    uStack_f0 = param_2;
    ppuStack_e0 = &ppuStack_70;
    func_0x00010b900228();
    func_0x0001080e07a8(auStack_118,puVar2[2]);
    puVar2 = auStack_118;
    FUN_10b90003c();
    func_0x00010b900260();
    func_0x00010b900210();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      if (puVar1 != puVar2) {
        uVar4 = *puVar2;
        *puVar2 = 0;
        uVar3 = *puVar1;
        *puVar1 = uVar4;
        FUN_10b8e15c0(uVar3);
      }
      return puVar1;
    }
  }
  return puVar1;
}



/* Entry: 10b90003c; end: 10b9001bb;  */

undefined8 * FUN_10b90003c(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  undefined8 uVar4;
  undefined8 auStack_108 [5];
  undefined8 uStack_e0;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [32];
  undefined8 auStack_98 [5];
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [40];
  
  func_0x00010b900228();
  FUN_10b9a00dc();
  puVar1 = (undefined8 *)(param_1 + 0x18);
  func_0x0001080df8d0(puVar1,param_2);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x0001080e07a8(auStack_48,*(undefined8 *)(param_1 + 0x10),param_1 + 0x20);
    puVar1 = (undefined8 *)(param_1 + 0x18);
    func_0x0001080df8d0(puVar1,auStack_48);
    func_0x00010b900260();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  func_0x00010b900210();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_58 = 0x10b9000a8;
    uStack_70 = param_2;
    lStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010b900228();
    if ((*(byte *)(puVar1 + 1) & 1) == 0) {
      FUN_10b9a0084(auStack_98);
      *extraout_x8 = 2;
      extraout_x8[1] = auStack_98[0];
      auStack_98[0] = 0;
      puVar1 = (undefined8 *)0x0;
      func_0x000104bda960();
    }
    else {
      param_2 = puVar1[2];
      func_0x0001080e08ac(auStack_b8);
      FUN_10b8db52c(auStack_98,param_2,auStack_b8);
      FUN_10b8fc868(extraout_x8,auStack_98);
      puVar1 = auStack_98;
      func_0x0001080e0bc0();
      func_0x00010b900260();
    }
    func_0x00010b900210();
    if ((bool)in_ZR) {
      return puVar1;
    }
    ___stack_chk_fail();
    uStack_c8 = 0x10b90013c;
    puVar2 = puVar1;
    uStack_e0 = param_2;
    ppuStack_d0 = &puStack_60;
    func_0x00010b900228();
    func_0x0001080e07a8(auStack_108,puVar2[2]);
    puVar2 = auStack_108;
    FUN_10b90003c();
    func_0x00010b900260();
    func_0x00010b900210();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      if (puVar1 != puVar2) {
        uVar4 = *puVar2;
        *puVar2 = 0;
        uVar3 = *puVar1;
        *puVar1 = uVar4;
        FUN_10b8e15c0(uVar3);
      }
      return puVar1;
    }
  }
  return puVar1;
}



/* Entry: 10b9001bc; end: 10b9001c3;  */

void FUN_10b9001bc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b9001c0);
  (*pcVar1)();
}



/* Entry: 10b9001c4; end: 10b9001f3;  */

long FUN_10b9001c4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b9001f4(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b9001f4; end: 10b900273;  */

void FUN_10b9001f4(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b900274; end: 10b900757;  */

void FUN_10b900274(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar7;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long *extraout_x8_04;
  undefined *extraout_x9;
  undefined *extraout_x9_00;
  int extraout_w10;
  undefined **ppuVar8;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [16];
  long lStack_2a8;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  long lStack_240;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [24];
  undefined8 uStack_218;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [24];
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined1 auStack_150 [32];
  long lStack_130;
  byte bStack_128;
  undefined8 uStack_48;
  
  puVar6 = &uStack_1d0;
  plVar2 = param_2;
  func_0x00010b902c00();
  uStack_48 = extraout_x8;
  if (plVar2[4] != 0) {
    func_0x00010b902e24(&lStack_130);
    func_0x0001080df8d0(param_3,&lStack_130);
    func_0x0001080e0bc0(&lStack_130);
  }
  plVar2 = &lStack_130;
  func_0x00010b8ffd54(plVar2,param_2);
  uStack_190 = 0;
  lStack_188 = 0;
  plStack_170 = (long *)0x10f268f77;
  uStack_168 = 7;
  func_0x00010b902df0(auStack_150);
  if (bStack_128 == 1) {
    func_0x00010b902cc8(&plStack_170);
    func_0x000107c31060(&lStack_188,&plStack_170);
    plVar2 = plStack_170;
    func_0x000107c278f8();
    if ((bStack_128 & 1) != 0) goto LAB_10b900354;
  }
  func_0x00010b902c34();
  bStack_128 = 1;
LAB_10b900354:
  plStack_1a8 = (long *)&DAT_10f3b067d;
  uStack_1a0 = 5;
  func_0x00010b902df0(&plStack_170);
  uVar1 = bStack_128 == 1;
  if (((bool)uVar1) && (func_0x00010b902d20(), ((ulong)plVar2 & 1) == 0)) {
    func_0x00010b902cc8(&plStack_1a8);
    func_0x000107c31060(&uStack_190,&plStack_1a8);
    plVar2 = plStack_1a8;
    func_0x000107c278f8();
  }
  if ((bStack_128 & 1) == 0) {
    func_0x00010b902c34();
    bStack_128 = 1;
  }
  if ((lStack_188 == 0) || (*(int *)(lStack_188 + 0xc) == 0)) {
    func_0x00010b902cc8(&plStack_1a8);
    func_0x000107c31060(&lStack_188,&plStack_1a8);
    plVar2 = plStack_1a8;
    func_0x000107c278f8();
    if ((bStack_128 & 1) == 0) {
      func_0x00010b902c34();
      bStack_128 = 1;
    }
  }
  if ((lStack_188 == 0) || (lStack_1c8 = lStack_188, *(int *)(lStack_188 + 0xc) == 0)) {
    func_0x000107c31084();
    param_3 = param_3 + 8;
    (**(code **)(*param_2 + 0x170))(param_2);
    FUN_10b9a8d84(auStack_1c0);
    puVar3 = auStack_1c0;
    func_0x000107c27e5c();
    puStack_180 = puVar3;
    lStack_178 = param_3;
    func_0x000107c2793c(&UNK_10f7ccbb0);
    func_0x000107c3173c(&plStack_1a8);
    func_0x000107c31080(&puStack_180,plVar2,&plStack_1a8);
    func_0x000107c31060(&lStack_188,&puStack_180);
    func_0x000107c278f8(puStack_180);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_1a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
    lStack_1c8 = lStack_188;
  }
  uStack_1d0 = uStack_190;
  uStack_190 = 0;
  lStack_188 = 0;
  plVar2 = &lStack_1c8;
  FUN_10b99f4e4(param_1,plVar2,&uStack_1d0,param_4);
  func_0x000107c278f8(uStack_1d0);
  func_0x000107c278f8(lStack_1c8);
  func_0x0001080e0bc0(&plStack_170);
  func_0x0001080e0bc0(auStack_150);
  func_0x000107c278f8(uStack_190);
  func_0x000107c278f8(lStack_188);
  plVar4 = &lStack_130;
  func_0x00010b8ffdac();
  func_0x00010b902bc4(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b902c00();
  uStack_218 = extraout_x8_01;
  FUN_10b99fc44(&lStack_240,plVar2);
  func_0x0001080e0180(extraout_x8_00);
  plVar2 = &lStack_240;
  func_0x00010b99f83c();
  if ((*plVar2 == 0) || (*(int *)(*plVar2 + 0xc) == 0)) {
    plVar2 = &lStack_240;
    func_0x00010b99f828();
    lVar7 = *plVar2;
    if (lVar7 == 0) {
      ppuVar8 = (undefined **)0x0;
      puVar5 = &UNK_10f7d0ef0;
    }
    else {
      puVar5 = (undefined *)(lVar7 + 0x18);
      ppuVar8 = (undefined **)(ulong)*(uint *)(lVar7 + 0xc);
    }
    puStack_258 = (undefined *)((ulong)puStack_258 & 0xffffffffffffff00);
    uStack_248 = 0;
  }
  else {
    plVar2 = &lStack_240;
    func_0x00010b99f828();
    lVar7 = *plVar2;
    if (lVar7 == 0) {
      ppuVar8 = (undefined **)0x0;
      puVar5 = &UNK_10f7d0ef0;
    }
    else {
      puVar5 = (undefined *)(lVar7 + 0x18);
      ppuVar8 = (undefined **)(ulong)*(uint *)(lVar7 + 0xc);
    }
    plVar2 = &lStack_240;
    func_0x00010b99f83c();
    if (*plVar2 == 0) {
      func_0x00010b902e50();
      uStack_250 = extraout_x8_03;
      puStack_258 = extraout_x9_00;
    }
    else {
      func_0x00010b902e5c();
      uStack_250 = extraout_x8_02;
      puStack_258 = extraout_x9;
    }
    uStack_248 = 1;
  }
  func_0x00010b8dbdd8(auStack_238,plVar4,puVar5,ppuVar8,&puStack_258,puVar6);
  func_0x0001080df8d0(extraout_x8_00,auStack_238);
  func_0x0001080e0bc0(auStack_238);
  if (((lStack_240 != 0) && (*(int *)(lStack_240 + 0x28) != 0)) &&
     ((*(byte *)((long)puVar6 + 8) & 1) != 0)) {
    puStack_258 = &UNK_10f7ccbea;
    uStack_250 = 4;
    FUN_10b8dba18(auStack_238,plVar4);
    ppuVar8 = &puStack_258;
    func_0x00010b902de4(*(undefined8 *)(*plVar4 + 0xf0),plVar4,extraout_x8_00 + 8,ppuVar8,
                        auStack_230);
    func_0x0001080e0bc0(auStack_238);
  }
  func_0x000104bda960(lStack_240);
  func_0x00010b902bc4(uStack_218);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_10b9a3a64(auStack_2c0,ppuVar8);
    func_0x00010b902c60(&lStack_2a8);
    FUN_10b900758();
    if ((lStack_2a8 != 0) && (*(long *)(lStack_2a8 + 0x10) != 0)) {
      do {
        func_0x00010b902d34();
      } while (extraout_w10 != 0);
    }
    *extraout_x8_04 = lStack_2a8;
    func_0x00010b902ab0();
    FUN_10b9a3d64(auStack_2b8);
    return;
  }
  return;
}



/* Entry: 10b900758; end: 10b9007a3;  */

void FUN_10b900758(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long lStack_80;
  long lStack_78;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b902c00();
  uStack_28 = extraout_x8;
  FUN_10b9028ac(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010b902bc4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b9006d8(&lStack_78);
    if ((lStack_78 != 0) && (*(long *)(lStack_78 + 0x10) != 0)) {
      do {
        func_0x00010b902d34();
      } while (extraout_w10 != 0);
    }
    lStack_80 = lStack_78;
    (**(code **)(*param_2 + 0xb0))(extraout_x8_00,param_2,&lStack_80,param_5);
    if (lStack_80 != 0) {
      func_0x00010b902bf4();
    }
    func_0x000104bddf04(lStack_78);
    return;
  }
  return;
}



/* Entry: 10b9007a4; end: 10b900a7f;  */

void FUN_10b9007a4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int extraout_w10;
  long lStack_40;
  long lStack_38;
  
  func_0x00010b9006d8(&lStack_38);
  if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
    do {
      func_0x00010b902d34();
    } while (extraout_w10 != 0);
  }
  lStack_40 = lStack_38;
  (**(code **)(*param_2 + 0xb0))(param_1,param_2,&lStack_40,param_5);
  if (lStack_40 != 0) {
    func_0x00010b902bf4();
  }
  func_0x000104bddf04(lStack_38);
  return;
}



/* Entry: 10b900a80; end: 10b900bcf;  */

double *****
FUN_10b900a80(double ****param_1,double *****param_2,double *****param_3,double *****param_4,
             double *****param_5,double *****param_6)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined1 uVar6;
  double *****pppppdVar7;
  double *****pppppdVar8;
  int iVar9;
  double *****pppppdVar10;
  double *****pppppdVar11;
  double *****pppppdVar12;
  double *****pppppdVar13;
  long *plVar14;
  undefined8 extraout_x8;
  double ****ppppdVar15;
  double *****extraout_x8_00;
  long extraout_x8_01;
  double *****pppppdVar16;
  long *extraout_x8_02;
  double *****extraout_x8_03;
  undefined8 extraout_x8_04;
  long *extraout_x8_05;
  undefined8 extraout_x8_06;
  double *****extraout_x8_07;
  double *****extraout_x8_08;
  double *****extraout_x8_09;
  double *****extraout_x8_10;
  double *****extraout_x8_11;
  undefined8 extraout_x8_12;
  undefined8 extraout_x8_13;
  undefined8 *extraout_x8_14;
  undefined8 extraout_x8_15;
  undefined8 extraout_x8_16;
  undefined8 extraout_x8_17;
  undefined8 extraout_x8_18;
  undefined8 uVar17;
  undefined8 extraout_x8_19;
  double ***pppdVar18;
  double *****extraout_x9;
  double *****extraout_x9_00;
  double *****extraout_x9_01;
  double *****extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  double *****pppppdVar19;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  double *****unaff_x20;
  double *****pppppdVar20;
  double *****pppppdVar21;
  double *****unaff_x25;
  double *****pppppdVar22;
  double *****pppppdVar23;
  double *****pppppdVar24;
  double *****pppppdVar25;
  undefined8 *****pppppuVar26;
  code *pcVar27;
  double ****in_register_00005008;
  undefined1 auStack_428 [8];
  double ****ppppdStack_420;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  double ****ppppdStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [24];
  double ***pppdStack_3d0;
  byte bStack_3c8;
  undefined8 uStack_2e8;
  double ****ppppdStack_2e0;
  double ****ppppdStack_2d8;
  double ****ppppdStack_2d0;
  double ****ppppdStack_2c8;
  double ****ppppdStack_2c0;
  undefined8 ****ppppuStack_2b0;
  code *pcStack_2a8;
  undefined4 uStack_298;
  double **appdStack_291 [2];
  char cStack_281;
  undefined1 auStack_280 [8];
  double **appdStack_278 [3];
  double ****ppppdStack_260;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [24];
  undefined8 uStack_238;
  double ****ppppdStack_230;
  double ****ppppdStack_228;
  double ****ppppdStack_220;
  double ****ppppdStack_218;
  double ****ppppdStack_210;
  double ****ppppdStack_208;
  double ****ppppdStack_200;
  long lStack_1f8;
  undefined8 ****ppppuStack_1f0;
  code *pcStack_1e8;
  double ****ppppdStack_1d8;
  double ****ppppdStack_1d0;
  double ****ppppdStack_1c8;
  double ****ppppdStack_1c0;
  double ****ppppdStack_1b8;
  char cStack_1b0;
  double ****ppppdStack_1a8;
  double ****ppppdStack_1a0;
  undefined1 uStack_198;
  double ****ppppdStack_190;
  double ***pppdStack_188;
  char cStack_180;
  double ****ppppdStack_170;
  double ***apppdStack_168 [3];
  long lStack_150;
  double ****ppppdStack_140;
  double ****ppppdStack_138;
  double ****ppppdStack_130;
  double ****ppppdStack_128;
  double ***pppdStack_120;
  double ****ppppdStack_118;
  double ****ppppdStack_110;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  double ***pppdStack_b0;
  double ***apppdStack_a8 [2];
  double ****ppppdStack_98;
  double ****ppppdStack_90;
  undefined1 auStack_88 [8];
  double ***apppdStack_80 [3];
  undefined8 uStack_68;
  
  func_0x00010b902e44();
  pppppdVar7 = param_2;
  func_0x00010b902c00();
  ppppdVar15 = *param_3;
  pppdVar18 = ppppdVar15[2];
  pppppdVar24 = (double *****)((long)pppdVar18[4] << 4);
  pppppdVar20 = (double *****)(pppdVar18 + 8);
  pppppdVar16 = (double *****)(ppppdVar15 + 5);
  ppppdStack_98 = (double ****)(pppdVar18 + 5);
  ppppdStack_90 = ppppdVar15 + 3;
  uStack_68 = extraout_x8;
  while( true ) {
    pppppdVar25 = pppppdVar16;
    pppppdVar22 = pppppdVar20;
    uVar6 = pppppdVar24 == (double *****)0x0;
    pppppdVar20 = (double *****)(ulong)(byte)uVar6;
    if (pppppdVar24 == (double *****)0x0) break;
    func_0x00010b9aca4c(&pppdStack_b0,&ppppdStack_98);
    func_0x00010b902e68();
    param_3 = (double *****)apppdStack_a8;
    param_4 = (double *****)&stack0xffffffffffffff20;
    param_5 = param_6;
    FUN_10b900bd0(auStack_88,param_2);
    uVar6 = *(char *)(param_6 + 1) == '\x01';
    if (!(bool)uVar6) {
      func_0x0001080e0bc0(auStack_88);
      pppppdVar7 = (double *****)&pppdStack_b0;
      FUN_10b902568();
      pppppdVar20 = (double *****)0x0;
      break;
    }
    if ((double ****)pppdStack_b0 == (double ****)0x0) {
      func_0x00010b902e50();
    }
    else {
      func_0x00010b902e5c();
    }
    param_5 = (double *****)apppdStack_80;
    param_3 = unaff_x20;
    param_4 = (double *****)&stack0xffffffffffffff20;
    func_0x00010b902de4((*param_2)[0x1e],param_2);
    bVar2 = *(byte *)(param_6 + 1);
    unaff_x25 = (double *****)(ulong)bVar2;
    func_0x0001080e0bc0(auStack_88);
    pppppdVar7 = (double *****)&pppdStack_b0;
    FUN_10b902568();
    uVar6 = bVar2 == 1;
    if (!(bool)uVar6) break;
    pppppdVar24 = pppppdVar24 + -2;
    pppppdVar20 = pppppdVar22 + 3;
    pppppdVar16 = pppppdVar25 + 2;
    ppppdStack_98 = (double ****)pppppdVar22;
    ppppdStack_90 = (double ****)pppppdVar25;
  }
  func_0x00010b902bc4(uStack_68);
  if ((bool)uVar6) {
    return pppppdVar20;
  }
  ___stack_chk_fail();
  pppppdVar11 = (double *****)0x0;
  pcStack_e8 = FUN_10b900bd0;
  pppppuVar26 = &ppppuStack_f0;
  ppppdStack_140 = (double ****)pppppdVar25;
  ppppdStack_138 = (double ****)pppppdVar24;
  ppppdStack_130 = (double ****)pppppdVar22;
  ppppdStack_128 = (double ****)unaff_x25;
  pppdStack_120 = (double ***)&pppdStack_b0;
  ppppdStack_118 = (double ****)pppppdVar20;
  ppppdStack_110 = (double ****)param_2;
  ppppuStack_f0 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x00010b902c00();
  pppppdVar16 = (double *****)(ulong)*(byte *)(param_3 + 1);
  pppppdVar20 = (double *****)&UNK_10e5f6953;
  pppppdVar19 = (double *****)((ulong)*(byte *)((long)pppppdVar16 + 0x10e5f6953) * 4 + 0x10b900c3c);
  pppppdVar8 = pppppdVar7;
  pppppdVar10 = param_3;
  pppppdVar12 = pppppdVar11;
  pppppdVar13 = param_4;
  pppppdVar21 = param_3;
  pppppdVar23 = pppppdVar22;
  lStack_150 = extraout_x8_01;
  ppppdStack_208 = (double ****)param_5;
  ppppdStack_200 = (double ****)pppppdVar7;
  switch(*(byte *)(param_3 + 1)) {
  case 0:
  case 0x12:
  case 0x13:
  case 0x3e:
  case 0x68:
  case 0xb7:
  case 0xd7:
    ppppdVar15 = pppppdVar7[0x24];
    pppppdVar7 = pppppdVar7 + 0x25;
    goto code_r0x00010b900e80;
  case 1:
    goto code_r0x00010b900e78;
  case 2:
  case 0x2e:
  case 0x35:
  case 0x3a:
  case 0x52:
  case 0x59:
  case 100:
  case 0x6b:
  case 0x7c:
  case 0xac:
  case 0xca:
  case 0xd0:
  case 0xd2:
  case 0xe4:
  case 0xee:
  case 0xf0:
    pppppdVar16 = &ppppdStack_170;
  case 0x9c:
code_r0x00010b900e14:
    FUN_10b9a9358(pppppdVar16);
    if ((double *****)ppppdStack_170 == (double *****)0x0) {
      func_0x00010b902e50();
      pppppdVar16 = extraout_x8_10;
      pppppdVar20 = extraout_x9_02;
    }
    else {
code_r0x00010b900e20:
      func_0x00010b902e5c();
      pppppdVar16 = extraout_x8_03;
      pppppdVar20 = extraout_x9;
code_r0x00010b900e24:
    }
    pppppdVar10 = &ppppdStack_1c0;
    ppppdStack_1c0 = (double ****)pppppdVar20;
    ppppdStack_1b8 = (double ****)pppppdVar16;
    func_0x00010b902c50();
    (*extraout_x9_03)();
    func_0x000107c278f8();
    pppppdVar8 = (double *****)ppppdStack_170;
    break;
  case 3:
    pppppdVar10 = (double *****)*param_3;
    func_0x00010b902bc4(extraout_x8_01);
    if ((bool)uVar6) {
      func_0x00010b902c50();
      ppppuVar5 = ppppuStack_f0;
      pcVar27 = pcStack_e8;
      func_0x00010b902cf0();
      ppppuStack_1f0 = ppppuVar5;
      ppppdStack_210 = (double ****)param_4;
      pcStack_1e8 = pcVar27;
      if (*(int *)(pppppdVar10 + 3) == 2) {
        pppppdVar7 = pppppdVar10;
        FUN_10b9a5b88();
        ppppdStack_220 = (double ****)pppppdVar10;
        ppppdStack_218 = (double ****)pppppdVar7;
      }
      else {
        if (*(int *)(pppppdVar10 + 3) == 1) {
          ppppdStack_220 = (double ****)(pppppdVar10 + 4);
          ppppdStack_218 = pppppdVar10[2];
          pppdVar18 = (*pppppdVar8)[0x10];
          goto LAB_10b8dbac4;
        }
        ppppdStack_220 = (double ****)(pppppdVar10 + 4);
        ppppdStack_218 = pppppdVar10[2];
      }
      pppdVar18 = (*pppppdVar8)[0xf];
LAB_10b8dbac4:
      (*(code *)pppdVar18)(extraout_x8_04,pppppdVar8,&ppppdStack_220,pppppdVar12);
      return pppppdVar8;
    }
    goto code_r0x00010b9012dc;
  case 4:
    pppppdVar8 = param_3;
  case 0x1c:
    FUN_10b9a9518();
    func_0x00010b902bc4(lStack_150);
    if ((bool)uVar6) {
      pppppdVar7 = pppppdVar8;
      func_0x00010b902c8c();
      iVar9 = (int)pppppdVar7;
      func_0x00010b902cf0();
      if (iVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*pppppdVar8)[0x46])();
        return pppppdVar8;
      }
      ppppdVar15 = pppppdVar8[0x20];
      plVar14 = extraout_x8_02;
LAB_10b8dddf4:
      *plVar14 = (long)ppppdVar15;
      ppppdVar15 = pppppdVar8[0x21];
      plVar14[2] = (long)pppppdVar8[0x22];
      plVar14[1] = (long)ppppdVar15;
      *(undefined1 *)(plVar14 + 3) = 0;
      return pppppdVar8;
    }
    goto code_r0x00010b9012dc;
  case 5:
    pppppdVar8 = param_3;
    FUN_10b9a9588();
    func_0x00010b902bc4(lStack_150);
    if ((bool)uVar6) {
      pppppdVar7 = pppppdVar8;
      func_0x00010b902c50();
      ppppuVar5 = ppppuStack_f0;
      pcVar27 = pcStack_e8;
      func_0x00010b902cf0();
      ppppuStack_1f0 = ppppuVar5;
      ppppdStack_200 = (double ****)pppppdVar7;
      pcStack_1e8 = pcVar27;
      if (pppppdVar7 == (double *****)(long)(char)pppppdVar7) {
        lStack_1f8 = (ulong)lStack_1f8._1_7_ << 8;
        func_0x00010b8dc0b4();
      }
      else {
        lStack_1f8 = (ulong)lStack_1f8._1_7_ << 8;
        func_0x00010b8de1cc();
      }
      return pppppdVar8;
    }
    goto code_r0x00010b9012dc;
  case 6:
    pppppdVar8 = param_3;
    FUN_10b9a92f0();
    func_0x00010b902bc4(lStack_150);
    if ((bool)uVar6) {
      func_0x00010b902c8c();
      func_0x00010b902cf0();
      if ((double)param_1 != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*pppppdVar8)[0x47])();
        return pppppdVar8;
      }
      ppppdVar15 = pppppdVar8[0x20];
      plVar14 = extraout_x8_05;
      goto LAB_10b8dddf4;
    }
    goto code_r0x00010b9012dc;
  case 7:
    pppppdVar8 = param_3;
  case 0x14:
    FUN_10b9a9608();
    uVar6 = (int)pppppdVar8 == 0;
    lVar1 = 0xc0;
    if ((bool)uVar6) {
      lVar1 = 0xe0;
    }
    pppppdVar20 = (double *****)0xe8;
    pppppdVar19 = (double *****)0xc8;
    pppppdVar16 = *(double ******)((long)pppppdVar7 + lVar1);
code_r0x00010b900edc:
    if ((bool)uVar6) {
      pppppdVar19 = pppppdVar20;
    }
    ppppdVar15 = *(double *****)((long)pppppdVar7 + (long)pppppdVar19);
    extraout_x8_00[2] = (double ****)((long *)((long)pppppdVar7 + (long)pppppdVar19))[1];
    extraout_x8_00[1] = ppppdVar15;
code_r0x00010b900ee8:
    *extraout_x8_00 = (double ****)pppppdVar16;
code_r0x00010b900eec:
    *(undefined1 *)(extraout_x8_00 + 3) = 0;
    break;
  case 8:
    unaff_x25 = (double *****)*param_3;
    pppppdVar21 = &ppppdStack_170;
    func_0x00010b902dcc(&ppppdStack_170);
    pppppdVar10 = param_3;
    if (((ulong)param_5[1] & 1) != 0) {
      pppppdVar20 = unaff_x25 + 2;
      func_0x00010527d444();
      unaff_x25 = (double *****)((long)unaff_x25[2] + (long)unaff_x25[5]);
      pppppdVar22 = &ppppdStack_190;
      pppppdVar24 = (double *****)0x2;
      ppppdStack_1d0 = (double ****)pppppdVar20;
      ppppdStack_1c8 = (double ****)param_3;
      while (uVar6 = (double *****)ppppdStack_1d0 == unaff_x25, !(bool)uVar6) {
        ppppdStack_1b8 = (double ****)0x0;
        cStack_1b0 = (char)pppppdVar24;
        ppppdStack_1a8 = ppppdStack_1c8;
        ppppdStack_1a0 = (double ****)0x0;
        pppppdVar25 = (double *****)ppppdStack_1c8;
        ppppdStack_1c0 = (double ****)param_4;
code_r0x00010b901014:
        uStack_198 = 0;
        pppppdVar10 = pppppdVar25 + 1;
        pppppdVar13 = &ppppdStack_1c0;
        func_0x00010b902dd8(&ppppdStack_190,pppppdVar7);
        uVar6 = *(char *)(param_5 + 1) == '\x01';
        if (!(bool)uVar6) {
code_r0x00010b901184:
          func_0x00010b902bd8();
          func_0x00010b902e34();
          goto code_r0x00010b90118c;
        }
        if (*pppppdVar25 == (double ****)0x0) {
          func_0x00010b902e50();
          ppppdStack_1b8 = (double ****)extraout_x8_08;
          ppppdStack_1c0 = (double ****)extraout_x9_01;
        }
        else {
          func_0x00010b902e5c();
          ppppdStack_1b8 = (double ****)extraout_x8_07;
          ppppdStack_1c0 = (double ****)extraout_x9_00;
        }
        pppppdVar10 = pppppdVar21 + 1;
        pppppdVar12 = &ppppdStack_1c0;
        pppppdVar13 = pppppdVar22 + 1;
        (*(code *)(*pppppdVar7)[0x1e])(pppppdVar7);
        uVar6 = *(char *)(param_5 + 1) == '\x01';
        if (!(bool)uVar6) goto code_r0x00010b901184;
        func_0x00010b902e34();
        func_0x00010527d4cc(&ppppdStack_1d0);
      }
      goto code_r0x00010b9010ac;
    }
code_r0x00010b901094:
    func_0x00010b902bd8();
    goto code_r0x00010b90118c;
  case 9:
  case 0xa5:
  case 0xe0:
    pppppdVar22 = (double *****)*param_3;
    pppppdVar10 = (double *****)pppppdVar22[2];
    pppppdVar12 = param_5;
    (*(code *)(*pppppdVar7)[0x11])(&ppppdStack_170,pppppdVar7);
    if (((ulong)param_5[1] & 1) == 0) goto code_r0x00010b901094;
  case 0x2f:
    unaff_x25 = (double *****)0x0;
    pppppdVar21 = pppppdVar22 + 3;
code_r0x00010b900d50:
    ppppdStack_1d8 = (double ****)(pppppdVar7 + 0x29);
    pppppdVar23 = (double *****)((long)pppppdVar22[2] << 4);
code_r0x00010b900d60:
    while (pppppdVar22 = (double *****)0x0, pppppdVar23 != (double *****)0x0) {
code_r0x00010b900d64:
      ppppdStack_1b8 = (double ****)0x0;
      cStack_1b0 = '\x05';
      ppppdStack_1a8 = (double ****)0x0;
      ppppdStack_1c0 = (double ****)param_4;
      ppppdStack_1a0 = (double ****)unaff_x25;
code_r0x00010b900d74:
      uStack_198 = 0;
code_r0x00010b900d78:
      pppppdVar16 = &ppppdStack_190;
code_r0x00010b900d7c:
      pppppdVar13 = &ppppdStack_1c0;
code_r0x00010b900d84:
code_r0x00010b900d88:
      param_3 = pppppdVar21;
      func_0x00010b902dd8(pppppdVar16);
      uVar6 = *(char *)(param_5 + 1) == '\x01';
code_r0x00010b900d94:
      if ((bool)uVar6) {
code_r0x00010b900d98:
        pppppdVar24 = (double *****)((long)unaff_x25 + 1);
        pppppdVar16 = (double *****)(*pppppdVar7)[0x21];
        param_3 = (double *****)apppdStack_168;
        pppppdVar13 = (double *****)&pppdStack_188;
code_r0x00010b900db8:
        pppppdVar12 = unaff_x25;
code_r0x00010b900dc0:
        (*(code *)pppppdVar16)();
code_r0x00010b900dc4:
        pppppdVar16 = (double *****)(ulong)*(byte *)(param_5 + 1);
code_r0x00010b900dc8:
        unaff_x25 = pppppdVar24;
        pppppdVar24 = unaff_x25;
        if (((ulong)pppppdVar16 & 1) == 0) goto code_r0x00010b900dd8;
code_r0x00010b900dcc:
        pppppdVar25 = (double *****)0x1;
code_r0x00010b900dd0:
      }
      else {
code_r0x00010b900dd4:
code_r0x00010b900dd8:
        pppppdVar25 = (double *****)0x0;
        pppppdVar24 = unaff_x25;
code_r0x00010b900ddc:
        pppppdVar16 = (double *****)pppppdVar7[0x28];
code_r0x00010b900de0:
        *extraout_x8_00 = (double ****)pppppdVar16;
code_r0x00010b900de4:
        in_register_00005008 = (double ****)ppppdStack_1d8[1];
        param_1 = (double ****)*ppppdStack_1d8;
code_r0x00010b900dec:
        extraout_x8_00[2] = in_register_00005008;
        extraout_x8_00[1] = param_1;
code_r0x00010b900df0:
        *(undefined1 *)(extraout_x8_00 + 3) = 0;
      }
code_r0x00010b900df4:
      func_0x00010b902e34();
code_r0x00010b900df8:
      pppppdVar21 = pppppdVar21 + 2;
code_r0x00010b900dfc:
      unaff_x25 = pppppdVar24;
      pppppdVar22 = pppppdVar23 + -2;
      pppppdVar10 = param_3;
      pppppdVar24 = unaff_x25;
code_r0x00010b900e04:
      if (((ulong)pppppdVar25 & 1) == 0) goto code_r0x00010b90118c;
code_r0x00010b900e08:
      pppppdVar23 = pppppdVar22;
    }
code_r0x00010b9010ac:
    pppppdVar10 = &ppppdStack_170;
    func_0x0001080e08ac(extraout_x8_00);
code_r0x00010b90118c:
    pppppdVar8 = &ppppdStack_170;
    func_0x0001080e0bc0();
    param_3 = pppppdVar21;
    break;
  case 10:
    pppppdVar10 = (double *****)(ulong)*(uint *)(*param_3 + 2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != extraout_x8_01) goto code_r0x00010b9012dc;
    pppppdVar12 = (double *****)(*param_3 + 3);
    func_0x00010b902c8c();
    pppppuVar26 = (undefined8 *****)ppppuStack_f0;
    pppppdVar13 = param_5;
    pcVar27 = pcStack_e8;
    func_0x00010b902cf0();
    uVar17 = extraout_x8_06;
    goto code_r0x00010b9012e0;
  case 0xb:
    func_0x00010b9a9710(&ppppdStack_1d0,param_3);
    pppppdVar12 = (double *****)0x0;
    pppppdVar10 = (double *****)ppppdStack_1d0;
    pppppdVar13 = param_5;
    func_0x00010b9009e0(&ppppdStack_190,pppppdVar7);
    if (((ulong)param_5[1] & 1) == 0) {
      func_0x00010b902bd8();
    }
    else {
      uVar6 = cStack_180 == '\x01';
      if ((bool)uVar6) {
        pppppdVar10 = &ppppdStack_190;
        func_0x00010b902c8c();
        func_0x0001080e07a8();
      }
      else {
        cStack_1b0 = *(char *)(param_4 + 2);
        ppppdStack_1a8 = param_4[3];
        ppppdStack_1a0 = param_4[4];
        ppppdStack_1b8 = param_4[1];
        ppppdStack_1c0 = *param_4;
        uStack_198 = 1;
        FUN_10b9a3a64(&ppppdStack_170,&ppppdStack_1c0);
        param_4 = (double *****)0x50;
        __Znwm();
        pppppdVar12 = &ppppdStack_170;
        FUN_10b8ded74();
        FUN_10b9a3d64(apppdStack_168);
        pppppdVar11 = param_4 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppdVar11,0x10);
          if (bVar4) {
            *pppppdVar11 = (double ****)((long)*pppppdVar11 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pppppdVar10 = &ppppdStack_1c0;
        ppppdStack_1c0 = (double ****)param_4;
        func_0x00010b902c50();
        (*extraout_x9_04)();
        func_0x0001080e0c4c(ppppdStack_1c0);
        do {
          uVar6 = (double ****)((long)*pppppdVar11 + -1) == (double ****)0x0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppdVar11,0x10);
          if (bVar4) {
            *pppppdVar11 = (double ****)((long)*pppppdVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((bool)uVar6) {
          (*(code *)(*param_4)[1])(param_4);
        }
      }
    }
    pppppdVar8 = (double *****)ppppdStack_1d0;
    func_0x000104bda3ac();
    break;
  case 0xc:
    FUN_10b9a9488(&ppppdStack_1c0,param_3);
    pppppdVar10 = &ppppdStack_1c0;
  case 0x28:
  case 0x71:
code_r0x00010b900d00:
    FUN_10b99ff08();
code_r0x00010b900d04:
code_r0x00010b900d08:
    func_0x000104bda960();
    param_1 = (double ****)0x0;
    in_register_00005008 = (double ****)0x0;
code_r0x00010b900d10:
    extraout_x8_00[1] = in_register_00005008;
    *extraout_x8_00 = param_1;
    extraout_x8_00[3] = in_register_00005008;
    extraout_x8_00[2] = param_1;
    pppppdVar8 = extraout_x8_00;
code_r0x00010b900d18:
    func_0x0001080e0180();
    break;
  case 0xd:
    func_0x00010b9a97d0(&ppppdStack_170,param_3);
    ppppdVar15 = pppppdVar7[0x40];
    if (ppppdVar15 == (double ****)0x0) {
      pppppdVar11 = &ppppdStack_1c0;
      func_0x00010b902dcc(&ppppdStack_1c0);
      if (((ulong)param_5[1] & 1) == 0) {
code_r0x00010b9011ac:
        func_0x00010b902bd8();
      }
      else {
        pppppdVar10 = &ppppdStack_170;
        pppppdVar13 = &ppppdStack_1b8;
        func_0x00010b902d44();
        if (((ulong)ppppdVar15 & 1) == 0) goto code_r0x00010b9011ac;
        func_0x00010b902cbc();
      }
      func_0x00010b902e1c();
    }
    else {
      pppppdVar10 = &ppppdStack_170;
      pppppdVar12 = param_4;
      pppppdVar13 = param_5;
      func_0x00010b906ebc(extraout_x8_00);
    }
    func_0x000104bdbfa0();
    pppppdVar8 = (double *****)ppppdStack_170;
    break;
  case 0xe:
    func_0x00010b9a9810(&ppppdStack_190,param_3);
    if (pppppdVar7[0x40] != (double ****)0x0) {
      pppppdVar10 = &ppppdStack_190;
      pppppdVar12 = param_4;
      pppppdVar16 = extraout_x8_00;
      goto code_r0x00010b900c68;
    }
    ppppdStack_170 = ppppdStack_190;
    if (((double *****)ppppdStack_190 != (double *****)0x0) &&
       ((double ****)ppppdStack_190[2] != (double ****)0x0)) {
      do {
        func_0x00010b902dbc();
        ppppdStack_170 = (double ****)extraout_x8_09;
      } while (extraout_w11 != 0);
    }
    pppppdVar10 = &ppppdStack_170;
    pppppdVar13 = (double *****)0x1;
    pppppdVar12 = param_5;
    func_0x00010b900824(&ppppdStack_1c0,pppppdVar7);
    pppppdVar7 = (double *****)ppppdStack_170;
    if ((double *****)ppppdStack_170 != (double *****)0x0) {
      func_0x00010b902bf4();
      pppppdVar7 = (double *****)ppppdStack_170;
    }
    if (((ulong)param_5[1] & 1) == 0) {
code_r0x00010b901198:
      func_0x00010b902bd8();
    }
    else {
      pppppdVar10 = (double *****)(ppppdStack_190 + 4);
      pppppdVar13 = &ppppdStack_1b8;
      func_0x00010b902d44();
      if (((ulong)pppppdVar7 & 1) == 0) goto code_r0x00010b901198;
      func_0x00010b902cbc();
    }
    func_0x00010b902e1c();
    goto code_r0x00010b9011a0;
  case 0xf:
    FUN_10b9a94ec(&ppppdStack_170,param_3);
    pppppdVar16 = &ppppdStack_1c0;
    pppppdVar10 = (double *****)ppppdStack_170;
  case 0x16:
    pppppdVar13 = param_5;
    func_0x00010b9009e0(pppppdVar16,pppppdVar7);
    func_0x000104bddf04();
    pppppdVar8 = (double *****)ppppdStack_170;
    if (((ulong)param_5[1] & 1) != 0) {
code_r0x00010b900e5c:
      uVar6 = cStack_1b0 == '\x01';
      if ((bool)uVar6) {
        pppppdVar10 = &ppppdStack_1c0;
        func_0x00010b902c8c();
        func_0x0001080e07a8();
      }
      else {
        FUN_10b9a94ec(&ppppdStack_190,param_3);
        ppppdStack_170 = ppppdStack_190;
        if (((double *****)ppppdStack_190 != (double *****)0x0) &&
           ((double ****)ppppdStack_190[2] != (double ****)0x0)) {
          do {
            func_0x00010b902dbc();
            ppppdStack_170 = (double ****)extraout_x8_11;
          } while (extraout_w11_00 != 0);
        }
        pppppdVar10 = &ppppdStack_170;
        func_0x00010b902c50();
        pppppdVar13 = (double *****)0x1;
        func_0x00010b900824();
        if ((double *****)ppppdStack_170 != (double *****)0x0) {
          func_0x00010b902bf4();
        }
        func_0x000104bddf04();
        pppppdVar8 = (double *****)ppppdStack_190;
      }
      break;
    }
code_r0x00010b900e78:
    ppppdVar15 = pppppdVar7[0x28];
    pppppdVar7 = pppppdVar7 + 0x29;
code_r0x00010b900e80:
    *extraout_x8_00 = ppppdVar15;
    in_register_00005008 = pppppdVar7[1];
    param_1 = *pppppdVar7;
code_r0x00010b900e88:
    extraout_x8_00[2] = in_register_00005008;
    extraout_x8_00[1] = param_1;
    goto code_r0x00010b900eec;
  case 0x10:
    goto code_r0x00010b900edc;
  case 0x11:
  case 0x30:
  case 0x3b:
  case 0x55:
  case 0x65:
  case 0xa9:
  case 0xad:
  case 0xd3:
  case 0xe6:
  case 0xf1:
    goto code_r0x00010b900df8;
  case 0x15:
    goto code_r0x00010b900e24;
  case 0x17:
  case 0x34:
  case 0x3c:
  case 0x4f:
  case 0x54:
  case 0x58:
  case 0x66:
  case 0x77:
  case 0x7d:
  case 0x91:
  case 0xae:
  case 199:
  case 0xd4:
  case 0xe7:
  case 0xf2:
    goto code_r0x00010b900e04;
  case 0x18:
    goto code_r0x00010b900e88;
  case 0x19:
  case 0x47:
  case 0x6f:
  case 0x8e:
  case 0xc0:
  case 0xdf:
    goto code_r0x00010b900d00;
  case 0x1a:
    goto code_r0x00010b900e5c;
  case 0x1b:
code_r0x00010b900c68:
    pppppdVar13 = param_5;
    func_0x00010b906f98(pppppdVar16);
code_r0x00010b9011a0:
    func_0x000104be7e7c();
    pppppdVar8 = (double *****)ppppdStack_190;
    break;
  case 0x1d:
  case 0x1e:
    goto code_r0x00010b901014;
  case 0x1f:
    goto code_r0x00010b900ee8;
  case 0x20:
  case 0x3f:
  case 0x5b:
  case 0x69:
  case 0x87:
  case 0xa2:
  case 0xb8:
  case 0xd8:
  case 0xf5:
  case 0xff:
    goto code_r0x00010b900d74;
  case 0x21:
  case 0x40:
  case 0x88:
  case 0xb9:
  case 0xd9:
  case 0xf8:
    goto code_r0x00010b900d10;
  case 0x22:
  case 0x36:
  case 0x41:
  case 0x60:
  case 0x89:
  case 0x99:
  case 0xba:
  case 0xda:
    goto code_r0x00010b900d94;
  default:
    goto code_r0x00010b900dc0;
  case 0x24:
  case 0x43:
  case 0x82:
  case 0x8b:
  case 0x9b:
  case 0xa7:
  case 0xa8:
  case 0xbc:
  case 0xdc:
  case 0xe2:
    goto code_r0x00010b900dec;
  case 0x25:
  case 0x44:
  case 0x79:
  case 0x8c:
  case 0x96:
  case 0xbd:
  case 0xdd:
    goto code_r0x00010b900dcc;
  case 0x26:
  case 0x37:
  case 0x39:
  case 0x45:
  case 0x50:
  case 0x61:
  case 99:
  case 0x8d:
  case 0xbe:
  case 200:
  case 0xde:
    goto code_r0x00010b900de0;
  case 0x27:
  case 0x70:
  case 0xb1:
  case 0xbf:
    goto code_r0x00010b900d04;
  case 0x29:
  case 0xcb:
  case 0xe9:
    goto code_r0x00010b900d78;
  case 0x2a:
  case 0xcc:
  case 0xea:
    goto code_r0x00010b900dc4;
  case 0x2b:
  case 0xcd:
  case 0xeb:
    goto code_r0x00010b900de4;
  case 0x2c:
  case 0x33:
  case 0x57:
  case 0x5e:
  case 0x78:
  case 0x7f:
  case 0x85:
  case 0x95:
  case 0x9d:
  case 0x9f:
  case 0xce:
  case 0xd5:
  case 0xec:
  case 0xf3:
  case 0xfc:
    goto code_r0x00010b900dd0;
  case 0x2d:
  case 0x4e:
  case 0x84:
  case 0xaa:
  case 0xc6:
  case 0xcf:
  case 0xed:
    goto code_r0x00010b900dc8;
  case 0x31:
    goto code_r0x00010b900df4;
  case 0x32:
  case 0x4b:
  case 0xc3:
    goto code_r0x00010b900e14;
  case 0x38:
  case 0x5f:
  case 0x62:
  case 0x74:
    goto code_r0x00010b900e08;
  case 0x3d:
  case 0x67:
  case 0xa1:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xd6:
    goto code_r0x00010b900d50;
  case 0x46:
  case 0x6c:
    goto code_r0x00010b900d08;
  case 0x48:
  case 0x86:
  case 0xaf:
  case 0xf4:
  case 0xfe:
    goto code_r0x00010b900d60;
  case 0x49:
  case 0x97:
  case 0xc1:
  case 0xf9:
    goto code_r0x00010b900d64;
  case 0x4d:
  case 0x6a:
  case 0x98:
  case 0xa3:
  case 0xb0:
  case 0xc5:
  case 0xd1:
  case 0xef:
  case 0xf6:
  case 0xfa:
    goto code_r0x00010b900d88;
  case 0x51:
  case 0x56:
  case 0x7b:
  case 0x81:
  case 0x93:
  case 0x94:
  case 0xc9:
    goto code_r0x00010b900dfc;
  case 0x53:
  case 0xe1:
    goto code_r0x00010b900d7c;
  case 0x5a:
    goto code_r0x00010b900e20;
  case 0x5d:
  case 0x80:
  case 0xe8:
    goto code_r0x00010b900df0;
  case 0x6d:
  case 0x6e:
  case 0x72:
  case 0x73:
  case 0x7a:
  case 0x7e:
  case 0xa4:
  case 0xb2:
  case 0xf7:
    goto code_r0x00010b900db8;
  case 0x75:
    goto code_r0x00010b900ddc;
  case 0x8f:
    goto code_r0x00010b900d18;
  case 0x90:
    goto code_r0x00010b900d98;
  case 0x9e:
  case 0xfb:
    goto code_r0x00010b900d84;
  case 0xa0:
  case 0xe5:
  case 0xfd:
    goto code_r0x00010b900dd4;
  }
  func_0x00010b902bc4(lStack_150);
  if ((bool)uVar6) {
    func_0x00010b902cf0();
    return pppppdVar8;
  }
code_r0x00010b9012dc:
  pcVar27 = FUN_10b9012e0;
  ___stack_chk_fail();
  uVar17 = extraout_x8_12;
code_r0x00010b9012e0:
  pppppdVar7 = pppppdVar10;
  ppppdStack_230 = (double ****)pppppdVar22;
  ppppdStack_228 = (double ****)unaff_x25;
  ppppdStack_220 = (double ****)param_3;
  ppppdStack_218 = (double ****)pppppdVar11;
  ppppdStack_210 = (double ****)param_4;
  ppppuStack_1f0 = pppppuVar26;
  pcStack_1e8 = pcVar27;
  func_0x00010b902c00();
  uStack_298 = SUB84(pppppdVar7,0);
  uStack_238 = extraout_x8_13;
  func_0x0001080e0180(auStack_280);
  ppppdVar15 = *pppppdVar12;
  pppppdVar7 = pppppdVar8;
  func_0x00010b9009e0(appdStack_291,pppppdVar8,ppppdVar15,0,pppppdVar13);
  uVar6 = cStack_281 == '\x01';
  if ((bool)uVar6) {
    ppppdVar15 = (double ****)appdStack_291;
    pppppdVar7 = pppppdVar8;
    func_0x0001080e07a8(auStack_258,pppppdVar8,ppppdVar15);
    func_0x00010b902e10();
    func_0x00010b902d74();
    goto LAB_10b901360;
  }
  if (((ulong)pppppdVar13[1] & 1) == 0) {
LAB_10b901428:
    func_0x00010b902cbc();
  }
  else {
    func_0x00010b902d0c();
    func_0x00010b902e10();
    func_0x00010b902d74();
    if (((ulong)pppppdVar13[1] & 1) == 0) goto LAB_10b901428;
    if ((pppppdVar12[2] != (double ****)0x0) && (*pppppdVar12 != (double ****)0x0)) {
      func_0x00010b902d0c();
      uVar6 = *(char *)(pppppdVar13 + 1) == '\x01';
      if ((bool)uVar6) {
        FUN_10b901de4();
        pppppdVar20 = pppppdVar8;
        func_0x00010b8dc614(pppppdVar8,pppppdVar7);
        ppppdVar15 = (double ****)appdStack_278;
        pppppdVar7 = pppppdVar8;
        ppppdStack_260 = (double ****)pppppdVar20;
        (*(code *)(*pppppdVar8)[0x1f])
                  (pppppdVar8,ppppdVar15,&ppppdStack_260,auStack_250,1,pppppdVar13);
      }
      func_0x00010b902d74();
      if (((ulong)pppppdVar13[1] & 1) == 0) goto LAB_10b901428;
    }
LAB_10b901360:
    uVar6 = (int)pppppdVar10 == 9;
    if ((bool)uVar6) goto LAB_10b901428;
    ppppdVar15 = (double ****)&uStack_298;
    pppppdVar7 = pppppdVar8;
    (*(code *)(*pppppdVar8)[0x15])(uVar17,pppppdVar8,ppppdVar15,appdStack_278,pppppdVar13);
  }
  func_0x00010b902e1c();
  func_0x00010b902bc4(uStack_238);
  if ((bool)uVar6) {
    return pppppdVar7;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_10b90145c;
  ppppdStack_2e0 = (double ****)pppppdVar25;
  ppppdStack_2d8 = (double ****)pppppdVar24;
  ppppdStack_2d0 = (double ****)pppppdVar10;
  ppppdStack_2c8 = (double ****)pppppdVar8;
  ppppdStack_2c0 = (double ****)pppppdVar13;
  ppppuStack_2b0 = &ppppuStack_1f0;
  func_0x00010b902c00();
  uStack_2e8 = extraout_x8_15;
  if ((bRam00000001138467a8 & 1) == 0) {
    iVar9 = 0x138467a8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107c31088(0x1138467a0,&UNK_10f7ccc15);
      ___cxa_guard_release(0x1138467a8);
    }
  }
  if ((bRam00000001138467b8 & 1) == 0) {
    iVar9 = 0x138467b8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107c31088(0x1138467b0,&UNK_10f7ccc1a);
      ___cxa_guard_release(0x1138467b8);
    }
  }
  if ((bRam00000001138467c8 & 1) == 0) {
    iVar9 = 0x138467c8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107c31088(0x1138467c0,&UNK_10f7ccc21);
      ___cxa_guard_release(0x1138467c8);
    }
  }
  if ((bRam00000001138467d8 & 1) == 0) {
    iVar9 = 0x138467d8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107c31088(0x1138467d0,&UNK_10f7ccc2e);
      ___cxa_guard_release(0x1138467d8);
    }
  }
  func_0x00010b8ffd54(&pppdStack_3d0,pppppdVar7);
  pppppdVar20 = pppppdVar7;
  func_0x00010b8dc614(pppppdVar7,0x1138467a0);
  pppppdVar24 = (double *****)&pppdStack_3d0;
  ppppdStack_3f8 = (double ****)pppppdVar20;
  (*(code *)(*pppppdVar7)[0x1b])(auStack_3f0,pppppdVar7,ppppdVar15,&ppppdStack_3f8,pppppdVar24);
  uVar6 = bStack_3c8 == 1;
  if ((bool)uVar6) {
    pppppdVar20 = pppppdVar7;
    (*(code *)(*pppppdVar7)[0x30])(pppppdVar7,auStack_3e8);
    if ((int)pppppdVar20 == 0) {
      (*(code *)(*pppppdVar7)[0x26])(&ppppdStack_3f8,pppppdVar7,auStack_3e8,&pppdStack_3d0);
      if ((bStack_3c8 & 1) == 0) {
        func_0x00010b902d8c();
        bStack_3c8 = 1;
        uVar17 = 0;
        if (lRam00000001138467b0 != 0) {
          do {
            func_0x00010b902cd4();
            uVar17 = extraout_x8_17;
          } while (extraout_w11_02 != 0);
        }
LAB_10b9015f4:
        *extraout_x8_14 = uVar17;
      }
      else {
        if (((double *****)ppppdStack_3f8 == (double *****)0x0) ||
           (*(int *)((long)ppppdStack_3f8 + 0xc) == 0)) {
          uVar17 = 0;
          if (lRam00000001138467b0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar17 = extraout_x8_18;
            } while (extraout_w11_03 != 0);
          }
          goto LAB_10b9015f4;
        }
        uVar6 = (double *****)ppppdStack_3f8 == pppppdRam00000001138467d0;
        if ((bool)uVar6) {
          uVar17 = 0;
          if (lRam00000001138467c0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar17 = extraout_x8_19;
            } while (extraout_w11_04 != 0);
          }
          goto LAB_10b9015f4;
        }
        *extraout_x8_14 = ppppdStack_3f8;
        ppppdStack_3f8 = (double ****)0x0;
      }
      func_0x000107c278f8(ppppdStack_3f8);
      goto LAB_10b901600;
    }
    if ((bStack_3c8 & 1) == 0) goto LAB_10b901538;
  }
  else {
LAB_10b901538:
    func_0x00010b902d8c();
    bStack_3c8 = 1;
  }
  uVar17 = 0;
  if (lRam00000001138467b0 != 0) {
    do {
      func_0x00010b902cd4();
      uVar17 = extraout_x8_16;
    } while (extraout_w11_01 != 0);
  }
  *extraout_x8_14 = uVar17;
LAB_10b901600:
  func_0x0001080e0bc0(auStack_3f0);
  pppppdVar20 = (double *****)&pppdStack_3d0;
  func_0x00010b8ffdac();
  func_0x00010b902bc4(uStack_2e8);
  if ((bool)uVar6) {
    return pppppdVar20;
  }
  ___stack_chk_fail();
  pcStack_408 = FUN_10b901724;
  ppppdStack_420 = (double ****)pppppdVar7;
  ppppuStack_410 = &ppppuStack_2b0;
  (*(code *)(*pppppdVar20)[0x2e])();
  FUN_10b9aa5f0(auStack_428,pppppdVar24,pppppdVar20);
  func_0x00010b902cb0();
  func_0x00010b902e3c();
  return pppppdVar24;
}



/* Entry: 10b900bd0; end: 10b900bdf;  */

void FUN_10b900bd0(double *****param_1,double ****param_2,double *****param_3,double *****param_4,
                  double *****param_5,double *****param_6)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  double *****pppppdVar5;
  long *plVar6;
  int iVar7;
  double *****pppppdVar8;
  double ****ppppdVar9;
  double *****pppppdVar10;
  double *****pppppdVar11;
  double *****pppppdVar12;
  long *plVar13;
  long extraout_x8;
  double *****pppppdVar14;
  long *extraout_x8_00;
  double *****extraout_x8_01;
  undefined8 extraout_x8_02;
  long *extraout_x8_03;
  undefined8 extraout_x8_04;
  double *****extraout_x8_05;
  double *****extraout_x8_06;
  double *****extraout_x8_07;
  double *****extraout_x8_08;
  double *****extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  undefined8 *extraout_x8_12;
  undefined8 extraout_x8_13;
  undefined8 extraout_x8_14;
  undefined8 extraout_x8_15;
  undefined8 extraout_x8_16;
  undefined8 uVar15;
  undefined8 extraout_x8_17;
  double ***pppdVar16;
  double *****extraout_x9;
  double *****pppppdVar17;
  double *****extraout_x9_00;
  double *****extraout_x9_01;
  double *****extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  double *****pppppdVar18;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  double *****pppppdVar19;
  double *****unaff_x25;
  double *****unaff_x26;
  double *****pppppdVar20;
  double *****unaff_x27;
  double *****unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double ****in_register_00005008;
  undefined1 auStack_348 [8];
  double ****ppppdStack_340;
  undefined1 ***pppuStack_330;
  code *pcStack_328;
  double ****ppppdStack_318;
  undefined1 auStack_310 [8];
  undefined1 auStack_308 [24];
  long lStack_2f0;
  byte bStack_2e8;
  undefined8 uStack_208;
  double ****ppppdStack_200;
  double ****ppppdStack_1f8;
  double ****ppppdStack_1f0;
  double ****ppppdStack_1e8;
  double ****ppppdStack_1e0;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined4 uStack_1b8;
  double **appdStack_1b1 [2];
  char cStack_1a1;
  undefined1 auStack_1a0 [8];
  double **appdStack_198 [3];
  double ****ppppdStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  undefined8 uStack_158;
  double ****ppppdStack_150;
  double ****ppppdStack_148;
  double ****ppppdStack_140;
  double ****ppppdStack_138;
  double ****ppppdStack_130;
  double ****ppppdStack_128;
  double ****ppppdStack_120;
  double ****ppppdStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  double ****ppppdStack_f8;
  double ****ppppdStack_f0;
  double ****ppppdStack_e8;
  double ****ppppdStack_e0;
  double ****ppppdStack_d8;
  char cStack_d0;
  double ****ppppdStack_c8;
  double ****ppppdStack_c0;
  undefined1 uStack_b8;
  double ****ppppdStack_b0;
  double ***pppdStack_a8;
  char cStack_a0;
  double ****ppppdStack_90;
  double ***apppdStack_88 [3];
  long lStack_70;
  
  pppppdVar10 = (double *****)0x0;
  func_0x00010b902c00();
  pppppdVar14 = (double *****)(ulong)*(byte *)(param_4 + 1);
  pppppdVar17 = (double *****)&UNK_10e5f6953;
  pppppdVar18 = (double *****)((ulong)*(byte *)((long)pppppdVar14 + 0x10e5f6953) * 4 + 0x10b900c3c);
  pppppdVar5 = param_3;
  pppppdVar8 = param_4;
  pppppdVar11 = pppppdVar10;
  pppppdVar12 = param_5;
  pppppdVar19 = param_4;
  pppppdVar20 = unaff_x26;
  lStack_70 = extraout_x8;
  ppppdStack_128 = (double ****)param_6;
  ppppdStack_120 = (double ****)param_3;
  switch(*(byte *)(param_4 + 1)) {
  case 0:
  case 0x12:
  case 0x13:
  case 0x3e:
  case 0x68:
  case 0xb7:
  case 0xd7:
    ppppdVar9 = param_3[0x24];
    param_3 = param_3 + 0x25;
    goto code_r0x00010b900e80;
  case 1:
    goto code_r0x00010b900e78;
  case 2:
  case 0x2e:
  case 0x35:
  case 0x3a:
  case 0x52:
  case 0x59:
  case 100:
  case 0x6b:
  case 0x7c:
  case 0xac:
  case 0xca:
  case 0xd0:
  case 0xd2:
  case 0xe4:
  case 0xee:
  case 0xf0:
    pppppdVar14 = &ppppdStack_90;
  case 0x9c:
code_r0x00010b900e14:
    FUN_10b9a9358(pppppdVar14);
    if ((double *****)ppppdStack_90 == (double *****)0x0) {
      func_0x00010b902e50();
      pppppdVar14 = extraout_x8_08;
      pppppdVar17 = extraout_x9_02;
    }
    else {
code_r0x00010b900e20:
      func_0x00010b902e5c();
      pppppdVar14 = extraout_x8_01;
      pppppdVar17 = extraout_x9;
code_r0x00010b900e24:
    }
    pppppdVar8 = &ppppdStack_e0;
    ppppdStack_e0 = (double ****)pppppdVar17;
    ppppdStack_d8 = (double ****)pppppdVar14;
    func_0x00010b902c50();
    (*extraout_x9_03)();
    func_0x000107c278f8();
    pppppdVar5 = (double *****)ppppdStack_90;
    break;
  case 3:
    pppppdVar8 = (double *****)*param_4;
    func_0x00010b902bc4(extraout_x8);
    if ((bool)in_ZR) {
      func_0x00010b902c50();
      func_0x00010b902cf0();
      ppppdStack_130 = (double ****)param_5;
      if (*(int *)(pppppdVar8 + 3) == 2) {
        pppppdVar17 = pppppdVar8;
        ppppdStack_118 = (double ****)param_1;
        FUN_10b9a5b88();
        ppppdStack_140 = (double ****)pppppdVar8;
        ppppdStack_138 = (double ****)pppppdVar17;
      }
      else {
        if (*(int *)(pppppdVar8 + 3) == 1) {
          ppppdStack_140 = (double ****)(pppppdVar8 + 4);
          ppppdStack_138 = pppppdVar8[2];
          pppdVar16 = (*pppppdVar5)[0x10];
          ppppdStack_118 = (double ****)param_1;
          goto LAB_10b8dbac4;
        }
        ppppdStack_140 = (double ****)(pppppdVar8 + 4);
        ppppdStack_138 = pppppdVar8[2];
        ppppdStack_118 = (double ****)param_1;
      }
      pppdVar16 = (*pppppdVar5)[0xf];
LAB_10b8dbac4:
      (*(code *)pppdVar16)(extraout_x8_02,pppppdVar5,&ppppdStack_140,pppppdVar11);
      return;
    }
    goto code_r0x00010b9012dc;
  case 4:
    pppppdVar5 = param_4;
  case 0x1c:
    FUN_10b9a9518();
    func_0x00010b902bc4(lStack_70);
    if ((bool)in_ZR) {
      pppppdVar17 = pppppdVar5;
      func_0x00010b902c8c();
      iVar7 = (int)pppppdVar17;
      func_0x00010b902cf0();
      if (iVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*pppppdVar5)[0x46])();
        return;
      }
      ppppdVar9 = pppppdVar5[0x20];
      plVar13 = extraout_x8_00;
LAB_10b8dddf4:
      *plVar13 = (long)ppppdVar9;
      ppppdVar9 = pppppdVar5[0x21];
      plVar13[2] = (long)pppppdVar5[0x22];
      plVar13[1] = (long)ppppdVar9;
      *(undefined1 *)(plVar13 + 3) = 0;
      return;
    }
    goto code_r0x00010b9012dc;
  case 5:
    pppppdVar5 = param_4;
    FUN_10b9a9588();
    func_0x00010b902bc4(lStack_70);
    if ((bool)in_ZR) {
      func_0x00010b902c50();
      func_0x00010b902cf0();
      ppppdStack_120 = (double ****)pppppdVar5;
      if (pppppdVar5 == (double *****)(long)(char)pppppdVar5) {
        ppppdStack_118 = (double ****)((ulong)ppppdStack_118._1_7_ << 8);
        func_0x00010b8dc0b4();
      }
      else {
        ppppdStack_118 = (double ****)((ulong)ppppdStack_118._1_7_ << 8);
        func_0x00010b8de1cc();
      }
      return;
    }
    goto code_r0x00010b9012dc;
  case 6:
    pppppdVar5 = param_4;
    FUN_10b9a92f0();
    func_0x00010b902bc4(lStack_70);
    if ((bool)in_ZR) {
      func_0x00010b902c8c();
      func_0x00010b902cf0();
      if ((double)param_2 != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*pppppdVar5)[0x47])();
        return;
      }
      ppppdVar9 = pppppdVar5[0x20];
      plVar13 = extraout_x8_03;
      goto LAB_10b8dddf4;
    }
    goto code_r0x00010b9012dc;
  case 7:
    pppppdVar5 = param_4;
  case 0x14:
    FUN_10b9a9608();
    in_ZR = (int)pppppdVar5 == 0;
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = 0xe0;
    }
    pppppdVar17 = (double *****)0xe8;
    pppppdVar18 = (double *****)0xc8;
    pppppdVar14 = *(double ******)((long)param_3 + lVar1);
code_r0x00010b900edc:
    if ((bool)in_ZR) {
      pppppdVar18 = pppppdVar17;
    }
    ppppdVar9 = *(double *****)((long)param_3 + (long)pppppdVar18);
    param_1[2] = (double ****)((long *)((long)param_3 + (long)pppppdVar18))[1];
    param_1[1] = ppppdVar9;
code_r0x00010b900ee8:
    *param_1 = (double ****)pppppdVar14;
code_r0x00010b900eec:
    *(undefined1 *)(param_1 + 3) = 0;
    break;
  case 8:
    unaff_x25 = (double *****)*param_4;
    pppppdVar19 = &ppppdStack_90;
    func_0x00010b902dcc(&ppppdStack_90);
    pppppdVar8 = param_4;
    if (((ulong)param_6[1] & 1) != 0) {
      pppppdVar17 = unaff_x25 + 2;
      func_0x00010527d444();
      unaff_x25 = (double *****)((long)unaff_x25[2] + (long)unaff_x25[5]);
      unaff_x26 = &ppppdStack_b0;
      unaff_x27 = (double *****)0x2;
      ppppdStack_f0 = (double ****)pppppdVar17;
      ppppdStack_e8 = (double ****)param_4;
      while (in_ZR = (double *****)ppppdStack_f0 == unaff_x25, !(bool)in_ZR) {
        ppppdStack_d8 = (double ****)0x0;
        cStack_d0 = (char)unaff_x27;
        ppppdStack_c8 = ppppdStack_e8;
        ppppdStack_c0 = (double ****)0x0;
        unaff_x28 = (double *****)ppppdStack_e8;
        ppppdStack_e0 = (double ****)param_5;
code_r0x00010b901014:
        uStack_b8 = 0;
        pppppdVar8 = unaff_x28 + 1;
        pppppdVar12 = &ppppdStack_e0;
        func_0x00010b902dd8(&ppppdStack_b0,param_3);
        in_ZR = *(char *)(param_6 + 1) == '\x01';
        if (!(bool)in_ZR) {
code_r0x00010b901184:
          func_0x00010b902bd8();
          func_0x00010b902e34();
          goto code_r0x00010b90118c;
        }
        if (*unaff_x28 == (double ****)0x0) {
          func_0x00010b902e50();
          ppppdStack_d8 = (double ****)extraout_x8_06;
          ppppdStack_e0 = (double ****)extraout_x9_01;
        }
        else {
          func_0x00010b902e5c();
          ppppdStack_d8 = (double ****)extraout_x8_05;
          ppppdStack_e0 = (double ****)extraout_x9_00;
        }
        pppppdVar8 = pppppdVar19 + 1;
        pppppdVar11 = &ppppdStack_e0;
        pppppdVar12 = unaff_x26 + 1;
        (*(code *)(*param_3)[0x1e])(param_3);
        in_ZR = *(char *)(param_6 + 1) == '\x01';
        if (!(bool)in_ZR) goto code_r0x00010b901184;
        func_0x00010b902e34();
        func_0x00010527d4cc(&ppppdStack_f0);
      }
      goto code_r0x00010b9010ac;
    }
code_r0x00010b901094:
    func_0x00010b902bd8();
    goto code_r0x00010b90118c;
  case 9:
  case 0xa5:
  case 0xe0:
    unaff_x26 = (double *****)*param_4;
    pppppdVar8 = (double *****)unaff_x26[2];
    pppppdVar11 = param_6;
    (*(code *)(*param_3)[0x11])(&ppppdStack_90,param_3);
    if (((ulong)param_6[1] & 1) == 0) goto code_r0x00010b901094;
  case 0x2f:
    unaff_x25 = (double *****)0x0;
    pppppdVar19 = unaff_x26 + 3;
code_r0x00010b900d50:
    ppppdStack_f8 = (double ****)(param_3 + 0x29);
    pppppdVar20 = (double *****)((long)unaff_x26[2] << 4);
code_r0x00010b900d60:
    while (unaff_x26 = (double *****)0x0, pppppdVar20 != (double *****)0x0) {
code_r0x00010b900d64:
      ppppdStack_d8 = (double ****)0x0;
      cStack_d0 = '\x05';
      ppppdStack_c8 = (double ****)0x0;
      ppppdStack_e0 = (double ****)param_5;
      ppppdStack_c0 = (double ****)unaff_x25;
code_r0x00010b900d74:
      uStack_b8 = 0;
code_r0x00010b900d78:
      pppppdVar14 = &ppppdStack_b0;
code_r0x00010b900d7c:
      pppppdVar12 = &ppppdStack_e0;
code_r0x00010b900d84:
code_r0x00010b900d88:
      param_4 = pppppdVar19;
      func_0x00010b902dd8(pppppdVar14);
      in_ZR = *(char *)(param_6 + 1) == '\x01';
code_r0x00010b900d94:
      if ((bool)in_ZR) {
code_r0x00010b900d98:
        unaff_x27 = (double *****)((long)unaff_x25 + 1);
        pppppdVar14 = (double *****)(*param_3)[0x21];
        param_4 = (double *****)apppdStack_88;
        pppppdVar12 = (double *****)&pppdStack_a8;
code_r0x00010b900db8:
        pppppdVar11 = unaff_x25;
code_r0x00010b900dc0:
        (*(code *)pppppdVar14)();
code_r0x00010b900dc4:
        pppppdVar14 = (double *****)(ulong)*(byte *)(param_6 + 1);
code_r0x00010b900dc8:
        unaff_x25 = unaff_x27;
        unaff_x27 = unaff_x25;
        if (((ulong)pppppdVar14 & 1) == 0) goto code_r0x00010b900dd8;
code_r0x00010b900dcc:
        unaff_x28 = (double *****)0x1;
code_r0x00010b900dd0:
      }
      else {
code_r0x00010b900dd4:
code_r0x00010b900dd8:
        unaff_x28 = (double *****)0x0;
        unaff_x27 = unaff_x25;
code_r0x00010b900ddc:
        pppppdVar14 = (double *****)param_3[0x28];
code_r0x00010b900de0:
        *param_1 = (double ****)pppppdVar14;
code_r0x00010b900de4:
        in_register_00005008 = (double ****)ppppdStack_f8[1];
        param_2 = (double ****)*ppppdStack_f8;
code_r0x00010b900dec:
        param_1[2] = in_register_00005008;
        param_1[1] = param_2;
code_r0x00010b900df0:
        *(undefined1 *)(param_1 + 3) = 0;
      }
code_r0x00010b900df4:
      func_0x00010b902e34();
code_r0x00010b900df8:
      pppppdVar19 = pppppdVar19 + 2;
code_r0x00010b900dfc:
      unaff_x25 = unaff_x27;
      unaff_x26 = pppppdVar20 + -2;
      pppppdVar8 = param_4;
      unaff_x27 = unaff_x25;
code_r0x00010b900e04:
      if (((ulong)unaff_x28 & 1) == 0) goto code_r0x00010b90118c;
code_r0x00010b900e08:
      pppppdVar20 = unaff_x26;
    }
code_r0x00010b9010ac:
    pppppdVar8 = &ppppdStack_90;
    func_0x0001080e08ac(param_1);
code_r0x00010b90118c:
    pppppdVar5 = &ppppdStack_90;
    func_0x0001080e0bc0();
    param_4 = pppppdVar19;
    break;
  case 10:
    pppppdVar8 = (double *****)(ulong)*(uint *)(*param_4 + 2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != extraout_x8) goto code_r0x00010b9012dc;
    pppppdVar11 = (double *****)(*param_4 + 3);
    func_0x00010b902c8c();
    pppppdVar12 = param_6;
    func_0x00010b902cf0();
    uVar15 = extraout_x8_04;
    goto code_r0x00010b9012e0;
  case 0xb:
    func_0x00010b9a9710(&ppppdStack_f0,param_4);
    pppppdVar11 = (double *****)0x0;
    pppppdVar8 = (double *****)ppppdStack_f0;
    pppppdVar12 = param_6;
    func_0x00010b9009e0(&ppppdStack_b0,param_3);
    if (((ulong)param_6[1] & 1) == 0) {
      func_0x00010b902bd8();
    }
    else {
      in_ZR = cStack_a0 == '\x01';
      if ((bool)in_ZR) {
        pppppdVar8 = &ppppdStack_b0;
        func_0x00010b902c8c();
        func_0x0001080e07a8();
      }
      else {
        cStack_d0 = *(char *)(param_5 + 2);
        ppppdStack_c8 = param_5[3];
        ppppdStack_c0 = param_5[4];
        ppppdStack_d8 = param_5[1];
        ppppdStack_e0 = *param_5;
        uStack_b8 = 1;
        FUN_10b9a3a64(&ppppdStack_90,&ppppdStack_e0);
        param_5 = (double *****)0x50;
        __Znwm();
        pppppdVar11 = &ppppdStack_90;
        FUN_10b8ded74();
        FUN_10b9a3d64(apppdStack_88);
        pppppdVar10 = param_5 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppdVar10,0x10);
          if (bVar3) {
            *pppppdVar10 = (double ****)((long)*pppppdVar10 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        pppppdVar8 = &ppppdStack_e0;
        ppppdStack_e0 = (double ****)param_5;
        func_0x00010b902c50();
        (*extraout_x9_04)();
        func_0x0001080e0c4c(ppppdStack_e0);
        do {
          in_ZR = (double ****)((long)*pppppdVar10 + -1) == (double ****)0x0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppdVar10,0x10);
          if (bVar3) {
            *pppppdVar10 = (double ****)((long)*pppppdVar10 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((bool)in_ZR) {
          (*(code *)(*param_5)[1])(param_5);
        }
      }
    }
    pppppdVar5 = (double *****)ppppdStack_f0;
    func_0x000104bda3ac();
    break;
  case 0xc:
    FUN_10b9a9488(&ppppdStack_e0,param_4);
    pppppdVar8 = &ppppdStack_e0;
  case 0x28:
  case 0x71:
code_r0x00010b900d00:
    FUN_10b99ff08();
code_r0x00010b900d04:
code_r0x00010b900d08:
    func_0x000104bda960();
    param_2 = (double ****)0x0;
    in_register_00005008 = (double ****)0x0;
code_r0x00010b900d10:
    param_1[1] = in_register_00005008;
    *param_1 = param_2;
    param_1[3] = in_register_00005008;
    param_1[2] = param_2;
    pppppdVar5 = param_1;
code_r0x00010b900d18:
    func_0x0001080e0180();
    break;
  case 0xd:
    func_0x00010b9a97d0(&ppppdStack_90,param_4);
    ppppdVar9 = param_3[0x40];
    if (ppppdVar9 == (double ****)0x0) {
      pppppdVar10 = &ppppdStack_e0;
      func_0x00010b902dcc(&ppppdStack_e0);
      if (((ulong)param_6[1] & 1) == 0) {
code_r0x00010b9011ac:
        func_0x00010b902bd8();
      }
      else {
        pppppdVar8 = &ppppdStack_90;
        pppppdVar12 = &ppppdStack_d8;
        func_0x00010b902d44();
        if (((ulong)ppppdVar9 & 1) == 0) goto code_r0x00010b9011ac;
        func_0x00010b902cbc();
      }
      func_0x00010b902e1c();
    }
    else {
      pppppdVar8 = &ppppdStack_90;
      pppppdVar11 = param_5;
      pppppdVar12 = param_6;
      func_0x00010b906ebc(param_1);
    }
    func_0x000104bdbfa0();
    pppppdVar5 = (double *****)ppppdStack_90;
    break;
  case 0xe:
    func_0x00010b9a9810(&ppppdStack_b0,param_4);
    if (param_3[0x40] != (double ****)0x0) {
      pppppdVar8 = &ppppdStack_b0;
      pppppdVar11 = param_5;
      pppppdVar14 = param_1;
      goto code_r0x00010b900c68;
    }
    ppppdStack_90 = ppppdStack_b0;
    if (((double *****)ppppdStack_b0 != (double *****)0x0) &&
       ((double ****)ppppdStack_b0[2] != (double ****)0x0)) {
      do {
        func_0x00010b902dbc();
        ppppdStack_90 = (double ****)extraout_x8_07;
      } while (extraout_w11 != 0);
    }
    pppppdVar8 = &ppppdStack_90;
    pppppdVar12 = (double *****)0x1;
    pppppdVar11 = param_6;
    func_0x00010b900824(&ppppdStack_e0,param_3);
    pppppdVar17 = (double *****)ppppdStack_90;
    if ((double *****)ppppdStack_90 != (double *****)0x0) {
      func_0x00010b902bf4();
      pppppdVar17 = (double *****)ppppdStack_90;
    }
    if (((ulong)param_6[1] & 1) == 0) {
code_r0x00010b901198:
      func_0x00010b902bd8();
    }
    else {
      pppppdVar8 = (double *****)(ppppdStack_b0 + 4);
      pppppdVar12 = &ppppdStack_d8;
      func_0x00010b902d44();
      if (((ulong)pppppdVar17 & 1) == 0) goto code_r0x00010b901198;
      func_0x00010b902cbc();
    }
    func_0x00010b902e1c();
    goto code_r0x00010b9011a0;
  case 0xf:
    FUN_10b9a94ec(&ppppdStack_90,param_4);
    pppppdVar14 = &ppppdStack_e0;
    pppppdVar8 = (double *****)ppppdStack_90;
  case 0x16:
    pppppdVar12 = param_6;
    func_0x00010b9009e0(pppppdVar14,param_3);
    func_0x000104bddf04();
    pppppdVar5 = (double *****)ppppdStack_90;
    if (((ulong)param_6[1] & 1) != 0) {
code_r0x00010b900e5c:
      in_ZR = cStack_d0 == '\x01';
      if ((bool)in_ZR) {
        pppppdVar8 = &ppppdStack_e0;
        func_0x00010b902c8c();
        func_0x0001080e07a8();
      }
      else {
        FUN_10b9a94ec(&ppppdStack_b0,param_4);
        ppppdStack_90 = ppppdStack_b0;
        if (((double *****)ppppdStack_b0 != (double *****)0x0) &&
           ((double ****)ppppdStack_b0[2] != (double ****)0x0)) {
          do {
            func_0x00010b902dbc();
            ppppdStack_90 = (double ****)extraout_x8_09;
          } while (extraout_w11_00 != 0);
        }
        pppppdVar8 = &ppppdStack_90;
        func_0x00010b902c50();
        pppppdVar12 = (double *****)0x1;
        func_0x00010b900824();
        if ((double *****)ppppdStack_90 != (double *****)0x0) {
          func_0x00010b902bf4();
        }
        func_0x000104bddf04();
        pppppdVar5 = (double *****)ppppdStack_b0;
      }
      break;
    }
code_r0x00010b900e78:
    ppppdVar9 = param_3[0x28];
    param_3 = param_3 + 0x29;
code_r0x00010b900e80:
    *param_1 = ppppdVar9;
    in_register_00005008 = param_3[1];
    param_2 = *param_3;
code_r0x00010b900e88:
    param_1[2] = in_register_00005008;
    param_1[1] = param_2;
    goto code_r0x00010b900eec;
  case 0x10:
    goto code_r0x00010b900edc;
  case 0x11:
  case 0x30:
  case 0x3b:
  case 0x55:
  case 0x65:
  case 0xa9:
  case 0xad:
  case 0xd3:
  case 0xe6:
  case 0xf1:
    goto code_r0x00010b900df8;
  case 0x15:
    goto code_r0x00010b900e24;
  case 0x17:
  case 0x34:
  case 0x3c:
  case 0x4f:
  case 0x54:
  case 0x58:
  case 0x66:
  case 0x77:
  case 0x7d:
  case 0x91:
  case 0xae:
  case 199:
  case 0xd4:
  case 0xe7:
  case 0xf2:
    goto code_r0x00010b900e04;
  case 0x18:
    goto code_r0x00010b900e88;
  case 0x19:
  case 0x47:
  case 0x6f:
  case 0x8e:
  case 0xc0:
  case 0xdf:
    goto code_r0x00010b900d00;
  case 0x1a:
    goto code_r0x00010b900e5c;
  case 0x1b:
code_r0x00010b900c68:
    pppppdVar12 = param_6;
    func_0x00010b906f98(pppppdVar14);
code_r0x00010b9011a0:
    func_0x000104be7e7c();
    pppppdVar5 = (double *****)ppppdStack_b0;
    break;
  case 0x1d:
  case 0x1e:
    goto code_r0x00010b901014;
  case 0x1f:
    goto code_r0x00010b900ee8;
  case 0x20:
  case 0x3f:
  case 0x5b:
  case 0x69:
  case 0x87:
  case 0xa2:
  case 0xb8:
  case 0xd8:
  case 0xf5:
  case 0xff:
    goto code_r0x00010b900d74;
  case 0x21:
  case 0x40:
  case 0x88:
  case 0xb9:
  case 0xd9:
  case 0xf8:
    goto code_r0x00010b900d10;
  case 0x22:
  case 0x36:
  case 0x41:
  case 0x60:
  case 0x89:
  case 0x99:
  case 0xba:
  case 0xda:
    goto code_r0x00010b900d94;
  default:
    goto code_r0x00010b900dc0;
  case 0x24:
  case 0x43:
  case 0x82:
  case 0x8b:
  case 0x9b:
  case 0xa7:
  case 0xa8:
  case 0xbc:
  case 0xdc:
  case 0xe2:
    goto code_r0x00010b900dec;
  case 0x25:
  case 0x44:
  case 0x79:
  case 0x8c:
  case 0x96:
  case 0xbd:
  case 0xdd:
    goto code_r0x00010b900dcc;
  case 0x26:
  case 0x37:
  case 0x39:
  case 0x45:
  case 0x50:
  case 0x61:
  case 99:
  case 0x8d:
  case 0xbe:
  case 200:
  case 0xde:
    goto code_r0x00010b900de0;
  case 0x27:
  case 0x70:
  case 0xb1:
  case 0xbf:
    goto code_r0x00010b900d04;
  case 0x29:
  case 0xcb:
  case 0xe9:
    goto code_r0x00010b900d78;
  case 0x2a:
  case 0xcc:
  case 0xea:
    goto code_r0x00010b900dc4;
  case 0x2b:
  case 0xcd:
  case 0xeb:
    goto code_r0x00010b900de4;
  case 0x2c:
  case 0x33:
  case 0x57:
  case 0x5e:
  case 0x78:
  case 0x7f:
  case 0x85:
  case 0x95:
  case 0x9d:
  case 0x9f:
  case 0xce:
  case 0xd5:
  case 0xec:
  case 0xf3:
  case 0xfc:
    goto code_r0x00010b900dd0;
  case 0x2d:
  case 0x4e:
  case 0x84:
  case 0xaa:
  case 0xc6:
  case 0xcf:
  case 0xed:
    goto code_r0x00010b900dc8;
  case 0x31:
    goto code_r0x00010b900df4;
  case 0x32:
  case 0x4b:
  case 0xc3:
    goto code_r0x00010b900e14;
  case 0x38:
  case 0x5f:
  case 0x62:
  case 0x74:
    goto code_r0x00010b900e08;
  case 0x3d:
  case 0x67:
  case 0xa1:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xd6:
    goto code_r0x00010b900d50;
  case 0x46:
  case 0x6c:
    goto code_r0x00010b900d08;
  case 0x48:
  case 0x86:
  case 0xaf:
  case 0xf4:
  case 0xfe:
    goto code_r0x00010b900d60;
  case 0x49:
  case 0x97:
  case 0xc1:
  case 0xf9:
    goto code_r0x00010b900d64;
  case 0x4d:
  case 0x6a:
  case 0x98:
  case 0xa3:
  case 0xb0:
  case 0xc5:
  case 0xd1:
  case 0xef:
  case 0xf6:
  case 0xfa:
    goto code_r0x00010b900d88;
  case 0x51:
  case 0x56:
  case 0x7b:
  case 0x81:
  case 0x93:
  case 0x94:
  case 0xc9:
    goto code_r0x00010b900dfc;
  case 0x53:
  case 0xe1:
    goto code_r0x00010b900d7c;
  case 0x5a:
    goto code_r0x00010b900e20;
  case 0x5d:
  case 0x80:
  case 0xe8:
    goto code_r0x00010b900df0;
  case 0x6d:
  case 0x6e:
  case 0x72:
  case 0x73:
  case 0x7a:
  case 0x7e:
  case 0xa4:
  case 0xb2:
  case 0xf7:
    goto code_r0x00010b900db8;
  case 0x75:
    goto code_r0x00010b900ddc;
  case 0x8f:
    goto code_r0x00010b900d18;
  case 0x90:
    goto code_r0x00010b900d98;
  case 0x9e:
  case 0xfb:
    goto code_r0x00010b900d84;
  case 0xa0:
  case 0xe5:
  case 0xfd:
    goto code_r0x00010b900dd4;
  }
  func_0x00010b902bc4(lStack_70);
  if ((bool)in_ZR) {
    func_0x00010b902cf0();
    return;
  }
code_r0x00010b9012dc:
  unaff_x30 = FUN_10b9012e0;
  ___stack_chk_fail();
  uVar15 = extraout_x8_10;
  unaff_x29 = &stack0xfffffffffffffff0;
code_r0x00010b9012e0:
  pppppdVar17 = pppppdVar8;
  ppppdStack_150 = (double ****)unaff_x26;
  ppppdStack_148 = (double ****)unaff_x25;
  ppppdStack_140 = (double ****)param_4;
  ppppdStack_138 = (double ****)pppppdVar10;
  ppppdStack_130 = (double ****)param_5;
  ppppdStack_118 = (double ****)param_1;
  puStack_110 = unaff_x29;
  pcStack_108 = unaff_x30;
  func_0x00010b902c00();
  uStack_1b8 = SUB84(pppppdVar17,0);
  uStack_158 = extraout_x8_11;
  func_0x0001080e0180(auStack_1a0);
  ppppdVar9 = *pppppdVar11;
  pppppdVar17 = pppppdVar5;
  func_0x00010b9009e0(appdStack_1b1,pppppdVar5,ppppdVar9,0,pppppdVar12);
  uVar4 = cStack_1a1 == '\x01';
  if ((bool)uVar4) {
    ppppdVar9 = (double ****)appdStack_1b1;
    pppppdVar17 = pppppdVar5;
    func_0x0001080e07a8(auStack_178,pppppdVar5,ppppdVar9);
    func_0x00010b902e10();
    func_0x00010b902d74();
    goto LAB_10b901360;
  }
  if (((ulong)pppppdVar12[1] & 1) == 0) {
LAB_10b901428:
    func_0x00010b902cbc();
  }
  else {
    func_0x00010b902d0c();
    func_0x00010b902e10();
    func_0x00010b902d74();
    if (((ulong)pppppdVar12[1] & 1) == 0) goto LAB_10b901428;
    if ((pppppdVar11[2] != (double ****)0x0) && (*pppppdVar11 != (double ****)0x0)) {
      func_0x00010b902d0c();
      uVar4 = *(char *)(pppppdVar12 + 1) == '\x01';
      if ((bool)uVar4) {
        FUN_10b901de4();
        pppppdVar14 = pppppdVar5;
        func_0x00010b8dc614(pppppdVar5,pppppdVar17);
        ppppdVar9 = (double ****)appdStack_198;
        pppppdVar17 = pppppdVar5;
        ppppdStack_180 = (double ****)pppppdVar14;
        (*(code *)(*pppppdVar5)[0x1f])
                  (pppppdVar5,ppppdVar9,&ppppdStack_180,auStack_170,1,pppppdVar12);
      }
      func_0x00010b902d74();
      if (((ulong)pppppdVar12[1] & 1) == 0) goto LAB_10b901428;
    }
LAB_10b901360:
    uVar4 = (int)pppppdVar8 == 9;
    if ((bool)uVar4) goto LAB_10b901428;
    ppppdVar9 = (double ****)&uStack_1b8;
    pppppdVar17 = pppppdVar5;
    (*(code *)(*pppppdVar5)[0x15])(uVar15,pppppdVar5,ppppdVar9,appdStack_198,pppppdVar12);
  }
  func_0x00010b902e1c();
  func_0x00010b902bc4(uStack_158);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_10b90145c;
  ppppdStack_200 = (double ****)unaff_x28;
  ppppdStack_1f8 = (double ****)unaff_x27;
  ppppdStack_1f0 = (double ****)pppppdVar8;
  ppppdStack_1e8 = (double ****)pppppdVar5;
  ppppdStack_1e0 = (double ****)pppppdVar12;
  ppuStack_1d0 = &puStack_110;
  func_0x00010b902c00();
  uStack_208 = extraout_x8_13;
  if ((bRam00000001138467a8 & 1) == 0) {
    iVar7 = 0x138467a8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107c31088(0x1138467a0,&UNK_10f7ccc15);
      ___cxa_guard_release(0x1138467a8);
    }
  }
  if ((bRam00000001138467b8 & 1) == 0) {
    iVar7 = 0x138467b8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107c31088(0x1138467b0,&UNK_10f7ccc1a);
      ___cxa_guard_release(0x1138467b8);
    }
  }
  if ((bRam00000001138467c8 & 1) == 0) {
    iVar7 = 0x138467c8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107c31088(0x1138467c0,&UNK_10f7ccc21);
      ___cxa_guard_release(0x1138467c8);
    }
  }
  if ((bRam00000001138467d8 & 1) == 0) {
    iVar7 = 0x138467d8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107c31088(0x1138467d0,&UNK_10f7ccc2e);
      ___cxa_guard_release(0x1138467d8);
    }
  }
  func_0x00010b8ffd54(&lStack_2f0,pppppdVar17);
  pppppdVar14 = pppppdVar17;
  func_0x00010b8dc614(pppppdVar17,0x1138467a0);
  plVar13 = &lStack_2f0;
  ppppdStack_318 = (double ****)pppppdVar14;
  (*(code *)(*pppppdVar17)[0x1b])(auStack_310,pppppdVar17,ppppdVar9,&ppppdStack_318,plVar13);
  uVar4 = bStack_2e8 == 1;
  if ((bool)uVar4) {
    pppppdVar14 = pppppdVar17;
    (*(code *)(*pppppdVar17)[0x30])(pppppdVar17,auStack_308);
    if ((int)pppppdVar14 == 0) {
      (*(code *)(*pppppdVar17)[0x26])(&ppppdStack_318,pppppdVar17,auStack_308,&lStack_2f0);
      if ((bStack_2e8 & 1) == 0) {
        func_0x00010b902d8c();
        bStack_2e8 = 1;
        uVar15 = 0;
        if (lRam00000001138467b0 != 0) {
          do {
            func_0x00010b902cd4();
            uVar15 = extraout_x8_15;
          } while (extraout_w11_02 != 0);
        }
LAB_10b9015f4:
        *extraout_x8_12 = uVar15;
      }
      else {
        if (((double *****)ppppdStack_318 == (double *****)0x0) ||
           (*(int *)((long)ppppdStack_318 + 0xc) == 0)) {
          uVar15 = 0;
          if (lRam00000001138467b0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar15 = extraout_x8_16;
            } while (extraout_w11_03 != 0);
          }
          goto LAB_10b9015f4;
        }
        uVar4 = (double *****)ppppdStack_318 == pppppdRam00000001138467d0;
        if ((bool)uVar4) {
          uVar15 = 0;
          if (lRam00000001138467c0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar15 = extraout_x8_17;
            } while (extraout_w11_04 != 0);
          }
          goto LAB_10b9015f4;
        }
        *extraout_x8_12 = ppppdStack_318;
        ppppdStack_318 = (double ****)0x0;
      }
      func_0x000107c278f8(ppppdStack_318);
      goto LAB_10b901600;
    }
    if ((bStack_2e8 & 1) == 0) goto LAB_10b901538;
  }
  else {
LAB_10b901538:
    func_0x00010b902d8c();
    bStack_2e8 = 1;
  }
  uVar15 = 0;
  if (lRam00000001138467b0 != 0) {
    do {
      func_0x00010b902cd4();
      uVar15 = extraout_x8_14;
    } while (extraout_w11_01 != 0);
  }
  *extraout_x8_12 = uVar15;
LAB_10b901600:
  func_0x0001080e0bc0(auStack_310);
  plVar6 = &lStack_2f0;
  func_0x00010b8ffdac();
  func_0x00010b902bc4(uStack_208);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  pcStack_328 = FUN_10b901724;
  ppppdStack_340 = (double ****)pppppdVar17;
  pppuStack_330 = &ppuStack_1d0;
  (**(code **)(*plVar6 + 0x170))();
  FUN_10b9aa5f0(auStack_348,plVar13,plVar6);
  func_0x00010b902cb0();
  func_0x00010b902e3c();
  return;
}



/* Entry: 10b900be0; end: 10b9012df;  */

void FUN_10b900be0(double *****param_1,double ****param_2,double *****param_3,double *****param_4,
                  double *****param_5,double *****param_6,double *****param_7)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  double *****pppppdVar5;
  long *plVar6;
  int iVar7;
  double *****pppppdVar8;
  double ****ppppdVar9;
  double *****pppppdVar10;
  double *****pppppdVar11;
  long *plVar12;
  long extraout_x8;
  double *****pppppdVar13;
  long *extraout_x8_00;
  double *****extraout_x8_01;
  undefined8 extraout_x8_02;
  long *extraout_x8_03;
  undefined8 extraout_x8_04;
  double *****extraout_x8_05;
  double *****extraout_x8_06;
  double *****extraout_x8_07;
  double *****extraout_x8_08;
  double *****extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  undefined8 *extraout_x8_12;
  undefined8 extraout_x8_13;
  undefined8 extraout_x8_14;
  undefined8 extraout_x8_15;
  undefined8 extraout_x8_16;
  undefined8 uVar14;
  undefined8 extraout_x8_17;
  double ***pppdVar15;
  double *****extraout_x9;
  double *****pppppdVar16;
  double *****extraout_x9_00;
  double *****extraout_x9_01;
  double *****extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  double *****pppppdVar17;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  double *****pppppdVar18;
  double *****unaff_x25;
  double *****unaff_x26;
  double *****pppppdVar19;
  double *****unaff_x27;
  double *****unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double ****in_register_00005008;
  undefined1 auStack_348 [8];
  double ****ppppdStack_340;
  undefined1 ***pppuStack_330;
  code *pcStack_328;
  double ****ppppdStack_318;
  undefined1 auStack_310 [8];
  undefined1 auStack_308 [24];
  long lStack_2f0;
  byte bStack_2e8;
  undefined8 uStack_208;
  double ****ppppdStack_200;
  double ****ppppdStack_1f8;
  double ****ppppdStack_1f0;
  double ****ppppdStack_1e8;
  double ****ppppdStack_1e0;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined4 uStack_1b8;
  double **appdStack_1b1 [2];
  char cStack_1a1;
  undefined1 auStack_1a0 [8];
  double **appdStack_198 [3];
  double ****ppppdStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  undefined8 uStack_158;
  double ****ppppdStack_150;
  double ****ppppdStack_148;
  double ****ppppdStack_140;
  double ****ppppdStack_138;
  double ****ppppdStack_130;
  double ****ppppdStack_128;
  double ****ppppdStack_120;
  double ****ppppdStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  double ****ppppdStack_f8;
  double ****ppppdStack_f0;
  double ****ppppdStack_e8;
  double ****ppppdStack_e0;
  double ****ppppdStack_d8;
  char cStack_d0;
  double ****ppppdStack_c8;
  double ****ppppdStack_c0;
  undefined1 uStack_b8;
  double ****ppppdStack_b0;
  double ***pppdStack_a8;
  char cStack_a0;
  double ****ppppdStack_90;
  double ***apppdStack_88 [3];
  long lStack_70;
  
  func_0x00010b902c00();
  pppppdVar13 = (double *****)(ulong)*(byte *)(param_4 + 1);
  pppppdVar16 = (double *****)&UNK_10e5f6953;
  pppppdVar17 = (double *****)((ulong)*(byte *)((long)pppppdVar13 + 0x10e5f6953) * 4 + 0x10b900c3c);
  pppppdVar5 = param_3;
  pppppdVar8 = param_4;
  pppppdVar10 = param_5;
  pppppdVar11 = param_6;
  pppppdVar18 = param_4;
  pppppdVar19 = unaff_x26;
  lStack_70 = extraout_x8;
  ppppdStack_128 = (double ****)param_7;
  ppppdStack_120 = (double ****)param_3;
  switch(*(byte *)(param_4 + 1)) {
  case 0:
  case 0x12:
  case 0x13:
  case 0x3e:
  case 0x68:
  case 0xb7:
  case 0xd7:
    ppppdVar9 = param_3[0x24];
    param_3 = param_3 + 0x25;
    goto code_r0x00010b900e80;
  case 1:
    goto code_r0x00010b900e78;
  case 2:
  case 0x2e:
  case 0x35:
  case 0x3a:
  case 0x52:
  case 0x59:
  case 100:
  case 0x6b:
  case 0x7c:
  case 0xac:
  case 0xca:
  case 0xd0:
  case 0xd2:
  case 0xe4:
  case 0xee:
  case 0xf0:
    pppppdVar13 = &ppppdStack_90;
  case 0x9c:
code_r0x00010b900e14:
    FUN_10b9a9358(pppppdVar13);
    if ((double *****)ppppdStack_90 == (double *****)0x0) {
      func_0x00010b902e50();
      pppppdVar13 = extraout_x8_08;
      pppppdVar16 = extraout_x9_02;
    }
    else {
code_r0x00010b900e20:
      func_0x00010b902e5c();
      pppppdVar13 = extraout_x8_01;
      pppppdVar16 = extraout_x9;
code_r0x00010b900e24:
    }
    pppppdVar8 = &ppppdStack_e0;
    ppppdStack_e0 = (double ****)pppppdVar16;
    ppppdStack_d8 = (double ****)pppppdVar13;
    func_0x00010b902c50();
    (*extraout_x9_03)();
    func_0x000107c278f8();
    pppppdVar5 = (double *****)ppppdStack_90;
    break;
  case 3:
    pppppdVar8 = (double *****)*param_4;
    func_0x00010b902bc4(extraout_x8);
    if ((bool)in_ZR) {
      func_0x00010b902c50();
      func_0x00010b902cf0();
      ppppdStack_130 = (double ****)param_6;
      if (*(int *)(pppppdVar8 + 3) == 2) {
        pppppdVar16 = pppppdVar8;
        ppppdStack_118 = (double ****)param_1;
        FUN_10b9a5b88();
        ppppdStack_140 = (double ****)pppppdVar8;
        ppppdStack_138 = (double ****)pppppdVar16;
      }
      else {
        if (*(int *)(pppppdVar8 + 3) == 1) {
          ppppdStack_140 = (double ****)(pppppdVar8 + 4);
          ppppdStack_138 = pppppdVar8[2];
          pppdVar15 = (*pppppdVar5)[0x10];
          ppppdStack_118 = (double ****)param_1;
          goto LAB_10b8dbac4;
        }
        ppppdStack_140 = (double ****)(pppppdVar8 + 4);
        ppppdStack_138 = pppppdVar8[2];
        ppppdStack_118 = (double ****)param_1;
      }
      pppdVar15 = (*pppppdVar5)[0xf];
LAB_10b8dbac4:
      (*(code *)pppdVar15)(extraout_x8_02,pppppdVar5,&ppppdStack_140,pppppdVar10);
      return;
    }
    goto code_r0x00010b9012dc;
  case 4:
    pppppdVar5 = param_4;
  case 0x1c:
    FUN_10b9a9518();
    func_0x00010b902bc4(lStack_70);
    if ((bool)in_ZR) {
      pppppdVar16 = pppppdVar5;
      func_0x00010b902c8c();
      iVar7 = (int)pppppdVar16;
      func_0x00010b902cf0();
      if (iVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*pppppdVar5)[0x46])();
        return;
      }
      ppppdVar9 = pppppdVar5[0x20];
      plVar12 = extraout_x8_00;
LAB_10b8dddf4:
      *plVar12 = (long)ppppdVar9;
      ppppdVar9 = pppppdVar5[0x21];
      plVar12[2] = (long)pppppdVar5[0x22];
      plVar12[1] = (long)ppppdVar9;
      *(undefined1 *)(plVar12 + 3) = 0;
      return;
    }
    goto code_r0x00010b9012dc;
  case 5:
    pppppdVar5 = param_4;
    FUN_10b9a9588();
    func_0x00010b902bc4(lStack_70);
    if ((bool)in_ZR) {
      func_0x00010b902c50();
      func_0x00010b902cf0();
      ppppdStack_120 = (double ****)pppppdVar5;
      if (pppppdVar5 == (double *****)(long)(char)pppppdVar5) {
        ppppdStack_118 = (double ****)((ulong)ppppdStack_118._1_7_ << 8);
        func_0x00010b8dc0b4();
      }
      else {
        ppppdStack_118 = (double ****)((ulong)ppppdStack_118._1_7_ << 8);
        func_0x00010b8de1cc();
      }
      return;
    }
    goto code_r0x00010b9012dc;
  case 6:
    pppppdVar5 = param_4;
    FUN_10b9a92f0();
    func_0x00010b902bc4(lStack_70);
    if ((bool)in_ZR) {
      func_0x00010b902c8c();
      func_0x00010b902cf0();
      if ((double)param_2 != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*pppppdVar5)[0x47])();
        return;
      }
      ppppdVar9 = pppppdVar5[0x20];
      plVar12 = extraout_x8_03;
      goto LAB_10b8dddf4;
    }
    goto code_r0x00010b9012dc;
  case 7:
    pppppdVar5 = param_4;
  case 0x14:
    FUN_10b9a9608();
    in_ZR = (int)pppppdVar5 == 0;
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = 0xe0;
    }
    pppppdVar16 = (double *****)0xe8;
    pppppdVar17 = (double *****)0xc8;
    pppppdVar13 = *(double ******)((long)param_3 + lVar1);
code_r0x00010b900edc:
    if ((bool)in_ZR) {
      pppppdVar17 = pppppdVar16;
    }
    ppppdVar9 = *(double *****)((long)param_3 + (long)pppppdVar17);
    param_1[2] = (double ****)((long *)((long)param_3 + (long)pppppdVar17))[1];
    param_1[1] = ppppdVar9;
code_r0x00010b900ee8:
    *param_1 = (double ****)pppppdVar13;
code_r0x00010b900eec:
    *(undefined1 *)(param_1 + 3) = 0;
    break;
  case 8:
    unaff_x25 = (double *****)*param_4;
    pppppdVar18 = &ppppdStack_90;
    func_0x00010b902dcc(&ppppdStack_90);
    pppppdVar8 = param_4;
    if (((ulong)param_7[1] & 1) != 0) {
      pppppdVar16 = unaff_x25 + 2;
      func_0x00010527d444();
      unaff_x25 = (double *****)((long)unaff_x25[2] + (long)unaff_x25[5]);
      unaff_x26 = &ppppdStack_b0;
      unaff_x27 = (double *****)0x2;
      ppppdStack_f0 = (double ****)pppppdVar16;
      ppppdStack_e8 = (double ****)param_4;
      while (in_ZR = (double *****)ppppdStack_f0 == unaff_x25, !(bool)in_ZR) {
        ppppdStack_d8 = (double ****)0x0;
        cStack_d0 = (char)unaff_x27;
        ppppdStack_c8 = ppppdStack_e8;
        ppppdStack_c0 = (double ****)0x0;
        unaff_x28 = (double *****)ppppdStack_e8;
        ppppdStack_e0 = (double ****)param_6;
code_r0x00010b901014:
        uStack_b8 = 0;
        pppppdVar8 = unaff_x28 + 1;
        pppppdVar11 = &ppppdStack_e0;
        func_0x00010b902dd8(&ppppdStack_b0,param_3);
        in_ZR = *(char *)(param_7 + 1) == '\x01';
        if (!(bool)in_ZR) {
code_r0x00010b901184:
          func_0x00010b902bd8();
          func_0x00010b902e34();
          goto code_r0x00010b90118c;
        }
        if (*unaff_x28 == (double ****)0x0) {
          func_0x00010b902e50();
          ppppdStack_d8 = (double ****)extraout_x8_06;
          ppppdStack_e0 = (double ****)extraout_x9_01;
        }
        else {
          func_0x00010b902e5c();
          ppppdStack_d8 = (double ****)extraout_x8_05;
          ppppdStack_e0 = (double ****)extraout_x9_00;
        }
        pppppdVar8 = pppppdVar18 + 1;
        pppppdVar10 = &ppppdStack_e0;
        pppppdVar11 = unaff_x26 + 1;
        (*(code *)(*param_3)[0x1e])(param_3);
        in_ZR = *(char *)(param_7 + 1) == '\x01';
        if (!(bool)in_ZR) goto code_r0x00010b901184;
        func_0x00010b902e34();
        func_0x00010527d4cc(&ppppdStack_f0);
      }
      goto code_r0x00010b9010ac;
    }
code_r0x00010b901094:
    func_0x00010b902bd8();
    goto code_r0x00010b90118c;
  case 9:
  case 0xa5:
  case 0xe0:
    unaff_x26 = (double *****)*param_4;
    pppppdVar8 = (double *****)unaff_x26[2];
    pppppdVar10 = param_7;
    (*(code *)(*param_3)[0x11])(&ppppdStack_90,param_3);
    if (((ulong)param_7[1] & 1) == 0) goto code_r0x00010b901094;
  case 0x2f:
    unaff_x25 = (double *****)0x0;
    pppppdVar18 = unaff_x26 + 3;
code_r0x00010b900d50:
    ppppdStack_f8 = (double ****)(param_3 + 0x29);
    pppppdVar19 = (double *****)((long)unaff_x26[2] << 4);
code_r0x00010b900d60:
    while (unaff_x26 = (double *****)0x0, pppppdVar19 != (double *****)0x0) {
code_r0x00010b900d64:
      ppppdStack_d8 = (double ****)0x0;
      cStack_d0 = '\x05';
      ppppdStack_c8 = (double ****)0x0;
      ppppdStack_e0 = (double ****)param_6;
      ppppdStack_c0 = (double ****)unaff_x25;
code_r0x00010b900d74:
      uStack_b8 = 0;
code_r0x00010b900d78:
      pppppdVar13 = &ppppdStack_b0;
code_r0x00010b900d7c:
      pppppdVar11 = &ppppdStack_e0;
code_r0x00010b900d84:
code_r0x00010b900d88:
      param_4 = pppppdVar18;
      func_0x00010b902dd8(pppppdVar13);
      in_ZR = *(char *)(param_7 + 1) == '\x01';
code_r0x00010b900d94:
      if ((bool)in_ZR) {
code_r0x00010b900d98:
        unaff_x27 = (double *****)((long)unaff_x25 + 1);
        pppppdVar13 = (double *****)(*param_3)[0x21];
        param_4 = (double *****)apppdStack_88;
        pppppdVar11 = (double *****)&pppdStack_a8;
code_r0x00010b900db8:
        pppppdVar10 = unaff_x25;
code_r0x00010b900dc0:
        (*(code *)pppppdVar13)();
code_r0x00010b900dc4:
        pppppdVar13 = (double *****)(ulong)*(byte *)(param_7 + 1);
code_r0x00010b900dc8:
        unaff_x25 = unaff_x27;
        unaff_x27 = unaff_x25;
        if (((ulong)pppppdVar13 & 1) == 0) goto code_r0x00010b900dd8;
code_r0x00010b900dcc:
        unaff_x28 = (double *****)0x1;
code_r0x00010b900dd0:
      }
      else {
code_r0x00010b900dd4:
code_r0x00010b900dd8:
        unaff_x28 = (double *****)0x0;
        unaff_x27 = unaff_x25;
code_r0x00010b900ddc:
        pppppdVar13 = (double *****)param_3[0x28];
code_r0x00010b900de0:
        *param_1 = (double ****)pppppdVar13;
code_r0x00010b900de4:
        in_register_00005008 = (double ****)ppppdStack_f8[1];
        param_2 = (double ****)*ppppdStack_f8;
code_r0x00010b900dec:
        param_1[2] = in_register_00005008;
        param_1[1] = param_2;
code_r0x00010b900df0:
        *(undefined1 *)(param_1 + 3) = 0;
      }
code_r0x00010b900df4:
      func_0x00010b902e34();
code_r0x00010b900df8:
      pppppdVar18 = pppppdVar18 + 2;
code_r0x00010b900dfc:
      unaff_x25 = unaff_x27;
      unaff_x26 = pppppdVar19 + -2;
      pppppdVar8 = param_4;
      unaff_x27 = unaff_x25;
code_r0x00010b900e04:
      if (((ulong)unaff_x28 & 1) == 0) goto code_r0x00010b90118c;
code_r0x00010b900e08:
      pppppdVar19 = unaff_x26;
    }
code_r0x00010b9010ac:
    pppppdVar8 = &ppppdStack_90;
    func_0x0001080e08ac(param_1);
code_r0x00010b90118c:
    pppppdVar5 = &ppppdStack_90;
    func_0x0001080e0bc0();
    param_4 = pppppdVar18;
    break;
  case 10:
    pppppdVar8 = (double *****)(ulong)*(uint *)(*param_4 + 2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != extraout_x8) goto code_r0x00010b9012dc;
    pppppdVar10 = (double *****)(*param_4 + 3);
    func_0x00010b902c8c();
    pppppdVar11 = param_7;
    func_0x00010b902cf0();
    uVar14 = extraout_x8_04;
    goto code_r0x00010b9012e0;
  case 0xb:
    func_0x00010b9a9710(&ppppdStack_f0,param_4);
    pppppdVar10 = (double *****)0x0;
    pppppdVar8 = (double *****)ppppdStack_f0;
    pppppdVar11 = param_7;
    func_0x00010b9009e0(&ppppdStack_b0,param_3);
    if (((ulong)param_7[1] & 1) == 0) {
      func_0x00010b902bd8();
    }
    else {
      in_ZR = cStack_a0 == '\x01';
      if ((bool)in_ZR) {
        pppppdVar8 = &ppppdStack_b0;
        func_0x00010b902c8c();
        func_0x0001080e07a8();
      }
      else {
        cStack_d0 = *(char *)(param_6 + 2);
        ppppdStack_c8 = param_6[3];
        ppppdStack_c0 = param_6[4];
        ppppdStack_d8 = param_6[1];
        ppppdStack_e0 = *param_6;
        uStack_b8 = 1;
        FUN_10b9a3a64(&ppppdStack_90,&ppppdStack_e0);
        param_6 = (double *****)0x50;
        __Znwm();
        pppppdVar10 = &ppppdStack_90;
        FUN_10b8ded74();
        FUN_10b9a3d64(apppdStack_88);
        param_5 = param_6 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_5,0x10);
          if (bVar3) {
            *param_5 = (double ****)((long)*param_5 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        pppppdVar8 = &ppppdStack_e0;
        ppppdStack_e0 = (double ****)param_6;
        func_0x00010b902c50();
        (*extraout_x9_04)();
        func_0x0001080e0c4c(ppppdStack_e0);
        do {
          in_ZR = (double ****)((long)*param_5 + -1) == (double ****)0x0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_5,0x10);
          if (bVar3) {
            *param_5 = (double ****)((long)*param_5 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((bool)in_ZR) {
          (*(code *)(*param_6)[1])(param_6);
        }
      }
    }
    pppppdVar5 = (double *****)ppppdStack_f0;
    func_0x000104bda3ac();
    break;
  case 0xc:
    FUN_10b9a9488(&ppppdStack_e0,param_4);
    pppppdVar8 = &ppppdStack_e0;
  case 0x28:
  case 0x71:
code_r0x00010b900d00:
    FUN_10b99ff08();
code_r0x00010b900d04:
code_r0x00010b900d08:
    func_0x000104bda960();
    param_2 = (double ****)0x0;
    in_register_00005008 = (double ****)0x0;
code_r0x00010b900d10:
    param_1[1] = in_register_00005008;
    *param_1 = param_2;
    param_1[3] = in_register_00005008;
    param_1[2] = param_2;
    pppppdVar5 = param_1;
code_r0x00010b900d18:
    func_0x0001080e0180();
    break;
  case 0xd:
    func_0x00010b9a97d0(&ppppdStack_90,param_4);
    ppppdVar9 = param_3[0x40];
    if (ppppdVar9 == (double ****)0x0) {
      param_5 = &ppppdStack_e0;
      func_0x00010b902dcc(&ppppdStack_e0);
      if (((ulong)param_7[1] & 1) == 0) {
code_r0x00010b9011ac:
        func_0x00010b902bd8();
      }
      else {
        pppppdVar8 = &ppppdStack_90;
        pppppdVar11 = &ppppdStack_d8;
        func_0x00010b902d44();
        if (((ulong)ppppdVar9 & 1) == 0) goto code_r0x00010b9011ac;
        func_0x00010b902cbc();
      }
      func_0x00010b902e1c();
    }
    else {
      pppppdVar8 = &ppppdStack_90;
      pppppdVar10 = param_6;
      pppppdVar11 = param_7;
      func_0x00010b906ebc(param_1);
    }
    func_0x000104bdbfa0();
    pppppdVar5 = (double *****)ppppdStack_90;
    break;
  case 0xe:
    func_0x00010b9a9810(&ppppdStack_b0,param_4);
    if (param_3[0x40] != (double ****)0x0) {
      pppppdVar8 = &ppppdStack_b0;
      pppppdVar10 = param_6;
      pppppdVar13 = param_1;
      goto code_r0x00010b900c68;
    }
    ppppdStack_90 = ppppdStack_b0;
    if (((double *****)ppppdStack_b0 != (double *****)0x0) &&
       ((double ****)ppppdStack_b0[2] != (double ****)0x0)) {
      do {
        func_0x00010b902dbc();
        ppppdStack_90 = (double ****)extraout_x8_07;
      } while (extraout_w11 != 0);
    }
    pppppdVar8 = &ppppdStack_90;
    pppppdVar11 = (double *****)0x1;
    pppppdVar10 = param_7;
    func_0x00010b900824(&ppppdStack_e0,param_3);
    pppppdVar16 = (double *****)ppppdStack_90;
    if ((double *****)ppppdStack_90 != (double *****)0x0) {
      func_0x00010b902bf4();
      pppppdVar16 = (double *****)ppppdStack_90;
    }
    if (((ulong)param_7[1] & 1) == 0) {
code_r0x00010b901198:
      func_0x00010b902bd8();
    }
    else {
      pppppdVar8 = (double *****)(ppppdStack_b0 + 4);
      pppppdVar11 = &ppppdStack_d8;
      func_0x00010b902d44();
      if (((ulong)pppppdVar16 & 1) == 0) goto code_r0x00010b901198;
      func_0x00010b902cbc();
    }
    func_0x00010b902e1c();
    goto code_r0x00010b9011a0;
  case 0xf:
    FUN_10b9a94ec(&ppppdStack_90,param_4);
    pppppdVar13 = &ppppdStack_e0;
    pppppdVar8 = (double *****)ppppdStack_90;
  case 0x16:
    pppppdVar11 = param_7;
    func_0x00010b9009e0(pppppdVar13,param_3);
    func_0x000104bddf04();
    pppppdVar5 = (double *****)ppppdStack_90;
    if (((ulong)param_7[1] & 1) != 0) {
code_r0x00010b900e5c:
      in_ZR = cStack_d0 == '\x01';
      if ((bool)in_ZR) {
        pppppdVar8 = &ppppdStack_e0;
        func_0x00010b902c8c();
        func_0x0001080e07a8();
      }
      else {
        FUN_10b9a94ec(&ppppdStack_b0,param_4);
        ppppdStack_90 = ppppdStack_b0;
        if (((double *****)ppppdStack_b0 != (double *****)0x0) &&
           ((double ****)ppppdStack_b0[2] != (double ****)0x0)) {
          do {
            func_0x00010b902dbc();
            ppppdStack_90 = (double ****)extraout_x8_09;
          } while (extraout_w11_00 != 0);
        }
        pppppdVar8 = &ppppdStack_90;
        func_0x00010b902c50();
        pppppdVar11 = (double *****)0x1;
        func_0x00010b900824();
        if ((double *****)ppppdStack_90 != (double *****)0x0) {
          func_0x00010b902bf4();
        }
        func_0x000104bddf04();
        pppppdVar5 = (double *****)ppppdStack_b0;
      }
      break;
    }
code_r0x00010b900e78:
    ppppdVar9 = param_3[0x28];
    param_3 = param_3 + 0x29;
code_r0x00010b900e80:
    *param_1 = ppppdVar9;
    in_register_00005008 = param_3[1];
    param_2 = *param_3;
code_r0x00010b900e88:
    param_1[2] = in_register_00005008;
    param_1[1] = param_2;
    goto code_r0x00010b900eec;
  case 0x10:
    goto code_r0x00010b900edc;
  case 0x11:
  case 0x30:
  case 0x3b:
  case 0x55:
  case 0x65:
  case 0xa9:
  case 0xad:
  case 0xd3:
  case 0xe6:
  case 0xf1:
    goto code_r0x00010b900df8;
  case 0x15:
    goto code_r0x00010b900e24;
  case 0x17:
  case 0x34:
  case 0x3c:
  case 0x4f:
  case 0x54:
  case 0x58:
  case 0x66:
  case 0x77:
  case 0x7d:
  case 0x91:
  case 0xae:
  case 199:
  case 0xd4:
  case 0xe7:
  case 0xf2:
    goto code_r0x00010b900e04;
  case 0x18:
    goto code_r0x00010b900e88;
  case 0x19:
  case 0x47:
  case 0x6f:
  case 0x8e:
  case 0xc0:
  case 0xdf:
    goto code_r0x00010b900d00;
  case 0x1a:
    goto code_r0x00010b900e5c;
  case 0x1b:
code_r0x00010b900c68:
    pppppdVar11 = param_7;
    func_0x00010b906f98(pppppdVar13);
code_r0x00010b9011a0:
    func_0x000104be7e7c();
    pppppdVar5 = (double *****)ppppdStack_b0;
    break;
  case 0x1d:
  case 0x1e:
    goto code_r0x00010b901014;
  case 0x1f:
    goto code_r0x00010b900ee8;
  case 0x20:
  case 0x3f:
  case 0x5b:
  case 0x69:
  case 0x87:
  case 0xa2:
  case 0xb8:
  case 0xd8:
  case 0xf5:
  case 0xff:
    goto code_r0x00010b900d74;
  case 0x21:
  case 0x40:
  case 0x88:
  case 0xb9:
  case 0xd9:
  case 0xf8:
    goto code_r0x00010b900d10;
  case 0x22:
  case 0x36:
  case 0x41:
  case 0x60:
  case 0x89:
  case 0x99:
  case 0xba:
  case 0xda:
    goto code_r0x00010b900d94;
  default:
    goto code_r0x00010b900dc0;
  case 0x24:
  case 0x43:
  case 0x82:
  case 0x8b:
  case 0x9b:
  case 0xa7:
  case 0xa8:
  case 0xbc:
  case 0xdc:
  case 0xe2:
    goto code_r0x00010b900dec;
  case 0x25:
  case 0x44:
  case 0x79:
  case 0x8c:
  case 0x96:
  case 0xbd:
  case 0xdd:
    goto code_r0x00010b900dcc;
  case 0x26:
  case 0x37:
  case 0x39:
  case 0x45:
  case 0x50:
  case 0x61:
  case 99:
  case 0x8d:
  case 0xbe:
  case 200:
  case 0xde:
    goto code_r0x00010b900de0;
  case 0x27:
  case 0x70:
  case 0xb1:
  case 0xbf:
    goto code_r0x00010b900d04;
  case 0x29:
  case 0xcb:
  case 0xe9:
    goto code_r0x00010b900d78;
  case 0x2a:
  case 0xcc:
  case 0xea:
    goto code_r0x00010b900dc4;
  case 0x2b:
  case 0xcd:
  case 0xeb:
    goto code_r0x00010b900de4;
  case 0x2c:
  case 0x33:
  case 0x57:
  case 0x5e:
  case 0x78:
  case 0x7f:
  case 0x85:
  case 0x95:
  case 0x9d:
  case 0x9f:
  case 0xce:
  case 0xd5:
  case 0xec:
  case 0xf3:
  case 0xfc:
    goto code_r0x00010b900dd0;
  case 0x2d:
  case 0x4e:
  case 0x84:
  case 0xaa:
  case 0xc6:
  case 0xcf:
  case 0xed:
    goto code_r0x00010b900dc8;
  case 0x31:
    goto code_r0x00010b900df4;
  case 0x32:
  case 0x4b:
  case 0xc3:
    goto code_r0x00010b900e14;
  case 0x38:
  case 0x5f:
  case 0x62:
  case 0x74:
    goto code_r0x00010b900e08;
  case 0x3d:
  case 0x67:
  case 0xa1:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xd6:
    goto code_r0x00010b900d50;
  case 0x46:
  case 0x6c:
    goto code_r0x00010b900d08;
  case 0x48:
  case 0x86:
  case 0xaf:
  case 0xf4:
  case 0xfe:
    goto code_r0x00010b900d60;
  case 0x49:
  case 0x97:
  case 0xc1:
  case 0xf9:
    goto code_r0x00010b900d64;
  case 0x4d:
  case 0x6a:
  case 0x98:
  case 0xa3:
  case 0xb0:
  case 0xc5:
  case 0xd1:
  case 0xef:
  case 0xf6:
  case 0xfa:
    goto code_r0x00010b900d88;
  case 0x51:
  case 0x56:
  case 0x7b:
  case 0x81:
  case 0x93:
  case 0x94:
  case 0xc9:
    goto code_r0x00010b900dfc;
  case 0x53:
  case 0xe1:
    goto code_r0x00010b900d7c;
  case 0x5a:
    goto code_r0x00010b900e20;
  case 0x5d:
  case 0x80:
  case 0xe8:
    goto code_r0x00010b900df0;
  case 0x6d:
  case 0x6e:
  case 0x72:
  case 0x73:
  case 0x7a:
  case 0x7e:
  case 0xa4:
  case 0xb2:
  case 0xf7:
    goto code_r0x00010b900db8;
  case 0x75:
    goto code_r0x00010b900ddc;
  case 0x8f:
    goto code_r0x00010b900d18;
  case 0x90:
    goto code_r0x00010b900d98;
  case 0x9e:
  case 0xfb:
    goto code_r0x00010b900d84;
  case 0xa0:
  case 0xe5:
  case 0xfd:
    goto code_r0x00010b900dd4;
  }
  func_0x00010b902bc4(lStack_70);
  if ((bool)in_ZR) {
    func_0x00010b902cf0();
    return;
  }
code_r0x00010b9012dc:
  unaff_x30 = FUN_10b9012e0;
  ___stack_chk_fail();
  uVar14 = extraout_x8_10;
  unaff_x29 = &stack0xfffffffffffffff0;
code_r0x00010b9012e0:
  pppppdVar16 = pppppdVar8;
  ppppdStack_150 = (double ****)unaff_x26;
  ppppdStack_148 = (double ****)unaff_x25;
  ppppdStack_140 = (double ****)param_4;
  ppppdStack_138 = (double ****)param_5;
  ppppdStack_130 = (double ****)param_6;
  ppppdStack_118 = (double ****)param_1;
  puStack_110 = unaff_x29;
  pcStack_108 = unaff_x30;
  func_0x00010b902c00();
  uStack_1b8 = SUB84(pppppdVar16,0);
  uStack_158 = extraout_x8_11;
  func_0x0001080e0180(auStack_1a0);
  ppppdVar9 = *pppppdVar10;
  pppppdVar16 = pppppdVar5;
  func_0x00010b9009e0(appdStack_1b1,pppppdVar5,ppppdVar9,0,pppppdVar11);
  uVar4 = cStack_1a1 == '\x01';
  if ((bool)uVar4) {
    ppppdVar9 = (double ****)appdStack_1b1;
    pppppdVar16 = pppppdVar5;
    func_0x0001080e07a8(auStack_178,pppppdVar5,ppppdVar9);
    func_0x00010b902e10();
    func_0x00010b902d74();
    goto LAB_10b901360;
  }
  if (((ulong)pppppdVar11[1] & 1) == 0) {
LAB_10b901428:
    func_0x00010b902cbc();
  }
  else {
    func_0x00010b902d0c();
    func_0x00010b902e10();
    func_0x00010b902d74();
    if (((ulong)pppppdVar11[1] & 1) == 0) goto LAB_10b901428;
    if ((pppppdVar10[2] != (double ****)0x0) && (*pppppdVar10 != (double ****)0x0)) {
      func_0x00010b902d0c();
      uVar4 = *(char *)(pppppdVar11 + 1) == '\x01';
      if ((bool)uVar4) {
        FUN_10b901de4();
        pppppdVar13 = pppppdVar5;
        func_0x00010b8dc614(pppppdVar5,pppppdVar16);
        ppppdVar9 = (double ****)appdStack_198;
        pppppdVar16 = pppppdVar5;
        ppppdStack_180 = (double ****)pppppdVar13;
        (*(code *)(*pppppdVar5)[0x1f])
                  (pppppdVar5,ppppdVar9,&ppppdStack_180,auStack_170,1,pppppdVar11);
      }
      func_0x00010b902d74();
      if (((ulong)pppppdVar11[1] & 1) == 0) goto LAB_10b901428;
    }
LAB_10b901360:
    uVar4 = (int)pppppdVar8 == 9;
    if ((bool)uVar4) goto LAB_10b901428;
    ppppdVar9 = (double ****)&uStack_1b8;
    pppppdVar16 = pppppdVar5;
    (*(code *)(*pppppdVar5)[0x15])(uVar14,pppppdVar5,ppppdVar9,appdStack_198,pppppdVar11);
  }
  func_0x00010b902e1c();
  func_0x00010b902bc4(uStack_158);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_10b90145c;
  ppppdStack_200 = (double ****)unaff_x28;
  ppppdStack_1f8 = (double ****)unaff_x27;
  ppppdStack_1f0 = (double ****)pppppdVar8;
  ppppdStack_1e8 = (double ****)pppppdVar5;
  ppppdStack_1e0 = (double ****)pppppdVar11;
  ppuStack_1d0 = &puStack_110;
  func_0x00010b902c00();
  uStack_208 = extraout_x8_13;
  if ((bRam00000001138467a8 & 1) == 0) {
    iVar7 = 0x138467a8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107c31088(0x1138467a0,&UNK_10f7ccc15);
      ___cxa_guard_release(0x1138467a8);
    }
  }
  if ((bRam00000001138467b8 & 1) == 0) {
    iVar7 = 0x138467b8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107c31088(0x1138467b0,&UNK_10f7ccc1a);
      ___cxa_guard_release(0x1138467b8);
    }
  }
  if ((bRam00000001138467c8 & 1) == 0) {
    iVar7 = 0x138467c8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107c31088(0x1138467c0,&UNK_10f7ccc21);
      ___cxa_guard_release(0x1138467c8);
    }
  }
  if ((bRam00000001138467d8 & 1) == 0) {
    iVar7 = 0x138467d8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107c31088(0x1138467d0,&UNK_10f7ccc2e);
      ___cxa_guard_release(0x1138467d8);
    }
  }
  func_0x00010b8ffd54(&lStack_2f0,pppppdVar16);
  pppppdVar13 = pppppdVar16;
  func_0x00010b8dc614(pppppdVar16,0x1138467a0);
  plVar12 = &lStack_2f0;
  ppppdStack_318 = (double ****)pppppdVar13;
  (*(code *)(*pppppdVar16)[0x1b])(auStack_310,pppppdVar16,ppppdVar9,&ppppdStack_318,plVar12);
  uVar4 = bStack_2e8 == 1;
  if ((bool)uVar4) {
    pppppdVar13 = pppppdVar16;
    (*(code *)(*pppppdVar16)[0x30])(pppppdVar16,auStack_308);
    if ((int)pppppdVar13 == 0) {
      (*(code *)(*pppppdVar16)[0x26])(&ppppdStack_318,pppppdVar16,auStack_308,&lStack_2f0);
      if ((bStack_2e8 & 1) == 0) {
        func_0x00010b902d8c();
        bStack_2e8 = 1;
        uVar14 = 0;
        if (lRam00000001138467b0 != 0) {
          do {
            func_0x00010b902cd4();
            uVar14 = extraout_x8_15;
          } while (extraout_w11_02 != 0);
        }
LAB_10b9015f4:
        *extraout_x8_12 = uVar14;
      }
      else {
        if (((double *****)ppppdStack_318 == (double *****)0x0) ||
           (*(int *)((long)ppppdStack_318 + 0xc) == 0)) {
          uVar14 = 0;
          if (lRam00000001138467b0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar14 = extraout_x8_16;
            } while (extraout_w11_03 != 0);
          }
          goto LAB_10b9015f4;
        }
        uVar4 = (double *****)ppppdStack_318 == pppppdRam00000001138467d0;
        if ((bool)uVar4) {
          uVar14 = 0;
          if (lRam00000001138467c0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar14 = extraout_x8_17;
            } while (extraout_w11_04 != 0);
          }
          goto LAB_10b9015f4;
        }
        *extraout_x8_12 = ppppdStack_318;
        ppppdStack_318 = (double ****)0x0;
      }
      func_0x000107c278f8(ppppdStack_318);
      goto LAB_10b901600;
    }
    if ((bStack_2e8 & 1) == 0) goto LAB_10b901538;
  }
  else {
LAB_10b901538:
    func_0x00010b902d8c();
    bStack_2e8 = 1;
  }
  uVar14 = 0;
  if (lRam00000001138467b0 != 0) {
    do {
      func_0x00010b902cd4();
      uVar14 = extraout_x8_14;
    } while (extraout_w11_01 != 0);
  }
  *extraout_x8_12 = uVar14;
LAB_10b901600:
  func_0x0001080e0bc0(auStack_310);
  plVar6 = &lStack_2f0;
  func_0x00010b8ffdac();
  func_0x00010b902bc4(uStack_208);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  pcStack_328 = FUN_10b901724;
  ppppdStack_340 = (double ****)pppppdVar16;
  pppuStack_330 = &ppuStack_1d0;
  (**(code **)(*plVar6 + 0x170))();
  FUN_10b9aa5f0(auStack_348,plVar12,plVar6);
  func_0x00010b902cb0();
  func_0x00010b902e3c();
  return;
}



/* Entry: 10b9012e0; end: 10b90145b;  */

void FUN_10b9012e0(undefined8 param_1,long *param_2,int param_3,long *param_4,long param_5)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 uVar7;
  undefined8 extraout_x8_05;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined1 auStack_248 [8];
  long *plStack_240;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  long *plStack_218;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [24];
  long lStack_1f0;
  byte bStack_1e8;
  undefined8 uStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  int iStack_b8;
  int aiStack_b1 [4];
  char cStack_a1;
  undefined1 auStack_a0 [8];
  int aiStack_98 [6];
  long *plStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
  iStack_b8 = param_3;
  func_0x00010b902c00();
  uStack_58 = extraout_x8;
  func_0x0001080e0180(auStack_a0);
  piVar6 = (int *)*param_4;
  plVar3 = param_2;
  func_0x00010b9009e0(aiStack_b1,param_2,piVar6,0,param_5);
  uVar1 = cStack_a1 == '\x01';
  if ((bool)uVar1) {
    piVar6 = aiStack_b1;
    plVar3 = param_2;
    func_0x0001080e07a8(auStack_78,param_2,piVar6);
    func_0x00010b902e10();
    func_0x00010b902d74();
    goto LAB_10b901360;
  }
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
LAB_10b901428:
    func_0x00010b902cbc();
  }
  else {
    func_0x00010b902d0c();
    func_0x00010b902e10();
    func_0x00010b902d74();
    if ((*(byte *)(param_5 + 8) & 1) == 0) goto LAB_10b901428;
    if ((param_4[2] != 0) && (*param_4 != 0)) {
      func_0x00010b902d0c();
      uVar1 = *(char *)(param_5 + 8) == '\x01';
      if ((bool)uVar1) {
        FUN_10b901de4();
        plVar4 = param_2;
        func_0x00010b8dc614(param_2,plVar3);
        piVar6 = aiStack_98;
        plVar3 = param_2;
        plStack_80 = plVar4;
        (**(code **)(*param_2 + 0xf8))(param_2,piVar6,&plStack_80,auStack_70,1,param_5);
      }
      func_0x00010b902d74();
      if ((*(byte *)(param_5 + 8) & 1) == 0) goto LAB_10b901428;
    }
LAB_10b901360:
    uVar1 = param_3 == 9;
    if ((bool)uVar1) goto LAB_10b901428;
    piVar6 = &iStack_b8;
    (**(code **)(*param_2 + 0xa8))(param_1,param_2,piVar6,aiStack_98,param_5);
    plVar3 = param_2;
  }
  func_0x00010b902e1c();
  func_0x00010b902bc4(uStack_58);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10b90145c;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010b902c00();
  uStack_108 = extraout_x8_01;
  if ((bRam00000001138467a8 & 1) == 0) {
    iVar2 = 0x138467a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x1138467a0,&UNK_10f7ccc15);
      ___cxa_guard_release(0x1138467a8);
    }
  }
  if ((bRam00000001138467b8 & 1) == 0) {
    iVar2 = 0x138467b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x1138467b0,&UNK_10f7ccc1a);
      ___cxa_guard_release(0x1138467b8);
    }
  }
  if ((bRam00000001138467c8 & 1) == 0) {
    iVar2 = 0x138467c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x1138467c0,&UNK_10f7ccc21);
      ___cxa_guard_release(0x1138467c8);
    }
  }
  if ((bRam00000001138467d8 & 1) == 0) {
    iVar2 = 0x138467d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x1138467d0,&UNK_10f7ccc2e);
      ___cxa_guard_release(0x1138467d8);
    }
  }
  func_0x00010b8ffd54(&lStack_1f0,plVar3);
  plVar5 = plVar3;
  func_0x00010b8dc614(plVar3,0x1138467a0);
  plVar4 = &lStack_1f0;
  plStack_218 = plVar5;
  (**(code **)(*plVar3 + 0xd8))(auStack_210,plVar3,piVar6,&plStack_218,plVar4);
  uVar1 = bStack_1e8 == 1;
  if ((bool)uVar1) {
    plVar5 = plVar3;
    (**(code **)(*plVar3 + 0x180))(plVar3,auStack_208);
    if ((int)plVar5 == 0) {
      (**(code **)(*plVar3 + 0x130))(&plStack_218,plVar3,auStack_208,&lStack_1f0);
      if ((bStack_1e8 & 1) == 0) {
        func_0x00010b902d8c();
        bStack_1e8 = 1;
        uVar7 = 0;
        if (lRam00000001138467b0 != 0) {
          do {
            func_0x00010b902cd4();
            uVar7 = extraout_x8_03;
          } while (extraout_w11_00 != 0);
        }
LAB_10b9015f4:
        *extraout_x8_00 = uVar7;
      }
      else {
        if ((plStack_218 == (long *)0x0) || (*(int *)((long)plStack_218 + 0xc) == 0)) {
          uVar7 = 0;
          if (lRam00000001138467b0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar7 = extraout_x8_04;
            } while (extraout_w11_01 != 0);
          }
          goto LAB_10b9015f4;
        }
        uVar1 = plStack_218 == plRam00000001138467d0;
        if ((bool)uVar1) {
          uVar7 = 0;
          if (lRam00000001138467c0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar7 = extraout_x8_05;
            } while (extraout_w11_02 != 0);
          }
          goto LAB_10b9015f4;
        }
        *extraout_x8_00 = plStack_218;
        plStack_218 = (long *)0x0;
      }
      func_0x000107c278f8(plStack_218);
      goto LAB_10b901600;
    }
    if ((bStack_1e8 & 1) == 0) goto LAB_10b901538;
  }
  else {
LAB_10b901538:
    func_0x00010b902d8c();
    bStack_1e8 = 1;
  }
  uVar7 = 0;
  if (lRam00000001138467b0 != 0) {
    do {
      func_0x00010b902cd4();
      uVar7 = extraout_x8_02;
    } while (extraout_w11 != 0);
  }
  *extraout_x8_00 = uVar7;
LAB_10b901600:
  func_0x0001080e0bc0(auStack_210);
  plVar5 = &lStack_1f0;
  func_0x00010b8ffdac();
  func_0x00010b902bc4(uStack_108);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    pcStack_228 = FUN_10b901724;
    plStack_240 = plVar3;
    ppuStack_230 = &puStack_d0;
    (**(code **)(*plVar5 + 0x170))();
    FUN_10b9aa5f0(auStack_248,plVar4,plVar5);
    func_0x00010b902cb0();
    func_0x00010b902e3c();
    return;
  }
  return;
}



/* Entry: 10b90145c; end: 10b901723;  */

void FUN_10b90145c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar5;
  undefined8 extraout_x8_03;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined1 auStack_188 [8];
  long *plStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long *plStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [24];
  long lStack_130;
  byte bStack_128;
  undefined8 uStack_48;
  
  func_0x00010b902c00();
  uStack_48 = extraout_x8;
  if ((bRam00000001138467a8 & 1) == 0) {
    iVar2 = 0x138467a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x1138467a0,&UNK_10f7ccc15);
      ___cxa_guard_release(0x1138467a8);
    }
  }
  if ((bRam00000001138467b8 & 1) == 0) {
    iVar2 = 0x138467b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x1138467b0,&UNK_10f7ccc1a);
      ___cxa_guard_release(0x1138467b8);
    }
  }
  if ((bRam00000001138467c8 & 1) == 0) {
    iVar2 = 0x138467c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x1138467c0,&UNK_10f7ccc21);
      ___cxa_guard_release(0x1138467c8);
    }
  }
  if ((bRam00000001138467d8 & 1) == 0) {
    iVar2 = 0x138467d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x1138467d0,&UNK_10f7ccc2e);
      ___cxa_guard_release(0x1138467d8);
    }
  }
  func_0x00010b8ffd54(&lStack_130,param_2);
  plVar3 = param_2;
  func_0x00010b8dc614(param_2,0x1138467a0);
  plVar4 = &lStack_130;
  plStack_158 = plVar3;
  (**(code **)(*param_2 + 0xd8))(auStack_150,param_2,param_3,&plStack_158,plVar4);
  uVar1 = bStack_128 == 1;
  if ((bool)uVar1) {
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x180))(param_2,auStack_148);
    if ((int)plVar3 == 0) {
      (**(code **)(*param_2 + 0x130))(&plStack_158,param_2,auStack_148,&lStack_130);
      if ((bStack_128 & 1) == 0) {
        func_0x00010b902d8c();
        bStack_128 = 1;
        uVar5 = 0;
        if (lRam00000001138467b0 != 0) {
          do {
            func_0x00010b902cd4();
            uVar5 = extraout_x8_01;
          } while (extraout_w11_00 != 0);
        }
LAB_10b9015f4:
        *param_1 = uVar5;
      }
      else {
        if ((plStack_158 == (long *)0x0) || (*(int *)((long)plStack_158 + 0xc) == 0)) {
          uVar5 = 0;
          if (lRam00000001138467b0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar5 = extraout_x8_02;
            } while (extraout_w11_01 != 0);
          }
          goto LAB_10b9015f4;
        }
        uVar1 = plStack_158 == plRam00000001138467d0;
        if ((bool)uVar1) {
          uVar5 = 0;
          if (lRam00000001138467c0 != 0) {
            do {
              func_0x00010b902cd4();
              uVar5 = extraout_x8_03;
            } while (extraout_w11_02 != 0);
          }
          goto LAB_10b9015f4;
        }
        *param_1 = plStack_158;
        plStack_158 = (long *)0x0;
      }
      func_0x000107c278f8(plStack_158);
      goto LAB_10b901600;
    }
    if ((bStack_128 & 1) == 0) goto LAB_10b901538;
  }
  else {
LAB_10b901538:
    func_0x00010b902d8c();
    bStack_128 = 1;
  }
  uVar5 = 0;
  if (lRam00000001138467b0 != 0) {
    do {
      func_0x00010b902cd4();
      uVar5 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar5;
LAB_10b901600:
  func_0x0001080e0bc0(auStack_150);
  plVar3 = &lStack_130;
  func_0x00010b8ffdac();
  func_0x00010b902bc4(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    pcStack_168 = FUN_10b901724;
    plStack_180 = param_2;
    puStack_178 = param_1;
    puStack_170 = &stack0xfffffffffffffff0;
    (**(code **)(*plVar3 + 0x170))();
    FUN_10b9aa5f0(auStack_188,plVar4,plVar3);
    func_0x00010b902cb0();
    func_0x00010b902e3c();
    return;
  }
  return;
}



/* Entry: 10b901724; end: 10b901767;  */

void FUN_10b901724(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [8];
  
  (**(code **)(*param_1 + 0x170))();
  FUN_10b9aa5f0(auStack_28,param_4,param_1);
  func_0x00010b902cb0();
  func_0x00010b902e3c();
  return;
}



/* Entry: 10b901768; end: 10b9017f3;  */

void FUN_10b901768(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *extraout_x8;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuStack_58 = &PTR_FUN_110d74158;
  uStack_50 = param_4;
  func_0x000104bd4df4(auStack_48);
  func_0x00010b902c60(*(undefined8 *)(*param_2 + 0x120));
  (*extraout_x8)();
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    FUN_10b9a8f54(param_1,auStack_48);
  }
  FUN_10b9026c0(&ppuStack_58);
  return;
}



/* Entry: 10b9017f4; end: 10b9017f7;  */

undefined8 * FUN_10b9017f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74158;
  func_0x000104bd4e40(param_1 + 2);
  return param_1;
}



/* Entry: 10b9017f8; end: 10b9018fb;  */

long * FUN_10b9017f8(long *param_1,undefined8 *param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *puVar9;
  code *extraout_x8_02;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long alStack_118 [10];
  undefined8 uStack_c8;
  long *plStack_60;
  long lStack_58;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x00010b902c00();
  uStack_38 = extraout_x8;
  if ((bRam00000001138467e8 & 1) == 0) {
    iVar5 = 0x138467e8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(0x1138467e0,&UNK_10f7ccc35);
      ___cxa_guard_release(0x1138467e8);
    }
  }
  plVar11 = param_1;
  func_0x00010b8dc614(param_1,0x1138467e0);
  lVar7 = param_3;
  plStack_60 = plVar11;
  (**(code **)(*param_1 + 0xd8))(&lStack_58,param_1,param_2,&plStack_60);
  uVar4 = *(char *)(param_3 + 8) == '\x01';
  if ((bool)uVar4) {
    param_2 = auStack_50;
    (**(code **)(*param_1 + 0x150))(param_1,param_2,param_3);
    plVar11 = (long *)(long)(int)param_1;
  }
  else {
    plVar11 = (long *)0x0;
  }
  plVar6 = &lStack_58;
  func_0x0001080e0bc0();
  func_0x00010b902bc4(uStack_38);
  if ((bool)uVar4) {
    return plVar11;
  }
  ___stack_chk_fail();
  plVar11 = plVar6;
  lVar8 = lVar7;
  func_0x00010b902c00();
  puVar9 = *(undefined8 **)(lVar8 + 0x50);
  puVar3 = puVar9 + *(long *)(lVar8 + 0x58) * 2;
  do {
    if (puVar9 == puVar3) {
      if (*(long *)(lVar8 + 0x58) == *(long *)(lVar7 + 0x60)) {
        plVar11 = alStack_118;
        FUN_10b90276c();
      }
      else {
        uVar12 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar12;
        *(long *)(lVar7 + 0x58) = *(long *)(lVar7 + 0x58) + 1;
      }
      func_0x00010b902c60(*(undefined8 *)(*plVar6 + 0x170));
      (*extraout_x8_02)();
                    /* WARNING: Could not recover jumptable at 0x00010b901a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5f6963)[(ulong)plVar11 & 0xffffffff] * 4 + 0x10b901a08))();
      return plVar11;
    }
    lVar10 = 0;
    do {
      if (lVar10 == 0x10) {
        uVar4 = 1;
        uStack_c8 = extraout_x8_01;
        if ((bRam00000001137fd078 & 1) == 0) goto LAB_10b901dac;
        while (func_0x00010b902bc4(uStack_c8), !(bool)uVar4) {
          ___stack_chk_fail();
LAB_10b901dac:
          iVar5 = 0x137fd078;
          ___cxa_guard_acquire();
          if (iVar5 != 0) {
            func_0x000107c31088(0x1137fd070,&UNK_10f7ccc53);
            ___cxa_guard_release(0x1137fd078);
          }
        }
        plVar11 = extraout_x8_00;
        FUN_10b9a8e40(extraout_x8_00,uRam00000001137fd070,2);
        *(undefined1 *)(plVar11 + 1) = 2;
        return plVar11;
      }
      pcVar1 = (char *)((long)puVar9 + lVar10);
      pcVar2 = (char *)((long)param_2 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar1 == *pcVar2);
    puVar9 = puVar9 + 2;
  } while( true );
}



/* Entry: 10b9018fc; end: 10b901de3;  */

void FUN_10b9018fc(long param_1,long *param_2,undefined8 *param_3,undefined8 param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  code *extraout_x8_00;
  long lVar9;
  undefined8 uVar10;
  long alStack_b8 [10];
  undefined8 uStack_68;
  
  plVar6 = param_2;
  lVar7 = param_5;
  func_0x00010b902c00();
  puVar8 = *(undefined8 **)(lVar7 + 0x50);
  puVar3 = puVar8 + *(long *)(lVar7 + 0x58) * 2;
  do {
    if (puVar8 == puVar3) {
      if (*(long *)(lVar7 + 0x58) == *(long *)(param_5 + 0x60)) {
        plVar6 = alStack_b8;
        FUN_10b90276c();
      }
      else {
        uVar10 = *param_3;
        puVar3[1] = param_3[1];
        *puVar3 = uVar10;
        *(long *)(param_5 + 0x58) = *(long *)(param_5 + 0x58) + 1;
      }
      func_0x00010b902c60(*(undefined8 *)(*param_2 + 0x170));
      (*extraout_x8_00)();
                    /* WARNING: Could not recover jumptable at 0x00010b901a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5f6963)[(ulong)plVar6 & 0xffffffff] * 4 + 0x10b901a08))();
      return;
    }
    lVar9 = 0;
    do {
      if (lVar9 == 0x10) {
        uVar4 = 1;
        uStack_68 = extraout_x8;
        if ((bRam00000001137fd078 & 1) == 0) goto LAB_10b901dac;
        while (func_0x00010b902bc4(uStack_68), !(bool)uVar4) {
          ___stack_chk_fail();
LAB_10b901dac:
          iVar5 = 0x137fd078;
          ___cxa_guard_acquire();
          if (iVar5 != 0) {
            func_0x000107c31088(0x1137fd070,&UNK_10f7ccc53);
            ___cxa_guard_release(0x1137fd078);
          }
        }
        FUN_10b9a8e40(param_1,uRam00000001137fd070,2);
        *(undefined1 *)(param_1 + 8) = 2;
        return;
      }
      pcVar1 = (char *)((long)puVar8 + lVar9);
      pcVar2 = (char *)((long)param_3 + lVar9);
      lVar9 = lVar9 + 1;
    } while (*pcVar1 == *pcVar2);
    puVar8 = puVar8 + 2;
  } while( true );
}



/* Entry: 10b901de4; end: 10b901e3f;  */

undefined8 FUN_10b901de4(void)

{
  int iVar1;
  
  if ((bRam00000001138467f8 & 1) == 0) {
    iVar1 = 0x138467f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1138467f0,&UNK_10f7ccc3c);
      ___cxa_guard_release(0x1138467f8);
    }
  }
  return 0x1138467f0;
}



/* Entry: 10b901e40; end: 10b902077;  */

void FUN_10b901e40(long *param_1,undefined4 param_2,undefined8 param_3,long **param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar3;
  int extraout_w10;
  long **unaff_x20;
  long **unaff_x21;
  long *plVar4;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  long **pplStack_a8;
  undefined1 *puStack_a0;
  undefined1 auStack_88 [8];
  undefined **ppuStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  long *plStack_50;
  undefined8 uStack_48;
  
  func_0x00010b902e44();
  plVar3 = param_1;
  func_0x00010b902c00();
  uStack_48 = extraout_x8_00;
  (**(code **)(*plVar3 + 0x160))(auStack_88);
  if (((ulong)unaff_x20[1] & 1) == 0) {
    *extraout_x8 = 0;
    goto LAB_10b902044;
  }
  if (pplStack_78 == (long **)0x0) {
    plStack_b8 = (long *)0x0;
    ppuStack_b0 = (undefined **)0x0;
    pplStack_a8 = (long **)0x0;
    func_0x00010b902d64();
    plVar3 = plStack_b8;
  }
  else {
    FUN_10b901de4();
    plVar4 = param_1;
    func_0x00010b8dc614(param_1,plVar3);
    param_2 = SUB84(auStack_68,0);
    param_4 = &plStack_50;
    plStack_50 = plVar4;
    (**(code **)(*param_1 + 0xd8))(&plStack_b8,param_1);
    if (((ulong)unaff_x20[1] & 1) == 0) {
LAB_10b901eec:
      plStack_50 = (long *)0x0;
    }
    else {
      param_2 = SUB84(&ppuStack_b0,0);
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x180))();
      if ((int)plVar3 != 0) goto LAB_10b901eec;
      param_2 = SUB84(&ppuStack_b0,0);
      param_4 = unaff_x20;
      (**(code **)(*param_1 + 0x158))(&plStack_50,param_1);
    }
    func_0x0001080e0bc0(&plStack_b8);
    if (((ulong)unaff_x20[1] & 1) == 0) {
      *extraout_x8 = 0;
      plVar3 = plStack_50;
    }
    else {
      if (plStack_50 == (long *)0x0) {
        if (param_1[3] == 0) {
          func_0x00010b9006d8(&plStack_c8,param_1,auStack_68);
          if ((plStack_c8 != (long *)0x0) && (plStack_c8[2] != 0)) {
            do {
              func_0x00010b902d34();
            } while (extraout_w10 != 0);
          }
          plStack_b8 = plStack_c8;
          param_2 = SUB84(&plStack_b8,0);
          func_0x000107c27d74(&plStack_50);
          if (plStack_b8 != (long *)0x0) {
            func_0x00010b902bf4();
          }
          func_0x000104bddf04(plStack_c8);
        }
        else {
          uStack_c0 = 0;
          plStack_b8 = (long *)0x10b9026ec;
          pplStack_a8 = &plStack_50;
          puStack_a0 = auStack_88;
          ppuStack_b0 = &PTR_FUN_110d74198;
          param_2 = SUB84(&uStack_c0,0);
          unaff_x21 = &plStack_b8;
          FUN_10b8e3408();
          (*(code *)*ppuStack_b0)(&ppuStack_b0);
          func_0x000105276914(uStack_c0);
        }
        param_4 = unaff_x21;
        plVar3 = plStack_50;
        if (plStack_50 != (long *)0x0) goto LAB_10b90200c;
      }
      else {
LAB_10b90200c:
        plVar3 = plStack_50;
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
      }
      ppuStack_b0 = ppuStack_80;
      pplStack_a8 = pplStack_78;
      plStack_b8 = plVar3;
      func_0x00010b902d64();
      plVar3 = plStack_50;
      if (plStack_b8 != (long *)0x0) {
        func_0x00010b902bf4();
        plVar3 = plStack_50;
      }
    }
  }
  if (plVar3 != (long *)0x0) {
    func_0x00010b902bf4();
  }
LAB_10b902044:
  puVar1 = &uStack_70;
  func_0x0001080e0bc0();
  func_0x00010b902bc4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar2 = (undefined8 *)0x30;
    __Znwm();
    plVar3 = *param_4;
    *param_4 = (long *)0x0;
    plVar4 = param_4[1];
    puVar2[5] = param_4[2];
    puVar2[4] = plVar4;
    *puVar2 = &PTR_FUN_110d7ef28;
    puVar2[1] = 1;
    *(undefined4 *)(puVar2 + 2) = param_2;
    puVar2[3] = plVar3;
    *puVar1 = puVar2;
    return;
  }
  return;
}



/* Entry: 10b902078; end: 10b9020d3;  */

void FUN_10b902078(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  uVar2 = *param_3;
  *param_3 = 0;
  uVar3 = param_3[1];
  puVar1[5] = param_3[2];
  puVar1[4] = uVar3;
  *puVar1 = &PTR_FUN_110d7ef28;
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 2) = param_2;
  puVar1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b9020d4; end: 10b90223b;  */

void FUN_10b9020d4(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,long param_5,
                  undefined8 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  long lStack_50;
  long lStack_48;
  
  (**(code **)(*param_2 + 0x168))(&uStack_a0,param_2,param_3,param_5);
  FUN_10b90223c(&lStack_48,&uStack_a0);
  func_0x0001080e0c4c(uStack_a0);
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
    *param_1 = 0;
    goto LAB_10b90221c;
  }
  if (lStack_48 != 0) {
    FUN_10b8dea80(param_1,lStack_48,param_2,param_5,0);
    goto LAB_10b90221c;
  }
  uStack_90 = *(undefined1 *)(param_4 + 2);
  uStack_88 = param_4[3];
  uStack_80 = param_4[4];
  uStack_98 = param_4[1];
  uStack_a0 = *param_4;
  uStack_78 = 1;
  FUN_10b9a3a64(auStack_68,&uStack_a0);
  (*(code *)*param_6)(&lStack_50,param_2,param_3,auStack_68,param_5,param_6);
  FUN_10b9a3d64(auStack_60);
  lVar5 = lStack_50;
  if (lStack_50 == 0) {
LAB_10b902210:
    lStack_50 = 0;
  }
  else {
    FUN_10b8dc834(param_2,param_3,param_5);
    uVar4 = (uint)param_2;
    lVar5 = lStack_50;
    if (uVar4 == 0) {
      if (lStack_50 == 0) goto LAB_10b902210;
    }
    else {
      *(byte *)(lStack_50 + 0x80) = (byte)param_2 & 1;
      *(byte *)(lStack_50 + 0x82) = (byte)(uVar4 >> 1) & 1;
      *(byte *)(lStack_50 + 0x83) = (byte)(uVar4 >> 2) & 1;
    }
    plVar1 = (long *)(lStack_50 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar5;
  func_0x00010b902ba0(lStack_50);
LAB_10b90221c:
  func_0x00010b902b7c(lStack_48);
  return;
}



/* Entry: 10b90223c; end: 10b902303;  */

void FUN_10b90223c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if ((lVar4 != 0) && (___dynamic_cast(lVar4,&PTR_DAT_110d74130,&PTR_DAT_110d72810,0), lVar4 != 0))
  {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b902304; end: 10b90238b;  */

void FUN_10b902304(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,long param_5,
                  undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  long lStack_50;
  long lStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 400))();
  if (((ulong)plVar4 & 1) == 0) {
    FUN_10b901724(param_2,param_3,param_5,0xb);
    *param_1 = 0;
    return;
  }
  (**(code **)(*param_2 + 0x168))(&uStack_a0,param_2,param_3,param_5);
  FUN_10b90223c(&lStack_48,&uStack_a0);
  func_0x0001080e0c4c(uStack_a0);
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
    *param_1 = 0;
    goto LAB_10b90221c;
  }
  if (lStack_48 != 0) {
    FUN_10b8dea80(param_1,lStack_48,param_2,param_5,0);
    goto LAB_10b90221c;
  }
  uStack_90 = *(undefined1 *)(param_4 + 2);
  uStack_88 = param_4[3];
  uStack_80 = param_4[4];
  uStack_98 = param_4[1];
  uStack_a0 = *param_4;
  uStack_78 = 1;
  FUN_10b9a3a64(auStack_68,&uStack_a0);
  (*(code *)*param_6)(&lStack_50,param_2,param_3,auStack_68,param_5,param_6);
  FUN_10b9a3d64(auStack_60);
  lVar5 = lStack_50;
  if (lStack_50 == 0) {
LAB_10b902210:
    lStack_50 = 0;
  }
  else {
    FUN_10b8dc834(param_2,param_3,param_5);
    uVar3 = (uint)param_2;
    lVar5 = lStack_50;
    if (uVar3 == 0) {
      if (lStack_50 == 0) goto LAB_10b902210;
    }
    else {
      *(byte *)(lStack_50 + 0x80) = (byte)param_2 & 1;
      *(byte *)(lStack_50 + 0x82) = (byte)(uVar3 >> 1) & 1;
      *(byte *)(lStack_50 + 0x83) = (byte)(uVar3 >> 2) & 1;
    }
    plVar4 = (long *)(lStack_50 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = lVar5;
  func_0x00010b902ba0(lStack_50);
LAB_10b90221c:
  func_0x00010b902b7c(lStack_48);
  return;
}



/* Entry: 10b90238c; end: 10b902417;  */

void FUN_10b90238c(long *param_1)

{
  long lVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  func_0x00010b900930(&lStack_38);
  if (lStack_38 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010b8c3b70(&lStack_40,&lStack_38);
    lVar1 = lStack_40;
    if (lStack_40 == 0) {
      FUN_10b99f5f8(auStack_48,&UNK_10f7ccc41);
      func_0x00010b902cb0();
      func_0x00010b902e3c();
    }
    else {
      lStack_40 = 0;
    }
    *param_1 = lVar1;
    func_0x000104bddf04(lStack_40);
    if (lStack_38 != 0) {
      func_0x00010b902bf4();
    }
  }
  return;
}



/* Entry: 10b902418; end: 10b9024cf;  */

void FUN_10b902418(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_2;
  FUN_10b989e38(param_2,0,&UNK_10f7ccc89);
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = 0x55;
  }
  else {
    lVar2 = 0x29;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1,lVar2 + param_2[1]);
  func_0x00010b902e2c();
  func_0x00010b902e2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,*param_2,param_2[1]);
  func_0x00010b902e2c();
  return;
}



/* Entry: 10b9024d0; end: 10b902567;  */

void FUN_10b9024d0(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  uVar4 = param_2[2];
  if (3 < uVar4) {
    lVar6 = 0;
    lVar5 = param_2[1];
    do {
      if (lVar6 == 4) {
        plVar7 = (long *)*param_2;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          lVar5 = param_2[1];
          uVar4 = param_2[2];
        }
        *param_1 = plVar7;
        param_1[1] = lVar5 + 4;
        param_1[2] = uVar4 - 4;
        uVar3 = 1;
        goto LAB_10b90255c;
      }
      pcVar1 = (char *)(lVar5 + lVar6);
      pcVar2 = (char *)(lVar6 + 0x1133fad78);
      lVar6 = lVar6 + 1;
    } while (*pcVar1 == *pcVar2);
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10b90255c:
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 10b902568; end: 10b90258f;  */

undefined8 FUN_10b902568(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b9a8d98(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b902590; end: 10b9025a3;  */

void FUN_10b902590(void)

{
  FUN_10b9026c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9025a4; end: 10b9026bf;  */

long * FUN_10b9025a4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_90 [16];
  long *plStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar4 = param_2;
  lVar3 = param_6;
  func_0x00010b902c00();
  plVar2 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = extraout_x8;
  (**(code **)(*plVar4 + 0xd8))(auStack_78,param_2,&uStack_58,param_5,lVar3);
  uVar1 = *(char *)(param_6 + 8) == '\x01';
  if ((bool)uVar1) {
    func_0x00010b902d20();
    if (((ulong)plVar2 & 1) == 0) {
      func_0x00010b902e24(&plStack_80,param_2);
      uStack_c0 = *(undefined8 *)(param_1 + 8);
      uStack_b8 = 0;
      func_0x00010b902e68();
      FUN_10b9018fc(auStack_90,param_2,auStack_70,&uStack_c0,param_6);
      plVar4 = (long *)(ulong)*(byte *)(param_6 + 8);
      uVar1 = *(byte *)(param_6 + 8) == 1;
      if ((bool)uVar1) {
        func_0x0001080ee31c(*(long *)(param_1 + 0x10) + 0x10,&plStack_80);
        FUN_10b9a9020();
      }
      FUN_10b9a8d98(auStack_90);
      func_0x000107c278f8();
      plVar2 = plStack_80;
    }
    else {
      plVar4 = (long *)0x1;
    }
  }
  else {
    plVar4 = (long *)0x0;
  }
  func_0x00010b902d74();
  func_0x00010b902bc4(uStack_48);
  if ((bool)uVar1) {
    return plVar4;
  }
  ___stack_chk_fail();
  *plVar2 = (long)&PTR_FUN_110d74158;
  func_0x000104bd4e40(plVar2 + 2);
  return plVar2;
}



/* Entry: 10b9026c0; end: 10b90275f;  */

undefined8 * FUN_10b9026c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74158;
  func_0x000104bd4e40(param_1 + 2);
  return param_1;
}



/* Entry: 10b902760; end: 10b90276b;  */

void FUN_10b902760(void)

{
  return;
}



/* Entry: 10b90276c; end: 10b9028ab;  */

void FUN_10b90276c(long *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  uVar4 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar4 <= 0x7ffffffffffffff - uVar4) {
    if (uVar4 >> 0x3d == 0) {
      uVar7 = (uVar4 << 3) / 5;
    }
    else {
      uVar7 = uVar4 << 3;
      if (4 < uVar4 >> 0x3d) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    if (0x7fffffffffffffe < uVar7) {
      uVar7 = 0x7ffffffffffffff;
    }
    uVar4 = uVar1;
    if (uVar1 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar1 >> 0x3b == 0) {
      lVar8 = *param_2;
      puVar5 = (undefined8 *)(uVar4 << 4);
      __Znwm();
      lVar3 = *param_2;
      lVar9 = param_2[1];
      puVar6 = puVar5;
      if ((lVar3 != 0) && (lVar3 != param_3)) {
        _memmove(puVar5,lVar3,param_3 - lVar3);
        puVar6 = (undefined8 *)((long)puVar5 + (param_3 - lVar3));
      }
      uVar10 = *param_4;
      puVar6[1] = param_4[1];
      *puVar6 = uVar10;
      if ((param_3 != 0) && (lVar2 = lVar3 + lVar9 * 0x10, param_3 != lVar2)) {
        _memmove(puVar6 + 2,param_3,lVar2 - param_3);
      }
      if (lVar3 != 0) {
        FUN_10b9001f4(param_2,param_2,param_2[2]);
        lVar9 = param_2[1];
      }
      *param_2 = (long)puVar5;
      param_2[1] = lVar9 + 1;
      param_2[2] = uVar4;
      *param_1 = (long)puVar5 + (param_3 - lVar8);
      return;
    }
  }
  _abort();
  pcStack_68 = FUN_10b9028ac;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10b9028dc(&uStack_71,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10b9028ac; end: 10b9028db;  */

void FUN_10b9028ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_10b9028dc(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10b9028dc; end: 10b902963;  */

void FUN_10b9028dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined1 *extraout_x8_02;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  func_0x00010b902e44();
  func_0x00010b902c00();
  uStack_48 = extraout_x8_00;
  FUN_10b902980(auStack_60,1);
  FUN_10b9029d4(lStack_50,param_2);
  lVar2 = lStack_50;
  lStack_50 = 0;
  FUN_10b902964(extraout_x8,lVar2 + 0x18);
  FUN_10b902aa0();
  func_0x00010b902bc4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_01 = puVar1;
  extraout_x8_01[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_68 = FUN_10b902964;
    lStack_78 = extraout_x8_01[1];
    puStack_80 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    if (lStack_78 != 0) {
      do {
        func_0x00010b902dbc();
        puVar3 = extraout_x8_02;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_80);
    func_0x000107c284e8(&puStack_80);
    return;
  }
  return;
}



/* Entry: 10b902964; end: 10b90297f;  */

void FUN_10b902964(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x00010b902dbc();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b902980; end: 10b9029a7;  */

long FUN_10b902980(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b9029a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b9029a8; end: 10b9029d3;  */

undefined8 * FUN_10b9029a8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x222222222222223) {
    puVar1 = (undefined8 *)(param_2 * 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d741c8;
  FUN_10b920b84(param_1 + 3);
  return param_1;
}



/* Entry: 10b9029d4; end: 10b902a03;  */

undefined8 * FUN_10b9029d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d741c8;
  FUN_10b920b84(param_1 + 3);
  return param_1;
}



/* Entry: 10b902a04; end: 10b902a07;  */

void FUN_10b902a04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d741c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b902a08; end: 10b902a1b;  */

void FUN_10b902a08(void)

{
  func_0x00010b902a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b902a1c; end: 10b902a3b;  */

void FUN_10b902a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b902a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b902a3c; end: 10b902a9f;  */

void FUN_10b902a3c(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b902dbc();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b902aa0; end: 10b902adf;  */

void FUN_10b902aa0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b902ae0; end: 10b902b6f;  */

void FUN_10b902ae0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *extraout_x8;
  long lVar5;
  
  func_0x00010b902e44();
  plVar4 = (long *)0x88;
  __Znwm();
  FUN_10b91f0d8();
  plVar1 = plVar4 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *extraout_x8 = (long)plVar4;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b902b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}



/* Entry: 10b902b70; end: 10b902e7b;  */

void FUN_10b902b70(void)

{
  return;
}



/* Entry: 10b902e7c; end: 10b902f07;  */

undefined8 * FUN_10b902e7c(undefined8 *param_1,long *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  FUN_10b902f08();
  *puVar1 = &PTR_FUN_110d74238;
  puVar1[9] = param_2;
  puStack_40 = &UNK_10f7cccc5;
  uStack_38 = 0xe;
  (**(code **)(*param_2 + 0x58))(puVar1 + 10,param_2,&puStack_40);
  param_1[0x12] = 0;
  param_1[0xd] = &UNK_10dd5b8b0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return param_1;
}



/* Entry: 10b902f08; end: 10b902f83;  */

undefined8 * FUN_10b902f08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d74498;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b902f84; end: 10b902f87;  */

undefined8 * FUN_10b902f84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74238;
  FUN_10b904f00(param_1 + 0xd);
  func_0x0001080e4278(param_1 + 10);
  *param_1 = &PTR_DAT_110d74498;
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b902f88; end: 10b902f9b;  */

void FUN_10b902f88(void)

{
  func_0x00010b902f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b902f9c; end: 10b90300b;  */

void FUN_10b902f9c(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b90699c();
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001080e3e30(&uStack_40);
  func_0x0001080e1410(param_1 + 0x50,&uStack_40);
  func_0x0001080e4278(&uStack_40);
  plVar1 = (long *)(param_1 + 0x68);
  FUN_10b90300c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  func_0x00010b90694c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (plVar1[2] != 0) {
    uVar3 = plVar1[3];
    if (0x7f < uVar3) {
      lVar2 = plVar1[3];
      if (lVar2 != 0) {
        lVar6 = 8;
        for (lVar4 = 0; lVar4 != lVar2; lVar4 = lVar4 + 1) {
          if (-1 < *(char *)(*plVar1 + lVar4)) {
            func_0x0001080e0bc0(plVar1[1] + lVar6);
            lVar2 = plVar1[3];
          }
          lVar6 = lVar6 + 0x28;
        }
        __ZdlPv();
        plVar1[5] = 0;
        *plVar1 = (long)&UNK_10dd5b8b0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        plVar1[3] = 0;
      }
      return;
    }
    if (uVar3 != 0) {
      lVar2 = 8;
      for (uVar5 = 0; uVar5 != uVar3; uVar5 = uVar5 + 1) {
        if (-1 < *(char *)(*plVar1 + uVar5)) {
          func_0x0001080e0bc0(plVar1[1] + lVar2);
          uVar3 = plVar1[3];
        }
        lVar2 = lVar2 + 0x28;
      }
      plVar1[2] = 0;
      _memset(*plVar1,0x80,uVar3 + 8);
      *(undefined1 *)(*plVar1 + uVar3) = 0xff;
      uVar3 = plVar1[3];
      lVar2 = 6;
      if (uVar3 != 7) {
        lVar2 = uVar3 - (uVar3 >> 3);
      }
      plVar1[5] = lVar2 - plVar1[2];
    }
  }
  return;
}



/* Entry: 10b90300c; end: 10b9031b7;  */

void FUN_10b90300c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_1[2] != 0) {
    uVar2 = param_1[3];
    if (0x7f < uVar2) {
      lVar1 = param_1[3];
      if (lVar1 != 0) {
        lVar5 = 8;
        for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
          if (-1 < *(char *)(*param_1 + lVar3)) {
            func_0x0001080e0bc0(param_1[1] + lVar5);
            lVar1 = param_1[3];
          }
          lVar5 = lVar5 + 0x28;
        }
        __ZdlPv();
        param_1[5] = 0;
        *param_1 = (long)&UNK_10dd5b8b0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      return;
    }
    if (uVar2 != 0) {
      lVar1 = 8;
      for (uVar4 = 0; uVar4 != uVar2; uVar4 = uVar4 + 1) {
        if (-1 < *(char *)(*param_1 + uVar4)) {
          func_0x0001080e0bc0(param_1[1] + lVar1);
          uVar2 = param_1[3];
        }
        lVar1 = lVar1 + 0x28;
      }
      param_1[2] = 0;
      _memset(*param_1,0x80,uVar2 + 8);
      *(undefined1 *)(*param_1 + uVar2) = 0xff;
      uVar2 = param_1[3];
      lVar1 = 6;
      if (uVar2 != 7) {
        lVar1 = uVar2 - (uVar2 >> 3);
      }
      param_1[5] = lVar1 - param_1[2];
    }
  }
  return;
}



/* Entry: 10b9031b8; end: 10b9031e7;  */

undefined ** FUN_10b9031b8(undefined **param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 extraout_x8;
  undefined **extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined *puVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  char *pcVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  int *piVar20;
  undefined *puVar21;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
  ppuVar16 = &PTR_DAT_110d7e708;
  ppuVar9 = &PTR_DAT_110d74118;
  lVar10 = 0;
  ___dynamic_cast();
  if (param_1 != (undefined **)0x0) {
    return param_1;
  }
  ___cxa_bad_cast();
  func_0x00010b90699c();
  uStack_58 = extraout_x8;
  if (((ulong)param_1[0x13] & 1) == 0) {
    ppuVar18 = (undefined **)param_1[9];
    ppuVar5 = param_1;
    func_0x00010b906a00();
    func_0x00010b900824(auStack_78);
    in_ZR = *(char *)(lVar10 + 8) == '\x01';
    ppuVar6 = ppuVar9;
    ppuVar9 = ppuVar5;
    if ((bool)in_ZR) {
      ppuVar18 = (undefined **)param_1[9];
      func_0x00010b906a20();
      ppuVar6 = ppuVar16 + 1;
      ppuVar9 = param_1 + 0xb;
      (**(code **)(*ppuVar18 + 0xf8))();
    }
    ppuVar16 = ppuVar6;
    param_1 = ppuVar18;
    func_0x00010b906a68();
  }
  func_0x00010b90694c(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b906d44();
  func_0x00010b90699c();
  uStack_58 = extraout_x8_01;
  FUN_10b9034e0();
  ppuVar6 = ppuVar16;
  FUN_10b9055b0();
  lVar10 = 0;
  uVar13 = (ulong)ppuVar6 >> 7;
  puVar11 = param_1[0x10];
  puVar19 = param_1[0xd];
  do {
    uVar13 = uVar13 & (ulong)puVar11;
    uVar14 = *(ulong *)(puVar19 + uVar13);
    uVar15 = uVar14 ^ ((ulong)ppuVar6 & 0x7f) * 0x101010101010101;
    for (uVar15 = uVar15 + 0xfefefefefefefeff & (uVar15 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar3 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar21 = (undefined *)
                (uVar13 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & (ulong)puVar11);
      piVar20 = (int *)(param_1[0xe] + (long)puVar21 * 0x28);
      if (*piVar20 == (int)ppuVar16 && piVar20[1] == (int)((ulong)ppuVar16 >> 0x20)) {
        uVar4 = puVar11 == puVar21;
        if ((bool)uVar4) goto LAB_10b903384;
        ppuVar16 = (undefined **)param_1[9];
        func_0x00010b906a20();
        (**(code **)(*ppuVar16 + 0x128))(auStack_78,ppuVar16,piVar20 + 4,ppuVar6);
        if (((ulong)ppuVar9[1] & 1) == 0) goto LAB_10b9034bc;
        plVar7 = (long *)param_1[9];
        (**(code **)(*plVar7 + 0x1a8))(plVar7,auStack_70);
        if (((ulong)plVar7 & 1) == 0) {
          puVar2 = (ulong *)(puVar19 + (long)puVar21);
          for (pcVar17 = (char *)((long)puVar2 + 1); *pcVar17 < -1;
              pcVar17 = pcVar17 + ((ulong)puVar8 & 0xffffffff)) {
            uStack_80 = *(undefined8 *)pcVar17;
            puVar8 = &uStack_80;
            func_0x000107c27e58();
          }
          ppuVar16 = (undefined **)(piVar20 + 2);
          func_0x0001080e0bc0();
          uVar15 = 0;
          param_1[0xf] = param_1[0xf] + -1;
          puVar11 = (undefined *)((long)puVar2 + (-8 - (long)param_1[0xd]));
          uVar13 = *(ulong *)(param_1[0xd] + ((ulong)puVar11 & (ulong)param_1[0x10]));
          uVar12 = 0xfe;
          uVar13 = uVar13 & ~uVar13 << 6 & 0x8080808080808080;
          uVar4 = uVar13 == 0;
          if ((!(bool)uVar4) && (uVar14 = *puVar2 & ~*puVar2 << 6 & 0x8080808080808080, uVar14 != 0)
             ) {
            uVar14 = uVar14 >> 7;
            uVar15 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar1 = (int)((ulong)LZCOUNT(uVar13) >> 3) +
                    ((uint)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
            uVar4 = uVar1 == 8;
            uVar15 = (ulong)(uVar1 < 8);
            uVar12 = 0x80;
            if (uVar1 >= 8) {
              uVar12 = 0xfe;
            }
          }
          *(undefined1 *)puVar2 = uVar12;
          param_1[0xd][((ulong)param_1[0x10] & (ulong)puVar11) + ((ulong)param_1[0x10] & 7) + 1] =
               uVar12;
          param_1[0x12] = param_1[0x12] + uVar15;
LAB_10b9034bc:
          *(undefined1 *)extraout_x8_00 = 0;
          *(undefined1 *)(extraout_x8_00 + 4) = 0;
        }
        else {
          ppuVar16 = extraout_x8_00;
          FUN_10b904f7c(extraout_x8_00,auStack_78);
        }
        func_0x00010b906a68();
        goto LAB_10b9034c8;
      }
    }
    uVar4 = (uVar14 & ~uVar14 << 6 & 0x8080808080808080) == 0;
    if (!(bool)uVar4) {
LAB_10b903384:
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 4) = 0;
      ppuVar16 = ppuVar6;
LAB_10b9034c8:
      func_0x00010b90694c(uStack_58);
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        ppuVar6 = ppuVar16;
        func_0x00010b8c2aac();
        ppuVar9 = (undefined **)0x1138468a4;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar9 = ppuVar6 + 3;
        }
        return (undefined **)((ulong)ppuVar16 & 0xffffffff | (ulong)*(uint *)ppuVar9 << 0x20);
      }
      return ppuVar16;
    }
    lVar10 = lVar10 + 8;
    uVar13 = lVar10 + uVar13;
  } while( true );
}



/* Entry: 10b9031e8; end: 10b9032a7;  */

long * FUN_10b9031e8(long *param_1,long *param_2,long *param_3,long param_4)

{
  uint uVar1;
  ulong *puVar2;
  uint *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  long *plVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x00010b90699c();
  uStack_48 = extraout_x8;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    plVar16 = (long *)param_1[9];
    plVar14 = param_1;
    func_0x00010b906a00();
    func_0x00010b900824(auStack_68);
    in_ZR = *(char *)(param_4 + 8) == '\x01';
    plVar5 = param_3;
    param_3 = plVar14;
    if ((bool)in_ZR) {
      plVar16 = (long *)param_1[9];
      func_0x00010b906a20();
      plVar5 = param_2 + 1;
      param_3 = param_1 + 0xb;
      (**(code **)(*plVar16 + 0xf8))();
    }
    param_2 = plVar5;
    param_1 = plVar16;
    func_0x00010b906a68();
  }
  func_0x00010b90694c(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b906d44();
  func_0x00010b90699c();
  uStack_48 = extraout_x8_01;
  FUN_10b9034e0();
  plVar5 = param_2;
  FUN_10b9055b0();
  lVar7 = 0;
  uVar11 = (ulong)plVar5 >> 7;
  uVar8 = param_1[0x10];
  lVar17 = param_1[0xd];
  do {
    uVar11 = uVar11 & uVar8;
    uVar12 = *(ulong *)(lVar17 + uVar11);
    uVar13 = uVar12 ^ ((ulong)plVar5 & 0x7f) * 0x101010101010101;
    for (uVar13 = uVar13 + 0xfefefefefefefeff & (uVar13 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar19 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar11 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar8;
      piVar18 = (int *)(param_1[0xe] + uVar19 * 0x28);
      if (*piVar18 == (int)param_2 && piVar18[1] == (int)((ulong)param_2 >> 0x20)) {
        uVar4 = uVar8 == uVar19;
        if ((bool)uVar4) goto LAB_10b903384;
        plVar14 = (long *)param_1[9];
        func_0x00010b906a20();
        (**(code **)(*plVar14 + 0x128))(auStack_68,plVar14,piVar18 + 4,plVar5);
        if ((*(byte *)(param_3 + 1) & 1) == 0) goto LAB_10b9034bc;
        plVar5 = (long *)param_1[9];
        (**(code **)(*plVar5 + 0x1a8))(plVar5,auStack_60);
        if (((ulong)plVar5 & 1) == 0) {
          puVar2 = (ulong *)(lVar17 + uVar19);
          for (pcVar15 = (char *)((long)puVar2 + 1); *pcVar15 < -1;
              pcVar15 = pcVar15 + ((ulong)puVar6 & 0xffffffff)) {
            uStack_70 = *(undefined8 *)pcVar15;
            puVar6 = &uStack_70;
            func_0x000107c27e58();
          }
          plVar14 = (long *)(piVar18 + 2);
          func_0x0001080e0bc0();
          uVar8 = 0;
          param_1[0xf] = param_1[0xf] + -1;
          puVar9 = (undefined1 *)((long)puVar2 + (-8 - param_1[0xd]));
          uVar11 = *(ulong *)(param_1[0xd] + ((ulong)puVar9 & param_1[0x10]));
          uVar10 = 0xfe;
          uVar11 = uVar11 & ~uVar11 << 6 & 0x8080808080808080;
          uVar4 = uVar11 == 0;
          if ((!(bool)uVar4) && (uVar13 = *puVar2 & ~*puVar2 << 6 & 0x8080808080808080, uVar13 != 0)
             ) {
            uVar13 = uVar13 >> 7;
            uVar8 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar1 = (int)((ulong)LZCOUNT(uVar11) >> 3) +
                    ((uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
            uVar4 = uVar1 == 8;
            uVar8 = (ulong)(uVar1 < 8);
            uVar10 = 0x80;
            if (uVar1 >= 8) {
              uVar10 = 0xfe;
            }
          }
          *(undefined1 *)puVar2 = uVar10;
          *(undefined1 *)(param_1[0xd] + (param_1[0x10] & 7U) + (param_1[0x10] & (ulong)puVar9) + 1)
               = uVar10;
          param_1[0x12] = param_1[0x12] + uVar8;
LAB_10b9034bc:
          *(undefined1 *)extraout_x8_00 = 0;
          *(undefined1 *)(extraout_x8_00 + 4) = 0;
        }
        else {
          plVar14 = extraout_x8_00;
          FUN_10b904f7c(extraout_x8_00,auStack_68);
        }
        func_0x00010b906a68();
        goto LAB_10b9034c8;
      }
    }
    uVar4 = (uVar12 & ~uVar12 << 6 & 0x8080808080808080) == 0;
    if (!(bool)uVar4) {
LAB_10b903384:
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 4) = 0;
      plVar14 = plVar5;
LAB_10b9034c8:
      func_0x00010b90694c(uStack_48);
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        plVar5 = plVar14;
        func_0x00010b8c2aac();
        puVar3 = (uint *)0x1138468a4;
        if (plVar5 != (long *)0x0) {
          puVar3 = (uint *)(plVar5 + 3);
        }
        return (long *)((ulong)plVar14 & 0xffffffff | (ulong)*puVar3 << 0x20);
      }
      return plVar14;
    }
    lVar7 = lVar7 + 8;
    uVar11 = lVar7 + uVar11;
  } while( true );
}



/* Entry: 10b9032a8; end: 10b9034df;  */

long * FUN_10b9032a8(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  long *plVar5;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000028;
  
  func_0x00010b906d44();
  func_0x00010b90699c();
  in_stack_00000028 = extraout_x8_00;
  FUN_10b9034e0();
  plVar5 = param_2;
  FUN_10b9055b0();
  lVar6 = 0;
  uVar10 = (ulong)plVar5 >> 7;
  uVar7 = *(ulong *)(param_1 + 0x80);
  lVar15 = *(long *)(param_1 + 0x68);
  do {
    uVar10 = uVar10 & uVar7;
    uVar11 = *(ulong *)(lVar15 + uVar10);
    uVar12 = uVar11 ^ ((ulong)plVar5 & 0x7f) * 0x101010101010101;
    for (uVar12 = uVar12 + 0xfefefefefefefeff & (uVar12 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar17 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar10 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar7;
      piVar16 = (int *)(*(long *)(param_1 + 0x70) + uVar17 * 0x28);
      if (*piVar16 == (int)param_2 && piVar16[1] == (int)((ulong)param_2 >> 0x20)) {
        uVar4 = uVar7 == uVar17;
        if ((bool)uVar4) goto LAB_10b903384;
        plVar13 = *(long **)(param_1 + 0x48);
        func_0x00010b906a20();
        (**(code **)(*plVar13 + 0x128))(&stack0x00000008,plVar13,piVar16 + 4,plVar5);
        if ((*(byte *)(param_3 + 8) & 1) == 0) goto LAB_10b9034bc;
        plVar5 = *(long **)(param_1 + 0x48);
        (**(code **)(*plVar5 + 0x1a8))(plVar5,&stack0x00000010);
        if (((ulong)plVar5 & 1) == 0) {
          puVar2 = (ulong *)(lVar15 + uVar17);
          for (pcVar14 = (char *)((long)puVar2 + 1); *pcVar14 < -1;
              pcVar14 = pcVar14 + ((ulong)puVar8 & 0xffffffff)) {
            in_stack_00000000 = *(undefined8 *)pcVar14;
            puVar8 = (undefined1 *)register0x00000008;
            func_0x000107c27e58();
          }
          plVar13 = (long *)(piVar16 + 2);
          func_0x0001080e0bc0();
          uVar7 = 0;
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
          puVar8 = (undefined1 *)((long)puVar2 + (-8 - *(long *)(param_1 + 0x68)));
          uVar10 = *(ulong *)(*(long *)(param_1 + 0x68) +
                             ((ulong)puVar8 & *(ulong *)(param_1 + 0x80)));
          uVar9 = 0xfe;
          uVar10 = uVar10 & ~uVar10 << 6 & 0x8080808080808080;
          uVar4 = uVar10 == 0;
          if ((!(bool)uVar4) && (uVar12 = *puVar2 & ~*puVar2 << 6 & 0x8080808080808080, uVar12 != 0)
             ) {
            uVar12 = uVar12 >> 7;
            uVar7 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            uVar1 = (int)((ulong)LZCOUNT(uVar10) >> 3) +
                    ((uint)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3);
            uVar4 = uVar1 == 8;
            uVar7 = (ulong)(uVar1 < 8);
            uVar9 = 0x80;
            if (uVar1 >= 8) {
              uVar9 = 0xfe;
            }
          }
          *(undefined1 *)puVar2 = uVar9;
          *(undefined1 *)
           (*(long *)(param_1 + 0x68) + (*(ulong *)(param_1 + 0x80) & 7) +
            (*(ulong *)(param_1 + 0x80) & (ulong)puVar8) + 1) = uVar9;
          *(ulong *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + uVar7;
LAB_10b9034bc:
          *(undefined1 *)extraout_x8 = 0;
          *(undefined1 *)(extraout_x8 + 4) = 0;
        }
        else {
          plVar13 = extraout_x8;
          FUN_10b904f7c(extraout_x8,&stack0x00000008);
        }
        func_0x00010b906a68();
        goto LAB_10b9034c8;
      }
    }
    uVar4 = (uVar11 & ~uVar11 << 6 & 0x8080808080808080) == 0;
    if (!(bool)uVar4) {
LAB_10b903384:
      *(undefined1 *)extraout_x8 = 0;
      *(undefined1 *)(extraout_x8 + 4) = 0;
      plVar13 = plVar5;
LAB_10b9034c8:
      func_0x00010b90694c(in_stack_00000028);
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        plVar5 = plVar13;
        func_0x00010b8c2aac();
        puVar3 = (uint *)0x1138468a4;
        if (plVar5 != (long *)0x0) {
          puVar3 = (uint *)(plVar5 + 3);
        }
        return (long *)((ulong)plVar13 & 0xffffffff | (ulong)*puVar3 << 0x20);
      }
      return plVar13;
    }
    lVar6 = lVar6 + 8;
    uVar10 = lVar6 + uVar10;
  } while( true );
}



/* Entry: 10b9034e0; end: 10b90351b;  */

ulong FUN_10b9034e0(ulong param_1)

{
  uint *puVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010b8c2aac();
  puVar1 = (uint *)0x1138468a4;
  if (uVar2 != 0) {
    puVar1 = (uint *)(uVar2 + 0x18);
  }
  return param_1 & 0xffffffff | (ulong)*puVar1 << 0x20;
}



/* Entry: 10b90351c; end: 10b9036df;  */

long * FUN_10b90351c(long *param_1,undefined1 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x00010b90699c();
  plVar10 = param_1;
  puVar2 = param_2;
  uStack_48 = extraout_x8;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    plVar10 = (long *)param_1[9];
    plVar11 = param_1;
    func_0x00010b906a00();
    puVar2 = (undefined1 *)(param_3 + 8);
    (**(code **)(*plVar10 + 200))(auStack_68,plVar10,puVar2,plVar11);
    in_ZR = 0;
    if (*(char *)(param_4 + 8) == '\x01') {
      FUN_10b9034e0();
      lVar9 = param_1[9];
      func_0x0001080e08ac(auStack_a8,auStack_68);
      FUN_10b8db52c(auStack_88,lVar9,auStack_a8);
      puVar2 = param_2;
      FUN_10b9055b0(param_2,(ulong)param_2 >> 0x20);
      lVar9 = 0;
      plVar10 = param_1 + 0xd;
      uVar5 = (ulong)puVar2 >> 7;
      while( true ) {
        uVar5 = uVar5 & param_1[0x10];
        uVar6 = *(ulong *)(*plVar10 + uVar5);
        uVar7 = uVar6 ^ ((ulong)puVar2 & 0x7f) * 0x101010101010101;
        for (uVar7 = uVar7 + 0xfefefefefefefeff & (uVar7 ^ 0xffffffffffffffff) & 0x8080808080808080;
            uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
          uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          lVar8 = param_1[0xe];
          plVar11 = (long *)(uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                            param_1[0x10]);
          piVar4 = (int *)(lVar8 + (long)plVar11 * 0x28);
          in_ZR = 1;
          if (*piVar4 == (int)param_2 && piVar4[1] == (int)((ulong)param_2 >> 0x20))
          goto LAB_10b9036a8;
        }
        in_ZR = (uVar6 & ~uVar6 << 6 & 0x8080808080808080) == 0;
        if (!(bool)in_ZR) break;
        lVar9 = lVar9 + 8;
        uVar5 = lVar9 + uVar5;
      }
      FUN_10b905624(plVar10,puVar2);
      puVar3 = (undefined8 *)(param_1[0xe] + (long)plVar10 * 0x28);
      *puVar3 = param_2;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[1] = 0;
      func_0x0001080e0180();
      *(byte *)(param_1[0xd] + (long)plVar10) = (byte)puVar2 & 0x7f;
      func_0x00010b906cb4();
      lVar8 = param_1[0xe];
      plVar11 = plVar10;
LAB_10b9036a8:
      plVar10 = (long *)(lVar8 + (long)plVar11 * 0x28 + 8);
      puVar2 = auStack_88;
      func_0x0001080df8d0();
      func_0x00010b906d28();
      func_0x00010b906a68();
    }
    func_0x00010b906c28();
  }
  func_0x00010b90694c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *plVar10 = (long)&PTR_FUN_110d74278;
    plVar10[1] = 1;
    plVar10[2] = (long)puVar2;
    FUN_10b902e7c(plVar10 + 3);
    plVar10[0x17] = 0;
    func_0x0001080e0180(plVar10 + 0x18);
    return plVar10;
  }
  return plVar10;
}



/* Entry: 10b9036e0; end: 10b90375f;  */

undefined8 * FUN_10b9036e0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d74278;
  param_1[1] = 1;
  param_1[2] = param_2;
  FUN_10b902e7c(param_1 + 3);
  param_1[0x17] = 0;
  func_0x0001080e0180(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b903760; end: 10b903763;  */

undefined8 * FUN_10b903760(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74278;
  func_0x0001080e0bc0(param_1 + 0x18);
  FUN_10b905a4c(param_1[0x17]);
  func_0x00010b902f34(param_1 + 3);
  return param_1;
}



/* Entry: 10b903764; end: 10b903777;  */

void FUN_10b903764(void)

{
  func_0x00010b903724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b903778; end: 10b90382b;  */

/* WARNING: Possible PIC construction at 0x00010b9037a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b9037a8) */
/* WARNING: Removing unreachable block (ram,0x00010b9037e8) */
/* WARNING: Removing unreachable block (ram,0x00010b9037d8) */
/* WARNING: Removing unreachable block (ram,0x00010b90380c) */
/* WARNING: Removing unreachable block (ram,0x00010b903810) */

long * FUN_10b903778(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010b90699c();
  FUN_10b902f9c(lVar2 + 0x18);
  plVar1 = (long *)(param_1 + 0xb8);
  if (*plVar1 != 0) {
    *plVar1 = 0;
    FUN_10b905a4c();
  }
  return plVar1;
}



/* Entry: 10b90382c; end: 10b903843;  */

void FUN_10b90382c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  *param_1 = *(undefined8 *)(lVar1 + 0x140);
  uVar2 = *(undefined8 *)(lVar1 + 0x148);
  param_1[2] = *(undefined8 *)(lVar1 + 0x150);
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b903844; end: 10b903883;  */

void FUN_10b903844(undefined8 param_1,long param_2)

{
  func_0x00010b906978();
  func_0x00010b906b88();
  if (param_2 == (char)param_2) {
    func_0x00010b8dc0b4();
  }
  else {
    func_0x00010b8de1cc();
  }
  return;
}



/* Entry: 10b903884; end: 10b9038e3;  */

void FUN_10b903884(long *param_1,double param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_3 + 0x10);
  if (param_2 == 0.0) {
    *param_1 = plVar1[0x20];
    lVar2 = plVar1[0x21];
    param_1[2] = plVar1[0x22];
    param_1[1] = lVar2;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8dba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x238))();
  return;
}



/* Entry: 10b9038e4; end: 10b90394b;  */

void FUN_10b9038e4(void)

{
  func_0x00010b906a00();
  func_0x00010b906af4();
  func_0x00010b906c30();
  return;
}



/* Entry: 10b90394c; end: 10b903a17;  */

void FUN_10b90394c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  code *pcVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x00010b906978();
  func_0x00010b906b88();
  if (*(int *)(param_2 + 0x18) == 2) {
    lVar1 = param_2;
    FUN_10b9a5b88();
    lStack_40 = param_2;
    lStack_38 = lVar1;
  }
  else {
    if (*(int *)(param_2 + 0x18) == 1) {
      lStack_40 = param_2 + 0x20;
      lStack_38 = *(long *)(param_2 + 0x10);
      pcVar2 = *(code **)(*param_1 + 0x80);
      goto LAB_10b8dbac4;
    }
    lStack_40 = param_2 + 0x20;
    lStack_38 = *(long *)(param_2 + 0x10);
  }
  pcVar2 = *(code **)(*param_1 + 0x78);
LAB_10b8dbac4:
  (*pcVar2)(extraout_x8,param_1,&lStack_40,param_3);
  return;
}



/* Entry: 10b903a18; end: 10b903a4b;  */

void FUN_10b903a18(undefined8 param_1)

{
  long *unaff_x20;
  
  func_0x00010b9069c4();
                    /* WARNING: Could not recover jumptable at 0x00010b903a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x68))(param_1);
  return;
}



/* Entry: 10b903a4c; end: 10b903a8f;  */

void FUN_10b903a4c(void)

{
  long *unaff_x22;
  
  func_0x00010b906b00();
                    /* WARNING: Could not recover jumptable at 0x00010b903a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 0x100))();
  return;
}



/* Entry: 10b903a90; end: 10b903a97;  */

undefined8 FUN_10b903a90(void)

{
  return 0;
}



/* Entry: 10b903a98; end: 10b903adf;  */

void FUN_10b903a98(long param_1,long param_2)

{
  long extraout_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010b906a00();
  func_0x00010b906af4();
  (**(code **)(extraout_x8 + 0x120))(uVar1,param_2 + 8);
  return;
}



/* Entry: 10b903ae0; end: 10b903be7;  */

void FUN_10b903ae0(long param_1,long param_2,int param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_2b0 [32];
  char *pcStack_290;
  undefined8 uStack_288;
  char *pcStack_270;
  undefined8 auStack_268 [3];
  char *pcStack_250;
  undefined8 uStack_248;
  char *pcStack_230;
  undefined8 auStack_228 [3];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1c0;
  undefined1 auStack_150 [32];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  lVar3 = param_2;
  func_0x00010b90699c();
  uStack_48 = extraout_x8;
  if ((bRam00000001137fd080 & 1) == 0) {
    lVar2 = 0x1137fd080;
    lVar3 = lVar2;
    ___cxa_guard_acquire();
    if ((int)lVar3 != 0) {
      func_0x000107c31088(0x1137fd0b0,"Map");
      func_0x000107c31088(0x1137fd0b8,&UNK_10f7cccd4);
      ___cxa_guard_release(0x1137fd080);
      lVar3 = lVar2;
    }
  }
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010b906a20();
  func_0x00010b8dbf98(auStack_68,uVar9,(long)param_3 * 8 + 0x1137fd0b0,lVar3);
  iVar6 = (int)lVar3;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    func_0x00010b90692c();
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010b906a20();
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = uVar10;
    uStack_80 = uVar9;
    func_0x00010b906a40(&uStack_98);
    func_0x00010b906abc();
  }
  func_0x0001080e0bc0(auStack_68);
  func_0x00010b90694c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b906d7c();
  func_0x00010b90699c();
  uStack_f8 = extraout_x8_00;
  if ((bRam00000001137fd088 & 1) == 0) {
    iVar1 = 0x137fd088;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd0c0,&DAT_10f3dd81d);
      func_0x000107c31088(0x1137fd0c8,&DAT_10f68571c);
      ___cxa_guard_release(0x1137fd088);
    }
  }
  lVar3 = *(long *)(param_2 + 0x10);
  func_0x00010b8dc614(lVar3,(long)iVar6 * 8 + 0x1137fd0c0);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  lStack_100 = lVar3;
  FUN_10b9031b8();
  uStack_130 = uVar9;
  uStack_128 = param_5;
  uStack_120 = param_6;
  uStack_118 = param_7;
  func_0x00010b906a40(&uStack_130);
  uVar4 = *(ulong *)(param_2 + 0x10);
  param_1 = param_1 + 8;
  plVar7 = &lStack_100;
  puVar8 = &uStack_130;
  func_0x00010b8dbbec(auStack_150,uVar4,param_1);
  func_0x00010b906bbc();
  func_0x00010b90694c(uStack_f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = uVar4;
  func_0x00010b90699c();
  uVar9 = *(undefined8 *)(uVar5 + 0x10);
  uStack_1c0 = extraout_x8_01;
  func_0x00010b906a00();
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1f0 = uVar9;
  uStack_1d8 = uVar5;
  func_0x00010b906a40(&uStack_1f0);
  pcStack_230 = "entries";
  auStack_228[0] = 7;
  func_0x00010b8dbcac(auStack_210,*(undefined8 *)(uVar4 + 0x10),param_1 + 8,&pcStack_230,&uStack_1f0
                     );
  while( true ) {
    pcStack_250 = "next";
    uStack_248 = 4;
    func_0x00010b8dbcac(&pcStack_230,*(undefined8 *)(uVar4 + 0x10),auStack_208,&pcStack_250,
                        &uStack_1f0);
    uVar9 = *(undefined8 *)(uVar4 + 0x10);
    pcStack_270 = "done";
    auStack_268[0] = 4;
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_02 + 0xd0))(&pcStack_250,uVar9,auStack_228,&pcStack_270);
    func_0x00010b906b70();
    uVar5 = uVar4;
    FUN_10b903ef4(uVar4,&pcStack_250,uVar9);
    if ((uVar5 & 1) != 0) break;
    uVar9 = *(undefined8 *)(uVar4 + 0x10);
    pcStack_290 = "value";
    uStack_288 = 5;
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_03 + 0xd0))(&pcStack_270,uVar9,auStack_228,&pcStack_290);
    uVar9 = *(undefined8 *)(uVar4 + 0x10);
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_04 + 0xe0))(&pcStack_290,uVar9,auStack_268,0);
    uVar9 = *(undefined8 *)(uVar4 + 0x10);
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_05 + 0xe0))(auStack_2b0,uVar9,auStack_268,1);
    (**(code **)(*plVar7 + 0x10))(plVar7,&pcStack_290,auStack_2b0,puVar8);
    func_0x00010b906bbc();
    func_0x0001080e0bc0(&pcStack_290);
    func_0x0001080e0bc0(&pcStack_270);
    func_0x0001080e0bc0(&pcStack_250);
    func_0x0001080e0bc0(&pcStack_230);
  }
  func_0x0001080e0bc0(&pcStack_250);
  func_0x0001080e0bc0(&pcStack_230);
  func_0x0001080e0bc0(auStack_210);
  func_0x00010b90694c(uStack_1c0);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b90698c();
  func_0x00010b906af4();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8_06 + 0x140);
  func_0x00010b906b9c();
                    /* WARNING: Could not recover jumptable at 0x00010b906b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b903be8; end: 10b903cf7;  */

void FUN_10b903be8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_210 [32];
  char *pcStack_1f0;
  undefined8 uStack_1e8;
  char *pcStack_1d0;
  undefined8 auStack_1c8 [3];
  char *pcStack_1b0;
  undefined8 uStack_1a8;
  char *pcStack_190;
  undefined8 auStack_188 [3];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_120;
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x00010b906d7c();
  func_0x00010b90699c();
  uStack_58 = extraout_x8;
  if ((bRam00000001137fd088 & 1) == 0) {
    iVar1 = 0x137fd088;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd0c0,&DAT_10f3dd81d);
      func_0x000107c31088(0x1137fd0c8,&DAT_10f68571c);
      ___cxa_guard_release(0x1137fd088);
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x00010b8dc614(lVar2,(long)param_3 * 8 + 0x1137fd0c0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lStack_60 = lVar2;
  FUN_10b9031b8();
  uStack_90 = uVar7;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  func_0x00010b906a40(&uStack_90);
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  lVar2 = unaff_x19 + 8;
  plVar5 = &lStack_60;
  puVar6 = &uStack_90;
  FUN_10b8dbbec(auStack_b0,uVar3,lVar2);
  func_0x00010b906bbc();
  func_0x00010b90694c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = uVar3;
  func_0x00010b90699c();
  uVar7 = *(undefined8 *)(uVar4 + 0x10);
  uStack_120 = extraout_x8_00;
  func_0x00010b906a00();
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_150 = uVar7;
  uStack_138 = uVar4;
  func_0x00010b906a40(&uStack_150);
  pcStack_190 = "entries";
  auStack_188[0] = 7;
  func_0x00010b8dbcac(auStack_170,*(undefined8 *)(uVar3 + 0x10),lVar2 + 8,&pcStack_190,&uStack_150);
  while( true ) {
    pcStack_1b0 = "next";
    uStack_1a8 = 4;
    func_0x00010b8dbcac(&pcStack_190,*(undefined8 *)(uVar3 + 0x10),auStack_168,&pcStack_1b0,
                        &uStack_150);
    uVar7 = *(undefined8 *)(uVar3 + 0x10);
    pcStack_1d0 = "done";
    auStack_1c8[0] = 4;
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_01 + 0xd0))(&pcStack_1b0,uVar7,auStack_188,&pcStack_1d0);
    func_0x00010b906b70();
    uVar4 = uVar3;
    FUN_10b903ef4(uVar3,&pcStack_1b0,uVar7);
    if ((uVar4 & 1) != 0) break;
    uVar7 = *(undefined8 *)(uVar3 + 0x10);
    pcStack_1f0 = "value";
    uStack_1e8 = 5;
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_02 + 0xd0))(&pcStack_1d0,uVar7,auStack_188,&pcStack_1f0);
    uVar7 = *(undefined8 *)(uVar3 + 0x10);
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_03 + 0xe0))(&pcStack_1f0,uVar7,auStack_1c8,0);
    uVar7 = *(undefined8 *)(uVar3 + 0x10);
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_04 + 0xe0))(auStack_210,uVar7,auStack_1c8,1);
    (**(code **)(*plVar5 + 0x10))(plVar5,&pcStack_1f0,auStack_210,puVar6);
    func_0x00010b906bbc();
    func_0x0001080e0bc0(&pcStack_1f0);
    func_0x0001080e0bc0(&pcStack_1d0);
    func_0x0001080e0bc0(&pcStack_1b0);
    func_0x0001080e0bc0(&pcStack_190);
  }
  func_0x0001080e0bc0(&pcStack_1b0);
  func_0x0001080e0bc0(&pcStack_190);
  func_0x0001080e0bc0(auStack_170);
  func_0x00010b90694c(uStack_120);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b90698c();
  func_0x00010b906af4();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8_05 + 0x140);
  func_0x00010b906b9c();
                    /* WARNING: Could not recover jumptable at 0x00010b906b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b903cf8; end: 10b903ef3;  */

void FUN_10b903cf8(ulong param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 uVar2;
  undefined1 auStack_160 [32];
  char *pcStack_140;
  undefined8 uStack_138;
  char *pcStack_120;
  undefined8 auStack_118 [3];
  char *pcStack_100;
  undefined8 uStack_f8;
  char *pcStack_e0;
  undefined8 auStack_d8 [3];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_70;
  
  uVar1 = param_1;
  func_0x00010b90699c();
  uVar2 = *(undefined8 *)(uVar1 + 0x10);
  uStack_70 = extraout_x8;
  func_0x00010b906a00();
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = uVar2;
  uStack_88 = uVar1;
  func_0x00010b906a40(&uStack_a0);
  pcStack_e0 = "entries";
  auStack_d8[0] = 7;
  func_0x00010b8dbcac(auStack_c0,*(undefined8 *)(param_1 + 0x10),param_2 + 8,&pcStack_e0,&uStack_a0)
  ;
  while( true ) {
    pcStack_100 = "next";
    uStack_f8 = 4;
    func_0x00010b8dbcac(&pcStack_e0,*(undefined8 *)(param_1 + 0x10),auStack_b8,&pcStack_100,
                        &uStack_a0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcStack_120 = "done";
    auStack_118[0] = 4;
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_00 + 0xd0))(&pcStack_100,uVar2,auStack_d8,&pcStack_120);
    func_0x00010b906b70();
    uVar1 = param_1;
    FUN_10b903ef4(param_1,&pcStack_100,uVar2);
    if ((uVar1 & 1) != 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcStack_140 = "value";
    uStack_138 = 5;
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_01 + 0xd0))(&pcStack_120,uVar2,auStack_d8,&pcStack_140);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_02 + 0xe0))(&pcStack_140,uVar2,auStack_118,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010b906b70();
    func_0x00010b906c90();
    (**(code **)(extraout_x8_03 + 0xe0))(auStack_160,uVar2,auStack_118,1);
    (**(code **)(*param_3 + 0x10))(param_3,&pcStack_140,auStack_160,param_4);
    func_0x00010b906bbc();
    func_0x0001080e0bc0(&pcStack_140);
    func_0x0001080e0bc0(&pcStack_120);
    func_0x0001080e0bc0(&pcStack_100);
    func_0x0001080e0bc0(&pcStack_e0);
  }
  func_0x0001080e0bc0(&pcStack_100);
  func_0x0001080e0bc0(&pcStack_e0);
  func_0x0001080e0bc0(auStack_c0);
  func_0x00010b90694c(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b90698c();
  func_0x00010b906af4();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8_04 + 0x140);
  func_0x00010b906b9c();
                    /* WARNING: Could not recover jumptable at 0x00010b906b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b903ef4; end: 10b903f17;  */

void FUN_10b903ef4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  
  func_0x00010b90698c();
  func_0x00010b906af4();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8 + 0x140);
  func_0x00010b906b9c();
                    /* WARNING: Could not recover jumptable at 0x00010b906b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b903f18; end: 10b904033;  */

void FUN_10b903f18(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_128 [32];
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long alStack_98 [4];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  lVar4 = param_3;
  func_0x00010b90699c();
  uStack_58 = extraout_x8;
  if ((bRam00000001137fd098 & 1) == 0) {
    lVar4 = 0x1137fd098;
    ___cxa_guard_acquire();
    if ((int)lVar4 != 0) {
      func_0x000107c31088(0x1137fd090,&DAT_10f45dba3);
      lVar4 = 0x1137fd098;
      ___cxa_guard_release(0x1137fd098);
    }
  }
  plVar5 = *(long **)(param_3 + 0x10);
  func_0x00010b906a20();
  lVar3 = 0x1137fd090;
  func_0x00010b8dbf98(auStack_78,plVar5,0x1137fd090,lVar4);
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    func_0x00010b90692c();
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    plVar5 = alStack_98;
    func_0x00010b8dba34(alStack_98,param_2);
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010b906a20();
    uStack_b8 = 1;
    uStack_c8 = uVar6;
    plStack_c0 = plVar5;
    uStack_b0 = uVar1;
    func_0x00010b906a40(&uStack_c8);
    func_0x00010b906abc();
    func_0x0001080e0bc0(alStack_98);
  }
  puVar2 = auStack_78;
  func_0x0001080e0bc0();
  func_0x00010b90694c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10b904034;
  plStack_100 = plVar5;
  lStack_f8 = param_4;
  lStack_f0 = param_3;
  uStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010b90699c();
  lVar4 = *(long *)(puVar2 + 0x10);
  uStack_108 = extraout_x8_01;
  func_0x00010b906a08();
  func_0x00010b906d70();
  (**(code **)(extraout_x8_02 + 0x88))(auStack_128,lVar4,lVar3);
  uVar1 = extraout_x8_00;
  func_0x0001080e08ac(extraout_x8_00,auStack_128);
  func_0x00010b906a68();
  func_0x00010b90694c(uStack_108);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b906b00();
                    /* WARNING: Could not recover jumptable at 0x00010b9040dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x108))(plVar5,lVar4 + 8,extraout_x8_00,lVar3 + 8,uVar1);
  return;
}



/* Entry: 10b904034; end: 10b9040df;  */

void FUN_10b904034(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar1;
  long *unaff_x22;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x00010b90699c();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uStack_38 = extraout_x8;
  func_0x00010b906a08();
  func_0x00010b906d70();
  (**(code **)(extraout_x8_00 + 0x88))(auStack_58,uVar1,param_3);
  func_0x0001080e08ac(param_1,auStack_58);
  func_0x00010b906a68();
  func_0x00010b90694c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b906b00();
                    /* WARNING: Could not recover jumptable at 0x00010b9040dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 0x108))();
  return;
}



/* Entry: 10b9040e0; end: 10b9040e7;  */

long * FUN_10b9040e0(long *param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_1;
  plVar2 = param_3;
  func_0x0001080e0d20();
  *plVar1 = *plVar2;
  lVar3 = plVar2[1];
  plVar1[2] = plVar2[2];
  plVar1[1] = lVar3;
  *(char *)(plVar1 + 3) = (char)plVar2[3];
  *plVar2 = 0;
  lStack_38 = 0;
  lStack_30 = 0;
  plVar1 = &lStack_38;
  uStack_28 = extraout_x8;
  func_0x0001080e01a8();
  param_3[2] = lStack_30;
  param_3[1] = lStack_38;
  *(undefined1 *)(param_3 + 3) = 0;
  func_0x0001080e0ce0(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001080e0df8();
  while (plVar1 != (long *)param_1[1]) {
    func_0x0001080e0bc0();
    plVar1 = (long *)(*param_1 + 0x20);
    *param_1 = (long)plVar1;
  }
  return param_1;
}



/* Entry: 10b9040e8; end: 10b90414f;  */

void FUN_10b9040e8(void)

{
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010b906978();
  FUN_10b9017f8();
  FUN_10b8dd210();
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  return;
}



/* Entry: 10b904150; end: 10b904497;  */

void FUN_10b904150(long param_1,undefined8 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long lVar14;
  undefined8 *extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 *puVar15;
  undefined8 *extraout_x8_05;
  long *extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined1 auStack_168 [32];
  undefined8 auStack_148 [4];
  undefined8 uStack_128;
  undefined8 *puStack_c0;
  ulong uStack_b8;
  undefined8 auStack_b0 [3];
  undefined8 *apuStack_98 [4];
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [3];
  undefined8 uStack_58;
  
  lVar20 = param_1;
  func_0x00010b90699c();
  uStack_58 = extraout_x8;
  func_0x00010b906a00();
  if (*(long *)(param_1 + 0xb8) == 0) {
    puVar7 = (undefined8 *)0x50;
    __Znwm();
    func_0x00010b8dffa4();
    plVar8 = *(long **)(param_1 + 0x10);
    do {
      func_0x00010b906a10();
    } while (extraout_w10 != 0);
    ppuVar10 = apuStack_98;
    apuStack_98[0] = puVar7;
    (**(code **)(*plVar8 + 0x70))(&puStack_78);
    func_0x0001080e0c4c(apuStack_98[0]);
    bVar1 = *(byte *)(lVar20 + 8);
    if ((bVar1 & 1) == 0) {
      func_0x00010b906c50();
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined8 **)(param_1 + 0xb8) = puVar7;
      FUN_10b905a4c(uVar9);
      func_0x0001080e07a8(apuStack_98,*(undefined8 *)(param_1 + 0x10),apuStack_70);
      ppuVar10 = apuStack_98;
      func_0x0001080df8d0(param_1 + 0xc0);
      func_0x00010b906d28();
      puVar7 = (undefined8 *)0x0;
    }
    func_0x00010b906c28();
    FUN_10b905a4c();
    if (bVar1 != 0) goto LAB_10b90422c;
  }
  else {
LAB_10b90422c:
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    ppuVar10 = (undefined8 **)(param_1 + 0xc0);
    FUN_10b8dc71c(&puStack_78,puVar7,ppuVar10,lVar20);
    if ((*(byte *)(lVar20 + 8) & 1) == 0) {
LAB_10b904350:
      func_0x00010b906c50();
    }
    else {
      puVar7 = *(undefined8 **)(param_1 + 0x10);
      ppuVar10 = apuStack_70;
      func_0x00010b8dfb54(puVar7,ppuVar10,param_2,lVar20);
      if ((*(byte *)(lVar20 + 8) & 1) == 0) goto LAB_10b904350;
      plVar8 = (long *)*param_2;
      lVar17 = *(long *)(param_1 + 0x10);
      func_0x0001080e08ac(apuStack_98,*(long *)(param_1 + 0xb8) + 0x10);
      func_0x0001080e08ac(&uStack_b8,*(long *)(param_1 + 0xb8) + 0x30);
      puVar7 = (undefined8 *)0x40;
      __Znwm();
      plVar18 = puVar7 + 1;
      *plVar18 = 1;
      *puVar7 = &PTR_DAT_110d746a8;
      puVar16 = puVar7;
      func_0x00010b8c2aac();
      func_0x00010b8c3770();
      puVar7[2] = puVar16;
      FUN_10b8e0ec8(puVar7 + 3,*(undefined8 *)(lVar17 + 0x18));
      lVar20 = lVar17;
      func_0x00010b8dcabc(lVar17,apuStack_98);
      puVar7[5] = lVar20;
      func_0x00010b8dcabc(lVar17,&uStack_b8);
      puVar7[6] = lVar17;
      uVar9 = 0;
      if (*param_3 != 0) {
        do {
          func_0x00010b906a90();
          uVar9 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      puVar7[7] = uVar9;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = *plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puStack_c0 = puVar7;
      (**(code **)(*plVar8 + 0x30))(plVar8,&puStack_c0);
      func_0x00010b8e09fc(puStack_c0);
      func_0x00010b905a70();
      func_0x00010b906a68();
      func_0x00010b906d28();
      ppuVar10 = &puStack_78;
      func_0x00010b906c20();
    }
    func_0x00010b906c28();
  }
  func_0x00010b90694c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar12 = (undefined8 **)0x10b904384;
  func_0x00010b906d44();
  puVar16 = puVar7;
  func_0x00010b90699c();
  apuStack_98[0] = extraout_x8_02;
  uVar9 = puVar16[2];
  puVar19 = *ppuVar10;
  lVar17 = puVar19[4];
  puVar16 = (undefined8 *)(lVar17 * 8 + 0x20);
  __Znwm();
  plVar18 = puVar16 + 1;
  *plVar18 = 1;
  *puVar16 = &PTR_FUN_110d74518;
  puVar16[2] = uVar9;
  puVar16[3] = lVar17;
  plVar8 = puVar19 + 5;
  lVar20 = 0x20;
  puVar19 = puVar16;
  for (lVar17 = lVar17 * 0x18; lVar17 != 0; lVar17 = lVar17 + -0x18) {
    lVar14 = *plVar8;
    if (lVar14 == 0) {
      uStack_b8 = 0;
      puStack_c0 = (undefined8 *)&UNK_10f7d0ef0;
    }
    else {
      uStack_b8 = (ulong)*(uint *)(lVar14 + 0xc);
      puStack_c0 = (undefined8 *)(lVar14 + 0x18);
    }
    ppuVar10 = &puStack_c0;
    (**(code **)(*(long *)puVar7[2] + 0x58))(auStack_b0);
    puVar19 = auStack_b0;
    func_0x00010b8e0ce4();
    *(undefined8 **)((long)puVar16 + lVar20) = puVar19;
    puVar19 = auStack_b0;
    func_0x0001080e4278();
    plVar8 = plVar8 + 3;
    lVar20 = lVar20 + 8;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *plVar18 = *plVar18 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *extraout_x8_01 = puVar16;
  do {
    uVar6 = *plVar18 + -1 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *plVar18 = *plVar18 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bool)uVar6) {
    func_0x00010b906bf4();
  }
  func_0x00010b90694c(apuStack_98[0]);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = puVar19;
  ppuVar11 = ppuVar10;
  ppuVar13 = ppuVar12;
  func_0x00010b90699c();
  uStack_128 = extraout_x8_04;
  uVar9 = puVar7[2];
  puVar16 = *ppuVar11;
  puVar7 = (undefined8 *)(puVar16[5] * 0x20 + 0x20);
  __Znwm();
  plVar8 = puVar7 + 1;
  *plVar8 = 1;
  *puVar7 = &PTR_DAT_110d74638;
  puVar7[2] = uVar9;
  do {
    func_0x00010b906a10();
  } while (extraout_w10_00 != 0);
  puVar15 = *ppuVar10;
  puVar7[3] = puVar16;
  puVar16 = puVar7 + 4;
  for (lVar20 = puVar15[5]; lVar20 != 0; lVar20 = lVar20 + -1) {
    puVar16[1] = 0;
    *puVar16 = 0;
    puVar16[3] = 0;
    puVar16[2] = 0;
    func_0x0001080e0180();
    puVar16 = puVar16 + 4;
  }
  lVar20 = 0;
  puVar15 = *ppuVar10 + 6;
  lVar17 = (*ppuVar10)[5] * 0x18;
  do {
    if (lVar17 == 0) goto LAB_10b9045fc;
    puVar16 = (undefined8 *)puVar19[2];
    puStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010b906a20();
    ppuVar11 = (undefined8 **)(puVar15 + 1);
    ppuVar13 = &puStack_198;
    FUN_10b900bd0(auStack_168);
    puVar5 = ppuVar12[1];
    if (((ulong)puVar5 & 1) == 0) {
      *extraout_x8_03 = 0;
    }
    else {
      uVar9 = puVar7[2];
      func_0x0001080e08ac(auStack_148,auStack_168);
      FUN_10b8db52c(&puStack_198,uVar9,auStack_148);
      ppuVar11 = &puStack_198;
      func_0x0001080df8d0(puVar7 + 4 + lVar20 * 4);
      func_0x00010b906d3c();
      puVar16 = auStack_148;
      func_0x0001080e0bc0();
      lVar20 = lVar20 + 1;
    }
    func_0x00010b906c28();
    puVar15 = puVar15 + 3;
    lVar17 = lVar17 + -0x18;
  } while (((ulong)puVar5 & 1) != 0);
LAB_10b904614:
  do {
    uVar6 = *plVar8 + -1 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bool)uVar6) {
    func_0x00010b906bf4();
  }
  func_0x00010b90694c(uStack_128);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = puVar16[2];
  uVar6 = *(undefined1 *)((long)*ppuVar13 + 0x11);
  uVar2 = *(undefined1 *)((long)*ppuVar13 + 0x13);
  puVar7 = *ppuVar11;
  plVar8 = (long *)0x28;
  __Znwm();
  plVar8[1] = 1;
  *plVar8 = (long)&PTR_FUN_110d74740;
  plVar8[2] = lVar20;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      func_0x00010b906a90();
    } while (extraout_w11_00 != 0);
  }
  plVar8[3] = (long)puVar7;
  *(undefined1 *)(plVar8 + 4) = uVar6;
  *(undefined1 *)((long)plVar8 + 0x21) = uVar2;
  do {
    func_0x00010b906a10();
  } while (extraout_w10_01 != 0);
  *extraout_x8_05 = plVar8;
  do {
    lVar20 = *extraout_x8_06;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(extraout_x8_06,0x10);
    if (bVar4) {
      *extraout_x8_06 = lVar20 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar20 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b904700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 8))();
    return;
  }
  return;
LAB_10b9045fc:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *extraout_x8_03 = puVar7;
  goto LAB_10b904614;
}



/* Entry: 10b904498; end: 10b90465b;  */

void FUN_10b904498(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 auStack_88 [4];
  undefined8 uStack_68;
  
  lVar10 = param_2;
  plVar8 = param_3;
  plVar7 = param_4;
  func_0x00010b90699c();
  uVar14 = *(undefined8 *)(lVar10 + 0x10);
  lVar10 = *plVar8;
  puVar6 = (undefined8 *)(*(long *)(lVar10 + 0x28) * 0x20 + 0x20);
  uStack_68 = extraout_x8;
  __Znwm();
  plVar13 = puVar6 + 1;
  *plVar13 = 1;
  *puVar6 = &PTR_DAT_110d74638;
  puVar6[2] = uVar14;
  do {
    func_0x00010b906a10();
  } while (extraout_w10 != 0);
  lVar9 = *param_3;
  puVar6[3] = lVar10;
  puVar12 = puVar6 + 4;
  for (lVar10 = *(long *)(lVar9 + 0x28); lVar10 != 0; lVar10 = lVar10 + -1) {
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    func_0x0001080e0180();
    puVar12 = puVar12 + 4;
  }
  lVar9 = 0;
  lVar10 = *param_3 + 0x30;
  lVar11 = *(long *)(*param_3 + 0x28) * 0x18;
  do {
    if (lVar11 == 0) goto LAB_10b9045fc;
    puVar12 = *(undefined8 **)(param_2 + 0x10);
    lStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010b906a20();
    plVar8 = (long *)(lVar10 + 8);
    plVar7 = &lStack_d8;
    FUN_10b900bd0(auStack_a8);
    bVar1 = *(byte *)(param_4 + 1);
    if ((bVar1 & 1) == 0) {
      *param_1 = 0;
    }
    else {
      uVar14 = puVar6[2];
      func_0x0001080e08ac(auStack_88,auStack_a8);
      FUN_10b8db52c(&lStack_d8,uVar14,auStack_88);
      plVar8 = &lStack_d8;
      func_0x0001080df8d0(puVar6 + 4 + lVar9 * 4);
      func_0x00010b906d3c();
      puVar12 = auStack_88;
      func_0x0001080e0bc0();
      lVar9 = lVar9 + 1;
    }
    func_0x00010b906c28();
    lVar10 = lVar10 + 0x18;
    lVar11 = lVar11 + -0x18;
  } while ((bVar1 & 1) != 0);
LAB_10b904614:
  do {
    uVar5 = *plVar13 + -1 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bool)uVar5) {
    func_0x00010b906bf4();
  }
  func_0x00010b90694c(uStack_68);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = puVar12[2];
  uVar5 = *(undefined1 *)(*plVar7 + 0x11);
  uVar2 = *(undefined1 *)(*plVar7 + 0x13);
  lVar10 = *plVar8;
  plVar7 = (long *)0x28;
  __Znwm();
  plVar7[1] = 1;
  *plVar7 = (long)&PTR_FUN_110d74740;
  plVar7[2] = lVar9;
  if (lVar10 != 0) {
    do {
      func_0x00010b906a90();
    } while (extraout_w11 != 0);
  }
  plVar7[3] = lVar10;
  *(undefined1 *)(plVar7 + 4) = uVar5;
  *(undefined1 *)((long)plVar7 + 0x21) = uVar2;
  do {
    func_0x00010b906a10();
  } while (extraout_w10_00 != 0);
  *extraout_x8_00 = plVar7;
  do {
    lVar10 = *extraout_x8_01;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(extraout_x8_01,0x10);
    if (bVar4) {
      *extraout_x8_01 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b904700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 8))();
    return;
  }
  return;
LAB_10b9045fc:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *param_1 = puVar6;
  goto LAB_10b904614;
}



/* Entry: 10b90465c; end: 10b904717;  */

void FUN_10b90465c(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + 0x10);
  uVar1 = *(undefined1 *)(*param_4 + 0x11);
  uVar2 = *(undefined1 *)(*param_4 + 0x13);
  lVar6 = *param_3;
  plVar5 = (long *)0x28;
  __Znwm();
  plVar5[1] = 1;
  *plVar5 = (long)&PTR_FUN_110d74740;
  plVar5[2] = lVar7;
  if (lVar6 != 0) {
    do {
      func_0x00010b906a90();
    } while (extraout_w11 != 0);
  }
  plVar5[3] = lVar6;
  *(undefined1 *)(plVar5 + 4) = uVar1;
  *(undefined1 *)((long)plVar5 + 0x21) = uVar2;
  do {
    func_0x00010b906a10();
  } while (extraout_w10 != 0);
  *param_1 = plVar5;
  do {
    lVar6 = *extraout_x8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar4) {
      *extraout_x8 = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b904700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))();
  return;
}


