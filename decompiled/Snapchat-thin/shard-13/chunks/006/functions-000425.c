/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9c206c; end: 10a9c213f;  */

void FUN_10a9c206c(undefined8 param_1)

{
  undefined8 uVar1;
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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f687d39;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9c2140(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6881f1;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x99;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9d1598();
  FUN_10a9d1718(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c2140; end: 10a9c2217;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c21d8) */

undefined1  [16] FUN_10a9c2140(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688b59,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9d149c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9c2218; end: 10a9c226f;  */

undefined1  [16] FUN_10a9c2218(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f688b6b;
  return auVar1;
}



/* Entry: 10a9c2270; end: 10a9c2353;  */

void FUN_10a9c2270(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6881f8;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000064;
  puStack_70 = &UNK_10f687d39;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6881ab;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x99;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9c2354(param_1,&puStack_98);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c2354; end: 10a9c23bb;  */

ulong FUN_10a9c2354(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9c23bc);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a9d1814,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a9c23bc; end: 10a9c24f3;  */

void FUN_10a9c23bc(undefined8 param_1)

{
  undefined8 uVar1;
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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = &UNK_10f687d39;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9c24f4(param_1,&puStack_a8);
  puStack_b8 = &UNK_10f6880ec;
  puStack_b0 = &UNK_10f6880f1;
  ppuStack_a0 = &puStack_b8;
  puStack_a8 = &UNK_10f68820f;
  uStack_98 = 2;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9d1a9c();
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68821f;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9d1e28(uVar1,&puStack_a8);
  FUN_10a9d20d4(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c24f4; end: 10a9c25cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c258c) */

undefined1  [16] FUN_10a9c24f4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688b6b,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9d194c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9c25cc; end: 10a9c262b;  */

undefined1  [16] FUN_10a9c25cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f688b7b;
  return auVar1;
}



/* Entry: 10a9c262c; end: 10a9c26ff;  */

void FUN_10a9c262c(undefined8 param_1)

{
  undefined8 uVar1;
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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f687d39;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9c2700(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6880f1;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x99;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9d228c();
  FUN_10a9d23f8(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c2700; end: 10a9c27d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c2798) */

undefined1  [16] FUN_10a9c2700(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688b7b,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9d2190(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9c27d8; end: 10a9c2863;  */

undefined1  [16] FUN_10a9c27d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f688b8e;
  return auVar1;
}



/* Entry: 10a9c2864; end: 10a9c297f;  */

void FUN_10a9c2864(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  puStack_80 = (undefined *)0x0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9d24b4(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68822d;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9d2688();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68804e;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a9d2800(uVar1,&puStack_a8);
  FUN_10a9d2934(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c2980; end: 10a9c29ff;  */

void FUN_10a9c2980(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  uStack_68 = 0;
  uStack_60 = 0xffffffff00000002;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f687d39;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_28 = 0xffffffff;
  FUN_10a9d29f0(param_1,&uStack_68);
  FUN_10a9d2bc4();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c2a00; end: 10a9c2aa7;  */

undefined1  [16] FUN_10a9c2a00(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f688bb5;
  return auVar1;
}



/* Entry: 10a9c2aa8; end: 10a9c2bbf;  */

void FUN_10a9c2aa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = &UNK_10f687d39;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9d2c80(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f688232;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9d2e54();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f688039;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a9d2fcc(uVar1,&puStack_a8);
  FUN_10a9d3154(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c2bc0; end: 10a9c2bcf;  */

undefined1  [16] FUN_10a9c2bc0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x22;
  auVar1._0_8_ = &UNK_10f688bd2;
  return auVar1;
}



/* Entry: 10a9c2bd0; end: 10a9c2c33;  */

bool FUN_10a9c2bd0(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x22) {
    iVar1 = 0xf688bd2;
    _memcmp(&UNK_10f688bd2);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a9c2c34; end: 10a9c2d47;  */

void FUN_10a9c2c34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9d3210(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68822d;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9d33e4();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68804e;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a9d355c(uVar1,&puStack_a8);
  FUN_10a9d3690(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c2d48; end: 10a9c2e07;  */

undefined1  [16] FUN_10a9c2d48(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 9;
  auVar1._0_8_ = &UNK_10f688235;
  return auVar1;
}



/* Entry: 10a9c2e08; end: 10a9c30bf;  */

void FUN_10a9c2e08(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  func_0x000109887da8(appuStack_d8,&UNK_10f688235,9);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35d60;
  pppuVar2 = (undefined8 ***)&UNK_10f687d39;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x200000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c35d60;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110c35aa0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f687d47,FUN_10a9d374c,FUN_10a9d3878);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f688235,9);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f688235;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x200000064;
    puStack_88 = &UNK_10f687d39;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f687d39;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9c30a0;
      FUN_10a054dac(param_1,&UNK_10f6881ab,FUN_10a9d3a00,1,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a9c30a0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c30a4);
  (*pcVar6)();
}



/* Entry: 10a9c30c0; end: 10a9c3117;  */

undefined1  [16] FUN_10a9c30c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f688bf5;
  return auVar1;
}



/* Entry: 10a9c3118; end: 10a9c322f;  */

void FUN_10a9c3118(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = &UNK_10f687d39;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9c3230(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f688032;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9d3cd0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68823f;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a9d3e6c(uVar1,&puStack_a8);
  FUN_10a9d3f7c(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c3230; end: 10a9c3307;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c32c8) */

undefined1  [16] FUN_10a9c3230(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688bf5,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9d3bd4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9c3308; end: 10a9c338b;  */

undefined1  [16] FUN_10a9c3308(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f688c01;
  return auVar1;
}



/* Entry: 10a9c338c; end: 10a9c34a3;  */

void FUN_10a9c338c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f687d39;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = &UNK_10f687d39;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9d4038(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68810b;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9d420c();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f688113;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x99;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a9d4394(uVar1,&puStack_a8);
  FUN_10a9d44a4(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c34a4; end: 10a9c3533;  */

undefined1  [16] FUN_10a9c34a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10f688250;
  return auVar1;
}



/* Entry: 10a9c3534; end: 10a9c38ab;  */

void FUN_10a9c3534(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f688040,7);
  func_0x000109887da8(appuStack_c8,&UNK_10f688250,0x14);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c36950;
  pppuVar2 = (undefined8 ***)&UNK_10f687d39;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
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
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c36950;
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
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9c388c;
    FUN_10a054dac(param_1,&UNK_10f6880fa,FUN_10a9d4560,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f688119,FUN_10a9d4878,FUN_10a9d4958);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f309c7a,FUN_10a9d4b40,FUN_10a9d4c20);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f688134,FUN_10a9d4cd8,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f688250,0x14);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f688250;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x200000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9c388c;
      FUN_10a054dac(param_1,&UNK_10f6881ab,FUN_10a9d4dd8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a9c388c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c3890);
  (*pcVar6)();
}



/* Entry: 10a9c38ac; end: 10a9c3927;  */

undefined8 * FUN_10a9c38ac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f688265,&UNK_10f6882bf,0x17,&UNK_10f688325);
  }
  param_1[2] = param_2;
  return param_1;
}



/* Entry: 10a9c3928; end: 10a9c3a3f;  */

undefined8 FUN_10a9c3928(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uStack_58;
  undefined7 uStack_57;
  char cStack_41;
  char cStack_40;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_10a9c3a40(puVar2,uVar1);
  if ((long)puVar2 < -0x178897628340bbcf) {
    if (puVar2 != (undefined8 *)0x82306b350177e514) {
      if (puVar2 != (undefined8 *)0x8c6c2a32a87c4ac0) {
        return 0;
      }
FUN_10a9c3b64:
      lVar3 = *(long *)(param_1 + 0x10) + 0xd48;
      FUN_10a5aeb74(lVar3,&PTR_DAT_110bbbc90);
      if (*(long *)(lVar3 + 8) == lVar3) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(lVar3 + 8) + 0x28);
        func_0x000107c2b054(auStack_38,&UNK_10f688c0f);
        uStack_58 = 0;
        cStack_40 = '\0';
        FUN_10a2b52e8(uVar4,auStack_38,param_2,&uStack_58);
        if ((cStack_40 == '\x01') && (cStack_41 < '\0')) {
          __ZdlPv(CONCAT71(uStack_57,uStack_58));
        }
        if (cStack_21 < '\0') {
          __ZdlPv(auStack_38[0]);
        }
      }
      return uVar4;
    }
    FUN_10a245cf8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa10));
  }
  else if (puVar2 == (undefined8 *)0xe877689d7cbf4431) {
    FUN_10a245c64(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa10));
  }
  else {
    if (puVar2 == (undefined8 *)0x5d308b4db6a167f) goto FUN_10a9c3b64;
    if (puVar2 != (undefined8 *)0x51817ca30ec99a51) {
      return 0;
    }
    FUN_10a245b78(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa10));
  }
  return 1;
}



/* Entry: 10a9c3a40; end: 10a9c3b63;  */

ulong FUN_10a9c3a40(char *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 uStack_68;
  undefined7 uStack_67;
  char cStack_51;
  char cStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  if (param_2 < 8) {
    uVar6 = 0;
  }
  else {
    bVar2 = (param_2 + 8 >> 3 | (ulong)(0xfffffffffffffff7 < param_2) << 0x3d) <= (param_2 >> 3) - 1
    ;
    if (CARRY8(~(ulong)!bVar2,(ulong)bVar2)) {
      puVar3 = &UNK_10f2fca6e;
      FUN_109ffdddc();
      lVar4 = *(long *)(puVar3 + 0x10) + 0xd48;
      FUN_10a5aeb74(lVar4,&PTR_DAT_110bbbc90);
      if (*(long *)(lVar4 + 8) == lVar4) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(ulong *)(*(long *)(lVar4 + 8) + 0x28);
        func_0x000107c2b054(auStack_48,&UNK_10f688c0f);
        uStack_68 = 0;
        cStack_50 = '\0';
        FUN_10a2b52e8(uVar7,auStack_48,param_2,&uStack_68);
        if ((cStack_50 == '\x01') && (cStack_51 < '\0')) {
          __ZdlPv(CONCAT71(uStack_67,uStack_68));
        }
        if (cStack_31 < '\0') {
          __ZdlPv(auStack_48[0]);
        }
      }
      return uVar7;
    }
    uVar6 = 0;
    uVar7 = 0;
    pcVar9 = param_1;
    uVar8 = param_2;
    do {
      uVar1 = uVar8 - 8;
      if (7 < uVar8) {
        uVar8 = 8;
      }
      if (param_2 == uVar7 * 8) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        uVar10 = 0;
        pcVar5 = pcVar9;
        do {
          uVar10 = (long)*pcVar5 << (uVar11 & 0x3f) | uVar10;
          uVar11 = uVar11 + 8;
          uVar8 = uVar8 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar8 != 0);
      }
      uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + uVar10 ^ uVar6;
      uVar7 = uVar7 + 1;
      pcVar9 = pcVar9 + 8;
      uVar8 = uVar1;
    } while (uVar7 != param_2 >> 3);
  }
  if ((param_2 & 7) == 0) {
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    pcVar9 = param_1 + (param_2 & 0xfffffffffffffff8);
    do {
      uVar7 = (long)*pcVar9 << (uVar8 & 0x3f) | uVar7;
      uVar8 = uVar8 + 8;
      pcVar9 = pcVar9 + 1;
    } while ((param_2 & 7) * 8 - uVar8 != 0);
  }
  uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + uVar7 ^ uVar6;
  return param_2 + 0x9e3779b9 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6;
}



/* Entry: 10a9c3b64; end: 10a9c3c4b;  */

undefined8 FUN_10a9c3b64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_58;
  undefined7 uStack_57;
  char cStack_41;
  char cStack_40;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0xd48;
  FUN_10a5aeb74(lVar1,&PTR_DAT_110bbbc90);
  if (*(long *)(lVar1 + 8) == lVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x28);
    func_0x000107c2b054(auStack_38,&UNK_10f688c0f);
    uStack_58 = 0;
    cStack_40 = '\0';
    FUN_10a2b52e8(uVar2,auStack_38,param_2,&uStack_58);
    if ((cStack_40 == '\x01') && (cStack_41 < '\0')) {
      __ZdlPv(CONCAT71(uStack_57,uStack_58));
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return uVar2;
}



/* Entry: 10a9c3c4c; end: 10a9c3cd7;  */

undefined8 FUN_10a9c3c4c(void)

{
  return 8;
}



/* Entry: 10a9c3cd8; end: 10a9c3daf;  */

void FUN_10a9c3cd8(undefined8 param_1)

{
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_98;
  undefined1 *puStack_90;
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
  puStack_90 = (undefined1 *)0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f687d39;
  uStack_78 = 0;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_60 = 0x9e;
  uStack_58 = CONCAT44(uStack_58._4_4_,0x15c);
  FUN_10a9c3db0(param_1,&puStack_98);
  puStack_b8 = &DAT_10f688388;
  puStack_c0 = &DAT_10f688382;
  puStack_a8 = &DAT_10f68839e;
  puStack_b0 = &DAT_10f688390;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x4200000064;
  puStack_98 = &UNK_10f688377;
  uStack_88 = 4;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x9e;
  uStack_48 = 0x161;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_c0;
  FUN_10a9d5064();
  func_0x00010a9d5d60(param_1);
  return;
}



/* Entry: 10a9c3db0; end: 10a9c3e87;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c3e48) */

undefined1  [16] FUN_10a9c3db0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688c2e,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9d4f68(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9c3e88; end: 10a9c3e8b;  */

long * FUN_10a9c3e88(long *param_1)

{
  long lVar1;
  
  func_0x00010990227c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9c3e8c; end: 10a9c44d3;  */

/* WARNING: Possible PIC construction at 0x00010a9c44c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9c44cc) */
/* WARNING: Removing unreachable block (ram,0x00010a9c4524) */
/* WARNING: Removing unreachable block (ram,0x00010a9c454c) */
/* WARNING: Removing unreachable block (ram,0x00010a9c4554) */
/* WARNING: Removing unreachable block (ram,0x00010a9c455c) */
/* WARNING: Removing unreachable block (ram,0x00010a9c4594) */
/* WARNING: Removing unreachable block (ram,0x00010a9c459c) */
/* WARNING: Removing unreachable block (ram,0x00010a9c45a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9c45ac) */
/* WARNING: Removing unreachable block (ram,0x00010a9c45c4) */
/* WARNING: Removing unreachable block (ram,0x00010a9c45cc) */
/* WARNING: Removing unreachable block (ram,0x00010a9c45e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9c45ec) */
/* WARNING: Removing unreachable block (ram,0x00010a9c4608) */
/* WARNING: Removing unreachable block (ram,0x00010a9c460c) */

undefined8 * FUN_10a9c3e8c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined *puStack_258;
  undefined **ppuStack_250;
  code *pcStack_218;
  undefined **appuStack_210 [7];
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_190;
  long *plStack_188;
  undefined7 uStack_180;
  char cStack_179;
  undefined1 auStack_f8 [8];
  undefined8 *apuStack_f0 [7];
  undefined1 auStack_b8 [72];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x56] = &PTR_FUN_110bbbb70;
  puVar3 = param_1;
  FUN_10aa7093c();
  FUN_10a03c0d0(puVar3 + 0x1c);
  FUN_10a03e114(param_1 + 0x20);
  *param_1 = &PTR_FUN_110c357a0;
  param_1[2] = &PTR_DAT_110c35868;
  param_1[7] = &PTR_DAT_110c358c0;
  param_1[0x1c] = &PTR_DAT_110c358e0;
  param_1[0x20] = &PTR_DAT_110c35908;
  param_1[0x56] = &PTR_DAT_110c35948;
  param_1[0x24] = param_2;
  puVar3 = (undefined8 *)0x58;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110bf7fc8;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((long)puVar3 + 0x4d) = 0;
  *(undefined8 *)((long)puVar3 + 0x45) = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  param_1[0x25] = puVar3 + 3;
  param_1[0x26] = puVar3;
  FUN_10a5cf1fc(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  puVar3 = param_1 + 0x33;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = param_1 + 0x3c;
  param_1[0x3d] = param_1 + 0x3c;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x4d] = 0x32aaaba7;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((long)param_1 + 0x2a1) = 0;
  *(undefined8 *)((long)param_1 + 0x299) = 0;
  FUN_10a5ae998(param_1[0x1d],&PTR_DAT_110b9f988,param_1[0x24],param_1 + 0x1c);
  FUN_10a5ae998(param_1[0x21],&PTR_DAT_110b9fab0,param_1[0x24],param_1 + 0x20);
  FUN_10a5ae998(param_1[0x25],&PTR_DAT_110c35f50,param_1[0x24],param_1);
  plVar4 = *(long **)(*(long *)(param_1[0x24] + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0xa8))();
  plStack_2b0 = (long *)0x0;
  plStack_2a8 = (long *)0x0;
  plVar5 = (long *)plVar4[1];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_2a8 = plVar5;
    if (plVar5 != (long *)0x0) {
      plStack_2b0 = (long *)*plVar4;
      if (plStack_2b0 != (long *)0x0) {
        (**(code **)(*plStack_2b0 + 0x10))(&uStack_190);
        goto LAB_10a9c408c;
      }
    }
  }
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  *puVar6 = &PTR_DAT_1107eb8d8;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  FUN_10a9c9800(&uStack_190,puVar6,&UNK_104c40320);
LAB_10a9c408c:
  FUN_10a9bd6a0(param_1 + 0x2e,&uStack_190);
  plVar4 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    plVar5 = plStack_188 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = *(long **)(*(long *)(param_1[0x24] + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0x60))();
  lVar8 = plVar4[1];
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_109d1a80c();
  lStack_260 = *plVar4;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  puStack_2a0 = &UNK_1053a6a3c;
  ppuStack_298 = &PTR_DAT_110ae9180;
  pcStack_218 = FUN_10a2c2268;
  appuStack_210[0] = &PTR_DAT_110bbbbc8;
  puStack_1d0 = &UNK_1053a6a3c;
  ppuStack_1c8 = &PTR_DAT_110ae9180;
  puStack_258 = &UNK_1053a6a3c;
  ppuStack_250 = &PTR_DAT_110ae9180;
  uVar7 = 0x130;
  lStack_1d8 = lStack_260;
  __Znwm(0x130);
  FUN_10a2b5a50();
  FUN_10a2c13b8(auStack_f8,&pcStack_218);
  FUN_10a2c21b4(&uStack_190,uVar7,auStack_f8);
  if (lStack_70 != 0) {
    func_0x0001092b4274(&lStack_70);
  }
  func_0x0001092ba41c(auStack_b8);
  (*(code *)*apuStack_f0[0])(apuStack_f0);
  FUN_10a2b36cc(param_1 + 0x2c,&uStack_190);
  FUN_10a2c2280(&uStack_190);
  func_0x0001092ba41c(&lStack_1d8);
  (*(code *)*appuStack_210[0])(appuStack_210);
  func_0x0001092ba41c(&lStack_260);
  (*(code *)*ppuStack_298)(&ppuStack_298);
  FUN_10a5971e0(&uStack_190,*(undefined8 *)(param_1[0x24] + 0x900));
  if (*(char *)((long)param_1 + 0x1af) < '\0') {
    __ZdlPv(*puVar3);
  }
  param_1[0x34] = plStack_188;
  *puVar3 = uStack_190;
  param_1[0x35] = CONCAT17(cStack_179,uStack_180);
  lVar9 = param_1[0x24];
  func_0x000107c2b054(&uStack_190,&UNK_10f688c47);
  if (lVar9 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar9 + 0x8d8),&uStack_190,1);
  }
  if (cStack_179 < '\0') {
    __ZdlPv(uStack_190);
  }
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar8);
  }
  plVar4 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    plVar5 = plStack_2a8 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a2c2a7c(&plStack_2b0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x4d);
  func_0x0001092b0b8c(param_1 + 0x48);
  func_0x0001092b0b8c(param_1 + 0x43);
  func_0x00010a9c8cfc(param_1 + 0x3f);
  FUN_10a9c8d58(plVar4);
  FUN_10a9c8dc4(param_1 + 0x36);
  if (*(char *)((long)param_1 + 0x1af) < '\0') {
    __ZdlPv(*puVar3);
  }
  if (*(char *)((long)param_1 + 0x197) < '\0') {
    __ZdlPv(param_1[0x30]);
  }
  func_0x00010a9c97a8(param_1 + 0x2e);
  func_0x00010a2bfc7c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    __ZdlPv(param_1[0x27]);
  }
  func_0x00010a004e5c(param_1 + 0x25);
  param_1[0x20] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x23] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x23] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x21);
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a9c44d4; end: 10a9c4627;  */

