/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8bb1fc; end: 10a8bb24f;  */

undefined8 FUN_10a8bb1fc(void)

{
  int iVar1;
  
  if ((bRam0000000113835558 & 1) == 0) {
    iVar1 = 0x13835558;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10a8bb1a8(0x113835550);
      ___cxa_guard_release(0x113835558);
    }
  }
  return 0x113835550;
}



/* Entry: 10a8bb250; end: 10a8bb54f;  */

void FUN_10a8bb250(undefined4 *param_1,long *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  long lVar3;
  
  *(undefined4 *)((long)param_1 + 3) = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 7) = 0x10001;
  *(undefined4 *)((long)param_1 + 0xb) = 0x1010101;
  *(undefined2 *)((long)param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  func_0x000107c2b054(param_1 + 6,&UNK_10f67fb58);
  func_0x000107c2b054(param_1 + 0xc,&UNK_10f67fb58);
  func_0x000107c2b054(param_1 + 0x12,&DAT_10f5aca3f);
  func_0x000107c2b054(param_1 + 0x18,"Default");
  func_0x000107c2b054(param_1 + 0x1e,"default");
  param_1[0x24] = 0xffffffff;
  func_0x000107c2b054(param_1 + 0x26,"default");
  puVar1 = (undefined1 *)(*param_2 + 0x260);
  FUN_10a08f69c();
  *(undefined1 *)param_1 = *puVar1;
  pbVar2 = (byte *)(*param_2 + 0x2c0);
  FUN_10a08fec0();
  *(byte *)((long)param_1 + 2) = *pbVar2 >> 1 & 1;
  pbVar2 = (byte *)(*param_2 + 0x2c0);
  FUN_10a08fec0();
  *(byte *)((long)param_1 + 3) = *pbVar2 >> 2 & 1;
  pbVar2 = (byte *)(*param_2 + 0x2c0);
  FUN_10a08fec0();
  *(byte *)((long)param_1 + 1) = *pbVar2 & 1;
  lVar3 = *param_2;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,lVar3);
  lVar3 = *param_2 + 0x98;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xc,lVar3);
  lVar3 = *param_2 + 0x130;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x12,lVar3);
  lVar3 = *param_2 + 0x1c8;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x18,lVar3);
  puVar1 = (undefined1 *)(*param_2 + 0x328);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 5) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x388);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 7) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 1000);
  FUN_10a08f69c();
  *(undefined1 *)(param_1 + 2) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x448);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 9) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x4a8);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 10) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x508);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 0xb) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x568);
  FUN_10a08f69c();
  *(undefined1 *)(param_1 + 3) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x5c8);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 0xd) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x628);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 0xe) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x688);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 0xf) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x748);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 6) = *puVar1;
  lVar3 = *param_2 + 0x7a8;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x1e,lVar3);
  lVar3 = *param_2 + 0x840;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x26,lVar3);
  return;
}



/* Entry: 10a8bb550; end: 10a8bb927;  */

undefined1  [16] FUN_10a8bb550(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f680c4d;
  return auVar1;
}



/* Entry: 10a8bb928; end: 10a8bba43;  */

void FUN_10a8bb928(undefined8 param_1)

{
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f67fb58;
  uStack_88 = 0;
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_70 = 0x91;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a8bba44(param_1,&puStack_a8);
  puStack_b0 = &DAT_10f68001d;
  puStack_a8 = &UNK_10f680004;
  ppuStack_a0 = &puStack_c0;
  uStack_98 = 3;
  puStack_b8 = &DAT_10f680015;
  puStack_c0 = &DAT_10f68000c;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x91;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8e17c8();
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f680027;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f67fb58;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8e1a94(param_1,&puStack_a8);
  FUN_10a8e1c24(param_1);
  return;
}



/* Entry: 10a8bba44; end: 10a8bbb1b;  */

/* WARNING: Removing unreachable block (ram,0x00010a8bbadc) */

undefined1  [16] FUN_10a8bba44(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f680c4d,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8e16cc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8bbb1c; end: 10a8bbc2b;  */

void FUN_10a8bbb1c(undefined8 param_1)

{
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f67fb58;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a8bbc2c(param_1,&puStack_98);
  puStack_a0 = &DAT_10f68001d;
  puStack_98 = &UNK_10f680004;
  ppuStack_90 = &puStack_b0;
  uStack_88 = 3;
  puStack_a8 = &DAT_10f680015;
  puStack_b0 = &DAT_10f68000c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x91;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8e1ddc();
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f680027;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8e2084(param_1,&puStack_98);
  FUN_10a8e21ec(param_1);
  return;
}



/* Entry: 10a8bbc2c; end: 10a8bbd03;  */

/* WARNING: Removing unreachable block (ram,0x00010a8bbcc4) */

undefined1  [16] FUN_10a8bbc2c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f680c59,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8e1ce0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8bbd04; end: 10a8bbe17;  */

void FUN_10a8bbd04(undefined8 param_1)

{
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f67fb58;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a8bbe18(param_1,&puStack_98);
  puStack_a0 = &DAT_10f68001d;
  puStack_98 = &UNK_10f680004;
  ppuStack_90 = &puStack_b0;
  uStack_88 = 3;
  puStack_a8 = &DAT_10f680015;
  puStack_b0 = &DAT_10f68000c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x91;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8e23a4();
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f680027;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8e264c(param_1,&puStack_98);
  FUN_10a8e27b4(param_1);
  return;
}



/* Entry: 10a8bbe18; end: 10a8bbeef;  */

/* WARNING: Removing unreachable block (ram,0x00010a8bbeb0) */

undefined1  [16] FUN_10a8bbe18(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f680c68,4);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8e22a8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8bbef0; end: 10a8bc003;  */

void FUN_10a8bbef0(undefined8 param_1)

{
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f67fb58;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a8bc004(param_1,&puStack_98);
  puStack_a0 = &DAT_10f68001d;
  puStack_98 = &UNK_10f680004;
  ppuStack_90 = &puStack_b0;
  uStack_88 = 3;
  puStack_a8 = &DAT_10f680015;
  puStack_b0 = &DAT_10f68000c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x91;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8e296c();
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f680027;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8e2c60(param_1,&puStack_98);
  FUN_10a8e2dc8(param_1);
  return;
}



/* Entry: 10a8bc004; end: 10a8bc0db;  */

/* WARNING: Removing unreachable block (ram,0x00010a8bc09c) */

undefined1  [16] FUN_10a8bc004(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f680c6d,5);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8e2870(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8bc0dc; end: 10a8bc1f7;  */

void FUN_10a8bc0dc(undefined8 param_1)

{
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f67fb58;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = &UNK_10f67fb58;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a8bc1f8(param_1,&puStack_a8);
  puStack_b0 = &DAT_10f68001d;
  puStack_a8 = &UNK_10f680004;
  ppuStack_a0 = &puStack_c0;
  uStack_98 = 3;
  puStack_b8 = &DAT_10f680015;
  puStack_c0 = &DAT_10f68000c;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x91;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8e2f80();
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f680027;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x91;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8e3274(param_1,&puStack_a8);
  FUN_10a8e33dc(param_1);
  return;
}



/* Entry: 10a8bc1f8; end: 10a8bc2cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a8bc290) */

undefined1  [16] FUN_10a8bc1f8(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f680c73,5);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8e2e84(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8bc2d0; end: 10a8bc55b;  */

void FUN_10a8bc2d0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f680c79,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c28a60;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c28a60;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8bc53c;
    FUN_10a054dac(param_1,&UNK_10f680004,FUN_10a8e3498,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"pitch",FUN_10a8e36f8,FUN_10a8e37b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f680027,FUN_10a8e3924,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f680c79,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a8bc53c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8bc540);
  (*pcVar6)();
}



/* Entry: 10a8bc55c; end: 10a8bc7e7;  */

void FUN_10a8bc55c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f680c86,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c28b48;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c28b48;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8bc7c8;
    FUN_10a054dac(param_1,&UNK_10f680004,FUN_10a8e39d8,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"amount",FUN_10a8e3c38,FUN_10a8e3cf4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f680027,FUN_10a8e3e90,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f680c86,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a8bc7c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8bc7cc);
  (*pcVar6)();
}



/* Entry: 10a8bc7e8; end: 10a8bc9e3;  */

undefined8 * FUN_10a8bc7e8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
  return param_1;
}



/* Entry: 10a8bc9e4; end: 10a8bcacf;  */

void FUN_10a8bc9e4(ulong param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_38 [24];
  
  uVar7 = *param_2;
  uVar6 = param_2[1];
  if (uVar7 == 0 || uVar6 == 0) {
    return;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar7;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  if (SUB168(auVar1 * auVar3,8) == 0) {
    uVar7 = uVar7 * uVar6;
    uVar6 = param_2[2];
    if (uVar7 == 0 || uVar6 == 0) {
      return;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6;
    if (SUB168(auVar2 * auVar4,8) != 0) goto LAB_10a8bca54;
    uVar7 = uVar7 * uVar6;
    if (uVar7 < param_1 || uVar7 - param_1 == 0) {
      if (uVar7 < 0x80001) {
        return;
      }
      FUN_10a0ee900(auStack_38,&UNK_10f680ce9,0x23);
      FUN_10a0029c0(auStack_38);
      goto LAB_10a8bcaac;
    }
  }
  else {
LAB_10a8bca54:
    FUN_10a00946c();
  }
  FUN_10a0ee900(auStack_38,&UNK_10f680cc5,0x23);
  FUN_10a0029c0(auStack_38);
LAB_10a8bcaac:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8bcab0);
  (*pcVar5)();
}



/* Entry: 10a8bcad0; end: 10a8bcbaf;  */

float * FUN_10a8bcad0(ulong *param_1,float *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (((*param_2 < 0.0) || (param_2[1] < 0.0)) || (param_2[2] < 0.0)) {
    FUN_10a0ee900(auStack_38,&UNK_10f680d0d,0x34);
    FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a8bcb88);
    (*pcVar8)();
  }
  uVar12 = (ulong)*param_2;
  uVar13 = (ulong)param_2[1];
  uVar10 = (ulong)param_2[2];
  *param_1 = uVar12;
  param_1[1] = uVar13;
  param_1[2] = uVar10;
  if ((uVar12 != 0 && uVar13 != 0) &&
     ((auVar4._8_8_ = 0, auVar4._0_8_ = uVar12, auVar6._8_8_ = 0, auVar6._0_8_ = uVar13,
      SUB168(auVar4 * auVar6,8) != 0 ||
      (auVar5._8_8_ = 0, auVar5._0_8_ = uVar12 * uVar13, auVar7._8_8_ = 0, auVar7._0_8_ = uVar10,
      (uVar10 != 0 && uVar12 * uVar13 != 0) && SUB168(auVar5 * auVar7,8) != 0)))) {
    pfVar9 = (float *)&UNK_10f6818f4;
    FUN_10a00946c();
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
    __Unwind_Resume();
    uVar16 = param_3[1];
    uVar15 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    plVar14 = *(long **)(pfVar9 + 2);
    *(undefined8 *)(pfVar9 + 2) = uVar16;
    *(undefined8 *)pfVar9 = uVar15;
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    return pfVar9;
  }
  return param_2;
}



/* Entry: 10a8bcbb0; end: 10a8bd863;  */

undefined8 * FUN_10a8bcbb0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
  return param_1;
}



/* Entry: 10a8bd864; end: 10a8be203;  */

void FUN_10a8bd864(long *param_1,long param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  uint uStack_150;
  uint uStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long lStack_118;
  ulong uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 auStack_80 [4];
  
  uVar8 = *param_3 >> 3 & 0x1ff;
  uStack_150 = 0x42ff0000;
  uVar16 = (ulong)&uStack_150 | 8;
  iStack_144 = 0;
  uStack_140 = 0;
  uStack_14c = 0;
  iStack_148 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_124 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  piVar19 = (int *)(param_2 + 0x10);
  iVar4 = *piVar19;
  iVar2 = *(int *)(param_2 + 0x24);
  iVar3 = *(int *)(param_2 + 0x14);
  iVar5 = iVar4 * (uVar8 + 1);
  uVar14 = (ulong)(iVar5 * iVar3);
  lVar12 = *param_1;
  uVar17 = param_1[1] - lVar12;
  uStack_110 = uVar16;
  puStack_108 = &uStack_100;
  if (uVar14 < uVar17 || uVar14 - uVar17 == 0) {
    if (uVar14 < uVar17) {
      param_1[1] = lVar12 + uVar14;
    }
  }
  else {
    func_0x000107c27d58(param_1,uVar14 - uVar17);
    lVar12 = *param_1;
  }
  func_0x00010936ff7c(&uStack_d0,iVar3,iVar4,(uVar8 + 1) * 8 + -8,lVar12,(long)iVar5);
  if (lStack_118 != 0) {
    piVar1 = (int *)(lStack_118 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_150);
    }
  }
  if (0 < (int)uStack_14c) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_14c);
  }
  iStack_148 = (int)lStack_c8;
  iStack_144 = (int)((ulong)lStack_c8 >> 0x20);
  uStack_150 = (uint)uStack_d0;
  uStack_138 = (undefined4)uStack_b8;
  uStack_134 = (undefined4)((ulong)uStack_b8 >> 0x20);
  uStack_140 = (undefined4)uStack_c0;
  uStack_13c = (undefined4)((ulong)uStack_c0 >> 0x20);
  uStack_128 = (undefined4)uStack_a8;
  uStack_124 = (undefined4)((ulong)uStack_a8 >> 0x20);
  uStack_130 = (undefined4)uStack_b0;
  uStack_12c = (undefined4)((ulong)uStack_b0 >> 0x20);
  lStack_118 = lStack_98;
  uStack_120 = (undefined4)uStack_a0;
  uStack_11c = (undefined4)((ulong)uStack_a0 >> 0x20);
  uStack_14c = uStack_d0._4_4_;
  uVar14 = uStack_110;
  puVar15 = puStack_108;
  if ((puStack_108 != &uStack_100) &&
     (uVar14 = uVar16, puVar15 = &uStack_100, puStack_108 != (undefined8 *)0x0)) {
    _free(puStack_108[-1]);
  }
  puStack_108 = puVar15;
  uStack_110 = uVar14;
  if ((int)uStack_d0._4_4_ < 3) {
    puVar15 = (undefined8 *)((ulong)&uStack_d0 | 4);
    *puStack_108 = *puStack_88;
    puStack_108[1] = puStack_88[1];
    uStack_d0 = (undefined *)CONCAT44(uStack_d0._4_4_,0x42ff0000);
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    *(undefined8 *)((long)puVar15 + 0x34) = 0;
    *(undefined8 *)((long)puVar15 + 0x2c) = 0;
    if (puStack_88 != auStack_80) {
      _free(puStack_88[-1]);
    }
  }
  else {
    uStack_110 = uStack_90;
    puStack_108 = puStack_88;
  }
  if (uVar8 < 2) {
    if (uVar8 == 0) {
      if (iVar2 == 1) {
        uStack_b8 = CONCAT44(uStack_13c,uStack_140);
        uStack_c0 = *puStack_108;
        uStack_d0 = (undefined *)(long)iStack_148;
        lStack_c8 = (long)iStack_144;
        uStack_d8 = *(undefined8 *)(param_2 + 0x28);
        lStack_e8 = (long)*(int *)(param_2 + 0x10);
        lStack_f0 = (long)*(int *)(param_2 + 0x14);
        uStack_e0 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010a1b5fcc(&uStack_d0,&lStack_f0);
      }
      else {
        if (iVar2 != 5) {
          if (iVar2 != 7) {
            uVar10 = 1;
            goto LAB_10a8be1a4;
          }
          FUN_10a0f3910(&uStack_d0,piVar19,0);
          if (lStack_118 != 0) {
            piVar19 = (int *)(lStack_118 + 0x14);
            do {
              iVar2 = *piVar19;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar7) {
                *piVar19 = iVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_150);
            }
          }
          if (0 < (int)uStack_14c) {
            lVar12 = 0;
            do {
              *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < (int)uStack_14c);
          }
          goto LAB_10a8bdcc4;
        }
        uStack_b8 = CONCAT44(uStack_13c,uStack_140);
        uStack_c0 = *puStack_108;
        uStack_d0 = (undefined *)(long)iStack_148;
        lStack_c8 = (long)iStack_144;
        uStack_d8 = *(undefined8 *)(param_2 + 0x28);
        lStack_e8 = (long)*(int *)(param_2 + 0x10);
        lStack_f0 = (long)*(int *)(param_2 + 0x14);
        uStack_e0 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010a1b6160(&uStack_d0,&lStack_f0);
      }
    }
    else if (uVar8 == 1) {
      if (iVar2 == 1) {
        uVar10 = *puStack_108;
        uStack_b8 = *(undefined8 *)(param_2 + 0x28);
        iVar2 = *(int *)(param_2 + 0x10);
        iVar3 = *(int *)(param_2 + 0x14);
        uStack_c0 = *(undefined8 *)(param_2 + 0x18);
        uVar11 = 0x100000000;
      }
      else {
        if (iVar2 != 5) {
          if (iVar2 != 9) {
            uVar10 = 2;
            goto LAB_10a8be1a4;
          }
          FUN_10a0f3910(&uStack_d0,piVar19,0);
          if (lStack_118 != 0) {
            piVar19 = (int *)(lStack_118 + 0x14);
            do {
              iVar2 = *piVar19;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar7) {
                *piVar19 = iVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_150);
            }
          }
          if (0 < (int)uStack_14c) {
            lVar12 = 0;
            do {
              *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < (int)uStack_14c);
          }
          goto LAB_10a8bdcc4;
        }
        uVar10 = *puStack_108;
        uStack_b8 = *(undefined8 *)(param_2 + 0x28);
        iVar2 = *(int *)(param_2 + 0x10);
        iVar3 = *(int *)(param_2 + 0x14);
        uStack_c0 = *(undefined8 *)(param_2 + 0x18);
        uVar11 = 0x100000002;
      }
      lStack_c8 = (long)iVar2;
      uStack_d0 = (undefined *)(long)iVar3;
      FUN_10a1bb478(uVar10,CONCAT44(uStack_13c,uStack_140),&uStack_d0,uVar11);
    }
    else {
LAB_10a8bdb08:
      FUN_10a0f3910(&uStack_d0,piVar19,0);
      if (lStack_118 != 0) {
        piVar19 = (int *)(lStack_118 + 0x14);
        do {
          iVar2 = *piVar19;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar7) {
            *piVar19 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_150);
        }
      }
      if (0 < (int)uStack_14c) {
        lVar12 = 0;
        do {
          *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_14c);
      }
