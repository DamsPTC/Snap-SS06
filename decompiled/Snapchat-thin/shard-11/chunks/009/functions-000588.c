/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b74098; end: 108b743f7;  */

undefined8 FUN_108b74098(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372d600 & 1) == 0) {
    iVar1 = 0x1372d600;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_190,&UNK_10f5016e9);
      pcVar2 = "durationMs";
      func_0x000107c31088(auStack_198,"durationMs");
      func_0x000104bef760();
      func_0x000107c27e98(auStack_188,auStack_198,pcVar2);
      puVar3 = &UNK_10f50170b;
      func_0x000107c31088(auStack_1a0,&UNK_10f50170b);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_170,auStack_1a0,puVar3);
      puVar3 = &UNK_10f50171b;
      func_0x000107c31088(auStack_1a8,&UNK_10f50171b);
      func_0x000104bef494();
      func_0x000107c27e98(auStack_158,auStack_1a8,puVar3);
      puVar3 = &UNK_10f501722;
      func_0x000107c31088(auStack_1b0,&UNK_10f501722);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_140,auStack_1b0,puVar3);
      puVar3 = &UNK_10f501736;
      func_0x000107c31088(auStack_1b8,&UNK_10f501736);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_128,auStack_1b8,puVar3);
      puVar3 = &UNK_10f501745;
      func_0x000107c31088(auStack_1c0,&UNK_10f501745);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_110,auStack_1c0,puVar3);
      puVar3 = &UNK_10f501752;
      func_0x000107c31088(auStack_1c8,&UNK_10f501752);
      FUN_108b743f8();
      func_0x000107c27e98(auStack_f8,auStack_1c8,puVar3);
      puVar3 = &UNK_10f50176b;
      func_0x000107c31088(auStack_1d0,&UNK_10f50176b);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_e0,auStack_1d0,puVar3);
      puVar3 = &UNK_10f501784;
      func_0x000107c31088(auStack_1d8,&UNK_10f501784);
      FUN_108b743f8();
      func_0x000107c27e98(auStack_c8,auStack_1d8,puVar3);
      puVar3 = &UNK_10f501796;
      func_0x000107c31088(auStack_1e0,&UNK_10f501796);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_b0,auStack_1e0,puVar3);
      puVar3 = &UNK_10f5017a7;
      func_0x000107c31088(auStack_1e8,&UNK_10f5017a7);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_98,auStack_1e8,puVar3);
      puVar3 = &UNK_10f5017b3;
      func_0x000107c31088(auStack_1f0,&UNK_10f5017b3);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_80,auStack_1f0,puVar3);
      puVar3 = &UNK_10f5017c3;
      func_0x000107c31088(auStack_1f8,&UNK_10f5017c3);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_68,auStack_1f8,puVar3);
      puVar3 = &UNK_10f5017d4;
      func_0x000107c31088(auStack_200,&UNK_10f5017d4);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_50,auStack_200,puVar3);
      uVar4 = 0;
      func_0x000104bdbd44(0x113828298,auStack_190,0,auStack_188,0xe);
      lVar5 = 0x138;
      do {
        func_0x000107c27924(auStack_188 + lVar5);
        param_2 = (int)uVar4;
        lVar5 = lVar5 + -0x18;
        in_ZR = lVar5 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_200);
      func_0x000107c278f4(auStack_1f8);
      func_0x000107c278f4(auStack_1f0);
      func_0x000107c278f4(auStack_1e8);
      func_0x000107c278f4(auStack_1e0);
      func_0x000107c278f4(auStack_1d8);
      func_0x000107c278f4(auStack_1d0);
      func_0x000107c278f4(auStack_1c8);
      func_0x000107c278f4(auStack_1c0);
      func_0x000107c278f4(auStack_1b8);
      func_0x000107c278f4(auStack_1b0);
      func_0x000107c278f4(auStack_1a8);
      func_0x000107c278f4(auStack_1a0);
      func_0x000107c278f4(auStack_198);
      func_0x000107c278f4(auStack_190);
      ___cxa_guard_release(0x11372d600);
    }
  }
  FUN_108b74450(uStack_38);
  if ((bool)in_ZR) {
    return 0x113828298;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328aba8 & 1) == 0) {
    iVar1 = 0x1328aba8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c30f9c(0x11328ab98);
      ___cxa_guard_release(0x11328aba8);
    }
  }
  return 0x11328ab98;
}



/* Entry: 108b743f8; end: 108b7444f;  */

undefined8 FUN_108b743f8(void)

{
  int iVar1;
  
  if ((bRam000000011328aba8 & 1) == 0) {
    iVar1 = 0x1328aba8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c30f9c(0x11328ab98);
      ___cxa_guard_release(0x11328aba8);
    }
  }
  return 0x11328ab98;
}



/* Entry: 108b74450; end: 108b74463;  */

void FUN_108b74450(void)

{
  return;
}



/* Entry: 108b74464; end: 108b745cf;  */

/* WARNING: Possible PIC construction at 0x000108b7457c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b745f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b74580) */
/* WARNING: Removing unreachable block (ram,0x000108b74598) */
/* WARNING: Removing unreachable block (ram,0x000108b745a4) */
/* WARNING: Removing unreachable block (ram,0x000108b745b8) */
/* WARNING: Removing unreachable block (ram,0x000108b745c8) */
/* WARNING: Removing unreachable block (ram,0x000108b7461c) */
/* WARNING: Removing unreachable block (ram,0x000108b7462c) */
/* WARNING: Removing unreachable block (ram,0x000108b7476c) */
/* WARNING: Removing unreachable block (ram,0x000108b74780) */
/* WARNING: Removing unreachable block (ram,0x000108b745f8) */
/* WARNING: Removing unreachable block (ram,0x000108b74584) */
/* WARNING: Removing unreachable block (ram,0x000108b745fc) */
/* WARNING: Removing unreachable block (ram,0x000108b747d0) */
/* WARNING: Removing unreachable block (ram,0x000108b747d8) */
/* WARNING: Removing unreachable block (ram,0x000108b747dc) */
/* WARNING: Removing unreachable block (ram,0x000108b74600) */

void FUN_108b74464(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined4 auStack_a8 [2];
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  
  func_0x000108b747f8();
  FUN_108b745d0();
  func_0x000107c30f7c(auStack_b8,0x1138282b0);
  auStack_a8[0] = *param_2;
  uStack_a0 = 4;
  if (*(char *)(param_2 + 2) == '\x01') {
    uStack_98 = CONCAT44(uStack_98._4_4_,param_2[1]);
    uStack_90 = 4;
  }
  else {
    uStack_98 = 0;
    uStack_90 = 1;
  }
  uStack_8f = 0;
  if (*(char *)(param_2 + 4) == '\x01') {
    uStack_88 = CONCAT44(uStack_88._4_4_,param_2[3]);
    uStack_80 = 4;
  }
  else {
    uStack_88 = 0;
    uStack_80 = 1;
  }
  uStack_58 = *(undefined8 *)(param_2 + 8);
  uStack_48 = *(undefined8 *)(param_2 + 10);
  uStack_7f = 0;
  uStack_70 = 4;
  uStack_78 = param_2[5];
  uStack_68 = param_2[6];
  uStack_60 = 4;
  uStack_50 = 6;
  uStack_40 = 6;
  func_0x000104bdb9bc(auStack_b0,auStack_b8,auStack_a8,7);
  lVar1 = 0x60;
  do {
    func_0x00010b9a8d98((long)auStack_a8 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  func_0x000107c27928(auStack_b8);
  func_0x00010b9a8f60(param_1,auStack_b0);
  func_0x000104bdbf78(auStack_b0);
  return;
}



/* Entry: 108b745d0; end: 108b747df;  */

/* WARNING: Possible PIC construction at 0x000108b745f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b745fc) */
/* WARNING: Removing unreachable block (ram,0x000108b747d0) */
/* WARNING: Removing unreachable block (ram,0x000108b747d8) */
/* WARNING: Removing unreachable block (ram,0x000108b747dc) */
/* WARNING: Removing unreachable block (ram,0x000108b74600) */

void FUN_108b745d0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x000108b747f8();
  if ((bRam00000001138282b8 & 1) == 0) {
    iVar1 = 0x138282b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_e8,&UNK_10f5017e9);
      puVar2 = &UNK_10f501809;
      func_0x000107c31088(auStack_f0,&UNK_10f501809);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_e0,auStack_f0,puVar2);
      puVar2 = &UNK_10f501812;
      func_0x000107c31088(auStack_f8,&UNK_10f501812);
      func_0x000104bef494();
      func_0x000107c27e98(auStack_c8,auStack_f8,puVar2);
      puVar2 = &UNK_10f501819;
      func_0x000107c31088(auStack_100,&UNK_10f501819);
      func_0x000104bef494();
      func_0x000107c27e98(auStack_b0,auStack_100,puVar2);
      puVar2 = &UNK_10f50181f;
      func_0x000107c31088(auStack_108,&UNK_10f50181f);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_98,auStack_108,puVar2);
      puVar2 = &UNK_10f501832;
      func_0x000107c31088(auStack_110,&UNK_10f501832);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_80,auStack_110,puVar2);
      puVar2 = &UNK_10f50183e;
      func_0x000107c31088(auStack_118,&UNK_10f50183e);
      FUN_108b743f8();
      func_0x000107c27e98(auStack_68,auStack_118,puVar2);
      puVar2 = &UNK_10f501858;
      func_0x000107c31088(auStack_120,&UNK_10f501858);
      FUN_108b743f8();
      func_0x000107c27e98(auStack_50,auStack_120,puVar2);
      func_0x000104bdbd44(0x1138282a8,auStack_e8,0,auStack_e0,7);
      lVar3 = 0x90;
      do {
        func_0x000107c27924(auStack_e0 + lVar3);
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x18);
      func_0x000107c278f4(auStack_120);
      func_0x000107c278f4(auStack_118);
      func_0x000107c278f4(auStack_110);
      func_0x000107c278f4(auStack_108);
      func_0x000107c278f4(auStack_100);
      func_0x000107c278f4(auStack_f8);
      func_0x000107c278f4(auStack_f0);
      func_0x000107c278f4(auStack_e8);
      ___cxa_guard_release(0x1138282b8);
    }
  }
  return;
}



/* Entry: 108b747e0; end: 108b7480b;  */

void FUN_108b747e0(void)

{
  return;
}



/* Entry: 108b7480c; end: 108b748b3;  */

void FUN_108b7480c(int *param_1)

{
  int iVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  iVar1 = (int)lStack_28 + 0x18;
  func_0x00010b9a9518();
  func_0x000104bdbf60(&uStack_40,lStack_28 + 0x28);
  func_0x000104bdbf60(&uStack_58,lStack_28 + 0x38);
  *param_1 = iVar1;
  *(undefined8 *)(param_1 + 4) = uStack_38;
  *(undefined8 *)(param_1 + 2) = uStack_40;
  *(undefined8 *)(param_1 + 6) = uStack_30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_1 + 10) = uStack_50;
  *(undefined8 *)(param_1 + 8) = uStack_58;
  *(undefined8 *)(param_1 + 0xc) = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 108b748b4; end: 108b74a13;  */

undefined8 FUN_108b748b4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138282d0 & 1) == 0) {
    param_1 = 0x1138282d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_78,&UNK_10f501869);
      puVar1 = &UNK_10f501887;
      func_0x000107c31088(auStack_80,&UNK_10f501887);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_70,auStack_80,puVar1);
      puVar1 = &UNK_10f501894;
      func_0x000107c31088(auStack_88,&UNK_10f501894);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_58,auStack_88,puVar1);
      puVar1 = &UNK_10f50189e;
      func_0x000107c31088(auStack_90,&UNK_10f50189e);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_40,auStack_90,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138282c0,auStack_78,0,auStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x000107c27924(auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_90);
      func_0x000107c278f4(auStack_88);
      func_0x000107c278f4(auStack_80);
      func_0x000107c278f4(auStack_78);
      param_1 = 0x1138282d0;
      ___cxa_guard_release(0x1138282d0);
    }
  }
  FUN_108b74a14(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138282c0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b74a14; end: 108b74a27;  */

void FUN_108b74a14(void)

{
  return;
}



/* Entry: 108b74a28; end: 108b74b47;  */

undefined1 * FUN_108b74a28(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b74b48();
  func_0x000107c30f7c(auStack_68,0x1138282e0);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  if (*(char *)(param_2 + 2) == '\x01') {
    uStack_48 = CONCAT44(uStack_48._4_4_,param_2[1]);
    uStack_40 = 4;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 1;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_108b74c78(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_108b74b48;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138282e8 & 1) == 0) {
    puVar3 = (undefined1 *)0x1138282e8;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107c31088(auStack_d0,&UNK_10f5018a5);
      puVar4 = &UNK_10f5018be;
      func_0x000107c31088(auStack_d8,&UNK_10f5018be);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_c8,auStack_d8,puVar4);
      puVar4 = &UNK_10f5018cf;
      func_0x000107c31088(auStack_e0,&UNK_10f5018cf);
      func_0x000104bef494();
      func_0x000107c27e98(auStack_b0,auStack_e0,puVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138282d8,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x000107c27924(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      puVar3 = (undefined1 *)0x1138282e8;
      ___cxa_guard_release(0x1138282e8);
    }
  }
  FUN_108b74c78(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138282d8;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 108b74b48; end: 108b74c77;  */

undefined8 FUN_108b74b48(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138282e8 & 1) == 0) {
    param_1 = 0x1138282e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f5018a5);
      puVar1 = &UNK_10f5018be;
      func_0x000107c31088(auStack_68,&UNK_10f5018be);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_58,auStack_68,puVar1);
      puVar1 = &UNK_10f5018cf;
      func_0x000107c31088(auStack_70,&UNK_10f5018cf);
      func_0x000104bef494();
      func_0x000107c27e98(auStack_40,auStack_70,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138282d8,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      param_1 = 0x1138282e8;
      ___cxa_guard_release(0x1138282e8);
    }
  }
  FUN_108b74c78(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138282d8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b74c78; end: 108b74c8b;  */

void FUN_108b74c78(void)

{
  return;
}



/* Entry: 108b74c8c; end: 108b74e63;  */

void FUN_108b74c8c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000108b752e4();
  uStack_38 = extraout_x8;
  FUN_108b79c4c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1138282f0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1138282f0) = 1;
  if ((bVar1 & 1) != 0) goto LAB_108b74ce8;
  if ((bRam0000000113828320 & 1) == 0) goto LAB_108b74d0c;
  while( true ) {
    FUN_108b80888(0x113828310,param_1);
LAB_108b74ce8:
    func_0x000108b752d0(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108b74d0c:
    iVar2 = 0x13828320;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b74f00();
      puVar3 = &UNK_10f5018d5;
      func_0x000107c31088(&uStack_90,&UNK_10f5018d5);
      func_0x000107c30f84(auStack_b0);
      FUN_108b7a050();
      func_0x000107c30f3c(auStack_78,puVar3);
      func_0x000104bdbd48(auStack_a0,auStack_b0,auStack_78,1);
      uStack_68 = uStack_90;
      uStack_90 = 0;
      func_0x000107c30f40(auStack_60,auStack_a0);
      puVar3 = &UNK_10f5018e0;
      func_0x000107c31088(&uStack_b8,&UNK_10f5018e0);
      func_0x000107c30f84(auStack_d8);
      func_0x000104bef4f0();
      func_0x000107c30f3c(auStack_88,puVar3);
      func_0x000104bdbd48(auStack_c8,auStack_d8,auStack_88,1);
      uStack_50 = uStack_b8;
      uStack_b8 = 0;
      func_0x000107c30f40(auStack_48,auStack_c8);
      func_0x000104bdbd44(0x113828310,0x113828328,1,&uStack_68,2);
      lVar4 = 0x18;
      do {
        func_0x000107c27924(auStack_60 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000108b752c8(auStack_c8);
      func_0x000108b752c8(auStack_88);
      func_0x000108b752c8(auStack_d8);
      func_0x000107c278f4(&uStack_b8);
      func_0x000108b752c8(auStack_a0);
      func_0x000108b752c8(auStack_78);
      func_0x000108b752c8(auStack_b0);
      func_0x000107c278f4(&uStack_90);
      ___cxa_guard_release(0x113828320);
    }
  }
  return;
}



/* Entry: 108b74e64; end: 108b74eff;  */

undefined8 FUN_108b74e64(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113828308 & 1) == 0) {
    iVar4 = 0x13828308;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b74f00();
      lStack_20 = lRam0000000113828328;
      if (lRam0000000113828328 != 0) {
        piVar1 = (int *)(lRam0000000113828328 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x000107c30fa8(0x1138282f8,&lStack_20);
      func_0x000107c278f4(&lStack_20);
      ___cxa_guard_release(0x113828308);
    }
  }
  return 0x1138282f8;
}