undefined8 * FUN_10a9c44d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c357a0;
  param_1[2] = &PTR_DAT_110c35868;
  param_1[7] = &PTR_DAT_110c358c0;
  param_1[0x1c] = &PTR_DAT_110c358e0;
  param_1[0x20] = &PTR_DAT_110c35908;
  param_1[0x56] = &PTR_DAT_110c35948;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f68858d,&UNK_10f6885de,0x4a,&UNK_10f68862b);
  }
  if (param_1[0x2c] != 0) {
    FUN_10a2b6d0c(param_1[0x2c] + 0x110);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x4d);
  func_0x0001092b0b8c(param_1 + 0x48);
  func_0x0001092b0b8c(param_1 + 0x43);
  func_0x00010a9c8cfc(param_1 + 0x3f);
  FUN_10a9c8d58(param_1 + 0x3c);
  FUN_10a9c8dc4(param_1 + 0x36);
  if (*(char *)((long)param_1 + 0x1af) < '\0') {
    __ZdlPv(param_1[0x33]);
  }
  if (*(char *)((long)param_1 + 0x197) < '\0') {
    __ZdlPv(param_1[0x30]);
  }
  func_0x00010a9c97a8(param_1 + 0x2e);
  func_0x00010a2bfc7c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    __ZdlPv(param_1[0x27]);
  }
  func_0x00010a004e5c(param_1 + 0x25);
  param_1[0x20] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x23] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x23] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x21);
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a9c4628; end: 10a9c465b;  */

undefined8 * FUN_10a9c4628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c357a0;
  param_1[2] = &PTR_DAT_110c35868;
  param_1[7] = &PTR_DAT_110c358c0;
  param_1[0x1c] = &PTR_DAT_110c358e0;
  param_1[0x20] = &PTR_DAT_110c35908;
  param_1[0x56] = &PTR_DAT_110c35948;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f68858d,&UNK_10f6885de,0x4a,&UNK_10f68862b);
  }
  if (param_1[0x2c] != 0) {
    FUN_10a2b6d0c(param_1[0x2c] + 0x110);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x4d);
  func_0x0001092b0b8c(param_1 + 0x48);
  func_0x0001092b0b8c(param_1 + 0x43);
  func_0x00010a9c8cfc(param_1 + 0x3f);
  FUN_10a9c8d58(param_1 + 0x3c);
  FUN_10a9c8dc4(param_1 + 0x36);
  if (*(char *)((long)param_1 + 0x1af) < '\0') {
    __ZdlPv(param_1[0x33]);
  }
  if (*(char *)((long)param_1 + 0x197) < '\0') {
    __ZdlPv(param_1[0x30]);
  }
  func_0x00010a9c97a8(param_1 + 0x2e);
  func_0x00010a2bfc7c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    __ZdlPv(param_1[0x27]);
  }
  func_0x00010a004e5c(param_1 + 0x25);
  param_1[0x20] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x23] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x23] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x21);
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a9c465c; end: 10a9c46cf;  */

void FUN_10a9c465c(void)

{
  FUN_10a9c44d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9c46d0; end: 10a9c46ff;  */

void FUN_10a9c46d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a9c44d4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a9c4700; end: 10a9c484b;  */

void FUN_10a9c4700(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar6 = param_1 + 0x138;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined4 *)(param_1 + 0x158) = *param_3;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0x150) = lVar6;
  lVar6 = *(long *)(param_1 + 0x1d8);
  do {
    if (lVar6 == 0) {
      return;
    }
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x1b8) + (*(ulong *)(param_1 + 0x1d0) >> 8) * 8) +
             (*(ulong *)(param_1 + 0x1d0) & 0xff) * 0x10);
    plVar7 = (long *)puVar1[1];
    uStack_28 = puVar1[1];
    uStack_30 = *puVar1;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9c4838);
        (*pcVar5)();
      }
    }
    func_0x00010a9d5e50(*(long *)(*(long *)(param_1 + 0x1b8) +
                                 (*(ulong *)(param_1 + 0x1d0) >> 8) * 8) +
                        (*(ulong *)(param_1 + 0x1d0) & 0xff) * 0x10);
    uVar8 = *(long *)(param_1 + 0x1d0) + 1;
    *(long *)(param_1 + 0x1d8) = *(long *)(param_1 + 0x1d8) + -1;
    *(ulong *)(param_1 + 0x1d0) = uVar8;
    if (0x1ff < uVar8) {
      __ZdlPv(**(undefined8 **)(param_1 + 0x1b8));
      *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) + 8;
      *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1d0) + -0x100;
    }
    FUN_10a9c484c(param_1,&uStack_30);
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    lVar6 = *(long *)(param_1 + 0x1d8);
  } while( true );
}



/* Entry: 10a9c484c; end: 10a9c4be7;  */

void FUN_10a9c484c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar6 = *(long *)(*param_2 + 0x18);
  *(int *)(lVar6 + 4) = (int)param_1[0x2b];
  plVar4 = param_1 + 0x30;
  if (*(char *)((long)param_1 + 0x197) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  func_0x000107c2c4dc(lVar6 + 0x50,plVar4);
  puVar3 = (undefined8 *)0x10;
  __Znwm();
  (**(code **)(*param_1 + 0x50))(&uStack_88,param_1);
  if (plStack_80 == (long *)0x0) {
    *puVar3 = uStack_88;
    puVar3[1] = 0;
  }
  else {
    plVar4 = plStack_80 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (plStack_80 != (long *)0x0) {
      plVar5 = plStack_80 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
    plVar5 = plStack_80 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *puVar3 = uStack_88;
    puVar3[1] = plStack_80;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  lVar6 = *param_2;
  puVar7 = *(undefined8 **)(lVar6 + 0x18);
  uStack_88 = *puVar7;
  uStack_60 = puVar7[0xd];
  uStack_58 = *(undefined4 *)(puVar7 + 0xe);
  uVar8 = *(undefined8 *)(lVar6 + 0x28);
  plStack_80 = (long *)puVar7[1];
  if (-1 < *(char *)((long)puVar7 + 0x1f)) {
    plStack_80 = puVar7 + 1;
  }
  puStack_78 = (undefined8 *)puVar7[4];
  if (-1 < *(char *)((long)puVar7 + 0x37)) {
    puStack_78 = puVar7 + 4;
  }
  uVar10 = *(undefined8 *)(lVar6 + 0x38);
  puStack_70 = (undefined8 *)puVar7[7];
  if (-1 < *(char *)((long)puVar7 + 0x4f)) {
    puStack_70 = puVar7 + 7;
  }
  puStack_68 = (undefined8 *)puVar7[10];
  if (-1 < *(char *)((long)puVar7 + 0x67)) {
    puStack_68 = puVar7 + 10;
  }
  *(int *)(param_1 + 0x42) = (int)param_1[0x42] + 1;
  lVar6 = param_1[0x24];
  func_0x000107c2b054(&pcStack_a8,&UNK_10f688c81);
  if (lVar6 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar6 + 0x8d8),&pcStack_a8,(int)param_1[0x42]);
  }
  if (uStack_98 < 0) {
    __ZdlPv(pcStack_a8);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&pcStack_a8,&UNK_10f688ca0,*(long *)(*param_2 + 0x18) + 0x38);
  FUN_10a9c4ce4(param_1,&pcStack_a8,param_1 + 0x43);
  if (uStack_98._7_1_ < '\0') {
    __ZdlPv(pcStack_a8);
  }
  FUN_10a9c4bf8(param_1,uRam00000001137ebf90,uRam00000001137ebf98,
                *(undefined4 *)(*(long *)(*param_2 + 0x18) + 0x6c));
  plVar4 = (long *)*param_2;
  if (*(char *)((long)plVar4 + 0x17) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  plVar5 = param_1 + 0x27;
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  pcStack_a8 = FUN_10a9c4fa0;
  plStack_a0 = puVar3;
  uStack_98 = uVar10;
  uStack_90 = uVar8;
  (**(code **)(*(long *)param_1[0x2e] + 0x48))
            ((long *)param_1[0x2e],plVar4,plVar5,&uStack_88,&pcStack_a8);
  plVar4 = (long *)0x38;
  __Znwm();
  plVar11 = plVar4 + 1;
  *plVar11 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c36610;
  pcVar9 = (code *)(plVar4 + 3);
  plVar4[4] = 0;
  *(long *)pcVar9 = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  pcStack_a8 = pcVar9;
  plStack_a0 = plVar4;
  FUN_10a9c5750(plVar4 + 5,*param_2 + 0x38);
  func_0x00010a9c57cc(pcVar9,*(undefined8 *)(*param_2 + 0x28),*(undefined8 *)(*param_2 + 0x30));
  plVar5 = (long *)0x20;
  __Znwm();
  plVar5[2] = (long)pcVar9;
  plVar5[3] = (long)plVar4;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar6 = param_1[0x3c];
  *plVar5 = lVar6;
  plVar5[1] = (long)(param_1 + 0x3c);
  *(long **)(lVar6 + 8) = plVar5;
  param_1[0x3c] = (long)plVar5;
  param_1[0x3e] = param_1[0x3e] + 1;
  do {
    lVar6 = *plVar11;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a9c4be8; end: 10a9c4bf7;  */

void FUN_10a9c4be8(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x28);
  lVar7 = lVar3 + 0x138;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined4 *)(lVar3 + 0x158) = *param_3;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(lVar3 + 0x150) = lVar7;
  lVar7 = *(long *)(lVar3 + 0x1d8);
  do {
    if (lVar7 == 0) {
      return;
    }
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(lVar3 + 0x1b8) + (*(ulong *)(lVar3 + 0x1d0) >> 8) * 8) +
             (*(ulong *)(lVar3 + 0x1d0) & 0xff) * 0x10);
    plVar8 = (long *)puVar1[1];
    uStack_28 = puVar1[1];
    uStack_30 = *puVar1;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (*(long *)(lVar3 + 0x1d8) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c4838);
        (*pcVar6)();
      }
    }
    func_0x00010a9d5e50(*(long *)(*(long *)(lVar3 + 0x1b8) + (*(ulong *)(lVar3 + 0x1d0) >> 8) * 8) +
                        (*(ulong *)(lVar3 + 0x1d0) & 0xff) * 0x10);
    uVar9 = *(long *)(lVar3 + 0x1d0) + 1;
    *(long *)(lVar3 + 0x1d8) = *(long *)(lVar3 + 0x1d8) + -1;
    *(ulong *)(lVar3 + 0x1d0) = uVar9;
    if (0x1ff < uVar9) {
      __ZdlPv(**(undefined8 **)(lVar3 + 0x1b8));
      *(long *)(lVar3 + 0x1b8) = *(long *)(lVar3 + 0x1b8) + 8;
      *(long *)(lVar3 + 0x1d0) = *(long *)(lVar3 + 0x1d0) + -0x100;
    }
    FUN_10a9c484c(lVar3,&uStack_30);
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 1;
      do {
        lVar7 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    lVar7 = *(long *)(lVar3 + 0x1d8);
  } while( true );
}