LAB_10a8bdcc4:
      iStack_148 = (int)lStack_c8;
      iStack_144 = (int)((ulong)lStack_c8 >> 0x20);
      uStack_150 = (uint)uStack_d0;
      uStack_138 = (undefined4)uStack_b8;
      uStack_134 = (undefined4)((ulong)uStack_b8 >> 0x20);
      uStack_140 = (undefined4)uStack_c0;
      uStack_13c = (undefined4)((ulong)uStack_c0 >> 0x20);
      uStack_128 = (undefined4)uStack_a8;
      uStack_124 = (undefined4)((ulong)uStack_a8 >> 0x20);
      uStack_130 = (undefined4)uStack_b0;
      uStack_12c = (undefined4)((ulong)uStack_b0 >> 0x20);
      lStack_118 = lStack_98;
      uStack_120 = (undefined4)uStack_a0;
      uStack_11c = (undefined4)((ulong)uStack_a0 >> 0x20);
      uStack_14c = uStack_d0._4_4_;
      uVar14 = uStack_110;
      puVar15 = puStack_108;
      if ((puStack_108 != &uStack_100) &&
         (uVar14 = uVar16, puVar15 = &uStack_100, puStack_108 != (undefined8 *)0x0)) {
        _free(puStack_108[-1]);
      }
      puStack_108 = puVar15;
      uStack_110 = uVar14;
      if ((int)uStack_d0._4_4_ < 3) {
        puVar15 = (undefined8 *)((ulong)&uStack_d0 | 4);
        *puStack_108 = *puStack_88;
        puStack_108[1] = puStack_88[1];
        uStack_d0 = (undefined *)CONCAT44(uStack_d0._4_4_,0x42ff0000);
        puVar15[1] = 0;
        *puVar15 = 0;
        puVar15[3] = 0;
        puVar15[2] = 0;
        puVar15[5] = 0;
        puVar15[4] = 0;
        *(undefined8 *)((long)puVar15 + 0x34) = 0;
        *(undefined8 *)((long)puVar15 + 0x2c) = 0;
        if (puStack_88 != auStack_80) {
          _free(puStack_88[-1]);
        }
      }
      else {
        uStack_110 = uStack_90;
        puStack_108 = puStack_88;
      }
    }
  }
  else if (uVar8 == 2) {
    if (iVar2 == 1) {
      uVar10 = *puStack_108;
      uStack_b8 = *(undefined8 *)(param_2 + 0x28);
      iVar2 = *(int *)(param_2 + 0x10);
      iVar3 = *(int *)(param_2 + 0x14);
      uStack_c0 = *(undefined8 *)(param_2 + 0x18);
      uVar11 = 0x100000000;
      uVar13 = 2;
    }
    else {
      if (iVar2 != 5) {
        if (iVar2 != 3) {
          uVar10 = 3;
          goto LAB_10a8be1a4;
        }
        FUN_10a0f3910(&uStack_d0,piVar19,0);
        if (lStack_118 != 0) {
          piVar19 = (int *)(lStack_118 + 0x14);
          do {
            iVar2 = *piVar19;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar7) {
              *piVar19 = iVar2 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_150);
          }
        }
        if (0 < (int)uStack_14c) {
          lVar12 = 0;
          do {
            *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uStack_14c);
        }
        goto LAB_10a8bdcc4;
      }
      uVar10 = *puStack_108;
      uStack_b8 = *(undefined8 *)(param_2 + 0x28);
      iVar2 = *(int *)(param_2 + 0x10);
      iVar3 = *(int *)(param_2 + 0x14);
      uStack_c0 = *(undefined8 *)(param_2 + 0x18);
      uVar11 = 0x100000002;
      uVar13 = 0;
    }
    lStack_c8 = (long)iVar2;
    uStack_d0 = (undefined *)(long)iVar3;
    FUN_10a1bb1dc(uVar10,CONCAT44(uStack_13c,uStack_140),&uStack_d0,uVar11,uVar13);
  }
  else {
    if (uVar8 != 3) goto LAB_10a8bdb08;
    if (iVar2 == 1) {
      FUN_10a0f3910(&uStack_d0,piVar19,0);
      if (lStack_118 != 0) {
        piVar19 = (int *)(lStack_118 + 0x14);
        do {
          iVar2 = *piVar19;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar7) {
            *piVar19 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_150);
        }
      }
      if (0 < (int)uStack_14c) {
        lVar12 = 0;
        do {
          *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_14c);
      }
      goto LAB_10a8bdcc4;
    }
    if (iVar2 != 5) {
      uVar10 = 4;
LAB_10a8be1a4:
      FUN_10a8d43f8(iVar2,uVar10);
      goto LAB_10a8be1ac;
    }
    uStack_b8 = *(undefined8 *)(param_2 + 0x28);
    lStack_c8 = (long)*(int *)(param_2 + 0x10);
    uStack_d0 = (undefined *)(long)*(int *)(param_2 + 0x14);
    uStack_c0 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010a0dbb94(*puStack_108,CONCAT44(uStack_13c,uStack_140),&uStack_d0,0x100000002,
                        0x300000000);
  }
  uStack_d0 = &UNK_10f680f19;
  lStack_c8 = 0x15;
  if ((uStack_150 & 7) == 0) {
    uStack_d0 = &UNK_10f680f2f;
    lStack_c8 = 0x15;
    if ((*param_3 & 7) == 5) {
      uStack_d0 = &UNK_10f680f45;
      lStack_c8 = 0x1b;
      if ((uStack_150 >> 0xe & 1) != 0) {
        uStack_d0 = &UNK_10f680f61;
        lStack_c8 = 0x1b;
        if ((*param_3 >> 0xe & 1) != 0) {
          uVar8 = param_3[1];
          uVar14 = (ulong)uVar8;
          if ((int)uVar8 < 3) {
            lVar12 = (long)(int)param_3[3] * (long)(int)param_3[2];
            if (0 < (int)uVar8) goto LAB_10a8bdf5c;
            lVar18 = 0;
          }
          else {
            lVar12 = 1;
            piVar19 = *(int **)(param_3 + 0x10);
            uVar16 = uVar14;
            do {
              lVar12 = lVar12 * *piVar19;
              uVar16 = uVar16 - 1;
              piVar19 = piVar19 + 1;
            } while (uVar16 != 0);
LAB_10a8bdf5c:
            lVar18 = *(long *)(*(long *)(param_3 + 0x12) + uVar14 * 8 + -8);
          }
          if ((ulong)((long)(int)(iStack_144 * ((uStack_150 >> 3 & 0x1ff) + 1) * iStack_148) << 2)
              <= (ulong)(lVar18 * lVar12)) {
            FUN_10a19bf48(CONCAT44(uStack_13c,uStack_140));
            if (lStack_118 != 0) {
              piVar19 = (int *)(lStack_118 + 0x14);
              do {
                iVar2 = *piVar19;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                if (bVar7) {
                  *piVar19 = iVar2 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&uStack_150);
              }
            }
            lStack_118 = 0;
            uStack_138 = 0;
            uStack_134 = 0;
            uStack_140 = 0;
            uStack_13c = 0;
            uStack_128 = 0;
            uStack_124 = 0;
            uStack_130 = 0;
            uStack_12c = 0;
            if (0 < (int)uStack_14c) {
              lVar12 = 0;
              do {
                *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < (int)uStack_14c);
            }
            if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
              _free(puStack_108[-1]);
            }
            return;
          }
          uVar17 = (ulong)uStack_14c;
          uVar16 = uVar17;
          if (2 < (int)uStack_14c) {
            do {
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            do {
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          uVar16 = uVar14;
          if (2 < (int)uVar8) {
            do {
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            do {
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          FUN_10a0ee900(&uStack_d0,&UNK_10f680f7d,0xec);
          FUN_10a1084cc(&uStack_d0);
          goto LAB_10a8be1ac;
        }
      }
    }
  }
  FUN_10a0edfc4(&uStack_d0,*(undefined8 *)(param_3 + 4));
LAB_10a8be1ac:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a8be1b0);
  (*pcVar9)();
}



/* Entry: 10a8be204; end: 10a8c05bb;  */

void FUN_10a8be204(long param_1,undefined1 *param_2,float *param_3,undefined8 *param_4,long *param_5
                  ,ulong *param_6,int param_7,ulong param_8,byte param_9)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  mach_header *pmVar8;
  long *plVar9;
  mach_header *pmVar10;
  undefined **ppuVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  mach_header *pmVar29;
  long *plVar30;
  ulong uVar31;
  undefined8 *puVar32;
  uint uVar33;
  long lVar34;
  undefined8 *puVar35;
  dword dVar36;
  uint uVar37;
  long lVar38;
  dword dVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  undefined4 uVar52;
  long lVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  dword dStack_640;
  dword dStack_63c;
  uint uStack_638;
  undefined4 uStack_634;
  long *plStack_630;
  long *plStack_628;
  long lStack_620;
  long lStack_618;
  undefined8 *puStack_610;
  long *plStack_608;
  undefined8 uStack_600;
  long *plStack_5f8;
  undefined1 *puStack_5f0;
  long *plStack_5e8;
  mach_header *pmStack_5e0;
  long *plStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long *plStack_5b8;
  long *plStack_5b0;
  undefined1 auStack_5a0 [32];
  undefined8 uStack_580;
  long *plStack_578;
  undefined4 uStack_564;
  undefined1 auStack_560 [4];
  undefined1 auStack_55c [4];
  undefined1 auStack_558 [4];
  undefined1 auStack_554 [4];
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  int iStack_538;
  undefined4 uStack_534;
  int iStack_530;
  uint uStack_52c;
  ulong auStack_528 [75];
  undefined1 auStack_2d0 [4];
  undefined1 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_284;
  undefined8 *puStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined *puStack_230;
  undefined8 uStack_228;
  dword *pdStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [24];
  char cStack_1f8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar41 = *(undefined8 *)(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 200);
  __ZNSt3__115recursive_mutex4lockEv();
  FUN_10a012fec(&pmStack_5e0,*(undefined8 *)(param_1 + 0x78),uVar41);
  puStack_5f0 = (undefined1 *)0x0;
  plStack_5e8 = (long *)0x0;
  if ((*(char *)((long)param_3 + 0x15) == '\x01') &&
     (((param_9 & 1) != 0 || (*(uint *)(param_2 + 0x30) < 2)))) {
    pmVar8 = pmStack_5e0;
    (**(code **)(*(long *)pmStack_5e0 + 0x48))();
    (**(code **)(*(long *)pmVar8 + 0x48))();
    uStack_548 = *(ulong *)(param_2 + 0x3c);
    uStack_550 = *(ulong *)(param_2 + 0x34);
    _auStack_558 = *(long **)(param_2 + 0x2c);
    _auStack_560 = *(mach_header **)(param_2 + 0x24);
    uStack_540 = *(long *)(param_2 + 0x44);
    iStack_538 = (int)*(undefined8 *)(param_2 + 0x4c);
    uStack_534 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x4c) >> 0x20);
    iStack_530 = *(int *)(param_2 + 0x54);
    uStack_580 = *(undefined8 **)(param_2 + 0x24);
    plStack_578._0_4_ = *(undefined4 *)(param_2 + 0x2c);
    if (((uint)uStack_550 & 0xfffffffe) == 2) {
      plStack_578._0_4_ = 1;
    }
    uVar52 = SUB84(&uStack_580,0);
    func_0x000109296754();
    _auStack_558 = (long *)CONCAT44(uVar52,auStack_558);
    lVar14 = *(long *)(param_1 + 0xe0);
    __ZNSt3__15mutex4lockEv(lVar14 + 0x40);
    func_0x000109298088(lVar14);
    __ZNSt3__15mutex6unlockEv(lVar14 + 0x40);
    func_0x0001092967ec(&uStack_250,*(undefined8 *)(param_1 + 0xe0),auStack_560);
    plStack_5e8 = (long *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
    puVar5 = (undefined1 *)CONCAT44(uStack_250._4_4_,(uint)uStack_250);
    uStack_248._4_4_ = 0;
    uStack_240 = 0;
    uStack_250._4_4_ = 0;
    uStack_248._0_4_ = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    puStack_230 = (undefined *)_auStack_560;
    uStack_228 = CONCAT44(uStack_228._4_4_,auStack_558);
    uStack_234 = 0;
    uStack_250._0_4_ = 0;
    puStack_5f0 = puVar5;
    if (puVar5 != (undefined1 *)0x0) {
      if (*(int *)(puVar5 + 0x34) == 3) {
        uVar17 = *(int *)(puVar5 + 0x2c) * 6;
      }
      else if (*(int *)(puVar5 + 0x34) == 2) {
        uVar17 = *(uint *)(puVar5 + 0x2c);
      }
      else {
        uVar17 = 1;
      }
      uStack_5c8 = (long *)0x700000000;
      uStack_5d0 = (undefined8 *)0x40000000000;
      plStack_5b8 = (long *)((ulong)*(uint *)(puVar5 + 0x30) << 0x20);
      plStack_5b0 = (long *)((ulong)uVar17 << 0x20);
      (**(code **)(*(long *)pmVar8 + 0x38))(pmVar8,1,0x100,0,0,0,0,0,&uStack_5d0,1);
    }
    if (*(int *)(param_2 + 0x34) == 3) {
      uVar17 = *(int *)(param_2 + 0x2c) * 6;
    }
    else if (*(int *)(param_2 + 0x34) == 2) {
      uVar17 = *(uint *)(param_2 + 0x2c);
    }
    else {
      uVar17 = 1;
    }
    uStack_5c8 = (long *)0x600000005;
    uStack_5d0 = (undefined8 *)0x20000000008;
    plStack_5b8 = (long *)((ulong)*(uint *)(param_2 + 0x30) << 0x20);
    plStack_5b0 = (long *)((ulong)uVar17 << 0x20);
    uStack_5c0 = param_2;
    (**(code **)(*(long *)pmVar8 + 0x38))(pmVar8,8,0x100,0,0,0,0,0,&uStack_5d0,1);
    (**(code **)(*(long *)pmVar8 + 0x70))(pmVar8,param_2,puVar5,&uStack_250,1,6,7);
    if (*(int *)(param_2 + 0x34) == 3) {
      uVar17 = *(int *)(param_2 + 0x2c) * 6;
    }
    else if (*(int *)(param_2 + 0x34) == 2) {
      uVar17 = *(uint *)(param_2 + 0x2c);
    }
    else {
      uVar17 = 1;
    }
    uStack_5c8 = (long *)0x500000006;
    uStack_5d0 = (undefined8 *)0x800000200;
    plStack_5b8 = (long *)((ulong)*(uint *)(param_2 + 0x30) << 0x20);
    plStack_5b0 = (long *)((ulong)uVar17 << 0x20);
    uStack_5c0 = param_2;
    (**(code **)(*(long *)pmVar8 + 0x38))(pmVar8,0x100,8,0,0,0,0,0,&uStack_5d0,1);
    (**(code **)(*(long *)pmVar8 + 0x78))(pmVar8,puVar5,7,5);
    (**(code **)(*(long *)pmVar8 + 0x40))(pmVar8);
    param_2 = puVar5;
  }
  pmVar8 = pmStack_5e0;
  (**(code **)(*(long *)pmStack_5e0 + 0x40))();
  uStack_600 = 0;
  plStack_5f8 = (long *)0x0;
  puStack_610 = (undefined8 *)0x0;
  plStack_608 = (long *)0x0;
  lVar14 = *(long *)(param_1 + 0x78);
  if ((*(byte *)(lVar14 + 0x5c) & 1) == 0) {
    uVar52 = 0;
    if (param_7 == 0) {
      uVar52 = 2;
    }
    uVar41 = *(undefined8 *)(param_8 + 0x18);
    uVar17 = *(uint *)(param_8 + 0x40);
    uVar18 = 0;
    if (param_7 == 0) {
      uVar18 = 0x200000000;
    }
    puVar32 = (undefined8 *)(uVar18 | uVar17);
    lVar34 = param_1;
    _auStack_560 = (mach_header *)puVar32;
    FUN_10a0eb2bc(param_1,auStack_560);
    if (lVar34 == 0) {
      func_0x000109296b10(auStack_560,uVar41,(ulong)uVar17,1,uVar52,1,0,0,0,0x500000002);
      uStack_250 = &uStack_5d0;
      lVar34 = param_1;
      uStack_5d0 = puVar32;
      FUN_10a0eb384(param_1,&uStack_5d0,&UNK_10dd5b8f9,&uStack_250,&uStack_580);
      FUN_10a0e4ff4(lVar34 + 0x18,auStack_560);
      plVar9 = _auStack_558;
      if (_auStack_558 != (long *)0x0) {
        plVar30 = _auStack_558 + 1;
        do {
          lVar34 = *plVar30;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar7) {
            *plVar30 = lVar34 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*_auStack_558 + 0x10))(_auStack_558);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      uStack_250._4_4_ = (undefined4)(uVar18 >> 0x20);
      _auStack_560 = (mach_header *)&uStack_250;
      lVar34 = param_1;
      uStack_250._0_4_ = uVar17;
      FUN_10a0eb384(param_1,&uStack_250,&UNK_10dd5b8f9,auStack_560,&uStack_5d0);
    }
    FUN_10a15e154(&uStack_600,lVar34 + 0x18);
    func_0x000109296cdc(auStack_560,*(undefined8 *)(param_1 + 0x78),uStack_600,param_8);
    plStack_608 = _auStack_558;
    puStack_610 = (undefined8 *)_auStack_560;
    auStack_528[0x1e] = 0;
    auStack_528[0x1d] = 0;
    auStack_528[0x20] = 0;
    auStack_528[0x1a] = 0;
    auStack_528[0x19] = 0;
    auStack_528[0x1c] = 0;
    auStack_528[0x1b] = 0;
    auStack_528[0x16] = 0;
    auStack_528[0x15] = 0;
    auStack_528[0x18] = 0;
    auStack_528[0x17] = 0;
    auStack_528[0x12] = 0;
    auStack_528[0x11] = 0;
    auStack_528[0x14] = 0;
    auStack_528[0x13] = 0;
    auStack_528[0xe] = 0;
    auStack_528[0xd] = 0;
    auStack_528[0x10] = 0;
    auStack_528[0xf] = 0;
    auStack_528[10] = 0;
    auStack_528[9] = 0;
    auStack_528[0xc] = 0;
    auStack_528[0xb] = 0;
    auStack_528[6] = 0;
    auStack_528[5] = 0;
    auStack_528[8] = 0;
    auStack_528[7] = 0;
    auStack_528[2] = 0;
    auStack_528[1] = 0;
    auStack_528[4] = 0;
    auStack_528[3] = 0;
    iStack_538 = 0;
    uStack_534 = 0;
    uStack_540 = 0;
    auStack_528[0] = 0;
    iStack_530 = 0;
    uStack_52c = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    auStack_528[0x21] = 0xffffffffffffffff;
    auStack_528[0x23] = 0;
    auStack_528[0x22] = 0;
    auStack_528[0x25] = 0;
    auStack_528[0x24] = 0;
    auStack_528[0x27] = 0;
    auStack_528[0x26] = 0;
    auStack_528[0x29] = 0;
    auStack_528[0x28] = 0;
    auStack_528[0x2b] = 0;
    auStack_528[0x2a] = 0;
    auStack_528[0x2d] = 0;
    auStack_528[0x2c] = 0;
    auStack_528[0x2f] = 0;
    auStack_528[0x2e] = 0;
    auStack_528[0x31] = 0;
    auStack_528[0x30] = 0;
    auStack_528[0x33] = 0;
    auStack_528[0x32] = 0;
    auStack_528[0x34] = 0;
    bVar7 = (char)param_6[2] == '\x01';
    if (bVar7) {
      uStack_548 = param_6[1];
      uStack_550 = *param_6;
    }
    auStack_528[0x1f] = (ulong)bVar7;
    _auStack_558 = (long *)_auStack_560;
    _auStack_560 = (mach_header *)uStack_600;
    (**(code **)(*(long *)pmVar8 + 0x48))(pmVar8,auStack_560);
  }
  else {
    _auStack_560 = (mach_header *)CONCAT44(auStack_55c,1);
    uStack_2cc = 0;
    uStack_284 = 0;
    puStack_280 = (undefined8 *)0x0;
    _bzero((ulong)auStack_560 | 4,0x28d);
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2b0 = 0;
    uStack_2b8 = 0;
    uStack_288 = 0;
    plStack_278 = (long *)0xffffffffffffffff;
    uStack_52c = 0;
    uStack_540 = 0;
    uStack_548 = 0;
    auStack_528[1] = 0;
    auStack_528[0] = 0;
    auStack_528[2] = 0;
    auStack_528[0x42] = 1;
    iStack_538 = 0;
    if (param_7 == 0) {
      iStack_538 = 2;
    }
    uStack_550 = uStack_550 & 0xffffffff;
    uStack_534 = 1;
    iStack_530 = 2;
    if ((char)param_6[2] == '\x01') {
      auStack_528[1] = param_6[1];
      auStack_528[0] = *param_6;
    }
    pmVar10 = pmStack_5e0;
    _auStack_558 = (long *)param_8;
    (**(code **)(*(long *)pmStack_5e0 + 0x48))();
    (**(code **)(*(long *)pmVar10 + 0x48))();
    uVar52 = 5;
    if (iStack_538 != 1) {
      uVar52 = 0;
    }
    if (param_8 != 0) {
      if (*(int *)(param_8 + 0x34) == 3) {
        uVar17 = *(int *)(param_8 + 0x2c) * 6;
      }
      else if (*(int *)(param_8 + 0x34) == 2) {
        uVar17 = *(uint *)(param_8 + 0x2c);
      }
      else {
        uVar17 = 1;
      }
      uStack_250._0_4_ = 0x48;
      uStack_250._4_4_ = 0x60;
      uStack_248._4_4_ = 2;
      uStack_240 = (undefined4)param_8;
      uStack_23c = (undefined4)(param_8 >> 0x20);
      uStack_234 = *(undefined4 *)(param_8 + 0x30);
      uStack_238 = 0;
      puStack_230 = (undefined *)((ulong)uVar17 << 0x20);
      uStack_248._0_4_ = uVar52;
      (**(code **)(*(long *)pmVar10 + 0x38))(pmVar10,0x48,0x40,0,0,0,0,0,&uStack_250,1);
    }
    (**(code **)(*(long *)pmVar10 + 0x40))(pmVar10);
    (**(code **)(*(long *)pmVar8 + 0x50))(pmVar8,auStack_560);
  }
  fVar54 = *(float *)(param_4 + 1);
  fVar47 = *(float *)((long)param_4 + 0x14);
  fVar55 = *(float *)(param_4 + 4);
  uVar41 = *param_4;
  uVar50 = *(undefined8 *)((long)param_4 + 0xc);
  uVar42 = param_4[3];
  lVar53 = *param_5;
  lVar34 = param_5[1];
  lVar43 = *(long *)((long)param_5 + 0xc);
  uVar52 = *(undefined4 *)((long)param_5 + 0x14);
  lVar44 = param_5[3];
  lVar38 = param_5[4];
  lStack_618 = *(long *)(param_3 + 2);
  lStack_620 = *(long *)param_3;
  fVar48 = param_3[6];
  plVar9 = *(long **)(param_1 + 0x78);
  _auStack_558 = (long *)0x600000004;
  _auStack_560 = (mach_header *)0x80;
  func_0x00010a08f1bc();
  uStack_248 = (long *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
  if ((*(byte *)(*plVar9 + 0x440) & 1) == 0) goto LAB_10a8c0398;
  puVar32 = (undefined8 *)(*plVar9 + 0x170);
  func_0x00010a155750();
  FUN_10a1af024(*puVar32);
  FUN_10a1af068(&plStack_630,*puVar32,auStack_560);
  plVar9 = plStack_630;
  (**(code **)(*plStack_630 + 0x30))(plStack_630,2,0,0);
  fVar49 = (float)uVar50;
  fVar51 = (float)((ulong)uVar50 >> 0x20);
  fVar56 = (float)uVar41;
  fVar57 = (float)((ulong)uVar41 >> 0x20);
  fVar58 = (float)uVar42;
  fVar59 = (float)((ulong)uVar42 >> 0x20);
  fVar45 = fVar49 * 0.5;
  fVar46 = fVar51 * 0.5;
  fVar40 = fVar47 * 0.5;
  *plVar9 = CONCAT44(fVar51 * 0.0 + fVar57 * 0.5 + fVar59 * 0.0,
                     fVar49 * 0.0 + fVar56 * 0.5 + fVar58 * 0.0);
  *(float *)(plVar9 + 1) = fVar47 * 0.0 + fVar54 * 0.5 + fVar55 * 0.0;
  *(undefined4 *)((long)plVar9 + 0xc) = 0;
  plVar9[2] = CONCAT44(fVar46 + fVar57 * 0.0 + fVar59 * 0.0,fVar45 + fVar56 * 0.0 + fVar58 * 0.0);
  *(float *)(plVar9 + 3) = fVar40 + fVar54 * 0.0 + fVar55 * 0.0;
  *(undefined4 *)((long)plVar9 + 0x1c) = 0;
  *(float *)(plVar9 + 4) = fVar45 + fVar56 * 0.5 + fVar58;
  *(float *)((long)plVar9 + 0x24) = fVar46 + fVar57 * 0.5 + fVar59;
  *(float *)(plVar9 + 5) = fVar40 + fVar54 * 0.5 + fVar55;
  *(undefined4 *)((long)plVar9 + 0x2c) = 0;
  plVar9[6] = lVar53;
  *(int *)(plVar9 + 7) = (int)lVar34;
  *(undefined4 *)((long)plVar9 + 0x3c) = 0;
  plVar9[8] = lVar43;
  *(undefined4 *)(plVar9 + 9) = uVar52;
  *(undefined4 *)((long)plVar9 + 0x4c) = 0;
  plVar9[10] = lVar44;
  *(int *)(plVar9 + 0xb) = (int)lVar38;
  *(undefined4 *)((long)plVar9 + 0x5c) = 0;
  plVar9[0xd] = lStack_618;
  plVar9[0xc] = lStack_620;
  *(float *)(plVar9 + 0xe) = (float)(int)fVar48;
  (**(code **)(*plStack_630 + 0x38))();
  uVar17 = *(uint *)(param_2 + 0x24) - 1;
  if ((uVar17 < (*(uint *)(param_2 + 0x24) ^ uVar17)) &&
     (uVar17 = *(uint *)(param_2 + 0x28), uVar17 != 0)) {
    bVar7 = (uVar17 & uVar17 - 1) == 0;
  }
  else {
    bVar7 = false;
  }
  lVar34 = param_1;
  FUN_10a8c05bc(param_1,*(undefined1 *)((long)param_3 + 0x12),param_3,bVar7);
  lVar43 = param_1;
  FUN_10a8c05bc(param_1,*(undefined1 *)((long)param_3 + 0x13),param_3,bVar7);
  lVar44 = param_1;
  FUN_10a8c05bc(param_1,*(undefined1 *)(param_3 + 5),param_3,bVar7);
  lVar38 = 0x9e3779b9;
  dVar39 = (dword)lVar34;
  dVar36 = (dword)lVar43;
  uStack_638 = (uint)(*(byte *)((long)param_3 + 0x15) & param_3[6] != 0.0);
  plVar9 = (long *)(param_1 + 0x50);
  lVar34 = lVar38;
  if (uStack_638 != 0) {
    lVar34 = 0x9e3779ba;
  }
  uVar18 = *(ulong *)(param_1 + 0x58);
  dStack_640 = dVar39;
  dStack_63c = dVar36;
  if (uVar18 != 0) {
    uVar25 = (long)(int)dVar39 + 0x9e3779b9;
    uVar25 = (long)(int)dVar36 + uVar25 * 0x40 + (uVar25 >> 2) + 0x9e3779b9 ^ uVar25;
    uVar25 = lVar34 + uVar25 * 0x40 + (uVar25 >> 2) ^ uVar25;
    uVar26 = uVar18 - 1;
    if ((uVar18 & uVar26) == 0) {
      uVar28 = uVar25 & uVar26;
    }
    else {
      uVar28 = uVar25;
      if (uVar18 <= uVar25) {
        uVar28 = 0;
        if (uVar18 != 0) {
          uVar28 = uVar25 / uVar18;
        }
        uVar28 = uVar25 - uVar28 * uVar18;
      }
    }
    plVar30 = *(long **)(*plVar9 + uVar28 * 8);
    if (plVar30 != (long *)0x0) {
      for (plVar30 = (long *)*plVar30; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
        uVar31 = plVar30[1];
        if (uVar31 == uVar25) {
          if ((*(dword *)(plVar30 + 2) == dVar39 && *(dword *)((long)plVar30 + 0x14) == dVar36) &&
             (*(byte *)(plVar30 + 3) == uStack_638)) {
            puVar32 = (undefined8 *)plVar30[4];
            goto LAB_10a8bf604;
          }
        }
        else {
          if ((uVar18 & uVar26) == 0) {
            uVar31 = uVar31 & uVar26;
          }
          else if (uVar18 <= uVar31) {
            uVar4 = 0;
            if (uVar18 != 0) {
              uVar4 = uVar31 / uVar18;
            }
            uVar31 = uVar31 - uVar4 * uVar18;
          }
          if (uVar31 != uVar28) break;
        }
      }
    }
  }
  lVar34 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  iStack_538 = 0;
  uStack_534 = 0;
  uStack_540 = 0;
  auStack_528[0] = 0;
  iStack_530 = 0;
  uStack_52c = 0;
  auStack_528[2] = 0;
  auStack_528[1] = 0;
  auStack_528[4] = 0;
  auStack_528[3] = 0;
  auStack_528[6] = 0;
  auStack_528[5] = 0;
  auStack_528[8] = 0;
  auStack_528[7] = 0;
  auStack_528[10] = 0;
  auStack_528[9] = 0;
  auStack_528[0xc] = 0;
  auStack_528[0xb] = 0;
  auStack_528[0xe] = 0;
  auStack_528[0xd] = 0;
  auStack_528[0x10] = 0;
  auStack_528[0xf] = 0;
  auStack_528[0x12] = 0;
  auStack_528[0x11] = 0;
  auStack_528[0x14] = 0;
  auStack_528[0x13] = 0;
  auStack_528[0x16] = 0;
  auStack_528[0x15] = 0;
  auStack_528[0x18] = 0;
  auStack_528[0x17] = 0;
  auStack_528[0x1a] = 0;
  auStack_528[0x19] = 0;
  auStack_528[0x1c] = 0;
  auStack_528[0x1b] = 0;
  auStack_528[0x1e] = 0;
  auStack_528[0x1d] = 0;
  auStack_528[0x20] = 0;
  auStack_528[0x1f] = 0;
  auStack_528[0x22] = 0;
  auStack_528[0x21] = 0;
  auStack_528[0x24] = 0;
  auStack_528[0x23] = 0;
  auStack_528[0x26] = 0;
  auStack_528[0x25] = 0;
  auStack_528[0x28] = 0;
  auStack_528[0x27] = 0;
  auStack_528[0x2a] = 0;
  auStack_528[0x29] = 0;
  auStack_528[0x2c] = 0;
  auStack_528[0x2b] = 0;
  auStack_528[0x2e] = 0;
  auStack_528[0x2d] = 0;
  auStack_528[0x30] = 0;
  auStack_528[0x2f] = 0;
  auStack_528[0x32] = 0;
  auStack_528[0x31] = 0;
  auStack_528[0x34] = 0;
  auStack_528[0x33] = 0;
  auStack_528[0x36] = 0;
  auStack_528[0x35] = 0;
  auStack_528[0x38] = 0;
  auStack_528[0x37] = 0;
  uVar41 = *(undefined8 *)(param_1 + 0x78);
  do {
    *(undefined8 *)((long)&iStack_538 + lVar34) = 0;
    *(undefined8 *)((long)&uStack_540 + lVar34) = 0xffffffff;
    *(undefined8 *)((long)auStack_528 + lVar34) = 0;
    *(undefined8 *)((long)&iStack_530 + lVar34) = 0xffffffff;
    *(undefined8 *)(auStack_558 + lVar34) = 0;
    *(undefined8 *)(auStack_560 + lVar34) = 0xffffffff;
    *(undefined8 *)((long)&uStack_548 + lVar34) = 0;
    *(undefined8 *)((long)&uStack_550 + lVar34) = 0xffffffff;
    lVar34 = lVar34 + 0x40;
  } while (lVar34 != 0x200);
  auStack_528[0x3f] = 0xffffffff;
  auStack_528[0x3e] = 0x100000000;
  auStack_528[0x41] = 0xffffffff;
  auStack_528[0x40] = 0x100000000;
  auStack_528[0x47] = 0xffffffff;
  auStack_528[0x46] = 0x100000000;
  auStack_528[0x49] = 0xffffffff;
  auStack_528[0x48] = 0x100000000;
  auStack_528[0x43] = 0xffffffff;
  auStack_528[0x42] = 0x100000000;
  auStack_528[0x45] = 0xffffffff;
  auStack_528[0x44] = 0x100000000;
  auStack_2d0[0] = 0;
  uStack_288 = 0;
  plStack_278 = (long *)0x0;
  puStack_280 = (undefined8 *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_260 = 0;
  auStack_528[0x4a] = 1;
  auStack_528[0x3b] = 8;
  auStack_528[0x3a] = 0x100000000;
  auStack_528[0x3d] = 0xffffffff;
  auStack_528[0x3c] = 0x100000000;
  auStack_528[0x39] = 1;
  uVar18 = *(ulong *)(param_1 + 0xb0);
  plVar30 = (long *)*(long *)(param_1 + 0xa8);
  if (-1 < (char)*(byte *)(param_1 + 0xbf)) {
    uVar18 = (ulong)*(byte *)(param_1 + 0xbf);
    plVar30 = (long *)(param_1 + 0xa8);
  }
  _auStack_558 = (long *)0x1d00000000;
  _auStack_560 = (mach_header *)0x0;
  func_0x000109237af0(&uStack_250,plVar30,uVar18);
  func_0x00010923aaa8(&uStack_5d0,&uStack_250);
  FUN_10a0e6cd0(auStack_2d0,&uStack_5d0);
  uStack_580 = (undefined8 *)auStack_5a0;
  func_0x00010a09ad80(&uStack_580);
  if (plStack_5b8 != (long *)0x0) {
    plStack_5b0 = plStack_5b8;
    __ZdlPv();
  }
  uStack_580 = &uStack_5d0;
  FUN_10a09ae0c(&uStack_580);
  func_0x000109235564(&uStack_5d0,uVar41,&uStack_248,0);
  plVar30 = plStack_278;
  plStack_278 = uStack_5c8;
  puStack_280 = uStack_5d0;
  uStack_5d0 = (undefined8 *)0x0;
  uStack_5c8 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    plVar21 = plVar30 + 1;
    do {
      lVar34 = *plVar21;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar34 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  plVar30 = uStack_5c8;
  if (uStack_5c8 != (long *)0x0) {
    plVar21 = uStack_5c8 + 1;
    do {
      lVar34 = *plVar21;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar34 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*uStack_5c8 + 0x10))(uStack_5c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  func_0x00010923ff08(&uStack_250);
  uStack_248._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x90);
  uStack_248._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  uStack_250._0_4_ = (uint)*(undefined8 *)(param_1 + 0x88);
  uStack_250._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  if (*(long *)(param_1 + 0x90) != 0) {
    plVar30 = (long *)(*(long *)(param_1 + 0x90) + 8);
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar7) {
        *plVar30 = *plVar30 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_238 = (undefined4)*(undefined8 *)(param_1 + 0xa0);
  uStack_234 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
  uStack_240 = (undefined4)*(undefined8 *)(param_1 + 0x98);
  uStack_23c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  if (*(long *)(param_1 + 0xa0) != 0) {
    plVar30 = (long *)(*(long *)(param_1 + 0xa0) + 8);
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar7) {
        *plVar30 = *plVar30 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a0eaba8(&uStack_270,&uStack_250,&puStack_230,2);
  lVar34 = 0x10;
  do {
    func_0x00010a0eb124((long)&uStack_250 + lVar34);
    lVar34 = lVar34 + -0x10;
  } while (lVar34 != -0x10);
  uStack_5c8 = (long *)0x0;
  uStack_5d0 = (undefined8 *)0x0;
  plStack_5b8 = (long *)0x0;
  uStack_5c0 = (undefined1 *)0x0;
  plVar30 = *(long **)(param_1 + 0x78);
  uVar17 = *(uint *)((long)plVar30 + 0x734);
  puVar32 = (undefined8 *)&UNK_10e495ea8;
  if (uVar17 != 2) {
    puVar32 = (undefined8 *)&UNK_10e495ec0;
  }
  puVar35 = (undefined8 *)&UNK_10e495f20;
  if (uVar17 != 3) {
    puVar35 = puVar32;
  }
  cStack_1f8 = '\0';
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_250._0_4_ = 0;
  uStack_250._4_4_ = 0;
  uStack_248._0_4_ = 0;
  uStack_248._4_4_ = 0;
  uStack_238 = 0;
  uStack_228 = 0;
  puStack_230 = (undefined *)0x0;
  uStack_218 = 0;
  pdStack_220 = (dword *)0x0;
  auStack_210[0] = 0;
  puVar32 = (undefined8 *)&UNK_10e495e90;
  if (1 < uVar17) {
    puVar32 = puVar35;
  }
  puVar35 = (undefined8 *)*puVar32;
  if (-1 < *(char *)((long)puVar32 + 0x17)) {
    puVar35 = puVar32;
  }
  puVar32 = puVar35;
  _strlen();
  uStack_248._0_4_ = SUB84(puVar35,0);
  uStack_248._4_4_ = (undefined4)((ulong)puVar35 >> 0x20);
  uStack_240 = SUB84(puVar32,0);
  uStack_23c = (undefined4)((ulong)puVar32 >> 0x20);
  uStack_218 = *(undefined8 *)(param_1 + 0x88);
  (**(code **)(*plVar30 + 0xa8))(&uStack_580,plVar30,&uStack_250);
  plVar21 = plStack_578;
  uStack_5d0 = uStack_580;
  plVar30 = uStack_5c8;
  uStack_580 = (undefined8 *)0x0;
  plStack_578 = (long *)0x0;
  uStack_5c8 = plVar21;
  if (plVar30 != (long *)0x0) {
    plVar21 = plVar30 + 1;
    do {
      lVar34 = *plVar21;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar34 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  plVar30 = plStack_578;
  if (plStack_578 != (long *)0x0) {
    plVar21 = plStack_578 + 1;
    do {
      lVar34 = *plVar21;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar34 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plStack_578 + 0x10))(plStack_578);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  if (cStack_1f8 == '\x01') {
    uStack_580 = (undefined8 *)auStack_210;
    func_0x00010a0eab1c(&uStack_580);
  }
  plVar30 = *(long **)(param_1 + 0x78);
  uVar17 = *(uint *)((long)plVar30 + 0x734);
  puVar32 = (undefined8 *)&UNK_10e495ef0;
  if (uVar17 != 2) {
    puVar32 = (undefined8 *)&UNK_10e495f08;
  }
  puVar35 = (undefined8 *)&UNK_10e495f20;
  if (uVar17 != 3) {
    puVar35 = puVar32;
  }
  cStack_1f8 = '\0';
  uStack_250._0_4_ = 0;
  uStack_250._4_4_ = 0;
  auStack_210[0] = 0;
  puVar32 = (undefined8 *)&UNK_10e495ed8;
  if (1 < uVar17) {
    puVar32 = puVar35;
  }
  puVar35 = (undefined8 *)*puVar32;
  if (-1 < *(char *)((long)puVar32 + 0x17)) {
    puVar35 = puVar32;
  }
  puVar32 = puVar35;
  _strlen();
  uStack_248._0_4_ = SUB84(puVar35,0);
  uStack_248._4_4_ = (undefined4)((ulong)puVar35 >> 0x20);
  uStack_240 = SUB84(puVar32,0);
  uStack_23c = (undefined4)((ulong)puVar32 >> 0x20);
  uStack_250._4_4_ = 1;
  pdStack_220 = &dStack_640;
  uStack_238 = 3;
  uStack_228 = 0xc;
  puStack_230 = &UNK_10e4e2040;
  uStack_218 = *(undefined8 *)(param_1 + 0x98);
  (**(code **)(*plVar30 + 0xa8))(&uStack_580,plVar30,&uStack_250);
  plVar21 = plStack_578;
  uStack_5c0 = (undefined1 *)uStack_580;
  plVar30 = plStack_5b8;
  uStack_580 = (undefined8 *)0x0;
  plStack_578 = (long *)0x0;
  plStack_5b8 = plVar21;
  if (plVar30 != (long *)0x0) {
    plVar21 = plVar30 + 1;
    do {
      lVar34 = *plVar21;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar34 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  plVar30 = plStack_578;
  if (plStack_578 != (long *)0x0) {
    plVar21 = plStack_578 + 1;
    do {
      lVar34 = *plVar21;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar34 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plStack_578 + 0x10))(plStack_578);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  if (cStack_1f8 == '\x01') {
    uStack_580 = (undefined8 *)auStack_210;
    func_0x00010a0eab1c(&uStack_580);
  }
  uStack_580 = &uStack_5d0;
  plStack_578 = (long *)0x2;
  lVar34 = 0x5f8;
  __Znwm();
  uStack_248._0_4_ = 0;
  uStack_248._4_4_ = 0;
  uStack_250._0_4_ = 0;
  uStack_250._4_4_ = 0;
  func_0x000109293548();
  lVar43 = 0x10;
  do {
    func_0x00010a0eb17c((long)&uStack_5d0 + lVar43);
    lVar43 = lVar43 + -0x10;
  } while (lVar43 != -0x10);
  uStack_250 = &uStack_270;
  FUN_10a0e9b7c(&uStack_250);
  plVar30 = plStack_278;
  if (plStack_278 != (long *)0x0) {
    plVar21 = plStack_278 + 1;
    do {
      lVar43 = *plVar21;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar43 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar43 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  func_0x00010a09ad20(auStack_2d0);
  pmVar10 = (mach_header *)0x28;
  __Znwm();
  uStack_550 = 1;
  uVar17 = (uint)(uStack_638 != 0);
  pmVar10->flags = uVar17;
  pmVar10[1].magic = (int)lVar34;
  pmVar10[1].cputype = (int)((ulong)lVar34 >> 0x20);
  uVar18 = (long)(int)dStack_640 + 0x9e3779b9;
  uVar18 = (long)(int)dStack_63c + 0x9e3779b9 + uVar18 * 0x40 + (uVar18 >> 2) ^ uVar18;
  if (uStack_638 != 0) {
    lVar38 = 0x9e3779ba;
  }
  uVar18 = lVar38 + uVar18 * 0x40 + (uVar18 >> 2) ^ uVar18;
  pmVar10->magic = 0;
  pmVar10->cputype = 0;
  pmVar10->cpusubtype = (int)uVar18;
  pmVar10->filetype = (int)(uVar18 >> 0x20);
  pmVar10->ncmds = dStack_640;
  pmVar10->sizeofcmds = dStack_63c;
  uVar25 = *(ulong *)(param_1 + 0x58);
  _auStack_560 = pmVar10;
  _auStack_558 = plVar9;
  if (uVar25 != 0) {
    uVar26 = uVar25 - 1;
    if ((uVar25 & uVar26) == 0) {
      uVar28 = uVar18 & uVar26;
    }
    else {
      uVar28 = uVar18;
      if (uVar25 <= uVar18) {
        uVar28 = 0;
        if (uVar25 != 0) {
          uVar28 = uVar18 / uVar25;
        }
        uVar28 = uVar18 - uVar28 * uVar25;
      }
    }
    puVar32 = *(undefined8 **)(*plVar9 + uVar28 * 8);
    if (puVar32 != (undefined8 *)0x0) {
      for (pmVar29 = (mach_header *)*puVar32; pmVar29 != (mach_header *)0x0;
          pmVar29 = *(mach_header **)pmVar29) {
        uVar31 = *(ulong *)&pmVar29->cpusubtype;
        if (uVar31 == uVar18) {
          if ((pmVar29->ncmds == dStack_640 && pmVar29->sizeofcmds == dStack_63c) &&
             ((byte)pmVar29->flags == uVar17)) goto LAB_10a8bf520;
        }
        else {
          if ((uVar25 & uVar26) == 0) {
            uVar31 = uVar31 & uVar26;
          }
          else if (uVar25 <= uVar31) {
            uVar4 = 0;
            if (uVar25 != 0) {
              uVar4 = uVar31 / uVar25;
            }
            uVar31 = uVar31 - uVar4 * uVar25;
          }
          if (uVar31 != uVar28) break;
        }
      }
    }
  }
  fVar47 = (float)(*(long *)(param_1 + 0x68) + 1);
  if ((uVar25 == 0) || (*(float *)(param_1 + 0x70) * (float)uVar25 < fVar47)) {
    uVar18 = 1;
    if (2 < uVar25) {
      uVar18 = (ulong)((uVar25 & uVar25 - 1) != 0);
    }
    uVar18 = uVar18 | uVar25 << 1;
    uVar26 = (ulong)(fVar47 / *(float *)(param_1 + 0x70));
    if (uVar18 <= uVar26) {
      uVar18 = uVar26;
    }
    if (uVar18 - 1 == 0) {
      uVar18 = 2;
    }
    else if ((uVar18 & uVar18 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar25 = *(ulong *)(param_1 + 0x58);
    }
    if (uVar25 < uVar18) {
LAB_10a8bf338:
      if (uVar18 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a8c0398;
      }
      lVar34 = uVar18 << 3;
      __Znwm();
      lVar38 = *plVar9;
      *plVar9 = lVar34;
      if (lVar38 != 0) {
        __ZdlPv();
      }
      uVar25 = 0;
      *(ulong *)(param_1 + 0x58) = uVar18;
      do {
        *(undefined8 *)(*plVar9 + uVar25 * 8) = 0;
        uVar25 = uVar25 + 1;
      } while (uVar18 != uVar25);
      plVar30 = *(long **)(param_1 + 0x60);
      uVar25 = uVar18;
      if (plVar30 != (long *)0x0) {
        uVar26 = plVar30[1];
        uVar28 = uVar18 - 1;
        if ((uVar18 & uVar28) == 0) {
          uVar26 = uVar26 & uVar28;
        }
        else if (uVar18 <= uVar26) {
          uVar31 = 0;
          if (uVar18 != 0) {
            uVar31 = uVar26 / uVar18;
          }
          uVar26 = uVar26 - uVar31 * uVar18;
        }
        *(undefined8 **)(*plVar9 + uVar26 * 8) = (undefined8 *)(param_1 + 0x60);
        plVar21 = (long *)*plVar30;
        while (plVar21 != (long *)0x0) {
          uVar31 = plVar21[1];
          if ((uVar18 & uVar28) == 0) {
            uVar31 = uVar31 & uVar28;
          }
          else if (uVar18 <= uVar31) {
            uVar4 = 0;
            if (uVar18 != 0) {
              uVar4 = uVar31 / uVar18;
            }
            uVar31 = uVar31 - uVar4 * uVar18;
          }
          plVar22 = plVar21;
          if (uVar31 != uVar26) {
            lVar34 = *plVar9;
            if (*(long *)(lVar34 + uVar31 * 8) == 0) {
              *(long **)(lVar34 + uVar31 * 8) = plVar30;
              uVar26 = uVar31;
            }
            else {
              *plVar30 = *plVar21;
              *plVar21 = **(undefined8 **)(lVar34 + uVar31 * 8);
              **(long **)(lVar34 + uVar31 * 8) = (long)plVar21;
              plVar22 = plVar30;
            }
          }
          plVar30 = plVar22;
          plVar21 = (long *)*plVar22;
        }
      }
    }
    else if (uVar18 < uVar25) {
      uVar26 = (ulong)((float)*(ulong *)(param_1 + 0x68) / *(float *)(param_1 + 0x70));
      if ((uVar25 < 3) || ((uVar25 & uVar25 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar26) {
        uVar26 = 1L << (-LZCOUNT(uVar26 - 1) & 0x3fU);
      }
      if (uVar18 <= uVar26) {
        uVar18 = uVar26;
      }
      if (uVar18 < uVar25) {
        if (uVar18 != 0) goto LAB_10a8bf338;
        lVar34 = *plVar9;
        *plVar9 = 0;
        if (lVar34 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x58) = 0;
        uVar25 = 0;
      }
      else {
        uVar25 = *(ulong *)(param_1 + 0x58);
      }
    }
  }
  uVar26 = *(ulong *)&pmVar10->cpusubtype;
  uVar18 = uVar25 - 1;
  if ((uVar25 & uVar18) == 0) {
    uVar26 = uVar18 & uVar26;
  }
  else if (uVar25 <= uVar26) {
    uVar28 = 0;
    if (uVar25 != 0) {
      uVar28 = uVar26 / uVar25;
    }
    uVar26 = uVar26 - uVar28 * uVar25;
  }
  lVar34 = *plVar9;
  plVar30 = *(long **)(lVar34 + uVar26 * 8);
  if (plVar30 == (long *)0x0) {
    plVar30 = (long *)(param_1 + 0x60);
    lVar38 = *plVar30;
    pmVar10->magic = (int)lVar38;
    pmVar10->cputype = (int)((ulong)lVar38 >> 0x20);
    *plVar30 = (long)pmVar10;
    *(long **)(lVar34 + uVar26 * 8) = plVar30;
    if (*(long *)pmVar10 != 0) {
      uVar26 = *(ulong *)(*(long *)pmVar10 + 8);
      if ((uVar25 & uVar18) == 0) {
        uVar26 = uVar26 & uVar18;
      }
      else if (uVar25 <= uVar26) {
        uVar18 = 0;
        if (uVar25 != 0) {
          uVar18 = uVar26 / uVar25;
        }
        uVar26 = uVar26 - uVar18 * uVar25;
      }
      plVar30 = (long *)(*plVar9 + uVar26 * 8);
      goto LAB_10a8bf50c;
    }
  }
  else {
    lVar34 = *plVar30;
    pmVar10->magic = (int)lVar34;
    pmVar10->cputype = (int)((ulong)lVar34 >> 0x20);
LAB_10a8bf50c:
    *plVar30 = (long)pmVar10;
  }
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  _auStack_560 = (mach_header *)0x0;
  pmVar29 = pmVar10;
LAB_10a8bf520:
  FUN_10a8d451c(auStack_560);
  lVar34 = 0;
  puVar32 = *(undefined8 **)(pmVar29 + 1);
  *(undefined4 *)(puVar32 + 0x66) = 1;
  *(undefined1 *)((long)puVar32 + 0x334) = 1;
  puVar32[0x67] = 0x200000000;
  *(undefined4 *)(puVar32 + 0x68) = 0;
  *(undefined1 *)((long)puVar32 + 0x344) = 0;
  puVar32[0x69] = 0;
  *(undefined4 *)(puVar32 + 0x6a) = 1;
  *(undefined2 *)((long)puVar32 + 0x354) = 0;
  *(undefined2 *)(puVar32 + 0x6b) = 0;
  *(undefined4 *)((long)puVar32 + 0x35c) = 7;
  *(undefined1 *)(puVar32 + 0x6c) = 0;
  *(undefined8 *)((long)puVar32 + 0x36c) = 0x700000000;
  *(undefined8 *)((long)puVar32 + 0x364) = 0;
  *(undefined4 *)((long)puVar32 + 900) = 0;
  *(undefined8 *)((long)puVar32 + 0x37c) = 0;
  *(undefined8 *)((long)puVar32 + 0x374) = 0;
  puVar32[0x71] = 7;
  *(undefined4 *)(puVar32 + 0x72) = 0;
  do {
    auStack_560[lVar34] = 0;
    *(undefined8 *)(auStack_558 + lVar34 + 4) = 0x100000000;
    *(undefined8 *)(auStack_560 + lVar34 + 4) = 1;
    *(undefined8 *)((long)&uStack_548 + lVar34) = 0;
    *(undefined4 *)((long)&uStack_550 + lVar34 + 4) = 0;
    lVar34 = lVar34 + 0x20;
  } while (lVar34 != 0x100);
  auStack_528[0x19] = 1;
  _auStack_558 = (long *)0x0;
  _auStack_560 = &MACH_HEADER;
  uStack_548 = 0xf00000000;
  uStack_550 = 1;
  if (puVar32 + 0x73 != (undefined8 *)auStack_560) {
    puVar32[0x93] = 0;
    func_0x00010928bc78(puVar32 + 0x73,auStack_560);
  }
LAB_10a8bf604:
  func_0x000109293c4c(puVar32,*(undefined4 *)(param_8 + 0x40),2,2,2);
  func_0x000109294420();
  plVar9 = (long *)*puVar32;
  func_0x000109290738(*(undefined8 *)(param_1 + 0xd8));
  uStack_248 = (long *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
  if ((undefined8 *)puVar32[3] == (undefined8 *)puVar32[2]) goto LAB_10a8c0398;
  func_0x000109291240(&dStack_640,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)puVar32[2]);
  plVar30 = plVar9;
  (**(code **)(*plVar9 + 0x30))();
  uStack_248 = (long *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
  if (((*(byte *)(plVar30 + 6) & 1) == 0) ||
     (uStack_248 = (long *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248),
     (uint *)plVar30[1] == (uint *)*plVar30)) goto LAB_10a8c0398;
  uVar18 = (ulong)*(uint *)*plVar30;
  (**(code **)(*(long *)pmVar8 + 0x78))(pmVar8,plVar9);
  _auStack_560 = (mach_header *)0x0;
  _auStack_558 = *(long **)(param_8 + 0x24);
  uStack_550 = 0x3f80000000000000;
  (**(code **)(*(long *)pmVar8 + 0x70))(pmVar8,auStack_560);
  (**(code **)(*(long *)pmVar8 + 0x98))(pmVar8,0,plVar9[0xa0],*(undefined8 *)(param_1 + 0xe8),0);
  if ((*(byte *)(param_1 + 0xfc) & 1) == 0) {
    uVar52 = *(undefined4 *)(param_1 + 0xf0);
  }
  else {
    if ((ulong)(plVar30[1] - *plVar30 >> 7) <= uVar18) goto LAB_10a8c0398;
    lVar34 = *plVar30 + uVar18 * 0x80;
    plVar30 = *(long **)(lVar34 + 8);
    plVar21 = plVar30;
    for (; plVar30 != *(long **)(lVar34 + 0x10); plVar30 = plVar30 + 8) {
      bVar2 = *(byte *)((long)plVar30 + 0x17);
      uVar25 = plVar30[1];
      if (-1 < (char)bVar2) {
        uVar25 = (ulong)bVar2;
      }
      if (uVar25 == 0xf) {
        plVar22 = (long *)*plVar30;
        if (-1 < (char)bVar2) {
          plVar22 = plVar30;
        }
        plVar21 = plVar30;
        if (*plVar22 == 0x426d726f66696e75 && *(long *)((long)plVar22 + 7) == 0x305f726566667542)
        break;
      }
      plVar21 = *(long **)(lVar34 + 0x10);
    }
    uVar52 = (undefined4)plVar21[3];
    *(undefined4 *)(param_1 + 0xf0) = uVar52;
    plVar30 = *(long **)(lVar34 + 0x38);
    plVar21 = plVar30;
    for (; plVar30 != *(long **)(lVar34 + 0x40); plVar30 = plVar30 + 5) {
      bVar2 = *(byte *)((long)plVar30 + 0x17);
      uVar25 = plVar30[1];
      if (-1 < (char)bVar2) {
        uVar25 = (ulong)bVar2;
      }
      if (uVar25 == 9) {
        plVar22 = (long *)*plVar30;
        if (-1 < (char)bVar2) {
          plVar22 = plVar30;
        }
        plVar21 = plVar30;
        if (*plVar22 == 0x5f78655465736162 && *(char *)(plVar22 + 1) == '0') break;
      }
      plVar21 = *(long **)(lVar34 + 0x40);
    }
    *(int *)(param_1 + 0xf4) = (int)plVar21[3];
    plVar30 = *(long **)(lVar34 + 0x68);
    plVar21 = plVar30;
    for (; plVar30 != *(long **)(lVar34 + 0x70); plVar30 = plVar30 + 5) {
      bVar2 = *(byte *)((long)plVar30 + 0x17);
      uVar25 = plVar30[1];
      if (-1 < (char)bVar2) {
        uVar25 = (ulong)bVar2;
      }
      if (uVar25 == 0xb) {
        plVar22 = (long *)*plVar30;
        if (-1 < (char)bVar2) {
          plVar22 = plVar30;
        }
        plVar21 = plVar30;
        if (*plVar22 == 0x706d615365736162 && *(long *)((long)plVar22 + 3) == 0x72656c706d615365)
        break;
      }
      plVar21 = *(long **)(lVar34 + 0x70);
    }
    *(int *)(param_1 + 0xf8) = (int)plVar21[3];
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  (**(code **)(*(long *)CONCAT44(dStack_63c,dStack_640) + 0x38))
            ((long *)CONCAT44(dStack_63c,dStack_640),uVar52,plStack_630,0,0,0);
  (**(code **)(*(long *)CONCAT44(dStack_63c,dStack_640) + 0x48))
            ((long *)CONCAT44(dStack_63c,dStack_640),*(undefined4 *)(param_1 + 0xf4),param_2,5,0);
  plVar30 = (long *)CONCAT44(dStack_63c,dStack_640);
  uVar52 = *(undefined4 *)(param_1 + 0xf8);
  if (dVar39 == 0) {
    uVar17 = (uint)*(byte *)((long)param_3 + 0x12);
    FUN_10a8d4568();
    if (dVar36 == 0) goto LAB_10a8bf904;
LAB_10a8bf8e4:
    uVar33 = 0;
    if ((int)lVar44 != 0) goto LAB_10a8bf8ec;
LAB_10a8bf914:
    uVar37 = (uint)*(byte *)(param_3 + 5);
    FUN_10a8d4568();
  }
  else {
    uVar17 = 0;
    if (dVar36 != 0) goto LAB_10a8bf8e4;
LAB_10a8bf904:
    uVar33 = (uint)*(byte *)((long)param_3 + 0x13);
    FUN_10a8d4568();
    if ((int)lVar44 == 0) goto LAB_10a8bf914;
LAB_10a8bf8ec:
    uVar37 = 0;
  }
  if ((((*param_3 == 0.0) && (param_3[1] == 0.0)) && (param_3[2] == 0.0)) && (param_3[3] == 0.0)) {
    iVar12 = 0;
  }
  else {
    iVar12 = 1;
    if (((*param_3 == 1.0) && (param_3[1] == 1.0)) &&
       ((param_3[2] == 1.0 && (iVar12 = 2, param_3[3] != 1.0)))) {
      iVar12 = 1;
    }
  }
  cVar3 = *(char *)((long)param_3 + 0x11);
  uStack_5d0 = (undefined8 *)CONCAT71(uStack_5d0._1_7_,cVar3);
  uStack_5d0 = (undefined8 *)CONCAT44(uVar17,(undefined4)uStack_5d0);
  uStack_5c8 = (long *)CONCAT44(uVar37,uVar33);
  bVar2 = *(byte *)((long)param_3 + 0x15);
  puVar35 = (undefined8 *)(ulong)bVar2;
  uStack_5c0._0_5_ = CONCAT14(bVar2,iVar12);
  plVar21 = (long *)(param_1 + 0x28);
  puVar32 = &uStack_5d0;
  FUN_10a8d4588();
  puVar15 = *(undefined8 **)(param_1 + 0x30);
  if (puVar15 != (undefined8 *)0x0) {
    uVar25 = (long)puVar15 - 1;
    if (((ulong)puVar15 & uVar25) == 0) {
      puVar20 = (undefined8 *)(uVar25 & (ulong)puVar32);
    }
    else {
      puVar20 = puVar32;
      if (puVar15 <= puVar32) {
        uVar26 = 0;
        if (puVar15 != (undefined8 *)0x0) {
          uVar26 = (ulong)puVar32 / (ulong)puVar15;
        }
        puVar20 = (undefined8 *)((long)puVar32 - uVar26 * (long)puVar15);
      }
    }
    plVar22 = *(long **)(*plVar21 + (long)puVar20 * 8);
    if (plVar22 != (long *)0x0) {
      do {
        while( true ) {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_10a8bfa68;
          puVar27 = (undefined8 *)plVar22[1];
          if (puVar27 != puVar32) break;
          if (((*(char *)(plVar22 + 2) == cVar3 && *(uint *)((long)plVar22 + 0x14) == uVar17) &&
              (*(uint *)(plVar22 + 3) == uVar33)) &&
             ((*(uint *)((long)plVar22 + 0x1c) == uVar37 &&
              ((*(int *)(plVar22 + 4) == iVar12 && (*(byte *)((long)plVar22 + 0x24) == bVar2)))))) {
            lVar34 = plVar22[5];
            goto LAB_10a8bfeb8;
          }
        }
        if (((ulong)puVar15 & uVar25) == 0) {
          puVar27 = (undefined8 *)((ulong)puVar27 & uVar25);
        }
        else if (puVar15 <= puVar27) {
          uVar26 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            uVar26 = (ulong)puVar27 / (ulong)puVar15;
          }
          puVar27 = (undefined8 *)((long)puVar27 - uVar26 * (long)puVar15);
        }
      } while (puVar27 == puVar20);
    }
  }
LAB_10a8bfa68:
  _auStack_560 = (mach_header *)0x0;
  _auStack_558 = (long *)0x0;
  uVar13 = (uint)uStack_548;
  uStack_550 = 0;
  uStack_548 = CONCAT44(1,uVar13 & 0xffffff00);
  uVar13 = (uint)uStack_540;
  uStack_540 = CONCAT44(7,uVar13 & 0xffffff00);
  iStack_538 = 0;
  uStack_534 = 0x447a0000;
  uStack_52c = uStack_52c & 0xffffff00;
  if (cVar3 == '\0') {
LAB_10a8bfab4:
    uVar13 = (uint)bVar2;
LAB_10a8bfac8:
    _auStack_558 = (long *)CONCAT44(uVar17,uVar13);
    uStack_550 = CONCAT44(uVar37,uVar33);
    iStack_530 = iVar12;
    (**(code **)(**(long **)(param_1 + 0x78) + 0x50))
              (&uStack_580,*(long **)(param_1 + 0x78),auStack_560);
    puVar15 = *(undefined8 **)(param_1 + 0x30);
    if (puVar15 != (undefined8 *)0x0) {
      uVar25 = (long)puVar15 - 1;
      if (((ulong)puVar15 & uVar25) == 0) {
        puVar35 = (undefined8 *)(uVar25 & (ulong)puVar32);
      }
      else {
        puVar35 = puVar32;
        if (puVar15 <= puVar32) {
          uVar26 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            uVar26 = (ulong)puVar32 / (ulong)puVar15;
          }
          puVar35 = (undefined8 *)((long)puVar32 - uVar26 * (long)puVar15);
        }
      }
      puVar20 = *(undefined8 **)(*plVar21 + (long)puVar35 * 8);
      if (puVar20 != (undefined8 *)0x0) {
        for (plVar22 = (long *)*puVar20; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
          puVar20 = (undefined8 *)plVar22[1];
          if (puVar20 == puVar32) {
            if (((((char)plVar22[2] == cVar3 && *(uint *)((long)plVar22 + 0x14) == uVar17) &&
                 (*(uint *)(plVar22 + 3) == uVar33)) && (*(uint *)((long)plVar22 + 0x1c) == uVar37))
               && (((int)plVar22[4] == iVar12 && (*(byte *)((long)plVar22 + 0x24) == bVar2))))
            goto LAB_10a8bfe78;
          }
          else {
            if (((ulong)puVar15 & uVar25) == 0) {
              puVar20 = (undefined8 *)((ulong)puVar20 & uVar25);
            }
            else if (puVar15 <= puVar20) {
              uVar26 = 0;
              if (puVar15 != (undefined8 *)0x0) {
                uVar26 = (ulong)puVar20 / (ulong)puVar15;
              }
              puVar20 = (undefined8 *)((long)puVar20 - uVar26 * (long)puVar15);
            }
            if (puVar20 != puVar35) break;
          }
        }
      }
    }
    plVar22 = (long *)0x38;
    __Znwm();
    uStack_250._0_4_ = (uint)plVar22;
    uStack_250._4_4_ = (undefined4)((ulong)plVar22 >> 0x20);
    uStack_240 = 1;
    uStack_23c = 0;
    *plVar22 = 0;
    plVar22[1] = (long)puVar32;
    plVar22[3] = (long)uStack_5c8;
    plVar22[2] = (long)uStack_5d0;
    plVar22[4] = (long)uStack_5c0;
    plVar22[6] = (long)plStack_578;
    plVar22[5] = (long)uStack_580;
    uStack_580 = (undefined8 *)0x0;
    plStack_578 = (long *)0x0;
    fVar47 = (float)(*(long *)(param_1 + 0x40) + 1);
    uStack_248 = plVar21;
    if ((puVar15 == (undefined8 *)0x0) || (*(float *)(param_1 + 0x48) * (float)puVar15 < fVar47)) {
      uVar25 = 1;
      if ((undefined8 *)0x2 < puVar15) {
        uVar25 = (ulong)(((ulong)puVar15 & (long)puVar15 - 1U) != 0);
      }
      puVar35 = (undefined8 *)(uVar25 | (long)puVar15 << 1);
      puVar20 = (undefined8 *)(long)(fVar47 / *(float *)(param_1 + 0x48));
      if (puVar35 <= puVar20) {
        puVar35 = puVar20;
      }
      if ((long)puVar35 - 1U == 0) {
        puVar35 = (undefined8 *)0x2;
      }
      else if (((ulong)puVar35 & (long)puVar35 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        puVar15 = *(undefined8 **)(param_1 + 0x30);
      }
      if (puVar15 < puVar35) {
LAB_10a8bfc88:
        if ((ulong)puVar35 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a8c0398;
        }
        lVar34 = (long)puVar35 << 3;
        __Znwm();
        lVar38 = *plVar21;
        *plVar21 = lVar34;
        if (lVar38 != 0) {
          __ZdlPv();
        }
        puVar15 = (undefined8 *)0x0;
        *(undefined8 **)(param_1 + 0x30) = puVar35;
        do {
          *(undefined8 *)(*plVar21 + (long)puVar15 * 8) = 0;
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (puVar35 != puVar15);
        plVar19 = *(long **)(param_1 + 0x38);
        puVar15 = puVar35;
        if (plVar19 != (long *)0x0) {
          puVar20 = (undefined8 *)plVar19[1];
          uVar25 = (long)puVar35 - 1;
          if (((ulong)puVar35 & uVar25) == 0) {
            puVar20 = (undefined8 *)((ulong)puVar20 & uVar25);
          }
          else if (puVar35 <= puVar20) {
            uVar26 = 0;
            if (puVar35 != (undefined8 *)0x0) {
              uVar26 = (ulong)puVar20 / (ulong)puVar35;
            }
            puVar20 = (undefined8 *)((long)puVar20 - uVar26 * (long)puVar35);
          }
          *(undefined8 **)(*plVar21 + (long)puVar20 * 8) = (undefined8 *)(param_1 + 0x38);
          plVar23 = (long *)*plVar19;
          while (plVar23 != (long *)0x0) {
            puVar27 = (undefined8 *)plVar23[1];
            if (((ulong)puVar35 & uVar25) == 0) {
              puVar27 = (undefined8 *)((ulong)puVar27 & uVar25);
            }
            else if (puVar35 <= puVar27) {
              uVar26 = 0;
              if (puVar35 != (undefined8 *)0x0) {
                uVar26 = (ulong)puVar27 / (ulong)puVar35;
              }
              puVar27 = (undefined8 *)((long)puVar27 - uVar26 * (long)puVar35);
            }
            plVar24 = plVar23;
            if (puVar27 != puVar20) {
              lVar34 = *plVar21;
              if (*(long *)(lVar34 + (long)puVar27 * 8) == 0) {
                *(long **)(lVar34 + (long)puVar27 * 8) = plVar19;
                puVar20 = puVar27;
              }
              else {
                *plVar19 = *plVar23;
                *plVar23 = **(undefined8 **)(lVar34 + (long)puVar27 * 8);
                **(long **)(lVar34 + (long)puVar27 * 8) = (long)plVar23;
                plVar24 = plVar19;
              }
            }
            plVar19 = plVar24;
            plVar23 = (long *)*plVar24;
          }
        }
      }
      else if (puVar35 < puVar15) {
        puVar20 = (undefined8 *)
                  (long)((float)*(ulong *)(param_1 + 0x40) / *(float *)(param_1 + 0x48));
        if ((puVar15 < (undefined8 *)0x3) || (((ulong)puVar15 & (long)puVar15 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined8 *)0x1 < puVar20) {
          puVar20 = (undefined8 *)(1L << (-LZCOUNT((long)puVar20 + -1) & 0x3fU));
        }
        if (puVar35 <= puVar20) {
          puVar35 = puVar20;
        }
        if (puVar35 < puVar15) {
          if (puVar35 != (undefined8 *)0x0) goto LAB_10a8bfc88;
          lVar34 = *plVar21;
          *plVar21 = 0;
          if (lVar34 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0x30) = 0;
          puVar15 = (undefined8 *)0x0;
        }
        else {
          puVar15 = *(undefined8 **)(param_1 + 0x30);
        }
      }
      if (((ulong)puVar15 & (long)puVar15 - 1U) == 0) {
        puVar35 = (undefined8 *)((long)puVar15 - 1U & (ulong)puVar32);
      }
      else {
        puVar35 = puVar32;
        if (puVar15 <= puVar32) {
          uVar25 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            uVar25 = (ulong)puVar32 / (ulong)puVar15;
          }
          puVar35 = (undefined8 *)((long)puVar32 - uVar25 * (long)puVar15);
        }
      }
    }
    lVar34 = *plVar21;
    plVar19 = *(long **)(lVar34 + (long)puVar35 * 8);
    if (plVar19 == (long *)0x0) {
      plVar19 = (long *)(param_1 + 0x38);
      *plVar22 = *plVar19;
      *plVar19 = (long)plVar22;
      *(long **)(lVar34 + (long)puVar35 * 8) = plVar19;
      if (*plVar22 != 0) {
        puVar32 = *(undefined8 **)(*plVar22 + 8);
        if (((ulong)puVar15 & (long)puVar15 - 1U) == 0) {
          puVar32 = (undefined8 *)((ulong)puVar32 & (long)puVar15 - 1U);
        }
        else if (puVar15 <= puVar32) {
          uVar25 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            uVar25 = (ulong)puVar32 / (ulong)puVar15;
          }
          puVar32 = (undefined8 *)((long)puVar32 - uVar25 * (long)puVar15);
        }
        plVar19 = (long *)(*plVar21 + (long)puVar32 * 8);
        goto LAB_10a8bfe68;
      }
    }
    else {
      *plVar22 = *plVar19;
LAB_10a8bfe68:
      *plVar19 = (long)plVar22;
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
LAB_10a8bfe78:
    plVar21 = plStack_578;
    lVar34 = plVar22[5];
    if (plStack_578 != (long *)0x0) {
      plVar22 = plStack_578 + 1;
      do {
        lVar38 = *plVar22;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar7) {
          *plVar22 = lVar38 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar38 == 0) {
        (**(code **)(*plStack_578 + 0x10))(plStack_578);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
LAB_10a8bfeb8:
    (**(code **)(*plVar30 + 0x60))(plVar30,uVar52,lVar34,0);
    (**(code **)(*(long *)pmVar8 + 0x80))
              (pmVar8,uVar18,plVar9[0xa0],CONCAT44(dStack_63c,dStack_640),0,0);
    (**(code **)(*(long *)pmVar8 + 0xa8))(pmVar8,4,0,1,0);
    (**(code **)(*(long *)pmVar8 + 0x40))(pmVar8);
    if (*(char *)(lVar14 + 0x5c) == '\x01') {
      pmVar8 = pmStack_5e0;
      (**(code **)(*(long *)pmStack_5e0 + 0x48))();
      (**(code **)(*(long *)pmVar8 + 0x48))();
      if (param_8 != 0) {
        if (*(int *)(param_8 + 0x34) == 3) {
          uVar17 = *(int *)(param_8 + 0x2c) * 6;
        }
        else if (*(int *)(param_8 + 0x34) == 2) {
          uVar17 = *(uint *)(param_8 + 0x2c);
        }
        else {
          uVar17 = 1;
        }
        _auStack_558 = (long *)0x500000002;
        _auStack_560 = (mach_header *)0x800000040;
        uStack_548 = (ulong)*(uint *)(param_8 + 0x30) << 0x20;
        uStack_540 = (ulong)uVar17 << 0x20;
        uStack_550 = param_8;
        (**(code **)(*(long *)pmVar8 + 0x38))(pmVar8,0x40,8,0,0,0,0,0,auStack_560,1);
      }
      (**(code **)(*(long *)pmVar8 + 0x40))(pmVar8);
    }
    ppuVar11 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar16 = *ppuVar11;
    if (((puVar16 != (undefined *)0x0) && (puVar16[0xc0] == '\x01')) &&
       (*(long *)(puVar16 + 0x80) != 0)) {
      FUN_10a08dbac(puVar16 + 0x18);
    }
    bVar7 = false;
    uStack_250._0_4_ = 0;
    uVar18 = (ulong)uStack_5d0 >> 0x20;
    uStack_5d0 = (undefined8 *)((ulong)uStack_5d0 & 0xffffffff00000000);
    uVar25 = (ulong)uStack_580 >> 0x20;
    uStack_580 = (undefined8 *)((ulong)uStack_580 & 0xffffffff00000000);
    uStack_564 = 0;
    if (*(int *)(*(long *)(param_1 + 0x78) + 0x734) == 1) {
      uStack_250._0_4_ = 0x302;
      uStack_5d0 = (undefined8 *)CONCAT44((int)uVar18,0x303);
      uStack_580 = (undefined8 *)CONCAT44((int)uVar25,1);
      iVar12 = 0xbe2;
      _glIsEnabled();
      bVar7 = iVar12 != 0;
      _glGetIntegerv(0x80c9,&uStack_250);
      _glGetIntegerv(0x80c8,&uStack_5d0);
      _glGetIntegerv(0x80cb,&uStack_580);
      _glGetIntegerv(0x80ca,&uStack_564);
    }
    plVar9 = *(long **)(param_1 + 0xc0);
    uVar41 = *(undefined8 *)(param_1 + 200);
    __ZNSt3__115recursive_mutex4lockEv(uVar41);
    _auStack_560 = pmStack_5e0;
    (**(code **)(*plVar9 + 0x30))(plVar9,0,0,0,0,auStack_560,1);
    if (*(int *)(*(long *)(param_1 + 0x78) + 0x734) == 1) {
      if (bVar7) {
        _glEnable(0xbe2);
      }
      else {
        _glDisable(0xbe2);
      }
      _glBlendFuncSeparate
                ((uint)uStack_250,(ulong)uStack_5d0 & 0xffffffff,(ulong)uStack_580 & 0xffffffff,
                 uStack_564);
    }
    __ZNSt3__115recursive_mutex6unlockEv(uVar41);
    plVar9 = (long *)CONCAT44(uStack_634,uStack_638);
    if (plVar9 != (long *)0x0) {
      plVar30 = plVar9 + 1;
      do {
        lVar14 = *plVar30;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar7) {
          *plVar30 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plStack_628 != (long *)0x0) {
      plVar9 = plStack_628 + 1;
      do {
        lVar14 = *plVar9;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_628);
      }
    }
    plVar9 = plStack_608;
    if (plStack_608 != (long *)0x0) {
      plVar30 = plStack_608 + 1;
      do {
        lVar14 = *plVar30;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar7) {
          *plVar30 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_608 + 0x10))(plStack_608);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_5f8;
    if (plStack_5f8 != (long *)0x0) {
      plVar30 = plStack_5f8 + 1;
      do {
        lVar14 = *plVar30;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar7) {
          *plVar30 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_5f8 + 0x10))(plStack_5f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_5e8;
    if (plStack_5e8 != (long *)0x0) {
      plVar30 = plStack_5e8 + 1;
      do {
        lVar14 = *plVar30;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar7) {
          *plVar30 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_5e8 + 0x10))(plStack_5e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plStack_5d8 != (long *)0x0) {
      plVar9 = plStack_5d8 + 1;
      do {
        lVar14 = *plVar9;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_5d8);
      }
    }
    __ZNSt3__115recursive_mutex6unlockEv(uVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (cVar3 == '\x02') {
      _auStack_560 = (mach_header *)((long)&MACH_HEADER.magic + 1);
      uVar13 = (uint)bVar2 << 1;
      goto LAB_10a8bfac8;
    }
    if (cVar3 == '\x01') {
      _auStack_560 = (mach_header *)((long)&MACH_HEADER.magic + 1);
      goto LAB_10a8bfab4;
    }
  }
  func_0x000105688514(&UNK_10f68109f);
LAB_10a8c0398:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c039c);
  (*pcVar6)();
}



/* Entry: 10a8c05bc; end: 10a8c06a7;  */

undefined * FUN_10a8c05bc(long param_1,undefined *param_2,float *param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar6 = (int)param_2;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      return param_2;
    }
    if (iVar6 != 1) {
LAB_10a8c0694:
      puVar4 = &UNK_10f68106a;
      FUN_10a00946c();
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_10f6802d8;
      uStack_88 = 0xffffffffffffffff;
      uStack_90 = 0x100000064;
      puStack_80 = &UNK_10f67fb58;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      puStack_70 = &UNK_10f67fb58;
      uStack_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      puVar4[0x1ac] = 1;
      FUN_10a0050a8(puVar4 + 0x168,&puStack_a8);
      puVar5 = puVar4;
      FUN_10a0051e8(puVar4,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                    uStack_88._4_4_);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x0001098946ac(puVar4,puStack_a8);
      }
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_10f6802e6;
      uStack_88 = 0xffffffffffffffff;
      uStack_90 = 0x100000064;
      puStack_80 = &UNK_10f67fb58;
      puStack_70 = (undefined *)0x0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010a8c0934(puVar4,&puStack_a8,0);
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_10f56ea6a;
      uStack_88 = 0xffffffffffffffff;
      uStack_90 = 0x100000064;
      puStack_80 = &UNK_10f67fb58;
      puStack_70 = (undefined *)0x0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010a8c0934();
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_10f6802ea;
      uStack_88 = 0xffffffffffffffff;
      uStack_90 = 0x100000064;
      puStack_80 = &UNK_10f67fb58;
      puStack_70 = (undefined *)0x0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010a8c0934();
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_10f6442b5;
      uStack_88 = 0xffffffffffffffff;
      uStack_90 = 0x100000064;
      puStack_80 = &UNK_10f67fb58;
      puStack_70 = (undefined *)0x0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010a8c0934();
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_10f6802f6;
      uStack_88 = 0xffffffffffffffff;
      uStack_90 = 0x100000019;
      uStack_78 = 0;
      puStack_80 = (undefined *)0x0;
      uStack_68 = 0;
      puStack_70 = (undefined *)0x0;
      uStack_60 = 0;
      uStack_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010a8c0934();
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_10f6802fd;
      uStack_88 = 0xffffffffffffffff;
      uStack_90 = 0x100000064;
      puStack_80 = &UNK_10f67fb58;
      puStack_70 = (undefined *)0x0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010a8c0934();
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_10f680307;
      uStack_88 = 0xffffffffffffffff;
      uStack_90 = 0x100000019;
      uStack_78 = 0;
      puStack_80 = (undefined *)0x0;
      uStack_68 = 0;
      puStack_70 = (undefined *)0x0;
      uStack_60 = 0;
      uStack_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010a8c0934();
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_10f68030b;
      uStack_88 = 0xffffffffffffffff;
      uStack_90 = 0x100000064;
      puStack_80 = &UNK_10f67fb58;
      puStack_70 = (undefined *)0x0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010a8c0934();
      FUN_10a003ff4();
      return puVar4;
    }
    if ((param_4 & 1) == 0) {
      return (undefined *)(ulong)(*(byte *)(*(long *)(param_1 + 0x78) + 0x31) ^ 1);
    }
  }
  else if (iVar6 == 2) {
    if ((param_4 & 1) == 0) {
      uVar7 = 0;
      if (*(char *)(*(long *)(param_1 + 0x78) + 0x31) == '\0') {
        uVar7 = 2;
      }
      return (undefined *)(ulong)uVar7;
    }
  }
  else {
    if (iVar6 != 3) goto LAB_10a8c0694;
    if (*(char *)(*(long *)(param_1 + 0x78) + 0x32) != '\x01') {
      return (undefined *)0x3;
    }
    fVar8 = *param_3;
    bVar1 = false;
    if ((param_3[1] == 0.0) && (bVar1 = false, !NAN(fVar8))) {
      bVar1 = fVar8 == 0.0;
    }
    fVar9 = param_3[3];
    bVar1 = (bool)(bVar1 & param_3[2] == 0.0);
    if ((!bVar1) || (fVar9 != 0.0)) {
      bVar2 = false;
      if ((param_3[1] == 1.0) && (bVar2 = false, !NAN(fVar8))) {
        bVar2 = fVar8 == 1.0;
      }
      bVar3 = false;
      if (((bool)(bVar2 & param_3[2] == 1.0 | bVar1)) && (bVar3 = false, !NAN(fVar9))) {
        bVar3 = fVar9 == 1.0;
      }
      if (!bVar3) {
        return (undefined *)0x3;
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10a8c06a8; end: 10a8c09d7;  */

void FUN_10a8c06a8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6802d8;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f67fb58;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6802e6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8c0934(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f56ea6a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8c0934();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6802ea;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8c0934();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6442b5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8c0934();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6802f6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8c0934();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6802fd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8c0934();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f680307;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8c0934();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68030b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8c0934();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a8c09d8; end: 10a8c0aab;  */

undefined1 FUN_10a8c09d8(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  undefined1 auStack_38 [24];
  
  uVar4 = 0;
  piVar2 = (int *)&UNK_10e4e120c;
  while( true ) {
    for (; piVar3 = (int *)(&UNK_10e4e11cc + uVar4 * 8), param_1 <= *piVar3; uVar4 = uVar4 << 1 | 1)
    {
      if (3 < uVar4) goto LAB_10a8c0a40;
      piVar2 = piVar3;
    }
    piVar3 = piVar2;
    if (2 < uVar4) break;
    uVar4 = uVar4 * 2 + 2;
  }
LAB_10a8c0a40:
  if ((piVar3 != (int *)&UNK_10e4e120c) && (*piVar3 <= param_1 && piVar3 != (int *)&UNK_10e4e120c))
  {
    return (char)piVar3[1];
  }
  FUN_10a0ee900(auStack_38,&UNK_10f68031b,0x25);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8c0a90);
  (*pcVar1)();
}



/* Entry: 10a8c0aac; end: 10a8c0b1b;  */

undefined1  [16] FUN_10a8c0aac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f6810b4;
  return auVar1;
}



/* Entry: 10a8c0b1c; end: 10a8c0bd3;  */

void FUN_10a8c0b1c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f67fb58;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a8c0bd4(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f680341;
  puStack_70 = &UNK_10f67fb58;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xa7;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8e4c08();
  FUN_10a8e4d88(param_1);
  return;
}



/* Entry: 10a8c0bd4; end: 10a8c0cab;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c0c6c) */

undefined1  [16] FUN_10a8c0bd4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6810b4,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8e4b0c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8c0cac; end: 10a8c0dd7;  */

undefined8 *
FUN_10a8c0cac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aae9d08();
  *puVar1 = &PTR_DAT_110c2c480;
  puVar1[2] = &PTR_FUN_110c2c520;
  puVar1[7] = &PTR_FUN_110c2c578;
  puVar1[0x1e] = 0;
  puVar1[0x22] = 0;
  *(undefined1 *)(puVar1 + 0x23) = 0;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  *(undefined1 *)(puVar1 + 0x32) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  *(undefined8 *)((long)puVar1 + 0x179) = 0;
  *(undefined8 *)((long)puVar1 + 0x171) = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x33] = 0;
  *(undefined1 *)(puVar1 + 0x36) = param_4;
  *(undefined1 *)((long)puVar1 + 0x1b1) = 0;
  func_0x00010aae9fd8();
  param_1[0x35] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10a8c0dd8(param_1);
  }
  return param_1;
}



/* Entry: 10a8c0dd8; end: 10a8c0e37;  */

void FUN_10a8c0dd8(long param_1)

{
  long lVar1;
  
  FUN_10a8c11c4();
  lVar1 = *(long *)(param_1 + 0xe0);
  if ((lVar1 == 0) || (___dynamic_cast(lVar1,&PTR_DAT_110c5ef38,&PTR_DAT_110c5ede8,0), lVar1 == 0))
  {
    FUN_10a8c17b0(param_1);
  }
  else {
    FUN_10a8c12ac(param_1);
  }
  *(undefined1 *)(param_1 + 0x1b1) = 1;
  return;
}



/* Entry: 10a8c0e38; end: 10a8c11c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c0ed8) */

undefined8 * FUN_10a8c0e38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  char cStack_61;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  
  puStack_48 = param_2;
  (**(code **)(*(long *)*param_3 + 0x10))();
  FUN_109d2e4f8(&uStack_60);
  uVar6 = 0;
  FUN_10ad02150();
  if ((uVar6 & 1) == 0) {
    FUN_10a00946c(&UNK_10f6810c2);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8c10d8);
    (*pcVar5)();
  }
  FUN_10a0ff18c(auStack_a8,&uStack_60,2);
  FUN_10a79ff5c(&uStack_c0,&uStack_c1,&puStack_48,auStack_a8);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(auStack_a8[0]);
  }
  FUN_10aae9d08(param_1,param_2,&uStack_c0);
  plVar4 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *param_1 = &PTR_DAT_110c2c480;
  param_1[2] = &PTR_FUN_110c2c520;
  param_1[7] = &PTR_FUN_110c2c578;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((long)param_1 + 0x179) = 0;
  *(undefined8 *)((long)param_1 + 0x171) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x36) = 1;
  FUN_10a8c11c4(param_1);
  if (*(char *)((long)param_3 + 0x2f) < '\0') {
    func_0x000107c3192c(&uStack_60,param_3[3],param_3[4]);
  }
  else {
    uStack_58 = param_3[4];
    uStack_60 = param_3[3];
    uStack_50 = param_3[5];
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  param_1[0xc] = uStack_58;
  param_1[0xb] = uStack_60;
  param_1[0xd] = uStack_50;
  uStack_50 = uStack_50 & 0xffffffffffffff;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_3 + 0xf);
  puVar7 = param_1 + 0x2d;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar7,param_3 + 3);
  FUN_10a174bec(param_1 + 0x23,puVar7);
  FUN_109d2e780(auStack_a8,param_3);
  FUN_10a8c1e10(auStack_a8,param_1 + 0x27);
  FUN_10a8c1f14(auStack_90,param_1 + 0x2a);
  FUN_10a8c2014(param_1[0x27],param_1[0x28]);
  if (*(char *)((long)param_3 + 0x47) < '\0') {
    func_0x000107c3192c(&uStack_c0,param_3[6],param_3[7]);
  }
  else {
    plStack_b8 = (long *)param_3[7];
    uStack_c0 = param_3[6];
    lStack_b0 = param_3[8];
  }
  FUN_10a8c2100(param_1,&uStack_c0);
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(uStack_78);
  }
  puStack_48 = auStack_90;
  FUN_10a04b2ac(&puStack_48);
  puStack_48 = auStack_a8;
  FUN_10a04b2ac(&puStack_48);
  *(undefined1 *)((long)param_1 + 0x1b1) = 1;
  return param_1;
}



/* Entry: 10a8c11c4; end: 10a8c11ff;  */

undefined *
FUN_10a8c11c4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  puVar4 = param_1;
  if (*(long *)(param_1 + 0x1a8) == 0) {
    func_0x00010aae9fd8();
    *(undefined **)(param_1 + 0x1a8) = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = &UNK_10f6803a0;
      FUN_10a00946c(&UNK_10f6803a0);
      uStack_60 = param_2;
      FUN_10a377e98(auStack_70,&uStack_51,&uStack_60);
      FUN_10a8c0cac(puVar4,param_2,auStack_70,param_4);
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      return puVar4;
    }
  }
  return puVar4;
}



/* Entry: 10a8c1200; end: 10a8c12ab;  */

undefined8
FUN_10a8c1200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  uStack_40 = param_2;
  FUN_10a377e98(auStack_50,&uStack_31,&uStack_40);
  FUN_10a8c0cac(param_1,param_2,auStack_50,param_4);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return param_1;
}



/* Entry: 10a8c12ac; end: 10a8c17af;  */

void FUN_10a8c12ac(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar7 = *(long *)(param_1 + 0xe0);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    ___dynamic_cast(lVar7,&PTR_DAT_110c5ef38,&PTR_DAT_110c5ede8,0);
  }
  lVar8 = *(long *)(lVar7 + 0xf0);
  if ((lVar8 == 0) || (___dynamic_cast(lVar8,&PTR_DAT_110c46558,&PTR_DAT_110c2ca08,0), lVar8 == 0))
  {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    FUN_10a8c17b0(param_1);
    return;
  }
  plVar17 = *(long **)(lVar7 + 0xf8);
  if (plVar17 != (long *)0x0) {
    plVar20 = plVar17 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = *plVar20 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(char *)(param_1 + 400) == '\x01') {
    FUN_10ad77c04(param_1 + 0x180);
    *(undefined1 *)(param_1 + 400) = 0;
  }
  *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(lVar8 + 0x1b0);
  func_0x00010a1cca60(param_1 + 0x118,lVar8 + 0x118);
  lVar7 = lVar8 + 0x168;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x168);
  if (lVar8 == param_1) goto LAB_10a8c16e0;
  plVar20 = *(long **)(lVar8 + 0x138);
  plVar1 = *(long **)(lVar8 + 0x140);
  uVar16 = (long)plVar1 - (long)plVar20;
  uVar11 = *(ulong *)(param_1 + 0x148);
  plVar18 = *(long **)(param_1 + 0x138);
  if (uVar11 - (long)plVar18 < uVar16) {
    plVar22 = (long *)((long)uVar16 >> 4);
    if (plVar18 != (long *)0x0) {
      plVar9 = *(long **)(param_1 + 0x140);
      plVar12 = plVar18;
      if (plVar9 != plVar18) {
        do {
          plVar9 = plVar9 + -2;
          func_0x00010a6d1c00();
        } while (plVar9 != plVar18);
        plVar12 = *(long **)(param_1 + 0x138);
      }
      *(long **)(param_1 + 0x140) = plVar18;
      __ZdlPv(plVar12);
      uVar11 = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    if ((ulong)plVar22 >> 0x3c == 0) {
      plVar18 = (long *)((long)uVar11 >> 3);
      if ((long *)((long)uVar11 >> 3) <= plVar22) {
        plVar18 = plVar22;
      }
      if (0x7fffffffffffffef < uVar11) {
        plVar18 = (long *)0xfffffffffffffff;
      }
      if ((ulong)plVar18 >> 0x3c == 0) {
        FUN_10a8d422c();
        *(long **)(param_1 + 0x138) = plVar18;
        *(long **)(param_1 + 0x140) = plVar18;
        *(long **)(param_1 + 0x148) = plVar18 + lVar7 * 2;
        for (; plVar20 != plVar1; plVar20 = plVar20 + 2) {
          lVar13 = plVar20[1];
          lVar24 = *plVar20;
          plVar18[1] = plVar20[1];
          *plVar18 = lVar24;
          if (lVar13 != 0) {
            plVar22 = (long *)(lVar13 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar5) {
                *plVar22 = *plVar22 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plVar18 = plVar18 + 2;
        }
        *(long **)(param_1 + 0x140) = plVar18;
        goto LAB_10a8c153c;
      }
    }
    FUN_10a8d4218();
  }
  else {
    plVar22 = *(long **)(param_1 + 0x140);
    if ((ulong)((long)plVar22 - (long)plVar18) < uVar16) {
      plVar12 = (long *)((long)plVar20 + ((long)plVar22 - (long)plVar18));
      if (plVar22 != plVar18) {
        do {
          plVar22 = plVar20 + 2;
          lVar7 = *plVar20;
          func_0x00010a8d4680(plVar18,lVar7,plVar20[1]);
          plVar18 = plVar18 + 2;
          plVar20 = plVar22;
        } while (plVar22 != plVar12);
        plVar22 = *(long **)(param_1 + 0x140);
      }
      for (; plVar12 != plVar1; plVar12 = plVar12 + 2) {
        lVar13 = plVar12[1];
        lVar24 = *plVar12;
        plVar22[1] = plVar12[1];
        *plVar22 = lVar24;
        if (lVar13 != 0) {
          plVar20 = (long *)(lVar13 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = *plVar20 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar22 = plVar22 + 2;
      }
      *(long **)(param_1 + 0x140) = plVar22;
    }
    else {
      if (plVar20 != plVar1) {
        do {
          plVar22 = plVar20 + 2;
          lVar7 = *plVar20;
          func_0x00010a8d4680(plVar18,lVar7,plVar20[1]);
          plVar18 = plVar18 + 2;
          plVar20 = plVar22;
        } while (plVar22 != plVar1);
        plVar22 = *(long **)(param_1 + 0x140);
      }
      while (plVar22 != plVar18) {
        plVar22 = plVar22 + -2;
        func_0x00010a6d1c00();
      }
      *(long **)(param_1 + 0x140) = plVar18;
    }
LAB_10a8c153c:
    puVar21 = *(undefined8 **)(lVar8 + 0x150);
    puVar2 = *(undefined8 **)(lVar8 + 0x158);
    uVar16 = (long)puVar2 - (long)puVar21;
    uVar11 = *(ulong *)(param_1 + 0x160);
    puVar19 = *(undefined8 **)(param_1 + 0x150);
    if (uVar16 <= uVar11 - (long)puVar19) {
      puVar23 = *(undefined8 **)(param_1 + 0x158);
      if ((ulong)((long)puVar23 - (long)puVar19) < uVar16) {
        puVar14 = (undefined8 *)((long)puVar21 + ((long)puVar23 - (long)puVar19));
        if (puVar23 != puVar19) {
          do {
            puVar23 = puVar21 + 2;
            func_0x00010a8d46f4(puVar19,*puVar21,puVar21[1]);
            puVar19 = puVar19 + 2;
            puVar21 = puVar23;
          } while (puVar23 != puVar14);
          puVar23 = *(undefined8 **)(param_1 + 0x158);
        }
        for (; puVar14 != puVar2; puVar14 = puVar14 + 2) {
          lVar7 = puVar14[1];
          uVar15 = *puVar14;
          puVar23[1] = puVar14[1];
          *puVar23 = uVar15;
          if (lVar7 != 0) {
            plVar20 = (long *)(lVar7 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar5) {
                *plVar20 = *plVar20 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar23 = puVar23 + 2;
        }
        *(undefined8 **)(param_1 + 0x158) = puVar23;
      }
      else {
        if (puVar21 != puVar2) {
          do {
            puVar23 = puVar21 + 2;
            func_0x00010a8d46f4(puVar19,*puVar21,puVar21[1]);
            puVar19 = puVar19 + 2;
            puVar21 = puVar23;
          } while (puVar23 != puVar2);
          puVar23 = *(undefined8 **)(param_1 + 0x158);
        }
        while (puVar23 != puVar19) {
          puVar23 = puVar23 + -2;
          FUN_10a8dd3f8();
        }
        *(undefined8 **)(param_1 + 0x158) = puVar19;
      }
LAB_10a8c16e0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0xf0,lVar8 + 0xf0);
      func_0x000109381b20(auStack_60,lVar8 + 0x108);
      uVar3 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = auStack_60[0];
      uVar15 = *(undefined8 *)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x110) = uStack_58;
      auStack_60[0] = uVar3;
      uStack_58 = uVar15;
      func_0x000109380ffc(&uStack_58);
      if (plVar17 != (long *)0x0) {
        plVar20 = plVar17 + 1;
        do {
          lVar7 = *plVar20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar17);
          return;
        }
      }
      return;
    }
    puVar23 = (undefined8 *)((long)uVar16 >> 4);
    if (puVar19 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x158);
      puVar14 = puVar19;
      if (puVar10 != puVar19) {
        do {
          puVar10 = puVar10 + -2;
          FUN_10a8dd3f8();
        } while (puVar10 != puVar19);
        puVar14 = *(undefined8 **)(param_1 + 0x150);
      }
      *(undefined8 **)(param_1 + 0x158) = puVar19;
      __ZdlPv(puVar14);
      uVar11 = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    if ((ulong)puVar23 >> 0x3c == 0) {
      puVar19 = (undefined8 *)((long)uVar11 >> 3);
      if ((undefined8 *)((long)uVar11 >> 3) <= puVar23) {
        puVar19 = puVar23;
      }
      if (0x7fffffffffffffef < uVar11) {
        puVar19 = (undefined8 *)0xfffffffffffffff;
      }
      if ((ulong)puVar19 >> 0x3c == 0) {
        FUN_10a8d431c();
        *(undefined8 **)(param_1 + 0x150) = puVar19;
        *(undefined8 **)(param_1 + 0x158) = puVar19;
        *(undefined8 **)(param_1 + 0x160) = puVar19 + lVar7 * 2;
        for (; puVar21 != puVar2; puVar21 = puVar21 + 2) {
          lVar7 = puVar21[1];
          uVar15 = *puVar21;
          puVar19[1] = puVar21[1];
          *puVar19 = uVar15;
          if (lVar7 != 0) {
            plVar20 = (long *)(lVar7 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar5) {
                *plVar20 = *plVar20 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar19 = puVar19 + 2;
        }
        *(undefined8 **)(param_1 + 0x158) = puVar19;
        goto LAB_10a8c16e0;
      }
    }
    FUN_10a8d4308();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c179c);
  (*pcVar6)();
}



/* Entry: 10a8c17b0; end: 10a8c1847;  */

void FUN_10a8c17b0(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  FUN_10a8c1ca8();
  FUN_10a8c1ba8(auStack_30,param_1);
  FUN_10a8c1d48(param_1,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a8c1848; end: 10a8c1a43;  */

long * FUN_10a8c1848(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  byte bStack_50;
  undefined2 uStack_48;
  byte bStack_46;
  byte bStack_45;
  long lStack_38;
  long *plStack_30;
  undefined1 uStack_21;
  
  plVar6 = &lStack_80;
  if ((*(byte *)(param_1 + 0x32) & 1) == 0) {
    plVar5 = param_1;
    func_0x00010aaea03c(&lStack_80);
    if (lStack_80 == 0) {
      plVar6 = &lStack_38;
    }
    else {
      lStack_38 = lStack_80 + 8;
      plStack_30 = plStack_78;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar5 = plVar6;
      }
    }
    if (lStack_38 == 0) {
      FUN_10a00946c(&UNK_10f68034d);
    }
    else {
      lVar7 = param_1[0x36];
      func_0x00010ad031c0();
      if (*(char *)((long)plVar5 + 0x17) < '\0') {
        func_0x000107c3192c(&lStack_80,*plVar5,plVar5[1]);
      }
      else {
        plStack_78 = (long *)plVar5[1];
        lStack_80 = *plVar5;
        lStack_70 = plVar5[2];
      }
      FUN_10a1ccb30(auStack_68,param_1 + 0x23);
      uStack_48 = 0;
      if ((char)lVar7 != '\x01') {
        uStack_48 = 0x100;
      }
      bStack_46 = *(byte *)(param_1 + 0x36);
      bStack_45 = bStack_46 < 6 & (byte)(0x34 >> (ulong)(bStack_46 & 0x1f));
      if ((char)param_1[0x32] == '\x01') {
        FUN_10ad77c04(param_1 + 0x30);
        *(undefined1 *)(param_1 + 0x32) = 0;
      }
      FUN_10ad779e0(param_1 + 0x30,&uStack_21,&lStack_38,&lStack_80);
      *(undefined1 *)(param_1 + 0x32) = 1;
      if (((bStack_50 & 1) != 0) && (cStack_51 < '\0')) {
        __ZdlPv(auStack_68[0]);
      }
      if (lStack_70 < 0) {
        __ZdlPv(lStack_80);
      }
      plVar6 = plStack_30;
      if (plStack_30 != (long *)0x0) {
        plVar5 = plStack_30 + 1;
        do {
          lVar7 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_30 + 0x10))(plStack_30);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if ((*(byte *)(param_1 + 0x32) & 1) != 0) goto LAB_10a8c19e0;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8c1a04);
    (*pcVar4)();
  }
LAB_10a8c19e0:
  return param_1 + 0x30;
}



/* Entry: 10a8c1a44; end: 10a8c1b43;  */

void FUN_10a8c1a44(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar4 = *(long *)(param_2 + 0x198);
  if (lVar4 == 0) {
    FUN_10a8c11c4(param_2);
    FUN_10a08d2e0(auStack_60,*(long *)(param_2 + 0x1a8) + 0x10);
    lVar4 = param_2;
    FUN_10a8c1848(param_2);
    FUN_10a8e4e9c(auStack_48,&uStack_31,auStack_60,lVar4);
    FUN_10a8c1b44(param_2 + 0x198,auStack_48);
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    lVar4 = *(long *)(param_2 + 0x198);
  }
  lVar5 = *(long *)(param_2 + 0x1a0);
  *param_1 = lVar4;
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
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



/* Entry: 10a8c1b44; end: 10a8c1ba7;  */

undefined8 * FUN_10a8c1b44(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
  return param_1;
}



/* Entry: 10a8c1ba8; end: 10a8c1ca7;  */

void FUN_10a8c1ba8(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_50 [24];
  byte bStack_38;
  long lStack_28;
  
  puVar2 = auStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a8c1848();
  FUN_10ad7739c(auStack_50,*param_2);
  iVar3 = 1;
  FUN_109cdb8c0(param_1,auStack_50);
  if ((ulong)bStack_38 < 4) {
    (*(code *)(&PTR_DAT_110af4bf0)[bStack_38])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
    ___stack_chk_fail();
    if (iVar3 == 0) {
      __Unwind_Resume();
      if ((puVar2[0x1b0] == '\x01') || (puVar2[0x130] != '\x01')) {
        FUN_10a08d2e0(&uStack_90,*(long *)(puVar2 + 0x1a8) + 0x10);
      }
      else if ((char)puVar2[0x12f] < '\0') {
        func_0x000107c3192c(&uStack_90,*(undefined8 *)(puVar2 + 0x118),
                            *(undefined8 *)(puVar2 + 0x120));
      }
      else {
        uStack_88 = *(undefined8 *)(puVar2 + 0x120);
        uStack_90 = *(undefined8 *)(puVar2 + 0x118);
        uStack_80 = *(undefined8 *)(puVar2 + 0x128);
      }
      if ((char)puVar2[0x17f] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar2 + 0x168));
      }
      *(undefined8 *)(puVar2 + 0x170) = uStack_88;
      *(undefined8 *)(puVar2 + 0x168) = uStack_90;
      *(undefined8 *)(puVar2 + 0x178) = uStack_80;
      return;
    }
    ___cxa_begin_catch(puVar2);
    FUN_10a00946c(&UNK_10f680379);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8c1c8c);
  (*pcVar1)();
}



/* Entry: 10a8c1ca8; end: 10a8c1d47;  */

void FUN_10a8c1ca8(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((*(char *)(param_1 + 0x1b0) == '\x01') || (*(char *)(param_1 + 0x130) != '\x01')) {
    FUN_10a08d2e0(&uStack_40,*(long *)(param_1 + 0x1a8) + 0x10);
  }
  else if (*(char *)(param_1 + 0x12f) < '\0') {
    func_0x000107c3192c(&uStack_40,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120)
                       );
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x120);
    uStack_40 = *(undefined8 *)(param_1 + 0x118);
    uStack_30 = *(undefined8 *)(param_1 + 0x128);
  }
  if (*(char *)(param_1 + 0x17f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x168));
  }
  *(undefined8 *)(param_1 + 0x170) = uStack_38;
  *(undefined8 *)(param_1 + 0x168) = uStack_40;
  *(undefined8 *)(param_1 + 0x178) = uStack_30;
  return;
}



/* Entry: 10a8c1d48; end: 10a8c1e0f;  */

void FUN_10a8c1d48(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f6803bd;
  uStack_28 = 0x23;
  if ((long *)*param_2 != (long *)0x0) {
    (**(code **)(*(long *)*param_2 + 0x20))();
    FUN_10a8c1e10();
    (**(code **)(*(long *)*param_2 + 0x28))();
    FUN_10a8c1f14();
    FUN_10a8c2014(*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140));
    (**(code **)(*(long *)*param_2 + 0x30))(auStack_48);
    FUN_10a8c2100(param_1,auStack_48);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    return;
  }
  ppuVar6 = &puStack_30;
  FUN_10a0edfc4();
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  __Unwind_Resume();
  lVar8 = *param_2;
  lVar7 = param_2[1];
  while (lVar7 != lVar8) {
    lVar7 = lVar7 + -0x10;
    func_0x00010a6d1c00();
  }
  param_2[1] = lVar8;
  puVar2 = ppuVar6[1];
  for (puVar9 = *ppuVar6; puVar9 != puVar2; puVar9 = puVar9 + 0x58) {
    FUN_10a6d1844(&plStack_90,&uStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plStack_90 + 6,puVar9);
    uStack_a0 = NEON_ucvtf(*(undefined8 *)(puVar9 + 0x18),4);
    uStack_98 = NEON_ucvtf(*(undefined4 *)(puVar9 + 0x20));
    (**(code **)(*plStack_90 + 0x40))(plStack_90,&uStack_a0);
    FUN_10a8b9a24(param_2,&plStack_90);
    plVar5 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a8c1e10; end: 10a8c1f13;  */

void FUN_10a8c1e10(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = *param_2;
  lVar5 = param_2[1];
  while (lVar5 != lVar7) {
    lVar5 = lVar5 + -0x10;
    func_0x00010a6d1c00();
  }
  param_2[1] = lVar7;
  lVar5 = param_1[1];
  for (lVar7 = *param_1; lVar7 != lVar5; lVar7 = lVar7 + 0x58) {
    FUN_10a6d1844(&plStack_40,&uStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plStack_40 + 6,lVar7);
    uStack_50 = NEON_ucvtf(*(undefined8 *)(lVar7 + 0x18),4);
    uStack_48 = NEON_ucvtf(*(undefined4 *)(lVar7 + 0x20));
    (**(code **)(*plStack_40 + 0x40))(plStack_40,&uStack_50);
    FUN_10a8b9a24(param_2,&plStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a8c1f14; end: 10a8c2013;  */

void FUN_10a8c1f14(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = *param_2;
  lVar5 = param_2[1];
  while (lVar5 != lVar7) {
    lVar5 = lVar5 + -0x10;
    FUN_10a8dd3f8();
  }
  param_2[1] = lVar7;
  lVar5 = param_1[1];
  for (lVar7 = *param_1; lVar7 != lVar5; lVar7 = lVar7 + 0x58) {
    func_0x00010a8e503c(&plStack_40);
    plVar4 = plStack_40;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plStack_40 + 6,lVar7);
    uStack_50 = NEON_ucvtf(*(undefined8 *)(lVar7 + 0x18),4);
    uStack_48 = NEON_ucvtf(*(undefined4 *)(lVar7 + 0x20));
    (**(code **)(*plVar4 + 0x40))(plVar4,&uStack_50);
    FUN_10a8b9c68(param_2,&plStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a8c2014; end: 10a8c20ff;  */

void FUN_10a8c2014(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  if (param_1 != param_2) {
    do {
      if (*(uint *)(*param_1 + 0x50) < 5) {
        plVar4 = (long *)0x110;
        __Znwm();
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = (long)&PTR_FUN_110c2acc0;
        plVar1 = plVar4 + 3;
        FUN_10a8cd1bc(plVar1);
        plStack_50 = plVar1;
        plStack_48 = plVar4;
        FUN_10a6d6374(&plStack_50,plVar4 + 8,plVar1);
        *(undefined1 *)((long)plStack_50 + 99) = 1;
        func_0x00010a6c8b40(*param_1 + 0x58,&plStack_50);
        plVar1 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar4 = plStack_48 + 1;
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      param_1 = param_1 + 2;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a8c2100; end: 10a8c2403;  */

void FUN_10a8c2100(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  byte bVar9;
  code *pcVar10;
  char **ppcVar11;
  char *pcVar12;
  char **ppcVar13;
  long *plVar14;
  char *pcVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined2 *puVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  char *pcStack_170;
  char **ppcStack_168;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  byte abStack_c8 [8];
  char *pcStack_c0;
  char *pcStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  char *apcStack_68 [3];
  char **ppcStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_50 = (char **)0x0;
  FUN_109fc89b4(auStack_78,param_2,apcStack_68,0,0);
  pcVar12 = (char *)(param_1 + 0x108);
  uVar5 = *(undefined1 *)(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x108) = auStack_78[0];
  uVar18 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = uStack_70;
  auStack_78[0] = uVar5;
  uStack_70 = uVar18;
  func_0x000109380ffc(&uStack_70);
  ppcVar11 = ppcStack_50;
  if (ppcStack_50 == apcStack_68) {
    lVar19 = 0x20;
LAB_10a8c219c:
    (**(code **)(*ppcStack_50 + lVar19))();
  }
  else if (ppcStack_50 != (char **)0x0) {
    lVar19 = 0x28;
    goto LAB_10a8c219c;
  }
  cVar6 = *pcVar12;
  if (cVar6 == '\t') {
    if (*(char *)(param_1 + 0x107) < '\0') {
      *(undefined8 *)(param_1 + 0xf8) = 2;
      puVar20 = *(undefined2 **)(param_1 + 0xf0);
    }
    else {
      puVar20 = (undefined2 *)(param_1 + 0xf0);
      *(undefined1 *)(param_1 + 0x107) = 2;
    }
    *puVar20 = 0x7d7b;
    *(undefined1 *)(puVar20 + 1) = 0;
  }
  else {
    lStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0x8000000000000000;
    pcStack_98 = pcVar12;
    if (cVar6 == '\x01') {
      lVar19 = *(long *)(param_1 + 0x110);
      FUN_109d21b74(lVar19,&PTR_DAT_110c266c8);
      cVar6 = *(char *)(param_1 + 0x108);
      lStack_90 = lVar19;
LAB_10a8c2240:
      lStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0x8000000000000000;
      if (cVar6 == '\x01') {
        lStack_b0 = *(long *)(param_1 + 0x110) + 8;
      }
      else {
        if (cVar6 == '\x02') {
          uStack_a8 = *(undefined8 *)(*(long *)(param_1 + 0x110) + 8);
          goto LAB_10a8c2264;
        }
        uStack_a0 = 1;
      }
    }
    else {
      if (cVar6 != '\x02') {
        uStack_80 = 1;
        goto LAB_10a8c2240;
      }
      uStack_a8 = *(undefined8 *)(*(long *)(param_1 + 0x110) + 8);
      uStack_88 = uStack_a8;
LAB_10a8c2264:
      uStack_a0 = 0x8000000000000000;
      lStack_b0 = 0;
    }
    ppcVar11 = &pcStack_98;
    pcStack_b8 = pcVar12;
    func_0x000109379420(ppcVar11,&pcStack_b8);
    if (((ulong)ppcVar11 & 1) == 0) {
      func_0x000109381b20(abStack_c8,pcVar12);
      pcStack_b8 = pcStack_98;
      uStack_a8 = uStack_88;
      lStack_b0 = lStack_90;
      uStack_a0 = uStack_80;
      func_0x000109386850(auStack_e8,pcVar12,&pcStack_b8);
      FUN_10a0c32e4(&pcStack_b8,pcVar12,0xffffffff,0x20,0,0);
      if (*(char *)(param_1 + 0x107) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
      }
      pcVar12 = pcStack_c0;
      bVar9 = abStack_c8[0];
      *(long *)(param_1 + 0xf8) = lStack_b0;
      *(char **)(param_1 + 0xf0) = pcStack_b8;
      *(undefined8 *)(param_1 + 0x100) = uStack_a8;
      abStack_c8[0] = 0;
      pcStack_c0 = (char *)0x0;
      *(byte *)(param_1 + 0x108) = bVar9;
      uStack_f0 = *(undefined8 *)(param_1 + 0x110);
      *(char **)(param_1 + 0x110) = pcVar12;
      func_0x000109380ffc(&uStack_f0);
      ppcVar11 = &pcStack_c0;
      func_0x000109380ffc(ppcVar11,abStack_c8[0]);
    }
    else {
      if (*(char *)(param_1 + 0x107) < '\0') {
        ppcVar11 = *(char ***)(param_1 + 0xf0);
        __ZdlPv();
      }
      uVar25 = param_2[1];
      uVar18 = *param_2;
      *(undefined8 *)(param_1 + 0x100) = param_2[2];
      *(undefined8 *)(param_1 + 0xf8) = uVar25;
      *(undefined8 *)(param_1 + 0xf0) = uVar18;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)param_2 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  plVar16 = (long *)(ulong)abStack_c8[0];
  func_0x000109380ffc(&pcStack_c0);
  __Unwind_Resume();
  FUN_10aae9ef4();
  pcVar12 = ppcVar11[0x1c];
  if ((pcVar12 != (char *)0x0) &&
     (___dynamic_cast(pcVar12,&PTR_DAT_110c5ef38,&PTR_DAT_110c5ede8,0), pcVar12 != (char *)0x0)) {
    if (ppcVar11[0x35] == (char *)0x0) {
      ppcVar13 = ppcVar11;
      func_0x00010aae9fd8();
      ppcVar11[0x35] = (char *)ppcVar13;
      if (ppcVar13 == (char **)0x0) {
        return;
      }
    }
    FUN_10a8c12ac(ppcVar11);
    goto LAB_10a8c28dc;
  }
  FUN_10a8c11c4(ppcVar11);
  plVar14 = plVar16;
  (**(code **)(*plVar16 + 0x200))(plVar16,&PTR_DAT_110c266d8);
  if ((int)plVar14 != 0) {
    (**(code **)(*plVar16 + 0xa8))(&plStack_188,plVar16,&PTR_DAT_110c266d8,&UNK_10f67fb58,0);
    ppcVar13 = ppcVar11 + 0x23;
    if (*(char *)(ppcVar11 + 0x26) == '\x01') {
      if (*(char *)((long)ppcVar11 + 0x12f) < '\0') {
        __ZdlPv(ppcVar11[0x23]);
        ppcVar11[0x24] = (char *)plStack_180;
        *ppcVar13 = (char *)plStack_188;
        ppcVar11[0x25] = (char *)plStack_178;
        if (((ulong)ppcVar11[0x26] & 1) == 0) {
LAB_10a8c2908:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10a8c290c);
          (*pcVar10)();
        }
      }
      else {
        ppcVar11[0x24] = (char *)plStack_180;
        *ppcVar13 = (char *)plStack_188;
        ppcVar11[0x25] = (char *)plStack_178;
      }
    }
    else {
      ppcVar11[0x24] = (char *)plStack_180;
      *ppcVar13 = (char *)plStack_188;
      ppcVar11[0x25] = (char *)plStack_178;
      *(undefined1 *)(ppcVar11 + 0x26) = 1;
    }
    if (*(char *)((long)ppcVar11 + 0x12f) < '\0') {
      ppcVar13 = (char **)ppcVar11[0x23];
      if (ppcVar11[0x24] != (char *)0x0) goto LAB_10a8c2544;
      __ZdlPv(ppcVar13);
    }
    else if (*(char *)((long)ppcVar11 + 0x12f) != '\0') {
LAB_10a8c2544:
      FUN_10ad772c4(ppcVar13);
      goto LAB_10a8c255c;
    }
    *(undefined1 *)(ppcVar11 + 0x26) = 0;
  }
LAB_10a8c255c:
  FUN_10a8c1ca8(ppcVar11);
  plVar14 = plVar16;
  (**(code **)(*plVar16 + 0x38))(plVar16,&PTR_DAT_110c266f8,1);
  *(char *)(ppcVar11 + 0x36) = (char)plVar14;
  if (((uint)plVar14 & 0xff) == 1) {
    FUN_10a8c11c4(ppcVar11);
    FUN_10a8c1ba8(&plStack_188,ppcVar11);
    FUN_10a8c1d48(ppcVar11,&plStack_188);
    if (plStack_180 != (long *)0x0) {
      plVar16 = plStack_180 + 1;
      do {
        lVar19 = *plVar16;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *plVar16 = lVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_180 + 0x10))(plStack_180);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_180);
      }
    }
  }
  else {
    pcVar12 = ppcVar11[0x27];
    pcVar15 = ppcVar11[0x28];
    while (pcVar15 != pcVar12) {
      pcVar15 = pcVar15 + -0x10;
      func_0x00010a6d1c00();
    }
    ppcVar11[0x28] = pcVar12;
    pcVar12 = ppcVar11[0x2a];
    pcVar15 = ppcVar11[0x2b];
    while (pcVar15 != pcVar12) {
      pcVar15 = pcVar15 + -0x10;
      FUN_10a8dd3f8();
    }
    ppcVar11[0x2b] = pcVar12;
    plVar14 = plVar16;
    (**(code **)(*plVar16 + 0x200))(plVar16,&PTR_DAT_110c26718);
    if ((int)plVar14 != 0) {
      (**(code **)(*plVar16 + 0x210))(plVar16,&PTR_DAT_110c26718);
      plVar14 = plVar16;
      (**(code **)(*plVar16 + 0x208))();
      if ((uint)plVar14 != 0) {
        uVar24 = 0;
        do {
          uVar17 = uVar24;
          (**(code **)(*plVar16 + 0x218))(plVar16);
          FUN_10a6d1844(&uStack_1a0,&plStack_188);
          pcVar12 = ppcVar11[0x28];
          if (pcVar12 < ppcVar11[0x29]) {
            *(long **)(pcVar12 + 8) = plStack_198;
            *(undefined8 *)pcVar12 = uStack_1a0;
            ppcVar11[0x28] = pcVar12 + 0x10;
          }
          else {
            pcVar15 = ppcVar11[0x27];
            lVar19 = (long)pcVar12 - (long)pcVar15;
            uVar2 = (lVar19 >> 4) + 1;
            if (uVar2 >> 0x3c != 0) {
              FUN_10a8d4218();
              goto LAB_10a8c2908;
            }
            uVar21 = (long)ppcVar11[0x29] - (long)pcVar15;
            uVar22 = (long)uVar21 >> 3;
            if (uVar22 <= uVar2) {
              uVar22 = uVar2;
            }
            if (0x7fffffffffffffef < uVar21) {
              uVar22 = 0xfffffffffffffff;
            }
            ppcStack_168 = ppcVar11 + 0x27;
            FUN_10a8d422c();
            puVar4 = (undefined8 *)(uVar22 + lVar19);
            puVar4[1] = plStack_198;
            *puVar4 = uStack_1a0;
            uStack_1a0 = 0;
            plStack_198 = (long *)0x0;
            pcVar12 = (char *)((long)puVar4 - ((long)ppcVar11[0x28] - (long)ppcVar11[0x27]));
            _memcpy(pcVar12);
            plStack_188 = (long *)ppcVar11[0x27];
            ppcVar11[0x27] = pcVar12;
            ppcVar11[0x28] = (char *)(puVar4 + 2);
            pcStack_170 = ppcVar11[0x29];
            ppcVar11[0x29] = (char *)(uVar22 + uVar17 * 0x10);
            plStack_180 = plStack_188;
            plStack_178 = plStack_188;
            func_0x00010a8d4260(&plStack_188);
            plVar8 = plStack_198;
            ppcVar11[0x28] = (char *)(puVar4 + 2);
            if (plStack_198 != (long *)0x0) {
              plVar3 = plStack_198 + 1;
              do {
                lVar19 = *plVar3;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar7) {
                  *plVar3 = lVar19 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plStack_198 + 0x10))(plStack_198);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
          }
          if (ppcVar11[0x27] == ppcVar11[0x28]) goto LAB_10a8c2908;
          (**(code **)(*plVar16 + 0x1f0))
                    (plVar16,&PTR_DAT_110c2ad00,*(undefined8 *)(ppcVar11[0x28] + -0x10));
          (**(code **)(*plVar16 + 0x220))(plVar16);
          uVar1 = (int)uVar24 + 1;
          uVar24 = (ulong)uVar1;
        } while (uVar1 != (uint)plVar14);
      }
      (**(code **)(*plVar16 + 0x220))(plVar16);
    }
    plVar14 = plVar16;
    (**(code **)(*plVar16 + 0x200))(plVar16,&PTR_DAT_110c26738);
    if ((int)plVar14 != 0) {
      (**(code **)(*plVar16 + 0x210))(plVar16,&PTR_DAT_110c26738);
      plVar14 = plVar16;
      (**(code **)(*plVar16 + 0x208))();
      if ((int)plVar14 != 0) {
        iVar23 = 0;
        do {
          (**(code **)(*plVar16 + 0x218))(plVar16,iVar23);
          func_0x00010a8e503c(&plStack_188);
          FUN_10a8c2944(ppcVar11 + 0x2a,&plStack_188);
          plVar8 = plStack_180;
          if (plStack_180 != (long *)0x0) {
            plVar3 = plStack_180 + 1;
            do {
              lVar19 = *plVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *plVar3 = lVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_180 + 0x10))(plStack_180);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          if (ppcVar11[0x2a] == ppcVar11[0x2b]) goto LAB_10a8c2908;
          (**(code **)(*plVar16 + 0x1f0))
                    (plVar16,&PTR_DAT_110c26758,*(undefined8 *)(ppcVar11[0x2b] + -0x10));
          (**(code **)(*plVar16 + 0x220))(plVar16);
          iVar23 = iVar23 + 1;
        } while (iVar23 != (int)plVar14);
      }
      (**(code **)(*plVar16 + 0x220))(plVar16);
    }
  }
LAB_10a8c28dc:
  *(undefined1 *)((long)ppcVar11 + 0x1b1) = 1;
  return;
}



/* Entry: 10a8c2404; end: 10a8c2943;  */

void FUN_10a8c2404(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  FUN_10aae9ef4();
  lVar8 = *(long *)(param_1 + 0xe0);
  if ((lVar8 != 0) && (___dynamic_cast(lVar8,&PTR_DAT_110c5ef38,&PTR_DAT_110c5ede8,0), lVar8 != 0))
  {
    if (*(long *)(param_1 + 0x1a8) == 0) {
      lVar8 = param_1;
      func_0x00010aae9fd8();
      *(long *)(param_1 + 0x1a8) = lVar8;
      if (lVar8 == 0) {
        return;
      }
    }
    FUN_10a8c12ac(param_1);
    goto LAB_10a8c28dc;
  }
  FUN_10a8c11c4(param_1);
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c266d8);
  if ((int)plVar9 != 0) {
    (**(code **)(*param_2 + 0xa8))(&plStack_88,param_2,&PTR_DAT_110c266d8,&UNK_10f67fb58,0);
    puVar14 = (undefined8 *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x130) == '\x01') {
      if (*(char *)(param_1 + 0x12f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x118));
        *(long **)(param_1 + 0x120) = plStack_80;
        *puVar14 = plStack_88;
        *(long **)(param_1 + 0x128) = plStack_78;
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
LAB_10a8c2908:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a8c290c);
          (*pcVar7)();
        }
      }
      else {
        *(long **)(param_1 + 0x120) = plStack_80;
        *puVar14 = plStack_88;
        *(long **)(param_1 + 0x128) = plStack_78;
      }
    }
    else {
      *(long **)(param_1 + 0x120) = plStack_80;
      *puVar14 = plStack_88;
      *(long **)(param_1 + 0x128) = plStack_78;
      *(undefined1 *)(param_1 + 0x130) = 1;
    }
    if (*(char *)(param_1 + 0x12f) < '\0') {
      puVar14 = *(undefined8 **)(param_1 + 0x118);
      if (*(long *)(param_1 + 0x120) != 0) goto LAB_10a8c2544;
      __ZdlPv(puVar14);
    }
    else if (*(char *)(param_1 + 0x12f) != '\0') {
LAB_10a8c2544:
      FUN_10ad772c4(puVar14);
      goto LAB_10a8c255c;
    }
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
LAB_10a8c255c:
  FUN_10a8c1ca8(param_1);
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c266f8,1);
  *(char *)(param_1 + 0x1b0) = (char)plVar9;
  if (((uint)plVar9 & 0xff) == 1) {
    FUN_10a8c11c4(param_1);
    FUN_10a8c1ba8(&plStack_88,param_1);
    FUN_10a8c1d48(param_1,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar9 = plStack_80 + 1;
      do {
        lVar8 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x138);
    lVar10 = *(long *)(param_1 + 0x140);
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010a6d1c00();
    }
    *(long *)(param_1 + 0x140) = lVar8;
    lVar8 = *(long *)(param_1 + 0x150);
    lVar10 = *(long *)(param_1 + 0x158);
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      FUN_10a8dd3f8();
    }
    *(long *)(param_1 + 0x158) = lVar8;
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c26718);
    if ((int)plVar9 != 0) {
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c26718);
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x208))();
      if ((uint)plVar9 != 0) {
        uVar16 = 0;
        do {
          uVar11 = uVar16;
          (**(code **)(*param_2 + 0x218))(param_2);
          FUN_10a6d1844(&uStack_a0,&plStack_88);
          puVar14 = *(undefined8 **)(param_1 + 0x140);
          if (puVar14 < *(undefined8 **)(param_1 + 0x148)) {
            puVar14[1] = plStack_98;
            *puVar14 = uStack_a0;
            *(undefined8 **)(param_1 + 0x140) = puVar14 + 2;
          }
          else {
            lVar8 = *(long *)(param_1 + 0x138);
            lVar10 = (long)puVar14 - lVar8;
            uVar2 = (lVar10 >> 4) + 1;
            if (uVar2 >> 0x3c != 0) {
              FUN_10a8d4218();
              goto LAB_10a8c2908;
            }
            uVar12 = (long)*(undefined8 **)(param_1 + 0x148) - lVar8;
            uVar13 = (long)uVar12 >> 3;
            if (uVar13 <= uVar2) {
              uVar13 = uVar2;
            }
            if (0x7fffffffffffffef < uVar12) {
              uVar13 = 0xfffffffffffffff;
            }
            plStack_68 = (long *)(param_1 + 0x138);
            FUN_10a8d422c();
            puVar14 = (undefined8 *)(uVar13 + lVar10);
            puVar14[1] = plStack_98;
            *puVar14 = uStack_a0;
            uStack_a0 = 0;
            plStack_98 = (long *)0x0;
            lVar8 = (long)puVar14 - (*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138));
            _memcpy(lVar8);
            plStack_88 = *(long **)(param_1 + 0x138);
            *(long *)(param_1 + 0x138) = lVar8;
            *(undefined8 **)(param_1 + 0x140) = puVar14 + 2;
            uStack_70 = *(undefined8 *)(param_1 + 0x148);
            *(ulong *)(param_1 + 0x148) = uVar13 + uVar11 * 0x10;
            plStack_80 = plStack_88;
            plStack_78 = plStack_88;
            func_0x00010a8d4260(&plStack_88);
            plVar6 = plStack_98;
            *(undefined8 **)(param_1 + 0x140) = puVar14 + 2;
            if (plStack_98 != (long *)0x0) {
              plVar3 = plStack_98 + 1;
              do {
                lVar8 = *plVar3;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *plVar3 = lVar8 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plStack_98 + 0x10))(plStack_98);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
          }
          if (*(long *)(param_1 + 0x138) == *(long *)(param_1 + 0x140)) goto LAB_10a8c2908;
          (**(code **)(*param_2 + 0x1f0))
                    (param_2,&PTR_DAT_110c2ad00,*(undefined8 *)(*(long *)(param_1 + 0x140) + -0x10))
          ;
          (**(code **)(*param_2 + 0x220))(param_2);
          uVar1 = (int)uVar16 + 1;
          uVar16 = (ulong)uVar1;
        } while (uVar1 != (uint)plVar9);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
    }
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c26738);
    if ((int)plVar9 != 0) {
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c26738);
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x208))();
      if ((int)plVar9 != 0) {
        iVar15 = 0;
        do {
          (**(code **)(*param_2 + 0x218))(param_2,iVar15);
          func_0x00010a8e503c(&plStack_88);
          FUN_10a8c2944(param_1 + 0x150,&plStack_88);
          plVar6 = plStack_80;
          if (plStack_80 != (long *)0x0) {
            plVar3 = plStack_80 + 1;
            do {
              lVar8 = *plVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *plVar3 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          if (*(long *)(param_1 + 0x150) == *(long *)(param_1 + 0x158)) goto LAB_10a8c2908;
          (**(code **)(*param_2 + 0x1f0))
                    (param_2,&PTR_DAT_110c26758,*(undefined8 *)(*(long *)(param_1 + 0x158) + -0x10))
          ;
          (**(code **)(*param_2 + 0x220))(param_2);
          iVar15 = iVar15 + 1;
        } while (iVar15 != (int)plVar9);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
    }
  }
LAB_10a8c28dc:
  *(undefined1 *)(param_1 + 0x1b1) = 1;
  return;
}



/* Entry: 10a8c2944; end: 10a8c2a23;  */

void FUN_10a8c2944(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 < (long *)param_1[2]) {
    lVar7 = *param_2;
    plVar8 = plVar2 + 2;
    plVar2[1] = param_2[1];
    *plVar2 = lVar7;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar7 = (long)plVar2 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a8d4308();
      func_0x00010aa70b70();
      (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c44818,param_1[0x1c]);
      lVar7 = param_1[0x1c];
      if ((lVar7 != 0) &&
         (___dynamic_cast(lVar7,&PTR_DAT_110c5ef38,&PTR_DAT_110c5ede8,0), lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a8c2aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c266f8,0);
        return;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c266f8,(char)param_1[0x36]);
      if ((char)param_1[0x26] == '\x01') {
        FUN_10a00d760(param_2,&PTR_DAT_110c266d8,param_1 + 0x23);
      }
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c26718);
      puVar3 = (undefined8 *)param_1[0x28];
      for (puVar9 = (undefined8 *)param_1[0x27]; puVar9 != puVar3; puVar9 = puVar9 + 2) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c2ad00,*puVar9);
        (**(code **)(*param_2 + 0x20))(param_2);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c26738);
      puVar3 = (undefined8 *)param_1[0x2b];
      for (puVar9 = (undefined8 *)param_1[0x2a]; puVar9 != puVar3; puVar9 = puVar9 + 2) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c26758,*puVar9);
        (**(code **)(*param_2 + 0x20))(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010a8c2bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x20))(param_2);
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    plVar4 = param_2;
    plStack_38 = param_1;
    FUN_10a8d431c();
    plVar2 = (long *)(uVar6 + lVar7);
    lVar7 = *param_2;
    plVar8 = plVar2 + 2;
    plVar2[1] = param_2[1];
    *plVar2 = lVar7;
    *param_2 = 0;
    param_2[1] = 0;
    lVar7 = (long)plVar2 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)plVar8;
    lStack_40 = param_1[2];
    param_1[2] = uVar6 + (long)plVar4 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a8d4350(&lStack_58);
  }
  param_1[1] = (long)plVar8;
  return;
}