/* Entry: 108b74f00; end: 108b74f53;  */

void FUN_108b74f00(void)

{
  int iVar1;
  
  if ((bRam0000000113828330 & 1) == 0) {
    iVar1 = 0x13828330;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113828328,&UNK_10f5018e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113828330);
      return;
    }
  }
  return;
}



/* Entry: 108b74f54; end: 108b751fb;  */

undefined8 * FUN_108b74f54(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  int iVar9;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [8];
  undefined2 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  int iStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  
  plVar8 = param_2;
  func_0x000108b752e4();
  uStack_48 = extraout_x8;
  FUN_108b80734(*plVar8,&UNK_10df93171);
  lVar3 = *param_2;
  if (lVar3 == 0) {
    uStack_50 = 1;
    uStack_58 = 0;
    goto LAB_108b75174;
  }
  ___dynamic_cast(lVar3,&PTR_DAT_110a9b248,&PTR_DAT_1107e7dd0,0xfffffffffffffffe);
  if (lVar3 != 0) {
    puStack_70 = *(undefined8 **)(lVar3 + 8);
    if ((puStack_70 != (undefined8 *)0x0) && (puStack_70[2] != 0)) {
      plVar8 = (long *)(puStack_70[2] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x00010b9a8f6c(&uStack_58,&puStack_70);
    func_0x000104be7e54(&puStack_70);
    goto LAB_108b75174;
  }
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puStack_70 = (undefined8 *)*param_2;
  unaff_x20 = 0x11328ad40;
  lVar3 = unaff_x20;
  func_0x000104bdbfcc(0x11328ad40,&puStack_70);
  if (lVar3 == 0) {
    iVar9 = 1;
LAB_108b750a4:
    FUN_108b794f4(&puStack_78,param_2);
    if (lVar3 == 0) {
      lVar3 = *param_2;
      func_0x000104bf822c(&puStack_90,puStack_78);
      puVar4 = (undefined8 *)0x30;
      iStack_80 = iVar9;
      __Znwm();
      uStack_68 = 0x11328ad50;
      uStack_60 = 1;
      puVar4[2] = lVar3;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[4] = uStack_88;
      puVar4[3] = puStack_90;
      puStack_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      *(int *)(puVar4 + 5) = iVar9;
      uVar5 = 0x11328ad58;
      puStack_70 = puVar4;
      func_0x000104bf7ea8();
      puVar4[1] = uVar5;
      func_0x000104bf7e44(0x11328ad40);
      if (((ulong)puVar4 & 1) != 0) {
        puStack_70 = (undefined8 *)0x0;
      }
      func_0x000104bdc220(&puStack_70);
      ppuVar6 = &puStack_90;
    }
    else {
      func_0x000104bf822c(&puStack_70,puStack_78);
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar9);
      func_0x000104bf7db8(lVar3 + 0x18,&puStack_70);
      ppuVar6 = &puStack_70;
    }
    func_0x000104bdc2a0(ppuVar6);
    func_0x00010b9a8f6c(&uStack_58,&puStack_78);
    ppuVar6 = &puStack_78;
  }
  else {
    iVar9 = *(int *)(lVar3 + 0x28);
    func_0x000104bf7d80(&puStack_70,lVar3 + 0x18);
    if (puStack_70 == (undefined8 *)0x0) {
      iVar9 = iVar9 + 1;
      func_0x000104be7e54(&puStack_70);
      goto LAB_108b750a4;
    }
    if (puStack_70[2] != 0) {
      plVar8 = (long *)(puStack_70[2] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puStack_90 = puStack_70;
    func_0x00010b9a8f6c(&uStack_58,&puStack_90);
    func_0x000104be7e54(&puStack_90);
    ppuVar6 = &puStack_70;
  }
  func_0x000104be7e54(ppuVar6);
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
LAB_108b75174:
  iVar9 = 0;
  func_0x000104be6a78(auStack_a0,param_1 + 8,0,&uStack_58,1);
  func_0x00010b9a8d98(auStack_a0);
  puVar4 = &uStack_58;
  func_0x00010b9a8d98();
  func_0x000108b752d0(uStack_48);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    func_0x000104bdc220(&puStack_70);
    func_0x000104bd46a0();
    func_0x00010b9a8d98(&uStack_58);
  }
  auStack_d8[0] = (undefined1)iVar9;
  puVar7 = puVar4;
  __Unwind_Resume(puVar4);
  pcStack_a8 = FUN_108b751fc;
  lStack_c0 = unaff_x20;
  puStack_b8 = puVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000108b752e4();
  uStack_d0 = 7;
  uStack_c8 = extraout_x8_00;
  func_0x000104be6a78(auStack_e8,puVar7 + 1,1,auStack_d8,1);
  func_0x00010b9a8d98(auStack_e8);
  puVar4 = (undefined8 *)auStack_d8;
  func_0x00010b9a8d98();
  func_0x000108b752d0(uStack_c8);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_d8);
  __Unwind_Resume(puVar4);
  func_0x000108b752f4();
  return puVar4;
}



/* Entry: 108b751fc; end: 108b7527b;  */

undefined1 * FUN_108b751fc(long param_1,undefined1 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  auStack_38[0] = param_2;
  func_0x000108b752e4();
  uStack_30 = 7;
  uStack_28 = extraout_x8;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  func_0x00010b9a8d98(auStack_48);
  puVar1 = auStack_38;
  func_0x00010b9a8d98();
  func_0x000108b752d0(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  __Unwind_Resume(puVar1);
  func_0x000108b752f4();
  return puVar1;
}



/* Entry: 108b7527c; end: 108b752bb;  */

void FUN_108b7527c(void)

{
  func_0x000108b752f4();
  return;
}



/* Entry: 108b752bc; end: 108b752ff;  */

undefined8 * FUN_108b752bc(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 108b75300; end: 108b753bf;  */

void FUN_108b75300(undefined8 *param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  func_0x000104bdbf60(&uStack_40,lStack_28 + 0x18);
  func_0x000104bdbf60(&uStack_58,lStack_28 + 0x28);
  func_0x000104bdbf60(&uStack_70,lStack_28 + 0x38);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  param_1[4] = uStack_50;
  param_1[3] = uStack_58;
  param_1[5] = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  param_1[8] = uStack_60;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 108b753c0; end: 108b7551f;  */

undefined8 FUN_108b753c0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828348 & 1) == 0) {
    param_1 = 0x113828348;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_78,&UNK_10f501916);
      puVar1 = &UNK_10f501937;
      func_0x000107c31088(auStack_80,&UNK_10f501937);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_70,auStack_80,puVar1);
      puVar1 = &UNK_10f501954;
      func_0x000107c31088(auStack_88,&UNK_10f501954);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_58,auStack_88,puVar1);
      puVar1 = &UNK_10f50195d;
      func_0x000107c31088(auStack_90,&UNK_10f50195d);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_40,auStack_90,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113828338,auStack_78,0,auStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x000107c27924(auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_90);
      func_0x000107c278f4(auStack_88);
      func_0x000107c278f4(auStack_80);
      func_0x000107c278f4(auStack_78);
      param_1 = 0x113828348;
      ___cxa_guard_release(0x113828348);
    }
  }
  FUN_108b75520(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828338;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b75520; end: 108b75533;  */

void FUN_108b75520(void)

{
  return;
}



/* Entry: 108b75534; end: 108b75633;  */

undefined1 * FUN_108b75534(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b75634();
  func_0x000107c30f7c(auStack_68,0x113828358);
  func_0x0001052808e4(auStack_58,param_2);
  uStack_48 = *(undefined4 *)(param_2 + 0x18);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_108b75764(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_108b75634;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar7;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828360 & 1) == 0) {
    puVar3 = (undefined1 *)0x113828360;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107c31088(auStack_d0,&UNK_10f501964);
      puVar4 = &UNK_10f501979;
      func_0x000107c31088(auStack_d8,&UNK_10f501979);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_c8,auStack_d8,puVar4);
      puVar4 = &UNK_10f501981;
      func_0x000107c31088(auStack_e0,&UNK_10f501981);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_b0,auStack_e0,puVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113828350,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x000107c27924(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      puVar3 = (undefined1 *)0x113828360;
      ___cxa_guard_release(0x113828360);
    }
  }
  FUN_108b75764(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113828350;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 108b75634; end: 108b75763;  */

undefined8 FUN_108b75634(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828360 & 1) == 0) {
    param_1 = 0x113828360;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f501964);
      puVar1 = &UNK_10f501979;
      func_0x000107c31088(auStack_68,&UNK_10f501979);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_58,auStack_68,puVar1);
      puVar1 = &UNK_10f501981;
      func_0x000107c31088(auStack_70,&UNK_10f501981);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_40,auStack_70,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113828350,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      param_1 = 0x113828360;
      ___cxa_guard_release(0x113828360);
    }
  }
  FUN_108b75764(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828350;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b75764; end: 108b75777;  */

void FUN_108b75764(void)

{
  return;
}



/* Entry: 108b75778; end: 108b757cf;  */

ulong FUN_108b75778(void)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  uVar1 = lStack_28 + 0x18;
  func_0x00010b9a9518(uVar1);
  lVar2 = lStack_28 + 0x28;
  func_0x00010b9a9518(lVar2);
  func_0x000104bdbf78(&lStack_28);
  return uVar1 & 0xffffffff | lVar2 << 0x20;
}



/* Entry: 108b757d0; end: 108b758cb;  */

undefined1 * FUN_108b757d0(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b758cc();
  func_0x000107c30f7c(auStack_68,0x113828370);
  uStack_50 = 4;
  auStack_58[0] = *param_2;
  uStack_48 = param_2[1];
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_108b759fc(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_108b758cc;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828378 & 1) == 0) {
    puVar3 = (undefined1 *)0x113828378;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107c31088(auStack_d0,&UNK_10f501986);
      puVar4 = &UNK_10f50199f;
      func_0x000107c31088(auStack_d8,&UNK_10f50199f);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_c8,auStack_d8,puVar4);
      puVar4 = &UNK_10f5019a5;
      func_0x000107c31088(auStack_e0,&UNK_10f5019a5);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_b0,auStack_e0,puVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113828368,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x000107c27924(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      puVar3 = (undefined1 *)0x113828378;
      ___cxa_guard_release(0x113828378);
    }
  }
  FUN_108b759fc(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113828368;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 108b758cc; end: 108b759fb;  */

undefined8 FUN_108b758cc(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828378 & 1) == 0) {
    param_1 = 0x113828378;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f501986);
      puVar1 = &UNK_10f50199f;
      func_0x000107c31088(auStack_68,&UNK_10f50199f);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_58,auStack_68,puVar1);
      puVar1 = &UNK_10f5019a5;
      func_0x000107c31088(auStack_70,&UNK_10f5019a5);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_40,auStack_70,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113828368,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      param_1 = 0x113828378;
      ___cxa_guard_release(0x113828378);
    }
  }
  FUN_108b759fc(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828368;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b759fc; end: 108b75a0f;  */

void FUN_108b759fc(void)

{
  return;
}



/* Entry: 108b75a10; end: 108b75a8b;  */

void FUN_108b75a10(int *param_1)

{
  int iVar1;
  undefined1 auStack_58 [48];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  iVar1 = (int)lStack_28 + 0x18;
  func_0x00010b9a9518();
  FUN_108b75a8c(auStack_58,lStack_28 + 0x28);
  *param_1 = iVar1;
  FUN_108b75cc8(param_1 + 2,auStack_58);
  FUN_108939890(auStack_58);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 108b75a8c; end: 108b75ae3;  */

void FUN_108b75a8c(undefined1 *param_1,long param_2)

{
  undefined1 auStack_48 [40];
  
  if (*(byte *)(param_2 + 8) < 2) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    FUN_108b75d94(auStack_48);
    FUN_108b76264(param_1,auStack_48);
    FUN_1089398b0(auStack_48);
  }
  return;
}



/* Entry: 108b75ae4; end: 108b75c13;  */

undefined8 FUN_108b75ae4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828390 & 1) == 0) {
    iVar1 = 0x13828390;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f5019ac);
      puVar2 = &UNK_10f5019d4;
      func_0x000107c31088(auStack_68,&UNK_10f5019d4);
      FUN_108b75c14();
      func_0x000107c27e98(auStack_58,auStack_68,puVar2);
      puVar2 = &UNK_10f5019d9;
      func_0x000107c31088(auStack_70,&UNK_10f5019d9);
      FUN_108b75c6c();
      func_0x000107c27e98(auStack_40,auStack_70,puVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113828380,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      ___cxa_guard_release(0x113828390);
    }
  }
  func_0x000108b76300(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828380;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328abf0 & 1) == 0) {
    iVar1 = 0x1328abf0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328abe0);
      ___cxa_guard_release(0x11328abf0);
    }
  }
  return 0x11328abe0;
}