/* Entry: 10a9c4bf8; end: 10a9c4ce3;  */

void FUN_10a9c4bf8(long param_1,long param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long unaff_x21;
  undefined8 unaff_x23;
  long *plVar17;
  long *unaff_x25;
  float fVar18;
  
  if (param_3 != 0) {
    uVar9 = (ulong)param_4;
    uVar13 = param_3 - 1;
    uVar7 = (uint)param_3;
    if ((param_3 & uVar13) == 0) {
      uVar14 = (ulong)(uVar7 - 1 & param_4);
    }
    else {
      uVar14 = uVar9;
      if (param_3 <= uVar9) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = param_4 / uVar7;
        }
        uVar14 = (ulong)(param_4 - uVar3 * uVar7);
      }
    }
    plVar15 = *(long **)(param_2 + uVar14 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10a9c4c8c;
          uVar16 = plVar15[1];
          if (uVar16 != uVar9) break;
          if (*(uint *)(plVar15 + 2) == param_4) {
            plVar1 = plVar15 + 3;
            plVar2 = (long *)(param_1 + 0x240);
            plVar5 = plVar2;
            func_0x000107c2b05c();
            plVar17 = *(long **)(param_1 + 0x248);
            if (plVar17 == (long *)0x0) goto LAB_10a9c4db4;
            uVar9 = (long)plVar17 - 1;
            if (((ulong)plVar17 & uVar9) == 0) {
              unaff_x25 = (long *)(uVar9 & (ulong)plVar5);
            }
            else {
              unaff_x25 = plVar5;
              if (plVar17 <= plVar5) {
                uVar13 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar13 = (ulong)plVar5 / (ulong)plVar17;
                }
                unaff_x25 = (long *)((long)plVar5 - uVar13 * (long)plVar17);
              }
            }
            plVar10 = *(long **)(*plVar2 + (long)unaff_x25 * 8);
            if ((plVar10 == (long *)0x0) || (plVar10 = (long *)*plVar10, plVar10 == (long *)0x0))
            goto LAB_10a9c4db4;
            goto LAB_10a9c4d60;
          }
        }
        if ((param_3 & uVar13) == 0) {
          uVar16 = uVar16 & uVar13;
        }
        else if (param_3 <= uVar16) {
          uVar4 = 0;
          if (param_3 != 0) {
            uVar4 = uVar16 / param_3;
          }
          uVar16 = uVar16 - uVar4 * param_3;
        }
      } while (uVar16 == uVar14);
    }
  }
LAB_10a9c4c8c:
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f68858d,&UNK_10f6886c6,0x9f,&UNK_10f68874f);
  }
  return;
LAB_10a9c4d60:
  do {
    plVar11 = (long *)plVar10[1];
    if (plVar11 == plVar5) {
      plVar11 = plVar2;
      func_0x000107c2b068(plVar2,plVar10 + 2,plVar1);
      if (((ulong)plVar11 & 1) != 0) {
        iVar8 = (int)plVar10[5] + 1;
        *(int *)(plVar10 + 5) = iVar8;
        goto LAB_10a9c4f14;
      }
    }
    else {
      if (((ulong)plVar17 & uVar9) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar9);
      }
      else if (plVar17 <= plVar11) {
        uVar13 = 0;
        if (plVar17 != (long *)0x0) {
          uVar13 = (ulong)plVar11 / (ulong)plVar17;
        }
        plVar11 = (long *)((long)plVar11 - uVar13 * (long)plVar17);
      }
      if (plVar11 != unaff_x25) break;
    }
    plVar10 = (long *)*plVar10;
  } while (plVar10 != (long *)0x0);
LAB_10a9c4db4:
  plVar10 = (long *)0x30;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = (long)plVar5;
  if (*(char *)((long)plVar15 + 0x2f) < '\0') {
    func_0x000107c3192c(plVar10 + 2,*plVar1,plVar15[4]);
  }
  else {
    lVar12 = *plVar1;
    plVar10[3] = plVar15[4];
    plVar10[2] = lVar12;
    plVar10[4] = plVar15[5];
  }
  *(undefined4 *)(plVar10 + 5) = 1;
  fVar18 = (float)(*(long *)(param_1 + 600) + 1);
  if ((plVar17 == (long *)0x0) || (*(float *)(param_1 + 0x260) * (float)plVar17 < fVar18)) {
    uVar9 = 1;
    if ((long *)0x2 < plVar17) {
      uVar9 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar17 << 1;
    uVar13 = (ulong)(fVar18 / *(float *)(param_1 + 0x260));
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    func_0x0001092afd6c(plVar2,uVar9);
    plVar17 = *(long **)(param_1 + 0x248);
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar17 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar17 <= plVar5) {
        uVar9 = 0;
        if (plVar17 != (long *)0x0) {
          uVar9 = (ulong)plVar5 / (ulong)plVar17;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar9 * (long)plVar17);
      }
    }
  }
  lVar12 = *plVar2;
  plVar15 = *(long **)(lVar12 + (long)unaff_x25 * 8);
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)(param_1 + 0x250);
    *plVar10 = *plVar15;
    *plVar15 = (long)plVar10;
    *(long **)(lVar12 + (long)unaff_x25 * 8) = plVar15;
    if (*plVar10 != 0) {
      plVar15 = *(long **)(*plVar10 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar15 = (long *)((ulong)plVar15 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar15) {
        uVar9 = 0;
        if (plVar17 != (long *)0x0) {
          uVar9 = (ulong)plVar15 / (ulong)plVar17;
        }
        plVar15 = (long *)((long)plVar15 - uVar9 * (long)plVar17);
      }
      *(long **)(*plVar2 + (long)plVar15 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar15;
    *plVar15 = (long)plVar10;
  }
  *(long *)(param_1 + 600) = *(long *)(param_1 + 600) + 1;
  iVar8 = 1;
LAB_10a9c4f14:
  if (*(long *)(param_1 + 0x120) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x120) + 0x8d8);
    __ZNSt3__19to_stringEi(&stack0xffffffffffffffc8,iVar8);
    FUN_10a76bdb0(uVar6,plVar1,&stack0xffffffffffffffc8);
    if (unaff_x21 < 0) {
      __ZdlPv(unaff_x23);
    }
    return;
  }
  return;
}



/* Entry: 10a9c4ce4; end: 10a9c4f9f;  */

void FUN_10a9c4ce4(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x21;
  undefined8 unaff_x23;
  ulong uVar8;
  long *plVar9;
  long *unaff_x25;
  
  plVar7 = param_3;
  func_0x000107c2b05c();
  plVar9 = (long *)param_3[1];
  if (plVar9 != (long *)0x0) {
    uVar8 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar9);
      }
    }
    plVar3 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar7) {
          plVar4 = param_3;
          func_0x000107c2b068(param_3,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            iVar2 = *(int *)(plVar3 + 5) + 1;
            *(int *)(plVar3 + 5) = iVar2;
            goto LAB_10a9c4f14;
          }
        }
        else {
          if (((ulong)plVar9 & uVar8) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar8);
          }
          else if (plVar9 <= plVar4) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar9);
          }
          if (plVar4 != unaff_x25) break;
        }
      }
    }
  }
  plVar3 = (long *)0x30;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = (long)plVar7;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(plVar3 + 2,*param_2,param_2[1]);
  }
  else {
    lVar5 = *param_2;
    plVar3[3] = param_2[1];
    plVar3[2] = lVar5;
    plVar3[4] = param_2[2];
  }
  *(undefined4 *)(plVar3 + 5) = 1;
  if ((plVar9 == (long *)0x0) || (*(float *)(param_3 + 4) * (float)plVar9 < (float)(param_3[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar9) {
      uVar8 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_3[3] + 1) / *(float *)(param_3 + 4));
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    func_0x0001092afd6c(param_3,uVar8);
    plVar9 = (long *)param_3[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar8 = 0;
        if (plVar9 != (long *)0x0) {
          uVar8 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar8 * (long)plVar9);
      }
    }
  }
  lVar5 = *param_3;
  plVar7 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_3 + 2;
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar3 != 0) {
      plVar7 = *(long **)(*plVar3 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar8 = 0;
        if (plVar9 != (long *)0x0) {
          uVar8 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar8 * (long)plVar9);
      }
      *(long **)(*param_3 + (long)plVar7 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
  }
  param_3[3] = param_3[3] + 1;
  iVar2 = 1;
LAB_10a9c4f14:
  if (*(long *)(param_1 + 0x120) == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x120) + 0x8d8);
  __ZNSt3__19to_stringEi(&stack0xffffffffffffffc8,iVar2);
  FUN_10a76bdb0(uVar1,param_2,&stack0xffffffffffffffc8);
  if (unaff_x21 < 0) {
    __ZdlPv(unaff_x23);
  }
  return;
}



/* Entry: 10a9c4fa0; end: 10a9c574f;  */