/* Entry: 10a8c2a24; end: 10a8c2bf3;  */

void FUN_10a8c2a24(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c44818,*(undefined8 *)(param_1 + 0xe0));
  lVar2 = *(long *)(param_1 + 0xe0);
  if ((lVar2 != 0) && (___dynamic_cast(lVar2,&PTR_DAT_110c5ef38,&PTR_DAT_110c5ede8,0), lVar2 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x00010a8c2aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c266f8,0);
    return;
  }
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c266f8,*(undefined1 *)(param_1 + 0x1b0));
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_10a00d760(param_2,&PTR_DAT_110c266d8,param_1 + 0x118);
  }
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c26718);
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  for (puVar3 = *(undefined8 **)(param_1 + 0x138); puVar3 != puVar1; puVar3 = puVar3 + 2) {
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c2ad00,*puVar3);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c26738);
  puVar1 = *(undefined8 **)(param_1 + 0x158);
  for (puVar3 = *(undefined8 **)(param_1 + 0x150); puVar3 != puVar1; puVar3 = puVar3 + 2) {
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c26758,*puVar3);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a8c2bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a8c2bf4; end: 10a8c31d3;  */

undefined1  [16] FUN_10a8c2bf4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f6810ed;
  return auVar1;
}



/* Entry: 10a8c31d4; end: 10a8c3573;  */