/* Entry: 108b75c14; end: 108b75c6b;  */

undefined8 FUN_108b75c14(void)

{
  int iVar1;
  
  if ((bRam000000011328abf0 & 1) == 0) {
    iVar1 = 0x1328abf0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328abe0);
      ___cxa_guard_release(0x11328abf0);
    }
  }
  return 0x11328abe0;
}



/* Entry: 108b75c6c; end: 108b75cc7;  */

undefined8 FUN_108b75c6c(void)

{
  int iVar1;
  
  if ((bRam000000011328abc0 & 1) == 0) {
    iVar1 = 0x1328abc0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b76280();
      func_0x00010b990784(0x11328abb0);
      ___cxa_guard_release(0x11328abc0);
    }
  }
  return 0x11328abb0;
}



/* Entry: 108b75cc8; end: 108b75cf3;  */

undefined1 * FUN_108b75cc8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_108b75cf4();
  return param_1;
}



/* Entry: 108b75cf4; end: 108b75d07;  */

void FUN_108b75cf4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_108b75d24();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 108b75d08; end: 108b75d23;  */

void FUN_108b75d08(long param_1)

{
  FUN_108b75d24();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108b75d24; end: 108b75d93;  */

void FUN_108b75d24(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 108b75d94; end: 108b76207;  */

void FUN_108b75d94(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x28;
  undefined1 auStack_98 [24];
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  func_0x00010b9a94ec(&plStack_78);
  func_0x00010529d114(&lStack_80,&plStack_78);
  func_0x000104bddedc(&plStack_78);
  plVar13 = param_1 + 2;
  param_1[3] = 0;
  *plVar13 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  lVar11 = *(long *)(lStack_80 + 0x18);
  do {
    if (lVar11 == *(long *)(lStack_80 + 0x20)) {
      func_0x00010529d184(&lStack_80);
      return;
    }
    func_0x000104bdbf60(auStack_98,lVar11);
    lVar4 = lVar11 + 0x10;
    FUN_108b76314();
    plVar6 = param_1 + 3;
    func_0x000107c278c4(plVar6,auStack_98);
    plVar15 = (long *)param_1[1];
    if (plVar15 != (long *)0x0) {
      uVar12 = (long)plVar15 - 1;
      if (((ulong)plVar15 & uVar12) == 0) {
        unaff_x28 = (long *)(uVar12 & (ulong)plVar6);
      }
      else {
        unaff_x28 = plVar6;
        if (plVar15 <= plVar6) {
          uVar5 = 0;
          if (plVar15 != (long *)0x0) {
            uVar5 = (ulong)plVar6 / (ulong)plVar15;
          }
          unaff_x28 = (long *)((long)plVar6 - uVar5 * (long)plVar15);
        }
      }
      plVar14 = *(long **)(*param_1 + (long)unaff_x28 * 8);
      if (plVar14 != (long *)0x0) {
        do {
          while( true ) {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_108b75ec0;
            plVar3 = (long *)plVar14[1];
            if (plVar3 != plVar6) break;
            uVar5 = (ulong)(plVar14 + 2);
            puVar2 = auStack_98;
            func_0x000107c278d0();
            if ((uVar5 & 1) != 0) {
              plVar14[5] = lVar4;
              plVar14[6] = (long)param_3;
              goto LAB_108b76174;
            }
          }
          if (((ulong)plVar15 & uVar12) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar12);
          }
          else if (plVar15 <= plVar3) {
            uVar5 = 0;
            if (plVar15 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar15;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar15);
          }
        } while (plVar3 == unaff_x28);
      }
    }
LAB_108b75ec0:
    plVar14 = (long *)0x38;
    __Znwm();
    uStack_68 = 0;
    *plVar14 = 0;
    plVar14[1] = (long)plVar6;
    puVar2 = auStack_98;
    plStack_78 = plVar14;
    plStack_70 = plVar13;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar14 + 2);
    plVar14[5] = lVar4;
    plVar14[6] = (long)param_3;
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    if ((plVar15 == (long *)0x0) ||
       (*(float *)(param_1 + 4) * (float)plVar15 < (float)(param_1[3] + 1))) {
      uVar12 = 1;
      if ((long *)0x2 < plVar15) {
        uVar12 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
      }
      plVar3 = (long *)(uVar12 | (long)plVar15 << 1);
      plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
      if (plVar3 <= plVar15) {
        plVar3 = plVar15;
      }
      if ((long)plVar3 - 1U == 0) {
        plVar3 = (long *)0x2;
      }
      else if (((ulong)plVar3 & (long)plVar3 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      plVar15 = (long *)param_1[1];
      if (plVar15 < plVar3) {
LAB_108b75f68:
        if ((ulong)plVar3 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x108b761b8);
          (*pcVar1)();
        }
        puVar2 = (undefined1 *)((long)plVar3 << 3);
        __Znwm();
        FUN_108b76208(param_1);
        param_1[1] = (long)plVar3;
        lVar4 = *param_1;
        for (plVar15 = (long *)0x0; plVar3 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
          *(undefined8 *)(lVar4 + (long)plVar15 * 8) = 0;
        }
        plVar7 = (long *)*plVar13;
        plVar15 = plVar3;
        if (plVar7 != (long *)0x0) {
          plVar8 = (long *)plVar7[1];
          uVar5 = (long)plVar3 - 1;
          uVar12 = 0;
          if (plVar3 != (long *)0x0) {
            uVar12 = (ulong)plVar8 / (ulong)plVar3;
          }
          plVar9 = plVar8;
          if (plVar3 <= plVar8) {
            plVar9 = (long *)((long)plVar8 - uVar12 * (long)plVar3);
          }
          if (((ulong)plVar3 & uVar5) == 0) {
            plVar9 = (long *)((ulong)plVar8 & uVar5);
          }
          *(long **)(lVar4 + (long)plVar9 * 8) = plVar13;
          while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
            plVar10 = (long *)plVar7[1];
            if (((ulong)plVar3 & uVar5) == 0) {
              plVar10 = (long *)((ulong)plVar10 & uVar5);
            }
            else if (plVar3 <= plVar10) {
              uVar12 = 0;
              if (plVar3 != (long *)0x0) {
                uVar12 = (ulong)plVar10 / (ulong)plVar3;
              }
              plVar10 = (long *)((long)plVar10 - uVar12 * (long)plVar3);
            }
            if (plVar10 != plVar9) {
              if (*(long *)(lVar4 + (long)plVar10 * 8) == 0) {
                *(long **)(lVar4 + (long)plVar10 * 8) = plVar8;
                plVar9 = plVar10;
              }
              else {
                *plVar8 = *plVar7;
                *plVar7 = **(undefined8 **)(lVar4 + (long)plVar10 * 8);
                **(long **)(lVar4 + (long)plVar10 * 8) = (long)plVar7;
                plVar7 = plVar8;
              }
            }
          }
        }
      }
      else if (plVar3 < plVar15) {
        plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
        if (plVar3 <= plVar7) {
          plVar3 = plVar7;
        }
        if (plVar3 < plVar15) {
          if (plVar3 != (long *)0x0) goto LAB_108b75f68;
          puVar2 = (undefined1 *)0x0;
          FUN_108b76208(param_1);
          param_1[1] = 0;
          plVar15 = (long *)0x0;
        }
        else {
          plVar15 = (long *)param_1[1];
        }
      }
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        unaff_x28 = (long *)((long)plVar15 - 1U & (ulong)plVar6);
      }
      else {
        unaff_x28 = plVar6;
        if (plVar15 <= plVar6) {
          uVar12 = 0;
          if (plVar15 != (long *)0x0) {
            uVar12 = (ulong)plVar6 / (ulong)plVar15;
          }
          unaff_x28 = (long *)((long)plVar6 - uVar12 * (long)plVar15);
        }
      }
    }
    lVar4 = *param_1;
    plVar6 = *(long **)(lVar4 + (long)unaff_x28 * 8);
    if (plVar6 == (long *)0x0) {
      *plVar14 = *plVar13;
      *plVar13 = (long)plVar14;
      *(long **)(lVar4 + (long)unaff_x28 * 8) = plVar13;
      if (*plVar14 != 0) {
        plVar6 = *(long **)(*plVar14 + 8);
        if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
          plVar6 = (long *)((ulong)plVar6 & (long)plVar15 - 1U);
        }
        else if (plVar15 <= plVar6) {
          uVar12 = 0;
          if (plVar15 != (long *)0x0) {
            uVar12 = (ulong)plVar6 / (ulong)plVar15;
          }
          plVar6 = (long *)((long)plVar6 - uVar12 * (long)plVar15);
        }
        *(long **)(lVar4 + (long)plVar6 * 8) = plVar14;
      }
    }
    else {
      *plVar14 = *plVar6;
      *plVar6 = (long)plVar14;
    }
    plStack_78 = (long *)0x0;
    param_1[3] = param_1[3] + 1;
    FUN_108b76220(&plStack_78);
LAB_108b76174:
    lVar11 = lVar11 + 0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    param_3 = puVar2;
  } while( true );
}



/* Entry: 108b76208; end: 108b7621f;  */

void FUN_108b76208(long *param_1,long param_2)

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



/* Entry: 108b76220; end: 108b76263;  */

long * FUN_108b76220(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 108b76264; end: 108b7627f;  */

void FUN_108b76264(long param_1)

{
  FUN_108b75d24();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108b76280; end: 108b762ef;  */

undefined8 FUN_108b76280(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam000000011328abd8 & 1) == 0) {
    uVar1 = 0x11328abd8;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000104bdbd7c();
      uVar2 = uVar1;
      FUN_108b763b8();
      func_0x00010b9912a0(0x11328abc8,uVar1,uVar2);
      ___cxa_guard_release(0x11328abd8);
    }
  }
  return 0x11328abc8;
}



/* Entry: 108b762f0; end: 108b76313;  */

void FUN_108b762f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108b76314; end: 108b76387;  */

undefined1  [16] FUN_108b76314(undefined8 param_1,uint param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  long lStack_38;
  int iStack_30;
  long lStack_2c;
  uint uStack_24;
  
  func_0x00010b9a97d0(&lStack_38);
  iVar2 = (int)lStack_38 + 0x18;
  func_0x00010b9a9518();
  lVar3 = lStack_38 + 0x28;
  FUN_108b76388();
  uStack_24 = param_2 & 0xff;
  iStack_30 = iVar2;
  lStack_2c = lVar3;
  func_0x000104bdbf78(&lStack_38);
  auVar1._4_8_ = lStack_2c;
  auVar1._0_4_ = iStack_30;
  auVar1._12_4_ = uStack_24;
  return auVar1;
}



/* Entry: 108b76388; end: 108b763b7;  */

undefined1  [16] FUN_108b76388(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(byte *)(param_1 + 8) < 2) {
    return ZEXT816(0);
  }
  FUN_108b75778();
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 108b763b8; end: 108b764e7;  */

undefined8 FUN_108b763b8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138283a8 & 1) == 0) {
    iVar1 = 0x138283a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f5019e5);
      puVar2 = &UNK_10f501a13;
      func_0x000107c31088(auStack_68,&UNK_10f501a13);
      FUN_108b75c14();
      func_0x000107c27e98(auStack_58,auStack_68,puVar2);
      puVar2 = &UNK_10f501a18;
      func_0x000107c31088(auStack_70,&UNK_10f501a18);
      FUN_108b764e8();
      func_0x000107c27e98(auStack_40,auStack_70,puVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113828398,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      ___cxa_guard_release(0x1138283a8);
    }
  }
  FUN_108b76544(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828398;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328ac08 & 1) == 0) {
    iVar1 = 0x1328ac08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b758cc();
      func_0x00010b990784(0x11328abf8);
      ___cxa_guard_release(0x11328ac08);
    }
  }
  return 0x11328abf8;
}



/* Entry: 108b764e8; end: 108b76543;  */

undefined8 FUN_108b764e8(void)

{
  int iVar1;
  
  if ((bRam000000011328ac08 & 1) == 0) {
    iVar1 = 0x1328ac08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b758cc();
      func_0x00010b990784(0x11328abf8);
      ___cxa_guard_release(0x11328ac08);
    }
  }
  return 0x11328abf8;
}



/* Entry: 108b76544; end: 108b76557;  */

void FUN_108b76544(void)

{
  return;
}



/* Entry: 108b76558; end: 108b765cf;  */

