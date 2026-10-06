/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c35478; end: 104c35497;  */

void FUN_104c35478(void)

{
  func_0x000104c35624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c35498; end: 104c354c3;  */

void FUN_104c35498(void)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000104c35b90();
  if (!(bool)in_CY) {
    func_0x000104c35c6c();
    return;
  }
  FUN_104bd35f4();
  func_0x000104c35bdc();
  while (unaff_x21 != unaff_x19) {
    FUN_104c35518();
    func_0x000104c35d28();
  }
  func_0x000104c35d50();
  func_0x000104c35d00();
  return;
}



/* Entry: 104c354c4; end: 104c35517;  */

void FUN_104c354c4(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x000104c35bdc();
  while (unaff_x21 != unaff_x19) {
    FUN_104c35518();
    func_0x000104c35d28();
  }
  func_0x000104c35d50();
  func_0x000104c35d00();
  return;
}



/* Entry: 104c35518; end: 104c35547;  */

void FUN_104c35518(long param_1)

{
  long unaff_x20;
  
  func_0x000104c35bd0();
  func_0x00010015bc98(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 104c35548; end: 104c356b3;  */

long FUN_104c35548(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x30;
      func_0x000104c358c4();
    }
  }
  return param_1;
}



/* Entry: 104c356b4; end: 104c35707;  */