void FUN_10a8c31d4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6810ed,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c28be8;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x91;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c28be8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3554;
    FUN_10a054dac(param_1,&UNK_10f632a68,FUN_10a8e5134,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3554;
    FUN_10a054dac(param_1,&UNK_10f6803e1,FUN_10a8e538c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3554;
    FUN_10a054dac(param_1,&UNK_10f6803ea,FUN_10a8e54d4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3554;
    FUN_10a054dac(param_1,&UNK_10f680403,FUN_10a8e562c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3554;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8e58cc,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6810ed,0xd);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8c3554;
      FUN_10a054dac(param_1,&UNK_10f68042e,FUN_10a8e5a2c,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a8c3554:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c3558);
  (*pcVar6)();
}



/* Entry: 10a8c3574; end: 10a8c399b;  */

void FUN_10a8c3574(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6810fb,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c28c30;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c28c30;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c397c;
    FUN_10a054dac(param_1,&UNK_10f632a68,FUN_10a8e5bac,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c397c;
    FUN_10a054dac(param_1,&UNK_10f6803e1,FUN_10a8e5e04,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c397c;
    FUN_10a054dac(param_1,&UNK_10f680442,FUN_10a8e5f4c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c397c;
    FUN_10a054dac(param_1,&UNK_10f680403,FUN_10a8e60cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c397c;
    FUN_10a054dac(param_1,&UNK_10f68045a,FUN_10a8e6230,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c397c;
    FUN_10a054dac(param_1,&UNK_10f680465,FUN_10a8e6498,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c397c;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8e65c8,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6810fb,0xc);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8c397c;
      FUN_10a054dac(param_1,&UNK_10f68047a,FUN_10a8e6748,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a8c397c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c3980);
  (*pcVar6)();
}



/* Entry: 10a8c399c; end: 10a8c3ee3;  */

void FUN_10a8c399c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f681108,0x12);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c27950;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c27950;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f68048d,FUN_10a8e68cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f680496,FUN_10a8e6b54,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f68049f,FUN_10a8e6c0c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f6804b0,FUN_10a8e6d4c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f6804bb,FUN_10a8e6e04,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f6804d0,FUN_10a8e6f1c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f6804e7,FUN_10a8e7034,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f6804f4,FUN_10a8e7154,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f680509,FUN_10a8e72c0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f680517,FUN_10a8e7378,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c3ec4;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8e74bc,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f681108,0x12);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8c3ec4;
      FUN_10a054dac(param_1,&UNK_10f680522,FUN_10a8e7620,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a8c3ec4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c3ec8);
  (*pcVar6)();
}



/* Entry: 10a8c3ee4; end: 10a8c43e3;  */

void FUN_10a8c3ee4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68111b,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c279f0;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c279f0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f6804f4,FUN_10a8e7780,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f68053b,FUN_10a8e79a8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f68054c,FUN_10a8e7ae4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f680558,FUN_10a8e7c98,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f680565,FUN_10a8e7d50,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f680572,FUN_10a8e7e08,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f68057f,FUN_10a8e7ec0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f680509,FUN_10a8e7ff4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f680517,FUN_10a8e8124,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c43c4;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8e8254,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68111b,0xe);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8c43c4;
      FUN_10a054dac(param_1,&UNK_10f68058e,FUN_10a8e8390,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a8c43c4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c43c8);
  (*pcVar6)();
}



/* Entry: 10a8c43e4; end: 10a8c4733;  */

void FUN_10a8c43e4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68112a,0x12);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c27a90;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c27a90;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4714;
    FUN_10a054dac(param_1,&UNK_10f6805a3,FUN_10a8e86a0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4714;
    FUN_10a054dac(param_1,&UNK_10f6805b0,FUN_10a8e8928,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4714;
    FUN_10a054dac(param_1,&UNK_10f6805bb,FUN_10a8e89e0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4714;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8e8a98,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68112a,0x12);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8c4714;
      FUN_10a054dac(param_1,&UNK_10f6805c6,FUN_10a8e8f50,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a8c4714:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c4718);
  (*pcVar6)();
}



/* Entry: 10a8c4734; end: 10a8c4ba3;  */

void FUN_10a8c4734(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68113d,0x15);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c27b30;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c27b30;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4b84;
    FUN_10a054dac(param_1,&UNK_10f6805a3,FUN_10a8e9188,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4b84;
    FUN_10a054dac(param_1,&UNK_10f6805b0,FUN_10a8e9410,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4b84;
    FUN_10a054dac(param_1,&UNK_10f6805bb,FUN_10a8e94c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4b84;
    FUN_10a054dac(param_1,&UNK_10f6805df,FUN_10a8e9580,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4b84;
    FUN_10a054dac(param_1,&UNK_10f6805e9,FUN_10a8e9638,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4b84;
    FUN_10a054dac(param_1,&UNK_10f6805f4,FUN_10a8e97f0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4b84;
    FUN_10a054dac(param_1,&UNK_10f6805ff,FUN_10a8e98a8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c4b84;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8e9960,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68113d,0x15);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8c4b84;
      FUN_10a054dac(param_1,&UNK_10f680618,FUN_10a8e9f5c,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a8c4b84:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c4b88);
  (*pcVar6)();
}



/* Entry: 10a8c4ba4; end: 10a8c50a3;  */

void FUN_10a8c4ba4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f681153,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c27bd0;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c27bd0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f6805a3,FUN_10a8ea1a0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f6805b0,FUN_10a8ea428,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f6805bb,FUN_10a8ea4e0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f680634,FUN_10a8ea598,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f6805df,FUN_10a8ea650,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f68063f,FUN_10a8ea708,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f6805e9,FUN_10a8ea7c0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f6805f4,FUN_10a8ea978,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f6805ff,FUN_10a8eaa30,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5084;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8eaae8,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f681153,0xb);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8c5084;
      FUN_10a054dac(param_1,&UNK_10f680649,FUN_10a8eb104,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a8c5084:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c5088);
  (*pcVar6)();
}



/* Entry: 10a8c50a4; end: 10a8c53ab;  */

void FUN_10a8c50a4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68115f,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c27c70;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c27c70;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c538c;
    FUN_10a054dac(param_1,&UNK_10f68065b,FUN_10a8eb354,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c538c;
    FUN_10a054dac(param_1,&UNK_10f68066a,FUN_10a8eb5dc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c538c;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8eb694,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68115f,0xc);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8c538c;
      FUN_10a054dac(param_1,&UNK_10f680678,FUN_10a8eb8ec,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a8c538c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c5390);
  (*pcVar6)();
}



/* Entry: 10a8c53ac; end: 10a8c56b3;  */

void FUN_10a8c53ac(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68116c,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c27d10;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c27d10;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5694;
    FUN_10a054dac(param_1,&UNK_10f68065b,FUN_10a8ebb10,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5694;
    FUN_10a054dac(param_1,&UNK_10f68068b,FUN_10a8ebd98,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8c5694;
    FUN_10a054dac(param_1,&UNK_10f67fbad,FUN_10a8ebe50,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68116c,0xc);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8c5694;
      FUN_10a054dac(param_1,&UNK_10f680694,FUN_10a8ec0a0,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a8c5694:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c5698);
  (*pcVar6)();
}



/* Entry: 10a8c56b4; end: 10a8c580b;  */

void FUN_10a8c56b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a8c580c(param_1,&puStack_a8);
  ppuStack_a0 = &puStack_b0;
  puStack_b0 = &UNK_10f68060d;
  puStack_a8 = &UNK_10f6805ff;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x91;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8ec3c0();
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67fbad;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x91;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a8ec634(uVar1,&puStack_a8,0);
  FUN_10a8ec83c(uVar1);
  FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6806a7;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8c58e4(param_1,&puStack_a8);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a8c580c; end: 10a8c58e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c58a4) */

undefined1  [16] FUN_10a8c580c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f681179,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8ec2c4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8c58e4; end: 10a8c594b;  */

ulong FUN_10a8c58e4(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8c594c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a8ec8f8,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a8c594c; end: 10a8c5aa3;  */

void FUN_10a8c594c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a8c5aa4(param_1,&puStack_a8);
  ppuStack_a0 = &puStack_b0;
  puStack_b0 = &UNK_10f68060d;
  puStack_a8 = &UNK_10f6805ff;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x91;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8ecc14();
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67fbad;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x91;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a8ece88(uVar1,&puStack_a8,0);
  FUN_10a8ed090(uVar1);
  FUN_10a003e74(param_1,&UNK_10f68041e,0xf);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6806c1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8c5b7c(param_1,&puStack_a8);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a8c5aa4; end: 10a8c5b7b;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c5b3c) */

undefined1  [16] FUN_10a8c5aa4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68118d,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8ecb18(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8c5b7c; end: 10a8c5cbf;  */

ulong FUN_10a8c5b7c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8c5be4);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a8ed14c,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a8c5cc0; end: 10a8c5cc3;  */

undefined8 * FUN_10a8c5cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c26788;
  FUN_10a6d1af8(param_1 + 0xe);
  func_0x00010a6c8bbc(param_1 + 0xc);
  func_0x00010a05248c(param_1 + 10);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  func_0x00010a6d1c00(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8c5cc4; end: 10a8c5cd7;  */

void FUN_10a8c5cc4(void)

{
  func_0x00010a8c5c48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8c5cd8; end: 10a8c5e03;  */

undefined8 * FUN_10a8c5cd8(undefined8 *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plStack_50;
  long *plStack_48;
  
  plVar6 = param_3;
  func_0x00010a6c8b40(param_2 + 0x60);
  lVar8 = *param_3;
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x84) == '\x01')) {
    plVar3 = (long *)0x88;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110c2b8f0;
    *(undefined1 *)(plVar3 + 4) = 0;
    plVar3[7] = 0;
    plVar3[6] = 0;
    plVar3[9] = 0;
    plVar3[8] = 0;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    plVar3[0xb] = (long)plVar4;
    plVar3[0xc] = (long)plVar6;
    plVar3[5] = (long)&PTR_FUN_110c2c6f0;
    plStack_50 = plVar3 + 3;
    *plStack_50 = (long)&PTR_DAT_110c2c680;
    plVar3[10] = (long)&PTR_FUN_110c2c748;
    lVar9 = *(long *)(lVar8 + 0x70);
    lVar7 = *(long *)(lVar8 + 0x68);
    uVar10 = *(undefined8 *)(lVar8 + 0x74);
    *(undefined8 *)((long)plVar3 + 0x7c) = *(undefined8 *)(lVar8 + 0x7c);
    *(undefined8 *)((long)plVar3 + 0x74) = uVar10;
    plVar3[0xe] = lVar9;
    plVar3[0xd] = lVar7;
    plStack_48 = plVar3;
    FUN_10a8ed430(&plStack_50,plVar3 + 8);
    FUN_10a8c5e04(param_2 + 0x70,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (*(char *)(lVar8 + 0x84) == '\x01') {
      *(undefined1 *)(lVar8 + 0x84) = 0;
    }
  }
  lVar8 = *(long *)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  if (lVar8 == 0) {
    param_1[1] = 0;
    puVar5 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar8;
    puVar5 = (undefined8 *)0x0;
    if (lVar8 != 0) {
      return param_1;
    }
  }
  FUN_10a043ecc();
  *puVar5 = &PTR_FUN_110c2b8f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar5;
}



/* Entry: 10a8c5e04; end: 10a8c6013;  */

undefined8 * FUN_10a8c5e04(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
  return param_1;
}



/* Entry: 10a8c6014; end: 10a8c604f;  */

long * FUN_10a8c6014(long *param_1,long param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *(undefined1 *)(*(long *)(param_2 + 0x28) + 100) = param_3;
  plVar3 = (long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  *param_1 = *plVar3;
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
  plVar2 = (long *)0x0;
  FUN_10a043ecc();
  *plVar2 = (long)plVar3;
  if (param_4 == 0) {
    plVar2[1] = 0;
    plVar3 = plVar2;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar2[1] = param_4;
    plVar3 = (long *)0x0;
    if (param_4 != 0) {
      return plVar2;
    }
  }
  FUN_10a043ecc();
  *plVar3 = (long)&PTR_FUN_110c2b990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return plVar3;
}



/* Entry: 10a8c6050; end: 10a8c60af;  */

undefined8 * FUN_10a8c6050(undefined8 *param_1,long param_2,uint param_3,long param_4)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 **unaff_x29;
  code *unaff_x30;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 < 3) {
    *(char *)(*(long *)(param_2 + 0x28) + 0x62) = (char)param_3;
    puVar4 = (undefined8 *)(param_2 + 0x18);
    ppuVar1 = (undefined1 **)register0x00000008;
  }
  else {
    ppuVar1 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    puVar2 = &UNK_10f6811a3;
    unaff_x30 = (code *)0x10a8c6080;
    FUN_10a00946c();
    if (param_3 < 3) {
      *(char *)(*(long *)(puVar2 + 0x28) + 0x61) = (char)param_3;
      puVar4 = (undefined8 *)(puVar2 + 0x18);
      param_1 = extraout_x8;
    }
    else {
      ppuVar1 = &puStack_20;
      unaff_x29 = &puStack_20;
      uStack_18 = 0x10a8c6080;
      puVar2 = &UNK_10f6811a3;
      unaff_x30 = FUN_10a8c60b0;
      puStack_20 = &stack0xfffffffffffffff0;
      FUN_10a00946c();
      lVar5 = *(long *)(puVar2 + 0x28);
      if ((*(byte *)(lVar5 + 0x84) & 1) == 0) {
        *(undefined8 *)(lVar5 + 0x70) = 0;
        *(undefined8 *)(lVar5 + 0x78) = 0;
        *(undefined8 *)(lVar5 + 0x68) = 0;
        *(undefined4 *)(lVar5 + 0x74) = 0x3f800000;
        *(undefined1 *)(lVar5 + 0x79) = 1;
        *(undefined4 *)(lVar5 + 0x80) = 0;
        *(undefined1 *)(lVar5 + 0x84) = 1;
      }
      *(char *)(lVar5 + 0x7d) = (char)param_3;
      puVar4 = (undefined8 *)(puVar2 + 0x18);
      param_1 = extraout_x8_00;
    }
  }
  *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar1 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = unaff_x29;
  *(code **)((long)ppuVar1 + -8) = unaff_x30;
  lVar5 = puVar4[1];
  *param_1 = *puVar4;
  if (lVar5 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      return param_1;
    }
  }
  puVar3 = (undefined8 *)0x0;
  FUN_10a043ecc();
  *(undefined8 *)((long)ppuVar1 + -0x40) = unaff_x20;
  *(undefined8 **)((long)ppuVar1 + -0x38) = param_1;
  *(undefined1 **)((long)ppuVar1 + -0x30) = (undefined1 *)((long)ppuVar1 + -0x10);
  *(undefined8 *)((long)ppuVar1 + -0x28) = 0x10a8ed55c;
  *puVar3 = puVar4;
  if (param_4 == 0) {
    puVar3[1] = 0;
    puVar4 = puVar3;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    puVar3[1] = param_4;
    puVar4 = (undefined8 *)0x0;
    if (param_4 != 0) {
      return puVar3;
    }
  }
  FUN_10a043ecc();
  *puVar4 = &PTR_FUN_110c2b990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar4;
}



/* Entry: 10a8c60b0; end: 10a8c60ef;  */

long * FUN_10a8c60b0(long *param_1,long param_2,undefined1 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x28);
  if ((*(byte *)(lVar3 + 0x84) & 1) == 0) {
    *(undefined8 *)(lVar3 + 0x70) = 0;
    *(undefined8 *)(lVar3 + 0x78) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    *(undefined4 *)(lVar3 + 0x74) = 0x3f800000;
    *(undefined1 *)(lVar3 + 0x79) = 1;
    *(undefined4 *)(lVar3 + 0x80) = 0;
    *(undefined1 *)(lVar3 + 0x84) = 1;
  }
  *(undefined1 *)(lVar3 + 0x7d) = param_3;
  plVar2 = (long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  *param_1 = *plVar2;
  if (lVar3 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      return param_1;
    }
  }
  plVar1 = (long *)0x0;
  FUN_10a043ecc();
  *plVar1 = (long)plVar2;
  if (param_4 == 0) {
    plVar1[1] = 0;
    plVar2 = plVar1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar1[1] = param_4;
    plVar2 = (long *)0x0;
    if (param_4 != 0) {
      return plVar1;
    }
  }
  FUN_10a043ecc();
  *plVar2 = (long)&PTR_FUN_110c2b990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return plVar2;
}



/* Entry: 10a8c60f0; end: 10a8c611f;  */

undefined8 * FUN_10a8c60f0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  long lVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  if ((uint)param_3 < 3) {
    *(char *)(*(long *)(param_2 + 0x28) + 0x61) = (char)param_3;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    lVar5 = *(long *)(param_2 + 0x20);
  }
  else {
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar1 = &UNK_10f68109f;
    FUN_10a00946c();
    uVar3 = (undefined1)param_3;
    FUN_10a8c6160();
    lVar5 = *(long *)(puVar1 + 0x28);
    *(undefined1 *)(lVar5 + 0x62) = uVar3;
    *(undefined1 *)(lVar5 + 99) = uVar3;
    *(undefined1 *)(lVar5 + 100) = uVar3;
    uVar4 = *(undefined8 *)(puVar1 + 0x18);
    lVar5 = *(long *)(puVar1 + 0x20);
    unaff_x30 = FUN_10a8c6120;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    param_1 = extraout_x8;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *param_1 = uVar4;
  if (lVar5 == 0) {
    param_1[1] = 0;
    puVar2 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar5;
    puVar2 = (undefined8 *)0x0;
    if (lVar5 != 0) {
      return param_1;
    }
  }
  FUN_10a043ecc();
  *puVar2 = &PTR_FUN_110c2b990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar2;
}



/* Entry: 10a8c6120; end: 10a8c615f;  */

undefined8 * FUN_10a8c6120(undefined8 *param_1,long param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_10a8c6160();
  lVar2 = *(long *)(param_2 + 0x28);
  *(undefined1 *)(lVar2 + 0x62) = param_3;
  *(undefined1 *)(lVar2 + 99) = param_3;
  *(undefined1 *)(lVar2 + 100) = param_3;
  lVar2 = *(long *)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[1] = 0;
    puVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar2;
    puVar1 = (undefined8 *)0x0;
    if (lVar2 != 0) {
      return param_1;
    }
  }
  FUN_10a043ecc();
  *puVar1 = &PTR_FUN_110c2b990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar1;
}



/* Entry: 10a8c6160; end: 10a8c617f;  */

undefined8 * FUN_10a8c6160(undefined8 *param_1,undefined1 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  
  if ((uint)param_1 < 4) {
    return param_1;
  }
  puVar1 = &UNK_10f68108f;
  FUN_10a00946c();
  FUN_10a8c6160();
  *(undefined1 *)(*(long *)(puVar1 + 0x28) + 0x62) = param_2;
  lVar2 = *(long *)(puVar1 + 0x20);
  *extraout_x8 = *(undefined8 *)(puVar1 + 0x18);
  if (lVar2 == 0) {
    extraout_x8[1] = 0;
    puVar3 = extraout_x8;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    extraout_x8[1] = lVar2;
    puVar3 = (undefined8 *)0x0;
    if (lVar2 != 0) {
      return extraout_x8;
    }
  }
  FUN_10a043ecc();
  *puVar3 = &PTR_FUN_110c2b990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar3;
}



/* Entry: 10a8c6180; end: 10a8c6227;  */

undefined8 * FUN_10a8c6180(undefined8 *param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a8c6160();
  *(undefined1 *)(*(long *)(param_2 + 0x28) + 0x62) = param_3;
  lVar1 = *(long *)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  if (lVar1 == 0) {
    param_1[1] = 0;
    puVar2 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  FUN_10a043ecc();
  *puVar2 = &PTR_FUN_110c2b990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar2;
}



/* Entry: 10a8c6228; end: 10a8c6447;  */

undefined8 * FUN_10a8c6228(undefined8 *param_1,long param_2,int param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x28);
  *(long *)(lVar3 + 0x38) = (long)param_3;
  uVar1 = *(ulong *)(lVar3 + 0x48);
  if (*(ulong *)(lVar3 + 0x48) <= (ulong)(long)param_3) {
    uVar1 = (long)param_3;
  }
  *(ulong *)(lVar3 + 0x48) = uVar1;
  lVar3 = *(long *)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  if (lVar3 == 0) {
    param_1[1] = 0;
    puVar2 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar3;
    puVar2 = (undefined8 *)0x0;
    if (lVar3 != 0) {
      return param_1;
    }
  }
  FUN_10a043ecc();
  *puVar2 = &PTR_FUN_110c2b9e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar2;
}



/* Entry: 10a8c6448; end: 10a8c64d7;  */

undefined8 * FUN_10a8c6448(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  
  *(long *)(*(long *)(param_2 + 0x28) + 0x40) = (long)param_3;
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  if (puVar1 == (undefined8 *)0x0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      return puVar1;
    }
  }
  lVar2 = 0;
  FUN_10a043ecc();
  *(long *)(*(long *)(lVar2 + 0x28) + 0x40) = (long)param_3;
  puVar1 = *(undefined8 **)(lVar2 + 0x20);
  *extraout_x8 = *(undefined8 *)(lVar2 + 0x18);
  if (puVar1 == (undefined8 *)0x0) {
    extraout_x8[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    extraout_x8[1] = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      return puVar1;
    }
  }
  puVar1 = (undefined8 *)0x0;
  FUN_10a043ecc();
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_110c267e0;
  puVar1[2] = 0;
  uVar3 = 0x338;
  __Znwm(0x338);
  FUN_10a8dbe78();
  FUN_10a8ed8dc(puVar1 + 2,uVar3);
  return puVar1;
}



/* Entry: 10a8c64d8; end: 10a8c6563;  */

undefined8 * FUN_10a8c64d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110c267e0;
  param_1[2] = 0;
  uVar1 = 0x338;
  __Znwm(0x338);
  FUN_10a8dbe78();
  FUN_10a8ed8dc(param_1 + 2,uVar1);
  return param_1;
}