void FUN_108b76558(int *param_1)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  iVar1 = (int)lStack_28 + 0x18;
  func_0x00010b9a9518();
  FUN_108b8099c(&uStack_40,lStack_28 + 0x28);
  *param_1 = iVar1;
  *(undefined8 *)(param_1 + 4) = uStack_38;
  *(undefined8 *)(param_1 + 2) = uStack_40;
  *(undefined8 *)(param_1 + 6) = uStack_30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x000107c27914(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 108b765d0; end: 108b766ff;  */

undefined8 FUN_108b765d0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138283c0 & 1) == 0) {
    param_1 = 0x1138283c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f501a23);
      puVar1 = &UNK_10f501a4a;
      func_0x000107c31088(auStack_68,&UNK_10f501a4a);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_58,auStack_68,puVar1);
      puVar1 = &UNK_10f501a4d;
      func_0x000107c31088(auStack_70,&UNK_10f501a4d);
      FUN_108b80a94();
      func_0x000107c27e98(auStack_40,auStack_70,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138283b0,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      param_1 = 0x1138283c0;
      ___cxa_guard_release(0x1138283c0);
    }
  }
  FUN_108b76700(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138283b0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b76700; end: 108b76713;  */

void FUN_108b76700(void)

{
  return;
}



/* Entry: 108b76714; end: 108b76817;  */

void FUN_108b76714(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [48];
  long lStack_38;
  
  func_0x00010b9a97d0(&lStack_38);
  uVar1 = lStack_38 + 0x18;
  FUN_108b78188(uVar1);
  lVar2 = lStack_38 + 0x28;
  func_0x00010b9a9608(lVar2);
  FUN_108b75a10(auStack_70,lStack_38 + 0x38);
  lVar3 = lStack_38 + 0x48;
  func_0x00010b9a9608(lVar3);
  FUN_108b77c84(auStack_90,lStack_38 + 0x58);
  lVar4 = lStack_38 + 0x68;
  func_0x00010b9a9608(lVar4);
  FUN_108b76818(param_1,uVar1 & 0xffffffff,lVar2,auStack_70,lVar3,auStack_90,lVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  FUN_108939890(auStack_68);
  func_0x000104bdbf78(&lStack_38);
  return;
}



/* Entry: 108b76818; end: 108b7681f;  */

undefined4 *
FUN_108b76818(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 *param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  FUN_108b76a78(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 0x10) = param_5;
  uVar2 = param_6[1];
  uVar1 = *param_6;
  *(undefined8 *)(param_1 + 0x16) = param_6[2];
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  param_1[0x18] = *(undefined4 *)(param_6 + 3);
  *(undefined1 *)(param_1 + 0x1a) = param_7;
  return param_1;
}



/* Entry: 108b76820; end: 108b76a07;  */

int * FUN_108b76820(int *param_1,int param_2,undefined1 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uVar5 = (undefined1)param_7;
  uVar4 = (undefined1)param_5;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138283d8 & 1) == 0) {
    param_1 = (int *)0x1138283d8;
    ___cxa_guard_acquire();
    uVar5 = (undefined1)param_7;
    uVar4 = (undefined1)param_5;
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_c0,&UNK_10f501a53);
      puVar1 = &UNK_10f501a78;
      func_0x000107c31088(auStack_c8,&UNK_10f501a78);
      FUN_108b78230();
      func_0x000107c27e98(auStack_b8,auStack_c8,puVar1);
      puVar1 = &UNK_10f501a8b;
      func_0x000107c31088(auStack_d0,&UNK_10f501a8b);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_a0,auStack_d0,puVar1);
      puVar1 = &UNK_10f501a9d;
      func_0x000107c31088(auStack_d8,&UNK_10f501a9d);
      FUN_108b75ae4();
      func_0x000107c27e98(auStack_88,auStack_d8,puVar1);
      puVar1 = &UNK_10f501ab6;
      func_0x000107c31088(auStack_e0,&UNK_10f501ab6);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_70,auStack_e0,puVar1);
      puVar1 = &UNK_10f501ac9;
      func_0x000107c31088(auStack_e8,&UNK_10f501ac9);
      FUN_108b77df8();
      func_0x000107c27e98(auStack_58,auStack_e8,puVar1);
      puVar1 = &UNK_10f501ad9;
      func_0x000107c31088(auStack_f0,&UNK_10f501ad9);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_40,auStack_f0,puVar1);
      puVar3 = auStack_b8;
      uVar2 = 0;
      param_4 = 6;
      func_0x000104bdbd44(0x1138283c8,auStack_c0,0,puVar3,6);
      lVar6 = 0x78;
      do {
        func_0x000107c27924(auStack_b8 + lVar6);
        uVar5 = (undefined1)param_7;
        uVar4 = (undefined1)param_5;
        param_2 = (int)uVar2;
        param_3 = SUB81(puVar3,0);
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_f0);
      func_0x000107c278f4(auStack_e8);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      func_0x000107c278f4(auStack_c8);
      func_0x000107c278f4(auStack_c0);
      param_1 = (int *)0x1138283d8;
      ___cxa_guard_release();
    }
  }
  FUN_108b76aa4(uStack_28);
  if ((bool)in_ZR) {
    return (int *)0x1138283c8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  FUN_108b76a78(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 0x10) = uVar4;
  uVar7 = param_6[1];
  uVar2 = *param_6;
  *(undefined8 *)(param_1 + 0x16) = param_6[2];
  *(undefined8 *)(param_1 + 0x14) = uVar7;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  param_1[0x18] = *(int *)(param_6 + 3);
  *(undefined1 *)(param_1 + 0x1a) = uVar5;
  return param_1;
}



/* Entry: 108b76a08; end: 108b76a77;  */

undefined4 *
FUN_108b76a08(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 *param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  FUN_108b76a78(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 0x10) = param_5;
  uVar2 = param_6[1];
  uVar1 = *param_6;
  *(undefined8 *)(param_1 + 0x16) = param_6[2];
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  param_1[0x18] = *(undefined4 *)(param_6 + 3);
  *(undefined1 *)(param_1 + 0x1a) = param_7;
  return param_1;
}



/* Entry: 108b76a78; end: 108b76aa3;  */

undefined4 * FUN_108b76a78(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_108b75cc8(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 108b76aa4; end: 108b76ab7;  */

void FUN_108b76aa4(void)

{
  return;
}



/* Entry: 108b76ab8; end: 108b76c6f;  */

/* WARNING: Possible PIC construction at 0x000108b7457c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b745f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b74580) */
/* WARNING: Removing unreachable block (ram,0x000108b74598) */
/* WARNING: Removing unreachable block (ram,0x000108b745a4) */
/* WARNING: Removing unreachable block (ram,0x000108b745b8) */
/* WARNING: Removing unreachable block (ram,0x000108b745c8) */
/* WARNING: Removing unreachable block (ram,0x000108b7461c) */
/* WARNING: Removing unreachable block (ram,0x000108b7462c) */
/* WARNING: Removing unreachable block (ram,0x000108b7476c) */
/* WARNING: Removing unreachable block (ram,0x000108b74780) */
/* WARNING: Removing unreachable block (ram,0x000108b745f8) */
/* WARNING: Removing unreachable block (ram,0x000108b74584) */
/* WARNING: Removing unreachable block (ram,0x000108b745fc) */
/* WARNING: Removing unreachable block (ram,0x000108b747d0) */
/* WARNING: Removing unreachable block (ram,0x000108b747d8) */
/* WARNING: Removing unreachable block (ram,0x000108b747dc) */
/* WARNING: Removing unreachable block (ram,0x000108b74600) */

undefined4 * FUN_108b76ab8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  long lVar9;
  undefined1 auStack_338 [8];
  undefined4 auStack_330 [2];
  undefined4 auStack_328 [2];
  undefined2 uStack_320;
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined1 uStack_30f;
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined1 uStack_2ff;
  undefined4 uStack_2f8;
  undefined2 uStack_2f0;
  undefined4 uStack_2e8;
  undefined2 uStack_2e0;
  undefined8 uStack_2d8;
  undefined2 uStack_2d0;
  undefined8 uStack_2c8;
  undefined2 uStack_2c0;
  undefined4 *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined4 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined4 auStack_228 [6];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined4 auStack_f8 [2];
  undefined4 auStack_f0 [2];
  undefined4 auStack_e8 [2];
  undefined2 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b76c70();
  func_0x000107c30f7c(auStack_f8,0x1138283e8);
  auStack_e8[0] = *param_2;
  uStack_e0 = 4;
  FUN_108b74a28(auStack_d8,param_2 + 1);
  FUN_108b76f38(auStack_c8,param_2 + 4);
  func_0x000108b76f4c(auStack_b8,param_2 + 0x12);
  func_0x000108b76f4c(auStack_a8,param_2 + 0x21);
  FUN_108b76f38(auStack_98,param_2 + 0x30);
  FUN_108b76f60(auStack_88,param_2 + 0x3e);
  FUN_108b76fdc(auStack_78,param_2 + 0x44);
  FUN_108b76fdc(auStack_68,param_2 + 0x4a);
  FUN_108b76f60(auStack_58,param_2 + 0x50);
  func_0x000104bdb9bc(auStack_f0,auStack_f8,auStack_e8,10);
  lVar9 = 0x90;
  do {
    func_0x00010b9a8d98((long)auStack_e8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_f8);
  puVar4 = auStack_f0;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_f0;
  func_0x000104bdbf78();
  func_0x000108b77218(uStack_48);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_58;
  lVar8 = -0xa0;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  puVar4 = auStack_f8;
  func_0x000107c27928();
  func_0x000108b771e4();
  pcStack_108 = FUN_108b76c70;
  uStack_138 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0;
  puStack_110 = &stack0xfffffffffffffff0;
  if ((bRam000000011372d608 & 1) == 0) {
    puVar4 = (undefined4 *)0x11372d608;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107c31088(auStack_230,&UNK_10f501ae8);
      puVar5 = &UNK_10f501b06;
      func_0x000107c31088(auStack_238,&UNK_10f501b06);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_228,auStack_238,puVar5);
      puVar5 = &UNK_10f501b12;
      func_0x000107c31088(auStack_240,&UNK_10f501b12);
      FUN_108b74b48();
      func_0x000107c27e98(auStack_210,auStack_240,puVar5);
      func_0x000107c31088(auStack_248,&UNK_10f501b1c);
      FUN_108b77058();
      func_0x000107c27e98(auStack_1f8,auStack_248,0x11372d630);
      func_0x000107c31088(auStack_250,&UNK_10f501b28);
      FUN_108b770ac();
      func_0x000107c27e98(auStack_1e0,auStack_250,0x11372d640);
      func_0x000107c31088(auStack_258,&UNK_10f501b34);
      FUN_108b770ac();
      func_0x000107c27e98(auStack_1c8,auStack_258,0x11372d640);
      func_0x000107c31088(auStack_260,&UNK_10f501b41);
      FUN_108b77058();
      func_0x000107c27e98(auStack_1b0,auStack_260,0x11372d630);
      func_0x000107c31088(auStack_268,&UNK_10f501b53);
      FUN_108b77100();
      func_0x000107c27e98(auStack_198,auStack_268,0x11372d650);
      func_0x000107c31088(auStack_270,&UNK_10f501b62);
      FUN_108b77154();
      func_0x000107c27e98(auStack_180,auStack_270,0x11372d660);
      func_0x000107c31088(auStack_278,&UNK_10f501b71);
      FUN_108b77154();
      func_0x000107c27e98(auStack_168,auStack_278,0x11372d660);
      func_0x000107c31088(auStack_280,&UNK_10f501b80);
      FUN_108b77100();
      func_0x000107c27e98(auStack_150,auStack_280,0x11372d650);
      puVar2 = auStack_228;
      uVar7 = 0;
      func_0x000104bdbd44(0x1138283e0,auStack_230,0,auStack_228,10);
      lVar8 = 0xd8;
      do {
        func_0x000107c27924((long)puVar2 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_280);
      func_0x000107c278f4(auStack_278);
      func_0x000107c278f4(auStack_270);
      func_0x000107c278f4(auStack_268);
      func_0x000107c278f4(auStack_260);
      func_0x000107c278f4(auStack_258);
      func_0x000107c278f4(auStack_250);
      func_0x000107c278f4(auStack_248);
      func_0x000107c278f4(auStack_240);
      func_0x000107c278f4(auStack_238);
      func_0x000107c278f4(auStack_230);
      puVar4 = (undefined4 *)0x11372d608;
      ___cxa_guard_release();
      uVar7 = 0xffffffffffffffe8;
    }
  }
  func_0x000108b77218(uStack_138);
  if ((bool)uVar1) {
    return (undefined4 *)0x1138283e0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar4 + 0xc) == '\x01') {
    pcStack_288 = FUN_108b76f38;
    puStack_2b0 = auStack_e8;
    lStack_2a8 = lVar9;
    uStack_2a0 = uVar7;
    puStack_298 = puVar2;
    ppuStack_290 = &puStack_110;
    func_0x000108b747f8();
    FUN_108b745d0();
    func_0x000107c30f7c(auStack_338,0x1138282b0);
    auStack_328[0] = *puVar4;
    uStack_320 = 4;
    if (*(char *)(puVar4 + 2) == '\x01') {
      uStack_318 = CONCAT44(uStack_318._4_4_,puVar4[1]);
      uStack_310 = 4;
    }
    else {
      uStack_318 = 0;
      uStack_310 = 1;
    }
    uStack_30f = 0;
    if (*(char *)(puVar4 + 4) == '\x01') {
      uStack_308 = CONCAT44(uStack_308._4_4_,puVar4[3]);
      uStack_300 = 4;
    }
    else {
      uStack_308 = 0;
      uStack_300 = 1;
    }
    uStack_2d8 = *(undefined8 *)(puVar4 + 8);
    uStack_2c8 = *(undefined8 *)(puVar4 + 10);
    uStack_2ff = 0;
    uStack_2f0 = 4;
    uStack_2f8 = puVar4[5];
    uStack_2e8 = puVar4[6];
    uStack_2e0 = 4;
    uStack_2d0 = 6;
    uStack_2c0 = 6;
    func_0x000104bdb9bc(auStack_330,auStack_338,auStack_328,7);
    lVar9 = 0x60;
    do {
      func_0x00010b9a8d98((long)auStack_328 + lVar9);
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != -0x10);
    func_0x000107c27928(auStack_338);
    func_0x00010b9a8f60(extraout_x8,auStack_330);
    puVar4 = auStack_330;
    func_0x000104bdbf78(puVar4);
    return puVar4;
  }
  *(undefined2 *)(extraout_x8 + 1) = 1;
  *extraout_x8 = 0;
  return puVar4;
}