void FUN_10a9c4fa0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long *plStack_a8;
  long lStack_a0;
  undefined7 uStack_98;
  char cStack_91;
  undefined7 uStack_90;
  char cStack_89;
  long lStack_88;
  long *plStack_80;
  undefined7 uStack_78;
  char cStack_71;
  undefined7 uStack_70;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0x88;
  plStack_a8 = param_2;
  __Znwm();
  plVar21 = plVar6 + 1;
  *plVar21 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c361b8;
  plVar22 = plVar6 + 3;
  plVar6[4] = 0;
  *plVar22 = 0;
  plVar6[0x10] = 0;
  plVar6[0xf] = 0;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  plVar6[10] = 0;
  plVar6[9] = 0;
  plVar6[0xc] = 0;
  plVar6[0xb] = 0;
  plVar6[0xe] = 0;
  plVar6[0xd] = 0;
  *(undefined4 *)(plVar6 + 0x10) = 1;
  FUN_109ffe064(&lStack_a0,*param_1,(long)*(int *)(param_1 + 1));
  if (*(char *)((long)plVar6 + 0x2f) < '\0') {
    __ZdlPv(*plVar22);
  }
  plVar6[4] = CONCAT17(cStack_91,uStack_98);
  *plVar22 = lStack_a0;
  plVar6[5] = CONCAT17(cStack_89,uStack_90);
  uVar1 = *(undefined4 *)(param_1 + 2);
  *(bool *)(plVar6 + 6) = *(int *)((long)param_1 + 0xc) != 0;
  *(undefined4 *)((long)plVar6 + 0x34) = uVar1;
  puVar10 = &UNK_10f687d39;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar10 = (undefined *)param_1[3];
  }
  func_0x000107c2b054(&lStack_a0);
  if (*(char *)((long)plVar6 + 0x4f) < '\0') {
    __ZdlPv(plVar6[7]);
  }
  plVar6[8] = CONCAT17(cStack_91,uStack_98);
  plVar6[7] = lStack_a0;
  plVar6[9] = CONCAT17(cStack_89,uStack_90);
  plVar8 = plVar6 + 10;
  lVar17 = *plVar8;
  *(undefined4 *)(plVar6 + 0x10) = *(undefined4 *)((long)param_1 + 0x3c);
  iVar11 = *(int *)(param_1 + 5);
  uVar7 = (ulong)iVar11;
  if ((ulong)(plVar6[0xc] - lVar17 >> 5) < uVar7) {
    if (-1 < iVar11) {
      lVar19 = plVar6[0xb];
      plStack_80 = plVar8;
      FUN_10a9c9334();
      lVar19 = uVar7 + (lVar19 - lVar17);
      lVar17 = (long)puVar10 * 0x20;
      puVar10 = (undefined *)plVar6[0xb];
      lVar20 = lVar19 + (plVar6[10] - (long)puVar10);
      func_0x00010a9c9368(plVar6[10],puVar10,lVar20);
      lStack_a0 = plVar6[10];
      plVar6[10] = lVar20;
      plVar6[0xb] = lVar19;
      lStack_88 = plVar6[0xc];
      plVar6[0xc] = uVar7 + lVar17;
      uStack_90 = (undefined7)lStack_a0;
      cStack_89 = (char)((ulong)lStack_a0 >> 0x38);
      uStack_98 = uStack_90;
      cStack_91 = cStack_89;
      func_0x00010a9c93e0(&lStack_a0);
      iVar11 = *(int *)(param_1 + 5);
      uVar7 = (ulong)iVar11;
      goto LAB_10a9c514c;
    }
  }
  else {
LAB_10a9c514c:
    if (iVar11 != 0) {
      puVar18 = (undefined8 *)param_1[4];
      puVar23 = puVar18 + uVar7 * 2;
      do {
        uVar24 = *puVar18;
        puVar10 = (undefined *)puVar18[1];
        func_0x000107c2b054(&lStack_a0);
        cVar3 = cStack_89;
        lVar17 = lStack_a0;
        uStack_78 = uStack_98;
        cStack_71 = cStack_91;
        uStack_70 = uStack_90;
        puVar12 = (undefined8 *)plVar6[0xb];
        if (puVar12 < (undefined8 *)plVar6[0xc]) {
          *puVar12 = uVar24;
          puVar12[1] = lStack_a0;
          puVar12[2] = CONCAT17(cStack_91,uStack_98);
          *(ulong *)((long)puVar12 + 0x17) = CONCAT71(uStack_90,cStack_91);
          *(char *)((long)puVar12 + 0x1f) = cStack_89;
          puVar12 = puVar12 + 4;
        }
        else {
          lVar19 = (long)puVar12 - *plVar8;
          uVar7 = (lVar19 >> 5) + 1;
          if (uVar7 >> 0x3b != 0) {
            FUN_10a9c9320();
            goto LAB_10a9c56b0;
          }
          uVar14 = plVar6[0xc] - *plVar8;
          uVar16 = (long)uVar14 >> 4;
          if (uVar16 <= uVar7) {
            uVar16 = uVar7;
          }
          if (0x7fffffffffffffdf < uVar14) {
            uVar16 = 0x7ffffffffffffff;
          }
          plStack_80 = plVar8;
          FUN_10a9c9334();
          puVar9 = (undefined8 *)(uVar16 + lVar19);
          lVar19 = (long)puVar10 * 0x20;
          *puVar9 = uVar24;
          puVar9[1] = lVar17;
          puVar9[2] = CONCAT17(cStack_71,uStack_78);
          *(ulong *)((long)puVar9 + 0x17) = CONCAT71(uStack_70,cStack_71);
          *(char *)((long)puVar9 + 0x1f) = cVar3;
          puVar12 = puVar9 + 4;
          puVar10 = (undefined *)plVar6[0xb];
          lVar17 = (long)puVar9 + (plVar6[10] - (long)puVar10);
          func_0x00010a9c9368(plVar6[10],puVar10,lVar17);
          lStack_a0 = plVar6[10];
          plVar6[10] = lVar17;
          plVar6[0xb] = (long)puVar12;
          lStack_88 = plVar6[0xc];
          plVar6[0xc] = uVar16 + lVar19;
          uStack_90 = (undefined7)lStack_a0;
          cStack_89 = (char)((ulong)lStack_a0 >> 0x38);
          uStack_98 = uStack_90;
          cStack_91 = cStack_89;
          func_0x00010a9c93e0(&lStack_a0);
        }
        plVar6[0xb] = (long)puVar12;
        puVar18 = puVar18 + 2;
      } while (puVar18 != puVar23);
    }
    plVar8 = plVar6 + 0xd;
    lVar19 = *plVar8;
    iVar11 = *(int *)(param_1 + 7);
    lVar17 = (long)iVar11;
    if ((ulong)((plVar6[0xf] - lVar19 >> 3) * -0x3333333333333333) < (ulong)(long)iVar11) {
      if (iVar11 < 0) {
        FUN_10a9c9440();
        goto LAB_10a9c56b0;
      }
      lVar20 = plVar6[0xe];
      plStack_80 = plVar8;
      FUN_10a9c9454();
      lVar19 = lVar17 + (lVar20 - lVar19);
      lVar20 = lVar19 + (plVar6[0xd] - plVar6[0xe]);
      func_0x00010a9c9498(plVar6[0xd],plVar6[0xe],lVar20);
      lStack_a0 = plVar6[0xd];
      plVar6[0xd] = lVar20;
      plVar6[0xe] = lVar19;
      lStack_88 = plVar6[0xf];
      plVar6[0xf] = lVar17 + (long)puVar10 * 0x28;
      uStack_90 = (undefined7)lStack_a0;
      cStack_89 = (char)((ulong)lStack_a0 >> 0x38);
      uStack_98 = uStack_90;
      cStack_91 = cStack_89;
      func_0x00010a9c9518(&lStack_a0);
      iVar11 = *(int *)(param_1 + 7);
    }
    if (iVar11 != 0) {
      puVar18 = (undefined8 *)param_1[6];
      puVar23 = puVar18 + (long)iVar11 * 3;
      do {
        uVar24 = *puVar18;
        lVar19 = puVar18[1];
        func_0x000107c2b054(&lStack_a0);
        cVar3 = cStack_89;
        lVar17 = lStack_a0;
        iVar11 = *(int *)(puVar18 + 2);
        uStack_78 = uStack_98;
        cStack_71 = cStack_91;
        uStack_70 = uStack_90;
        puVar12 = (undefined8 *)plVar6[0xe];
        if (puVar12 < (undefined8 *)plVar6[0xf]) {
          *puVar12 = uVar24;
          puVar12[1] = lStack_a0;
          puVar12[2] = CONCAT17(cStack_91,uStack_98);
          *(ulong *)((long)puVar12 + 0x17) = CONCAT71(uStack_90,cStack_91);
          *(char *)((long)puVar12 + 0x1f) = cStack_89;
          *(bool *)(puVar12 + 4) = iVar11 != 0;
          puVar12 = puVar12 + 5;
        }
        else {
          lVar20 = (long)puVar12 - *plVar8;
          uVar7 = (lVar20 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar7) {
            FUN_10a9c9440();
            goto LAB_10a9c56b0;
          }
          lVar13 = plVar6[0xf] - *plVar8 >> 3;
          uVar16 = lVar13 * -0x6666666666666666;
          if (uVar16 < uVar7 || uVar16 - uVar7 == 0) {
            uVar16 = uVar7;
          }
          if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
            uVar16 = 0x666666666666666;
          }
          plStack_80 = plVar8;
          FUN_10a9c9454();
          puVar9 = (undefined8 *)(uVar16 + lVar20);
          *puVar9 = uVar24;
          puVar9[1] = lVar17;
          puVar9[2] = CONCAT17(cStack_71,uStack_78);
          *(ulong *)((long)puVar9 + 0x17) = CONCAT71(uStack_70,cStack_71);
          *(char *)((long)puVar9 + 0x1f) = cVar3;
          *(bool *)(puVar9 + 4) = iVar11 != 0;
          puVar12 = puVar9 + 5;
          lVar17 = (long)puVar9 + (plVar6[0xd] - plVar6[0xe]);
          func_0x00010a9c9498(plVar6[0xd],plVar6[0xe],lVar17);
          lStack_a0 = plVar6[0xd];
          plVar6[0xd] = lVar17;
          plVar6[0xe] = (long)puVar12;
          lStack_88 = plVar6[0xf];
          plVar6[0xf] = uVar16 + lVar19 * 0x28;
          uStack_90 = (undefined7)lStack_a0;
          cStack_89 = (char)((ulong)lStack_a0 >> 0x38);
          uStack_98 = uStack_90;
          cStack_91 = cStack_89;
          func_0x00010a9c9518(&lStack_a0);
        }
        plVar6[0xe] = (long)puVar12;
        puVar18 = puVar18 + 3;
      } while (puVar18 != puVar23);
    }
    plVar8 = (long *)param_2[1];
    if (plVar8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_70 = SUB87(plVar8,0);
      uStack_69 = (undefined1)((ulong)plVar8 >> 0x38);
      if (plVar8 != (long *)0x0) {
        lVar17 = *param_2;
        uStack_78 = (undefined7)lVar17;
        cStack_71 = (char)((ulong)lVar17 >> 0x38);
        if (lVar17 != 0) {
          *(int *)(lVar17 + 0x214) = *(int *)(lVar17 + 0x214) + 1;
          lVar19 = *(long *)(lVar17 + 0x120);
          func_0x000107c2b054(&lStack_a0,&UNK_10f688c5f);
          if (lVar19 != 0) {
            FUN_10a76bd40(*(undefined8 *)(lVar19 + 0x8d8),&lStack_a0,*(undefined4 *)(lVar17 + 0x214)
                         );
          }
          if (cStack_89 < '\0') {
            __ZdlPv(lStack_a0);
          }
          __ZNSt3__15mutex4lockEv(lVar17 + 0x268);
          puVar18 = *(undefined8 **)(lVar17 + 0x200);
          if (puVar18 < *(undefined8 **)(lVar17 + 0x208)) {
            *puVar18 = plVar22;
            puVar18[1] = plVar6;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar4) {
                *plVar21 = *plVar21 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            puVar18[2] = param_4;
            puVar18[3] = param_3;
            puVar18 = puVar18 + 4;
          }
          else {
            lVar19 = (long)puVar18 - *(long *)(lVar17 + 0x1f8);
            uVar7 = (lVar19 >> 5) + 1;
            if (uVar7 >> 0x3b != 0) {
              FUN_10a9c9578();
              goto LAB_10a9c56b0;
            }
            uVar14 = (long)*(undefined8 **)(lVar17 + 0x208) - *(long *)(lVar17 + 0x1f8);
            uVar16 = (long)uVar14 >> 4;
            if (uVar16 <= uVar7) {
              uVar16 = uVar7;
            }
            if (0x7fffffffffffffdf < uVar14) {
              uVar16 = 0x7ffffffffffffff;
            }
            if (uVar16 >> 0x3b != 0) {
              func_0x000109ffded8();
              goto LAB_10a9c56b0;
            }
            lVar20 = uVar16 << 5;
            __Znwm();
            puVar23 = (undefined8 *)(lVar20 + lVar19);
            *puVar23 = plVar22;
            puVar23[1] = plVar6;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar4) {
                *plVar21 = *plVar21 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            puVar9 = *(undefined8 **)(lVar17 + 0x1f8);
            puVar2 = *(undefined8 **)(lVar17 + 0x200);
            puVar23[2] = param_4;
            puVar23[3] = param_3;
            puVar18 = puVar23 + 4;
            puVar23 = (undefined8 *)((long)puVar23 + ((long)puVar9 - (long)puVar2));
            puVar12 = puVar9;
            puVar15 = puVar23;
            if ((long)puVar9 - (long)puVar2 != 0) {
              do {
                uVar24 = *puVar12;
                puVar15[1] = puVar12[1];
                *puVar15 = uVar24;
                *puVar12 = 0;
                puVar12[1] = 0;
                uVar24 = puVar12[2];
                puVar15[3] = puVar12[3];
                puVar15[2] = uVar24;
                puVar12 = puVar12 + 4;
                puVar15 = puVar15 + 4;
              } while (puVar12 != puVar2);
              do {
                func_0x00010a9c99f8();
                puVar9 = puVar9 + 4;
              } while (puVar9 != puVar2);
              puVar9 = *(undefined8 **)(lVar17 + 0x1f8);
            }
            *(undefined8 **)(lVar17 + 0x1f8) = puVar23;
            *(undefined8 **)(lVar17 + 0x200) = puVar18;
            *(ulong *)(lVar17 + 0x208) = lVar20 + uVar16 * 0x20;
            if (puVar9 != (undefined8 *)0x0) {
              __ZdlPv();
              plVar8 = (long *)CONCAT17(uStack_69,uStack_70);
            }
          }
          *(undefined8 **)(lVar17 + 0x200) = puVar18;
          *(undefined1 *)(lVar17 + 0x2a8) = 1;
          __ZNSt3__15mutex6unlockEv(lVar17 + 0x268);
          if (plVar8 == (long *)0x0) goto LAB_10a9c5608;
        }
        plVar21 = plVar8 + 1;
        do {
          lVar17 = *plVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *plVar21 = lVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
LAB_10a9c5608:
    if (plVar6 != (long *)0x0) {
      plVar21 = plVar6 + 1;
      do {
        lVar17 = *plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *plVar21 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    func_0x00010a9d5ea8(&plStack_a8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a9c9320();
LAB_10a9c56b0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9c56b4);
  (*pcVar5)();
}



/* Entry: 10a9c5750; end: 10a9c583f;  */

undefined8 * FUN_10a9c5750(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a9c5840; end: 10a9c5897;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a9c5840(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x2f)) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x28);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a9c5898; end: 10a9c6527;  */

void FUN_10a9c5898(long param_1)

{
  code *pcVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  code cVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  code *unaff_x19;
  long lVar23;
  long unaff_x20;
  long *plVar24;
  long unaff_x21;
  undefined8 *puVar25;
  undefined1 *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  code *unaff_x25;
  long *unaff_x26;
  undefined8 uVar26;
  long *plVar27;
  code *unaff_x27;
  code *pcVar28;
  code *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 unaff_d8;
  long unaff_d9;
  
  puVar11 = (undefined1 *)register0x00000008;
  do {
    *(long *)(puVar11 + -0x70) = unaff_d9;
    *(undefined8 *)(puVar11 + -0x68) = unaff_d8;
    *(code **)(puVar11 + -0x60) = unaff_x28;
    *(code **)(puVar11 + -0x58) = unaff_x27;
    *(long **)(puVar11 + -0x50) = unaff_x26;
    *(code **)(puVar11 + -0x48) = unaff_x25;
    *(ulong *)(puVar11 + -0x40) = unaff_x24;
    *(long **)(puVar11 + -0x38) = unaff_x23;
    *(undefined1 **)(puVar11 + -0x30) = unaff_x22;
    *(long *)(puVar11 + -0x28) = unaff_x21;
    *(long *)(puVar11 + -0x20) = unaff_x20;
    *(code **)(puVar11 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar11 + -0x10) = unaff_x29;
    *(code **)(puVar11 + -8) = unaff_x30;
    unaff_x29 = puVar11 + -0x10;
    puVar12 = puVar11 + -0x210;
    *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar13 = (long *)(param_1 + 0x268);
    __ZNSt3__15mutex4lockEv(plVar13);
    unaff_x23 = *(long **)(param_1 + 0x1f8);
    plVar24 = *(long **)(param_1 + 0x200);
    unaff_x21 = param_1;
    if (unaff_x23 != plVar24) {
      unaff_x22 = puVar11 + -400;
      unaff_d8 = 0x100000001;
      *(long *)(puVar11 + -0x210) = param_1;
      do {
        puVar19 = (undefined8 *)*unaff_x23;
        if (*(char *)(puVar19 + 3) == '\x01') {
          plVar13 = (long *)unaff_x23[3];
          if (plVar13 == (long *)0x0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f68858d,&UNK_10f688892,0x118,&UNK_10f6888d8);
            }
            goto LAB_10a9c621c;
          }
          FUN_10a25f92c(plVar13,(long)puVar19 + 0x1c,puVar19 + 4);
        }
        else {
          if (*(char *)((long)puVar19 + 0x17) < '\0') {
            plVar13 = (long *)(puVar11 + -0x160);
            func_0x000107c3192c(plVar13,*puVar19,puVar19[1]);
          }
          else {
            uVar21 = puVar19[1];
            uVar26 = *puVar19;
            *(undefined8 *)(puVar11 + -0x150) = puVar19[2];
            *(undefined8 *)(puVar11 + -0x158) = uVar21;
            *(undefined8 *)(puVar11 + -0x160) = uVar26;
          }
          func_0x00010ad0321c();
          func_0x000107c2b054(puVar11 + -0x140,&UNK_10f688906);
          FUN_10ad016b8(puVar11 + -0x178,plVar13,puVar11 + -0x140);
          if ((char)puVar11[-0x129] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar11 + -0x140));
          }
          FUN_10a0ff18c(puVar11 + -0x140,puVar11 + -0x178,2);
          FUN_10a08d2e0(puVar11 + -400,puVar11 + -0x140);
          if ((char)puVar11[-0x111] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar11 + -0x128));
          }
          if ((char)puVar11[-0x129] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar11 + -0x140));
          }
          uVar15 = *(ulong *)(puVar11 + -0x158);
          puVar16 = *(undefined1 **)(puVar11 + -0x160);
          if (-1 < (char)puVar11[-0x149]) {
            uVar15 = (ulong)(byte)puVar11[-0x149];
            puVar16 = puVar11 + -0x160;
          }
          FUN_10ad00d7c(puVar11 + -400,puVar16,uVar15);
          uVar26 = *(undefined8 *)(unaff_x21 + 0x120);
          puVar14 = (undefined8 *)0x168;
          __Znwm();
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar19 = puVar14 + 3;
          *puVar14 = &PTR_FUN_110bc75c0;
          FUN_10ac584d0(puVar19,uVar26);
          *(undefined8 **)(puVar11 + -0x1a0) = puVar19;
          *(undefined8 **)(puVar11 + -0x198) = puVar14;
          FUN_10a37e280(puVar11 + -0x1a0,puVar14 + 0xb,puVar19);
          FUN_10ac587e4(*(undefined8 *)(puVar11 + -0x1a0),puVar11 + -400);
          plVar13 = *(long **)(puVar11 + -0x1a0);
          *(undefined1 *)(plVar13 + 0x15) = 1;
          (**(code **)(*plVar13 + 0x68))(plVar13,2);
          puVar16 = puVar11 + -0x1a0;
          FUN_10a37e130(puVar11 + -0x1b0,*(undefined8 *)(unaff_x21 + 0x120));
          lVar23 = *(long *)(puVar11 + -0x1b0);
          if ((char)puVar11[-0x179] < '\0') {
            puVar16 = *(undefined1 **)(puVar11 + -400);
            func_0x000107c3192c(puVar11 + -0x1d0,puVar16,*(undefined8 *)(puVar11 + -0x188));
          }
          else {
            *(undefined8 *)(puVar11 + -0x1c8) = *(undefined8 *)(puVar11 + -0x188);
            *(undefined8 *)(puVar11 + -0x1d0) = *(undefined8 *)(puVar11 + -400);
            *(undefined8 *)(puVar11 + -0x1c0) = *(undefined8 *)(puVar11 + -0x180);
          }
          if (*(char *)(lVar23 + 0x6f) < '\0') {
            __ZdlPv(*(undefined8 *)(lVar23 + 0x58));
          }
          uVar26 = *(undefined8 *)(puVar11 + -0x1d0);
          *(undefined8 *)(lVar23 + 0x60) = *(undefined8 *)(puVar11 + -0x1c8);
          *(undefined8 *)(lVar23 + 0x58) = uVar26;
          *(undefined8 *)(lVar23 + 0x68) = *(undefined8 *)(puVar11 + -0x1c0);
          puVar11[-0x1b9] = 0;
          puVar11[-0x1d0] = 0;
          lVar23 = *unaff_x23;
          *(undefined8 *)(puVar11 + -0x1e8) = 0;
          *(undefined8 *)(puVar11 + -0x1e0) = 0;
          *(undefined8 *)(puVar11 + -0x1d8) = 0;
          pcVar10 = *(code **)(lVar23 + 0x38);
          pcVar28 = *(code **)(lVar23 + 0x40);
          if ((long)pcVar28 - (long)pcVar10 != 0) {
            uVar15 = (long)pcVar28 - (long)pcVar10 >> 5;
            if (uVar15 >> 0x3c != 0) {
              FUN_10a9c8f0c();
              goto LAB_10a9c62b4;
            }
            *(undefined1 **)(puVar11 + -0x120) = puVar11 + -0x1e8;
            FUN_10a9c8f20();
            lVar18 = (long)puVar16 * 0x10;
            puVar16 = *(undefined1 **)(puVar11 + -0x1e8);
            lVar17 = *(long *)(puVar11 + -0x1e0) - (long)puVar16;
            _memcpy(uVar15 - lVar17);
            uVar26 = *(undefined8 *)(puVar11 + -0x1e8);
            uVar21 = *(undefined8 *)(puVar11 + -0x1d8);
            *(ulong *)(puVar11 + -0x1e8) = uVar15 - lVar17;
            *(ulong *)(puVar11 + -0x1e0) = uVar15;
            *(ulong *)(puVar11 + -0x1d8) = uVar15 + lVar18;
            *(undefined8 *)(puVar11 + -0x130) = uVar26;
            *(undefined8 *)(puVar11 + -0x128) = uVar21;
            *(undefined8 *)(puVar11 + -0x140) = uVar26;
            *(undefined8 *)(puVar11 + -0x138) = uVar26;
            func_0x00010a9c8f54(puVar11 + -0x140);
            pcVar10 = *(code **)(lVar23 + 0x38);
            pcVar28 = *(code **)(lVar23 + 0x40);
          }
          if (pcVar10 != pcVar28) {
            pcVar10 = pcVar10 + 8;
            do {
              unaff_d9 = *(long *)(pcVar10 + -8);
              puVar19 = (undefined8 *)0x50;
              __Znwm();
              puVar19[1] = 0;
              puVar19[2] = 0;
              *puVar19 = &PTR_FUN_110c36118;
              puVar14 = puVar19 + 3;
              *puVar14 = &PTR_DAT_110c35e80;
              puVar19[4] = 0;
              puVar19[5] = 0;
              puVar19[6] = unaff_d9;
              if ((char)pcVar10[0x17] < '\0') {
                puVar16 = *(undefined1 **)pcVar10;
                func_0x000107c3192c(puVar19 + 7,puVar16,*(long *)(pcVar10 + 8));
              }
              else {
                lVar18 = *(long *)(pcVar10 + 8);
                lVar23 = *(long *)pcVar10;
                puVar19[9] = *(long *)(pcVar10 + 0x10);
                puVar19[8] = lVar18;
                puVar19[7] = lVar23;
              }
              *(undefined8 **)(puVar11 + -200) = puVar14;
              *(undefined8 **)(puVar11 + -0xc0) = puVar19;
              puVar25 = *(undefined8 **)(puVar11 + -0x1e0);
              if (puVar25 < *(undefined8 **)(puVar11 + -0x1d8)) {
                *puVar25 = puVar14;
                puVar25[1] = puVar19;
                puVar25 = puVar25 + 2;
              }
              else {
                lVar23 = (long)puVar25 - *(long *)(puVar11 + -0x1e8);
                uVar15 = (lVar23 >> 4) + 1;
                if (uVar15 >> 0x3c != 0) {
                  FUN_10a9c8f0c();
                  goto LAB_10a9c62b4;
                }
                uVar20 = (long)*(undefined8 **)(puVar11 + -0x1d8) - *(long *)(puVar11 + -0x1e8);
                uVar22 = (long)uVar20 >> 3;
                if (uVar22 <= uVar15) {
                  uVar22 = uVar15;
                }
                if (0x7fffffffffffffef < uVar20) {
                  uVar22 = 0xfffffffffffffff;
                }
                *(undefined1 **)(puVar11 + -0x120) = puVar11 + -0x1e8;
                FUN_10a9c8f20();
                puVar4 = (undefined8 *)(uVar22 + lVar23);
                unaff_x24 = uVar22 + (long)puVar16 * 0x10;
                *puVar4 = puVar14;
                puVar4[1] = puVar19;
                puVar25 = puVar4 + 2;
                puVar16 = *(undefined1 **)(puVar11 + -0x1e8);
                lVar23 = *(long *)(puVar11 + -0x1e0) - (long)puVar16;
                _memcpy((long)puVar4 - lVar23);
                uVar26 = *(undefined8 *)(puVar11 + -0x1e8);
                uVar21 = *(undefined8 *)(puVar11 + -0x1d8);
                *(long *)(puVar11 + -0x1e8) = (long)puVar4 - lVar23;
                *(undefined8 **)(puVar11 + -0x1e0) = puVar25;
                *(ulong *)(puVar11 + -0x1d8) = unaff_x24;
                *(undefined8 *)(puVar11 + -0x130) = uVar26;
                *(undefined8 *)(puVar11 + -0x128) = uVar21;
                *(undefined8 *)(puVar11 + -0x140) = uVar26;
                *(undefined8 *)(puVar11 + -0x138) = uVar26;
                func_0x00010a9c8f54(puVar11 + -0x140);
              }
              *(undefined8 **)(puVar11 + -0x1e0) = puVar25;
              unaff_x28 = pcVar10 + 0x20;
              pcVar1 = pcVar10 + 0x18;
              pcVar10 = unaff_x28;
            } while (pcVar1 != pcVar28);
          }
          unaff_x19 = (code *)*unaff_x23;
          *(undefined8 *)(puVar11 + -0x200) = 0;
          *(undefined8 *)(puVar11 + -0x1f8) = 0;
          *(undefined8 *)(puVar11 + -0x1f0) = 0;
          pcVar10 = *(code **)(unaff_x19 + 0x50);
          unaff_x27 = *(code **)(unaff_x19 + 0x58);
          if ((long)unaff_x27 - (long)pcVar10 != 0) {
            uVar15 = ((long)unaff_x27 - (long)pcVar10 >> 3) * -0x3333333333333333;
            if (uVar15 >> 0x3c != 0) {
              FUN_10a9c9094();
LAB_10a9c62b4:
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10a9c62b8);
              (*pcVar10)();
            }
            *(undefined1 **)(puVar11 + -0x120) = puVar11 + -0x200;
            FUN_10a9c90a8();
            lVar23 = (long)puVar16 * 0x10;
            puVar16 = *(undefined1 **)(puVar11 + -0x200);
            lVar18 = *(long *)(puVar11 + -0x1f8) - (long)puVar16;
            _memcpy(uVar15 - lVar18);
            uVar26 = *(undefined8 *)(puVar11 + -0x200);
            uVar21 = *(undefined8 *)(puVar11 + -0x1f0);
            *(ulong *)(puVar11 + -0x200) = uVar15 - lVar18;
            *(ulong *)(puVar11 + -0x1f8) = uVar15;
            *(ulong *)(puVar11 + -0x1f0) = uVar15 + lVar23;
            *(undefined8 *)(puVar11 + -0x130) = uVar26;
            *(undefined8 *)(puVar11 + -0x128) = uVar21;
            *(undefined8 *)(puVar11 + -0x140) = uVar26;
            *(undefined8 *)(puVar11 + -0x138) = uVar26;
            func_0x00010a9c90dc(puVar11 + -0x140);
            pcVar10 = *(code **)(unaff_x19 + 0x50);
            unaff_x27 = *(code **)(unaff_x19 + 0x58);
          }
          if (pcVar10 != unaff_x27) {
            pcVar10 = pcVar10 + 8;
            do {
              unaff_x28 = pcVar10 + -8;
              unaff_d9 = *(long *)unaff_x28;
              cVar7 = pcVar10[0x18];
              unaff_x24 = (ulong)(byte)cVar7;
              puVar19 = (undefined8 *)0x58;
              __Znwm();
              puVar19[1] = 0;
              puVar19[2] = 0;
              *puVar19 = &PTR_FUN_110c36168;
              puVar14 = puVar19 + 3;
              *puVar14 = &PTR_DAT_110c35ef0;
              puVar19[4] = 0;
              puVar19[5] = 0;
              puVar19[6] = unaff_d9;
              if ((char)pcVar10[0x17] < '\0') {
                puVar16 = *(undefined1 **)pcVar10;
                func_0x000107c3192c(puVar19 + 7,puVar16,*(long *)(pcVar10 + 8));
              }
              else {
                lVar18 = *(long *)(pcVar10 + 8);
                lVar23 = *(long *)pcVar10;
                puVar19[9] = *(long *)(pcVar10 + 0x10);
                puVar19[8] = lVar18;
                puVar19[7] = lVar23;
              }
              *(byte *)(puVar19 + 10) = (byte)cVar7 & 1;
              *(undefined8 **)(puVar11 + -200) = puVar14;
              *(undefined8 **)(puVar11 + -0xc0) = puVar19;
              puVar25 = *(undefined8 **)(puVar11 + -0x1f8);
              if (puVar25 < *(undefined8 **)(puVar11 + -0x1f0)) {
                *puVar25 = puVar14;
                puVar25[1] = puVar19;
                puVar25 = puVar25 + 2;
              }
              else {
                lVar23 = (long)puVar25 - *(long *)(puVar11 + -0x200);
                uVar15 = (lVar23 >> 4) + 1;
                if (uVar15 >> 0x3c != 0) {
                  FUN_10a9c9094();
                  goto LAB_10a9c62b4;
                }
                uVar20 = (long)*(undefined8 **)(puVar11 + -0x1f0) - *(long *)(puVar11 + -0x200);
                uVar22 = (long)uVar20 >> 3;
                if (uVar22 <= uVar15) {
                  uVar22 = uVar15;
                }
                if (0x7fffffffffffffef < uVar20) {
                  uVar22 = 0xfffffffffffffff;
                }
                *(undefined1 **)(puVar11 + -0x120) = puVar11 + -0x200;
                FUN_10a9c90a8();
                puVar4 = (undefined8 *)(uVar22 + lVar23);
                unaff_x24 = uVar22 + (long)puVar16 * 0x10;
                *puVar4 = puVar14;
                puVar4[1] = puVar19;
                puVar25 = puVar4 + 2;
                puVar16 = *(undefined1 **)(puVar11 + -0x200);
                lVar23 = *(long *)(puVar11 + -0x1f8) - (long)puVar16;
                _memcpy((long)puVar4 - lVar23);
                uVar26 = *(undefined8 *)(puVar11 + -0x200);
                uVar21 = *(undefined8 *)(puVar11 + -0x1f0);
                *(long *)(puVar11 + -0x200) = (long)puVar4 - lVar23;
                *(undefined8 **)(puVar11 + -0x1f8) = puVar25;
                *(ulong *)(puVar11 + -0x1f0) = unaff_x24;
                *(undefined8 *)(puVar11 + -0x130) = uVar26;
                *(undefined8 *)(puVar11 + -0x128) = uVar21;
                *(undefined8 *)(puVar11 + -0x140) = uVar26;
                *(undefined8 *)(puVar11 + -0x138) = uVar26;
                func_0x00010a9c90dc(puVar11 + -0x140);
              }
              *(undefined8 **)(puVar11 + -0x1f8) = puVar25;
              unaff_x19 = pcVar10 + 0x28;
              pcVar28 = pcVar10 + 0x20;
              pcVar10 = unaff_x19;
            } while (pcVar28 != unaff_x27);
          }
          unaff_x21 = *(long *)(puVar11 + -0x210);
          lVar23 = lRam00000001137ebfb8;
          FUN_10a9c4bf8(unaff_x21,lRam00000001137ebfb8,uRam00000001137ebfc0,
                        *(undefined4 *)(*unaff_x23 + 0x68));
          unaff_x25 = (code *)unaff_x23[2];
          if (unaff_x25 == (code *)0x0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f68858d,&UNK_10f688892,0x131,&UNK_10f68890a);
            }
          }
          else {
            uVar5 = *(uint *)(*unaff_x23 + 0x68);
            unaff_x28 = (code *)(ulong)uVar5;
            puVar11[-0x201] = (char)uVar5;
            if (unaff_x25[0x40] == (code)0x1) {
              unaff_x19 = *(code **)unaff_x25;
              *(undefined8 *)(puVar11 + -0xd8) = *(undefined8 *)(puVar11 + -0x1a8);
              *(undefined8 *)(puVar11 + -0xe0) = *(undefined8 *)(puVar11 + -0x1b0);
              if (*(long *)(puVar11 + -0x1a8) != 0) {
                plVar13 = (long *)(*(long *)(puVar11 + -0x1a8) + 8);
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar9) {
                    *plVar13 = *plVar13 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              *(undefined8 *)(puVar11 + -0x140) = 0;
              *(undefined8 *)(puVar11 + -0x138) = 0;
              *(undefined8 *)(puVar11 + -0x130) = 0;
              FUN_10a9d65c0(puVar11 + -0x140,*(long *)(puVar11 + -0x1e8),*(long *)(puVar11 + -0x1e0)
                            ,*(long *)(puVar11 + -0x1e0) - *(long *)(puVar11 + -0x1e8) >> 4);
              *(undefined8 *)(puVar11 + -200) = 0;
              *(undefined8 *)(puVar11 + -0xc0) = 0;
              *(undefined8 *)(puVar11 + -0xb8) = 0;
              FUN_10a9d6664(puVar11 + -200,*(long *)(puVar11 + -0x200),*(long *)(puVar11 + -0x1f8),
                            *(long *)(puVar11 + -0x1f8) - *(long *)(puVar11 + -0x200) >> 4);
              (*unaff_x19)(puVar11 + -0xe0,puVar11 + -0x140,puVar11 + -200,uVar5 & 0xff,unaff_x25);
              FUN_10a9c91c0(puVar11 + -200);
              FUN_10a9c9038(puVar11 + -0x140);
              plVar13 = *(long **)(puVar11 + -0xd8);
              if (plVar13 != (long *)0x0) {
                plVar27 = plVar13 + 1;
                do {
                  lVar23 = *plVar27;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar9) {
                    *plVar27 = lVar23 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
LAB_10a9c5f74:
                if (lVar23 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                }
              }
            }
            else {
              unaff_x19 = (code *)(puVar11 + -0x140);
              if (unaff_x25[0x40] == (code)0x2) {
                pcVar10 = unaff_x25;
                FUN_10a688b40();
                if (pcVar10 == (code *)0x0) {
                  if (lVar23 != 0) {
                    lVar18 = *(long *)(unaff_x25 + 8);
                    lVar17 = *(long *)unaff_x25;
                    *(long *)(puVar11 + -0x138) = *(long *)(unaff_x25 + 8);
                    *(long *)(puVar11 + -0x140) = lVar17;
                    if (lVar18 != 0) {
                      plVar13 = (long *)(lVar18 + 8);
                      do {
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar9) {
                          *plVar13 = *plVar13 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    *(undefined8 *)(puVar11 + -0x128) = *(undefined8 *)(puVar11 + -0x1a8);
                    *(undefined8 *)(puVar11 + -0x130) = *(undefined8 *)(puVar11 + -0x1b0);
                    if (*(long *)(puVar11 + -0x1a8) != 0) {
                      plVar13 = (long *)(*(long *)(puVar11 + -0x1a8) + 8);
                      do {
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar9) {
                          *plVar13 = *plVar13 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    *(undefined8 *)(puVar11 + -0x120) = 0;
                    *(undefined8 *)(puVar11 + -0x118) = 0;
                    *(undefined8 *)(puVar11 + -0x110) = 0;
                    FUN_10a9d65c0(puVar11 + -0x120,*(long *)(puVar11 + -0x1e8),
                                  *(long *)(puVar11 + -0x1e0),
                                  *(long *)(puVar11 + -0x1e0) - *(long *)(puVar11 + -0x1e8) >> 4);
                    *(undefined8 *)(puVar11 + -0x108) = 0;
                    *(undefined8 *)(puVar11 + -0x100) = 0;
                    *(undefined8 *)(puVar11 + -0xf8) = 0;
                    FUN_10a9d6664(puVar11 + -0x108,*(long *)(puVar11 + -0x200),
                                  *(long *)(puVar11 + -0x1f8),
                                  *(long *)(puVar11 + -0x1f8) - *(long *)(puVar11 + -0x200) >> 4);
                    puVar11[-0xf0] = (char)uVar5;
                    *(code **)(puVar11 + -200) = FUN_10a9d6708;
                    *(undefined ***)(puVar11 + -0xc0) = &PTR_FUN_110c366a0;
                    unaff_x27 = (code *)0x58;
                    __Znwm();
                    lVar29 = *(long *)(puVar11 + -0x138);
                    lVar17 = *(long *)(puVar11 + -0x140);
                    lVar31 = *(long *)(puVar11 + -0x128);
                    lVar30 = *(long *)(puVar11 + -0x130);
                    *(undefined8 *)(puVar11 + -0x140) = 0;
                    *(undefined8 *)(puVar11 + -0x138) = 0;
                    lVar18 = *(long *)(puVar11 + -0x128);
                    *(long *)(unaff_x27 + 8) = lVar29;
                    *(long *)unaff_x27 = lVar17;
                    *(long *)(unaff_x27 + 0x18) = lVar31;
                    *(long *)(unaff_x27 + 0x10) = lVar30;
                    if (lVar18 != 0) {
                      plVar13 = (long *)(lVar18 + 8);
                      do {
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar9) {
                          *plVar13 = *plVar13 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    unaff_x28 = unaff_x27 + 0x20;
                    *(long *)unaff_x28 = 0;
                    *(long *)(unaff_x27 + 0x28) = 0;
                    *(long *)(unaff_x27 + 0x30) = 0;
                    FUN_10a9d65c0(unaff_x28,*(long *)(puVar11 + -0x120),*(long *)(puVar11 + -0x118),
                                  *(long *)(puVar11 + -0x118) - *(long *)(puVar11 + -0x120) >> 4);
                    *(long *)(unaff_x27 + 0x38) = 0;
                    *(long *)(unaff_x27 + 0x40) = 0;
                    *(long *)(unaff_x27 + 0x48) = 0;
                    FUN_10a9d6664();
                    unaff_x27[0x50] = (code)puVar11[-0xf0];
                    *(code **)(puVar11 + -0xb8) = unaff_x27;
                    FUN_10a4634ec(lVar23,puVar11 + -200);
                    (*(code *)**(undefined8 **)(puVar11 + -0xc0))(puVar11 + -0xc0);
                    FUN_10a9c91c0(puVar11 + -0x108);
                    FUN_10a9c9038(puVar11 + -0x120);
                    plVar13 = *(long **)(puVar11 + -0x128);
                    if (plVar13 != (long *)0x0) {
                      plVar27 = plVar13 + 1;
                      do {
                        lVar23 = *plVar27;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                        if (bVar9) {
                          *plVar27 = lVar23 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (lVar23 == 0) {
                        (**(code **)(*plVar13 + 0x10))(plVar13);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                      }
                    }
                    plVar13 = *(long **)(puVar11 + -0x138);
                    if (plVar13 != (long *)0x0) {
                      plVar27 = plVar13 + 1;
                      do {
                        lVar23 = *plVar27;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                        if (bVar9) {
                          *plVar27 = lVar23 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      goto LAB_10a9c5f74;
                    }
                  }
                }
                else {
                  *(long *)pcVar10 =
                       CONCAT44((int)((ulong)*(long *)pcVar10 >> 0x20) + 1,(int)*(long *)pcVar10 + 1
                               );
                  FUN_10a9d60d8(*(long *)unaff_x25,puVar11 + -0x1b0,puVar11 + -0x1e8,
                                puVar11 + -0x200,puVar11 + -0x201);
                  iVar6 = *(int *)(pcVar10 + 4);
                  *(int *)(pcVar10 + 4) = iVar6 + -1;
                  unaff_x27 = pcVar10;
                  if (iVar6 + -1 == 0) {
                    *(undefined4 *)pcVar10 = 0;
                  }
                }
              }
            }
            unaff_x21 = *(long *)(puVar11 + -0x210);
          }
          FUN_10a9c91c0(puVar11 + -0x200);
          plVar13 = (long *)(puVar11 + -0x1e8);
          FUN_10a9c9038();
          plVar27 = *(long **)(puVar11 + -0x1a8);
          if (plVar27 != (long *)0x0) {
            plVar2 = plVar27 + 1;
            do {
              lVar23 = *plVar2;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *plVar2 = lVar23 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              plVar13 = plVar27;
            }
          }
          unaff_x26 = *(long **)(puVar11 + -0x198);
          if (unaff_x26 != (long *)0x0) {
            plVar27 = unaff_x26 + 1;
            do {
              lVar23 = *plVar27;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar9) {
                *plVar27 = lVar23 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*unaff_x26 + 0x10))(unaff_x26);
              plVar13 = unaff_x26;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          if ((char)puVar11[-0x179] < '\0') {
            plVar13 = *(long **)(puVar11 + -400);
            __ZdlPv();
          }
          if ((char)puVar11[-0x161] < '\0') {
            plVar13 = *(long **)(puVar11 + -0x178);
            __ZdlPv();
          }
          if ((char)puVar11[-0x149] < '\0') {
            plVar13 = *(long **)(puVar11 + -0x160);
            __ZdlPv();
          }
          if (unaff_x25 == (code *)0x0) goto LAB_10a9c621c;
        }
        unaff_x23 = unaff_x23 + 4;
      } while (unaff_x23 != plVar24);
      unaff_x23 = *(long **)(unaff_x21 + 0x1f8);
      plVar24 = *(long **)(unaff_x21 + 0x200);
    }
    while (plVar24 != unaff_x23) {
      plVar24 = plVar24 + -4;
      func_0x00010a9c99f8(plVar24);
    }
    *(long **)(unaff_x21 + 0x200) = unaff_x23;
LAB_10a9c621c:
    unaff_x20 = unaff_x21 + 0x268;
    __ZNSt3__15mutex6unlockEv();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0x88)) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__15mutex6unlockEv(unaff_x21 + 0x268);
    unaff_x30 = FUN_10a9c6528;
    param_1 = unaff_x20;
    __Unwind_Resume();
    pcVar3 = (char *)(param_1 + 0x2a8);
    do {
      if (*pcVar3 != '\x01') {
        ClearExclusiveLocal();
        return;
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
      if (bVar9) {
        *pcVar3 = '\0';
        cVar8 = ExclusiveMonitorsStatus();
      }
      puVar11 = puVar12;
    } while (cVar8 != '\0');
  } while( true );
}



/* Entry: 10a9c6528; end: 10a9c6573;  */

void FUN_10a9c6528(long param_1)

{
  code *pcVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  code cVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  code *unaff_x19;
  long *plVar22;
  long unaff_x20;
  undefined8 *puVar23;
  long unaff_x21;
  undefined1 *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  code *unaff_x25;
  undefined8 uVar24;
  long *plVar25;
  long *unaff_x26;
  code *pcVar26;
  code *unaff_x27;
  code *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 unaff_d8;
  long unaff_d9;
  
  do {
    pcVar3 = (char *)(param_1 + 0x2a8);
    do {
      if (*pcVar3 != '\x01') {
        ClearExclusiveLocal();
        return;
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
      if (bVar9) {
        *pcVar3 = '\0';
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    *(long *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(code **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(code **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = (long *)(param_1 + 0x268);
    __ZNSt3__15mutex4lockEv(plVar11);
    unaff_x23 = *(long **)(param_1 + 0x1f8);
    plVar22 = *(long **)(param_1 + 0x200);
    unaff_x21 = param_1;
    if (unaff_x23 != plVar22) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -400);
      unaff_d8 = 0x100000001;
      *(long *)((long)register0x00000008 + -0x210) = param_1;
      do {
        puVar17 = (undefined8 *)*unaff_x23;
        if (*(char *)(puVar17 + 3) == '\x01') {
          plVar11 = (long *)unaff_x23[3];
          if (plVar11 == (long *)0x0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f68858d,&UNK_10f688892,0x118,&UNK_10f6888d8);
            }
            goto LAB_10a9c621c;
          }
          FUN_10a25f92c(plVar11,(long)puVar17 + 0x1c,puVar17 + 4);
        }
        else {
          if (*(char *)((long)puVar17 + 0x17) < '\0') {
            plVar11 = (long *)((long)register0x00000008 + -0x160);
            func_0x000107c3192c(plVar11,*puVar17,puVar17[1]);
          }
          else {
            uVar19 = puVar17[1];
            uVar24 = *puVar17;
            *(undefined8 *)((long)register0x00000008 + -0x150) = puVar17[2];
            *(undefined8 *)((long)register0x00000008 + -0x158) = uVar19;
            *(undefined8 *)((long)register0x00000008 + -0x160) = uVar24;
          }
          func_0x00010ad0321c();
          func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x140),&UNK_10f688906);
          FUN_10ad016b8((undefined1 *)((long)register0x00000008 + -0x178),plVar11,
                        (undefined1 *)((long)register0x00000008 + -0x140));
          if (*(char *)((long)register0x00000008 + -0x129) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x140));
          }
          FUN_10a0ff18c((undefined1 *)((long)register0x00000008 + -0x140),
                        (undefined1 *)((long)register0x00000008 + -0x178),2);
          FUN_10a08d2e0((undefined1 *)((long)register0x00000008 + -400),
                        (undefined1 *)((long)register0x00000008 + -0x140));
          if (*(char *)((long)register0x00000008 + -0x111) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x128));
          }
          if (*(char *)((long)register0x00000008 + -0x129) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x140));
          }
          uVar13 = *(ulong *)((long)register0x00000008 + -0x158);
          puVar14 = *(undefined1 **)((long)register0x00000008 + -0x160);
          if (-1 < (char)*(byte *)((long)register0x00000008 + -0x149)) {
            uVar13 = (ulong)*(byte *)((long)register0x00000008 + -0x149);
            puVar14 = (undefined1 *)((long)register0x00000008 + -0x160);
          }
          FUN_10ad00d7c((undefined1 *)((long)register0x00000008 + -400),puVar14,uVar13);
          uVar24 = *(undefined8 *)(unaff_x21 + 0x120);
          puVar12 = (undefined8 *)0x168;
          __Znwm();
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar17 = puVar12 + 3;
          *puVar12 = &PTR_FUN_110bc75c0;
          FUN_10ac584d0(puVar17,uVar24);
          *(undefined8 **)((long)register0x00000008 + -0x1a0) = puVar17;
          *(undefined8 **)((long)register0x00000008 + -0x198) = puVar12;
          FUN_10a37e280((undefined1 *)((long)register0x00000008 + -0x1a0),puVar12 + 0xb,puVar17);
          FUN_10ac587e4(*(undefined8 *)((long)register0x00000008 + -0x1a0),
                        (undefined1 *)((long)register0x00000008 + -400));
          plVar11 = *(long **)((long)register0x00000008 + -0x1a0);
          *(undefined1 *)(plVar11 + 0x15) = 1;
          (**(code **)(*plVar11 + 0x68))(plVar11,2);
          puVar14 = (undefined1 *)((long)register0x00000008 + -0x1a0);
          FUN_10a37e130((undefined1 *)((long)register0x00000008 + -0x1b0),
                        *(undefined8 *)(unaff_x21 + 0x120));
          lVar21 = *(long *)((long)register0x00000008 + -0x1b0);
          if (*(char *)((long)register0x00000008 + -0x179) < '\0') {
            puVar14 = *(undefined1 **)((long)register0x00000008 + -400);
            func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x1d0),puVar14,
                                *(undefined8 *)((long)register0x00000008 + -0x188));
          }
          else {
            *(undefined8 *)((long)register0x00000008 + -0x1c8) =
                 *(undefined8 *)((long)register0x00000008 + -0x188);
            *(undefined8 *)((long)register0x00000008 + -0x1d0) =
                 *(undefined8 *)((long)register0x00000008 + -400);
            *(undefined8 *)((long)register0x00000008 + -0x1c0) =
                 *(undefined8 *)((long)register0x00000008 + -0x180);
          }
          if (*(char *)(lVar21 + 0x6f) < '\0') {
            __ZdlPv(*(undefined8 *)(lVar21 + 0x58));
          }
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
          *(undefined8 *)(lVar21 + 0x60) = *(undefined8 *)((long)register0x00000008 + -0x1c8);
          *(undefined8 *)(lVar21 + 0x58) = uVar24;
          *(undefined8 *)(lVar21 + 0x68) = *(undefined8 *)((long)register0x00000008 + -0x1c0);
          *(undefined1 *)((long)register0x00000008 + -0x1b9) = 0;
          *(undefined1 *)((long)register0x00000008 + -0x1d0) = 0;
          lVar21 = *unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          pcVar10 = *(code **)(lVar21 + 0x38);
          pcVar26 = *(code **)(lVar21 + 0x40);
          if ((long)pcVar26 - (long)pcVar10 != 0) {
            uVar13 = (long)pcVar26 - (long)pcVar10 >> 5;
            if (uVar13 >> 0x3c != 0) {
              FUN_10a9c8f0c();
              goto LAB_10a9c62b4;
            }
            *(undefined1 **)((long)register0x00000008 + -0x120) =
                 (undefined1 *)((long)register0x00000008 + -0x1e8);
            FUN_10a9c8f20();
            lVar16 = (long)puVar14 * 0x10;
            puVar14 = *(undefined1 **)((long)register0x00000008 + -0x1e8);
            lVar15 = *(long *)((long)register0x00000008 + -0x1e0) - (long)puVar14;
            _memcpy(uVar13 - lVar15);
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x1e8);
            uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1d8);
            *(ulong *)((long)register0x00000008 + -0x1e8) = uVar13 - lVar15;
            *(ulong *)((long)register0x00000008 + -0x1e0) = uVar13;
            *(ulong *)((long)register0x00000008 + -0x1d8) = uVar13 + lVar16;
            *(undefined8 *)((long)register0x00000008 + -0x130) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x128) = uVar19;
            *(undefined8 *)((long)register0x00000008 + -0x140) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x138) = uVar24;
            func_0x00010a9c8f54((undefined1 *)((long)register0x00000008 + -0x140));
            pcVar10 = *(code **)(lVar21 + 0x38);
            pcVar26 = *(code **)(lVar21 + 0x40);
          }
          if (pcVar10 != pcVar26) {
            pcVar10 = pcVar10 + 8;
            do {
              unaff_d9 = *(long *)(pcVar10 + -8);
              puVar17 = (undefined8 *)0x50;
              __Znwm();
              puVar17[1] = 0;
              puVar17[2] = 0;
              *puVar17 = &PTR_FUN_110c36118;
              puVar12 = puVar17 + 3;
              *puVar12 = &PTR_DAT_110c35e80;
              puVar17[4] = 0;
              puVar17[5] = 0;
              puVar17[6] = unaff_d9;
              if ((char)pcVar10[0x17] < '\0') {
                puVar14 = *(undefined1 **)pcVar10;
                func_0x000107c3192c(puVar17 + 7,puVar14,*(long *)(pcVar10 + 8));
              }
              else {
                lVar16 = *(long *)(pcVar10 + 8);
                lVar21 = *(long *)pcVar10;
                puVar17[9] = *(long *)(pcVar10 + 0x10);
                puVar17[8] = lVar16;
                puVar17[7] = lVar21;
              }
              *(undefined8 **)((long)register0x00000008 + -200) = puVar12;
              *(undefined8 **)((long)register0x00000008 + -0xc0) = puVar17;
              puVar23 = *(undefined8 **)((long)register0x00000008 + -0x1e0);
              if (puVar23 < *(undefined8 **)((long)register0x00000008 + -0x1d8)) {
                *puVar23 = puVar12;
                puVar23[1] = puVar17;
                puVar23 = puVar23 + 2;
              }
              else {
                lVar21 = (long)puVar23 - *(long *)((long)register0x00000008 + -0x1e8);
                uVar13 = (lVar21 >> 4) + 1;
                if (uVar13 >> 0x3c != 0) {
                  FUN_10a9c8f0c();
                  goto LAB_10a9c62b4;
                }
                uVar18 = (long)*(undefined8 **)((long)register0x00000008 + -0x1d8) -
                         *(long *)((long)register0x00000008 + -0x1e8);
                uVar20 = (long)uVar18 >> 3;
                if (uVar20 <= uVar13) {
                  uVar20 = uVar13;
                }
                if (0x7fffffffffffffef < uVar18) {
                  uVar20 = 0xfffffffffffffff;
                }
                *(undefined1 **)((long)register0x00000008 + -0x120) =
                     (undefined1 *)((long)register0x00000008 + -0x1e8);
                FUN_10a9c8f20();
                puVar4 = (undefined8 *)(uVar20 + lVar21);
                unaff_x24 = uVar20 + (long)puVar14 * 0x10;
                *puVar4 = puVar12;
                puVar4[1] = puVar17;
                puVar23 = puVar4 + 2;
                puVar14 = *(undefined1 **)((long)register0x00000008 + -0x1e8);
                lVar21 = *(long *)((long)register0x00000008 + -0x1e0) - (long)puVar14;
                _memcpy((long)puVar4 - lVar21);
                uVar24 = *(undefined8 *)((long)register0x00000008 + -0x1e8);
                uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1d8);
                *(long *)((long)register0x00000008 + -0x1e8) = (long)puVar4 - lVar21;
                *(undefined8 **)((long)register0x00000008 + -0x1e0) = puVar23;
                *(ulong *)((long)register0x00000008 + -0x1d8) = unaff_x24;
                *(undefined8 *)((long)register0x00000008 + -0x130) = uVar24;
                *(undefined8 *)((long)register0x00000008 + -0x128) = uVar19;
                *(undefined8 *)((long)register0x00000008 + -0x140) = uVar24;
                *(undefined8 *)((long)register0x00000008 + -0x138) = uVar24;
                func_0x00010a9c8f54((undefined1 *)((long)register0x00000008 + -0x140));
              }
              *(undefined8 **)((long)register0x00000008 + -0x1e0) = puVar23;
              unaff_x28 = pcVar10 + 0x20;
              pcVar1 = pcVar10 + 0x18;
              pcVar10 = unaff_x28;
            } while (pcVar1 != pcVar26);
          }
          unaff_x19 = (code *)*unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
          pcVar10 = *(code **)(unaff_x19 + 0x50);
          unaff_x27 = *(code **)(unaff_x19 + 0x58);
          if ((long)unaff_x27 - (long)pcVar10 != 0) {
            uVar13 = ((long)unaff_x27 - (long)pcVar10 >> 3) * -0x3333333333333333;
            if (uVar13 >> 0x3c != 0) {
              FUN_10a9c9094();
LAB_10a9c62b4:
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10a9c62b8);
              (*pcVar10)();
            }
            *(undefined1 **)((long)register0x00000008 + -0x120) =
                 (undefined1 *)((long)register0x00000008 + -0x200);
            FUN_10a9c90a8();
            lVar21 = (long)puVar14 * 0x10;
            puVar14 = *(undefined1 **)((long)register0x00000008 + -0x200);
            lVar16 = *(long *)((long)register0x00000008 + -0x1f8) - (long)puVar14;
            _memcpy(uVar13 - lVar16);
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x200);
            uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
            *(ulong *)((long)register0x00000008 + -0x200) = uVar13 - lVar16;
            *(ulong *)((long)register0x00000008 + -0x1f8) = uVar13;
            *(ulong *)((long)register0x00000008 + -0x1f0) = uVar13 + lVar21;
            *(undefined8 *)((long)register0x00000008 + -0x130) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x128) = uVar19;
            *(undefined8 *)((long)register0x00000008 + -0x140) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x138) = uVar24;
            func_0x00010a9c90dc((undefined1 *)((long)register0x00000008 + -0x140));
            pcVar10 = *(code **)(unaff_x19 + 0x50);
            unaff_x27 = *(code **)(unaff_x19 + 0x58);
          }
          if (pcVar10 != unaff_x27) {
            pcVar10 = pcVar10 + 8;
            do {
              unaff_x28 = pcVar10 + -8;
              unaff_d9 = *(long *)unaff_x28;
              cVar7 = pcVar10[0x18];
              unaff_x24 = (ulong)(byte)cVar7;
              puVar17 = (undefined8 *)0x58;
              __Znwm();
              puVar17[1] = 0;
              puVar17[2] = 0;
              *puVar17 = &PTR_FUN_110c36168;
              puVar12 = puVar17 + 3;
              *puVar12 = &PTR_DAT_110c35ef0;
              puVar17[4] = 0;
              puVar17[5] = 0;
              puVar17[6] = unaff_d9;
              if ((char)pcVar10[0x17] < '\0') {
                puVar14 = *(undefined1 **)pcVar10;
                func_0x000107c3192c(puVar17 + 7,puVar14,*(long *)(pcVar10 + 8));
              }
              else {
                lVar16 = *(long *)(pcVar10 + 8);
                lVar21 = *(long *)pcVar10;
                puVar17[9] = *(long *)(pcVar10 + 0x10);
                puVar17[8] = lVar16;
                puVar17[7] = lVar21;
              }
              *(byte *)(puVar17 + 10) = (byte)cVar7 & 1;
              *(undefined8 **)((long)register0x00000008 + -200) = puVar12;
              *(undefined8 **)((long)register0x00000008 + -0xc0) = puVar17;
              puVar23 = *(undefined8 **)((long)register0x00000008 + -0x1f8);
              if (puVar23 < *(undefined8 **)((long)register0x00000008 + -0x1f0)) {
                *puVar23 = puVar12;
                puVar23[1] = puVar17;
                puVar23 = puVar23 + 2;
              }
              else {
                lVar21 = (long)puVar23 - *(long *)((long)register0x00000008 + -0x200);
                uVar13 = (lVar21 >> 4) + 1;
                if (uVar13 >> 0x3c != 0) {
                  FUN_10a9c9094();
                  goto LAB_10a9c62b4;
                }
                uVar18 = (long)*(undefined8 **)((long)register0x00000008 + -0x1f0) -
                         *(long *)((long)register0x00000008 + -0x200);
                uVar20 = (long)uVar18 >> 3;
                if (uVar20 <= uVar13) {
                  uVar20 = uVar13;
                }
                if (0x7fffffffffffffef < uVar18) {
                  uVar20 = 0xfffffffffffffff;
                }
                *(undefined1 **)((long)register0x00000008 + -0x120) =
                     (undefined1 *)((long)register0x00000008 + -0x200);
                FUN_10a9c90a8();
                puVar4 = (undefined8 *)(uVar20 + lVar21);
                unaff_x24 = uVar20 + (long)puVar14 * 0x10;
                *puVar4 = puVar12;
                puVar4[1] = puVar17;
                puVar23 = puVar4 + 2;
                puVar14 = *(undefined1 **)((long)register0x00000008 + -0x200);
                lVar21 = *(long *)((long)register0x00000008 + -0x1f8) - (long)puVar14;
                _memcpy((long)puVar4 - lVar21);
                uVar24 = *(undefined8 *)((long)register0x00000008 + -0x200);
                uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
                *(long *)((long)register0x00000008 + -0x200) = (long)puVar4 - lVar21;
                *(undefined8 **)((long)register0x00000008 + -0x1f8) = puVar23;
                *(ulong *)((long)register0x00000008 + -0x1f0) = unaff_x24;
                *(undefined8 *)((long)register0x00000008 + -0x130) = uVar24;
                *(undefined8 *)((long)register0x00000008 + -0x128) = uVar19;
                *(undefined8 *)((long)register0x00000008 + -0x140) = uVar24;
                *(undefined8 *)((long)register0x00000008 + -0x138) = uVar24;
                func_0x00010a9c90dc((undefined1 *)((long)register0x00000008 + -0x140));
              }
              *(undefined8 **)((long)register0x00000008 + -0x1f8) = puVar23;
              unaff_x19 = pcVar10 + 0x28;
              pcVar26 = pcVar10 + 0x20;
              pcVar10 = unaff_x19;
            } while (pcVar26 != unaff_x27);
          }
          unaff_x21 = *(long *)((long)register0x00000008 + -0x210);
          lVar21 = lRam00000001137ebfb8;
          FUN_10a9c4bf8(unaff_x21,lRam00000001137ebfb8,uRam00000001137ebfc0,
                        *(undefined4 *)(*unaff_x23 + 0x68));
          unaff_x25 = (code *)unaff_x23[2];
          if (unaff_x25 == (code *)0x0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f68858d,&UNK_10f688892,0x131,&UNK_10f68890a);
            }
          }
          else {
            uVar5 = *(uint *)(*unaff_x23 + 0x68);
            unaff_x28 = (code *)(ulong)uVar5;
            *(char *)((long)register0x00000008 + -0x201) = (char)uVar5;
            if (unaff_x25[0x40] == (code)0x1) {
              unaff_x19 = *(code **)unaff_x25;
              *(undefined8 *)((long)register0x00000008 + -0xd8) =
                   *(undefined8 *)((long)register0x00000008 + -0x1a8);
              *(undefined8 *)((long)register0x00000008 + -0xe0) =
                   *(undefined8 *)((long)register0x00000008 + -0x1b0);
              if (*(long *)((long)register0x00000008 + -0x1a8) != 0) {
                plVar11 = (long *)(*(long *)((long)register0x00000008 + -0x1a8) + 8);
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar9) {
                    *plVar11 = *plVar11 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
              FUN_10a9d65c0((undefined1 *)((long)register0x00000008 + -0x140),
                            *(long *)((long)register0x00000008 + -0x1e8),
                            *(long *)((long)register0x00000008 + -0x1e0),
                            *(long *)((long)register0x00000008 + -0x1e0) -
                            *(long *)((long)register0x00000008 + -0x1e8) >> 4);
              *(undefined8 *)((long)register0x00000008 + -200) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
              FUN_10a9d6664((undefined1 *)((long)register0x00000008 + -200),
                            *(long *)((long)register0x00000008 + -0x200),
                            *(long *)((long)register0x00000008 + -0x1f8),
                            *(long *)((long)register0x00000008 + -0x1f8) -
                            *(long *)((long)register0x00000008 + -0x200) >> 4);
              (*unaff_x19)((undefined1 *)((long)register0x00000008 + -0xe0),
                           (undefined1 *)((long)register0x00000008 + -0x140),
                           (undefined1 *)((long)register0x00000008 + -200),uVar5 & 0xff,unaff_x25);
              FUN_10a9c91c0((undefined1 *)((long)register0x00000008 + -200));
              FUN_10a9c9038((undefined1 *)((long)register0x00000008 + -0x140));
              plVar11 = *(long **)((long)register0x00000008 + -0xd8);
              if (plVar11 != (long *)0x0) {
                plVar25 = plVar11 + 1;
                do {
                  lVar21 = *plVar25;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar9) {
                    *plVar25 = lVar21 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
LAB_10a9c5f74:
                if (lVar21 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
            }
            else {
              unaff_x19 = (code *)((long)register0x00000008 + -0x140);
              if (unaff_x25[0x40] == (code)0x2) {
                pcVar10 = unaff_x25;
                FUN_10a688b40();
                if (pcVar10 == (code *)0x0) {
                  if (lVar21 != 0) {
                    lVar16 = *(long *)(unaff_x25 + 8);
                    lVar15 = *(long *)unaff_x25;
                    *(long *)((long)register0x00000008 + -0x138) = *(long *)(unaff_x25 + 8);
                    *(long *)((long)register0x00000008 + -0x140) = lVar15;
                    if (lVar16 != 0) {
                      plVar11 = (long *)(lVar16 + 8);
                      do {
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar9) {
                          *plVar11 = *plVar11 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    *(undefined8 *)((long)register0x00000008 + -0x128) =
                         *(undefined8 *)((long)register0x00000008 + -0x1a8);
                    *(undefined8 *)((long)register0x00000008 + -0x130) =
                         *(undefined8 *)((long)register0x00000008 + -0x1b0);
                    if (*(long *)((long)register0x00000008 + -0x1a8) != 0) {
                      plVar11 = (long *)(*(long *)((long)register0x00000008 + -0x1a8) + 8);
                      do {
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar9) {
                          *plVar11 = *plVar11 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
                    FUN_10a9d65c0((undefined1 *)((long)register0x00000008 + -0x120),
                                  *(long *)((long)register0x00000008 + -0x1e8),
                                  *(long *)((long)register0x00000008 + -0x1e0),
                                  *(long *)((long)register0x00000008 + -0x1e0) -
                                  *(long *)((long)register0x00000008 + -0x1e8) >> 4);
                    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
                    FUN_10a9d6664((undefined1 *)((long)register0x00000008 + -0x108),
                                  *(long *)((long)register0x00000008 + -0x200),
                                  *(long *)((long)register0x00000008 + -0x1f8),
                                  *(long *)((long)register0x00000008 + -0x1f8) -
                                  *(long *)((long)register0x00000008 + -0x200) >> 4);
                    *(char *)((long)register0x00000008 + -0xf0) = (char)uVar5;
                    *(code **)((long)register0x00000008 + -200) = FUN_10a9d6708;
                    *(undefined ***)((long)register0x00000008 + -0xc0) = &PTR_FUN_110c366a0;
                    unaff_x27 = (code *)0x58;
                    __Znwm();
                    lVar27 = *(long *)((long)register0x00000008 + -0x138);
                    lVar15 = *(long *)((long)register0x00000008 + -0x140);
                    lVar29 = *(long *)((long)register0x00000008 + -0x128);
                    lVar28 = *(long *)((long)register0x00000008 + -0x130);
                    *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
                    lVar16 = *(long *)((long)register0x00000008 + -0x128);
                    *(long *)(unaff_x27 + 8) = lVar27;
                    *(long *)unaff_x27 = lVar15;
                    *(long *)(unaff_x27 + 0x18) = lVar29;
                    *(long *)(unaff_x27 + 0x10) = lVar28;
                    if (lVar16 != 0) {
                      plVar11 = (long *)(lVar16 + 8);
                      do {
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar9) {
                          *plVar11 = *plVar11 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    unaff_x28 = unaff_x27 + 0x20;
                    *(long *)unaff_x28 = 0;
                    *(long *)(unaff_x27 + 0x28) = 0;
                    *(long *)(unaff_x27 + 0x30) = 0;
                    FUN_10a9d65c0(unaff_x28,*(long *)((long)register0x00000008 + -0x120),
                                  *(long *)((long)register0x00000008 + -0x118),
                                  *(long *)((long)register0x00000008 + -0x118) -
                                  *(long *)((long)register0x00000008 + -0x120) >> 4);
                    *(long *)(unaff_x27 + 0x38) = 0;
                    *(long *)(unaff_x27 + 0x40) = 0;
                    *(long *)(unaff_x27 + 0x48) = 0;
                    FUN_10a9d6664();
                    unaff_x27[0x50] = *(code *)((long)register0x00000008 + -0xf0);
                    *(code **)((long)register0x00000008 + -0xb8) = unaff_x27;
                    FUN_10a4634ec(lVar21,(undefined1 *)((long)register0x00000008 + -200));
                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xc0))
                              ((undefined1 *)((long)register0x00000008 + -0xc0));
                    FUN_10a9c91c0((undefined1 *)((long)register0x00000008 + -0x108));
                    FUN_10a9c9038((undefined1 *)((long)register0x00000008 + -0x120));
                    plVar11 = *(long **)((long)register0x00000008 + -0x128);
                    if (plVar11 != (long *)0x0) {
                      plVar25 = plVar11 + 1;
                      do {
                        lVar21 = *plVar25;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                        if (bVar9) {
                          *plVar25 = lVar21 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (lVar21 == 0) {
                        (**(code **)(*plVar11 + 0x10))(plVar11);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                      }
                    }
                    plVar11 = *(long **)((long)register0x00000008 + -0x138);
                    if (plVar11 != (long *)0x0) {
                      plVar25 = plVar11 + 1;
                      do {
                        lVar21 = *plVar25;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                        if (bVar9) {
                          *plVar25 = lVar21 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      goto LAB_10a9c5f74;
                    }
                  }
                }
                else {
                  *(long *)pcVar10 =
                       CONCAT44((int)((ulong)*(long *)pcVar10 >> 0x20) + 1,(int)*(long *)pcVar10 + 1
                               );
                  FUN_10a9d60d8(*(long *)unaff_x25,(undefined1 *)((long)register0x00000008 + -0x1b0)
                                ,(undefined1 *)((long)register0x00000008 + -0x1e8),
                                (undefined1 *)((long)register0x00000008 + -0x200),
                                (undefined1 *)((long)register0x00000008 + -0x201));
                  iVar6 = *(int *)(pcVar10 + 4);
                  *(int *)(pcVar10 + 4) = iVar6 + -1;
                  unaff_x27 = pcVar10;
                  if (iVar6 + -1 == 0) {
                    *(undefined4 *)pcVar10 = 0;
                  }
                }
              }
            }
            unaff_x21 = *(long *)((long)register0x00000008 + -0x210);
          }
          FUN_10a9c91c0((undefined1 *)((long)register0x00000008 + -0x200));
          plVar11 = (long *)((long)register0x00000008 + -0x1e8);
          FUN_10a9c9038();
          plVar25 = *(long **)((long)register0x00000008 + -0x1a8);
          if (plVar25 != (long *)0x0) {
            plVar2 = plVar25 + 1;
            do {
              lVar21 = *plVar2;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *plVar2 = lVar21 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              plVar11 = plVar25;
            }
          }
          unaff_x26 = *(long **)((long)register0x00000008 + -0x198);
          if (unaff_x26 != (long *)0x0) {
            plVar25 = unaff_x26 + 1;
            do {
              lVar21 = *plVar25;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar9) {
                *plVar25 = lVar21 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*unaff_x26 + 0x10))(unaff_x26);
              plVar11 = unaff_x26;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          if (*(char *)((long)register0x00000008 + -0x179) < '\0') {
            plVar11 = *(long **)((long)register0x00000008 + -400);
            __ZdlPv();
          }
          if (*(char *)((long)register0x00000008 + -0x161) < '\0') {
            plVar11 = *(long **)((long)register0x00000008 + -0x178);
            __ZdlPv();
          }
          if (*(char *)((long)register0x00000008 + -0x149) < '\0') {
            plVar11 = *(long **)((long)register0x00000008 + -0x160);
            __ZdlPv();
          }
          if (unaff_x25 == (code *)0x0) goto LAB_10a9c621c;
        }
        unaff_x23 = unaff_x23 + 4;
      } while (unaff_x23 != plVar22);
      unaff_x23 = *(long **)(unaff_x21 + 0x1f8);
      plVar22 = *(long **)(unaff_x21 + 0x200);
    }
    while (plVar22 != unaff_x23) {
      plVar22 = plVar22 + -4;
      func_0x00010a9c99f8(plVar22);
    }
    *(long **)(unaff_x21 + 0x200) = unaff_x23;
LAB_10a9c621c:
    unaff_x20 = unaff_x21 + 0x268;
    __ZNSt3__15mutex6unlockEv();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x88)) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__15mutex6unlockEv(unaff_x21 + 0x268);
    unaff_x30 = FUN_10a9c6528;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x210);
  } while( true );
}



/* Entry: 10a9c6574; end: 10a9c65c3;  */

void FUN_10a9c6574(long param_1)

{
  FUN_10a9c8d58(param_1 + 0x1e0);
  if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
    return;
  }
  FUN_10ae06f30(1,8,&UNK_10f68858d,&UNK_10f688939,0x146,&UNK_10f68897f,&stack0x00000000);
  return;
}



/* Entry: 10a9c65c4; end: 10a9c677f;  */

void FUN_10a9c65c4(long param_1)

{
  FUN_10a9c8d58(param_1 + 0xe0);
  if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
    return;
  }
  FUN_10ae06f30(1,8,&UNK_10f68858d,&UNK_10f688939,0x146,&UNK_10f68897f,&stack0x00000000);
  return;
}



/* Entry: 10a9c6780; end: 10a9c68a3;  */

void FUN_10a9c6780(undefined8 param_1)

{
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
  
  FUN_10a003e74(param_1,&UNK_10f68899e,0xc);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6889ab;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f687d39;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6889b6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x4200000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c35968);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6889bc;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x4200000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c35978);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9c68a4; end: 10a9c6b37;  */

void FUN_10a9c68a4(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f68899e,0xc);
  func_0x000109887da8(appuStack_c8,&DAT_10f340af3,8);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35ec8;
  pppuVar2 = (undefined8 ***)&UNK_10f687d39;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
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
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c35ec8;
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
    FUN_10a0605c4(param_1,&DAT_10f340adc,FUN_10a9d6784,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f340ae6,FUN_10a9d68a8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f340aee,FUN_10a9d6964,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f340af3,8);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c6b1c);
  (*pcVar6)();
}