/* Entry: 10a8c6564; end: 10a8c673f;  */

undefined8 * FUN_10a8c6564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c267e0;
  FUN_10a8ed8dc(param_1 + 2,0);
  return param_1;
}



/* Entry: 10a8c6740; end: 10a8c6823;  */

void FUN_10a8c6740(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 auStack_60 [32];
  
  plVar3 = param_1;
  FUN_10a8d6848(auStack_60);
  if ((param_2 & 1) == 0) {
    FUN_10a8bb1fc();
    pbVar4 = (byte *)(*plVar3 + 0x8d8);
    FUN_10a08fec0();
    if ((*pbVar4 >> 1 & 1) == 0) {
      bVar2 = false;
      bVar5 = false;
    }
    else {
      bVar2 = *(int *)(*(long *)(*param_1 + 0x100) + 0x2a8) != 8;
      bVar5 = bVar2;
    }
  }
  else {
    bVar2 = true;
    bVar5 = false;
  }
  puVar1 = (undefined8 *)(*(undefined8 **)param_1[0x62])[1];
  for (puVar6 = (undefined8 *)**(undefined8 **)param_1[0x62]; puVar6 != puVar1; puVar6 = puVar6 + 1)
  {
    (**(code **)(*(long *)*puVar6 + 0x10))();
  }
  FUN_10a8d5f94(param_1,bVar2,bVar5);
  FUN_10a8d7214(auStack_60);
  return;
}



/* Entry: 10a8c6824; end: 10a8c698f;  */