/* Entry: 108b76c70; end: 108b76f37;  */

/* WARNING: Possible PIC construction at 0x000108b7457c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b745f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b74580) */
/* WARNING: Removing unreachable block (ram,0x000108b74598) */
/* WARNING: Removing unreachable block (ram,0x000108b745a4) */
/* WARNING: Removing unreachable block (ram,0x000108b745b8) */
/* WARNING: Removing unreachable block (ram,0x000108b745c8) */
/* WARNING: Removing unreachable block (ram,0x000108b7461c) */
/* WARNING: Removing unreachable block (ram,0x000108b7462c) */
/* WARNING: Removing unreachable block (ram,0x000108b7476c) */
/* WARNING: Removing unreachable block (ram,0x000108b74780) */
/* WARNING: Removing unreachable block (ram,0x000108b745f8) */
/* WARNING: Removing unreachable block (ram,0x000108b74584) */
/* WARNING: Removing unreachable block (ram,0x000108b745fc) */
/* WARNING: Removing unreachable block (ram,0x000108b747d0) */
/* WARNING: Removing unreachable block (ram,0x000108b747d8) */
/* WARNING: Removing unreachable block (ram,0x000108b747dc) */
/* WARNING: Removing unreachable block (ram,0x000108b74600) */

undefined4 * FUN_108b76c70(undefined4 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  long lVar4;
  undefined1 auStack_238 [8];
  undefined4 auStack_230 [2];
  undefined4 auStack_228 [2];
  undefined2 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined1 uStack_1ff;
  undefined4 uStack_1f8;
  undefined2 uStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372d608 & 1) == 0) {
    param_1 = (undefined4 *)0x11372d608;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_130,&UNK_10f501ae8);
      puVar2 = &UNK_10f501b06;
      func_0x000107c31088(auStack_138,&UNK_10f501b06);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_128,auStack_138,puVar2);
      puVar2 = &UNK_10f501b12;
      func_0x000107c31088(auStack_140,&UNK_10f501b12);
      FUN_108b74b48();
      func_0x000107c27e98(auStack_110,auStack_140,puVar2);
      func_0x000107c31088(auStack_148,&UNK_10f501b1c);
      FUN_108b77058();
      func_0x000107c27e98(auStack_f8,auStack_148,0x11372d630);
      func_0x000107c31088(auStack_150,&UNK_10f501b28);
      FUN_108b770ac();
      func_0x000107c27e98(auStack_e0,auStack_150,0x11372d640);
      func_0x000107c31088(auStack_158,&UNK_10f501b34);
      FUN_108b770ac();
      func_0x000107c27e98(auStack_c8,auStack_158,0x11372d640);
      func_0x000107c31088(auStack_160,&UNK_10f501b41);
      FUN_108b77058();
      func_0x000107c27e98(auStack_b0,auStack_160,0x11372d630);
      func_0x000107c31088(auStack_168,&UNK_10f501b53);
      FUN_108b77100();
      func_0x000107c27e98(auStack_98,auStack_168,0x11372d650);
      func_0x000107c31088(auStack_170,&UNK_10f501b62);
      FUN_108b77154();
      func_0x000107c27e98(auStack_80,auStack_170,0x11372d660);
      func_0x000107c31088(auStack_178,&UNK_10f501b71);
      FUN_108b77154();
      func_0x000107c27e98(auStack_68,auStack_178,0x11372d660);
      func_0x000107c31088(auStack_180,&UNK_10f501b80);
      FUN_108b77100();
      func_0x000107c27e98(auStack_50,auStack_180,0x11372d650);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138283e0,auStack_130,0,auStack_128,10);
      lVar4 = 0xd8;
      do {
        func_0x000107c27924(auStack_128 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_180);
      func_0x000107c278f4(auStack_178);
      func_0x000107c278f4(auStack_170);
      func_0x000107c278f4(auStack_168);
      func_0x000107c278f4(auStack_160);
      func_0x000107c278f4(auStack_158);
      func_0x000107c278f4(auStack_150);
      func_0x000107c278f4(auStack_148);
      func_0x000107c278f4(auStack_140);
      func_0x000107c278f4(auStack_138);
      func_0x000107c278f4(auStack_130);
      param_1 = (undefined4 *)0x11372d608;
      ___cxa_guard_release();
    }
  }
  func_0x000108b77218(uStack_38);
  if ((bool)in_ZR) {
    return (undefined4 *)0x1138283e0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(param_1 + 0xc) == '\x01') {
    func_0x000108b747f8();
    FUN_108b745d0();
    func_0x000107c30f7c(auStack_238,0x1138282b0);
    auStack_228[0] = *param_1;
    uStack_220 = 4;
    if (*(char *)(param_1 + 2) == '\x01') {
      uStack_218 = CONCAT44(uStack_218._4_4_,param_1[1]);
      uStack_210 = 4;
    }
    else {
      uStack_218 = 0;
      uStack_210 = 1;
    }
    uStack_20f = 0;
    if (*(char *)(param_1 + 4) == '\x01') {
      uStack_208 = CONCAT44(uStack_208._4_4_,param_1[3]);
      uStack_200 = 4;
    }
    else {
      uStack_208 = 0;
      uStack_200 = 1;
    }
    uStack_1d8 = *(undefined8 *)(param_1 + 8);
    uStack_1c8 = *(undefined8 *)(param_1 + 10);
    uStack_1ff = 0;
    uStack_1f0 = 4;
    uStack_1f8 = param_1[5];
    uStack_1e8 = param_1[6];
    uStack_1e0 = 4;
    uStack_1d0 = 6;
    uStack_1c0 = 6;
    func_0x000104bdb9bc(auStack_230,auStack_238,auStack_228,7);
    lVar4 = 0x60;
    do {
      func_0x00010b9a8d98((long)auStack_228 + lVar4);
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != -0x10);
    func_0x000107c27928(auStack_238);
    func_0x00010b9a8f60(extraout_x8,auStack_230);
    puVar1 = auStack_230;
    func_0x000104bdbf78(puVar1);
    return puVar1;
  }
  *(undefined2 *)(extraout_x8 + 1) = 1;
  *extraout_x8 = 0;
  return param_1;
}



/* Entry: 108b76f38; end: 108b76f5f;  */

/* WARNING: Possible PIC construction at 0x000108b7457c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b745f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b74580) */
/* WARNING: Removing unreachable block (ram,0x000108b74598) */
/* WARNING: Removing unreachable block (ram,0x000108b745a4) */
/* WARNING: Removing unreachable block (ram,0x000108b745b8) */
/* WARNING: Removing unreachable block (ram,0x000108b745c8) */
/* WARNING: Removing unreachable block (ram,0x000108b7461c) */
/* WARNING: Removing unreachable block (ram,0x000108b7462c) */
/* WARNING: Removing unreachable block (ram,0x000108b7476c) */
/* WARNING: Removing unreachable block (ram,0x000108b74780) */
/* WARNING: Removing unreachable block (ram,0x000108b745f8) */
/* WARNING: Removing unreachable block (ram,0x000108b74584) */
/* WARNING: Removing unreachable block (ram,0x000108b745fc) */
/* WARNING: Removing unreachable block (ram,0x000108b747d0) */
/* WARNING: Removing unreachable block (ram,0x000108b747d8) */
/* WARNING: Removing unreachable block (ram,0x000108b747dc) */
/* WARNING: Removing unreachable block (ram,0x000108b74600) */

void FUN_108b76f38(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined4 auStack_a8 [2];
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    func_0x000108b747f8();
    FUN_108b745d0();
    func_0x000107c30f7c(auStack_b8,0x1138282b0);
    auStack_a8[0] = *param_2;
    uStack_a0 = 4;
    if (*(char *)(param_2 + 2) == '\x01') {
      uStack_98 = CONCAT44(uStack_98._4_4_,param_2[1]);
      uStack_90 = 4;
    }
    else {
      uStack_98 = 0;
      uStack_90 = 1;
    }
    uStack_8f = 0;
    if (*(char *)(param_2 + 4) == '\x01') {
      uStack_88 = CONCAT44(uStack_88._4_4_,param_2[3]);
      uStack_80 = 4;
    }
    else {
      uStack_88 = 0;
      uStack_80 = 1;
    }
    uStack_58 = *(undefined8 *)(param_2 + 8);
    uStack_48 = *(undefined8 *)(param_2 + 10);
    uStack_7f = 0;
    uStack_70 = 4;
    uStack_78 = param_2[5];
    uStack_68 = param_2[6];
    uStack_60 = 4;
    uStack_50 = 6;
    uStack_40 = 6;
    func_0x000104bdb9bc(auStack_b0,auStack_b8,auStack_a8,7);
    lVar1 = 0x60;
    do {
      func_0x00010b9a8d98((long)auStack_a8 + lVar1);
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != -0x10);
    func_0x000107c27928(auStack_b8);
    func_0x00010b9a8f60(param_1,auStack_b0);
    func_0x000104bdbf78(auStack_b0);
    return;
  }
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 108b76f60; end: 108b76fdb;  */

void FUN_108b76f60(void)

{
  undefined1 in_CY;
  long extraout_x9;
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000108b77204();
  func_0x000108b771f8();
  lVar1 = 0;
  while (func_0x000108b7722c(), !(bool)in_CY) {
    FUN_108b73ee8(auStack_58,extraout_x9 + lVar1);
    func_0x000108b771cc();
    func_0x00010b9a8d98(auStack_58);
    lVar1 = lVar1 + 0x60;
  }
  func_0x000108b771ec();
  func_0x000108b771dc();
  return;
}



/* Entry: 108b76fdc; end: 108b77057;  */

void FUN_108b76fdc(void)

{
  undefined1 in_CY;
  long extraout_x9;
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000108b77204();
  func_0x000108b771f8();
  lVar1 = 0;
  while (func_0x000108b7722c(), !(bool)in_CY) {
    FUN_108b7d818(auStack_58,extraout_x9 + lVar1);
    func_0x000108b771cc();
    func_0x00010b9a8d98(auStack_58);
    lVar1 = lVar1 + 0x48;
  }
  func_0x000108b771ec();
  func_0x000108b771dc();
  return;
}



/* Entry: 108b77058; end: 108b770ab;  */

void FUN_108b77058(void)

{
  int iVar1;
  
  if ((bRam000000011372d610 & 1) == 0) {
    iVar1 = 0x1372d610;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b745d0();
      func_0x00010b990784(0x11372d630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11372d610);
      return;
    }
  }
  return;
}



/* Entry: 108b770ac; end: 108b770ff;  */

void FUN_108b770ac(void)

{
  int iVar1;
  
  if ((bRam000000011372d618 & 1) == 0) {
    iVar1 = 0x1372d618;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b7de1c();
      func_0x00010b990784(0x11372d640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11372d618);
      return;
    }
  }
  return;
}



/* Entry: 108b77100; end: 108b77153;  */

void FUN_108b77100(void)

{
  int iVar1;
  
  if ((bRam000000011372d620 & 1) == 0) {
    iVar1 = 0x1372d620;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b74098();
      func_0x00010b990868(0x11372d650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11372d620);
      return;
    }
  }
  return;
}



/* Entry: 108b77154; end: 108b771a7;  */

void FUN_108b77154(void)

{
  int iVar1;
  
  if ((bRam000000011372d628 & 1) == 0) {
    iVar1 = 0x1372d628;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b7d988();
      func_0x00010b990868(0x11372d660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11372d628);
      return;
    }
  }
  return;
}



/* Entry: 108b771a8; end: 108b7723f;  */

void FUN_108b771a8(void)

{
  return;
}



/* Entry: 108b77240; end: 108b77737;  */