/* Entry: 10a9c6b38; end: 10a9c6e07;  */

void FUN_10a9c6b38(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f68899e,0xc);
  func_0x000109887da8(appuStack_c8,&DAT_10f340b04,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35f38;
  pppuVar2 = (undefined8 ***)&UNK_10f687d39;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
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
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c35f38;
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
    FUN_10a0605c4(param_1,&DAT_10f340adc,FUN_10a9d6aa4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f340ae6,FUN_10a9d6bc8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f340afc,FUN_10a9d6c84,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2e8dce,FUN_10a9d6d64,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f340b04,0xb);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c6dec);
  (*pcVar6)();
}



/* Entry: 10a9c6e08; end: 10a9c717f;  */

void FUN_10a9c6e08(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&UNK_10f68899e,0xc);
  func_0x000109887da8(appuStack_d8,&DAT_10f30a91c,7);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c36000;
  pppuVar2 = (undefined8 ***)&UNK_10f687d39;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x200000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c36000;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x42,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f309c7a,FUN_10a9d6e1c,FUN_10a9d6ecc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f340a77,FUN_10a9d722c,FUN_10a9d72dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x42,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f340a81,FUN_10a9d7394,FUN_10a9d7450);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x42,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f340a8c,FUN_10a9d7510,FUN_10a9d75cc);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&DAT_10f30a91c,7);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&DAT_10f30a91c;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x200000064;
    puStack_88 = &UNK_10f687d39;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f687d39;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9c7160;
      FUN_10a054dac(param_1,&UNK_10f6881ab,FUN_10a9d76fc,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a9c7160:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9c7164);
  (*pcVar6)();
}