void FUN_10a8c6824(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 uStack_59;
  long *plStack_58;
  
  puVar1 = (undefined8 *)((undefined8 *)**(undefined8 **)(param_1 + 0x310))[1];
  for (puVar6 = *(undefined8 **)**(undefined8 **)(param_1 + 0x310); puVar6 != puVar1;
      puVar6 = puVar6 + 1) {
    (*(code *)**(undefined8 **)*puVar6)();
  }
  plVar9 = *(long **)(param_1 + 0x38);
  do {
    if (plVar9 == (long *)(param_1 + 0x40)) {
      return;
    }
    plStack_58 = plVar9 + 4;
    lVar3 = *(long *)(param_1 + 0x288);
    func_0x00010937a098(lVar3,plStack_58,&UNK_10dd5b8f9,&plStack_58,&uStack_59);
    plVar7 = plVar9 + 7;
    lVar5 = *plVar7;
    *(undefined4 *)(lVar3 + 0x44) = *(undefined4 *)(lVar5 + 0x70);
    if (*(char *)(lVar5 + 0x1a4) == '\x01') {
      if (*(long *)(lVar5 + 0x130) == 0) {
        if (*(long *)(lVar5 + 0x108) != 0) {
          plVar8 = *(long **)(*(long *)(lVar5 + 0x108) + 0x268);
          if (plVar8 != (long *)0x0) {
            do {
              plVar4 = plVar8;
              (**(code **)(*plVar8 + 0x80))();
              if ((int)plVar4 != 2) goto LAB_10a8c6900;
              plVar8 = (long *)plVar8[0x13];
            } while (plVar8 != (long *)0x0);
            lVar5 = *plVar7;
          }
          goto LAB_10a8c68ec;
        }
      }
      else {
        FUN_10a8bd864(*(undefined8 *)(param_1 + 0x28),*(long *)(lVar5 + 0x130),lVar5 + 0x78);
        FUN_10a74eac8(*plVar7 + 0x130);
      }
    }
    else if (*(long *)(lVar5 + 0x108) != 0) {
LAB_10a8c68ec:
      FUN_10a8cac00(*(undefined8 *)(param_1 + 0x18),plVar7,param_2,lVar5 + 0x78);
    }
LAB_10a8c6900:
    plVar7 = (long *)plVar9[1];
    plVar8 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar8[2];
        bVar2 = (long *)*plVar9 != plVar8;
        plVar8 = plVar9;
      } while (bVar2);
    }
    else {
      do {
        plVar9 = plVar7;
        plVar7 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10a8c6990; end: 10a8c6a57;  */

undefined8 FUN_10a8c6990(long param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (((*(char *)(param_1 + 0x2c8) == '\x01') &&
      (((uint)*(undefined8 *)(*(long *)(param_1 + 0x2c0) + 0x10) >> 1 & 1) != 0)) ||
     (*(int *)(param_1 + 0x140) != 2)) {
LAB_10a8c6a44:
    uVar3 = 0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x38);
    while (plVar4 != (long *)(param_1 + 0x40)) {
      lVar6 = plVar4[7];
      plVar2 = *(long **)(lVar6 + 0xf8);
      if ((plVar2 != (long *)0x0) &&
         ((**(code **)(*plVar2 + 0x120))(), *(char *)(*(long *)(lVar6 + 0xf8) + 0x2d0) != '\x01'))
      goto LAB_10a8c6a44;
      plVar2 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar1 = (long *)*plVar4 != plVar5;
          plVar5 = plVar4;
        } while (bVar1);
      }
      else {
        do {
          plVar4 = plVar2;
          plVar2 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 10a8c6a58; end: 10a8c6f13;  */

void FUN_10a8c6a58(long *param_1,uint param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 ******ppppppuVar10;
  byte bVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  undefined1 auStack_80 [40];
  undefined8 *****pppppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1[0x56] != 0) {
    lVar3 = 2;
    if (param_2 == 0) {
      lVar3 = 0;
      bVar11 = 0;
    }
    else {
      bVar11 = *(byte *)(param_1 + 0x57);
    }
    plVar1 = param_1 + 0x56;
    if ((0x146 < *(int *)(*(long *)(*param_1 + 0xa20) + 0x18)) &&
       (((uint)*(undefined8 *)(param_1[0x56] + 0x10) >> 5 & 1) != 0)) {
      pppppuStack_58 = (undefined8 ******)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x0001092af8bc(plVar1);
      if ((*(byte *)(*plVar1 + 0xc0) & 1) != 0) {
        plVar9 = (long *)(*plVar1 + 0x98);
        func_0x00010952d47c(auStack_80);
        func_0x000109379fe8(auStack_80);
        param_1 = (long *)0x1;
        goto LAB_10a8c6bdc;
      }
LAB_10a8c6ef0:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a8c6ef4);
      (*pcVar7)();
    }
    if ((bVar11 & 1) == 0) {
      plVar9 = (long *)(lVar3 * 1000000000);
      plVar8 = plVar1;
      FUN_109d1a400();
      uVar6 = param_2;
      if ((int)plVar8 == 0) {
        do {
          if (uVar6 == 0) {
            return;
          }
          plVar8 = (long *)&UNK_10f681289;
          FUN_10a00946c();
          iVar14 = (int)plVar9;
          if (iVar14 == 3) {
            ___cxa_begin_catch();
            if (((char)param_1[0x59] == '\x01') &&
               (((uint)*(undefined8 *)(param_1[0x58] + 0x10) >> 1 & 1) != 0)) {
              FUN_10a8d82c4(param_1,&UNK_10f6812cf);
              goto LAB_10a8c6ef0;
            }
            (**(code **)(*plVar8 + 0x10))();
            func_0x000107c2c4dc(&pppppuStack_58);
            *(undefined4 *)(param_1 + 0x28) = 2;
            plVar9 = plVar8;
            if (*(char *)(param_1[0x1a] + 8) == '\x01') {
              plVar9 = param_1 + 0x19;
              (*(code *)*plVar9)(&pppppuStack_58);
            }
            ___cxa_end_catch();
          }
          else {
            ___cxa_begin_catch();
            if (iVar14 == 2) {
              (**(code **)(*plVar8 + 0x10))();
              func_0x000107c2c4dc(&pppppuStack_58);
              *(undefined4 *)(param_1 + 0x28) = 2;
              plVar9 = plVar8;
              if (*(char *)(param_1[0x1a] + 8) == '\x01') {
                plVar9 = param_1 + 0x19;
                (*(code *)*plVar9)(&pppppuStack_58);
              }
              ___cxa_end_catch();
            }
            else {
              if (uStack_48 < 0) {
                uStack_50 = 0x13;
                ppppppuVar10 = (undefined8 ******)pppppuStack_58;
              }
              else {
                uStack_48 = CONCAT17(0x13,(undefined7)uStack_48);
                ppppppuVar10 = &pppppuStack_58;
              }
              *(undefined4 *)((long)ppppppuVar10 + 0xf) = 0x6c65646f;
              ppppppuVar10[1] = (undefined8 *****)0x6f6d20676e696e6e;
              *ppppppuVar10 = (undefined8 *****)0x757220726f727245;
              *(undefined1 *)((long)ppppppuVar10 + 0x13) = 0;
              *(undefined4 *)(param_1 + 0x28) = 2;
              if (*(char *)(param_1[0x1a] + 8) == '\x01') {
                plVar9 = param_1 + 0x19;
                (*(code *)*plVar9)(&pppppuStack_58);
              }
              ___cxa_end_catch();
            }
          }
          param_1 = (long *)0x0;
LAB_10a8c6bdc:
          plVar8 = (long *)*plVar1;
          if (plVar8 != (long *)0x0) {
            puVar2 = (ulong *)(plVar8 + 1);
            do {
              uVar12 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar12 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar12 & 0x1fffffffc) == 4) {
              do {
                uVar12 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar12 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar12 - 1 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
          }
          *plVar1 = 0;
          if (uStack_48 < 0) {
            __ZdlPv(pppppuStack_58);
          }
          uVar6 = param_2 & (uint)param_1;
        } while( true );
      }
    }
    else {
      plVar9 = param_1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      plVar8 = plVar1;
      FUN_109d1a244();
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((lVar3 * 1000000000 < (long)plVar8 - (long)plVar9) &&
         ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
        plVar13 = param_1 + 0x5a;
        if (*(char *)((long)param_1 + 0x2e7) < '\0') {
          plVar13 = (long *)*plVar13;
        }
        func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f681319,0x2e6,&UNK_10f6813b1,in_x6,in_x7,
                            (ulong)((long)plVar8 - (long)plVar9) / 1000000,lVar3 * 1000,plVar13);
      }
    }
    func_0x00010a8d7168(auStack_80,plVar1);
    func_0x0001093f2488(param_1 + 0x23,auStack_80);
    func_0x000109379fe8(auStack_80);
    *(undefined4 *)(param_1 + 0x28) = 2;
    FUN_10a8d7414(param_1);
  }
  return;
}



/* Entry: 10a8c6f14; end: 10a8c6f53;  */

/* WARNING: Removing unreachable block (ram,0x00010a8d9ad8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d95c8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9b18) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9dd0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10a8c6f14(long param_1,undefined ********param_2)

{
  ulong *puVar1;
  undefined ********ppppppppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long **pplVar9;
  long *plVar10;
  ulong uVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined ********ppppppppuVar18;
  long lVar19;
  undefined *******pppppppuVar20;
  undefined *******pppppppuVar21;
  undefined *****pppppuVar22;
  undefined8 *puVar23;
  undefined ********unaff_x20;
  undefined1 *puVar24;
  long *plVar25;
  undefined *******pppppppuVar26;
  undefined8 *puVar27;
  undefined ******ppppppuVar28;
  undefined ******ppppppuVar29;
  undefined *******unaff_x24;
  uint uVar30;
  undefined ******ppppppuVar31;
  undefined *******unaff_x26;
  undefined *******pppppppuVar32;
  long *plVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined ********ppppppppuStack_248;
  undefined1 auStack_240 [8];
  undefined ******ppppppuStack_238;
  undefined *******pppppppuStack_230;
  undefined ********ppppppppuStack_228;
  undefined *******pppppppuStack_220;
  undefined8 uStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined8 uStack_200;
  undefined *******pppppppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char cStack_1c9;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined1 uStack_1b0;
  undefined2 uStack_1af;
  undefined *******pppppppuStack_1a8;
  undefined8 *apuStack_1a0 [7];
  code *pcStack_168;
  undefined8 *apuStack_160 [7];
  long lStack_128;
  long *plStack_120;
  undefined *******pppppppuStack_118;
  undefined *******pppppppuStack_110;
  undefined *******pppppppuStack_108;
  undefined *******pppppppuStack_100;
  code *pcStack_d8;
  undefined *******pppppppuStack_d0;
  undefined *******pppppppuStack_c8;
  long lStack_c0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  undefined1 *puStack_78;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  
  if ((uint)param_2 < 8) {
    *(uint *)(param_1 + 0x2ec) = (uint)param_2;
    *(undefined1 *)(param_1 + 0x308) = 0;
    if ((*(long *)(param_1 + 8) != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x1b1) == '\x01')) {
      puVar24 = &stack0xffffffffffffffb0;
      lVar19 = *(long *)(param_1 + 8);
      if (lVar19 == 0) {
        FUN_10a00946c(&UNK_10f6811b8);
      }
      else if ((*(byte *)(lVar19 + 0x1b1) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x308) = 1;
        plVar10 = (long *)(ulong)*(uint *)(param_1 + 0x2ec);
        if (((*(uint *)(param_1 + 0x2ec) & 0xfffffffb) == 0) &&
           (*(char *)(lVar19 + 0x1b0) == '\x01')) {
          lVar19 = param_1 + 0x1f8;
          FUN_10a8d5cfc(lVar19,&stack0xffffffffffffffb0,&stack0xffffffffffffffb4,1);
        }
        else {
          FUN_10a8c09d8();
          lVar19 = *(long *)(param_1 + 8);
          puVar24 = (undefined1 *)(ulong)*(byte *)(lVar19 + 0x1b0);
          plVar25 = plVar10;
          FUN_10a8d5cd4();
          FUN_109d20f54(&stack0xffffffffffffffb0,plVar10,puVar24,lVar19 + 0x108,param_1 + 0x148,
                        *(undefined1 *)(*plVar25 + 8));
          lVar19 = *(long *)(param_1 + 0x1f8);
          if (lVar19 != 0) {
            *(long *)(param_1 + 0x200) = lVar19;
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0x200) = in_stack_ffffffffffffffb8;
          *(undefined8 *)(param_1 + 0x1f8) = in_stack_ffffffffffffffb0;
          *(undefined8 *)(param_1 + 0x208) = in_stack_ffffffffffffffc0;
        }
        auVar38._8_8_ = puVar24;
        auVar38._0_8_ = lVar19;
        return auVar38;
      }
      puVar16 = &UNK_10f6811f1;
      FUN_10a00946c();
      plVar10 = *(long **)(puVar16 + 8);
      if (plVar10 != (long *)0x0) {
        plVar25 = plVar10 + 1;
        do {
          lVar19 = *plVar25;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar5) {
            *plVar25 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      auVar39._8_8_ = param_2;
      auVar39._0_8_ = puVar16;
      return auVar39;
    }
    auVar34._8_8_ = param_2;
    auVar34._0_8_ = param_1;
    return auVar34;
  }
  plVar10 = (long *)&UNK_10f5878a4;
  FUN_10a00946c();
  if ((int)plVar10[0x28] != 3) {
    auVar35._8_8_ = param_2;
    auVar35._0_8_ = plVar10;
    return auVar35;
  }
  if ((plVar10[9] != 0) || (plVar10[0xc] != 0)) {
    lVar19 = plVar10[1];
    if (lVar19 == 0) {
      FUN_10a00946c(&UNK_10f681554);
    }
    else if ((*(byte *)(lVar19 + 0x1b1) & 1) != 0) {
      if (((*(byte *)(plVar10 + 100) & 1) == 0) && (*(char *)(lVar19 + 0x1b0) == '\x01')) {
        FUN_10a8d852c(plVar10);
      }
      FUN_10a8d8a78(plVar10);
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar25 = plVar10;
      ppppppppuVar18 = param_2;
      if ((*(byte *)(plVar10 + 0x61) & 1) == 0) {
        FUN_10a8d4b90();
      }
      if (plVar10[1] == 0) {
        ppppppppuVar13 = (undefined ********)&UNK_10f681700;
        FUN_10a00946c();
      }
      else {
        func_0x00010ad031c0();
        plVar33 = (long *)*plVar25;
        if (-1 < *(char *)((long)plVar25 + 0x17)) {
          plVar33 = plVar25;
        }
        func_0x000107c2b054(&uStack_210,plVar33);
        if (*(char *)((long)plVar10 + 0x247) < '\0') {
          __ZdlPv(plVar10[0x46]);
        }
        plVar10[0x47] = CONCAT17(uStack_201,uStack_208);
        plVar10[0x46] = CONCAT17(uStack_210._7_1_,(undefined7)uStack_210);
        plVar10[0x48] = (long)uStack_200;
        *(char *)(plVar10 + 0x49) = (char)plVar10[0x5e];
        lVar19 = plVar10[0x3f];
        lVar3 = plVar10[0x40];
        uVar11 = (ulong)*(uint *)((long)plVar10 + 0x2ec);
        FUN_10a8c09d8(uVar11);
        FUN_109d20fac(lVar19,lVar3 - lVar19 >> 2,uVar11,plVar10[1] + 0x108,plVar10 + 0x42,
                      plVar10 + 0x29);
        ppppppppuVar13 = (undefined ********)(plVar10 + 0x5f);
        if (plVar10[0x5f] == 0) {
          FUN_10a8da3cc(&uStack_210,plVar10);
          FUN_10a8da5c8(&pppppppuStack_118,&uStack_210,plVar10[1] + 0x168,plVar10 + 0x3f,
                        plVar10 + 0x42);
          FUN_10a8da564(ppppppppuVar13,&pppppppuStack_118);
          pppppppuVar20 = pppppppuStack_110;
          if (pppppppuStack_110 != (undefined *******)0x0) {
            pppppppuVar21 = pppppppuStack_110 + 1;
            do {
              ppppppuVar31 = *pppppppuVar21;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
              if (bVar5) {
                *pppppppuVar21 = (undefined ******)((long)ppppppuVar31 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppppuVar31 == (undefined ******)0x0) {
              (*(code *)(*pppppppuStack_110)[2])(pppppppuStack_110);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar20);
            }
          }
          if (cStack_1c9 < '\0') {
            __ZdlPv(uStack_1e0);
          }
          pppppppuStack_230 = (undefined *******)&pppppppuStack_1f8;
          FUN_10a04b2ac(&pppppppuStack_230);
          ppppppppuVar13 = &pppppppuStack_230;
          pppppppuStack_230 = (undefined *******)&uStack_210;
          FUN_10a04b2ac();
LAB_10a8d9494:
          pppppppuVar20 = (undefined *******)plVar10[0x62];
          lVar19 = *(long *)(*plVar10 + 0x8d8);
          if ((lVar19 != 0) && (ppppppuVar31 = *pppppppuVar20, ((ulong)ppppppuVar31[8] & 1) != 0)) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            pppppppuStack_230 = (undefined *******)((ulong)pppppppuStack_230 & 0xffffffffffffff00);
            ppppppppuStack_228 = (undefined ********)0x0;
            pppppppuVar20 = (undefined *******)&pppppppuStack_230;
            func_0x00010945a80c(pppppppuVar20,"ml_build_request");
            ppppppuStack_238 = (undefined ******)0x0;
            auStack_240[0] = 3;
            ppppppuVar31 = ppppppuVar31 + 3;
            func_0x00010938229c();
            pppppppuVar21 = pppppppuVar20;
            ppppppuStack_238 = ppppppuVar31;
            func_0x00010945a80c(pppppppuVar20,&DAT_10f56f6ff);
            auStack_240[0] = *(undefined1 *)pppppppuVar21;
            *(undefined1 *)pppppppuVar21 = 3;
            ppppppuVar31 = pppppppuVar21[1];
            pppppppuVar21[1] = ppppppuStack_238;
            ppppppuStack_238 = ppppppuVar31;
            func_0x000109380ffc(&ppppppuStack_238);
            ppppppppuStack_248 = ppppppppuVar13;
            func_0x00010945a80c(pppppppuVar20,"start");
            *(undefined1 *)pppppppuVar20 = 5;
            pppppppuVar21 = (undefined *******)pppppppuVar20[1];
            pppppppuVar20[1] = (undefined ******)ppppppppuStack_248;
            ppppppppuStack_248 = (undefined ********)pppppppuVar21;
            func_0x000109380ffc(&ppppppppuStack_248);
            uStack_200 = (undefined **)CONCAT17(0xf,(undefined7)uStack_200);
            uStack_210._0_7_ = 0x4c4c4d68636554;
            uStack_210._7_1_ = 0x65;
            uStack_208 = 0x746e657645736e;
            uStack_201 = 0;
            FUN_10a0c32e4(&pppppppuStack_118,&pppppppuStack_230,0xffffffff,0x20,0,0);
            FUN_10a76bdb0(lVar19,&uStack_210,&pppppppuStack_118);
            if ((long)uStack_200 < 0) {
              __ZdlPv(CONCAT17(uStack_210._7_1_,(undefined7)uStack_210));
            }
            ppppppppuVar13 = (undefined ********)&ppppppppuStack_228;
            func_0x000109380ffc(ppppppppuVar13,(ulong)pppppppuStack_230 & 0xff);
            pppppppuVar20 = (undefined *******)plVar10[0x62];
          }
          pppppppuStack_100 = (undefined *******)plVar10[99];
          if (pppppppuStack_100 == (undefined *******)0x0) {
            lStack_c0 = 0;
            pppppppuStack_100 = (undefined *******)0x0;
            pppppppuStack_c8 = pppppppuVar20;
          }
          else {
            pppppppuVar21 = pppppppuStack_100 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
              if (bVar5) {
                *pppppppuVar21 = (undefined ******)((long)*pppppppuVar21 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            pppppppuStack_c8 = (undefined *******)plVar10[0x62];
            lStack_c0 = plVar10[99];
            if (lStack_c0 != 0) {
              plVar25 = (long *)(lStack_c0 + 8);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar5) {
                  *plVar25 = *plVar25 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          pppppppuStack_110 = (undefined *******)&PTR_FUN_110c2ae90;
          pppppppuStack_118 = (undefined *******)0x10a8da720;
          unaff_x20 = &pppppppuStack_110;
          pcStack_d8 = FUN_10a8da778;
          pppppppuStack_d0 = (undefined *******)&PTR_FUN_110c2aea8;
          lStack_98 = plVar10[0x65];
          plStack_90 = (long *)plVar10[0x66];
          if (plStack_90 != (long *)0x0) {
            plVar25 = plStack_90 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar5) {
                *plVar25 = *plVar25 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          unaff_x24 = (undefined *******)&pppppppuStack_118;
          pppppppuStack_108 = pppppppuVar20;
          FUN_10a8bb1fc();
          pppppppuVar20 = *ppppppppuVar13 + 0x11b;
          FUN_10a08fec0();
          lVar19 = *plVar10;
          if ((((ulong)*pppppppuVar20 & 1) == 0) ||
             (*(int *)(*(long *)(lVar19 + 0x100) + 0x2a8) == 8)) {
            pbVar14 = *(byte **)(*(long *)(lVar19 + 0x8b8) + 0x20);
            if (pbVar14 == (byte *)0x0) {
LAB_10a8d96fc:
              if (1 < *(int *)(*(long *)(lVar19 + 0x100) + 0x2a8) - 7U) goto LAB_10a8d971c;
              FUN_10a8d40c0();
              if (((ulong)pbVar14 & 1) == 0) {
                lVar19 = *plVar10;
                goto LAB_10a8d971c;
              }
              uVar30 = 0;
            }
            else {
              FUN_10a8b7988(pbVar14,&UNK_10f680bf1,0x1e);
              lVar19 = *plVar10;
              if ((*pbVar14 & 1) == 0) goto LAB_10a8d96fc;
LAB_10a8d971c:
              uVar30 = (uint)(*(int *)(*(long *)(lVar19 + 0x100) + 0x2a8) != 8);
            }
            uVar30 = (uint)param_2 & uVar30;
          }
          else {
            uVar30 = 1;
          }
          *(undefined4 *)(plVar10 + 0x28) = 0;
          lVar19 = plVar10[0x60];
          uStack_210._0_7_ = (undefined7)plVar10[0x5f];
          uStack_210._7_1_ = (undefined1)((ulong)plVar10[0x5f] >> 0x38);
          uStack_208 = (undefined7)lVar19;
          uStack_201 = (undefined1)((ulong)lVar19 >> 0x38);
          if (lVar19 != 0) {
            plVar25 = (long *)(lVar19 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar5) {
                *plVar25 = *plVar25 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar15 = (undefined8 *)plVar10[1];
          FUN_10a8c1848();
          uStack_200 = (undefined **)0x10a8da7d0;
          pppppppuStack_1f8 = (undefined *******)&PTR_DAT_110c2bdf0;
          uStack_1e8 = puVar15[1];
          uStack_1f0 = *puVar15;
          if (puVar15[1] != 0) {
            plVar25 = (long *)(puVar15[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar5) {
                *plVar25 = *plVar25 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_10a8d5cd4();
          plStack_1b8 = (long *)puVar15[1];
          uStack_1c0 = *puVar15;
          if (puVar15[1] != 0) {
            plVar25 = (long *)(puVar15[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar5) {
                *plVar25 = *plVar25 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_1b0 = (undefined1)uVar30;
          uStack_1af = 1;
          pppppppuStack_1a8 = pppppppuStack_118;
          unaff_x26 = (undefined *******)&uStack_210;
          (*(code *)pppppppuStack_110[2])(apuStack_1a0,unaff_x20);
          pcStack_168 = pcStack_d8;
          ppppppppuVar18 = &pppppppuStack_d0;
          (*(code *)pppppppuStack_d0[2])(apuStack_160);
          plStack_120 = plStack_90;
          lStack_128 = lStack_98;
          lStack_98 = 0;
          plStack_90 = (long *)0x0;
          FUN_109d23f70(&pppppppuStack_230,&uStack_210);
          pppppppuVar20 = (undefined *******)(plVar10 + 0x53);
          if ((undefined ********)pppppppuVar20 != &pppppppuStack_230) {
            if (*pppppppuVar20 != (undefined ******)0x0) {
              ppppppuVar31 = *pppppppuVar20 + 3;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
                if (bVar5) {
                  *(int *)ppppppuVar31 = *(int *)ppppppuVar31 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              func_0x00010a8d4cd8(pppppppuVar20);
            }
            ppppppppuVar13 = ppppppppuStack_228;
            pppppppuVar21 = pppppppuStack_230;
            pppppppuStack_230 = (undefined *******)0x0;
            ppppppppuStack_228 = (undefined ********)0x0;
            plVar25 = (long *)plVar10[0x54];
            plVar10[0x54] = (long)ppppppppuVar13;
            *pppppppuVar20 = (undefined ******)pppppppuVar21;
            if (plVar25 != (long *)0x0) {
              plVar33 = plVar25 + 1;
              do {
                lVar19 = *plVar33;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar5) {
                  *plVar33 = lVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plVar25 + 0x10))(plVar25);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
              }
            }
          }
          ppppppppuVar13 = ppppppppuStack_228;
          if (pppppppuStack_230 != (undefined *******)0x0) {
            pppppppuVar21 = pppppppuStack_230 + 3;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
              if (bVar5) {
                *(int *)pppppppuVar21 = *(int *)pppppppuVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (ppppppppuStack_228 != (undefined ********)0x0) {
            ppppppppuVar12 = ppppppppuStack_228 + 1;
            do {
              pppppppuVar21 = *ppppppppuVar12;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
              if (bVar5) {
                *ppppppppuVar12 = (undefined *******)((long)pppppppuVar21 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (pppppppuVar21 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_228)[2])(ppppppppuStack_228);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar13);
            }
          }
          plVar25 = plStack_120;
          if (plStack_120 != (long *)0x0) {
            plVar33 = plStack_120 + 1;
            do {
              lVar19 = *plVar33;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar5) {
                *plVar33 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_120 + 0x10))(plStack_120);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
            }
          }
          (*(code *)*apuStack_160[0])(apuStack_160);
          (*(code *)*apuStack_1a0[0])(apuStack_1a0);
          plVar25 = plStack_1b8;
          if (plStack_1b8 != (long *)0x0) {
            plVar33 = plStack_1b8 + 1;
            do {
              lVar19 = *plVar33;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar5) {
                *plVar33 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
            }
          }
          (*(code *)*pppppppuStack_1f8)(&pppppppuStack_1f8);
          plVar25 = (long *)CONCAT17(uStack_201,uStack_208);
          if (plVar25 != (long *)0x0) {
            plVar33 = plVar25 + 1;
            do {
              lVar19 = *plVar33;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar5) {
                *plVar33 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
            }
          }
          if ((((char)plVar10[0x59] == '\x01') && (*pppppppuVar20 != (undefined ******)0x0)) &&
             (ppppppuVar31 = (undefined ******)(*pppppppuVar20)[2],
             ppppppuVar31 != (undefined ******)0x0)) {
            ppppppuVar28 = ppppppuVar31 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
              if (bVar5) {
                *ppppppuVar28 = (undefined *****)((long)*ppppppuVar28 + 4);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            pppppppuVar21 = (undefined *******)0x118;
            __Znwm();
            pppppppuVar21[2] = (undefined ******)0x0;
            pppppppuVar21[1] = (undefined ******)0x200000006;
            *(undefined2 *)(pppppppuVar21 + 3) = 4;
            pppppppuVar21[5] = (undefined ******)0x0;
            pppppppuVar21[4] = (undefined ******)0x0;
            pppppppuVar21[7] = (undefined ******)0x0;
            pppppppuVar21[6] = (undefined ******)0x0;
            pppppppuVar21[9] = (undefined ******)0x0;
            pppppppuVar21[8] = (undefined ******)0x0;
            pppppppuVar21[0xb] = (undefined ******)0x0;
            pppppppuVar21[10] = (undefined ******)0x0;
            pppppppuVar21[0xd] = (undefined ******)0x0;
            pppppppuVar21[0xc] = (undefined ******)0x0;
            pppppppuVar21[0xf] = (undefined ******)0x0;
            pppppppuVar21[0xe] = (undefined ******)0x0;
            pppppppuVar21[0x10] = (undefined ******)0x0;
            pppppppuVar21[0x11] = (undefined ******)(pppppppuVar21 + 3);
            pppppppuVar21[0x12] = (undefined ******)0x0;
            *(undefined1 *)(pppppppuVar21 + 0x13) = 0;
            *(undefined1 *)(pppppppuVar21 + 0x15) = 0;
            *pppppppuVar21 = (undefined ******)&PTR_FUN_110c2aed0;
            pppppppuVar32 = pppppppuVar21 + 0x16;
            *pppppppuVar32 = ppppppuVar31;
            ppppppuVar31 = (undefined ******)plVar10[0x58] + 1;
            pppppppuVar21[0x17] = (undefined ******)plVar10[0x58];
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
              if (bVar5) {
                *ppppppuVar31 = (undefined *****)((long)*ppppppuVar31 + 4);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            pppppppuVar21[0x1a] = (undefined ******)0x0;
            pppppppuVar21[0x1b] = (undefined ******)0x32aaaba7;
            pppppppuVar21[0x1d] = (undefined ******)0x0;
            pppppppuVar21[0x1c] = (undefined ******)0x0;
            pppppppuVar21[0x1f] = (undefined ******)0x0;
            pppppppuVar21[0x1e] = (undefined ******)0x0;
            pppppppuVar21[0x21] = (undefined ******)0x0;
            pppppppuVar21[0x20] = (undefined ******)0x0;
            pppppppuVar21[0x22] = (undefined ******)0x0;
            ppppppppuStack_228 = (undefined ********)0x0;
            pppppppuVar21[0x18] = (undefined ******)pppppppuVar21;
            pppppppuVar21[0x19] = (undefined ******)0x0;
            pppppppuStack_230 = pppppppuVar21;
            pppppppuStack_220 = pppppppuVar32;
            if (((uint)pppppppuVar21[0x17][2] >> 1 & 1) == 0) {
              __ZNSt3__15mutex4lockEv(pppppppuVar21 + 0x1b);
              ppppppuVar28 = *pppppppuVar32;
              ppppppuVar31 = ppppppuVar28 + 2;
              do {
                pppppuVar22 = *ppppppuVar31;
                if (pppppuVar22 == (undefined *****)0x0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
                  if (bVar5) {
                    *ppppppuVar31 = (undefined *****)0x1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    ppppppuVar31 = ppppppuVar28 + 3;
                    uStack_210._0_7_ = 0x10a8da86c;
                    uStack_210._7_1_ = 0;
                    uStack_208 = SUB87(pppppppuVar32,0);
                    uVar6 = uStack_208;
                    uStack_201 = (undefined1)((ulong)pppppppuVar32 >> 0x38);
                    uVar7 = uStack_201;
                    uStack_200 = &PTR_PTR_1132fed68;
                    func_0x000109d1b588(ppppppuVar31,&uStack_210);
                    ppppppuVar28[2] = (undefined *****)0x0;
                    pppppppuStack_220[3] = ppppppuVar31;
                    ppppppuVar29 = pppppppuVar21[0x17];
                    ppppppuVar28 = ppppppuVar29 + 2;
                    goto LAB_10a8d9cf8;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
              } while (((uint)pppppuVar22 >> 1 & 1) == 0);
              pppppppuStack_220[3] = (undefined ******)0x0;
              ppppppuVar28 = pppppppuVar21[0x18];
              ppppppuVar31 = ppppppuVar28 + 2;
              do {
                pppppuVar22 = *ppppppuVar31;
                if (pppppuVar22 == (undefined *****)0x0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
                  if (bVar5) {
                    *ppppppuVar31 = (undefined *****)0x2;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    func_0x000109d1b4dc(ppppppuVar28 + 3);
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
              } while (((uint)pppppuVar22 >> 1 & 1) == 0);
              ppppppuVar31 = pppppppuVar21[0x17];
              pppppppuVar21[0x17] = (undefined ******)0x0;
              if (ppppppuVar31 != (undefined ******)0x0) {
                ppppppuVar28 = ppppppuVar31 + 1;
                do {
                  pppppuVar22 = *ppppppuVar28;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
                  if (bVar5) {
                    *ppppppuVar28 = (undefined *****)((long)pppppuVar22 + -4);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (((ulong)pppppuVar22 & 0x1fffffffc) == 4) {
                  (*(code *)(*ppppppuVar31)[2])(ppppppuVar31);
                  do {
                    pppppuVar22 = *ppppppuVar28;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
                    if (bVar5) {
                      *ppppppuVar28 = (undefined *****)((long)pppppuVar22 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((undefined *****)((long)pppppuVar22 + -1) == (undefined *****)0x0) {
                    (*(code *)(*ppppppuVar31)[1])(ppppppuVar31);
                  }
                }
              }
              ppppppuVar31 = pppppppuVar21[0x18];
              pppppppuVar21[0x18] = (undefined ******)0x0;
              if (ppppppuVar31 != (undefined ******)0x0) {
                func_0x0001092b4274(pppppppuVar21 + 0x18);
              }
              pppppppuVar26 = (undefined *******)*pppppppuVar32;
              *pppppppuVar32 = (undefined ******)0x0;
LAB_10a8d9f3c:
              __ZNSt3__15mutex6unlockEv(pppppppuVar21 + 0x1b);
              unaff_x26 = pppppppuVar32;
            }
            else {
              ppppppuVar31 = pppppppuVar21[0x18];
              pppppppuVar26 = pppppppuVar21;
              FUN_109d1857c();
              func_0x000109d1b350(ppppppuVar31,pppppppuVar26);
              ppppppuVar31 = *pppppppuVar32;
              *pppppppuVar32 = (undefined ******)0x0;
              if (ppppppuVar31 != (undefined ******)0x0) {
                ppppppuVar28 = ppppppuVar31 + 1;
                do {
                  pppppuVar22 = *ppppppuVar28;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
                  if (bVar5) {
                    *ppppppuVar28 = (undefined *****)((long)pppppuVar22 + -4);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (((ulong)pppppuVar22 & 0x1fffffffc) == 4) {
                  do {
                    pppppuVar22 = *ppppppuVar28;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
                    if (bVar5) {
                      *ppppppuVar28 = (undefined *****)((long)pppppuVar22 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((undefined *****)((long)pppppuVar22 + -1) == (undefined *****)0x0) {
                    (*(code *)(*ppppppuVar31)[1])();
                  }
                }
              }
              ppppppuVar31 = pppppppuVar21[0x17];
              pppppppuVar21[0x17] = (undefined ******)0x0;
              if (ppppppuVar31 != (undefined ******)0x0) {
                unaff_x26 = (undefined *******)(ppppppuVar31 + 1);
                do {
                  ppppppuVar28 = *unaff_x26;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                  if (bVar5) {
                    *unaff_x26 = (undefined ******)((long)ppppppuVar28 + -4);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (((ulong)ppppppuVar28 & 0x1fffffffc) == 4) {
                  (*(code *)(*ppppppuVar31)[2])(ppppppuVar31);
                  do {
                    ppppppuVar28 = *unaff_x26;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                    if (bVar5) {
                      *unaff_x26 = (undefined ******)((long)ppppppuVar28 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((undefined ******)((long)ppppppuVar28 + -1) == (undefined ******)0x0) {
                    (*(code *)(*ppppppuVar31)[1])(ppppppuVar31);
                  }
                }
              }
              ppppppuVar31 = pppppppuVar21[0x18];
              pppppppuVar21[0x18] = (undefined ******)0x0;
              if (ppppppuVar31 != (undefined ******)0x0) {
                func_0x0001092b4274(pppppppuVar21 + 0x18);
              }
              pppppppuVar26 = pppppppuStack_230;
              pppppppuStack_230 = (undefined *******)0x0;
            }
            ppppppppuVar18 = ppppppppuStack_228;
            if (ppppppppuStack_228 != (undefined ********)0x0) {
              func_0x0001092b4274(&ppppppppuStack_228);
            }
            if (pppppppuStack_230 != (undefined *******)0x0) {
              pppppppuVar21 = pppppppuStack_230 + 1;
              do {
                ppppppuVar31 = *pppppppuVar21;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
                if (bVar5) {
                  *pppppppuVar21 = (undefined ******)((long)ppppppuVar31 + -4);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (((ulong)ppppppuVar31 & 0x1fffffffc) == 4) {
                do {
                  ppppppuVar31 = *pppppppuVar21;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
                  if (bVar5) {
                    *pppppppuVar21 = (undefined ******)((long)ppppppuVar31 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((undefined ******)((long)ppppppuVar31 + -1) == (undefined ******)0x0) {
                  (*(code *)(*pppppppuStack_230)[1])();
                }
              }
            }
            plVar25 = (long *)plVar10[0x55];
            if (plVar25 != (long *)0x0) {
              puVar1 = (ulong *)(plVar25 + 1);
              do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar25 + 8))();
                }
              }
            }
            plVar10[0x55] = (long)pppppppuVar26;
          }
          else {
            plVar25 = (long *)plVar10[0x55];
            if (plVar25 != (long *)0x0) {
              puVar1 = (ulong *)(plVar25 + 1);
              do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar25 + 8))();
                }
              }
            }
            plVar10[0x55] = 0;
          }
          if (((uVar30 == 0) && (*pppppppuVar20 != (undefined ******)0x0)) &&
             ((*pppppppuVar20)[2] != (undefined *****)0x0)) {
            ppppppppuVar18 = (undefined ********)&UNK_10f68165b;
            FUN_10a8da354(plVar10);
            FUN_10a8c7000(plVar10);
          }
          plVar10 = plStack_90;
          if (plStack_90 != (long *)0x0) {
            plVar25 = plStack_90 + 1;
            do {
              lVar19 = *plVar25;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar5) {
                *plVar25 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_90 + 0x10))(plStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          (*(code *)*pppppppuStack_d0)(&pppppppuStack_d0);
          ppppppppuVar13 = unaff_x20;
          (*(code *)*pppppppuStack_110)();
        }
        else {
          FUN_10a8da3cc(&uStack_210,plVar10);
          FUN_10a8da5c8(&pppppppuStack_230,&uStack_210,plVar10[1] + 0x168,plVar10 + 0x3f,
                        plVar10 + 0x42);
          if (cStack_1c9 < '\0') {
            __ZdlPv(uStack_1e0);
          }
          pppppppuStack_118 = (undefined *******)&pppppppuStack_1f8;
          FUN_10a04b2ac(&pppppppuStack_118);
          pppppppuStack_118 = (undefined *******)&uStack_210;
          FUN_10a04b2ac(&pppppppuStack_118);
          pppppppuVar20 = *ppppppppuVar13;
          uStack_200 = (undefined **)(pppppppuVar20 + 0xc);
          pppppppuStack_1f8 = pppppppuVar20 + 0xf;
          uStack_210._0_7_ = SUB87(pppppppuVar20,0);
          uStack_210._7_1_ = (undefined1)((ulong)pppppppuVar20 >> 0x38);
          uStack_208 = SUB87(pppppppuVar20 + 9,0);
          uStack_201 = (undefined1)((ulong)(pppppppuVar20 + 9) >> 0x38);
          pppppppuStack_110 = pppppppuStack_230 + 9;
          pppppppuStack_108 = pppppppuStack_230 + 0xc;
          pppppppuStack_100 = pppppppuStack_230 + 0xf;
          pppppppuStack_118 = pppppppuStack_230;
          ppppppppuVar12 = (undefined ********)auStack_240;
          ppppppppuVar18 = (undefined ********)&uStack_210;
          FUN_109d2d6b8(ppppppppuVar12,ppppppppuVar18,&pppppppuStack_118);
          if (((ulong)ppppppppuVar12 & 1) == 0) {
            func_0x00010a8d4768(plVar10);
            ppppppppuVar18 = &pppppppuStack_230;
            FUN_10a8da564();
          }
          else {
            ppppppppuVar13 = ppppppppuVar12;
            if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
              ppppppppuVar13 = (undefined ********)0x1;
              ppppppppuVar18 = (undefined ********)0x2;
              func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f68166d,0xb9,&UNK_10f6816c0);
            }
          }
          unaff_x20 = ppppppppuStack_228;
          if (ppppppppuStack_228 != (undefined ********)0x0) {
            ppppppppuVar2 = ppppppppuStack_228 + 1;
            do {
              pppppppuVar20 = *ppppppppuVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
              if (bVar5) {
                *ppppppppuVar2 = (undefined *******)((long)pppppppuVar20 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (pppppppuVar20 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_228)[2])(ppppppppuStack_228);
              ppppppppuVar13 = unaff_x20;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          if (((ulong)ppppppppuVar12 & 1) == 0) goto LAB_10a8d9494;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
          auVar40._8_8_ = ppppppppuVar18;
          auVar40._0_8_ = ppppppppuVar13;
          return auVar40;
        }
      }
      ___stack_chk_fail();
      __ZNSt3__15mutex6unlockEv(unaff_x26 + 5);
      FUN_10a8daae8(&pppppppuStack_230);
      FUN_10a8d4068(unaff_x24 + 0x10);
      (*(code *)*pppppppuStack_d0)(unaff_x24 + 9);
      (*(code *)*pppppppuStack_110)(unaff_x20);
      __Unwind_Resume(ppppppppuVar13);
      puVar16 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if (ppppppppuVar18 < (undefined ********)0x2e8ba2e8ba2e8bb) {
        lVar19 = (long)ppppppppuVar18 * 0x58;
        __Znwm(lVar19);
        auVar41._8_8_ = ppppppppuVar18;
        auVar41._0_8_ = lVar19;
        return auVar41;
      }
      func_0x000109ffded8();
      puVar23 = (undefined8 *)(puVar16 + 8);
      puVar27 = (undefined8 *)*puVar23;
      ppppppppuVar13 = ppppppppuVar18;
      puVar15 = puVar23;
      if (puVar27 != (undefined8 *)0x0) {
        do {
          puVar17 = puVar27 + 4;
          ppppppppuVar13 = ppppppppuVar18;
          FUN_10a003e3c(puVar17,ppppppppuVar18);
          if (-1 < (char)puVar17) {
            puVar15 = puVar27;
          }
          puVar27 = *(undefined8 **)((long)puVar27 + ((ulong)puVar17 >> 4 & 8));
        } while (puVar27 != (undefined8 *)0x0);
        if (puVar15 != puVar23) {
          ppppppppuVar13 = (undefined ********)(puVar15 + 4);
          FUN_10a003e3c(ppppppppuVar18,ppppppppuVar13);
          if (((uint)ppppppppuVar18 >> 7 & 1) == 0) goto LAB_10a8da28c;
        }
      }
      puVar15 = puVar23;
LAB_10a8da28c:
      auVar42._8_8_ = ppppppppuVar13;
      auVar42._0_8_ = puVar15;
      return auVar42;
    }
    FUN_10a00946c(&UNK_10f68156f);
  }
  plVar10 = (long *)&UNK_10f681523;
  FUN_10a00946c();
  if ((int)plVar10[0x28] == 3) {
LAB_10a8c7018:
    uVar8 = 0;
  }
  else {
    if ((((int)plVar10[0x28] != 2) && ((int)plVar10[0x28] != 1)) && ((int)plVar10[0x28] != 4)) {
      if (((plVar10[0x53] == 0) || (lVar19 = *(long *)(plVar10[0x53] + 0x10), lVar19 == 0)) ||
         (((uint)*(undefined8 *)(lVar19 + 0x10) >> 1 & 1) == 0)) goto LAB_10a8c7018;
      if (0x143 < *(int *)(*(long *)(*plVar10 + 0xa20) + 0x18)) {
        if (plVar10[0x53] == 0) {
          plVar10 = (long *)&UNK_10f681734;
          func_0x000105688514();
          pplVar9 = &plStack_80;
          plVar25 = plVar10;
          if ((int)plVar10[0x28] == 1) {
            if (((char)plVar10[0x59] == '\x01') &&
               (((uint)*(undefined8 *)(plVar10[0x58] + 0x10) >> 1 & 1) != 0)) {
              plVar25 = (long *)plVar10[0x56];
              if (plVar25 != (long *)0x0) {
                puVar1 = (ulong *)(plVar25 + 1);
                do {
                  uVar11 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar11 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar11 & 0x1fffffffc) == 4) {
                  do {
                    uVar11 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar11 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar11 - 1 == 0) {
                    (**(code **)(*plVar25 + 8))();
                  }
                }
              }
              plVar10[0x56] = 0;
              *(undefined4 *)(plVar10 + 0x28) = 2;
            }
            else {
              plVar33 = (long *)plVar10[0x10];
              plVar10[0xf] = 0;
              plVar10[0x10] = 0;
              if (((char)plVar10[0x5e] == '\x01') &&
                 (((long *)plVar10[0x21] != (long *)0x0 &&
                  (plVar25 = *(long **)(*(long *)plVar10[0x21] + 0x88), plVar25 != (long *)0x0)))) {
                (**(code **)(*plVar25 + 0x48))(plVar25,1);
              }
              puStack_78 = &stack0xffffffffffffff90;
              param_2 = (undefined ********)0x1;
              plStack_80 = plVar10;
              FUN_10a8c6a58(plVar10,1);
              FUN_10a8db76c(&plStack_80);
              plVar25 = (long *)pplVar9;
              if (plVar33 != (long *)0x0) {
                plVar10 = plVar33 + 1;
                do {
                  lVar19 = *plVar10;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar5) {
                    *plVar10 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plVar33 + 0x10))(plVar33);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
                  plVar25 = plVar33;
                }
              }
            }
          }
          auVar37._8_8_ = param_2;
          auVar37._0_8_ = plVar25;
          return auVar37;
        }
        if (((uint)*(undefined8 *)(*(long *)(plVar10[0x53] + 0x10) + 0x10) >> 5 & 1) != 0) {
          FUN_10a8dae18();
          goto LAB_10a8c7048;
        }
      }
      FUN_10a8dafa0();
    }
LAB_10a8c7048:
    uVar8 = 1;
  }
  auVar36._8_8_ = param_2;
  auVar36._0_8_ = uVar8;
  return auVar36;
LAB_10a8d9cf8:
  do {
    pppppuVar22 = *ppppppuVar28;
    if (pppppuVar22 == (undefined *****)0x0) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
      if (bVar5) {
        *ppppppuVar28 = (undefined *****)0x1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        ppppppuVar31 = ppppppuVar29 + 3;
        uStack_210._0_7_ = 0x10a8daa08;
        uStack_210._7_1_ = 0;
        uStack_200 = &PTR_PTR_1132fed68;
        uStack_208 = uVar6;
        uStack_201 = uVar7;
        func_0x000109d1b588(ppppppuVar31,&uStack_210);
        ppppppuVar29[2] = (undefined *****)0x0;
        pppppppuStack_220[4] = ppppppuVar31;
        pppppppuVar26 = pppppppuStack_230;
        goto LAB_10a8d9f38;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)pppppuVar22 >> 1 & 1) == 0);
  pppppppuStack_220[4] = (undefined ******)0x0;
  ppppppuVar28 = pppppppuVar21[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(ppppppuVar28,ppppppuVar31);
  ppppppuVar31 = pppppppuVar21[0x17];
  pppppppuVar21[0x17] = (undefined ******)0x0;
  if (ppppppuVar31 != (undefined ******)0x0) {
    ppppppuVar28 = ppppppuVar31 + 1;
    do {
      pppppuVar22 = *ppppppuVar28;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
      if (bVar5) {
        *ppppppuVar28 = (undefined *****)((long)pppppuVar22 + -4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((ulong)pppppuVar22 & 0x1fffffffc) == 4) {
      (*(code *)(*ppppppuVar31)[2])(ppppppuVar31);
      do {
        pppppuVar22 = *ppppppuVar28;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
        if (bVar5) {
          *ppppppuVar28 = (undefined *****)((long)pppppuVar22 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((undefined *****)((long)pppppuVar22 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar31)[1])(ppppppuVar31);
      }
    }
  }
  ppppppuVar29 = *pppppppuVar32;
  ppppppuVar31 = ppppppuVar29 + 2;
  ppppppuVar28 = pppppppuStack_220[3];
  while (pppppuVar22 = *ppppppuVar31, pppppuVar22 != (undefined *****)0x0) {
    ClearExclusiveLocal();
LAB_10a8d9de4:
    pppppppuVar26 = pppppppuStack_230;
    if (((uint)pppppuVar22 >> 1 & 1) != 0) goto LAB_10a8d9f38;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar31,0x10);
  if (bVar5) {
    *ppppppuVar31 = (undefined *****)0x1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 != '\0') goto LAB_10a8d9de4;
  uStack_210._0_7_ = 0x10a8da86c;
  uStack_210._7_1_ = 0;
  uStack_200 = &PTR_PTR_1132fed68;
  uStack_208 = uVar6;
  uStack_201 = uVar7;
  FUN_109d1b624(ppppppuVar29 + 3,&uStack_210,ppppppuVar28);
  ppppppuVar29[2] = (undefined *****)0x0;
  pppppppuStack_220[3] = (undefined ******)0x0;
  ppppppuVar31 = *pppppppuVar32;
  *pppppppuVar32 = (undefined ******)0x0;
  if (ppppppuVar31 != (undefined ******)0x0) {
    ppppppuVar28 = ppppppuVar31 + 1;
    do {
      pppppuVar22 = *ppppppuVar28;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
      if (bVar5) {
        *ppppppuVar28 = (undefined *****)((long)pppppuVar22 + -4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((ulong)pppppuVar22 & 0x1fffffffc) == 4) {
      do {
        pppppuVar22 = *ppppppuVar28;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
        if (bVar5) {
          *ppppppuVar28 = (undefined *****)((long)pppppuVar22 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((undefined *****)((long)pppppuVar22 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar31)[1])();
      }
    }
  }
  ppppppuVar31 = pppppppuVar21[0x18];
  pppppppuVar21[0x18] = (undefined ******)0x0;
  pppppppuVar26 = pppppppuStack_230;
  if (ppppppuVar31 != (undefined ******)0x0) {
    func_0x0001092b4274(pppppppuVar21 + 0x18);
    pppppppuVar26 = pppppppuStack_230;
  }
LAB_10a8d9f38:
  pppppppuStack_230 = (undefined *******)0x0;
  goto LAB_10a8d9f3c;
}



/* Entry: 10a8c6f54; end: 10a8c6fff;  */

/* WARNING: Removing unreachable block (ram,0x00010a8d9ad8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d95c8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9b18) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9dd0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10a8c6f54(long *param_1,undefined ********param_2)

{
  ulong *puVar1;
  undefined ********ppppppppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long **pplVar10;
  ulong uVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined ********ppppppppuVar18;
  long lVar19;
  undefined *******pppppppuVar20;
  undefined *******pppppppuVar21;
  undefined *****pppppuVar22;
  undefined8 *puVar23;
  undefined ********unaff_x20;
  long *plVar24;
  undefined *******pppppppuVar25;
  undefined8 *puVar26;
  undefined ******ppppppuVar27;
  undefined ******ppppppuVar28;
  undefined *******unaff_x24;
  uint uVar29;
  undefined ******ppppppuVar30;
  undefined *******unaff_x26;
  undefined *******pppppppuVar31;
  long *plVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined ********ppppppppuStack_238;
  undefined1 auStack_230 [8];
  undefined ******ppppppuStack_228;
  undefined *******pppppppuStack_220;
  undefined ********ppppppppuStack_218;
  undefined *******pppppppuStack_210;
  undefined8 uStack_200;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined8 uStack_1f0;
  undefined *******pppppppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char cStack_1b9;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined1 uStack_1a0;
  undefined2 uStack_19f;
  undefined *******pppppppuStack_198;
  undefined8 *apuStack_190 [7];
  code *pcStack_158;
  undefined8 *apuStack_150 [7];
  long lStack_118;
  long *plStack_110;
  undefined *******pppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined *******pppppppuStack_f8;
  undefined *******pppppppuStack_f0;
  code *pcStack_c8;
  undefined *******pppppppuStack_c0;
  undefined *******pppppppuStack_b8;
  long lStack_b0;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  undefined1 *puStack_68;
  
  if ((int)param_1[0x28] != 3) {
    auVar33._8_8_ = param_2;
    auVar33._0_8_ = param_1;
    return auVar33;
  }
  if ((param_1[9] != 0) || (param_1[0xc] != 0)) {
    lVar19 = param_1[1];
    if (lVar19 == 0) {
      FUN_10a00946c(&UNK_10f681554);
    }
    else if ((*(byte *)(lVar19 + 0x1b1) & 1) != 0) {
      if (((*(byte *)(param_1 + 100) & 1) == 0) && (*(char *)(lVar19 + 0x1b0) == '\x01')) {
        FUN_10a8d852c(param_1);
      }
      FUN_10a8d8a78(param_1);
      lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar24 = param_1;
      ppppppppuVar18 = param_2;
      if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
        FUN_10a8d4b90();
      }
      if (param_1[1] == 0) {
        ppppppppuVar13 = (undefined ********)&UNK_10f681700;
        FUN_10a00946c();
      }
      else {
        func_0x00010ad031c0();
        plVar9 = (long *)*plVar24;
        if (-1 < *(char *)((long)plVar24 + 0x17)) {
          plVar9 = plVar24;
        }
        func_0x000107c2b054(&uStack_200,plVar9);
        if (*(char *)((long)param_1 + 0x247) < '\0') {
          __ZdlPv(param_1[0x46]);
        }
        param_1[0x47] = CONCAT17(uStack_1f1,uStack_1f8);
        param_1[0x46] = CONCAT17(uStack_200._7_1_,(undefined7)uStack_200);
        param_1[0x48] = (long)uStack_1f0;
        *(char *)(param_1 + 0x49) = (char)param_1[0x5e];
        lVar19 = param_1[0x3f];
        lVar3 = param_1[0x40];
        uVar11 = (ulong)*(uint *)((long)param_1 + 0x2ec);
        FUN_10a8c09d8(uVar11);
        FUN_109d20fac(lVar19,lVar3 - lVar19 >> 2,uVar11,param_1[1] + 0x108,param_1 + 0x42,
                      param_1 + 0x29);
        ppppppppuVar13 = (undefined ********)(param_1 + 0x5f);
        if (param_1[0x5f] == 0) {
          FUN_10a8da3cc(&uStack_200,param_1);
          FUN_10a8da5c8(&pppppppuStack_108,&uStack_200,param_1[1] + 0x168,param_1 + 0x3f,
                        param_1 + 0x42);
          FUN_10a8da564(ppppppppuVar13,&pppppppuStack_108);
          pppppppuVar20 = pppppppuStack_100;
          if (pppppppuStack_100 != (undefined *******)0x0) {
            pppppppuVar21 = pppppppuStack_100 + 1;
            do {
              ppppppuVar30 = *pppppppuVar21;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
              if (bVar5) {
                *pppppppuVar21 = (undefined ******)((long)ppppppuVar30 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppppuVar30 == (undefined ******)0x0) {
              (*(code *)(*pppppppuStack_100)[2])(pppppppuStack_100);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar20);
            }
          }
          if (cStack_1b9 < '\0') {
            __ZdlPv(uStack_1d0);
          }
          pppppppuStack_220 = (undefined *******)&pppppppuStack_1e8;
          FUN_10a04b2ac(&pppppppuStack_220);
          ppppppppuVar13 = &pppppppuStack_220;
          pppppppuStack_220 = (undefined *******)&uStack_200;
          FUN_10a04b2ac();
LAB_10a8d9494:
          pppppppuVar20 = (undefined *******)param_1[0x62];
          lVar19 = *(long *)(*param_1 + 0x8d8);
          if ((lVar19 != 0) && (ppppppuVar30 = *pppppppuVar20, ((ulong)ppppppuVar30[8] & 1) != 0)) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            pppppppuStack_220 = (undefined *******)((ulong)pppppppuStack_220 & 0xffffffffffffff00);
            ppppppppuStack_218 = (undefined ********)0x0;
            pppppppuVar20 = (undefined *******)&pppppppuStack_220;
            func_0x00010945a80c(pppppppuVar20,"ml_build_request");
            ppppppuStack_228 = (undefined ******)0x0;
            auStack_230[0] = 3;
            ppppppuVar30 = ppppppuVar30 + 3;
            func_0x00010938229c();
            pppppppuVar21 = pppppppuVar20;
            ppppppuStack_228 = ppppppuVar30;
            func_0x00010945a80c(pppppppuVar20,&DAT_10f56f6ff);
            auStack_230[0] = *(undefined1 *)pppppppuVar21;
            *(undefined1 *)pppppppuVar21 = 3;
            ppppppuVar30 = pppppppuVar21[1];
            pppppppuVar21[1] = ppppppuStack_228;
            ppppppuStack_228 = ppppppuVar30;
            func_0x000109380ffc(&ppppppuStack_228);
            ppppppppuStack_238 = ppppppppuVar13;
            func_0x00010945a80c(pppppppuVar20,"start");
            *(undefined1 *)pppppppuVar20 = 5;
            pppppppuVar21 = (undefined *******)pppppppuVar20[1];
            pppppppuVar20[1] = (undefined ******)ppppppppuStack_238;
            ppppppppuStack_238 = (undefined ********)pppppppuVar21;
            func_0x000109380ffc(&ppppppppuStack_238);
            uStack_1f0 = (undefined **)CONCAT17(0xf,(undefined7)uStack_1f0);
            uStack_200._0_7_ = 0x4c4c4d68636554;
            uStack_200._7_1_ = 0x65;
            uStack_1f8 = 0x746e657645736e;
            uStack_1f1 = 0;
            FUN_10a0c32e4(&pppppppuStack_108,&pppppppuStack_220,0xffffffff,0x20,0,0);
            FUN_10a76bdb0(lVar19,&uStack_200,&pppppppuStack_108);
            if ((long)uStack_1f0 < 0) {
              __ZdlPv(CONCAT17(uStack_200._7_1_,(undefined7)uStack_200));
            }
            ppppppppuVar13 = (undefined ********)&ppppppppuStack_218;
            func_0x000109380ffc(ppppppppuVar13,(ulong)pppppppuStack_220 & 0xff);
            pppppppuVar20 = (undefined *******)param_1[0x62];
          }
          pppppppuStack_f0 = (undefined *******)param_1[99];
          if (pppppppuStack_f0 == (undefined *******)0x0) {
            lStack_b0 = 0;
            pppppppuStack_f0 = (undefined *******)0x0;
            pppppppuStack_b8 = pppppppuVar20;
          }
          else {
            pppppppuVar21 = pppppppuStack_f0 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
              if (bVar5) {
                *pppppppuVar21 = (undefined ******)((long)*pppppppuVar21 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            pppppppuStack_b8 = (undefined *******)param_1[0x62];
            lStack_b0 = param_1[99];
            if (lStack_b0 != 0) {
              plVar24 = (long *)(lStack_b0 + 8);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar5) {
                  *plVar24 = *plVar24 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          pppppppuStack_100 = (undefined *******)&PTR_FUN_110c2ae90;
          pppppppuStack_108 = (undefined *******)0x10a8da720;
          unaff_x20 = &pppppppuStack_100;
          pcStack_c8 = FUN_10a8da778;
          pppppppuStack_c0 = (undefined *******)&PTR_FUN_110c2aea8;
          lStack_88 = param_1[0x65];
          plStack_80 = (long *)param_1[0x66];
          if (plStack_80 != (long *)0x0) {
            plVar24 = plStack_80 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar5) {
                *plVar24 = *plVar24 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          unaff_x24 = (undefined *******)&pppppppuStack_108;
          pppppppuStack_f8 = pppppppuVar20;
          FUN_10a8bb1fc();
          pppppppuVar20 = *ppppppppuVar13 + 0x11b;
          FUN_10a08fec0();
          lVar19 = *param_1;
          if ((((ulong)*pppppppuVar20 & 1) == 0) ||
             (*(int *)(*(long *)(lVar19 + 0x100) + 0x2a8) == 8)) {
            pbVar14 = *(byte **)(*(long *)(lVar19 + 0x8b8) + 0x20);
            if (pbVar14 == (byte *)0x0) {
LAB_10a8d96fc:
              if (1 < *(int *)(*(long *)(lVar19 + 0x100) + 0x2a8) - 7U) goto LAB_10a8d971c;
              FUN_10a8d40c0();
              if (((ulong)pbVar14 & 1) == 0) {
                lVar19 = *param_1;
                goto LAB_10a8d971c;
              }
              uVar29 = 0;
            }
            else {
              FUN_10a8b7988(pbVar14,&UNK_10f680bf1,0x1e);
              lVar19 = *param_1;
              if ((*pbVar14 & 1) == 0) goto LAB_10a8d96fc;
LAB_10a8d971c:
              uVar29 = (uint)(*(int *)(*(long *)(lVar19 + 0x100) + 0x2a8) != 8);
            }
            uVar29 = (uint)param_2 & uVar29;
          }
          else {
            uVar29 = 1;
          }
          *(undefined4 *)(param_1 + 0x28) = 0;
          lVar19 = param_1[0x60];
          uStack_200._0_7_ = (undefined7)param_1[0x5f];
          uStack_200._7_1_ = (undefined1)((ulong)param_1[0x5f] >> 0x38);
          uStack_1f8 = (undefined7)lVar19;
          uStack_1f1 = (undefined1)((ulong)lVar19 >> 0x38);
          if (lVar19 != 0) {
            plVar24 = (long *)(lVar19 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar5) {
                *plVar24 = *plVar24 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar15 = (undefined8 *)param_1[1];
          FUN_10a8c1848();
          uStack_1f0 = (undefined **)0x10a8da7d0;
          pppppppuStack_1e8 = (undefined *******)&PTR_DAT_110c2bdf0;
          uStack_1d8 = puVar15[1];
          uStack_1e0 = *puVar15;
          if (puVar15[1] != 0) {
            plVar24 = (long *)(puVar15[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar5) {
                *plVar24 = *plVar24 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_10a8d5cd4();
          plStack_1a8 = (long *)puVar15[1];
          uStack_1b0 = *puVar15;
          if (puVar15[1] != 0) {
            plVar24 = (long *)(puVar15[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar5) {
                *plVar24 = *plVar24 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_1a0 = (undefined1)uVar29;
          uStack_19f = 1;
          pppppppuStack_198 = pppppppuStack_108;
          unaff_x26 = (undefined *******)&uStack_200;
          (*(code *)pppppppuStack_100[2])(apuStack_190,unaff_x20);
          pcStack_158 = pcStack_c8;
          ppppppppuVar18 = &pppppppuStack_c0;
          (*(code *)pppppppuStack_c0[2])(apuStack_150);
          plStack_110 = plStack_80;
          lStack_118 = lStack_88;
          lStack_88 = 0;
          plStack_80 = (long *)0x0;
          FUN_109d23f70(&pppppppuStack_220,&uStack_200);
          pppppppuVar20 = (undefined *******)(param_1 + 0x53);
          if ((undefined ********)pppppppuVar20 != &pppppppuStack_220) {
            if (*pppppppuVar20 != (undefined ******)0x0) {
              ppppppuVar30 = *pppppppuVar20 + 3;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
                if (bVar5) {
                  *(int *)ppppppuVar30 = *(int *)ppppppuVar30 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              func_0x00010a8d4cd8(pppppppuVar20);
            }
            ppppppppuVar13 = ppppppppuStack_218;
            pppppppuVar21 = pppppppuStack_220;
            pppppppuStack_220 = (undefined *******)0x0;
            ppppppppuStack_218 = (undefined ********)0x0;
            plVar24 = (long *)param_1[0x54];
            param_1[0x54] = (long)ppppppppuVar13;
            *pppppppuVar20 = (undefined ******)pppppppuVar21;
            if (plVar24 != (long *)0x0) {
              plVar9 = plVar24 + 1;
              do {
                lVar19 = *plVar9;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = lVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
              }
            }
          }
          ppppppppuVar13 = ppppppppuStack_218;
          if (pppppppuStack_220 != (undefined *******)0x0) {
            pppppppuVar21 = pppppppuStack_220 + 3;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
              if (bVar5) {
                *(int *)pppppppuVar21 = *(int *)pppppppuVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (ppppppppuStack_218 != (undefined ********)0x0) {
            ppppppppuVar12 = ppppppppuStack_218 + 1;
            do {
              pppppppuVar21 = *ppppppppuVar12;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
              if (bVar5) {
                *ppppppppuVar12 = (undefined *******)((long)pppppppuVar21 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (pppppppuVar21 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_218)[2])(ppppppppuStack_218);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar13);
            }
          }
          plVar24 = plStack_110;
          if (plStack_110 != (long *)0x0) {
            plVar9 = plStack_110 + 1;
            do {
              lVar19 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_110 + 0x10))(plStack_110);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
            }
          }
          (*(code *)*apuStack_150[0])(apuStack_150);
          (*(code *)*apuStack_190[0])(apuStack_190);
          plVar24 = plStack_1a8;
          if (plStack_1a8 != (long *)0x0) {
            plVar9 = plStack_1a8 + 1;
            do {
              lVar19 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
            }
          }
          (*(code *)*pppppppuStack_1e8)(&pppppppuStack_1e8);
          plVar24 = (long *)CONCAT17(uStack_1f1,uStack_1f8);
          if (plVar24 != (long *)0x0) {
            plVar9 = plVar24 + 1;
            do {
              lVar19 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
            }
          }
          if ((((char)param_1[0x59] == '\x01') && (*pppppppuVar20 != (undefined ******)0x0)) &&
             (ppppppuVar30 = (undefined ******)(*pppppppuVar20)[2],
             ppppppuVar30 != (undefined ******)0x0)) {
            ppppppuVar27 = ppppppuVar30 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
              if (bVar5) {
                *ppppppuVar27 = (undefined *****)((long)*ppppppuVar27 + 4);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            pppppppuVar21 = (undefined *******)0x118;
            __Znwm();
            pppppppuVar21[2] = (undefined ******)0x0;
            pppppppuVar21[1] = (undefined ******)0x200000006;
            *(undefined2 *)(pppppppuVar21 + 3) = 4;
            pppppppuVar21[5] = (undefined ******)0x0;
            pppppppuVar21[4] = (undefined ******)0x0;
            pppppppuVar21[7] = (undefined ******)0x0;
            pppppppuVar21[6] = (undefined ******)0x0;
            pppppppuVar21[9] = (undefined ******)0x0;
            pppppppuVar21[8] = (undefined ******)0x0;
            pppppppuVar21[0xb] = (undefined ******)0x0;
            pppppppuVar21[10] = (undefined ******)0x0;
            pppppppuVar21[0xd] = (undefined ******)0x0;
            pppppppuVar21[0xc] = (undefined ******)0x0;
            pppppppuVar21[0xf] = (undefined ******)0x0;
            pppppppuVar21[0xe] = (undefined ******)0x0;
            pppppppuVar21[0x10] = (undefined ******)0x0;
            pppppppuVar21[0x11] = (undefined ******)(pppppppuVar21 + 3);
            pppppppuVar21[0x12] = (undefined ******)0x0;
            *(undefined1 *)(pppppppuVar21 + 0x13) = 0;
            *(undefined1 *)(pppppppuVar21 + 0x15) = 0;
            *pppppppuVar21 = (undefined ******)&PTR_FUN_110c2aed0;
            pppppppuVar31 = pppppppuVar21 + 0x16;
            *pppppppuVar31 = ppppppuVar30;
            ppppppuVar30 = (undefined ******)param_1[0x58] + 1;
            pppppppuVar21[0x17] = (undefined ******)param_1[0x58];
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
              if (bVar5) {
                *ppppppuVar30 = (undefined *****)((long)*ppppppuVar30 + 4);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            pppppppuVar21[0x1a] = (undefined ******)0x0;
            pppppppuVar21[0x1b] = (undefined ******)0x32aaaba7;
            pppppppuVar21[0x1d] = (undefined ******)0x0;
            pppppppuVar21[0x1c] = (undefined ******)0x0;
            pppppppuVar21[0x1f] = (undefined ******)0x0;
            pppppppuVar21[0x1e] = (undefined ******)0x0;
            pppppppuVar21[0x21] = (undefined ******)0x0;
            pppppppuVar21[0x20] = (undefined ******)0x0;
            pppppppuVar21[0x22] = (undefined ******)0x0;
            ppppppppuStack_218 = (undefined ********)0x0;
            pppppppuVar21[0x18] = (undefined ******)pppppppuVar21;
            pppppppuVar21[0x19] = (undefined ******)0x0;
            pppppppuStack_220 = pppppppuVar21;
            pppppppuStack_210 = pppppppuVar31;
            if (((uint)pppppppuVar21[0x17][2] >> 1 & 1) == 0) {
              __ZNSt3__15mutex4lockEv(pppppppuVar21 + 0x1b);
              ppppppuVar27 = *pppppppuVar31;
              ppppppuVar30 = ppppppuVar27 + 2;
              do {
                pppppuVar22 = *ppppppuVar30;
                if (pppppuVar22 == (undefined *****)0x0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
                  if (bVar5) {
                    *ppppppuVar30 = (undefined *****)0x1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    ppppppuVar30 = ppppppuVar27 + 3;
                    uStack_200._0_7_ = 0x10a8da86c;
                    uStack_200._7_1_ = 0;
                    uStack_1f8 = SUB87(pppppppuVar31,0);
                    uVar6 = uStack_1f8;
                    uStack_1f1 = (undefined1)((ulong)pppppppuVar31 >> 0x38);
                    uVar7 = uStack_1f1;
                    uStack_1f0 = &PTR_PTR_1132fed68;
                    func_0x000109d1b588(ppppppuVar30,&uStack_200);
                    ppppppuVar27[2] = (undefined *****)0x0;
                    pppppppuStack_210[3] = ppppppuVar30;
                    ppppppuVar28 = pppppppuVar21[0x17];
                    ppppppuVar27 = ppppppuVar28 + 2;
                    goto LAB_10a8d9cf8;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
              } while (((uint)pppppuVar22 >> 1 & 1) == 0);
              pppppppuStack_210[3] = (undefined ******)0x0;
              ppppppuVar27 = pppppppuVar21[0x18];
              ppppppuVar30 = ppppppuVar27 + 2;
              do {
                pppppuVar22 = *ppppppuVar30;
                if (pppppuVar22 == (undefined *****)0x0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
                  if (bVar5) {
                    *ppppppuVar30 = (undefined *****)0x2;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    func_0x000109d1b4dc(ppppppuVar27 + 3);
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
              } while (((uint)pppppuVar22 >> 1 & 1) == 0);
              ppppppuVar30 = pppppppuVar21[0x17];
              pppppppuVar21[0x17] = (undefined ******)0x0;
              if (ppppppuVar30 != (undefined ******)0x0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                do {
                  pppppuVar22 = *ppppppuVar27;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
                  if (bVar5) {
                    *ppppppuVar27 = (undefined *****)((long)pppppuVar22 + -4);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (((ulong)pppppuVar22 & 0x1fffffffc) == 4) {
                  (*(code *)(*ppppppuVar30)[2])(ppppppuVar30);
                  do {
                    pppppuVar22 = *ppppppuVar27;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
                    if (bVar5) {
                      *ppppppuVar27 = (undefined *****)((long)pppppuVar22 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((undefined *****)((long)pppppuVar22 + -1) == (undefined *****)0x0) {
                    (*(code *)(*ppppppuVar30)[1])(ppppppuVar30);
                  }
                }
              }
              ppppppuVar30 = pppppppuVar21[0x18];
              pppppppuVar21[0x18] = (undefined ******)0x0;
              if (ppppppuVar30 != (undefined ******)0x0) {
                func_0x0001092b4274(pppppppuVar21 + 0x18);
              }
              pppppppuVar25 = (undefined *******)*pppppppuVar31;
              *pppppppuVar31 = (undefined ******)0x0;
LAB_10a8d9f3c:
              __ZNSt3__15mutex6unlockEv(pppppppuVar21 + 0x1b);
              unaff_x26 = pppppppuVar31;
            }
            else {
              ppppppuVar30 = pppppppuVar21[0x18];
              pppppppuVar25 = pppppppuVar21;
              FUN_109d1857c();
              func_0x000109d1b350(ppppppuVar30,pppppppuVar25);
              ppppppuVar30 = *pppppppuVar31;
              *pppppppuVar31 = (undefined ******)0x0;
              if (ppppppuVar30 != (undefined ******)0x0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                do {
                  pppppuVar22 = *ppppppuVar27;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
                  if (bVar5) {
                    *ppppppuVar27 = (undefined *****)((long)pppppuVar22 + -4);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (((ulong)pppppuVar22 & 0x1fffffffc) == 4) {
                  do {
                    pppppuVar22 = *ppppppuVar27;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
                    if (bVar5) {
                      *ppppppuVar27 = (undefined *****)((long)pppppuVar22 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((undefined *****)((long)pppppuVar22 + -1) == (undefined *****)0x0) {
                    (*(code *)(*ppppppuVar30)[1])();
                  }
                }
              }
              ppppppuVar30 = pppppppuVar21[0x17];
              pppppppuVar21[0x17] = (undefined ******)0x0;
              if (ppppppuVar30 != (undefined ******)0x0) {
                unaff_x26 = (undefined *******)(ppppppuVar30 + 1);
                do {
                  ppppppuVar27 = *unaff_x26;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                  if (bVar5) {
                    *unaff_x26 = (undefined ******)((long)ppppppuVar27 + -4);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (((ulong)ppppppuVar27 & 0x1fffffffc) == 4) {
                  (*(code *)(*ppppppuVar30)[2])(ppppppuVar30);
                  do {
                    ppppppuVar27 = *unaff_x26;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                    if (bVar5) {
                      *unaff_x26 = (undefined ******)((long)ppppppuVar27 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((undefined ******)((long)ppppppuVar27 + -1) == (undefined ******)0x0) {
                    (*(code *)(*ppppppuVar30)[1])(ppppppuVar30);
                  }
                }
              }
              ppppppuVar30 = pppppppuVar21[0x18];
              pppppppuVar21[0x18] = (undefined ******)0x0;
              if (ppppppuVar30 != (undefined ******)0x0) {
                func_0x0001092b4274(pppppppuVar21 + 0x18);
              }
              pppppppuVar25 = pppppppuStack_220;
              pppppppuStack_220 = (undefined *******)0x0;
            }
            ppppppppuVar18 = ppppppppuStack_218;
            if (ppppppppuStack_218 != (undefined ********)0x0) {
              func_0x0001092b4274(&ppppppppuStack_218);
            }
            if (pppppppuStack_220 != (undefined *******)0x0) {
              pppppppuVar21 = pppppppuStack_220 + 1;
              do {
                ppppppuVar30 = *pppppppuVar21;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
                if (bVar5) {
                  *pppppppuVar21 = (undefined ******)((long)ppppppuVar30 + -4);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (((ulong)ppppppuVar30 & 0x1fffffffc) == 4) {
                do {
                  ppppppuVar30 = *pppppppuVar21;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
                  if (bVar5) {
                    *pppppppuVar21 = (undefined ******)((long)ppppppuVar30 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((undefined ******)((long)ppppppuVar30 + -1) == (undefined ******)0x0) {
                  (*(code *)(*pppppppuStack_220)[1])();
                }
              }
            }
            plVar24 = (long *)param_1[0x55];
            if (plVar24 != (long *)0x0) {
              puVar1 = (ulong *)(plVar24 + 1);
              do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar24 + 8))();
                }
              }
            }
            param_1[0x55] = (long)pppppppuVar25;
          }
          else {
            plVar24 = (long *)param_1[0x55];
            if (plVar24 != (long *)0x0) {
              puVar1 = (ulong *)(plVar24 + 1);
              do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar24 + 8))();
                }
              }
            }
            param_1[0x55] = 0;
          }
          if (((uVar29 == 0) && (*pppppppuVar20 != (undefined ******)0x0)) &&
             ((*pppppppuVar20)[2] != (undefined *****)0x0)) {
            ppppppppuVar18 = (undefined ********)&UNK_10f68165b;
            FUN_10a8da354(param_1);
            FUN_10a8c7000(param_1);
          }
          plVar24 = plStack_80;
          if (plStack_80 != (long *)0x0) {
            plVar9 = plStack_80 + 1;
            do {
              lVar19 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
            }
          }
          (*(code *)*pppppppuStack_c0)(&pppppppuStack_c0);
          ppppppppuVar13 = unaff_x20;
          (*(code *)*pppppppuStack_100)();
        }
        else {
          FUN_10a8da3cc(&uStack_200,param_1);
          FUN_10a8da5c8(&pppppppuStack_220,&uStack_200,param_1[1] + 0x168,param_1 + 0x3f,
                        param_1 + 0x42);
          if (cStack_1b9 < '\0') {
            __ZdlPv(uStack_1d0);
          }
          pppppppuStack_108 = (undefined *******)&pppppppuStack_1e8;
          FUN_10a04b2ac(&pppppppuStack_108);
          pppppppuStack_108 = (undefined *******)&uStack_200;
          FUN_10a04b2ac(&pppppppuStack_108);
          pppppppuVar20 = *ppppppppuVar13;
          uStack_1f0 = (undefined **)(pppppppuVar20 + 0xc);
          pppppppuStack_1e8 = pppppppuVar20 + 0xf;
          uStack_200._0_7_ = SUB87(pppppppuVar20,0);
          uStack_200._7_1_ = (undefined1)((ulong)pppppppuVar20 >> 0x38);
          uStack_1f8 = SUB87(pppppppuVar20 + 9,0);
          uStack_1f1 = (undefined1)((ulong)(pppppppuVar20 + 9) >> 0x38);
          pppppppuStack_100 = pppppppuStack_220 + 9;
          pppppppuStack_f8 = pppppppuStack_220 + 0xc;
          pppppppuStack_f0 = pppppppuStack_220 + 0xf;
          pppppppuStack_108 = pppppppuStack_220;
          ppppppppuVar12 = (undefined ********)auStack_230;
          ppppppppuVar18 = (undefined ********)&uStack_200;
          FUN_109d2d6b8(ppppppppuVar12,ppppppppuVar18,&pppppppuStack_108);
          if (((ulong)ppppppppuVar12 & 1) == 0) {
            func_0x00010a8d4768(param_1);
            ppppppppuVar18 = &pppppppuStack_220;
            FUN_10a8da564();
          }
          else {
            ppppppppuVar13 = ppppppppuVar12;
            if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
              ppppppppuVar13 = (undefined ********)0x1;
              ppppppppuVar18 = (undefined ********)0x2;
              func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f68166d,0xb9,&UNK_10f6816c0);
            }
          }
          unaff_x20 = ppppppppuStack_218;
          if (ppppppppuStack_218 != (undefined ********)0x0) {
            ppppppppuVar2 = ppppppppuStack_218 + 1;
            do {
              pppppppuVar20 = *ppppppppuVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
              if (bVar5) {
                *ppppppppuVar2 = (undefined *******)((long)pppppppuVar20 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (pppppppuVar20 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_218)[2])(ppppppppuStack_218);
              ppppppppuVar13 = unaff_x20;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          if (((ulong)ppppppppuVar12 & 1) == 0) goto LAB_10a8d9494;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          auVar36._8_8_ = ppppppppuVar18;
          auVar36._0_8_ = ppppppppuVar13;
          return auVar36;
        }
      }
      ___stack_chk_fail();
      __ZNSt3__15mutex6unlockEv(unaff_x26 + 5);
      FUN_10a8daae8(&pppppppuStack_220);
      FUN_10a8d4068(unaff_x24 + 0x10);
      (*(code *)*pppppppuStack_c0)(unaff_x24 + 9);
      (*(code *)*pppppppuStack_100)(unaff_x20);
      __Unwind_Resume(ppppppppuVar13);
      puVar16 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if (ppppppppuVar18 < (undefined ********)0x2e8ba2e8ba2e8bb) {
        lVar19 = (long)ppppppppuVar18 * 0x58;
        __Znwm(lVar19);
        auVar37._8_8_ = ppppppppuVar18;
        auVar37._0_8_ = lVar19;
        return auVar37;
      }
      func_0x000109ffded8();
      puVar23 = (undefined8 *)(puVar16 + 8);
      puVar26 = (undefined8 *)*puVar23;
      ppppppppuVar13 = ppppppppuVar18;
      puVar15 = puVar23;
      if (puVar26 != (undefined8 *)0x0) {
        do {
          puVar17 = puVar26 + 4;
          ppppppppuVar13 = ppppppppuVar18;
          FUN_10a003e3c(puVar17,ppppppppuVar18);
          if (-1 < (char)puVar17) {
            puVar15 = puVar26;
          }
          puVar26 = *(undefined8 **)((long)puVar26 + ((ulong)puVar17 >> 4 & 8));
        } while (puVar26 != (undefined8 *)0x0);
        if (puVar15 != puVar23) {
          ppppppppuVar13 = (undefined ********)(puVar15 + 4);
          FUN_10a003e3c(ppppppppuVar18,ppppppppuVar13);
          if (((uint)ppppppppuVar18 >> 7 & 1) == 0) goto LAB_10a8da28c;
        }
      }
      puVar15 = puVar23;
LAB_10a8da28c:
      auVar38._8_8_ = ppppppppuVar13;
      auVar38._0_8_ = puVar15;
      return auVar38;
    }
    FUN_10a00946c(&UNK_10f68156f);
  }
  plVar24 = (long *)&UNK_10f681523;
  FUN_10a00946c();
  if ((int)plVar24[0x28] == 3) {
LAB_10a8c7018:
    uVar8 = 0;
  }
  else {
    if ((((int)plVar24[0x28] != 2) && ((int)plVar24[0x28] != 1)) && ((int)plVar24[0x28] != 4)) {
      if (((plVar24[0x53] == 0) || (lVar19 = *(long *)(plVar24[0x53] + 0x10), lVar19 == 0)) ||
         (((uint)*(undefined8 *)(lVar19 + 0x10) >> 1 & 1) == 0)) goto LAB_10a8c7018;
      if (0x143 < *(int *)(*(long *)(*plVar24 + 0xa20) + 0x18)) {
        if (plVar24[0x53] == 0) {
          plVar24 = (long *)&UNK_10f681734;
          func_0x000105688514();
          pplVar10 = &plStack_70;
          plVar9 = plVar24;
          if ((int)plVar24[0x28] == 1) {
            if (((char)plVar24[0x59] == '\x01') &&
               (((uint)*(undefined8 *)(plVar24[0x58] + 0x10) >> 1 & 1) != 0)) {
              plVar9 = (long *)plVar24[0x56];
              if (plVar9 != (long *)0x0) {
                puVar1 = (ulong *)(plVar9 + 1);
                do {
                  uVar11 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar11 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar11 & 0x1fffffffc) == 4) {
                  do {
                    uVar11 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar11 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar11 - 1 == 0) {
                    (**(code **)(*plVar9 + 8))();
                  }
                }
              }
              plVar24[0x56] = 0;
              *(undefined4 *)(plVar24 + 0x28) = 2;
            }
            else {
              plVar32 = (long *)plVar24[0x10];
              plVar24[0xf] = 0;
              plVar24[0x10] = 0;
              if (((char)plVar24[0x5e] == '\x01') &&
                 (((long *)plVar24[0x21] != (long *)0x0 &&
                  (plVar9 = *(long **)(*(long *)plVar24[0x21] + 0x88), plVar9 != (long *)0x0)))) {
                (**(code **)(*plVar9 + 0x48))(plVar9,1);
              }
              puStack_68 = &stack0xffffffffffffffa0;
              param_2 = (undefined ********)0x1;
              plStack_70 = plVar24;
              FUN_10a8c6a58(plVar24,1);
              FUN_10a8db76c(&plStack_70);
              plVar9 = (long *)pplVar10;
              if (plVar32 != (long *)0x0) {
                plVar24 = plVar32 + 1;
                do {
                  lVar19 = *plVar24;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar5) {
                    *plVar24 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plVar32 + 0x10))(plVar32);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                  plVar9 = plVar32;
                }
              }
            }
          }
          auVar35._8_8_ = param_2;
          auVar35._0_8_ = plVar9;
          return auVar35;
        }
        if (((uint)*(undefined8 *)(*(long *)(plVar24[0x53] + 0x10) + 0x10) >> 5 & 1) != 0) {
          FUN_10a8dae18();
          goto LAB_10a8c7048;
        }
      }
      FUN_10a8dafa0();
    }
LAB_10a8c7048:
    uVar8 = 1;
  }
  auVar34._8_8_ = param_2;
  auVar34._0_8_ = uVar8;
  return auVar34;
LAB_10a8d9cf8:
  do {
    pppppuVar22 = *ppppppuVar27;
    if (pppppuVar22 == (undefined *****)0x0) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
      if (bVar5) {
        *ppppppuVar27 = (undefined *****)0x1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        ppppppuVar30 = ppppppuVar28 + 3;
        uStack_200._0_7_ = 0x10a8daa08;
        uStack_200._7_1_ = 0;
        uStack_1f0 = &PTR_PTR_1132fed68;
        uStack_1f8 = uVar6;
        uStack_1f1 = uVar7;
        func_0x000109d1b588(ppppppuVar30,&uStack_200);
        ppppppuVar28[2] = (undefined *****)0x0;
        pppppppuStack_210[4] = ppppppuVar30;
        pppppppuVar25 = pppppppuStack_220;
        goto LAB_10a8d9f38;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)pppppuVar22 >> 1 & 1) == 0);
  pppppppuStack_210[4] = (undefined ******)0x0;
  ppppppuVar27 = pppppppuVar21[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(ppppppuVar27,ppppppuVar30);
  ppppppuVar30 = pppppppuVar21[0x17];
  pppppppuVar21[0x17] = (undefined ******)0x0;
  if (ppppppuVar30 != (undefined ******)0x0) {
    ppppppuVar27 = ppppppuVar30 + 1;
    do {
      pppppuVar22 = *ppppppuVar27;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
      if (bVar5) {
        *ppppppuVar27 = (undefined *****)((long)pppppuVar22 + -4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((ulong)pppppuVar22 & 0x1fffffffc) == 4) {
      (*(code *)(*ppppppuVar30)[2])(ppppppuVar30);
      do {
        pppppuVar22 = *ppppppuVar27;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
        if (bVar5) {
          *ppppppuVar27 = (undefined *****)((long)pppppuVar22 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((undefined *****)((long)pppppuVar22 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar30)[1])(ppppppuVar30);
      }
    }
  }
  ppppppuVar28 = *pppppppuVar31;
  ppppppuVar30 = ppppppuVar28 + 2;
  ppppppuVar27 = pppppppuStack_210[3];
  while (pppppuVar22 = *ppppppuVar30, pppppuVar22 != (undefined *****)0x0) {
    ClearExclusiveLocal();
LAB_10a8d9de4:
    pppppppuVar25 = pppppppuStack_220;
    if (((uint)pppppuVar22 >> 1 & 1) != 0) goto LAB_10a8d9f38;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
  if (bVar5) {
    *ppppppuVar30 = (undefined *****)0x1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 != '\0') goto LAB_10a8d9de4;
  uStack_200._0_7_ = 0x10a8da86c;
  uStack_200._7_1_ = 0;
  uStack_1f0 = &PTR_PTR_1132fed68;
  uStack_1f8 = uVar6;
  uStack_1f1 = uVar7;
  FUN_109d1b624(ppppppuVar28 + 3,&uStack_200,ppppppuVar27);
  ppppppuVar28[2] = (undefined *****)0x0;
  pppppppuStack_210[3] = (undefined ******)0x0;
  ppppppuVar30 = *pppppppuVar31;
  *pppppppuVar31 = (undefined ******)0x0;
  if (ppppppuVar30 != (undefined ******)0x0) {
    ppppppuVar27 = ppppppuVar30 + 1;
    do {
      pppppuVar22 = *ppppppuVar27;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
      if (bVar5) {
        *ppppppuVar27 = (undefined *****)((long)pppppuVar22 + -4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((ulong)pppppuVar22 & 0x1fffffffc) == 4) {
      do {
        pppppuVar22 = *ppppppuVar27;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
        if (bVar5) {
          *ppppppuVar27 = (undefined *****)((long)pppppuVar22 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((undefined *****)((long)pppppuVar22 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar30)[1])();
      }
    }
  }
  ppppppuVar30 = pppppppuVar21[0x18];
  pppppppuVar21[0x18] = (undefined ******)0x0;
  pppppppuVar25 = pppppppuStack_220;
  if (ppppppuVar30 != (undefined ******)0x0) {
    func_0x0001092b4274(pppppppuVar21 + 0x18);
    pppppppuVar25 = pppppppuStack_220;
  }
LAB_10a8d9f38:
  pppppppuStack_220 = (undefined *******)0x0;
  goto LAB_10a8d9f3c;
}



/* Entry: 10a8c7000; end: 10a8c70b7;  */

long * FUN_10a8c7000(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1[0x28] == 3) {
LAB_10a8c7018:
    plVar5 = (long *)0x0;
  }
  else {
    if ((((int)param_1[0x28] != 2) && ((int)param_1[0x28] != 1)) && ((int)param_1[0x28] != 4)) {
      if (((param_1[0x53] == 0) || (lVar8 = *(long *)(param_1[0x53] + 0x10), lVar8 == 0)) ||
         (((uint)*(undefined8 *)(lVar8 + 0x10) >> 1 & 1) == 0)) goto LAB_10a8c7018;
      if (0x143 < *(int *)(*(long *)(*param_1 + 0xa20) + 0x18)) {
        if (param_1[0x53] == 0) {
          plVar5 = (long *)&UNK_10f681734;
          func_0x000105688514();
          pplVar7 = &plStack_50;
          plVar6 = plVar5;
          if ((int)plVar5[0x28] == 1) {
            if (((char)plVar5[0x59] == '\x01') &&
               (((uint)*(undefined8 *)(plVar5[0x58] + 0x10) >> 1 & 1) != 0)) {
              plVar6 = (long *)plVar5[0x56];
              if (plVar6 != (long *)0x0) {
                puVar2 = (ulong *)(plVar6 + 1);
                do {
                  uVar9 = *puVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar4) {
                    *puVar2 = uVar9 - 4;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((uVar9 & 0x1fffffffc) == 4) {
                  do {
                    uVar9 = *puVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar4) {
                      *puVar2 = uVar9 - 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (uVar9 - 1 == 0) {
                    (**(code **)(*plVar6 + 8))();
                  }
                }
              }
              plVar5[0x56] = 0;
              *(undefined4 *)(plVar5 + 0x28) = 2;
            }
            else {
              plStack_38 = (long *)plVar5[0x10];
              lStack_40 = plVar5[0xf];
              plVar5[0xf] = 0;
              plVar5[0x10] = 0;
              if ((((char)plVar5[0x5e] == '\x01') && ((long *)plVar5[0x21] != (long *)0x0)) &&
                 (plVar6 = *(long **)(*(long *)plVar5[0x21] + 0x88), plVar6 != (long *)0x0)) {
                (**(code **)(*plVar6 + 0x48))(plVar6,1);
              }
              plStack_48 = &lStack_40;
              plStack_50 = plVar5;
              FUN_10a8c6a58(plVar5,1);
              FUN_10a8db76c(&plStack_50);
              plVar5 = plStack_38;
              plVar6 = (long *)pplVar7;
              if (plStack_38 != (long *)0x0) {
                plVar1 = plStack_38 + 1;
                do {
                  lVar8 = *plVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *plVar1 = lVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar8 == 0) {
                  (**(code **)(*plStack_38 + 0x10))(plStack_38);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
                  plVar6 = plVar5;
                }
              }
            }
          }
          return plVar6;
        }
        if (((uint)*(undefined8 *)(*(long *)(param_1[0x53] + 0x10) + 0x10) >> 5 & 1) != 0) {
          FUN_10a8dae18();
          goto LAB_10a8c7048;
        }
      }
      FUN_10a8dafa0();
    }
LAB_10a8c7048:
    plVar5 = (long *)0x1;
  }
  return plVar5;
}



/* Entry: 10a8c70b8; end: 10a8c721f;  */

void FUN_10a8c70b8(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (*(int *)(param_1 + 0x140) == 1) {
    if ((*(char *)(param_1 + 0x2c8) == '\x01') &&
       (((uint)*(undefined8 *)(*(long *)(param_1 + 0x2c0) + 0x10) >> 1 & 1) != 0)) {
      plVar5 = *(long **)(param_1 + 0x2b0);
      if (plVar5 != (long *)0x0) {
        puVar2 = (ulong *)(plVar5 + 1);
        do {
          uVar7 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined4 *)(param_1 + 0x140) = 2;
    }
    else {
      plStack_28 = *(long **)(param_1 + 0x80);
      uStack_30 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      if (((*(char *)(param_1 + 0x2f0) == '\x01') && (*(long **)(param_1 + 0x108) != (long *)0x0))
         && (plVar5 = *(long **)(**(long **)(param_1 + 0x108) + 0x88), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x48))(plVar5,1);
      }
      puStack_38 = &uStack_30;
      lStack_40 = param_1;
      FUN_10a8c6a58(param_1,1);
      FUN_10a8db76c(&lStack_40);
      plVar5 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar1 = plStack_28 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
  }
  return;
}



/* Entry: 10a8c7220; end: 10a8c76d7;  */

void FUN_10a8c7220(long param_1,long *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined **ppuVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined ***pppuStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 auStack_148 [2];
  char cStack_131;
  code *pcStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_1 + 0x10);
  pcVar16 = FUN_10a8dbc1c;
  pcStack_130 = FUN_10a8dbc1c;
  ppuStack_128 = &PTR_FUN_110c2af70;
  ppuStack_f0 = (undefined **)FUN_10a8dbc1c;
  ppuStack_e8 = &PTR_FUN_110c2af70;
  uStack_a0 = CONCAT17(5,(undefined7)uStack_a0);
  uStack_b0 = CONCAT26(uStack_b0._6_2_,0x6c65646f6d);
  ppuStack_98 = (undefined **)FUN_10a8db9dc;
  ppuStack_90 = &PTR_FUN_110c2af38;
  puVar5 = (undefined8 *)0x58;
  lStack_120 = lVar11;
  lStack_e0 = lVar11;
  __Znwm();
  ppuVar14 = (undefined **)&ppuStack_98;
  *puVar5 = FUN_10a8dbc1c;
  puVar5[1] = &PTR_FUN_110c2af70;
  puVar5[2] = lVar11;
  puVar5[9] = uStack_a8;
  puVar5[8] = uStack_b0;
  puVar5[10] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_88 = puVar5;
  func_0x000107c2b054(auStack_148,&UNK_10f67fb58);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c2af50,&ppuStack_98,0,auStack_148);
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c2aef8,*(undefined1 *)(lVar11 + 0x2e8));
  *(char *)(lVar11 + 0x2e8) = (char)plVar15;
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c2af18,0);
  FUN_10a8c6f14(lVar11,plVar15);
  puVar5 = (undefined8 *)(lVar11 + 0x40);
  func_0x00010a8d4e78(*puVar5);
  plVar12 = (long *)(lVar11 + 0x38);
  *plVar12 = (long)puVar5;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  *puVar5 = 0;
  plVar13 = (long *)(lVar11 + 0x58);
  func_0x00010a8d4ef4(*plVar13);
  puVar5 = (undefined8 *)(lVar11 + 0x50);
  *puVar5 = plVar13;
  *plVar13 = 0;
  *(undefined8 *)(lVar11 + 0x60) = 0;
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c26718);
  if ((int)plVar15 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c26718);
    plVar13 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((uint)plVar13 != 0) {
      ppuVar14 = (undefined **)0x0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,ppuVar14);
        FUN_10a6d1844(&ppuStack_f0,&ppuStack_98);
        (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c2ad00,ppuStack_f0);
        ppuStack_98 = ppuStack_f0 + 6;
        plVar15 = plVar12;
        FUN_10a8d58e4(plVar12,ppuStack_98,&ppuStack_98);
        FUN_10a8d4680(plVar15 + 7,ppuStack_f0,ppuStack_e8);
        (**(code **)(*param_2 + 0x220))(param_2);
        ppuVar8 = ppuStack_e8;
        if (ppuStack_e8 != (undefined **)0x0) {
          ppuVar2 = ppuStack_e8 + 1;
          do {
            puVar9 = *ppuVar2;
                    /* WARNING (jumptable): Read-only address (ram,0x000110c2af78) is written */
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
            if (bVar4) {
              *ppuVar2 = puVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar9 == (undefined *)0x0) {
            (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
          }
        }
        uVar1 = (int)ppuVar14 + 1;
        ppuVar14 = (undefined **)(ulong)uVar1;
        pcVar16 = (code *)&PTR_DAT_110c2ad00;
      } while (uVar1 != (uint)plVar13);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  ppuVar8 = &PTR_DAT_110c26738;
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if ((int)plVar15 != 0) {
    ppuVar8 = &PTR_DAT_110c26738;
    (**(code **)(*param_2 + 0x210))(param_2);
    plVar12 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((uint)plVar12 != 0) {
      plVar13 = (long *)0x0;
      ppuVar14 = &PTR_DAT_110c26758;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,plVar13);
        func_0x00010a8e503c(&ppuStack_f0);
        ppuVar8 = ppuStack_f0;
        (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c26758,ppuStack_f0);
        ppuStack_98 = ppuVar8 + 6;
        puVar6 = puVar5;
        FUN_10a8d5afc(puVar5,ppuStack_98,&ppuStack_98);
        pcVar16 = (code *)ppuStack_e8;
        func_0x00010a8d46f4(puVar6 + 7,ppuVar8,ppuStack_e8);
        (**(code **)(*param_2 + 0x220))(param_2);
        if ((undefined **)pcVar16 != (undefined **)0x0) {
          ppuVar2 = (undefined **)((long)pcVar16 + 8);
          do {
            puVar9 = *ppuVar2;
                    /* WARNING (jumptable): Read-only address (ram,0x000110c2af78) is written */
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
            if (bVar4) {
              *ppuVar2 = puVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar9 == (undefined *)0x0) {
            (**(code **)(*(undefined **)pcVar16 + 0x10))(pcVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar16);
          }
        }
        uVar1 = (int)plVar13 + 1;
        plVar13 = (long *)(ulong)uVar1;
      } while (uVar1 != (uint)plVar12);
    }
    (**(code **)(*param_2 + 0x220))();
    plVar15 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_131 < '\0') {
      __ZdlPv(auStack_148[0]);
    }
    (*(code *)*ppuStack_90)(ppuVar14 + 1);
    if (uStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
    (*(code *)*ppuStack_e8)(plVar13 + 1);
    (*(code *)*ppuStack_128)(plVar12 + 1);
    plVar7 = plVar15;
    __Unwind_Resume();
    pcStack_158 = FUN_10a8c76d8;
    lVar11 = plVar7[2];
    plStack_1a8 = *(long **)(lVar11 + 0x10);
    uStack_1b0 = *(undefined8 *)(lVar11 + 8);
    puStack_1a0 = &UNK_10f6810b4;
    uStack_198 = 0xd;
    if (*(long *)(lVar11 + 0x10) != 0) {
      plVar7 = (long *)(*(long *)(lVar11 + 0x10) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuStack_190 = (undefined **)pcVar16;
    pppuStack_188 = (undefined ***)ppuVar14;
    plStack_180 = plVar13;
    plStack_178 = plVar12;
    puStack_170 = puVar5;
    plStack_168 = plVar15;
    puStack_160 = &stack0xfffffffffffffff0;
    (**(code **)(*ppuVar8 + 0x108))(ppuVar8,&PTR_DAT_110c2af50,&uStack_1b0,&puStack_1a0);
    plVar15 = plStack_1a8;
    if (plStack_1a8 != (long *)0x0) {
      plVar13 = plStack_1a8 + 1;
      do {
        lVar10 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    (**(code **)(*ppuVar8 + 0x70))(ppuVar8,&PTR_DAT_110c2aef8,*(undefined1 *)(lVar11 + 0x2e8));
    (**(code **)(*ppuVar8 + 0x40))(ppuVar8,&PTR_DAT_110c2af18,*(undefined4 *)(lVar11 + 0x2ec));
    (**(code **)(*ppuVar8 + 0x18))(ppuVar8,&PTR_DAT_110c26718);
    plVar15 = *(long **)(lVar11 + 0x38);
    while (plVar15 != (long *)(lVar11 + 0x40)) {
      (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
      (**(code **)(*ppuVar8 + 0x118))(ppuVar8,&PTR_DAT_110c2ad00,plVar15[7]);
      (**(code **)(*ppuVar8 + 0x20))(ppuVar8);
      plVar13 = (long *)plVar15[1];
      plVar12 = plVar15;
      if ((long *)plVar15[1] == (long *)0x0) {
        do {
          plVar15 = (long *)plVar12[2];
          bVar4 = (long *)*plVar15 != plVar12;
          plVar12 = plVar15;
        } while (bVar4);
      }
      else {
        do {
          plVar15 = plVar13;
          plVar13 = (long *)*plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
      }
    }
    (**(code **)(*ppuVar8 + 0x20))(ppuVar8);
    (**(code **)(*ppuVar8 + 0x18))(ppuVar8,&PTR_DAT_110c26738);
    plVar15 = *(long **)(lVar11 + 0x50);
    while (plVar15 != (long *)(lVar11 + 0x58)) {
      (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
      (**(code **)(*ppuVar8 + 0x118))(ppuVar8,&PTR_DAT_110c26758,plVar15[7]);
      (**(code **)(*ppuVar8 + 0x20))(ppuVar8);
      plVar13 = (long *)plVar15[1];
      plVar12 = plVar15;
      if ((long *)plVar15[1] == (long *)0x0) {
        do {
          plVar15 = (long *)plVar12[2];
          bVar4 = (long *)*plVar15 != plVar12;
          plVar12 = plVar15;
        } while (bVar4);
      }
      else {
        do {
          plVar15 = plVar13;
          plVar13 = (long *)*plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010a8c792c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar8 + 0x20))(ppuVar8);
    return;
  }
  return;
}



/* Entry: 10a8c76d8; end: 10a8c7943;  */

void FUN_10a8c76d8(long param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_60;
  long *plStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_1 + 0x10);
  plStack_58 = *(long **)(lVar5 + 0x10);
  uStack_60 = *(undefined8 *)(lVar5 + 8);
  puStack_50 = &UNK_10f6810b4;
  uStack_48 = 0xd;
  if (*(long *)(lVar5 + 0x10) != 0) {
    plVar7 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c2af50,&uStack_60,&puStack_50);
  plVar7 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar4 = *plVar2;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar3) {
        *plVar2 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c2aef8,*(undefined1 *)(lVar5 + 0x2e8));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2af18,*(undefined4 *)(lVar5 + 0x2ec));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c26718);
  plVar7 = *(long **)(lVar5 + 0x38);
  while (plVar7 != (long *)(lVar5 + 0x40)) {
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c2ad00,plVar7[7]);
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar2 = (long *)plVar7[1];
    plVar6 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar3 = (long *)*plVar7 != plVar6;
        plVar6 = plVar7;
      } while (bVar3);
    }
    else {
      do {
        plVar7 = plVar2;
        plVar2 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c26738);
  plVar7 = *(long **)(lVar5 + 0x50);
  while (plVar7 != (long *)(lVar5 + 0x58)) {
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c26758,plVar7[7]);
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar2 = (long *)plVar7[1];
    plVar6 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar3 = (long *)*plVar7 != plVar6;
        plVar6 = plVar7;
      } while (bVar3);
    }
    else {
      do {
        plVar7 = plVar2;
        plVar2 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a8c792c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a8c7944; end: 10a8c7ab7;  */

undefined1  [16] FUN_10a8c7944(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f6818a3;
  return auVar1;
}



/* Entry: 10a8c7ab8; end: 10a8c7daf;  */

void FUN_10a8c7ab8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6818a3,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c276d8;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c276d8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f148,FUN_10a8edbfc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2dd06f,FUN_10a8edd44,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f680412,FUN_10a8ede20,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6806dd,FUN_10a8eded8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6806f0,FUN_10a8edfc0,FUN_10a8ee07c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6818a3,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8c7d94);
  (*pcVar6)();
}



/* Entry: 10a8c7db0; end: 10a8c7e97;  */

void FUN_10a8c7db0(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f67fb58;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a8c7e98(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f680452;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f67fb58;
  uStack_38 = 0;
  FUN_10a8ee2d4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6806fb;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x00010a8ee5b4(param_1,&puStack_98);
  FUN_10a8ee6d4(param_1);
  return;
}



/* Entry: 10a8c7e98; end: 10a8c7f6f;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c7f30) */

undefined1  [16] FUN_10a8c7e98(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6818b3,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8ee1d8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8c7f70; end: 10a8c8097;  */

void FUN_10a8c7f70(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f67fb58;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a8c8098(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f680452;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a8ee88c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6806fb;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x10000000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x00010a8eea00(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6804ab;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f67fb58;
  uStack_38 = 0;
  FUN_10a8eeb20(param_1,&puStack_98);
  FUN_10a8eed40(param_1);
  return;
}



/* Entry: 10a8c8098; end: 10a8c816f;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c8130) */

undefined1  [16] FUN_10a8c8098(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6818c4,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8ee790(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8c8170; end: 10a8c8287;  */

void FUN_10a8c8170(undefined8 param_1)

{
  undefined4 uStack_ac;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f680700;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x136;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8c8288(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68070b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x136;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 0;
  FUN_10a8c82e0(param_1,&puStack_a8,&uStack_ac);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f680710;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x136;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 1;
  FUN_10a8c82e0(param_1,&puStack_a8,&uStack_ac);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a8c8288; end: 10a8c82df;  */

ulong FUN_10a8c8288(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a8c82e0; end: 10a8c843f;  */

ulong FUN_10a8c82e0(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a8eedfc(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a8c8440; end: 10a8c8497;  */

ulong FUN_10a8c8440(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a8c8498; end: 10a8c876b;  */

ulong FUN_10a8c8498(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a8eee70(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a8c876c; end: 10a8c87cf;  */

undefined8 * FUN_10a8c876c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
  return param_1;
}