void FUN_108b77240(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [16];
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000108b77c70();
  FUN_108b7cf60();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x11372d670);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x11372d670) = 1;
  if ((bVar1 & 1) != 0) goto LAB_108b77298;
  if ((bRam000000011372d678 & 1) == 0) goto LAB_108b772bc;
  while( true ) {
    FUN_108b80888(0x11372d690,param_1);
LAB_108b77298:
    func_0x000108b77bc4(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108b772bc:
    iVar2 = 0x1372d678;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b777d4();
      func_0x000107c31088(&uStack_190,&UNK_10f4ed0c2);
      func_0x000107c30f84(auStack_1b0);
      FUN_108b77b5c();
      func_0x000107c30f3c(auStack_108,0x11372d6a0);
      func_0x000108b77c3c(auStack_1a0,auStack_1b0,auStack_108);
      uStack_f8 = uStack_190;
      uStack_190 = 0;
      func_0x000107c30f40(auStack_f0,auStack_1a0);
      func_0x000107c31088(&uStack_1b8,&UNK_10f4ed0d7);
      func_0x000107c30f84(auStack_1d8);
      FUN_108b77b5c();
      puVar3 = auStack_128;
      func_0x000107c30f3c(puVar3,0x11372d6a0);
      func_0x000104bef760();
      func_0x000107c30f3c(auStack_118,puVar3);
      func_0x000104bdbd48(auStack_1c8,auStack_1d8,auStack_128,2);
      uStack_e0 = uStack_1b8;
      uStack_1b8 = 0;
      func_0x000107c30f40(auStack_d8,auStack_1c8);
      puVar4 = &UNK_10f4ed0ea;
      func_0x000107c31088(&uStack_1e0,&UNK_10f4ed0ea);
      func_0x000107c30f84(auStack_200);
      func_0x000104bef494();
      func_0x000107c30f3c(auStack_138,puVar4);
      func_0x000108b77c3c(auStack_1f0,auStack_200,auStack_138);
      uStack_c8 = uStack_1e0;
      uStack_1e0 = 0;
      func_0x000107c30f40(auStack_c0,auStack_1f0);
      puVar4 = &UNK_10f4ed0f8;
      func_0x000107c31088(&uStack_208,&UNK_10f4ed0f8);
      func_0x000107c30f84(auStack_228);
      func_0x000104bef760();
      func_0x000107c30f3c(auStack_148,puVar4);
      func_0x000108b77c3c(auStack_218,auStack_228,auStack_148);
      uStack_b0 = uStack_208;
      uStack_208 = 0;
      func_0x000107c30f40(auStack_a8,auStack_218);
      puVar4 = &UNK_10f4ed109;
      func_0x000107c31088(&uStack_230,&UNK_10f4ed109);
      func_0x000107c30f84(auStack_250);
      FUN_108b7f6d0();
      func_0x000107c30f3c(auStack_158,puVar4);
      func_0x000108b77c3c(auStack_240,auStack_250,auStack_158);
      uStack_98 = uStack_230;
      uStack_230 = 0;
      func_0x000107c30f40(auStack_90,auStack_240);
      func_0x000107c31088(&uStack_258,&UNK_10f4ed11a);
      func_0x000107c30f84(auStack_278);
      if ((bRam000000011372d688 & 1) == 0) {
        iVar2 = 0x1372d688;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x00010b990e20(0x11372d6b0);
          ___cxa_guard_release(0x11372d688);
        }
      }
      func_0x000107c30f3c(auStack_168,0x11372d6b0);
      func_0x000108b77c3c(auStack_268,auStack_278,auStack_168);
      uStack_80 = uStack_258;
      uStack_258 = 0;
      func_0x000107c30f40(auStack_78,auStack_268);
      puVar4 = &UNK_10f4ed136;
      func_0x000107c31088(&uStack_280,&UNK_10f4ed136);
      func_0x000107c30f84(auStack_2a0);
      FUN_108b7d084();
      func_0x000107c30f3c(auStack_178,puVar4);
      func_0x000108b77c3c(auStack_290,auStack_2a0,auStack_178);
      uStack_68 = uStack_280;
      uStack_280 = 0;
      func_0x000107c30f40(auStack_60,auStack_290);
      puVar4 = &UNK_10f4ed145;
      func_0x000107c31088(&uStack_2a8,&UNK_10f4ed145);
      func_0x000107c30f84(auStack_2c8);
      FUN_108b76c70();
      func_0x000107c30f3c(auStack_188,puVar4);
      func_0x000108b77c3c(auStack_2b8,auStack_2c8,auStack_188);
      uStack_50 = uStack_2a8;
      uStack_2a8 = 0;
      func_0x000107c30f40(auStack_48,auStack_2b8);
      func_0x000104bdbd44(0x11372d690,0x113828408,1,&uStack_f8,8);
      lVar5 = 0xa8;
      do {
        func_0x000107c27924(auStack_f0 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x000108b77c04(auStack_2b8);
      func_0x000108b77c04(auStack_188);
      func_0x000108b77c04(auStack_2c8);
      func_0x000107c278f4(&uStack_2a8);
      func_0x000108b77c04(auStack_290);
      func_0x000108b77c04(auStack_178);
      func_0x000108b77c04(auStack_2a0);
      func_0x000107c278f4(&uStack_280);
      func_0x000108b77c04(auStack_268);
      func_0x000108b77c04(auStack_168);
      func_0x000108b77c04(auStack_278);
      func_0x000107c278f4(&uStack_258);
      func_0x000108b77c04(auStack_240);
      func_0x000108b77c04(auStack_158);
      func_0x000108b77c04(auStack_250);
      func_0x000107c278f4(&uStack_230);
      func_0x000108b77c04(auStack_218);
      func_0x000108b77c04(auStack_148);
      func_0x000108b77c04(auStack_228);
      func_0x000107c278f4(&uStack_208);
      func_0x000108b77c04(auStack_1f0);
      func_0x000108b77c04(auStack_138);
      func_0x000108b77c04(auStack_200);
      func_0x000107c278f4(&uStack_1e0);
      func_0x000108b77c04(auStack_1c8);
      lVar5 = 0x18;
      do {
        func_0x000107c27900(auStack_128 + lVar5);
        lVar5 = lVar5 + -0x10;
        in_ZR = lVar5 == -8;
      } while (!(bool)in_ZR);
      func_0x000108b77c04(auStack_1d8);
      func_0x000107c278f4(&uStack_1b8);
      func_0x000108b77c04(auStack_1a0);
      func_0x000108b77c04(auStack_108);
      func_0x000108b77c04(auStack_1b0);
      func_0x000107c278f4(&uStack_190);
      ___cxa_guard_release(0x11372d678);
    }
  }
  return;
}



/* Entry: 108b77738; end: 108b777d3;  */

undefined8 FUN_108b77738(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113828400 & 1) == 0) {
    iVar4 = 0x13828400;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b777d4();
      lStack_20 = lRam0000000113828408;
      if (lRam0000000113828408 != 0) {
        piVar1 = (int *)(lRam0000000113828408 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x000107c30fa8(0x1138283f0,&lStack_20);
      func_0x000107c278f4(&lStack_20);
      ___cxa_guard_release(0x113828400);
    }
  }
  return 0x1138283f0;
}



/* Entry: 108b777d4; end: 108b77827;  */

void FUN_108b777d4(void)

{
  int iVar1;
  
  if ((bRam0000000113828410 & 1) == 0) {
    iVar1 = 0x13828410;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113828408,&UNK_10f501b95);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113828410);
      return;
    }
  }
  return;
}



/* Entry: 108b77828; end: 108b7786f;  */

undefined1 * FUN_108b77828(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_288 [24];
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined8 **ppuStack_260;
  code *pcStack_258;
  undefined1 auStack_238 [24];
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_198 [24];
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined8 uStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  func_0x000108b77bd8();
  func_0x000108b77c44();
  func_0x000108b77c14();
  func_0x000108b77c34();
  func_0x000108b77c24();
  func_0x000108b77c0c();
  func_0x000108b77bac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b77bec();
    func_0x000108b77c2c();
    pcStack_58 = FUN_108b77870;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000108b77c70();
    func_0x000108b77c44();
    uStack_98 = param_3;
    func_0x000108b77c14();
    uVar3 = 1;
    func_0x000104be6a78();
    func_0x000108b77c24();
    lVar7 = 0x10;
    do {
      puVar5 = auStack_a8 + lVar7;
      func_0x00010b9a8d98();
      lVar7 = lVar7 + -0x10;
      bVar1 = lVar7 == -0x10;
    } while (!bVar1);
    func_0x000108b77bc4(uStack_88);
    if (bVar1) {
      return puVar5;
    }
    ___stack_chk_fail();
    lVar7 = 0x10;
    do {
      puVar6 = auStack_a8 + lVar7;
      func_0x00010b9a8d98();
      lVar7 = lVar7 + -0x10;
      uVar2 = lVar7 == -0x10;
    } while (!(bool)uVar2);
    func_0x000108b77c2c();
    pcStack_c8 = FUN_108b77908;
    puStack_e0 = auStack_a8;
    puStack_d8 = puVar5;
    ppuStack_d0 = &puStack_60;
    func_0x000108b77bd8();
    if ((uVar3 >> 0x20 & 1) == 0) {
      uStack_f8 = 0;
      uStack_f0 = 1;
    }
    else {
      uStack_f8 = CONCAT44(uStack_f8._4_4_,(int)uVar3);
      uStack_f0 = 4;
    }
    uStack_ef = 0;
    func_0x000108b77c14();
    func_0x000108b77c34();
    func_0x000108b77c24();
    func_0x000108b77c0c();
    func_0x000108b77bac();
    param_1 = puVar6;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x000108b77bec();
      func_0x000108b77c2c();
      pcStack_118 = FUN_108b7796c;
      puStack_130 = auStack_a8;
      puStack_128 = puVar5;
      ppuStack_120 = &ppuStack_d0;
      func_0x000108b77bd8();
      func_0x000108b77c44();
      func_0x000108b77c14();
      puVar4 = (undefined1 *)0x3;
      func_0x000108b77c34();
      func_0x000108b77c24();
      func_0x000108b77c0c();
      func_0x000108b77bac();
      param_1 = puVar6;
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x000108b77bec();
        func_0x000108b77c2c();
        pcStack_168 = FUN_108b779b4;
        puStack_180 = auStack_a8;
        puStack_178 = puVar5;
        ppuStack_170 = &ppuStack_120;
        func_0x000108b77bd8();
        FUN_108b7f5a4(auStack_198);
        func_0x000108b77c54();
        func_0x000108b77c34();
        func_0x000108b77c24();
        func_0x000108b77c0c();
        func_0x000108b77bac();
        param_1 = puVar4;
        if (!(bool)uVar2) {
          ___stack_chk_fail();
          func_0x000108b77bec();
          func_0x000108b77c2c();
          pcStack_1b8 = FUN_108b77a10;
          puStack_1d0 = auStack_a8;
          puStack_1c8 = puVar6;
          ppuStack_1c0 = &ppuStack_170;
          func_0x000108b77bd8();
          func_0x000108b77c44();
          func_0x000108b77c14();
          puVar5 = (undefined1 *)0x5;
          func_0x000108b77c34();
          func_0x000108b77c24();
          func_0x000108b77c0c();
          func_0x000108b77bac();
          param_1 = puVar4;
          if (!(bool)uVar2) {
            ___stack_chk_fail();
            func_0x000108b77bec();
            func_0x000108b77c2c();
            pcStack_208 = FUN_108b77a58;
            puStack_220 = auStack_a8;
            puStack_218 = puVar6;
            ppuStack_210 = &ppuStack_1c0;
            func_0x000108b77bd8();
            FUN_10893b0c0(auStack_238);
            func_0x000108b77c54();
            puVar6 = (undefined1 *)0x6;
            func_0x000108b77c34();
            func_0x000108b77c24();
            func_0x000108b77c0c();
            func_0x000108b77bac();
            param_1 = puVar5;
            if (!(bool)uVar2) {
              ___stack_chk_fail();
              func_0x000108b77bec();
              func_0x000108b77c2c();
              pcStack_258 = FUN_108b77ab4;
              puStack_270 = auStack_a8;
              puStack_268 = puVar4;
              ppuStack_260 = &ppuStack_210;
              func_0x000108b77bd8();
              FUN_108b76ab8(auStack_288,puVar6);
              func_0x000108b77c54();
              func_0x000108b77c34();
              func_0x000108b77c24();
              func_0x000108b77c0c();
              func_0x000108b77bac();
              param_1 = puVar6;
              if (!(bool)uVar2) {
                ___stack_chk_fail();
                func_0x000108b77bec();
                func_0x000108b77c2c();
                func_0x000108b77c64();
                return puVar5;
              }
            }
          }
        }
      }
    }
  }
  return param_1;
}



/* Entry: 108b77870; end: 108b77907;  */

undefined1 * FUN_108b77870(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_238 [24];
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined1 auStack_1e8 [24];
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  undefined1 auStack_148 [24];
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined8 uStack_38;
  
  func_0x000108b77c70();
  func_0x000108b77c44();
  uStack_48 = param_3;
  func_0x000108b77c14();
  uVar4 = 1;
  func_0x000104be6a78();
  func_0x000108b77c24();
  lVar8 = 0x10;
  do {
    puVar6 = auStack_58 + lVar8;
    func_0x00010b9a8d98();
    lVar8 = lVar8 + -0x10;
    bVar1 = lVar8 == -0x10;
  } while (!bVar1);
  func_0x000108b77bc4(uStack_38);
  if (!bVar1) {
    ___stack_chk_fail();
    lVar8 = 0x10;
    do {
      puVar7 = auStack_58 + lVar8;
      func_0x00010b9a8d98();
      lVar8 = lVar8 + -0x10;
      uVar2 = lVar8 == -0x10;
    } while (!(bool)uVar2);
    func_0x000108b77c2c();
    pcStack_78 = FUN_108b77908;
    puStack_90 = auStack_58;
    puStack_88 = puVar6;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x000108b77bd8();
    if ((uVar4 >> 0x20 & 1) == 0) {
      uStack_a8 = 0;
      uStack_a0 = 1;
    }
    else {
      uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uVar4);
      uStack_a0 = 4;
    }
    uStack_9f = 0;
    func_0x000108b77c14();
    func_0x000108b77c34();
    func_0x000108b77c24();
    func_0x000108b77c0c();
    func_0x000108b77bac();
    puVar3 = puVar7;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x000108b77bec();
      func_0x000108b77c2c();
      pcStack_c8 = FUN_108b7796c;
      puStack_e0 = auStack_58;
      puStack_d8 = puVar6;
      ppuStack_d0 = &puStack_80;
      func_0x000108b77bd8();
      func_0x000108b77c44();
      func_0x000108b77c14();
      puVar5 = (undefined1 *)0x3;
      func_0x000108b77c34();
      func_0x000108b77c24();
      func_0x000108b77c0c();
      func_0x000108b77bac();
      puVar3 = puVar7;
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x000108b77bec();
        func_0x000108b77c2c();
        pcStack_118 = FUN_108b779b4;
        puStack_130 = auStack_58;
        puStack_128 = puVar6;
        pppuStack_120 = &ppuStack_d0;
        func_0x000108b77bd8();
        FUN_108b7f5a4(auStack_148);
        func_0x000108b77c54();
        func_0x000108b77c34();
        func_0x000108b77c24();
        func_0x000108b77c0c();
        func_0x000108b77bac();
        puVar3 = puVar5;
        if (!(bool)uVar2) {
          ___stack_chk_fail();
          func_0x000108b77bec();
          func_0x000108b77c2c();
          pcStack_168 = FUN_108b77a10;
          puStack_180 = auStack_58;
          puStack_178 = puVar7;
          pppuStack_170 = &pppuStack_120;
          func_0x000108b77bd8();
          func_0x000108b77c44();
          func_0x000108b77c14();
          puVar6 = (undefined1 *)0x5;
          func_0x000108b77c34();
          func_0x000108b77c24();
          func_0x000108b77c0c();
          func_0x000108b77bac();
          puVar3 = puVar5;
          if (!(bool)uVar2) {
            ___stack_chk_fail();
            func_0x000108b77bec();
            func_0x000108b77c2c();
            pcStack_1b8 = FUN_108b77a58;
            puStack_1d0 = auStack_58;
            puStack_1c8 = puVar7;
            pppuStack_1c0 = &pppuStack_170;
            func_0x000108b77bd8();
            FUN_10893b0c0(auStack_1e8);
            func_0x000108b77c54();
            puVar7 = (undefined1 *)0x6;
            func_0x000108b77c34();
            func_0x000108b77c24();
            func_0x000108b77c0c();
            func_0x000108b77bac();
            puVar3 = puVar6;
            if (!(bool)uVar2) {
              ___stack_chk_fail();
              func_0x000108b77bec();
              func_0x000108b77c2c();
              pcStack_208 = FUN_108b77ab4;
              puStack_220 = auStack_58;
              puStack_218 = puVar5;
              pppuStack_210 = &pppuStack_1c0;
              func_0x000108b77bd8();
              FUN_108b76ab8(auStack_238,puVar7);
              func_0x000108b77c54();
              func_0x000108b77c34();
              func_0x000108b77c24();
              func_0x000108b77c0c();
              func_0x000108b77bac();
              puVar3 = puVar7;
              if (!(bool)uVar2) {
                ___stack_chk_fail();
                func_0x000108b77bec();
                func_0x000108b77c2c();
                func_0x000108b77c64();
                return puVar6;
              }
            }
          }
        }
      }
    }
    return puVar3;
  }
  return puVar6;
}