/* Entry: 10a9c7180; end: 10a9c74ef;  */

void FUN_10a9c7180(ulong param_1)

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
  puStack_98 = &UNK_10f6889c0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x4200000064;
  puStack_70 = &UNK_10f687d39;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f687d39;
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
  puStack_98 = &DAT_10f461a49;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9c7448(param_1,&puStack_98,1);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f461a4d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9c7448();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66ba9a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9c7448();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66baa0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9c7448();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66baa5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9c7448();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66baaa;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9c7448();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66baae;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9c7448();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66bab4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f687d39;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9c7448();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6442b5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9c7448();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a9c74f0; end: 10a9c761f;  */

void FUN_10a9c74f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10a9c7620; end: 10a9c7637;  */

undefined8 FUN_10a9c7620(void)

{
  return 1;
}



/* Entry: 10a9c7638; end: 10a9c76d7;  */

undefined8 * FUN_10a9c7638(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36c60;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c76d8; end: 10a9c76df;  */

void FUN_10a9c76d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9c76dc);
  (*pcVar1)();
}



/* Entry: 10a9c76e0; end: 10a9c798b;  */

undefined8 * FUN_10a9c76e0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  *param_1 = &PTR_FUN_110c35ac8;
  FUN_10a0426d8(&puStack_28);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c798c; end: 10a9c7993;  */