void FUN_104c356b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  func_0x000104c35bd0();
  FUN_104c34fb0(param_1 + 0x18,unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
  if (lVar4 != 0) {
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
  return;
}



/* Entry: 104c35708; end: 104c35713;  */

void FUN_104c35708(long param_1)

{
  func_0x000104c35b84();
  func_0x000104c35740(param_1 + 0x30);
  func_0x000104c35858(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 104c35714; end: 104c357c7;  */

void FUN_104c35714(long param_1)

{
  func_0x000104c35740(param_1 + 0x30);
  func_0x000104c35858(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 104c357c8; end: 104c357df;  */

undefined1 FUN_104c357c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104c357e0; end: 104c357f3;  */

void FUN_104c357e0(void)

{
  FUN_104c357f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c357f4; end: 104c358e7;  */

undefined8 * FUN_104c357f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb2d0;
  func_0x0001000e30f4(param_1 + 2);
  return param_1;
}



/* Entry: 104c358e8; end: 104c358eb;  */

void FUN_104c358e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb320;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c358ec; end: 104c358ff;  */

void FUN_104c358ec(void)

{
  func_0x000104c3590c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c35900; end: 104c35917;  */

long FUN_104c35900(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x120);
  if (lVar1 != 0) {
    for (lVar2 = *(long *)(param_1 + 0x128); lVar2 != lVar1; lVar2 = lVar2 + -0x18) {
      if (*(long *)(lVar2 + -8) != 0) {
        func_0x0001000df548();
      }
    }
    *(long *)(param_1 + 0x128) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0x120));
  }
  FUN_104c35354(param_1 + 0x100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xa0);
  func_0x000104c35768(param_1 + 0x88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 104c35918; end: 104c359b3;  */

long FUN_104c35918(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 != 0) {
    for (lVar2 = *(long *)(param_1 + 0x110); lVar2 != lVar1; lVar2 = lVar2 + -0x18) {
      if (*(long *)(lVar2 + -8) != 0) {
        func_0x0001000df548();
      }
    }
    *(long *)(param_1 + 0x110) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  FUN_104c35354(param_1 + 0xe8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xa0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x000104c35768(param_1 + 0x70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 104c359b4; end: 104c359b7;  */

void FUN_104c359b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb370;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c359b8; end: 104c359cb;  */

void FUN_104c359b8(void)

{
  FUN_104c359fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c359cc; end: 104c359fb;  */

void FUN_104c359cc(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  func_0x000104c35cc8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x20);
  return;
}



/* Entry: 104c359fc; end: 104c35a0b;  */

void FUN_104c359fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c35a0c; end: 104c35a3f;  */

void FUN_104c35a0c(long param_1)

{
  FUN_104c35a40(param_1 + 0x50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x000104c35190(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 104c35a40; end: 104c35afb;  */

long * FUN_104c35a40(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x20) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
    }
    param_1[1] = lVar2;
    func_0x000104c35bbc();
  }
  return param_1;
}



/* Entry: 104c35afc; end: 104c35aff;  */

void FUN_104c35afc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb3c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c35b00; end: 104c35b13;  */

void FUN_104c35b00(void)

{
  func_0x000104c35b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c35b14; end: 104c35b2b;  */

void FUN_104c35b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c35d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 104c35b2c; end: 104c35b3f;  */

void FUN_104c35b2c(void)

{
  func_0x000104c35b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c35b40; end: 104c35d7b;  */

void FUN_104c35b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c35d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 104c35d7c; end: 104c36a03;  */

/* WARNING: Removing unreachable block (ram,0x000104c365a8) */
/* WARNING: Removing unreachable block (ram,0x000104c35ecc) */
/* WARNING: Removing unreachable block (ram,0x000104c36670) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c35d7c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  undefined8 *******pppppppuVar2;
  ulong *******pppppppuVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  byte bVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  long *plVar13;
  long *plVar14;
  undefined *puVar15;
  undefined8 *******pppppppuVar16;
  ulong ******ppppppuVar17;
  ulong *******pppppppuVar18;
  ulong *******pppppppuVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  ulong ******ppppppuVar30;
  double dVar31;
  undefined **ppuStack_220;
  ulong *******pppppppuStack_218;
  undefined8 uStack_210;
  ulong *******pppppppuStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 uStack_178;
  undefined2 uStack_170;
  undefined1 uStack_168;
  undefined1 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_108;
  long *plStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  byte bStack_81;
  ulong ******ppppppuStack_80;
  ulong ******ppppppuStack_78;
  
  ppuVar11 = (undefined **)0x20;
  __Znwm();
  uStack_1a0 = -0x7fffffffffffffe0;
  uStack_1a8 = 0x18;
  ppuVar11[1] = (undefined *)0x7461686370616e73;
  *ppuVar11 = (undefined *)0x2e6970612e737761;
  ppuVar11[2] = (undefined *)0x3334343a6d6f632e;
  *(char *)(ppuVar11 + 3) = '\0';
  uStack_210 = (ulong *******)CONCAT17(10,(undefined7)uStack_210);
  ppuStack_220 = (undefined **)0x6575716552727361;
  pppppppuStack_218 = (ulong *******)CONCAT53(pppppppuStack_218._3_5_,0x7473);
  plVar21 = param_2 + 2;
  lVar23 = *plVar21;
  ppuStack_1b0 = ppuVar11;
  FUN_104c36a04(auStack_a8,&ppuStack_1b0,param_3,&ppuStack_220,lVar23 + 0x100,lVar23 + 0xd0,param_5)
  ;
  if ((long)uStack_210 < 0) {
    __ZdlPv(ppuStack_220);
  }
  if ((long)uStack_1a0 < 0) {
    __ZdlPv(ppuStack_1b0);
  }
  FUN_104c4bb14();
  uStack_1a0 = 0;
  uStack_198 = 0;
  ppuStack_1b0 = &PTR_FUN_1107eb688;
  uStack_1a8 = 0;
  uStack_190 = 8;
  pppuVar12 = &ppuStack_1b0;
  FUN_104c37260(pppuVar12,1);
  (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar12,1);
  ppuStack_1b0 = &PTR_DAT_1107eb6f0;
  if (uStack_1a8 != 0) {
    for (; uStack_1a8 != uStack_1a0; uStack_1a0 = uStack_1a0 - 0x18) {
    }
    uStack_1a0 = uStack_1a8;
    __ZdlPv(uStack_1a8);
  }
  uStack_c0 = 0;
  plStack_c8 = (long *)0x0;
  ppuStack_d0 = &PTR_DAT_110c76860;
  puStack_b8 = &DAT_11383d918;
  plStack_b0 = (long *)0x0;
  plVar13 = (long *)0xa8;
  __Znwm();
  *plVar13 = (long)&PTR_DAT_110c767c0;
  plVar13[1] = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  plVar13[5] = 0;
  plVar13[4] = 0;
  plVar13[7] = 0;
  plVar13[6] = 0;
  plVar13[9] = 0;
  plVar13[8] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = (long)&DAT_11383d918;
  plVar13[0xc] = (long)&DAT_11383d918;
  plVar13[0xd] = (long)&DAT_11383d918;
  plVar13[0xe] = (long)&DAT_11383d918;
  plVar13[0xf] = (long)&DAT_11383d918;
  plVar13[0x11] = 0;
  plVar13[0x10] = 0;
  plVar13[0x13] = 0;
  plVar13[0x12] = 0;
  *(undefined4 *)(plVar13 + 0x14) = 0;
  plStack_d8 = plVar13;
  FUN_104c483b0();
  plVar22 = plStack_b0;
  plStack_d8 = (long *)0x0;
  plVar14 = plStack_c8;
  if (((ulong)plStack_c8 & 1) != 0) {
    plVar14 = *(long **)((ulong)plStack_c8 & 0xfffffffffffffffe);
  }
  if ((plVar14 == (long *)0x0) && (plStack_b0 != (long *)0x0)) {
    if ((*(byte *)((long)plStack_b0 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    func_0x00010adeac50(plVar22);
    __ZdlPv(plVar22);
  }
  plVar22 = (long *)plVar13[1];
  if (((ulong)plVar22 & 1) != 0) {
    plVar22 = *(long **)((ulong)plVar22 & 0xfffffffffffffffe);
  }
  if (plVar14 != plVar22) {
    if ((plVar14 == (long *)0x0) || (plVar22 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13,plVar14);
      (**(code **)(*plVar13 + 0x20))();
    }
    else {
      ppuVar11 = &PTR___tlv_bootstrap_11340dac8;
      (*(code *)PTR___tlv_bootstrap_11340dac8)();
      if (ppuVar11[1] == (undefined *)*plVar14) {
        plVar14 = (long *)ppuVar11[2];
      }
      else {
        func_0x00010b4d7148(plVar14,0x10);
      }
      lVar23 = plVar14[1];
      if ((ulong)(lVar23 - *plVar14) < 0x10) {
        func_0x00010b4d785c();
      }
      else {
        uVar24 = lVar23 - 0x10;
        plVar14[1] = uVar24;
        uVar26 = plVar14[3];
        if (((long)(uVar24 - uVar26) < 0x181) && (uVar25 = plVar14[2], uVar25 < uVar26)) {
          if (uVar24 <= uVar26) {
            uVar26 = uVar24;
          }
          uVar24 = uVar26 - 0x180;
          if (uVar26 - 0x180 <= uVar25) {
            uVar24 = uVar25;
          }
          for (; uVar24 < uVar26; uVar26 = uVar26 - 0x40) {
            Hint_Prefetch(uVar26,2,0,0);
          }
          plVar14[3] = uVar26;
        }
        *(long **)(lVar23 + -0x10) = plVar13;
        *(undefined **)(lVar23 + -8) = &UNK_1053a933c;
      }
    }
  }
  uStack_c0 = uStack_c0 | 1;
  uVar26 = param_4[1];
  puVar7 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar26 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar7 = param_4;
  }
  plStack_b0 = plVar13;
  if (((ulong)plStack_c8 & 1) == 0) {
    plVar14 = plStack_c8;
    if (((ulong)puStack_b8 & 3) == 0) goto LAB_104c360d8;
LAB_104c3608c:
    func_0x000100042f24((ulong)puStack_b8 & 0xfffffffffffffffc,puVar7,uVar26);
  }
  else {
    plVar14 = *(long **)((ulong)plStack_c8 & 0xfffffffffffffffe);
    if (((ulong)puStack_b8 & 3) != 0) goto LAB_104c3608c;
LAB_104c360d8:
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x18;
      __Znwm();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar26 = 2;
    }
    else {
      func_0x00010b4d80a4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar26 = 3;
    }
    puStack_b8 = (undefined *)(uVar26 | (ulong)plVar14);
  }
  __ZNSt3__17promiseIvEC1Ev(&lStack_e0);
  __ZNSt3__17promiseIvE10get_futureEv(&uStack_e8);
  plVar14 = (long *)0x90;
  __Znwm();
  lVar23 = lStack_e0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&PTR_DAT_1107eb4a8;
  lStack_e0 = 0;
  plVar14[3] = (long)&PTR_FUN_1107ebc28;
  plVar14[4] = lVar23;
  ppuStack_1b0 = (undefined **)0x0;
  plVar14[6] = 0;
  plVar14[5] = 0;
  plVar14[8] = 0;
  plVar14[7] = 0;
  plVar14[10] = 0;
  plVar14[9] = 0;
  plVar14[0xd] = 0;
  plVar14[0xc] = 0;
  plVar14[0xf] = 0;
  plVar14[0xe] = 0;
  plVar14[0x11] = 0;
  plVar14[0x10] = 0;
  pppuVar12 = &ppuStack_1b0;
  __ZNSt3__17promiseIvED1Ev();
  uStack_1a8 = 1;
  ppuStack_1b0 = (undefined **)0x1388;
  uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
  uStack_178 = 0;
  uStack_170 = 0x101;
  uStack_168 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_f8 = plVar14 + 3;
  plStack_f0 = plVar14;
  __ZNSt3__16chrono12steady_clock3nowEv();
  (**(code **)(*param_2 + 0x20))(param_2,auStack_a8,&ppuStack_d0,&ppuStack_1b0,&plStack_f8);
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppuStack_220 = (undefined **)(param_2 + 625000000);
  uVar26 = uStack_e8;
  FUN_104c38d80(uStack_e8,&ppuStack_220);
  uVar29 = (uint)uVar26;
  iVar4 = *(int *)(*plVar21 + 4);
  if (iVar4 != 0) {
    uVar24 = param_4[1];
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar24 = (ulong)*(byte *)((long)param_4 + 0x17);
    }
    dVar31 = ((double)uVar24 / 2.0) / (double)iVar4;
    if (10.0 <= dVar31) {
      if (20.0 <= dVar31) {
        if (30.0 <= dVar31) {
          if (40.0 <= dVar31) {
            if (50.0 <= dVar31) {
              if (59.5 <= dVar31) {
                if (60.5 <= dVar31) {
                  lVar23 = 0x10;
                }
                else {
                  lVar23 = 0xf;
                }
              }
              else {
                lVar23 = 0xe;
              }
            }
            else {
              lVar23 = 0xd;
            }
          }
          else {
            lVar23 = 0xc;
          }
        }
        else {
          lVar23 = 0xb;
        }
      }
      else {
        lVar23 = 10;
      }
    }
    else {
      lVar23 = 9;
    }
    uVar24 = uVar26;
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_104c4bb14();
    puVar8 = PTR_s_audio_length_seconds_bucket_1130a8660;
    uStack_210 = (ulong *******)0x0;
    pppppppuStack_208 = (ulong *******)0x0;
    ppuStack_220 = &PTR_FUN_1107eb688;
    pppppppuStack_218 = (ulong *******)0x0;
    lStack_200 = CONCAT44(lStack_200._4_4_,9);
    puVar15 = PTR_s_audio_length_seconds_bucket_1130a8660;
    _strlen();
    if ((undefined *)0x7ffffffffffffff6 < puVar15) {
      FUN_104bd47d4();
      goto LAB_104c368c8;
    }
    if (puVar15 < (undefined *)0x17) {
      bStack_81 = (byte)puVar15;
      pppppppuVar16 = &pppppppuStack_98;
      if (puVar15 != (undefined *)0x0) goto LAB_104c36378;
    }
    else {
      pppppppuVar2 = (undefined8 *******)0x19;
      if (((ulong)puVar15 | 7) != 0x17) {
        pppppppuVar2 = (undefined8 *******)(((ulong)puVar15 | 7) + 1);
      }
      pppppppuVar16 = pppppppuVar2;
      __Znwm();
      bStack_81 = (byte)((ulong)pppppppuVar2 >> 0x38) | 0x80;
      uStack_90 = SUB87(puVar15,0);
      uStack_89 = (undefined1)((ulong)puVar15 >> 0x38);
      uStack_88 = SUB87(pppppppuVar2,0);
      pppppppuStack_98 = pppppppuVar16;
LAB_104c36378:
      _memmove(pppppppuVar16,puVar8,puVar15);
    }
    *(undefined1 *)((long)pppppppuVar16 + (long)puVar15) = 0;
    bVar9 = bStack_81;
    pppppppuVar2 = pppppppuStack_98;
    ppppppuVar30 = (ulong ******)(&PTR_s_streaming_recognize_client_1130a8668)[lVar23];
    ppppppuVar17 = ppppppuVar30;
    _strlen();
    pppppppuVar3 = pppppppuStack_218;
    ppppppuStack_80 = ppppppuVar30;
    ppppppuStack_78 = ppppppuVar17;
    if (uStack_210 < pppppppuStack_208) {
      *uStack_210 = (ulong ******)pppppppuVar2;
      uStack_210[1] = (ulong ******)CONCAT17(uStack_89,uStack_90);
      *(ulong *)((long)uStack_210 + 0xf) = CONCAT71(uStack_88,uStack_89);
      *(byte *)((long)uStack_210 + 0x17) = bVar9;
      pppppppuVar19 = uStack_210 + 3;
      uStack_210 = pppppppuVar19;
      if (pppppppuStack_208 <= pppppppuVar19) goto LAB_104c364ec;
LAB_104c363ec:
      uVar29 = (uint)uVar26;
      uStack_210 = pppppppuVar19;
      if ((ulong ******)0x7ffffffffffffff6 < ppppppuVar17) {
        FUN_104bd47d4();
LAB_104c368c8:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x104c368cc);
        (*pcVar10)();
      }
      if (ppppppuVar17 < (ulong ******)0x17) {
        *(char *)((long)pppppppuVar19 + 0x17) = (char)ppppppuVar17;
        pppppppuVar18 = pppppppuVar19;
        if (ppppppuVar17 != (ulong ******)0x0) goto LAB_104c36528;
      }
      else {
        pppppppuVar3 = (ulong *******)0x19;
        if (((ulong)ppppppuVar17 | 7) != 0x17) {
          pppppppuVar3 = (ulong *******)(((ulong)ppppppuVar17 | 7) + 1);
        }
        pppppppuVar18 = pppppppuVar3;
        __Znwm();
        pppppppuVar19[1] = ppppppuVar17;
        pppppppuVar19[2] = (ulong ******)((ulong)pppppppuVar3 | 0x8000000000000000);
        *pppppppuVar19 = (ulong ******)pppppppuVar18;
LAB_104c36528:
        _memmove(pppppppuVar18,ppppppuVar30,ppppppuVar17);
      }
      *(undefined1 *)((long)pppppppuVar18 + (long)ppppppuVar17) = 0;
      pppppppuVar19 = pppppppuVar19 + 3;
    }
    else {
      lVar23 = (long)uStack_210 - (long)pppppppuStack_218;
      uVar25 = (lVar23 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar25) {
        FUN_104bdcf60();
        goto LAB_104c368c8;
      }
      lVar27 = (long)pppppppuStack_208 - (long)pppppppuStack_218 >> 3;
      uVar28 = lVar27 * 0x5555555555555556;
      if (uVar28 < uVar25 || uVar28 - uVar25 == 0) {
        uVar28 = uVar25;
      }
      if (0x555555555555554 < (ulong)(lVar27 * -0x5555555555555555)) {
        uVar28 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar28) {
        FUN_104bd35f4();
        goto LAB_104c368c8;
      }
      pppppppuVar18 = (ulong *******)(uVar28 * 0x18);
      __Znwm();
      puVar1 = (ulong *)((long)pppppppuVar18 + lVar23);
      *puVar1 = (ulong)pppppppuVar2;
      puVar1[1] = CONCAT17(uStack_89,uStack_90);
      *(ulong *)((long)puVar1 + 0xf) = CONCAT71(uStack_88,uStack_89);
      *(byte *)((long)puVar1 + 0x17) = bVar9;
      pppppppuVar19 = (ulong *******)(puVar1 + 3);
      _memcpy();
      pppppppuStack_218 = pppppppuVar18;
      pppppppuStack_208 = pppppppuVar18 + uVar28 * 3;
      if (pppppppuVar3 != (ulong *******)0x0) {
        uStack_210 = pppppppuVar19;
        __ZdlPv(pppppppuVar3);
      }
      uVar26 = uVar26 & 0xffffffff;
      uStack_210 = pppppppuVar19;
      if (pppppppuVar19 < pppppppuStack_208) goto LAB_104c363ec;
LAB_104c364ec:
      uVar29 = (uint)uVar26;
      pppppppuVar19 = (ulong *******)&pppppppuStack_218;
      func_0x0001004c38dc(pppppppuVar19,&ppppppuStack_80);
    }
    uStack_210 = pppppppuVar19;
    (**(code **)*plRam0000000113817ca0)
              (plRam0000000113817ca0,&ppuStack_220,uVar24 - (long)pppuVar12);
    ppuStack_220 = &PTR_DAT_1107eb6f0;
    if (pppppppuStack_218 != (ulong *******)0x0) {
      for (; pppppppuStack_218 != uStack_210; uStack_210 = uStack_210 + -3) {
      }
      uStack_210 = pppppppuStack_218;
      __ZdlPv(pppppppuStack_218);
    }
  }
  if (uVar29 == 0) {
    FUN_104c38f50(&ppuStack_220,plStack_f8 + 2);
    plVar21 = (long *)0x68;
    __Znwm();
    lVar23 = lStack_1f8;
    plVar21[1] = (long)pppppppuStack_218;
    *plVar21 = (long)ppuStack_220;
    plVar21[2] = (long)uStack_210;
    ppuStack_220 = (undefined **)0x0;
    pppppppuStack_218 = (ulong *******)0x0;
    plVar21[4] = lStack_200;
    plVar21[3] = (long)pppppppuStack_208;
    uStack_210 = (ulong *******)0x0;
    pppppppuStack_208 = (ulong *******)0x0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    plVar21[5] = lVar23;
    plVar21[6] = lStack_1f0;
    plVar21[9] = lStack_1d8;
    plVar21[8] = lStack_1e0;
    plVar21[7] = (long)pppppppuStack_1e8;
    pppppppuStack_1e8 = (undefined8 *******)0x0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    plVar21[0xb] = lStack_1c8;
    plVar21[10] = lStack_1d0;
    plVar21[0xc] = lStack_1c0;
    *param_1 = plVar21;
  }
  else {
    lStack_1c0 = 0;
    lStack_1d8 = 0;
    lStack_1e0 = 0;
    lStack_1c8 = 0;
    lStack_1d0 = 0;
    lStack_1f8 = 0;
    lStack_200 = 0;
    pppppppuStack_1e8 = (undefined8 *******)0x0;
    pppppppuStack_218 = (ulong *******)0x0;
    ppuStack_220 = (undefined **)0x0;
    pppppppuStack_208 = (ulong *******)0x0;
    uStack_210 = (ulong *******)0x0;
    lStack_1f0 = 1;
    ppppppuStack_80 = (ulong ******)(ulong)uVar29;
    ppppppuStack_78 = (ulong ******)0x0;
    func_0x0001003a9204(&pppppppuStack_98,"future status is {}",0x13,1,&ppppppuStack_80);
    if (lStack_1d8 < 0) {
      __ZdlPv(pppppppuStack_1e8);
    }
    lStack_1e0 = CONCAT17(uStack_89,uStack_90);
    pppppppuStack_1e8 = pppppppuStack_98;
    lStack_1d8 = CONCAT17(bStack_81,uStack_88);
    uVar20 = 0x68;
    __Znwm();
    FUN_104c38f50();
    *param_1 = uVar20;
    if (lStack_1d0 != 0) {
      for (; lStack_1d0 != lStack_1c8; lStack_1c8 = lStack_1c8 + -0x20) {
      }
      lStack_1c8 = lStack_1d0;
      __ZdlPv(lStack_1d0);
    }
    if (lStack_1d8 < 0) {
      __ZdlPv(pppppppuStack_1e8);
    }
    pppppppuVar3 = pppppppuStack_208;
    lVar23 = lStack_200;
    if (pppppppuStack_208 != (ulong *******)0x0) {
      while (pppppppuVar3 != (ulong *******)lVar23) {
        lVar23 = lVar23 + -0xa0;
        func_0x000104c35148();
      }
      lStack_200 = (long)pppppppuVar3;
      __ZdlPv(pppppppuStack_208);
    }
    if ((long)uStack_210 < 0) {
      __ZdlPv(ppuStack_220);
    }
  }
  func_0x000100627b64(&ppuStack_1b0);
  plVar21 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar14 = plStack_f0 + 1;
    do {
      lVar23 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      __ZNSt3__16futureIvED1Ev(&uStack_e8);
      __ZNSt3__17promiseIvED1Ev(&lStack_e0);
      plVar21 = plStack_d8;
      goto joined_r0x000104c36790;
    }
  }
  __ZNSt3__16futureIvED1Ev(&uStack_e8);
  __ZNSt3__17promiseIvED1Ev(&lStack_e0);
  plVar21 = plStack_d8;
joined_r0x000104c36790:
  plStack_d8 = plVar21;
  if (plVar21 != (long *)0x0) {
    if ((*(byte *)((long)plVar21 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    func_0x00010adeac50(plVar21);
    __ZdlPv(plVar21);
  }
  func_0x00010ade9154(&ppuStack_d0);
  if (plStack_a0 != (long *)0x0) {
    plVar21 = plStack_a0 + 1;
    do {
      lVar23 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  return;
}



/* Entry: 104c36a04; end: 104c3725f;  */

void FUN_104c36a04(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined4 *param_5,
                  undefined8 *param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *plVar10;
  long *plVar11;
  long **pplVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 uStack_124;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 uStack_b0;
  uint6 uStack_af;
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_72;
  undefined1 auStack_71 [17];
  
  plVar10 = (long *)0x140;
  uStack_72 = param_7;
  __Znwm();
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10[3] = 0;
  plVar10[2] = 0;
  plVar10[5] = 0;
  plVar10[4] = 0;
  plVar10[7] = 0;
  plVar10[6] = 0;
  plVar10[0xb] = 0;
  plVar10[10] = 0;
  plVar10[0xd] = 0;
  plVar10[0xc] = 0;
  plVar10[0xf] = 0;
  plVar10[0xe] = 0;
  plVar10[0x11] = 0;
  plVar10[0x10] = 0;
  plVar10[0x13] = 0;
  plVar10[0x12] = 0;
  plVar10[0x15] = 0;
  plVar10[0x14] = 0;
  plVar10[0x17] = 0;
  plVar10[0x16] = 0;
  plVar10[0x19] = 0;
  plVar10[0x18] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1f] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x21] = 0;
  plVar10[0x20] = 0;
  plVar10[0x23] = 0;
  plVar10[0x22] = 0;
  plVar10[0x25] = 0;
  plVar10[0x24] = 0;
  plVar10[0x27] = 0;
  plVar10[0x26] = 0;
  plVar10[9] = 0;
  plVar10[8] = 0;
  func_0x000100468be4();
  plVar10[0xe] = 0;
  *(undefined2 *)(plVar10 + 0xf) = 0;
  plVar10[0x11] = 0;
  plVar10[0x10] = 0;
  plVar10[0x13] = 0;
  plVar10[0x12] = 0;
  plVar10[0x14] = 0;
  *(undefined4 *)(plVar10 + 0x15) = 3;
  *(undefined1 *)(plVar10 + 0x16) = 0;
  *(undefined1 *)(plVar10 + 0x19) = 0;
  plVar10[0x1a] = 0;
  *(undefined1 *)(plVar10 + 0x1b) = 0;
  *(undefined1 *)(plVar10 + 0x1e) = 0;
  *(undefined1 *)(plVar10 + 0x24) = 0;
  plVar10[0x1f] = 0;
  plVar10[0x20] = 0;
  *(undefined1 *)(plVar10 + 0x21) = 0;
  *(undefined2 *)(plVar10 + 0x25) = 0x101;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plStack_80 = plVar10;
  func_0x00010046a890(plVar10,0);
  plVar10 = plStack_80;
  if (plStack_80 != param_2) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)plStack_80 + 0x17) < '\0') {
      uVar2 = param_2[1];
      plVar11 = (long *)*param_2;
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
        plVar11 = param_2;
      }
      func_0x0001006aabfc(plStack_80,plVar11,uVar2);
    }
    else if ((char)bVar3 < '\0') {
      func_0x00010014884c(plStack_80,*param_2,param_2[1]);
    }
    else {
      lVar19 = param_2[1];
      lVar14 = *param_2;
      plStack_80[2] = param_2[2];
      plStack_80[1] = lVar19;
      *plStack_80 = lVar14;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar10 + 0x10,param_2);
  plVar11 = plVar10;
  func_0x00010046a7c4(plVar10,&UNK_10f73f5c6,0xffffffffffffffff);
  if (plVar11 == (long *)0xffffffffffffffff) {
    if (*(char *)((long)plVar10 + 0x17) < '\0') {
      *(undefined1 *)*plVar10 = 0;
      plVar10[1] = 0;
    }
    else {
      *(undefined1 *)plVar10 = 0;
      *(undefined1 *)((long)plVar10 + 0x17) = 0;
    }
  }
  else {
    puVar1 = (undefined1 *)((long)plVar11 + 1);
    if ((long)*(char *)((long)plVar10 + 0x17) < 0) {
      if ((long *)plVar10[1] <= plVar11) goto LAB_104c370e0;
      plVar10[1] = (long)puVar1;
      puVar1[*plVar10] = 0;
    }
    else {
      if ((long *)(long)*(char *)((long)plVar10 + 0x17) <= plVar11) {
LAB_104c370e0:
        FUN_104c03f14();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x104c370e8);
        (*pcVar8)();
      }
      *(char *)((long)plVar10 + 0x17) = (char)puVar1;
      *(undefined1 *)((long)plVar10 + (long)puVar1) = 0;
    }
  }
  plVar10 = (long *)0x30;
  __Znwm();
  plVar17 = plVar10 + 1;
  *plVar17 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_1107eb548;
  plVar11 = plVar10 + 3;
  *plVar11 = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  bVar3 = *(byte *)((long)param_6 + 0x17);
  uVar2 = param_6[1];
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  plStack_90 = plVar11;
  plStack_88 = plVar10;
  if (uVar2 != 0) {
    if ((char)bVar3 < '\0') {
      func_0x000100033dac(&uStack_e0,*param_6);
      puVar18 = (undefined8 *)plVar10[4];
      puVar13 = (undefined8 *)plVar10[5];
    }
    else {
      puVar13 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)0x0;
      uStack_d8 = param_6[1];
      uStack_e0 = *param_6;
      lStack_d0 = param_6[2];
    }
    lVar14 = lStack_d0;
    uVar7 = uStack_d8;
    uVar6 = uStack_e0;
    plStack_c0 = (long *)0x722d70616e732d78;
    plStack_b8 = (long *)0x6761742d6574756f;
    uStack_b0 = 0;
    cStack_a9 = '\x10';
    uStack_a0 = uStack_d8;
    uStack_a8 = uStack_e0;
    lStack_98 = lStack_d0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    lStack_d0 = 0;
    if (puVar18 < puVar13) {
      puVar18[2] = CONCAT17(0x10,(uint7)uStack_af << 8);
      puVar18[1] = 0x6761742d6574756f;
      *puVar18 = 0x722d70616e732d78;
      if (lVar14 < 0) {
        func_0x000100033dac(puVar18 + 3,uVar6,uVar7);
      }
      else {
        puVar18[5] = lVar14;
        puVar18[4] = uVar7;
        puVar18[3] = uVar6;
      }
      plVar10[4] = (long)(puVar18 + 6);
      plVar10[4] = (long)(puVar18 + 6);
    }
    else {
      FUN_104c38568(plVar11,&plStack_c0);
      plVar10[4] = (long)plVar11;
    }
    if (lStack_98 < 0) {
      __ZdlPv(uStack_a8);
    }
    if (cStack_a9 < '\0') {
      __ZdlPv(plStack_c0);
    }
  }
  plVar11 = (long *)0x30;
  __Znwm();
  plVar11[2] = 0;
  plVar11[3] = (long)&PTR_FUN_1107ebe68;
  *plVar11 = (long)&PTR_FUN_1107eb598;
  plVar11[1] = 0;
  plVar11[4] = (long)plStack_90;
  plVar11[5] = (long)plVar10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = *plVar17 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar17 = (long *)plStack_90[1];
  for (plVar10 = (long *)*plStack_90; plVar10 != plVar17; plVar10 = plVar10 + 6) {
    if ((long)*(char *)((long)plVar10 + 0x17) < 0) {
      plVar16 = (long *)*plVar10;
      plVar15 = (long *)((long)plVar16 + plVar10[1]);
    }
    else {
      plVar15 = (long *)((long)plVar10 + (long)*(char *)((long)plVar10 + 0x17));
      plVar16 = plVar10;
    }
    for (; plVar16 != plVar15; plVar16 = (long *)((long)plVar16 + 1)) {
      uVar9 = (undefined1)*plVar16;
      ___tolower();
      *(undefined1 *)plVar16 = uVar9;
    }
  }
  plVar10 = (long *)0x40;
  plStack_c0 = plVar11 + 3;
  plStack_b8 = plVar11;
  __Znwm();
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_DAT_1107eb5e8;
  plVar10[1] = 0;
  plStack_f0 = plVar10 + 3;
  *plStack_f0 = (long)&PTR_FUN_1107ebe28;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac(plVar10 + 4,*param_3,param_3[1]);
  }
  else {
    lVar14 = *param_3;
    plVar10[5] = param_3[1];
    plVar10[4] = lVar14;
    plVar10[6] = param_3[2];
  }
  *(undefined4 *)(plVar10 + 7) = *param_5;
  pplVar12 = &plStack_110;
  plStack_e8 = plVar10;
  FUN_104c38890(auStack_100,pplVar12,&plStack_f0);
  func_0x00010044fc98();
  plVar10 = (long *)0xb8;
  __Znwm();
  plVar10[2] = 0;
  plVar11 = plVar10 + 3;
  *plVar10 = (long)&PTR_FUN_1107ea880;
  plVar10[1] = 0;
  func_0x00010028bc78(plVar11,param_4,0,pplVar12,0);
  uStack_124 = 3;
  plStack_110 = plVar11;
  plStack_108 = plVar10;
  FUN_104c389ec(&uStack_120,auStack_71,&plStack_110,auStack_100,&plStack_c0,&plStack_80,&uStack_124,
                &uStack_72);
  puVar18 = (undefined8 *)0x30;
  __Znwm();
  plVar10 = plStack_118;
  puVar18[2] = 0;
  *puVar18 = &PTR_FUN_1107eb638;
  puVar18[1] = 0;
  if (plStack_118 == (long *)0x0) {
    puVar18[3] = &PTR_DAT_110c75c00;
    puVar18[4] = uStack_120;
    puVar18[5] = 0;
  }
  else {
    plVar11 = plStack_118 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar18[3] = &PTR_DAT_110c75c00;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar18[4] = uStack_120;
    puVar18[5] = plStack_118;
    do {
      lVar14 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  *param_1 = (long)(puVar18 + 3);
  param_1[1] = (long)puVar18;
  if (plStack_118 != (long *)0x0) {
    plVar10 = plStack_118 + 1;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
    }
  }
  plVar10 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar11 = plStack_108 + 1;
    do {
      lVar14 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plStack_f8 != (long *)0x0) {
    plVar10 = plStack_f8 + 1;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  plVar10 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar11 = plStack_e8 + 1;
    do {
      lVar14 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar11 = plStack_b8 + 1;
    do {
      lVar14 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar11 = plStack_88 + 1;
    do {
      lVar14 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    func_0x00010048b724();
    __ZdlPv();
  }
  return;
}



/* Entry: 104c37260; end: 104c37433;  */

long FUN_104c37260(long param_1,ulong param_2)

{
  undefined8 ***pppuVar1;
  ulong *puVar2;
  ulong *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar9 = (&PTR_s_component_1130a8658)[param_2 >> 0x10 & 0xffff];
  puVar5 = puVar9;
  _strlen();
  if ((undefined *)0x7ffffffffffffff6 < puVar5) {
    FUN_104bd47d4();
    goto LAB_104c37404;
  }
  if (puVar5 < (undefined *)0x17) {
    uStack_88 = CONCAT17((char)puVar5,(undefined7)uStack_88);
    pppuVar6 = &ppuStack_98;
    if (puVar5 != (undefined *)0x0) goto LAB_104c372f0;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if (((ulong)puVar5 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)(((ulong)puVar5 | 7) + 1);
    }
    pppuVar6 = pppuVar1;
    __Znwm();
    uStack_88 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_98 = pppuVar6;
    puStack_90 = puVar5;
LAB_104c372f0:
    _memmove(pppuVar6,puVar9,puVar5);
  }
  *(undefined1 *)((long)pppuVar6 + (long)puVar5) = 0;
  puVar9 = (&PTR_s_streaming_recognize_client_1130a8668)[(uint)param_2 & 0xffff];
  puStack_78 = puStack_90;
  ppuStack_80 = ppuStack_98;
  uStack_70 = uStack_88;
  puVar5 = puVar9;
  _strlen();
  puStack_60 = puVar9;
  puStack_58 = puVar5;
  func_0x000100c93e64(param_1 + 8,&ppuStack_80);
  puVar3 = *(ulong **)(param_1 + 0x10);
  if (*(ulong **)(param_1 + 0x18) <= puVar3) {
    lVar7 = param_1 + 8;
    func_0x0001004c38dc(lVar7,&puStack_60);
    *(long *)(param_1 + 0x10) = lVar7;
    goto joined_r0x000104c37380;
  }
  if ((undefined *)0x7ffffffffffffff6 < puVar5) {
LAB_104c37404:
    FUN_104bd47d4();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104c3740c);
    (*pcVar4)();
  }
  if (puVar5 < (undefined *)0x17) {
    *(char *)((long)puVar3 + 0x17) = (char)puVar5;
    puVar8 = puVar3;
    if (puVar5 != (undefined *)0x0) goto LAB_104c373cc;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar5 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar5 | 7) + 1);
    }
    puVar8 = puVar2;
    __Znwm();
    puVar3[1] = (ulong)puVar5;
    puVar3[2] = (ulong)puVar2 | 0x8000000000000000;
    *puVar3 = (ulong)puVar8;
LAB_104c373cc:
    _memmove(puVar8,puVar9,puVar5);
  }
  *(undefined1 *)((long)puVar8 + (long)puVar5) = 0;
  *(ulong **)(param_1 + 0x10) = puVar3 + 3;
  *(ulong **)(param_1 + 0x10) = puVar3 + 3;
joined_r0x000104c37380:
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  return param_1;
}



/* Entry: 104c37434; end: 104c374b3;  */

/* WARNING: Removing unreachable block (ram,0x000104c37488) */

undefined8 * FUN_104c37434(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_DAT_1107eb6f0;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[2];
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = param_1[1];
    }
    param_1[2] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104c374b4; end: 104c37517;  */

long FUN_104c374b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c37518; end: 104c37567;  */

long * FUN_104c37518(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    func_0x00010adeac50(lVar1);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104c37568; end: 104c375cb;  */

long FUN_104c37568(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c375cc; end: 104c376c7;  */

void FUN_104c375cc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  byte bVar6;
  byte bVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar1 = param_1 + 0xb;
  (**(code **)(*param_1 + 0x18))(param_1,plVar1);
  if (param_1[1] != 0) {
    plVar2 = param_1 + 8;
    bVar6 = *(byte *)((long)param_1 + 0x6f);
    uVar9 = param_1[0xc];
    uVar3 = uVar9;
    if (-1 < (char)bVar6) {
      uVar3 = (ulong)bVar6;
    }
    bVar7 = *(byte *)((long)param_1 + 0x57);
    uVar4 = param_1[9];
    if (-1 < (char)bVar7) {
      uVar4 = (ulong)bVar7;
    }
    if (uVar3 == uVar4) {
      plVar8 = (long *)*plVar1;
      if (-1 < (char)bVar6) {
        plVar8 = plVar1;
      }
      plVar5 = (long *)*plVar2;
      if (-1 < (char)bVar7) {
        plVar5 = plVar2;
      }
      _memcmp(plVar8,plVar5,uVar3);
      if ((int)plVar8 == 0) goto LAB_104c376a4;
    }
    if ((char)bVar7 < '\0') {
      plVar8 = (long *)*plVar1;
      if (-1 < (char)bVar6) {
        plVar8 = plVar1;
      }
      func_0x0001006aabfc(plVar2,plVar8,uVar3);
    }
    else if ((char)bVar6 < '\0') {
      func_0x00010014884c(plVar2,*plVar1,uVar9);
    }
    else {
      param_1[9] = param_1[0xc];
      *plVar2 = *plVar1;
      param_1[10] = param_1[0xd];
    }
  }
LAB_104c376a4:
                    /* WARNING: Could not recover jumptable at 0x000104c376c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104c376c8; end: 104c377d7;  */

void FUN_104c376c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_f8;
  long *plStack_f0;
  undefined1 auStack_e8 [176];
  char cStack_38;
  
  uVar6 = *param_2;
  func_0x000100627360(auStack_e8,param_4);
  cStack_38 = '\x01';
  lStack_f8 = *param_5;
  if (lStack_f8 == 0) {
    lStack_f8 = 0;
    plStack_f0 = (long *)0x0;
  }
  else {
    plStack_f0 = (long *)param_5[1];
    if (plStack_f0 != (long *)0x0) {
      plVar1 = plStack_f0 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  func_0x00010ade6254(uVar6,param_3,auStack_e8,&lStack_f8);
  plVar1 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar2 = plStack_f0 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (cStack_38 == '\x01') {
    func_0x000100627b64(auStack_e8);
  }
  return;
}



/* Entry: 104c377d8; end: 104c3783b;  */

long FUN_104c377d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c3783c; end: 104c379b3;  */

long * FUN_104c3783c(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar7;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  plVar5 = param_1;
  if (param_1[1] == 0) {
    if (*(int *)(param_1[2] + 8) == 0) {
      lVar4 = 0x140;
      __Znwm();
      lVar7 = param_1[4];
      FUN_104c44ae8();
      *(long *)(lVar4 + 8) = lVar7;
      plVar5 = (long *)param_1[1];
      param_1[1] = lVar4;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    if (*(int *)(param_1[2] + 8) == 1) {
      lVar4 = 0x140;
      __Znwm();
      lVar7 = param_1[5];
      FUN_104c44ae8();
      *(long *)(lVar4 + 0x10) = lVar7;
      plVar5 = (long *)param_1[1];
      param_1[1] = lVar4;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    plVar5 = param_1 + 8;
    if (plVar5 != param_2) {
      bVar2 = *(byte *)((long)param_2 + 0x17);
      if (*(char *)((long)param_1 + 0x57) < '\0') {
        uVar1 = param_2[1];
        plVar3 = (long *)*param_2;
        if (-1 < (char)bVar2) {
          uVar1 = (ulong)bVar2;
          plVar3 = param_2;
        }
        uVar6 = param_1[10] & 0x7fffffffffffffff;
        if (uVar1 < uVar6) {
          lVar4 = *plVar5;
          param_1[9] = uVar1;
          if (uVar1 != 0) {
            func_0x0001006aabf0(lVar4);
          }
          *(undefined1 *)(lVar4 + uVar1) = 0;
        }
        else {
          func_0x000107c60c48(plVar5,uVar6 - 1,(uVar1 - uVar6) + 1,param_1[9],0,param_1[9],uVar1,
                              plVar3,unaff_x22,unaff_x21,unaff_x20,unaff_x19,unaff_x29,unaff_x30);
        }
        return plVar5;
      }
      if ((char)bVar2 < '\0') {
        uVar1 = param_2[1];
        if (uVar1 < 0x16 || uVar1 - 0x16 == 0) {
          *(char *)((long)param_1 + 0x57) = (char)uVar1;
          if (uVar1 != 0) {
            func_0x0001006aabf0(plVar5);
          }
          *(undefined1 *)((long)plVar5 + uVar1) = 0;
        }
        else {
          func_0x000107c60c48(plVar5,0x16,uVar1 - 0x16,*(byte *)((long)param_1 + 0x57) & 0x7f,0,
                              *(byte *)((long)param_1 + 0x57) & 0x7f,uVar1,*param_2,unaff_x20,
                              unaff_x19,unaff_x29,unaff_x30);
        }
        return plVar5;
      }
      lVar7 = param_2[1];
      lVar4 = *param_2;
      param_1[10] = param_2[2];
      param_1[9] = lVar7;
      *plVar5 = lVar4;
      return plVar5;
    }
  }
  return plVar5;
}



/* Entry: 104c379b4; end: 104c37b47;  */

long * FUN_104c379b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZNSt3__118condition_variableD1Ev(lVar1 + 0x70);
    __ZNSt3__15mutexD1Ev(lVar1 + 0x30);
    FUN_104c394e8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c37b48; end: 104c37b4b;  */

undefined8 * FUN_104c37b48(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_1107eb460;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
    cVar2 = *(char *)((long)param_1 + 0x57);
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x57);
  }
  if (cVar2 < '\0') {
    __ZdlPv(param_1[8]);
    plVar5 = (long *)param_1[7];
  }
  else {
    plVar5 = (long *)param_1[7];
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[3];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  return param_1;
}



/* Entry: 104c37b4c; end: 104c37b5f;  */

void FUN_104c37b4c(void)

{
  func_0x000104c37a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c37b60; end: 104c37c53;  */

void FUN_104c37b60(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar6 != lVar5) {
    lVar2 = (lVar6 - lVar5 >> 3) * 0xaa + -1;
  }
  if (lVar2 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_104c39758(param_1);
    lVar5 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == lVar5) {
    puVar4 = (undefined8 *)0x0;
    cVar3 = *(char *)((long)param_2 + 0x17);
  }
  else {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    puVar4 = (undefined8 *)(*(long *)(lVar5 + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18);
    cVar3 = *(char *)((long)param_2 + 0x17);
  }
  if (cVar3 < '\0') {
    func_0x000100033dac(puVar4,*param_2,param_2[1]);
  }
  else {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variable10notify_oneEv_1103465f0)(param_1 + 0x70);
  return;
}



/* Entry: 104c37c54; end: 104c37d53;  */

void FUN_104c37c54(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  plVar1 = param_1 + 0xb;
  bVar4 = *(byte *)((long)param_1 + 0x6f);
  uVar2 = param_1[0xc];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar9 = param_2[1];
  uVar8 = uVar9;
  if (-1 < (char)bVar5) {
    uVar8 = (ulong)bVar5;
  }
  if (uVar2 == uVar8) {
    plVar7 = (long *)*plVar1;
    if (-1 < (char)bVar4) {
      plVar7 = plVar1;
    }
    plVar6 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar6 = param_2;
    }
    _memcmp(plVar7,plVar6);
    if ((int)plVar7 == 0) {
      return;
    }
  }
  if (plVar1 != param_2) {
    if ((char)bVar4 < '\0') {
      plVar7 = (long *)*param_2;
      if (-1 < (char)bVar5) {
        plVar7 = param_2;
      }
      func_0x0001006aabfc(plVar1,plVar7,uVar8);
    }
    else if ((char)bVar5 < '\0') {
      func_0x00010014884c(plVar1,*param_2,uVar9);
    }
    else {
      lVar11 = param_2[1];
      uVar10 = *param_2;
      param_1[0xd] = param_2[2];
      param_1[0xc] = lVar11;
      *plVar1 = uVar10;
    }
  }
  FUN_104c452e4(param_1[1]);
  plVar1 = param_1 + 0xb;
  (**(code **)(*param_1 + 0x18))(param_1,plVar1);
  if (param_1[1] != 0) {
    plVar7 = param_1 + 8;
    bVar4 = *(byte *)((long)param_1 + 0x6f);
    uVar8 = param_1[0xc];
    uVar2 = uVar8;
    if (-1 < (char)bVar4) {
      uVar2 = (ulong)bVar4;
    }
    bVar5 = *(byte *)((long)param_1 + 0x57);
    uVar9 = param_1[9];
    if (-1 < (char)bVar5) {
      uVar9 = (ulong)bVar5;
    }
    if (uVar2 == uVar9) {
      plVar6 = (long *)*plVar1;
      if (-1 < (char)bVar4) {
        plVar6 = plVar1;
      }
      plVar3 = (long *)*plVar7;
      if (-1 < (char)bVar5) {
        plVar3 = plVar7;
      }
      _memcmp(plVar6,plVar3,uVar2);
      if ((int)plVar6 == 0) goto LAB_104c376a4;
    }
    if ((char)bVar5 < '\0') {
      plVar6 = (long *)*plVar1;
      if (-1 < (char)bVar4) {
        plVar6 = plVar1;
      }
      func_0x0001006aabfc(plVar7,plVar6,uVar2);
    }
    else if ((char)bVar4 < '\0') {
      func_0x00010014884c(plVar7,*plVar1,uVar8);
    }
    else {
      param_1[9] = param_1[0xc];
      *plVar7 = *plVar1;
      param_1[10] = param_1[0xd];
    }
  }
LAB_104c376a4:
                    /* WARNING: Could not recover jumptable at 0x000104c376c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104c37d54; end: 104c37d63;  */

/* WARNING: Removing unreachable block (ram,0x000104c459e4) */

long * FUN_104c37d54(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined ***pppuVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  char cStack_110;
  long alStack_100 [2];
  undefined1 uStack_f0;
  undefined1 uStack_c8;
  undefined2 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  
  plVar12 = *(long **)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x70);
  plVar9 = &lStack_1d0;
  __ZNSt3__15mutex4lockEv(plVar12 + 0x13);
  if (plVar12[0xb] != 0) {
    plVar12 = plVar12 + 0x13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar12);
    return plVar12;
  }
  plVar12[0xf] = lVar11;
  puVar4 = (undefined8 *)0x108;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1107ebd88;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1107ebca8;
  puVar5[1] = 0;
  puVar5[4] = 0;
  puVar5[3] = &PTR_DAT_110c76720;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  *(undefined8 *)((long)puVar5 + 0x6c) = 0;
  *(undefined8 *)((long)puVar5 + 100) = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[6] = puVar5 + 3;
  puVar4[7] = puVar5;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x16] = 0;
  *(undefined1 *)(puVar4 + 0x18) = 0;
  puVar4[0x1f] = 0;
  puVar4[0x20] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  lVar6 = 32000;
  __Znwm();
  puVar4[0x1e] = lVar6;
  puVar4[0x1f] = lVar6;
  puVar4[0x20] = lVar6 + 32000;
  plVar14 = (long *)plVar12[0xd];
  plVar12[0xc] = (long)(puVar4 + 3);
  plVar12[0xd] = (long)puVar4;
  if (plVar14 != (long *)0x0) {
    plVar13 = plVar14 + 1;
    do {
      lVar6 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      *(undefined1 *)(plVar12[0xc] + 0xa8) = 0;
      lVar6 = plVar12[0x26];
      goto joined_r0x000104c4556c;
    }
  }
  *(undefined1 *)(plVar12[0xc] + 0xa8) = 0;
  lVar6 = plVar12[0x26];
joined_r0x000104c4556c:
  if (lVar6 == 0) {
    (**(code **)(*plVar12 + 0x18))(&ppuStack_1c0,plVar12,plVar12[3] + 8,lVar11);
    plVar14 = plStack_1b8;
    ppuVar8 = ppuStack_1c0;
    ppuStack_1c0 = (undefined **)0x0;
    plStack_1b8 = (long *)0x0;
    plVar13 = (long *)plVar12[0x27];
    plVar12[0x27] = (long)plVar14;
    plVar12[0x26] = (long)ppuVar8;
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 1;
      do {
        lVar11 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar14 = plStack_1b8;
    if (plStack_1b8 != (long *)0x0) {
      plVar13 = plStack_1b8 + 1;
      do {
        lVar11 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    lVar6 = plVar12[0x26];
  }
  *(undefined1 *)(lVar6 + 8) = 1;
  alStack_100[1] = 1;
  alStack_100[0] = 3600000;
  uStack_f0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0x101;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  func_0x000100627360(&ppuStack_1c0,alStack_100);
  cStack_110 = '\x01';
  plStack_1c8 = (long *)plVar12[0x27];
  lStack_1d0 = plVar12[0x26];
  if (plVar12[0x27] != 0) {
    plVar14 = (long *)(plVar12[0x27] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = *plVar14 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*plVar12 + 0x10))(&puStack_50,plVar12,&ppuStack_1c0,&lStack_1d0);
  plVar14 = plStack_48;
  puVar4 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  plStack_48 = (long *)0x0;
  plVar13 = (long *)plVar12[10];
  plVar12[10] = (long)plVar14;
  plVar12[9] = (long)puVar4;
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 1;
    do {
      lVar11 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar14 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar13 = plStack_48 + 1;
    do {
      lVar11 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar13 = plStack_1c8 + 1;
    do {
      lVar11 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  if (cStack_110 == '\x01') {
    func_0x000100627b64(&ppuStack_1c0);
  }
  plVar14 = (long *)plVar12[0xc];
  lVar6 = plVar12[10];
  lVar11 = plVar12[9];
  if (plVar12[10] != 0) {
    plVar13 = (long *)(plVar12[10] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar13 = (long *)plVar14[1];
  plVar14[1] = lVar6;
  *plVar14 = lVar11;
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 1;
    do {
      lVar11 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  ppuStack_1c0 = &PTR_SUB_110c768b0;
  plStack_1b8 = (long *)0x0;
  uStack_1a8 = 0;
  func_0x00010adea37c(&ppuStack_1c0);
  uStack_1a8 = CONCAT44(1,(undefined4)uStack_1a8);
  plVar14 = plStack_1b8;
  if (((ulong)plStack_1b8 & 1) != 0) {
    plVar14 = *(long **)((ulong)plStack_1b8 & 0xfffffffffffffffe);
  }
  FUN_104c45db4();
  *(uint *)(plVar14 + 2) = *(uint *)(plVar14 + 2) | 1;
  uVar7 = plVar14[3];
  plStack_1b0 = plVar14;
  if (uVar7 == 0) {
    uVar7 = plVar14[1];
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000104c45e58();
    plVar14[3] = uVar7;
  }
  FUN_104c483b0();
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar4 = (undefined8 *)plVar12[0xc];
  puVar4[2] = uVar7;
  plVar14 = (long *)*puVar4;
  puStack_50 = (undefined8 *)plVar12[0x23];
  plStack_48 = (long *)plVar12[0x24];
  if (plStack_48 != (long *)0x0) {
    plVar13 = plStack_48 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*plVar14 + 0x10))(plVar14,&ppuStack_1c0,&puStack_50);
  plVar14 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar13 = plStack_48 + 1;
    do {
      lVar11 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  if (((ulong)plStack_1b8 & 1) != 0) {
    func_0x0001053936ac(&plStack_1b8);
  }
  if (uStack_1a8._4_4_ != 0) {
    func_0x00010adea37c(&ppuStack_1c0);
  }
  ppuVar8 = (undefined **)0x8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar4 = (undefined8 *)0x10;
  ppuStack_1c0 = ppuVar8;
  __Znwm();
  ppuStack_1c0 = (undefined **)0x0;
  *puVar4 = ppuVar8;
  puVar4[1] = plVar12;
  puStack_50 = puVar4;
  _pthread_create(&lStack_1d0,0,FUN_104c46054,puVar4);
  if ((int)plVar9 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104c45a44);
    (*pcVar3)();
  }
  if (plVar12[0xb] == 0) {
    plVar12[0xb] = lStack_1d0;
    lStack_1d0 = 0;
    __ZNSt3__16threadD1Ev(&lStack_1d0);
    __ZNSt3__15mutex6unlockEv(plVar12 + 0x13);
    FUN_104c4bb14();
    plStack_1b0 = (long *)0x0;
    uStack_1a8 = 0;
    ppuStack_1c0 = &PTR_FUN_1107eb688;
    plStack_1b8 = (long *)0x0;
    uStack_1a0 = 0;
    pppuVar10 = &ppuStack_1c0;
    FUN_104c37260(pppuVar10,0);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar10,1);
    ppuStack_1c0 = &PTR_DAT_1107eb6f0;
    if (plStack_1b8 != (long *)0x0) {
      for (; plStack_1b8 != plStack_1b0; plStack_1b0 = plStack_1b0 + -3) {
      }
      plStack_1b0 = plStack_1b8;
      __ZdlPv(plStack_1b8);
    }
    plVar12 = alStack_100;
    func_0x000100627b64(plVar12);
    return plVar12;
  }
  __ZSt9terminatev();
  __ZNSt3__15mutex6unlockEv(plVar12 + 0x13);
  __Unwind_Resume();
  FUN_104bd46a0();
  func_0x000100627b64(alStack_100);
  __Unwind_Resume();
  func_0x000104c46668(&ppuStack_1c0);
  func_0x000100627b64(alStack_100);
  __ZNSt3__15mutex6unlockEv(plVar12 + 0x13);
  __Unwind_Resume();
  func_0x00010adea474(&ppuStack_1c0);
  func_0x000100627b64(alStack_100);
  __ZNSt3__15mutex6unlockEv(plVar12 + 0x13);
  __Unwind_Resume();
  plVar12 = (long *)plVar9[1];
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 1;
    do {
      lVar11 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      return plVar9;
    }
  }
  return plVar9;
}



/* Entry: 104c37d64; end: 104c37de3;  */

/* WARNING: Removing unreachable block (ram,0x000104c37db8) */

void FUN_104c37d64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_DAT_1107eb6f0;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[2];
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = param_1[1];
    }
    param_1[2] = lVar2;
    __ZdlPv(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104c37de4; end: 104c37e03;  */

undefined4 FUN_104c37de4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 104c37e04; end: 104c37ebf;  */

/* WARNING: Removing unreachable block (ram,0x000104c37e58) */

long * FUN_104c37e04(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (param_1[1] != lVar1) {
    lVar1 = lVar1 + -0x18;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c37ec0; end: 104c3804f;  */

/* WARNING: Removing unreachable block (ram,0x000104c37f04) */

long * FUN_104c37ec0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104c38050; end: 104c383a7;  */

long * FUN_104c38050(long *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    if ((char)param_1[2] == '\x01') {
      if (*(char *)(lVar2 + 0x3f) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar2 + 0x28));
        cVar1 = *(char *)(lVar2 + 0x27);
      }
      else {
        cVar1 = *(char *)(lVar2 + 0x27);
      }
      if (cVar1 < '\0') {
        __ZdlPv(*(undefined8 *)(lVar2 + 0x10));
      }
    }
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 104c383a8; end: 104c3841b;  */

undefined8 * FUN_104c383a8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar2 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 104c3841c; end: 104c3847f;  */

long FUN_104c3841c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c38480; end: 104c38493;  */

void FUN_104c38480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb548;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c38494; end: 104c384b7;  */

void FUN_104c38494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb548;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c384b8; end: 104c38563;  */

/* WARNING: Removing unreachable block (ram,0x000104c3851c) */
/* WARNING: Removing unreachable block (ram,0x000104c38518) */
/* WARNING: Removing unreachable block (ram,0x000104c38530) */

void FUN_104c384b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar1 == lVar2) {
      *(long *)(param_1 + 0x20) = lVar1;
      lVar2 = lVar1;
    }
    else {
      do {
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != lVar1);
      lVar2 = *(long *)(param_1 + 0x18);
      *(long *)(param_1 + 0x20) = lVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 104c38564; end: 104c38567;  */

void FUN_104c38564(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c38568; end: 104c3877f;  */

/* WARNING: Removing unreachable block (ram,0x000104c387c4) */
/* WARNING: Removing unreachable block (ram,0x000104c387c0) */
/* WARNING: Removing unreachable block (ram,0x000104c387d4) */

long * FUN_104c38568(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar8) {
    FUN_104bff778();
LAB_104c38744:
    FUN_104bd35f4();
    if (*(char *)((long)unaff_x22 + 0x17) < '\0') {
      __ZdlPv(*unaff_x22);
      FUN_104c38780(&lStack_68);
      __Unwind_Resume();
    }
    FUN_104c38780(&lStack_68);
    __Unwind_Resume();
    lVar10 = param_1[2];
    while (param_1[1] != lVar10) {
      param_1[2] = lVar10 + -0x30;
      lVar10 = param_1[2];
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  plStack_48 = param_1 + 2;
  lVar6 = *plStack_48 - *param_1 >> 4;
  uVar9 = lVar6 * 0x5555555555555556;
  if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
    uVar9 = uVar8;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar9 = 0x555555555555555;
  }
  if (uVar9 == 0) {
    lVar6 = 0;
  }
  else {
    if (0x555555555555555 < uVar9) goto LAB_104c38744;
    lVar6 = uVar9 * 0x30;
    __Znwm();
  }
  puVar1 = (undefined8 *)(lVar6 + lVar10);
  lVar10 = lVar6 + uVar9 * 0x30;
  lStack_68 = lVar6;
  puStack_60 = puVar1;
  puStack_58 = puVar1;
  lStack_50 = lVar10;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar12 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar12;
    puVar1[2] = param_2[2];
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000100033dac(puVar1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar12 = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[3] = uVar12;
    puVar1[5] = param_2[5];
  }
  puVar11 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar1 + ((long)puVar11 - (long)puVar3));
  puVar5 = puVar11;
  puVar7 = puVar2;
  if (puVar3 != puVar11) {
    do {
      uVar13 = puVar5[1];
      uVar12 = *puVar5;
      puVar7[2] = puVar5[2];
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      uVar13 = puVar5[4];
      uVar12 = puVar5[3];
      puVar7[5] = puVar5[5];
      puVar7[4] = uVar13;
      puVar7[3] = uVar12;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[3] = 0;
      puVar5 = puVar5 + 6;
      puVar7 = puVar7 + 6;
    } while (puVar5 != puVar3);
    do {
      if (*(char *)((long)puVar11 + 0x2f) < '\0') {
        __ZdlPv(puVar11[3]);
        cVar4 = *(char *)((long)puVar11 + 0x17);
      }
      else {
        cVar4 = *(char *)((long)puVar11 + 0x17);
      }
      if (cVar4 < '\0') {
        __ZdlPv(*puVar11);
      }
      puVar11 = puVar11 + 6;
    } while (puVar11 != puVar3);
    puVar11 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar2;
  param_1[1] = (long)(puVar1 + 6);
  param_1[2] = lVar10;
  if (puVar11 != (undefined8 *)0x0) {
    __ZdlPv(puVar11);
  }
  return puVar1 + 6;
}



/* Entry: 104c38780; end: 104c387ff;  */

/* WARNING: Removing unreachable block (ram,0x000104c387c4) */
/* WARNING: Removing unreachable block (ram,0x000104c387c0) */
/* WARNING: Removing unreachable block (ram,0x000104c387d4) */

long * FUN_104c38780(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (param_1[1] != lVar1) {
    param_1[2] = lVar1 + -0x30;
    lVar1 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c38800; end: 104c38813;  */

void FUN_104c38800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c38814; end: 104c38837;  */

void FUN_104c38814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb598;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c38838; end: 104c3885b;  */

void FUN_104c38838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c38840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c3885c; end: 104c3887f;  */

void FUN_104c3885c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107eb5e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c38880; end: 104c3888f;  */

void FUN_104c38880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c38888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c38890; end: 104c38987;  */

void FUN_104c38890(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  puVar6 = (undefined8 *)0x48;
  __Znwm();
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1107e9880;
  puVar6[1] = 0;
  puVar1 = puVar6 + 3;
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar2 = (long *)(param_3[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x000100489728(puVar1,&uStack_40);
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar6;
      return;
    }
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 104c38988; end: 104c389eb;  */

long FUN_104c38988(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c389ec; end: 104c38b57;  */

void FUN_104c389ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar5 = (long *)0x278;
  __Znwm();
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_1107e9bc8;
  plVar1 = plVar5 + 3;
  FUN_104c38b58(plVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar5;
  if (plVar5[5] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[4] = (long)plVar1;
    plVar5[5] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[5] + 8) != -1) {
      return;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[4] = (long)plVar1;
    plVar5[5] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 104c38b58; end: 104c38c47;  */

undefined8
FUN_104c38b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             long *param_5,undefined4 *param_6,undefined1 *param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_4[1];
  uStack_30 = *param_4;
  if (param_4[1] != 0) {
    plVar1 = (long *)(param_4[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_38 = *param_5;
  *param_5 = 0;
  func_0x00010055d67c(param_1,param_2,param_3,&uStack_30,&lStack_38,*param_6,*param_7,0);
  lVar5 = lStack_38;
  lStack_38 = 0;
  if (lVar5 != 0) {
    func_0x00010048b724();
    __ZdlPv();
  }
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c38c48; end: 104c38cab;  */

long FUN_104c38c48(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c38cac; end: 104c38cbf;  */

void FUN_104c38cac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb638;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c38cc0; end: 104c38ce3;  */

void FUN_104c38cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb638;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c38ce4; end: 104c38d3b;  */

void FUN_104c38ce4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 104c38d3c; end: 104c38d4f;  */

void FUN_104c38d3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c38d50; end: 104c38d6f;  */

void FUN_104c38d50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107eb4a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c38d70; end: 104c38d7f;  */

void FUN_104c38d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c38d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c38d80; end: 104c38e47;  */

uint FUN_104c38d80(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lStack_40;
  char cStack_38;
  
  lVar3 = param_1 + 0x18;
  cStack_38 = '\x01';
  lVar1 = lVar3;
  lStack_40 = lVar3;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(param_1 + 0x88) >> 3 & 1) == 0) {
    while (uVar2 = *(uint *)(param_1 + 0x88), (uVar2 >> 2 & 1) == 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (*param_2 <= lVar1) {
        uVar2 = *(uint *)(param_1 + 0x88);
        break;
      }
      lVar1 = param_1 + 0x58;
      FUN_104c38e48(lVar1,&lStack_40,param_2);
    }
    uVar2 = (uVar2 >> 2 ^ 0xffffffff) & 1;
    lVar3 = lStack_40;
    if (cStack_38 != '\x01') {
      return uVar2;
    }
  }
  else {
    uVar2 = 2;
  }
  __ZNSt3__15mutex6unlockEv(lVar3);
  return uVar2;
}



/* Entry: 104c38e48; end: 104c38f4f;  */

bool FUN_104c38e48(ulong param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar2 = *param_3;
  if (lVar2 <= (long)uVar1) {
    return true;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar3 = lVar2 - uVar1;
  if ((long)uVar3 < 1) goto LAB_104c38f30;
  __ZNSt3__16chrono12steady_clock3nowEv();
  __ZNSt3__16chrono12system_clock3nowEv();
  if (uVar1 == 0) {
    lVar2 = 0;
LAB_104c38f1c:
    lVar2 = lVar2 + uVar3;
  }
  else {
    if ((long)uVar1 < 1) {
      if (0xffdf3b645a1cac08 < uVar1) goto LAB_104c38f00;
      lVar2 = -0x8000000000000000;
      goto LAB_104c38f1c;
    }
    if (uVar1 < 0x20c49ba5e353f8) {
LAB_104c38f00:
      lVar2 = uVar1 * 1000;
      if (lVar2 - (uVar3 ^ 0x7fffffffffffffff) == 0 || lVar2 < (long)(uVar3 ^ 0x7fffffffffffffff))
      goto LAB_104c38f1c;
    }
    else {
      lVar2 = 0x7fffffffffffffff;
      if (0x7ffffffffffffffe < (long)(uVar3 ^ 0x7fffffffffffffff)) goto LAB_104c38f1c;
    }
    lVar2 = 0x7fffffffffffffff;
  }
  __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
            (param_1,param_2,lVar2);
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar1 = param_1;
LAB_104c38f30:
  __ZNSt3__16chrono12steady_clock3nowEv();
  return *param_3 <= (long)uVar1;
}



/* Entry: 104c38f50; end: 104c3905f;  */

undefined8 * FUN_104c38f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_104c39060(param_1 + 3,param_2[3],param_2[4],
                ((long)(param_2[4] - param_2[3]) >> 5) * -0x3333333333333333);
  param_1[6] = param_2[6];
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000100033dac(param_1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_104c392b0();
  return param_1;
}



/* Entry: 104c39060; end: 104c39163;  */

void FUN_104c39060(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 != 0) {
    if (0x199999999999999 < param_4) {
      FUN_104c3499c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104c3911c);
      (*pcVar1)();
    }
    lVar2 = param_4 * 0xa0;
    __Znwm();
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_4 * 0xa0;
    if (param_2 != param_3) {
      lVar3 = 0;
      do {
        FUN_104c34edc(lVar2 + lVar3,param_2 + lVar3);
        lVar3 = lVar3 + 0xa0;
      } while (param_2 + lVar3 != param_3);
      lVar2 = lVar2 + lVar3;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* Entry: 104c39164; end: 104c392af;  */

long * FUN_104c39164(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    plVar3 = (long *)*param_1;
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      lVar1 = plVar3[1];
      lVar2 = lVar4;
      if (lVar4 != lVar1) {
        do {
          lVar1 = lVar1 + -0xa0;
          func_0x000104c35148();
        } while (lVar1 != lVar4);
        lVar2 = *(long *)*param_1;
      }
      plVar3[1] = lVar4;
      __ZdlPv(lVar2);
    }
  }
  return param_1;
}



/* Entry: 104c392b0; end: 104c393f3;  */

void FUN_104c392b0(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puStack_48;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3b != 0) {
      FUN_104c39474();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104c393c0);
      (*pcVar2)();
    }
    puStack_48 = (undefined8 *)(param_4 << 5);
    __Znwm();
    *param_1 = (long)puStack_48;
    param_1[1] = (long)puStack_48;
    param_1[2] = (long)(puStack_48 + param_4 * 4);
    if (param_2 != param_3) {
      puVar3 = param_2 + 1;
      do {
        while( true ) {
          *puStack_48 = puVar3[-1];
          if (-1 < *(char *)((long)puVar3 + 0x17)) break;
          func_0x000100033dac(puStack_48 + 1,*puVar3,puVar3[1]);
          puStack_48 = puStack_48 + 4;
          puVar1 = puVar3 + 3;
          puVar3 = puVar3 + 4;
          if (puVar1 == param_3) goto LAB_104c3939c;
        }
        uVar5 = puVar3[1];
        uVar4 = *puVar3;
        puStack_48[3] = puVar3[2];
        puStack_48[2] = uVar5;
        puStack_48[1] = uVar4;
        puStack_48 = puStack_48 + 4;
        puVar1 = puVar3 + 3;
        puVar3 = puVar3 + 4;
      } while (puVar1 != param_3);
    }
LAB_104c3939c:
    param_1[1] = (long)puStack_48;
  }
  return;
}



/* Entry: 104c393f4; end: 104c39473;  */

/* WARNING: Removing unreachable block (ram,0x000104c39444) */

long * FUN_104c393f4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    plVar2 = (long *)*param_1;
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = plVar2[1];
      lVar1 = lVar3;
      if (lVar3 != lVar4) {
        do {
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != lVar3);
        lVar1 = *(long *)*param_1;
      }
      plVar2[1] = lVar3;
      __ZdlPv(lVar1);
    }
  }
  return param_1;
}



/* Entry: 104c39474; end: 104c39487;  */

/* WARNING: Removing unreachable block (ram,0x000104c394dc) */

undefined * FUN_104c39474(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104bd47e8();
  if ((puVar1[0x18] & 1) == 0) {
    for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8); lVar2 = lVar2 + -0x20
        ) {
    }
  }
  return puVar1;
}



/* Entry: 104c39488; end: 104c394e7;  */

/* WARNING: Removing unreachable block (ram,0x000104c394dc) */

long FUN_104c39488(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x20) {
    }
  }
  return param_1;
}



/* Entry: 104c394e8; end: 104c39687;  */

long * FUN_104c394e8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == puVar4) {
    param_1[5] = 0;
    uVar3 = 0;
    puVar5 = puVar4;
  }
  else {
    uVar3 = param_1[4];
    puVar6 = puVar4 + uVar3 / 0xaa;
    puVar1 = (undefined8 *)*puVar6;
    puVar8 = puVar1 + (uVar3 % 0xaa) * 3;
    uVar3 = param_1[5] + uVar3;
    puVar7 = (undefined8 *)(puVar4[uVar3 / 0xaa] + (uVar3 % 0xaa) * 0x18);
    if (puVar8 != puVar7) {
      do {
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          __ZdlPv(*puVar8);
          puVar1 = (undefined8 *)*puVar6;
          lVar2 = (long)(puVar8 + 3) - (long)puVar1;
        }
        else {
          lVar2 = (long)(puVar8 + 3) - (long)puVar1;
        }
        puVar8 = puVar8 + 3;
        if (lVar2 == 0xff0) {
          puVar6 = puVar6 + 1;
          puVar1 = (undefined8 *)*puVar6;
          puVar8 = puVar1;
        }
      } while (puVar8 != puVar7);
      puVar4 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
    }
    param_1[5] = 0;
    lVar2 = (long)puVar5 - (long)puVar4;
    while (uVar3 = lVar2 >> 3, 2 < uVar3) {
      __ZdlPv(*puVar4);
      puVar5 = (undefined8 *)param_1[2];
      puVar4 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = (long)puVar4;
      lVar2 = (long)puVar5 - (long)puVar4;
    }
  }
  if (uVar3 == 1) {
    lVar2 = 0x55;
  }
  else {
    if (uVar3 != 2) goto LAB_104c3962c;
    lVar2 = 0xaa;
  }
  param_1[4] = lVar2;
LAB_104c3962c:
  if (puVar4 != puVar5) {
    do {
      puVar6 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar6;
    } while (puVar6 != puVar5);
    lVar2 = param_1[1] - param_1[2];
    if (lVar2 != 0) {
      param_1[2] = param_1[2] + (lVar2 + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c39688; end: 104c3968b;  */

void FUN_104c39688(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c3968c; end: 104c3969f;  */

void FUN_104c3968c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c396a0; end: 104c39753;  */

void FUN_104c396a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__118condition_variableD1Ev(lVar1 + 0x70);
    __ZNSt3__15mutexD1Ev(lVar1 + 0x30);
    FUN_104c394e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104c39754; end: 104c39757;  */

void FUN_104c39754(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c39758; end: 104c39a8f;  */

/* WARNING: Possible PIC construction at 0x000104c397e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c398b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c397e4) */
/* WARNING: Removing unreachable block (ram,0x000104c398bc) */

long * FUN_104c39758(long *param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar19;
  undefined8 unaff_x23;
  long *plVar20;
  long *plVar21;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 ******ppppppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  puVar5 = auStack_70;
  puVar4 = auStack_70;
  pppppppuVar23 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (0xa9 < (ulong)param_1[4]) {
    param_1[4] = param_1[4] - 0xaa;
    lStack_68 = *(long *)param_1[1];
    param_1[1] = (long)((long *)param_1[1] + 1);
    FUN_104c39a90(param_1,&lStack_68);
    return param_1;
  }
  plVar7 = (long *)param_1[2];
  plVar20 = (long *)param_1[3];
  plVar19 = (long *)param_1[1];
  plVar21 = (long *)((long)plVar7 - (long)plVar19);
  plVar13 = (long *)((long)plVar20 - *param_1);
  if (plVar21 < plVar13) {
    lVar6 = 0xff0;
    plVar19 = param_1;
    if (plVar20 == plVar7) {
      __Znwm();
      lStack_68 = lVar6;
      plVar13 = &lStack_68;
      uVar24 = 0x104c398bc;
      plVar20 = unaff_x20;
SUB_104c39d88:
      *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
      *(long **)(puVar5 + -0x48) = plVar21;
      *(long **)(puVar5 + -0x40) = plVar7;
      *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
      *(long **)(puVar5 + -0x30) = unaff_x22;
      *(long **)(puVar5 + -0x28) = unaff_x21;
      *(long **)(puVar5 + -0x20) = plVar20;
      *(long **)(puVar5 + -0x18) = plVar19;
      *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar23;
      *(undefined8 *)(puVar5 + -8) = uVar24;
      plVar20 = (long *)*param_1;
      plVar19 = (long *)param_1[1];
      plVar21 = param_1;
      if (plVar19 != plVar20) goto LAB_104c39ee8;
      uVar14 = param_1[2];
      uVar10 = param_1[3];
      if (uVar14 < uVar10) {
        lVar6 = (((long)(uVar10 - uVar14) >> 3) + 1) / 2;
        plVar7 = plVar19 + lVar6;
        if (uVar14 - (long)plVar19 != 0) {
          plVar21 = plVar7;
          _memmove(plVar7,plVar19,uVar14 - (long)plVar19);
          uVar14 = param_1[2];
        }
        param_1[2] = uVar14 + lVar6 * 8;
        plVar19 = plVar7;
        goto LAB_104c39ee8;
      }
      uVar12 = (long)(uVar10 - (long)plVar19) >> 2;
      if (uVar10 - (long)plVar19 == 0) {
        uVar12 = 1;
      }
      if (uVar12 >> 0x3d != 0) {
        plVar9 = plVar13;
        FUN_104bd35f4();
        *(undefined8 *)(puVar5 + -0xa0) = unaff_x26;
        *(ulong *)(puVar5 + -0x98) = uVar14;
        *(long **)(puVar5 + -0x90) = plVar7;
        *(long **)(puVar5 + -0x88) = plVar20;
        *(long **)(puVar5 + -0x80) = unaff_x22;
        *(long **)(puVar5 + -0x78) = plVar19;
        *(long **)(puVar5 + -0x70) = plVar13;
        *(long **)(puVar5 + -0x68) = param_1;
        *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x10;
        *(undefined8 *)(puVar5 + -0x58) = 0x104c39f10;
        plVar7 = (long *)*plVar21;
        plVar20 = (long *)plVar21[1];
        plVar19 = plVar21;
        if (plVar20 != plVar7) goto LAB_104c3a070;
        uVar14 = plVar21[2];
        uVar10 = plVar21[3];
        if (uVar14 < uVar10) {
          lVar6 = (((long)(uVar10 - uVar14) >> 3) + 1) / 2;
          plVar7 = plVar20 + lVar6;
          if (uVar14 - (long)plVar20 != 0) {
            plVar19 = plVar7;
            _memmove(plVar7,plVar20,uVar14 - (long)plVar20);
            uVar14 = plVar21[2];
          }
          plVar21[2] = uVar14 + lVar6 * 8;
          plVar20 = plVar7;
          goto LAB_104c3a070;
        }
        uVar12 = (long)(uVar10 - (long)plVar20) >> 2;
        if (uVar10 - (long)plVar20 == 0) {
          uVar12 = 1;
        }
        if (uVar12 >> 0x3d != 0) {
          plVar7 = plVar21;
          FUN_104bd35f4();
          *(long **)(puVar5 + -0xc0) = plVar9;
          *(long **)(puVar5 + -0xb8) = plVar21;
          *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x60;
          *(code **)(puVar5 + -0xa8) = FUN_104c3a098;
          plVar20 = (long *)plVar7[1];
          if (plVar20 != (long *)0x0) {
            plVar19 = plVar20 + 1;
            do {
              lVar6 = *plVar19;
              cVar2 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar1) {
                *plVar19 = lVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
              return plVar7;
            }
          }
          return plVar7;
        }
        uVar10 = uVar12 + 3 >> 2;
        plVar19 = (long *)(uVar12 * 8);
        __Znwm();
        plVar13 = plVar19 + uVar10;
        lVar6 = uVar14 - (long)plVar20;
        plVar8 = plVar13;
        if (lVar6 != 0) {
          plVar8 = (long *)((long)plVar13 + lVar6);
          plVar15 = plVar13;
          plVar18 = plVar20;
          if ((0x37 < lVar6 - 8U) && (0x1f < (long)plVar19 + (uVar10 * 8 - (long)plVar20))) {
            uVar14 = (lVar6 - 8U >> 3) + 1;
            uVar17 = uVar14 & 0x3ffffffffffffffc;
            plVar15 = plVar20 + 2;
            plVar18 = plVar19 + uVar10 + 2;
            uVar10 = uVar17;
            do {
              lVar6 = plVar15[-2];
              lVar25 = plVar15[1];
              lVar11 = *plVar15;
              plVar18[-1] = plVar15[-1];
              plVar18[-2] = lVar6;
              plVar18[1] = lVar25;
              *plVar18 = lVar11;
              plVar15 = plVar15 + 4;
              plVar18 = plVar18 + 4;
              uVar10 = uVar10 - 4;
            } while (uVar10 != 0);
            plVar15 = plVar13 + uVar17;
            plVar18 = plVar20 + uVar17;
            if (uVar14 == uVar17) goto LAB_104c3a058;
          }
          do {
            plVar16 = plVar15 + 1;
            *plVar15 = *plVar18;
            plVar15 = plVar16;
            plVar18 = plVar18 + 1;
          } while (plVar16 != plVar8);
        }
LAB_104c3a058:
        *plVar21 = (long)plVar19;
        plVar21[1] = (long)plVar13;
        plVar21[2] = (long)plVar8;
        plVar21[3] = (long)(plVar19 + uVar12);
        bVar1 = plVar20 != (long *)0x0;
        plVar20 = plVar13;
        if (bVar1) {
          __ZdlPv(plVar7);
          plVar20 = (long *)plVar21[1];
          plVar19 = plVar7;
        }
LAB_104c3a070:
        plVar20[-1] = *plVar9;
        plVar21[1] = (long)(plVar20 + -1);
        return plVar19;
      }
      uVar10 = uVar12 + 3 >> 2;
      plVar21 = (long *)(uVar12 * 8);
      __Znwm();
      plVar7 = plVar21 + uVar10;
      lVar6 = uVar14 - (long)plVar19;
      plVar9 = plVar7;
      if (lVar6 != 0) {
        plVar9 = (long *)((long)plVar7 + lVar6);
        plVar8 = plVar7;
        plVar15 = plVar19;
        if ((0x37 < lVar6 - 8U) && (0x1f < (long)plVar21 + (uVar10 * 8 - (long)plVar19))) {
          uVar14 = (lVar6 - 8U >> 3) + 1;
          uVar17 = uVar14 & 0x3ffffffffffffffc;
          plVar8 = plVar19 + 2;
          plVar15 = plVar21 + uVar10 + 2;
          uVar10 = uVar17;
          do {
            lVar6 = plVar8[-2];
            lVar25 = plVar8[1];
            lVar11 = *plVar8;
            plVar15[-1] = plVar8[-1];
            plVar15[-2] = lVar6;
            plVar15[1] = lVar25;
            *plVar15 = lVar11;
            plVar8 = plVar8 + 4;
            plVar15 = plVar15 + 4;
            uVar10 = uVar10 - 4;
          } while (uVar10 != 0);
          plVar8 = plVar7 + uVar17;
          plVar15 = plVar19 + uVar17;
          if (uVar14 == uVar17) goto LAB_104c39ed0;
        }
        do {
          plVar18 = plVar8 + 1;
          *plVar8 = *plVar15;
          plVar8 = plVar18;
          plVar15 = plVar15 + 1;
        } while (plVar18 != plVar9);
      }
LAB_104c39ed0:
      *param_1 = (long)plVar21;
      param_1[1] = (long)plVar7;
      param_1[2] = (long)plVar9;
      param_1[3] = (long)(plVar21 + uVar12);
      bVar1 = plVar19 != (long *)0x0;
      plVar19 = plVar7;
      if (bVar1) {
        __ZdlPv(plVar20);
        plVar19 = (long *)param_1[1];
        plVar21 = plVar20;
      }
LAB_104c39ee8:
      plVar19[-1] = *plVar13;
      param_1[1] = (long)(plVar19 + -1);
      return plVar21;
    }
    __Znwm();
    lStack_68 = lVar6;
    plVar20 = &lStack_68;
    uVar24 = 0x104c397e4;
    param_2 = unaff_x20;
    pppppppuVar22 = pppppppuVar23;
SUB_104c39c0c:
    puVar5 = puVar4 + -0x50;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(long **)(puVar4 + -0x48) = plVar21;
    *(long **)(puVar4 + -0x40) = plVar7;
    *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
    *(long **)(puVar4 + -0x30) = unaff_x22;
    *(long **)(puVar4 + -0x28) = unaff_x21;
    *(long **)(puVar4 + -0x20) = param_2;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar22;
    *(undefined8 *)(puVar4 + -8) = uVar24;
    pppppppuVar23 = (undefined8 *******)(puVar4 + -0x10);
    plVar7 = (long *)plVar19[2];
    plVar13 = plVar19;
    if (plVar7 != (long *)plVar19[3]) goto LAB_104c39d60;
    unaff_x21 = (long *)*plVar19;
    unaff_x22 = (long *)plVar19[1];
    if (unaff_x21 <= unaff_x22 && (long)unaff_x22 - (long)unaff_x21 != 0) {
      lVar11 = (((long)unaff_x22 - (long)unaff_x21 >> 3) + 1) / 2;
      plVar21 = unaff_x22 + -lVar11;
      lVar6 = (long)plVar7 - (long)unaff_x22;
      if (lVar6 != 0) {
        plVar13 = plVar21;
        _memmove(plVar21,unaff_x22,lVar6);
        unaff_x22 = (long *)plVar19[1];
      }
      plVar7 = (long *)((long)plVar21 + lVar6);
      plVar19[1] = (long)(unaff_x22 + -lVar11);
      goto LAB_104c39d60;
    }
    uVar14 = (long)plVar7 - (long)unaff_x21 >> 2;
    if ((long)plVar7 - (long)unaff_x21 == 0) {
      uVar14 = 1;
    }
    if (uVar14 >> 0x3d != 0) {
      uVar24 = 0x104c39d88;
      param_1 = plVar19;
      plVar13 = plVar20;
      FUN_104bd35f4();
      goto SUB_104c39d88;
    }
    uVar10 = uVar14 >> 2;
    plVar13 = (long *)(uVar14 * 8);
    __Znwm();
    plVar21 = plVar13 + uVar10;
    lVar6 = (long)plVar7 - (long)unaff_x22;
    plVar7 = plVar21;
    if (lVar6 != 0) {
      plVar7 = (long *)((long)plVar21 + lVar6);
      plVar9 = plVar21;
      if ((0x37 < lVar6 - 8U) && (0x1f < (long)plVar13 + (uVar10 * 8 - (long)unaff_x22))) {
        uVar12 = (lVar6 - 8U >> 3) + 1;
        uVar17 = uVar12 & 0x3ffffffffffffffc;
        plVar9 = unaff_x22 + 2;
        plVar8 = plVar13 + uVar10 + 2;
        uVar10 = uVar17;
        do {
          lVar6 = plVar9[-2];
          lVar25 = plVar9[1];
          lVar11 = *plVar9;
          plVar8[-1] = plVar9[-1];
          plVar8[-2] = lVar6;
          plVar8[1] = lVar25;
          *plVar8 = lVar11;
          plVar9 = plVar9 + 4;
          plVar8 = plVar8 + 4;
          uVar10 = uVar10 - 4;
        } while (uVar10 != 0);
        plVar9 = plVar21 + uVar17;
        unaff_x22 = unaff_x22 + uVar17;
        if (uVar12 == uVar17) goto LAB_104c39d48;
      }
      do {
        plVar8 = plVar9 + 1;
        *plVar9 = *unaff_x22;
        plVar9 = plVar8;
        unaff_x22 = unaff_x22 + 1;
      } while (plVar8 != plVar7);
    }
LAB_104c39d48:
    *plVar19 = (long)plVar13;
    plVar19[1] = (long)plVar21;
    plVar19[2] = (long)plVar7;
    plVar19[3] = (long)(plVar13 + uVar14);
    if (unaff_x21 != (long *)0x0) {
      __ZdlPv(unaff_x21);
      plVar7 = (long *)plVar19[2];
      plVar13 = unaff_x21;
    }
LAB_104c39d60:
    *plVar7 = *plVar20;
    plVar19[2] = (long)(plVar7 + 1);
    return plVar13;
  }
  uVar14 = (long)plVar13 >> 2;
  if (plVar20 == (long *)*param_1) {
    uVar14 = 1;
  }
  if (uVar14 >> 0x3d != 0) {
    FUN_104bd35f4();
    __ZdlPv();
    __ZdlPv();
    __Unwind_Resume();
    __ZdlPv();
    __Unwind_Resume();
    __ZdlPv();
    __Unwind_Resume();
    __ZdlPv();
    __Unwind_Resume();
    puVar4 = &stack0xffffffffffffff40;
    pcStack_78 = FUN_104c39a90;
    pppppppuVar22 = &ppppppuStack_80;
    plVar7 = (long *)param_1[2];
    plVar20 = param_1;
    if (plVar7 != (long *)param_1[3]) goto LAB_104c39be4;
    unaff_x21 = (long *)*param_1;
    unaff_x22 = (long *)param_1[1];
    ppppppuStack_80 = pppppppuVar23;
    if (unaff_x21 <= unaff_x22 && (long)unaff_x22 - (long)unaff_x21 != 0) {
      lVar11 = (((long)unaff_x22 - (long)unaff_x21 >> 3) + 1) / 2;
      plVar19 = unaff_x22 + -lVar11;
      lVar6 = (long)plVar7 - (long)unaff_x22;
      if (lVar6 != 0) {
        plVar20 = plVar19;
        _memmove(plVar19,unaff_x22,lVar6);
        unaff_x22 = (long *)param_1[1];
      }
      plVar7 = (long *)((long)plVar19 + lVar6);
      param_1[1] = (long)(unaff_x22 + -lVar11);
      goto LAB_104c39be4;
    }
    uVar14 = (long)plVar7 - (long)unaff_x21 >> 2;
    if ((long)plVar7 - (long)unaff_x21 == 0) {
      uVar14 = 1;
    }
    if (uVar14 >> 0x3d != 0) {
      uVar24 = 0x104c39c0c;
      plVar19 = param_1;
      plVar20 = param_2;
      FUN_104bd35f4();
      goto SUB_104c39c0c;
    }
    uVar10 = uVar14 >> 2;
    plVar20 = (long *)(uVar14 * 8);
    __Znwm();
    plVar19 = plVar20 + uVar10;
    lVar6 = (long)plVar7 - (long)unaff_x22;
    plVar7 = plVar19;
    if (lVar6 != 0) {
      plVar7 = (long *)((long)plVar19 + lVar6);
      plVar13 = plVar19;
      if ((0x37 < lVar6 - 8U) && (0x1f < (long)plVar20 + (uVar10 * 8 - (long)unaff_x22))) {
        uVar12 = (lVar6 - 8U >> 3) + 1;
        uVar17 = uVar12 & 0x3ffffffffffffffc;
        plVar13 = unaff_x22 + 2;
        plVar21 = plVar20 + uVar10 + 2;
        uVar10 = uVar17;
        do {
          lVar6 = plVar13[-2];
          lVar25 = plVar13[1];
          lVar11 = *plVar13;
          plVar21[-1] = plVar13[-1];
          plVar21[-2] = lVar6;
          plVar21[1] = lVar25;
          *plVar21 = lVar11;
          plVar13 = plVar13 + 4;
          plVar21 = plVar21 + 4;
          uVar10 = uVar10 - 4;
        } while (uVar10 != 0);
        plVar13 = plVar19 + uVar17;
        unaff_x22 = unaff_x22 + uVar17;
        if (uVar12 == uVar17) goto LAB_104c39bcc;
      }
      do {
        plVar21 = plVar13 + 1;
        *plVar13 = *unaff_x22;
        plVar13 = plVar21;
        unaff_x22 = unaff_x22 + 1;
      } while (plVar21 != plVar7);
    }
LAB_104c39bcc:
    *param_1 = (long)plVar20;
    param_1[1] = (long)plVar19;
    param_1[2] = (long)plVar7;
    param_1[3] = (long)(plVar20 + uVar14);
    if (unaff_x21 != (long *)0x0) {
      __ZdlPv(unaff_x21);
      plVar7 = (long *)param_1[2];
      plVar20 = unaff_x21;
    }
LAB_104c39be4:
    *plVar7 = *param_2;
    param_1[2] = (long)(plVar7 + 1);
    return plVar20;
  }
  plVar9 = (long *)(uVar14 * 8);
  __Znwm();
  lVar6 = 0xff0;
  __Znwm();
  plVar13 = (long *)((long)plVar9 + (long)plVar21);
  plVar20 = plVar9 + uVar14;
  if (plVar21 == (long *)(uVar14 * 8)) {
    if (plVar7 != plVar19) {
      lVar11 = ((long)plVar21 >> 3) + 1;
      plVar13 = plVar13 + -((ulong)(lVar11 - (lVar11 >> 0x3f)) >> 1);
      goto LAB_104c39844;
    }
    plVar8 = (long *)0x8;
    __Znwm();
    plVar20 = plVar8 + 1;
    __ZdlPv(plVar9);
    plVar19 = (long *)param_1[1];
    plVar7 = (long *)param_1[2];
    plVar21 = plVar8 + 1;
    *plVar8 = lVar6;
    plVar13 = plVar8;
    if (plVar7 == plVar19) goto LAB_104c39858;
  }
  else {
LAB_104c39844:
    plVar21 = plVar13 + 1;
    *plVar13 = lVar6;
    plVar8 = plVar9;
    if (plVar7 == plVar19) goto LAB_104c39858;
  }
  do {
    plVar19 = plVar13;
    if (plVar13 == plVar8) {
      if (plVar21 < plVar20) {
        lVar6 = ((long)plVar20 - (long)plVar21 >> 3) + 1;
        lVar11 = (long)plVar21 - (long)plVar8;
        lVar25 = (long)plVar21 - (long)plVar8;
        plVar21 = plVar21 + ((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1);
        plVar19 = (long *)((long)plVar21 - lVar11);
        if (lVar25 != 0) {
          _memmove(plVar19,plVar13,lVar25);
        }
      }
      else {
        uVar14 = (long)plVar20 - (long)plVar8 >> 2;
        if ((long)plVar20 - (long)plVar8 == 0) {
          uVar14 = 1;
        }
        if (uVar14 >> 0x3d != 0) {
          FUN_104bd35f4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104c39a34);
          (*pcVar3)();
        }
        plVar9 = (long *)(uVar14 << 3);
        __Znwm();
        uVar10 = uVar14 + 3 >> 2;
        plVar19 = plVar9 + uVar10;
        lVar6 = (long)plVar21 - (long)plVar8;
        plVar21 = plVar19;
        if (lVar6 != 0) {
          plVar21 = (long *)((long)plVar19 + lVar6);
          plVar20 = plVar19;
          if ((0x17 < lVar6 - 8U) && (0x1f < (long)plVar9 + (uVar10 * 8 - (long)plVar13))) {
            uVar12 = (lVar6 - 8U >> 3) + 1;
            uVar17 = uVar12 & 0x3ffffffffffffffc;
            plVar20 = plVar13 + 2;
            plVar15 = plVar9 + uVar10 + 2;
            uVar10 = uVar17;
            do {
              lVar6 = plVar20[-2];
              lVar25 = plVar20[1];
              lVar11 = *plVar20;
              plVar15[-1] = plVar20[-1];
              plVar15[-2] = lVar6;
              plVar15[1] = lVar25;
              *plVar15 = lVar11;
              plVar20 = plVar20 + 4;
              plVar15 = plVar15 + 4;
              uVar10 = uVar10 - 4;
            } while (uVar10 != 0);
            plVar20 = plVar19 + uVar17;
            plVar13 = plVar13 + uVar17;
            if (uVar12 == uVar17) goto LAB_104c399cc;
          }
          do {
            plVar15 = plVar20 + 1;
            *plVar20 = *plVar13;
            plVar20 = plVar15;
            plVar13 = plVar13 + 1;
          } while (plVar15 != plVar21);
        }
LAB_104c399cc:
        plVar20 = plVar9 + uVar14;
        __ZdlPv(plVar8);
        plVar8 = plVar9;
      }
    }
    plVar7 = plVar7 + -1;
    plVar13 = plVar19 + -1;
    *plVar13 = *plVar7;
  } while (plVar7 != (long *)param_1[1]);
LAB_104c39858:
  plVar7 = (long *)*param_1;
  *param_1 = (long)plVar8;
  param_1[1] = (long)plVar13;
  param_1[2] = (long)plVar21;
  param_1[3] = (long)plVar20;
  if (plVar7 == (long *)0x0) {
    return (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return plVar7;
}



/* Entry: 104c39a90; end: 104c3a097;  */

ulong * FUN_104c39a90(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  puVar16 = (ulong *)param_1[2];
  puVar14 = param_1;
  if (puVar16 != (ulong *)param_1[3]) goto LAB_104c39be4;
  puVar17 = (ulong *)*param_1;
  puVar13 = (ulong *)param_1[1];
  if (puVar17 <= puVar13 && (long)puVar13 - (long)puVar17 != 0) {
    lVar4 = (((long)puVar13 - (long)puVar17 >> 3) + 1) / 2;
    puVar17 = puVar13 + -lVar4;
    lVar15 = (long)puVar16 - (long)puVar13;
    if (lVar15 != 0) {
      puVar14 = puVar17;
      _memmove(puVar17,puVar13,lVar15);
      puVar13 = (ulong *)param_1[1];
    }
    puVar16 = (ulong *)((long)puVar17 + lVar15);
    param_1[1] = (ulong)(puVar13 + -lVar4);
    goto LAB_104c39be4;
  }
  uVar5 = (long)puVar16 - (long)puVar17 >> 2;
  if ((long)puVar16 - (long)puVar17 == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
    FUN_104bd35f4();
    puVar16 = (ulong *)param_1[2];
    puVar14 = param_1;
    if (puVar16 != (ulong *)param_1[3]) goto LAB_104c39d60;
    puVar17 = (ulong *)*param_1;
    puVar13 = (ulong *)param_1[1];
    if (puVar17 <= puVar13 && (long)puVar13 - (long)puVar17 != 0) {
      lVar4 = (((long)puVar13 - (long)puVar17 >> 3) + 1) / 2;
      puVar17 = puVar13 + -lVar4;
      lVar15 = (long)puVar16 - (long)puVar13;
      if (lVar15 != 0) {
        puVar14 = puVar17;
        _memmove(puVar17,puVar13,lVar15);
        puVar13 = (ulong *)param_1[1];
      }
      puVar16 = (ulong *)((long)puVar17 + lVar15);
      param_1[1] = (ulong)(puVar13 + -lVar4);
      goto LAB_104c39d60;
    }
    uVar5 = (long)puVar16 - (long)puVar17 >> 2;
    if ((long)puVar16 - (long)puVar17 == 0) {
      uVar5 = 1;
    }
    if (uVar5 >> 0x3d != 0) {
      FUN_104bd35f4();
      puVar16 = (ulong *)*param_1;
      puVar14 = (ulong *)param_1[1];
      puVar17 = param_1;
      if (puVar14 != puVar16) goto LAB_104c39ee8;
      uVar5 = param_1[2];
      uVar18 = param_1[3];
      if (uVar5 < uVar18) {
        lVar15 = (((long)(uVar18 - uVar5) >> 3) + 1) / 2;
        puVar16 = puVar14 + lVar15;
        if (uVar5 - (long)puVar14 != 0) {
          puVar17 = puVar16;
          _memmove(puVar16,puVar14,uVar5 - (long)puVar14);
          uVar5 = param_1[2];
        }
        param_1[2] = uVar5 + lVar15 * 8;
        puVar14 = puVar16;
        goto LAB_104c39ee8;
      }
      uVar6 = (long)(uVar18 - (long)puVar14) >> 2;
      if (uVar18 - (long)puVar14 == 0) {
        uVar6 = 1;
      }
      if (uVar6 >> 0x3d != 0) {
        FUN_104bd35f4();
        puVar16 = (ulong *)*param_1;
        puVar14 = (ulong *)param_1[1];
        puVar17 = param_1;
        if (puVar14 != puVar16) goto LAB_104c3a070;
        uVar5 = param_1[2];
        uVar18 = param_1[3];
        if (uVar5 < uVar18) {
          lVar15 = (((long)(uVar18 - uVar5) >> 3) + 1) / 2;
          puVar16 = puVar14 + lVar15;
          if (uVar5 - (long)puVar14 != 0) {
            puVar17 = puVar16;
            _memmove(puVar16,puVar14,uVar5 - (long)puVar14);
            uVar5 = param_1[2];
          }
          param_1[2] = uVar5 + lVar15 * 8;
          puVar14 = puVar16;
          goto LAB_104c3a070;
        }
        uVar6 = (long)(uVar18 - (long)puVar14) >> 2;
        if (uVar18 - (long)puVar14 == 0) {
          uVar6 = 1;
        }
        if (uVar6 >> 0x3d != 0) {
          FUN_104bd35f4();
          plVar12 = (long *)param_1[1];
          if (plVar12 != (long *)0x0) {
            plVar1 = plVar12 + 1;
            do {
              lVar15 = *plVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar2) {
                *plVar1 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              return param_1;
            }
          }
          return param_1;
        }
        uVar18 = uVar6 + 3 >> 2;
        puVar17 = (ulong *)(uVar6 * 8);
        __Znwm();
        puVar13 = puVar17 + uVar18;
        lVar15 = uVar5 - (long)puVar14;
        puVar7 = puVar13;
        if (lVar15 != 0) {
          puVar7 = (ulong *)((long)puVar13 + lVar15);
          puVar9 = puVar13;
          puVar10 = puVar14;
          if ((0x37 < lVar15 - 8U) && (0x1f < (long)puVar17 + (uVar18 * 8 - (long)puVar14))) {
            uVar5 = (lVar15 - 8U >> 3) + 1;
            uVar11 = uVar5 & 0x3ffffffffffffffc;
            puVar9 = puVar14 + 2;
            puVar10 = puVar17 + uVar18 + 2;
            uVar18 = uVar11;
            do {
              uVar19 = puVar9[-2];
              uVar21 = puVar9[1];
              uVar20 = *puVar9;
              puVar10[-1] = puVar9[-1];
              puVar10[-2] = uVar19;
              puVar10[1] = uVar21;
              *puVar10 = uVar20;
              puVar9 = puVar9 + 4;
              puVar10 = puVar10 + 4;
              uVar18 = uVar18 - 4;
            } while (uVar18 != 0);
            puVar9 = puVar13 + uVar11;
            puVar10 = puVar14 + uVar11;
            if (uVar5 == uVar11) goto LAB_104c3a058;
          }
          do {
            puVar8 = puVar9 + 1;
            *puVar9 = *puVar10;
            puVar9 = puVar8;
            puVar10 = puVar10 + 1;
          } while (puVar8 != puVar7);
        }
LAB_104c3a058:
        *param_1 = (ulong)puVar17;
        param_1[1] = (ulong)puVar13;
        param_1[2] = (ulong)puVar7;
        param_1[3] = (ulong)(puVar17 + uVar6);
        bVar2 = puVar14 != (ulong *)0x0;
        puVar14 = puVar13;
        if (bVar2) {
          __ZdlPv(puVar16);
          puVar14 = (ulong *)param_1[1];
          puVar17 = puVar16;
        }
LAB_104c3a070:
        puVar14[-1] = *param_2;
        param_1[1] = (ulong)(puVar14 + -1);
        return puVar17;
      }
      uVar18 = uVar6 + 3 >> 2;
      puVar17 = (ulong *)(uVar6 * 8);
      __Znwm();
      puVar13 = puVar17 + uVar18;
      lVar15 = uVar5 - (long)puVar14;
      puVar7 = puVar13;
      if (lVar15 != 0) {
        puVar7 = (ulong *)((long)puVar13 + lVar15);
        puVar9 = puVar13;
        puVar10 = puVar14;
        if ((0x37 < lVar15 - 8U) && (0x1f < (long)puVar17 + (uVar18 * 8 - (long)puVar14))) {
          uVar5 = (lVar15 - 8U >> 3) + 1;
          uVar11 = uVar5 & 0x3ffffffffffffffc;
          puVar9 = puVar14 + 2;
          puVar10 = puVar17 + uVar18 + 2;
          uVar18 = uVar11;
          do {
            uVar19 = puVar9[-2];
            uVar21 = puVar9[1];
            uVar20 = *puVar9;
            puVar10[-1] = puVar9[-1];
            puVar10[-2] = uVar19;
            puVar10[1] = uVar21;
            *puVar10 = uVar20;
            puVar9 = puVar9 + 4;
            puVar10 = puVar10 + 4;
            uVar18 = uVar18 - 4;
          } while (uVar18 != 0);
          puVar9 = puVar13 + uVar11;
          puVar10 = puVar14 + uVar11;
          if (uVar5 == uVar11) goto LAB_104c39ed0;
        }
        do {
          puVar8 = puVar9 + 1;
          *puVar9 = *puVar10;
          puVar9 = puVar8;
          puVar10 = puVar10 + 1;
        } while (puVar8 != puVar7);
      }
LAB_104c39ed0:
      *param_1 = (ulong)puVar17;
      param_1[1] = (ulong)puVar13;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar17 + uVar6);
      bVar2 = puVar14 != (ulong *)0x0;
      puVar14 = puVar13;
      if (bVar2) {
        __ZdlPv(puVar16);
        puVar14 = (ulong *)param_1[1];
        puVar17 = puVar16;
      }
LAB_104c39ee8:
      puVar14[-1] = *param_2;
      param_1[1] = (ulong)(puVar14 + -1);
      return puVar17;
    }
    uVar18 = uVar5 >> 2;
    puVar14 = (ulong *)(uVar5 * 8);
    __Znwm();
    puVar7 = puVar14 + uVar18;
    lVar15 = (long)puVar16 - (long)puVar13;
    puVar16 = puVar7;
    if (lVar15 != 0) {
      puVar16 = (ulong *)((long)puVar7 + lVar15);
      puVar9 = puVar7;
      if ((0x37 < lVar15 - 8U) && (0x1f < (long)puVar14 + (uVar18 * 8 - (long)puVar13))) {
        uVar6 = (lVar15 - 8U >> 3) + 1;
        uVar11 = uVar6 & 0x3ffffffffffffffc;
        puVar9 = puVar13 + 2;
        puVar10 = puVar14 + uVar18 + 2;
        uVar18 = uVar11;
        do {
          uVar19 = puVar9[-2];
          uVar21 = puVar9[1];
          uVar20 = *puVar9;
          puVar10[-1] = puVar9[-1];
          puVar10[-2] = uVar19;
          puVar10[1] = uVar21;
          *puVar10 = uVar20;
          puVar9 = puVar9 + 4;
          puVar10 = puVar10 + 4;
          uVar18 = uVar18 - 4;
        } while (uVar18 != 0);
        puVar9 = puVar7 + uVar11;
        puVar13 = puVar13 + uVar11;
        if (uVar6 == uVar11) goto LAB_104c39d48;
      }
      do {
        puVar10 = puVar9 + 1;
        *puVar9 = *puVar13;
        puVar9 = puVar10;
        puVar13 = puVar13 + 1;
      } while (puVar10 != puVar16);
    }
LAB_104c39d48:
    *param_1 = (ulong)puVar14;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar16;
    param_1[3] = (ulong)(puVar14 + uVar5);
    if (puVar17 != (ulong *)0x0) {
      __ZdlPv(puVar17);
      puVar16 = (ulong *)param_1[2];
      puVar14 = puVar17;
    }
LAB_104c39d60:
    *puVar16 = *param_2;
    param_1[2] = (ulong)(puVar16 + 1);
    return puVar14;
  }
  uVar18 = uVar5 >> 2;
  puVar14 = (ulong *)(uVar5 * 8);
  __Znwm();
  puVar7 = puVar14 + uVar18;
  lVar15 = (long)puVar16 - (long)puVar13;
  puVar16 = puVar7;
  if (lVar15 != 0) {
    puVar16 = (ulong *)((long)puVar7 + lVar15);
    puVar9 = puVar7;
    if ((0x37 < lVar15 - 8U) && (0x1f < (long)puVar14 + (uVar18 * 8 - (long)puVar13))) {
      uVar6 = (lVar15 - 8U >> 3) + 1;
      uVar11 = uVar6 & 0x3ffffffffffffffc;
      puVar9 = puVar13 + 2;
      puVar10 = puVar14 + uVar18 + 2;
      uVar18 = uVar11;
      do {
        uVar19 = puVar9[-2];
        uVar21 = puVar9[1];
        uVar20 = *puVar9;
        puVar10[-1] = puVar9[-1];
        puVar10[-2] = uVar19;
        puVar10[1] = uVar21;
        *puVar10 = uVar20;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
        uVar18 = uVar18 - 4;
      } while (uVar18 != 0);
      puVar9 = puVar7 + uVar11;
      puVar13 = puVar13 + uVar11;
      if (uVar6 == uVar11) goto LAB_104c39bcc;
    }
    do {
      puVar10 = puVar9 + 1;
      *puVar9 = *puVar13;
      puVar9 = puVar10;
      puVar13 = puVar13 + 1;
    } while (puVar10 != puVar16);
  }
LAB_104c39bcc:
  *param_1 = (ulong)puVar14;
  param_1[1] = (ulong)puVar7;
  param_1[2] = (ulong)puVar16;
  param_1[3] = (ulong)(puVar14 + uVar5);
  if (puVar17 != (ulong *)0x0) {
    __ZdlPv(puVar17);
    puVar16 = (ulong *)param_1[2];
    puVar14 = puVar17;
  }
LAB_104c39be4:
  *puVar16 = *param_2;
  param_1[2] = (ulong)(puVar16 + 1);
  return puVar14;
}



/* Entry: 104c3a098; end: 104c3a0fb;  */

long FUN_104c3a098(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c3a0fc; end: 104c3b233;  */

/* WARNING: Removing unreachable block (ram,0x000104c3abfc) */
/* WARNING: Removing unreachable block (ram,0x000104c3a9cc) */
/* WARNING: Removing unreachable block (ram,0x000104c3ad4c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c3a0fc(undefined8 *param_1,undefined *******param_2,undefined8 *param_3,long *param_4,
                  long *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined *****pppppuVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint7 uVar7;
  code *pcVar8;
  undefined1 uVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  undefined8 *puVar15;
  undefined *******pppppppuVar16;
  long *plVar17;
  undefined *******pppppppuVar18;
  undefined8 *puVar19;
  undefined ******ppppppuVar20;
  long lVar21;
  ulong uVar22;
  undefined ******ppppppuVar23;
  undefined8 *puVar24;
  undefined ********ppppppppuVar25;
  long *plVar26;
  int iVar27;
  long *plVar28;
  undefined ********ppppppppuVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *******pppppppuVar32;
  undefined *******pppppppuVar33;
  undefined ********ppppppppuStack_2c0;
  undefined ********ppppppppuStack_2b8;
  undefined ********ppppppppuStack_2b0;
  long *plStack_2a8;
  undefined8 uStack_2a0;
  undefined *******pppppppuStack_298;
  undefined *******pppppppuStack_290;
  undefined *******pppppppuStack_288;
  undefined *******pppppppuStack_280;
  undefined8 uStack_278;
  char cStack_200;
  undefined *****pppppuStack_1f0;
  undefined ******ppppppuStack_1e8;
  undefined *******pppppppuStack_1e0;
  undefined1 uStack_1b8;
  undefined2 uStack_1b0;
  undefined1 uStack_1a8;
  undefined1 uStack_190;
  undefined1 uStack_188;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_148;
  undefined ********ppppppppuStack_138;
  undefined *******pppppppuStack_130;
  undefined *******pppppppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined4 uStack_108;
  undefined *******pppppppuStack_100;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  undefined5 uStack_f5;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined ********ppppppppuStack_e8;
  long *plStack_e0;
  undefined4 uStack_d4;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined *******pppppppuStack_b0;
  long *plStack_a8;
  undefined ********ppppppppuStack_a0;
  undefined ********ppppppppuStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined ********ppppppppuStack_80;
  undefined1 uStack_72;
  undefined1 auStack_71 [17];
  
  ppppppppuVar10 = (undefined ********)0x20;
  __Znwm();
  pppppppuStack_128 = (undefined *******)0x8000000000000020;
  pppppppuStack_130 = (undefined *******)0x18;
  ppppppppuVar10[1] = (undefined *******)0x7461686370616e73;
  *ppppppppuVar10 = (undefined *******)0x2e6970612e737761;
  ppppppppuVar10[2] = (undefined *******)0x3334343a6d6f632e;
  *(char *)(ppppppppuVar10 + 3) = '\0';
  uStack_e9 = 10;
  uStack_f8 = 0x7473;
  pppppppuStack_100 = (undefined *******)0x6575716552616e71;
  uStack_f6 = 0;
  ppppppuVar23 = param_2[6];
  uStack_72 = 0;
  ppppppppuVar11 = (undefined ********)0x140;
  ppppppppuStack_138 = ppppppppuVar10;
  __Znwm();
  ppppppppuVar11[0x25] = (undefined *******)0x0;
  ppppppppuVar11[0x24] = (undefined *******)0x0;
  ppppppppuVar11[0x27] = (undefined *******)0x0;
  ppppppppuVar11[0x26] = (undefined *******)0x0;
  ppppppppuVar11[0x21] = (undefined *******)0x0;
  ppppppppuVar11[0x20] = (undefined *******)0x0;
  ppppppppuVar11[0x23] = (undefined *******)0x0;
  ppppppppuVar11[0x22] = (undefined *******)0x0;
  ppppppppuVar11[0x1d] = (undefined *******)0x0;
  ppppppppuVar11[0x1c] = (undefined *******)0x0;
  ppppppppuVar11[0x1f] = (undefined *******)0x0;
  ppppppppuVar11[0x1e] = (undefined *******)0x0;
  ppppppppuVar11[0x19] = (undefined *******)0x0;
  ppppppppuVar11[0x18] = (undefined *******)0x0;
  ppppppppuVar11[0x1b] = (undefined *******)0x0;
  ppppppppuVar11[0x1a] = (undefined *******)0x0;
  ppppppppuVar11[0x15] = (undefined *******)0x0;
  ppppppppuVar11[0x14] = (undefined *******)0x0;
  ppppppppuVar11[0x17] = (undefined *******)0x0;
  ppppppppuVar11[0x16] = (undefined *******)0x0;
  ppppppppuVar11[0x11] = (undefined *******)0x0;
  ppppppppuVar11[0x10] = (undefined *******)0x0;
  ppppppppuVar11[0x13] = (undefined *******)0x0;
  ppppppppuVar11[0x12] = (undefined *******)0x0;
  ppppppppuVar11[0xd] = (undefined *******)0x0;
  ppppppppuVar11[0xc] = (undefined *******)0x0;
  ppppppppuVar11[0xf] = (undefined *******)0x0;
  ppppppppuVar11[0xe] = (undefined *******)0x0;
  ppppppppuVar11[0xb] = (undefined *******)0x0;
  ppppppppuVar11[10] = (undefined *******)0x0;
  ppppppppuVar11[5] = (undefined *******)0x0;
  ppppppppuVar11[4] = (undefined *******)0x0;
  ppppppppuVar11[7] = (undefined *******)0x0;
  ppppppppuVar11[6] = (undefined *******)0x0;
  ppppppppuVar11[1] = (undefined *******)0x0;
  *ppppppppuVar11 = (undefined *******)0x0;
  ppppppppuVar11[3] = (undefined *******)0x0;
  ppppppppuVar11[2] = (undefined *******)0x0;
  ppppppppuVar11[9] = (undefined *******)0x0;
  ppppppppuVar11[8] = (undefined *******)0x0;
  func_0x000100468be4();
  ppppppppuVar11[0xe] = (undefined *******)0x0;
  *(undefined2 *)(ppppppppuVar11 + 0xf) = 0;
  ppppppppuVar11[0x11] = (undefined *******)0x0;
  ppppppppuVar11[0x10] = (undefined *******)0x0;
  ppppppppuVar11[0x13] = (undefined *******)0x0;
  ppppppppuVar11[0x12] = (undefined *******)0x0;
  ppppppppuVar11[0x14] = (undefined *******)0x0;
  *(undefined4 *)(ppppppppuVar11 + 0x15) = 3;
  *(undefined1 *)(ppppppppuVar11 + 0x16) = 0;
  *(undefined1 *)(ppppppppuVar11 + 0x19) = 0;
  ppppppppuVar11[0x1a] = (undefined *******)0x0;
  *(undefined1 *)(ppppppppuVar11 + 0x1b) = 0;
  *(undefined1 *)(ppppppppuVar11 + 0x1e) = 0;
  *(undefined1 *)(ppppppppuVar11 + 0x24) = 0;
  ppppppppuVar11[0x1f] = (undefined *******)0x0;
  ppppppppuVar11[0x20] = (undefined *******)0x0;
  *(undefined1 *)(ppppppppuVar11 + 0x21) = 0;
  *(undefined2 *)(ppppppppuVar11 + 0x25) = 0x101;
  ppppppppuVar11[0x26] = (undefined *******)0x0;
  ppppppppuVar11[0x27] = (undefined *******)0x0;
  ppppppppuStack_80 = ppppppppuVar11;
  func_0x00010046a890(ppppppppuVar11,0);
  ppppppppuVar10 = ppppppppuStack_80;
  if ((undefined *********)ppppppppuStack_80 != &ppppppppuStack_138) {
    if (*(char *)((long)ppppppppuStack_80 + 0x17) < '\0') {
      pppppppuVar16 = pppppppuStack_130;
      ppppppppuVar11 = ppppppppuStack_138;
      if (-1 < (long)pppppppuStack_128) {
        pppppppuVar16 = (undefined *******)((ulong)pppppppuStack_128 >> 0x38);
        ppppppppuVar11 = (undefined ********)&ppppppppuStack_138;
      }
      func_0x0001006aabfc(ppppppppuStack_80,ppppppppuVar11,pppppppuVar16);
    }
    else if ((long)pppppppuStack_128 < 0) {
      func_0x00010014884c(ppppppppuStack_80,ppppppppuStack_138,pppppppuStack_130);
    }
    else {
      ppppppppuStack_80[2] = pppppppuStack_128;
      ppppppppuStack_80[1] = pppppppuStack_130;
      *ppppppppuStack_80 = (undefined *******)ppppppppuStack_138;
    }
  }
  ppppppppuVar11 = ppppppppuVar10 + 0x10;
  if ((undefined *********)ppppppppuVar11 != &ppppppppuStack_138) {
    if (*(char *)((long)ppppppppuVar10 + 0x97) < '\0') {
      pppppppuVar16 = pppppppuStack_130;
      ppppppppuVar25 = ppppppppuStack_138;
      if (-1 < (long)pppppppuStack_128) {
        pppppppuVar16 = (undefined *******)((ulong)pppppppuStack_128 >> 0x38);
        ppppppppuVar25 = (undefined ********)&ppppppppuStack_138;
      }
      func_0x0001006aabfc(ppppppppuVar11,ppppppppuVar25,pppppppuVar16);
    }
    else if ((long)pppppppuStack_128 < 0) {
      func_0x00010014884c(ppppppppuVar11,ppppppppuStack_138,pppppppuStack_130);
    }
    else {
      ppppppppuVar10[0x11] = pppppppuStack_130;
      *ppppppppuVar11 = (undefined *******)ppppppppuStack_138;
      ppppppppuVar10[0x12] = pppppppuStack_128;
    }
  }
  cVar4 = *(char *)((long)ppppppppuVar10 + 0x17);
  pppppppuVar18 = (undefined *******)(long)cVar4;
  pppppppuVar16 = pppppppuVar18;
  ppppppppuVar11 = ppppppppuVar10;
  if ((long)pppppppuVar18 < 0) {
    pppppppuVar16 = ppppppppuVar10[1];
    ppppppppuVar11 = (undefined ********)*ppppppppuVar10;
  }
  pppppppuVar16 = (undefined *******)((long)pppppppuVar16 + 1);
  do {
    pppppppuVar32 = pppppppuVar16;
    pppppppuVar16 = (undefined *******)((long)pppppppuVar32 + -1);
    if (pppppppuVar16 == (undefined *******)0x0) goto LAB_104c3a364;
    uVar22 = (ulong)*(byte *)((long)ppppppppuVar11 + (long)pppppppuVar32 + -2);
  } while (uVar22 < 0x40 && (1L << (uVar22 & 0x3f) & 0x100002600U) != 0);
  if (pppppppuVar16 == (undefined *******)0x0) {
LAB_104c3a364:
    if (cVar4 < '\0') {
      *(undefined1 *)*ppppppppuVar10 = 0;
      ppppppppuVar10[1] = (undefined *******)0x0;
    }
    else {
      *(undefined1 *)ppppppppuVar10 = 0;
      *(undefined1 *)((long)ppppppppuVar10 + 0x17) = 0;
    }
  }
  else {
    if (cVar4 < '\0') {
      if (ppppppppuVar10[1] <= (undefined *******)((long)pppppppuVar32 + -2)) goto LAB_104c3afe0;
      ppppppppuVar10[1] = pppppppuVar16;
      ppppppppuVar10 = (undefined ********)*ppppppppuVar10;
    }
    else {
      if (pppppppuVar18 <= (undefined *******)((long)pppppppuVar32 + -2)) {
LAB_104c3afe0:
        FUN_104c03f14();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x104c3afe8);
        (*pcVar8)();
      }
      *(char *)((long)ppppppppuVar10 + 0x17) = (char)pppppppuVar16;
    }
    *(undefined1 *)((long)ppppppppuVar10 + (long)pppppppuVar16) = 0;
  }
  plVar12 = (long *)0x30;
  __Znwm();
  plVar17 = plVar12 + 1;
  *plVar17 = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_FUN_1107eb548;
  plVar13 = plVar12 + 3;
  *plVar13 = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  bVar3 = *(byte *)((long)ppppppuVar23 + 0x1f);
  pppppuVar1 = ppppppuVar23[2];
  if (-1 < (char)bVar3) {
    pppppuVar1 = (undefined *****)(ulong)bVar3;
  }
  plStack_90 = plVar13;
  plStack_88 = plVar12;
  if (pppppuVar1 != (undefined *****)0x0) {
    if ((char)bVar3 < '\0') {
      func_0x000100033dac(&pppppuStack_1f0,ppppppuVar23[1]);
      puVar24 = (undefined8 *)plVar12[4];
      puVar19 = (undefined8 *)plVar12[5];
    }
    else {
      puVar19 = (undefined8 *)0x0;
      puVar24 = (undefined8 *)0x0;
      ppppppuStack_1e8 = (undefined ******)ppppppuVar23[2];
      pppppuStack_1f0 = ppppppuVar23[1];
      pppppppuStack_1e0 = (undefined *******)ppppppuVar23[3];
    }
    pppppppuVar16 = pppppppuStack_1e0;
    ppppppuVar20 = ppppppuStack_1e8;
    pppppuVar1 = pppppuStack_1f0;
    ppppppppuStack_2b0 = (undefined ********)0x722d70616e732d78;
    plStack_2a8 = (long *)0x6761742d6574756f;
    uVar7 = (uint7)uStack_2a0;
    uStack_2a0 = (long *)CONCAT17(0x10,uVar7 & 0xffffffffffff00);
    pppppppuStack_290 = (undefined *******)ppppppuStack_1e8;
    pppppppuStack_298 = (undefined *******)pppppuStack_1f0;
    pppppppuStack_288 = pppppppuStack_1e0;
    pppppuStack_1f0 = (undefined *****)0x0;
    ppppppuStack_1e8 = (undefined ******)0x0;
    pppppppuStack_1e0 = (undefined *******)0x0;
    if (puVar24 < puVar19) {
      puVar24[2] = uStack_2a0;
      puVar24[1] = 0x6761742d6574756f;
      *puVar24 = 0x722d70616e732d78;
      if ((long)pppppppuVar16 < 0) {
        func_0x000100033dac(puVar24 + 3,pppppuVar1,ppppppuVar20);
      }
      else {
        puVar24[5] = pppppppuVar16;
        puVar24[4] = ppppppuVar20;
        puVar24[3] = pppppuVar1;
      }
      plVar12[4] = (long)(puVar24 + 6);
      plVar12[4] = (long)(puVar24 + 6);
    }
    else {
      FUN_104c38568(plVar13,&ppppppppuStack_2b0);
      plVar12[4] = (long)plVar13;
    }
    if ((long)pppppppuStack_288 < 0) {
      __ZdlPv(pppppppuStack_298);
    }
    if ((long)uStack_2a0 < 0) {
      __ZdlPv(ppppppppuStack_2b0);
    }
  }
  plVar13 = (long *)0x30;
  __Znwm();
  plVar13[2] = 0;
  plVar13[3] = (long)&PTR_FUN_1107ebe68;
  *plVar13 = (long)&PTR_FUN_1107eb598;
  plVar13[1] = 0;
  plVar13[4] = (long)plStack_90;
  plVar13[5] = (long)plVar12;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = *plVar17 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar17 = (long *)plStack_90[1];
  for (plVar12 = (long *)*plStack_90; plVar12 != plVar17; plVar12 = plVar12 + 6) {
    if ((long)*(char *)((long)plVar12 + 0x17) < 0) {
      plVar26 = (long *)*plVar12;
      plVar28 = (long *)((long)plVar26 + plVar12[1]);
    }
    else {
      plVar28 = (long *)((long)plVar12 + (long)*(char *)((long)plVar12 + 0x17));
      plVar26 = plVar12;
    }
    for (; plVar26 != plVar28; plVar26 = (long *)((long)plVar26 + 1)) {
      uVar9 = (undefined1)*plVar26;
      ___tolower();
      *(undefined1 *)plVar26 = uVar9;
    }
  }
  plVar12 = (long *)0x40;
  ppppppppuStack_2b0 = (undefined ********)(plVar13 + 3);
  plStack_2a8 = plVar13;
  __Znwm();
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_DAT_1107eb5e8;
  plVar12[1] = 0;
  ppppppppuStack_a0 = (undefined ********)(plVar12 + 3);
  *ppppppppuStack_a0 = (undefined *******)&PTR_FUN_1107ebe28;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000100033dac(plVar12 + 4,*param_5,param_5[1]);
  }
  else {
    lVar21 = *param_5;
    plVar12[5] = param_5[1];
    plVar12[4] = lVar21;
    plVar12[6] = param_5[2];
  }
  *(undefined4 *)(plVar12 + 7) = *(undefined4 *)((long)ppppppuVar23 + 4);
  pplVar14 = &plStack_c0;
  ppppppppuStack_98 = (undefined ********)plVar12;
  FUN_104c38890(&pppppppuStack_b0,pplVar14,&ppppppppuStack_a0);
  func_0x00010044fc98();
  plVar12 = (long *)0xb8;
  __Znwm();
  plVar12[2] = 0;
  plVar13 = plVar12 + 3;
  *plVar12 = (long)&PTR_FUN_1107ea880;
  plVar12[1] = 0;
  func_0x00010028bc78(plVar13,&pppppppuStack_100,0,pplVar14,0);
  uStack_d4 = 3;
  plStack_c0 = plVar13;
  plStack_b8 = plVar12;
  FUN_104c389ec(&lStack_d0,auStack_71,&plStack_c0,&pppppppuStack_b0,&ppppppppuStack_2b0,
                &ppppppppuStack_80,&uStack_d4,&uStack_72);
  plVar12 = plStack_c8;
  plVar13 = (long *)0x30;
  __Znwm();
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&PTR_FUN_1107eb728;
  ppppppppuStack_e8 = (undefined ********)(plVar13 + 3);
  if (plVar12 == (long *)0x0) {
    plVar13[3] = (long)&PTR_DAT_110c75ff8;
    plVar13[4] = lStack_d0;
    plVar13[5] = 0;
  }
  else {
    plVar17 = plVar12 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar13[3] = (long)&PTR_DAT_110c75ff8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar13[4] = lStack_d0;
    plVar13[5] = (long)plVar12;
    do {
      lVar21 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plStack_e0 = plVar13;
  if (plStack_c8 != (long *)0x0) {
    plVar12 = plStack_c8 + 1;
    do {
      lVar21 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  plVar12 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar13 = plStack_b8 + 1;
    do {
      lVar21 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar12 = plStack_a8 + 1;
    do {
      lVar21 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  ppppppppuVar10 = ppppppppuStack_98;
  if (ppppppppuStack_98 != (undefined ********)0x0) {
    plVar12 = (long *)(ppppppppuStack_98 + 1);
    do {
      lVar21 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)((long)*ppppppppuStack_98 + 0x10))(ppppppppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar10);
    }
  }
  plVar12 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    plVar13 = plStack_2a8 + 1;
    do {
      lVar21 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar13 = plStack_88 + 1;
    do {
      lVar21 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  ppppppppuVar10 = ppppppppuStack_80;
  ppppppppuStack_80 = (undefined ********)0x0;
  if (ppppppppuVar10 != (undefined ********)0x0) {
    func_0x00010048b724();
    __ZdlPv();
  }
  if ((long)pppppppuStack_128 < 0) {
    __ZdlPv(ppppppppuStack_138);
  }
  ppppppppuStack_138 = (undefined ********)&PTR_SUB_110c77658;
  pppppppuStack_130 = (undefined *******)0x0;
  pppppppuStack_128 = (undefined *******)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_110 = &DAT_11383d918;
  uStack_108 = 0;
  puVar24 = (undefined8 *)*param_4;
  puVar19 = (undefined8 *)param_4[1];
  if (puVar24 == puVar19) {
    pppppppuVar16 = (undefined *******)0x0;
  }
  else {
    iVar27 = 0;
    do {
      pppppppuVar16 = (undefined *******)&pppppppuStack_128;
      func_0x000100627dec(pppppppuVar16,FUN_104c3b3ec);
      ppppppuVar23 = pppppppuVar16[1];
      if (((ulong)ppppppuVar23 & 1) == 0) {
        ppppppuVar20 = pppppppuVar16[2];
        if (((ulong)ppppppuVar20 & 3) != 0) goto LAB_104c3a908;
LAB_104c3a958:
        if (ppppppuVar23 == (undefined ******)0x0) {
          ppppppuVar23 = (undefined ******)0x18;
          __Znwm();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
          uVar22 = 2;
        }
        else {
          func_0x00010b4d80a4();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
          uVar22 = 3;
        }
        pppppppuVar16[2] = (undefined ******)(uVar22 | (ulong)ppppppuVar23);
      }
      else {
        ppppppuVar23 = *(undefined *******)((ulong)ppppppuVar23 & 0xfffffffffffffffe);
        ppppppuVar20 = pppppppuVar16[2];
        if (((ulong)ppppppuVar20 & 3) == 0) goto LAB_104c3a958;
LAB_104c3a908:
        puVar15 = (undefined8 *)((ulong)ppppppuVar20 & 0xfffffffffffffffc);
        if (puVar24 != puVar15) {
          bVar3 = *(byte *)((long)puVar24 + 0x17);
          if (*(char *)((long)puVar15 + 0x17) < '\0') {
            uVar22 = puVar24[1];
            puVar6 = (undefined8 *)*puVar24;
            if (-1 < (char)bVar3) {
              uVar22 = (ulong)bVar3;
              puVar6 = puVar24;
            }
            func_0x0001006aabfc(puVar15,puVar6,uVar22);
          }
          else if ((char)bVar3 < '\0') {
            func_0x00010014884c(puVar15,*puVar24,puVar24[1]);
          }
          else {
            uVar31 = puVar24[1];
            uVar30 = *puVar24;
            puVar15[2] = puVar24[2];
            puVar15[1] = uVar31;
            *puVar15 = uVar30;
          }
        }
      }
      *(int *)(pppppppuVar16 + 3) = iVar27;
      iVar27 = iVar27 + 1;
      puVar24 = puVar24 + 3;
    } while (puVar24 != puVar19);
    pppppppuVar16 = pppppppuStack_130;
    if (((ulong)pppppppuStack_130 & 1) != 0) {
      pppppppuVar16 = *(undefined ********)((ulong)pppppppuStack_130 & 0xfffffffffffffffe);
    }
  }
  if (((ulong)puStack_110 & 3) == 0) {
    if (pppppppuVar16 == (undefined *******)0x0) {
      pppppppuVar16 = (undefined *******)0x18;
      __Znwm();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar22 = 2;
    }
    else {
      func_0x00010b4d80a4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar22 = 3;
    }
    puStack_110 = (undefined *)(uVar22 | (ulong)pppppppuVar16);
  }
  else {
    puVar24 = (undefined8 *)((ulong)puStack_110 & 0xfffffffffffffffc);
    if (param_3 != puVar24) {
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if (*(char *)((long)puVar24 + 0x17) < '\0') {
        uVar22 = param_3[1];
        puVar19 = (undefined8 *)*param_3;
        if (-1 < (char)bVar3) {
          uVar22 = (ulong)bVar3;
          puVar19 = param_3;
        }
        func_0x0001006aabfc(puVar24,puVar19,uVar22);
      }
      else if ((char)bVar3 < '\0') {
        func_0x00010014884c(puVar24,*param_3,param_3[1]);
      }
      else {
        uVar31 = param_3[1];
        uVar30 = *param_3;
        puVar24[2] = param_3[2];
        puVar24[1] = uVar31;
        *puVar24 = uVar30;
      }
    }
  }
  __ZNSt3__17promiseIvEC1Ev(&pppppppuStack_b0);
  __ZNSt3__17promiseIvE10get_futureEv(&plStack_c0);
  ppppppppuVar11 = (undefined ********)0x98;
  __Znwm();
  pppppppuVar16 = pppppppuStack_b0;
  ppppppppuVar29 = ppppppppuVar11 + 1;
  *ppppppppuVar29 = (undefined *******)0x0;
  ppppppppuVar11[2] = (undefined *******)0x0;
  *ppppppppuVar11 = (undefined *******)&PTR_DAT_1107eb778;
  ppppppppuVar25 = ppppppppuVar11 + 3;
  *ppppppppuVar25 = (undefined *******)&PTR_FUN_1107ebf28;
  pppppppuVar18 = (undefined *******)*param_7;
  pppppppuVar33 = (undefined *******)param_7[3];
  pppppppuVar32 = (undefined *******)param_7[2];
  ppppppppuVar11[5] = (undefined *******)param_7[1];
  ppppppppuVar11[4] = pppppppuVar18;
  ppppppppuVar11[7] = pppppppuVar33;
  ppppppppuVar11[6] = pppppppuVar32;
  pppppppuStack_b0 = (undefined *******)0x0;
  ppppppppuStack_2b0 = (undefined ********)0x0;
  ppppppppuVar11[8] = pppppppuVar16;
  ppppppppuVar11[9] = (undefined *******)0x0;
  ppppppppuVar11[10] = (undefined *******)0x0;
  ppppppppuVar11[0xb] = (undefined *******)0x0;
  *(undefined1 *)(ppppppppuVar11 + 0xc) = 0;
  *(undefined8 *)((long)ppppppppuVar11 + 100) = 0;
  *(undefined8 *)((long)ppppppppuVar11 + 0x74) = 0;
  *(undefined8 *)((long)ppppppppuVar11 + 0x6c) = 0;
  *(undefined8 *)((long)ppppppppuVar11 + 0x7c) = 0xffffffff00000000;
  *(undefined4 *)(ppppppppuVar11 + 0x11) = param_6;
  ppppppppuVar11[0x12] = param_2;
  __ZNSt3__17promiseIvED1Ev(&ppppppppuStack_2b0);
  ppppppuStack_1e8 = (undefined ******)0x1;
  pppppuStack_1f0 = (undefined *****)0x1388;
  pppppppuStack_1e0 = (undefined *******)((ulong)pppppppuStack_1e0 & 0xffffffffffffff00);
  uStack_1b8 = 0;
  uStack_1b0 = 0x101;
  uStack_1a8 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  ppppppppuStack_a0 = ppppppppuVar25;
  ppppppppuStack_98 = ppppppppuVar11;
  FUN_104c4bb14();
  uStack_2a0 = (long *)0x0;
  pppppppuStack_298 = (undefined *******)0x0;
  ppppppppuStack_2b0 = (undefined ********)&PTR_FUN_1107eb688;
  plStack_2a8 = (long *)0x0;
  pppppppuStack_290 = (undefined *******)CONCAT44(pppppppuStack_290._4_4_,0xe);
  ppppppppuVar10 = (undefined ********)&ppppppppuStack_2b0;
  FUN_104c37260(ppppppppuVar10,7);
  plVar12 = plRam0000000113817ca0;
  (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,ppppppppuVar10,1);
  ppppppppuStack_2b0 = (undefined ********)&PTR_DAT_1107eb6f0;
  if (plStack_2a8 != (long *)0x0) {
    for (; plStack_2a8 != uStack_2a0; uStack_2a0 = uStack_2a0 + -3) {
    }
    uStack_2a0 = plStack_2a8;
    plVar12 = plStack_2a8;
    __ZdlPv(plStack_2a8);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppppppppuVar10 = ppppppppuStack_e8;
  func_0x000100627360(&ppppppppuStack_2b0,&pppppuStack_1f0);
  cStack_200 = '\x01';
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar29,0x10);
    if (bVar5) {
      *ppppppppuVar29 = (undefined *******)((long)*ppppppppuVar29 + 1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  ppppppppuStack_2c0 = ppppppppuVar25;
  ppppppppuStack_2b8 = ppppppppuVar11;
  func_0x00010ade8834(ppppppppuVar10,&ppppppppuStack_138,&ppppppppuStack_2b0,&ppppppppuStack_2c0);
  ppppppppuVar11 = ppppppppuStack_2b8;
  if (ppppppppuStack_2b8 != (undefined ********)0x0) {
    ppppppppuVar25 = ppppppppuStack_2b8 + 1;
    do {
      pppppppuVar16 = *ppppppppuVar25;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar25,0x10);
      if (bVar5) {
        *ppppppppuVar25 = (undefined *******)((long)pppppppuVar16 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppppuVar16 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuStack_2b8)[2])(ppppppppuStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppppuVar10 = ppppppppuVar11;
    }
  }
  if (cStack_200 == '\x01') {
    ppppppppuVar10 = (undefined ********)&ppppppppuStack_2b0;
    func_0x000100627b64();
  }
  plVar13 = plStack_c0;
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_1 = 0;
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    ppppppppuStack_2b0 = ppppppppuVar10 + 625000000;
    FUN_104c38d80(plVar13,&ppppppppuStack_2b0);
    plVar17 = plVar13;
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_104c4bb14();
    uStack_2a0 = (long *)0x0;
    pppppppuStack_298 = (undefined *******)0x0;
    ppppppppuStack_2b0 = (undefined ********)&PTR_FUN_1107eb688;
    plStack_2a8 = (long *)0x0;
    pppppppuStack_290 = (undefined *******)CONCAT44(pppppppuStack_290._4_4_,0xf);
    (**(code **)*plRam0000000113817ca0)
              (plRam0000000113817ca0,&ppppppppuStack_2b0,(long)plVar17 - (long)plVar12);
    ppppppppuStack_2b0 = (undefined ********)&PTR_DAT_1107eb6f0;
    if (plStack_2a8 != (long *)0x0) {
      for (; plStack_2a8 != uStack_2a0; uStack_2a0 = (long *)((long)uStack_2a0 + -0x18)) {
      }
      uStack_2a0 = plStack_2a8;
      __ZdlPv(plStack_2a8);
    }
    ppppppppuVar10 = ppppppppuStack_a0;
    if ((int)plVar13 == 0) {
      *(undefined4 *)(ppppppppuStack_a0 + 0xd) = *(undefined4 *)(ppppppppuStack_a0 + 0xe);
      plStack_2a8 = (long *)0x0;
      uStack_2a0 = (long *)0x0;
      ppppppppuStack_2b0 = (undefined ********)0x0;
      FUN_104c3b564(&ppppppppuStack_2b0,ppppppppuStack_a0[6],ppppppppuStack_a0[7],
                    ((long)ppppppppuStack_a0[7] - (long)ppppppppuStack_a0[6] >> 3) *
                    -0x3333333333333333);
      pppppppuStack_298 = ppppppppuVar10[9];
      if (*(char *)((long)ppppppppuVar10 + 0x67) < '\0') {
        func_0x000100033dac(&pppppppuStack_290,ppppppppuVar10[10],ppppppppuVar10[0xb]);
      }
      else {
        pppppppuStack_288 = ppppppppuVar10[0xb];
        pppppppuStack_290 = ppppppppuVar10[10];
        pppppppuStack_280 = ppppppppuVar10[0xc];
      }
      uVar2 = *(undefined4 *)(ppppppppuVar10 + 0xd);
      uStack_278 = CONCAT44(uStack_278._4_4_,uVar2);
      puVar24 = (undefined8 *)0x40;
      __Znwm();
      puVar24[1] = plStack_2a8;
      *puVar24 = ppppppppuStack_2b0;
      puVar24[2] = uStack_2a0;
      puVar24[3] = pppppppuStack_298;
      puVar24[5] = pppppppuStack_288;
      puVar24[4] = pppppppuStack_290;
      puVar24[6] = pppppppuStack_280;
      *(undefined4 *)(puVar24 + 7) = uVar2;
    }
    else {
      pppppppuStack_288 = (undefined *******)0x0;
      pppppppuStack_290 = (undefined *******)0x0;
      pppppppuStack_280 = (undefined *******)0x0;
      plStack_2a8 = (long *)0x0;
      ppppppppuStack_2b0 = (undefined ********)0x0;
      uStack_2a0 = (long *)0x0;
      uStack_278 = 0xffffffff;
      pppppppuStack_298 = (undefined *******)0x1;
      plStack_90 = (long *)((ulong)plVar13 & 0xffffffff);
      plStack_88 = (long *)0x0;
      func_0x0001003a9204(&pppppppuStack_100,"future status is {}",0x13,1,&plStack_90);
      pppppppuStack_288 = (undefined *******)CONCAT53(uStack_f5,CONCAT12(uStack_f6,uStack_f8));
      pppppppuStack_290 = pppppppuStack_100;
      pppppppuStack_280 = (undefined *******)CONCAT17(uStack_e9,uStack_f0);
      puVar24 = (undefined8 *)0x40;
      __Znwm();
      pppppppuVar16 = pppppppuStack_290;
      *puVar24 = 0;
      puVar24[1] = 0;
      puVar24[2] = 0;
      puVar24[3] = pppppppuStack_298;
      if ((long)pppppppuStack_280 < 0) {
        func_0x000100033dac(puVar24 + 4,pppppppuStack_290,pppppppuStack_288);
        *(undefined4 *)(puVar24 + 7) = 0xffffffff;
        *param_1 = puVar24;
        __ZdlPv(pppppppuVar16);
        goto LAB_104c3af30;
      }
      puVar24[5] = pppppppuStack_288;
      puVar24[4] = pppppppuStack_290;
      puVar24[6] = pppppppuStack_280;
      *(undefined4 *)(puVar24 + 7) = 0xffffffff;
    }
    *param_1 = puVar24;
  }
LAB_104c3af30:
  func_0x000100627b64(&pppppuStack_1f0);
  ppppppppuVar10 = ppppppppuStack_98;
  if (ppppppppuStack_98 != (undefined ********)0x0) {
    ppppppppuVar11 = ppppppppuStack_98 + 1;
    do {
      pppppppuVar16 = *ppppppppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
      if (bVar5) {
        *ppppppppuVar11 = (undefined *******)((long)pppppppuVar16 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppppuVar16 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuStack_98)[2])(ppppppppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar10);
    }
  }
  __ZNSt3__16futureIvED1Ev(&plStack_c0);
  __ZNSt3__17promiseIvED1Ev(&pppppppuStack_b0);
  func_0x00010ae00b38(&ppppppppuStack_138);
  plVar12 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar13 = plStack_e0 + 1;
    do {
      lVar21 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  return;
}



/* Entry: 104c3b234; end: 104c3b297;  */

long FUN_104c3b234(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c3b298; end: 104c3b317;  */

/* WARNING: Removing unreachable block (ram,0x000104c3b2ec) */

long * FUN_104c3b298(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104c3b318; end: 104c3b37b;  */

long FUN_104c3b318(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c3b37c; end: 104c3b3eb;  */

/* WARNING: Removing unreachable block (ram,0x000104c3b3c0) */

long * FUN_104c3b37c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104c3b3ec; end: 104c3b497;  */

void FUN_104c3b3ec(long *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_28;
  
  if (param_1 == (long *)0x0) {
    plVar2 = (long *)0x20;
    __Znwm();
    plStack_28 = plVar2;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar1[1] == (undefined *)*param_1) {
      plVar3 = (long *)ppuVar1[2];
      plVar2 = plVar3;
      func_0x00010b4d755c(plVar3,0x20,&plStack_28);
      if ((int)plVar2 == 0) {
        func_0x00010b4d7498(plVar3,0x20);
        plStack_28 = plVar3;
      }
    }
    else {
      plVar2 = param_1;
      func_0x00010b4d7124(param_1,0x20);
      plStack_28 = plVar2;
    }
  }
  *plStack_28 = (long)&PTR_DAT_110c775b8;
  plStack_28[1] = (long)param_1;
  plStack_28[2] = (long)&DAT_11383d918;
  plStack_28[3] = 0;
  return;
}



/* Entry: 104c3b498; end: 104c3b4a7;  */

void FUN_104c3b498(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb728;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c3b4a8; end: 104c3b4c7;  */

void FUN_104c3b4a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb728;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c3b4c8; end: 104c3b51f;  */

void FUN_104c3b4c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 104c3b520; end: 104c3b533;  */

void FUN_104c3b520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c3b534; end: 104c3b553;  */

void FUN_104c3b534(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107eb778;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