/* Entry: 108b77908; end: 108b7796b;  */

undefined8 FUN_108b77908(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_d8 [24];
  
  func_0x000108b77bd8();
  func_0x000108b77c14();
  func_0x000108b77c34();
  func_0x000108b77c24();
  func_0x000108b77c0c();
  func_0x000108b77bac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b77bec();
    func_0x000108b77c2c();
    func_0x000108b77bd8();
    func_0x000108b77c44();
    func_0x000108b77c14();
    uVar1 = 3;
    func_0x000108b77c34();
    func_0x000108b77c24();
    func_0x000108b77c0c();
    func_0x000108b77bac();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b77bec();
      func_0x000108b77c2c();
      param_1 = uVar1;
      func_0x000108b77bd8();
      FUN_108b7f5a4(auStack_d8);
      func_0x000108b77c54();
      func_0x000108b77c34();
      func_0x000108b77c24();
      func_0x000108b77c0c();
      func_0x000108b77bac();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108b77bec();
        func_0x000108b77c2c();
        func_0x000108b77bd8();
        func_0x000108b77c44();
        func_0x000108b77c14();
        uVar1 = 5;
        func_0x000108b77c34();
        func_0x000108b77c24();
        func_0x000108b77c0c();
        func_0x000108b77bac();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108b77bec();
          func_0x000108b77c2c();
          func_0x000108b77bd8();
          FUN_10893b0c0(auStack_178);
          func_0x000108b77c54();
          uVar2 = 6;
          func_0x000108b77c34();
          func_0x000108b77c24();
          func_0x000108b77c0c();
          func_0x000108b77bac();
          param_1 = uVar1;
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000108b77bec();
            func_0x000108b77c2c();
            func_0x000108b77bd8();
            FUN_108b76ab8(auStack_1c8,uVar2);
            func_0x000108b77c54();
            func_0x000108b77c34();
            func_0x000108b77c24();
            func_0x000108b77c0c();
            func_0x000108b77bac();
            param_1 = uVar2;
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000108b77bec();
              func_0x000108b77c2c();
              func_0x000108b77c64();
              return uVar1;
            }
          }
        }
      }
    }
  }
  return param_1;
}



/* Entry: 108b7796c; end: 108b779b3;  */

undefined8 FUN_108b7796c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_178 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_88 [24];
  
  func_0x000108b77bd8();
  func_0x000108b77c44();
  func_0x000108b77c14();
  uVar1 = 3;
  func_0x000108b77c34();
  func_0x000108b77c24();
  func_0x000108b77c0c();
  func_0x000108b77bac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b77bec();
    func_0x000108b77c2c();
    param_1 = uVar1;
    func_0x000108b77bd8();
    FUN_108b7f5a4(auStack_88);
    func_0x000108b77c54();
    func_0x000108b77c34();
    func_0x000108b77c24();
    func_0x000108b77c0c();
    func_0x000108b77bac();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b77bec();
      func_0x000108b77c2c();
      func_0x000108b77bd8();
      func_0x000108b77c44();
      func_0x000108b77c14();
      uVar1 = 5;
      func_0x000108b77c34();
      func_0x000108b77c24();
      func_0x000108b77c0c();
      func_0x000108b77bac();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108b77bec();
        func_0x000108b77c2c();
        func_0x000108b77bd8();
        FUN_10893b0c0(auStack_128);
        func_0x000108b77c54();
        uVar2 = 6;
        func_0x000108b77c34();
        func_0x000108b77c24();
        func_0x000108b77c0c();
        func_0x000108b77bac();
        param_1 = uVar1;
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108b77bec();
          func_0x000108b77c2c();
          func_0x000108b77bd8();
          FUN_108b76ab8(auStack_178,uVar2);
          func_0x000108b77c54();
          func_0x000108b77c34();
          func_0x000108b77c24();
          func_0x000108b77c0c();
          func_0x000108b77bac();
          param_1 = uVar2;
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000108b77bec();
            func_0x000108b77c2c();
            func_0x000108b77c64();
            return uVar1;
          }
        }
      }
    }
  }
  return param_1;
}



/* Entry: 108b779b4; end: 108b77a0f;  */

undefined8 FUN_108b779b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_128 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_38 [24];
  
  func_0x000108b77bd8();
  FUN_108b7f5a4(auStack_38);
  func_0x000108b77c54();
  func_0x000108b77c34();
  func_0x000108b77c24();
  func_0x000108b77c0c();
  func_0x000108b77bac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b77bec();
    func_0x000108b77c2c();
    func_0x000108b77bd8();
    func_0x000108b77c44();
    func_0x000108b77c14();
    uVar1 = 5;
    func_0x000108b77c34();
    func_0x000108b77c24();
    func_0x000108b77c0c();
    func_0x000108b77bac();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b77bec();
      func_0x000108b77c2c();
      func_0x000108b77bd8();
      FUN_10893b0c0(auStack_d8);
      func_0x000108b77c54();
      uVar2 = 6;
      func_0x000108b77c34();
      func_0x000108b77c24();
      func_0x000108b77c0c();
      func_0x000108b77bac();
      param_2 = uVar1;
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108b77bec();
        func_0x000108b77c2c();
        func_0x000108b77bd8();
        FUN_108b76ab8(auStack_128,uVar2);
        func_0x000108b77c54();
        func_0x000108b77c34();
        func_0x000108b77c24();
        func_0x000108b77c0c();
        func_0x000108b77bac();
        param_2 = uVar2;
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108b77bec();
          func_0x000108b77c2c();
          func_0x000108b77c64();
          return uVar1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 108b77a10; end: 108b77a57;  */

undefined8 FUN_108b77a10(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [24];
  undefined1 auStack_88 [24];
  
  func_0x000108b77bd8();
  func_0x000108b77c44();
  func_0x000108b77c14();
  uVar1 = 5;
  func_0x000108b77c34();
  func_0x000108b77c24();
  func_0x000108b77c0c();
  func_0x000108b77bac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b77bec();
    func_0x000108b77c2c();
    func_0x000108b77bd8();
    FUN_10893b0c0(auStack_88);
    func_0x000108b77c54();
    uVar2 = 6;
    func_0x000108b77c34();
    func_0x000108b77c24();
    func_0x000108b77c0c();
    func_0x000108b77bac();
    param_1 = uVar1;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b77bec();
      func_0x000108b77c2c();
      func_0x000108b77bd8();
      FUN_108b76ab8(auStack_d8,uVar2);
      func_0x000108b77c54();
      func_0x000108b77c34();
      func_0x000108b77c24();
      func_0x000108b77c0c();
      func_0x000108b77bac();
      param_1 = uVar2;
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108b77bec();
        func_0x000108b77c2c();
        func_0x000108b77c64();
        return uVar1;
      }
    }
  }
  return param_1;
}



/* Entry: 108b77a58; end: 108b77ab3;  */

undefined8 FUN_108b77a58(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_38 [24];
  
  func_0x000108b77bd8();
  FUN_10893b0c0(auStack_38);
  func_0x000108b77c54();
  uVar2 = 6;
  func_0x000108b77c34();
  func_0x000108b77c24();
  func_0x000108b77c0c();
  func_0x000108b77bac();
  uVar1 = param_2;
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b77bec();
    func_0x000108b77c2c();
    func_0x000108b77bd8();
    FUN_108b76ab8(auStack_88,uVar2);
    func_0x000108b77c54();
    func_0x000108b77c34();
    func_0x000108b77c24();
    func_0x000108b77c0c();
    func_0x000108b77bac();
    uVar1 = uVar2;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b77bec();
      func_0x000108b77c2c();
      func_0x000108b77c64();
      return param_2;
    }
  }
  return uVar1;
}



/* Entry: 108b77ab4; end: 108b77b0f;  */

undefined8 FUN_108b77ab4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 auStack_38 [24];
  
  func_0x000108b77bd8();
  FUN_108b76ab8(auStack_38,param_2);
  func_0x000108b77c54();
  func_0x000108b77c34();
  func_0x000108b77c24();
  func_0x000108b77c0c();
  func_0x000108b77bac();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x000108b77bec();
  func_0x000108b77c2c();
  func_0x000108b77c64();
  return param_1;
}



/* Entry: 108b77b10; end: 108b77b4f;  */

void FUN_108b77b10(void)

{
  func_0x000108b77c64();
  return;
}



/* Entry: 108b77b50; end: 108b77b5b;  */

undefined8 * FUN_108b77b50(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 108b77b5c; end: 108b77bab;  */

void FUN_108b77b5c(void)

{
  int iVar1;
  
  if ((bRam000000011372d680 & 1) == 0) {
    iVar1 = 0x1372d680;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11372d6a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11372d680);
      return;
    }
  }
  return;
}



/* Entry: 108b77bac; end: 108b77c83;  */

void FUN_108b77bac(void)

{
  return;
}



/* Entry: 108b77c84; end: 108b77cf7;  */

void FUN_108b77c84(undefined8 *param_1)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  func_0x000104bdbf60(&uStack_40,lStack_28 + 0x18);
  iVar1 = (int)lStack_28 + 0x28;
  func_0x00010b9a9518();
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  *(int *)(param_1 + 3) = iVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 108b77cf8; end: 108b77df7;  */

undefined1 * FUN_108b77cf8(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b77df8();
  func_0x000107c30f7c(auStack_68,0x113828420);
  func_0x0001052808e4(auStack_58,param_2);
  uStack_48 = *(undefined4 *)(param_2 + 0x18);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar6 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_60;
  func_0x000104bdbf78();
  FUN_108b77f80(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  __Unwind_Resume(puVar3);
  pcStack_78 = FUN_108b77df8;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828428 & 1) == 0) {
    iVar2 = 0x13828428;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(auStack_d0,&UNK_10f501bc2);
      puVar4 = &UNK_10f501be1;
      func_0x000107c31088(auStack_d8,&UNK_10f501be1);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_c8,auStack_d8,puVar4);
      puVar4 = &UNK_10f501be7;
      func_0x000107c31088(auStack_e0,&UNK_10f501be7);
      FUN_108b77f28();
      func_0x000107c27e98(auStack_b0,auStack_e0,puVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113828418,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x000107c27924(auStack_c8 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      ___cxa_guard_release(0x113828428);
    }
  }
  FUN_108b77f80(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113828418;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328ac20 & 1) == 0) {
    iVar5 = 0x1328ac20;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x11328ac10);
      ___cxa_guard_release(0x11328ac20);
    }
  }
  return (undefined1 *)0x11328ac10;
}



/* Entry: 108b77df8; end: 108b77f27;  */

undefined8 FUN_108b77df8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828428 & 1) == 0) {
    iVar1 = 0x13828428;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f501bc2);
      puVar2 = &UNK_10f501be1;
      func_0x000107c31088(auStack_68,&UNK_10f501be1);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_58,auStack_68,puVar2);
      puVar2 = &UNK_10f501be7;
      func_0x000107c31088(auStack_70,&UNK_10f501be7);
      FUN_108b77f28();
      func_0x000107c27e98(auStack_40,auStack_70,puVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113828418,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      ___cxa_guard_release(0x113828428);
    }
  }
  FUN_108b77f80(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828418;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328ac20 & 1) == 0) {
    iVar1 = 0x1328ac20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328ac10);
      ___cxa_guard_release(0x11328ac20);
    }
  }
  return 0x11328ac10;
}



/* Entry: 108b77f28; end: 108b77f7f;  */

undefined8 FUN_108b77f28(void)

{
  int iVar1;
  
  if ((bRam000000011328ac20 & 1) == 0) {
    iVar1 = 0x1328ac20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328ac10);
      ___cxa_guard_release(0x11328ac20);
    }
  }
  return 0x11328ac10;
}



/* Entry: 108b77f80; end: 108b77f93;  */

void FUN_108b77f80(void)

{
  return;
}



/* Entry: 108b77f94; end: 108b77feb;  */

ulong FUN_108b77f94(void)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  uVar1 = lStack_28 + 0x18;
  func_0x00010b9a9518(uVar1);
  lVar2 = lStack_28 + 0x28;
  func_0x00010b9a9518(lVar2);
  func_0x000104bdbf78(&lStack_28);
  return uVar1 & 0xffffffff | lVar2 << 0x20;
}



/* Entry: 108b77fec; end: 108b7811b;  */

undefined8 FUN_108b77fec(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828440 & 1) == 0) {
    iVar1 = 0x13828440;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f501bf0);
      puVar2 = &UNK_10f501c0d;
      func_0x000107c31088(auStack_68,&UNK_10f501c0d);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_58,auStack_68,puVar2);
      puVar2 = &UNK_10f501c12;
      func_0x000107c31088(auStack_70,&UNK_10f501c12);
      FUN_108b7811c();
      func_0x000107c27e98(auStack_40,auStack_70,puVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113828430,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      ___cxa_guard_release(0x113828440);
    }
  }
  FUN_108b78174(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828430;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328ac38 & 1) == 0) {
    iVar1 = 0x1328ac38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328ac28);
      ___cxa_guard_release(0x11328ac38);
    }
  }
  return 0x11328ac28;
}