undefined1 FUN_10a9c798c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 10a9c7994; end: 10a9c7aaf;  */

undefined8 * FUN_10a9c7994(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c36c00;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  *param_1 = &PTR_FUN_110c36b40;
  FUN_10a2b8c88(param_1 + 9);
  puStack_28 = param_1 + 6;
  FUN_10a2b7750(&puStack_28);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c7ab0; end: 10a9c7ab7;  */

undefined1 FUN_10a9c7ab0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 10a9c7ab8; end: 10a9c7bc3;  */

undefined8 * FUN_10a9c7ab8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c35bc0;
  puStack_28 = param_1 + 9;
  FUN_10a0426d8(&puStack_28);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  puStack_28 = param_1 + 3;
  *param_1 = &PTR_DAT_110c36890;
  FUN_10a2b7750(&puStack_28);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c7bc4; end: 10a9c7bcb;  */

undefined1 FUN_10a9c7bc4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 10a9c7bcc; end: 10a9c7ce7;  */

undefined8 * FUN_10a9c7bcc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c36ba0;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  *param_1 = &PTR_FUN_110c36b40;
  FUN_10a2b8c88(param_1 + 9);
  puStack_28 = param_1 + 6;
  FUN_10a2b7750(&puStack_28);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c7ce8; end: 10a9c7cef;  */

undefined1 FUN_10a9c7ce8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 10a9c7cf0; end: 10a9c7dc3;  */

undefined8 * FUN_10a9c7cf0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c35c50;
  func_0x00010a9c96f4(param_1 + 6);
  puStack_28 = param_1 + 3;
  *param_1 = &PTR_DAT_110c36890;
  FUN_10a2b7750(&puStack_28);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c7dc4; end: 10a9c7dcb;  */

undefined1 FUN_10a9c7dc4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 10a9c7dcc; end: 10a9c7ee7;  */

undefined8 * FUN_10a9c7dcc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c36ae0;
  puStack_28 = param_1 + 0xb;
  FUN_10a0426d8(&puStack_28);
  *param_1 = &PTR_FUN_110c36b40;
  FUN_10a2b8c88(param_1 + 9);
  puStack_28 = param_1 + 6;
  FUN_10a2b7750(&puStack_28);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c7ee8; end: 10a9c7eef;  */

undefined1 FUN_10a9c7ee8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 10a9c7ef0; end: 10a9c7f8f;  */

undefined8 * FUN_10a9c7ef0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36718;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c7f90; end: 10a9c7f97;  */

void FUN_10a9c7f90(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9c7f94);
  (*pcVar1)();
}