/* Entry: 108b7811c; end: 108b78173;  */

undefined8 FUN_108b7811c(void)

{
  int iVar1;
  
  if ((bRam000000011328ac38 & 1) == 0) {
    iVar1 = 0x1328ac38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328ac28);
      ___cxa_guard_release(0x11328ac38);
    }
  }
  return 0x11328ac28;
}



/* Entry: 108b78174; end: 108b78187;  */

void FUN_108b78174(void)

{
  return;
}



/* Entry: 108b78188; end: 108b7822f;  */

uint FUN_108b78188(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lStack_38;
  
  func_0x00010b9a97d0(&lStack_38);
  lVar4 = lStack_38 + 0x18;
  func_0x00010b9a9608(lVar4);
  iVar1 = (int)lStack_38 + 0x28;
  func_0x00010b9a9608();
  iVar2 = (int)lStack_38 + 0x38;
  func_0x00010b9a9608();
  iVar3 = (int)lStack_38 + 0x48;
  func_0x00010b9a9608();
  func_0x000104bdbf78(&lStack_38);
  uVar5 = 0x1000000;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x10000;
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x100;
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  return uVar7 | (uint)lVar4 | uVar6 | uVar5;
}



/* Entry: 108b78230; end: 108b783bb;  */

undefined8 FUN_108b78230(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828458 & 1) == 0) {
    param_1 = 0x113828458;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_90,&UNK_10f501c1f);
      puVar1 = &UNK_10f501c3c;
      func_0x000107c31088(auStack_98,&UNK_10f501c3c);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_88,auStack_98,puVar1);
      puVar1 = &UNK_10f501c42;
      func_0x000107c31088(auStack_a0,&UNK_10f501c42);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_70,auStack_a0,puVar1);
      puVar1 = &UNK_10f501c48;
      func_0x000107c31088(auStack_a8,&UNK_10f501c48);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_58,auStack_a8,puVar1);
      puVar1 = &UNK_10f501c4f;
      func_0x000107c31088(auStack_b0,&UNK_10f501c4f);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_40,auStack_b0,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113828448,auStack_90,0,auStack_88,4);
      lVar3 = 0x48;
      do {
        func_0x000107c27924(auStack_88 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_b0);
      func_0x000107c278f4(auStack_a8);
      func_0x000107c278f4(auStack_a0);
      func_0x000107c278f4(auStack_98);
      func_0x000107c278f4(auStack_90);
      param_1 = 0x113828458;
      ___cxa_guard_release(0x113828458);
    }
  }
  FUN_108b783bc(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828448;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b783bc; end: 108b783cf;  */

void FUN_108b783bc(void)

{
  return;
}



/* Entry: 108b783d0; end: 108b784cf;  */

undefined1 * FUN_108b783d0(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b784d0();
  func_0x000107c30f7c(auStack_68,0x113828468);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  func_0x000105280820(auStack_48,param_2 + 2);
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar6 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_60;
  func_0x000104bdbf78();
  FUN_108b78658(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  __Unwind_Resume(puVar3);
  pcStack_78 = FUN_108b784d0;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828470 & 1) == 0) {
    iVar2 = 0x13828470;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(auStack_d0,&UNK_10f501c5b);
      puVar4 = &UNK_10f501c81;
      func_0x000107c31088(auStack_d8,&UNK_10f501c81);
      FUN_108b78600();
      func_0x000107c27e98(auStack_c8,auStack_d8,puVar4);
      puVar4 = &UNK_10f501c90;
      func_0x000107c31088(auStack_e0,&UNK_10f501c90);
      func_0x000104bf1120();
      func_0x000107c27e98(auStack_b0,auStack_e0,puVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113828460,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x000107c27924(auStack_c8 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      ___cxa_guard_release(0x113828470);
    }
  }
  FUN_108b78658(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113828460;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328ac50 & 1) == 0) {
    iVar5 = 0x1328ac50;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x11328ac40);
      ___cxa_guard_release(0x11328ac50);
    }
  }
  return (undefined1 *)0x11328ac40;
}



/* Entry: 108b784d0; end: 108b785ff;  */

undefined8 FUN_108b784d0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828470 & 1) == 0) {
    iVar1 = 0x13828470;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f501c5b);
      puVar2 = &UNK_10f501c81;
      func_0x000107c31088(auStack_68,&UNK_10f501c81);
      FUN_108b78600();
      func_0x000107c27e98(auStack_58,auStack_68,puVar2);
      puVar2 = &UNK_10f501c90;
      func_0x000107c31088(auStack_70,&UNK_10f501c90);
      func_0x000104bf1120();
      func_0x000107c27e98(auStack_40,auStack_70,puVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113828460,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      ___cxa_guard_release(0x113828470);
    }
  }
  FUN_108b78658(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828460;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328ac50 & 1) == 0) {
    iVar1 = 0x1328ac50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328ac40);
      ___cxa_guard_release(0x11328ac50);
    }
  }
  return 0x11328ac40;
}



/* Entry: 108b78600; end: 108b78657;  */

undefined8 FUN_108b78600(void)

{
  int iVar1;
  
  if ((bRam000000011328ac50 & 1) == 0) {
    iVar1 = 0x1328ac50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328ac40);
      ___cxa_guard_release(0x11328ac50);
    }
  }
  return 0x11328ac40;
}



/* Entry: 108b78658; end: 108b7866b;  */

void FUN_108b78658(void)

{
  return;
}



/* Entry: 108b7866c; end: 108b787df;  */

long * FUN_108b7866c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_328 [16];
  long lStack_318;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined8 uStack_288;
  long lStack_280;
  long *plStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  long lStack_258;
  long lStack_250;
  undefined4 auStack_248 [2];
  undefined2 uStack_240;
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined1 *puStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  long alStack_1b0 [3];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined8 uStack_108;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 uStack_a8;
  undefined2 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b787e0();
  func_0x000107c30f7c(auStack_c8,0x113828480);
  func_0x0001052808e4(auStack_b8,param_2);
  uStack_a8 = *(undefined1 *)(param_2 + 0x18);
  uStack_a0 = 7;
  FUN_108b78a00(auStack_98,param_2 + 0x20);
  func_0x000108b78a14(auStack_88,param_2 + 0x48);
  func_0x000108b78af0(param_2 + 0x70);
  func_0x000108b78af0(param_2 + 0x98);
  func_0x000108b78af0(auStack_b8,param_2 + 0xc0);
  func_0x000104bdb9bc(&lStack_c0,auStack_c8,auStack_b8,7);
  lVar9 = 0x60;
  do {
    func_0x00010b9a8d98(auStack_b8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_c8);
  plVar4 = &lStack_c0;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_c0;
  func_0x000104bdbf78();
  func_0x000108b78af8(uStack_48);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_58;
  lVar8 = -0x70;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_c8);
  plVar4 = plVar2;
  __Unwind_Resume();
  pcStack_d8 = FUN_108b787e0;
  uStack_108 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0;
  puStack_e0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828488 & 1) == 0) {
    plVar4 = (long *)0x113828488;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x000107c31088(auStack_1b8,&UNK_10f501c97);
      puVar5 = &UNK_10f501cb6;
      func_0x000107c31088(auStack_1c0,&UNK_10f501cb6);
      func_0x000104bdbd7c();
      func_0x000107c27e98(alStack_1b0,auStack_1c0,puVar5);
      puVar5 = &UNK_10f501cbd;
      func_0x000107c31088(auStack_1c8,&UNK_10f501cbd);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_198,auStack_1c8,puVar5);
      puVar5 = &UNK_10f501cc9;
      func_0x000107c31088(auStack_1d0,&UNK_10f501cc9);
      FUN_108b78a28();
      func_0x000107c27e98(auStack_180,auStack_1d0,puVar5);
      puVar5 = &UNK_10f501ce0;
      func_0x000107c31088(auStack_1d8,&UNK_10f501ce0);
      FUN_108b78a84();
      func_0x000107c27e98(auStack_168,auStack_1d8,puVar5);
      puVar5 = &UNK_10f501cf0;
      func_0x000107c31088(auStack_1e0,&UNK_10f501cf0);
      FUN_108b784d0();
      func_0x000107c27e98(auStack_150,auStack_1e0,puVar5);
      puVar5 = &UNK_10f501cf6;
      func_0x000107c31088(auStack_1e8,&UNK_10f501cf6);
      FUN_108b784d0();
      func_0x000107c27e98(auStack_138,auStack_1e8,puVar5);
      puVar5 = &UNK_10f501cfc;
      func_0x000107c31088(auStack_1f0,&UNK_10f501cfc);
      FUN_108b784d0();
      func_0x000107c27e98(auStack_120,auStack_1f0,puVar5);
      plVar2 = alStack_1b0;
      uVar7 = 0;
      func_0x000104bdbd44(0x113828478,auStack_1b8,0,alStack_1b0,7);
      lVar8 = 0x90;
      do {
        func_0x000107c27924((long)plVar2 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_1f0);
      func_0x000107c278f4(auStack_1e8);
      func_0x000107c278f4(auStack_1e0);
      func_0x000107c278f4(auStack_1d8);
      func_0x000107c278f4(auStack_1d0);
      func_0x000107c278f4(auStack_1c8);
      func_0x000107c278f4(auStack_1c0);
      func_0x000107c278f4(auStack_1b8);
      plVar4 = (long *)0x113828488;
      ___cxa_guard_release();
      uVar7 = 0xffffffffffffffe8;
    }
  }
  func_0x000108b78af8(uStack_108);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    if ((char)plVar4[4] != '\x01') {
      *(undefined2 *)(extraout_x8 + 1) = 1;
      *extraout_x8 = 0;
      return plVar4;
    }
    pcStack_1f8 = FUN_108b78a00;
    uStack_228 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puStack_220 = auStack_b8;
    lStack_218 = lVar9;
    uStack_210 = uVar7;
    plStack_208 = plVar2;
    ppuStack_200 = &puStack_e0;
    FUN_108b7c82c();
    func_0x000107c30f7c(&lStack_258,0x113828560);
    auStack_248[0] = (undefined4)*plVar4;
    uStack_240 = 4;
    FUN_108b7c95c(auStack_238,plVar4 + 1);
    func_0x000104bdb9bc(&lStack_250,&lStack_258,auStack_248,2);
    lVar9 = 0x10;
    do {
      func_0x00010b9a8d98((long)auStack_248 + lVar9);
      lVar9 = lVar9 + -0x10;
      uVar1 = lVar9 == -0x10;
    } while (!(bool)uVar1);
    func_0x000107c27928(&lStack_258);
    plVar4 = &lStack_250;
    func_0x00010b9a8f60(extraout_x8);
    plVar2 = &lStack_250;
    func_0x000104bdbf78();
    func_0x000108b7cc80(uStack_228);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      puVar3 = auStack_238;
      lVar9 = -0x20;
      do {
        func_0x00010b9a8d98(puVar3);
        iVar6 = (int)plVar4;
        puVar3 = puVar3 + -0x10;
        lVar9 = lVar9 + 0x10;
        uVar1 = lVar9 == 0;
      } while (!(bool)uVar1);
      plVar4 = &lStack_258;
      func_0x000107c27928();
      func_0x000108b7cc64();
      pcStack_268 = FUN_108b7c82c;
      uStack_288 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lStack_280 = lVar9;
      plStack_278 = plVar2;
      pppuStack_270 = &ppuStack_200;
      if ((bRam0000000113828568 & 1) == 0) {
        plVar4 = (long *)0x113828568;
        ___cxa_guard_acquire();
        if ((int)plVar4 != 0) {
          func_0x000107c31088(auStack_2c0,&UNK_10f501f9f);
          puVar5 = &UNK_10f501fc5;
          func_0x000107c31088(auStack_2c8,&UNK_10f501fc5);
          FUN_108b7ca24();
          func_0x000107c27e98(auStack_2b8,auStack_2c8,puVar5);
          puVar5 = &UNK_10f501fcc;
          func_0x000107c31088(auStack_2d0,&UNK_10f501fcc);
          FUN_108b7ca7c();
          func_0x000107c27e98(auStack_2a0,auStack_2d0,puVar5);
          uVar7 = 0;
          func_0x000104bdbd44(0x113828558,auStack_2c0,0,auStack_2b8,2);
          lVar9 = 0x18;
          do {
            func_0x000107c27924(auStack_2b8 + lVar9);
            iVar6 = (int)uVar7;
            lVar9 = lVar9 + -0x18;
            uVar1 = lVar9 == -0x18;
          } while (!(bool)uVar1);
          func_0x000107c278f4(auStack_2d0);
          func_0x000107c278f4(auStack_2c8);
          func_0x000107c278f4(auStack_2c0);
          plVar4 = (long *)0x113828568;
          ___cxa_guard_release();
        }
      }
      func_0x000108b7cc80(uStack_288);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        if (iVar6 == 0) {
          __Unwind_Resume();
        }
        func_0x000104bd46a0();
        func_0x00010b9abe10(&lStack_318,(plVar4[1] - *plVar4) / 0x28);
        lVar8 = 0;
        lVar9 = 0x18;
        for (uVar10 = 0; uVar10 < (ulong)((plVar4[1] - *plVar4) / 0x28); uVar10 = uVar10 + 1) {
          FUN_108b7c388(auStack_328,*plVar4 + lVar8);
          func_0x00010b9a9020(lStack_318 + lVar9,auStack_328);
          func_0x00010b9a8d98(auStack_328);
          lVar9 = lVar9 + 0x10;
          lVar8 = lVar8 + 0x28;
        }
        func_0x00010b9a8f84(extraout_x8_00,&lStack_318);
        plVar4 = &lStack_318;
        func_0x000104bddf38(plVar4);
        return plVar4;
      }
      return (long *)0x113828558;
    }
    return plVar2;
  }
  return (long *)0x113828478;
}