/* Entry: 10a9c7f98; end: 10a9c8037;  */

undefined8 * FUN_10a9c7f98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c35d10;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c8038; end: 10a9c803f;  */

undefined1 FUN_10a9c8038(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 10a9c8040; end: 10a9c8107;  */

undefined8 * FUN_10a9c8040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36770;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  *param_1 = &PTR_FUN_110c367d0;
  func_0x00010a2b7284(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c8108; end: 10a9c810f;  */

undefined1 FUN_10a9c8108(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 10a9c8110; end: 10a9c875f;  */

undefined8 * FUN_10a9c8110(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c8760; end: 10a9c876f;  */

undefined8 FUN_10a9c8760(void)

{
  return 1;
}



/* Entry: 10a9c8770; end: 10a9c882f;  */

undefined8 * FUN_10a9c8770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c35fb8;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9c8830; end: 10a9c883f;  */

void FUN_10a9c8830(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9c8840; end: 10a9c885f;  */

void FUN_10a9c8840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36028;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9c8860; end: 10a9c88df;  */

/* WARNING: Removing unreachable block (ram,0x00010a9c88a4) */

void FUN_10a9c8860(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != lVar2);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x20) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a9c88e0; end: 10a9c88e3;  */

void FUN_10a9c88e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9c88e4; end: 10a9c88f7;  */

void FUN_10a9c88e4(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined4 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined4 *)0x666666666666666 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = *puVar2;
        uVar4 = *(undefined8 *)(puVar2 + 4);
        uVar3 = *(undefined8 *)(puVar2 + 2);
        *(undefined8 *)(param_3 + 6) = *(undefined8 *)(puVar2 + 6);
        *(undefined8 *)(param_3 + 4) = uVar4;
        *(undefined8 *)(param_3 + 2) = uVar3;
        *(undefined8 *)(puVar2 + 4) = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(undefined1 *)(param_3 + 8) = *(undefined1 *)(puVar2 + 8);
        puVar2 = puVar2 + 10;
        param_3 = param_3 + 10;
      } while (puVar2 != param_2);
      do {
        if (*(char *)((long)puVar1 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(puVar1 + 2));
        }
        puVar1 = puVar1 + 10;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x28);
  return;
}



/* Entry: 10a9c88f8; end: 10a9c8a1b;  */

void FUN_10a9c88f8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined4 *)0x666666666666666 < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = *puVar1;
        uVar3 = *(undefined8 *)(puVar1 + 4);
        uVar2 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(param_3 + 6) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(param_3 + 4) = uVar3;
        *(undefined8 *)(param_3 + 2) = uVar2;
        *(undefined8 *)(puVar1 + 4) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined1 *)(param_3 + 8) = *(undefined1 *)(puVar1 + 8);
        puVar1 = puVar1 + 10;
        param_3 = param_3 + 10;
      } while (puVar1 != param_2);
      do {
        if (*(char *)((long)param_1 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 2));
        }
        param_1 = param_1 + 10;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x28);
  return;
}



/* Entry: 10a9c8a1c; end: 10a9c8a2b;  */

void FUN_10a9c8a1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36078;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9c8a2c; end: 10a9c8a4b;  */

void FUN_10a9c8a2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36078;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9c8a4c; end: 10a9c8a53;  */

void FUN_10a9c8a4c(void)

{
  return;
}



/* Entry: 10a9c8a54; end: 10a9c8b07;  */

void FUN_10a9c8a54(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a9c8ab0();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a9c8b08; end: 10a9c8b1b;  */

undefined1  [16] FUN_10a9c8b08(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a9c8ab0();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a9c8b1c; end: 10a9c8b9b;  */

undefined1  [16] FUN_10a9c8b1c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a9c8ab0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a9c8b9c; end: 10a9c8bab;  */

void FUN_10a9c8b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c360c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9c8bac; end: 10a9c8bcb;  */

void FUN_10a9c8bac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c360c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9c8bcc; end: 10a9c8bdb;  */

void FUN_10a9c8bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9c8bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9c8bdc; end: 10a9c8bef;  */

void FUN_10a9c8bdc(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    __Znwm((long)puVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    __Znwm((long)puVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    __Znwm((long)puVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar2 >> 0x3c == 0) {
    __Znwm((long)plVar2 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar5 = *plVar2;
  if (lVar5 != 0) {
    lVar3 = plVar2[1];
    lVar4 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x20;
        func_0x00010a9c99f8();
      } while (lVar3 != lVar5);
      lVar4 = *plVar2;
    }
    plVar2[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a9c8bf0; end: 10a9c8c23;  */

void FUN_10a9c8bf0(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    __Znwm((long)puVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    __Znwm((long)puVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar2 >> 0x3c == 0) {
    __Znwm((long)plVar2 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar5 = *plVar2;
  if (lVar5 != 0) {
    lVar3 = plVar2[1];
    lVar4 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x20;
        func_0x00010a9c99f8();
      } while (lVar3 != lVar5);
      lVar4 = *plVar2;
    }
    plVar2[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a9c8c24; end: 10a9c8c37;  */

void FUN_10a9c8c24(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    __Znwm((long)puVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    __Znwm((long)puVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar2 >> 0x3c == 0) {
    __Znwm((long)plVar2 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar5 = *plVar2;
  if (lVar5 != 0) {
    lVar3 = plVar2[1];
    lVar4 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x20;
        func_0x00010a9c99f8();
      } while (lVar3 != lVar5);
      lVar4 = *plVar2;
    }
    plVar2[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}


