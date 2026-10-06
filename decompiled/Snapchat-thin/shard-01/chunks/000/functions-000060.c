/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100cb6860; end: 100cb68a3;  */

uint FUN_100cb6860(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_101600ed4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 100cb68a4; end: 100cb68cf;  */

long FUN_100cb68a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb68d0; end: 100cb690f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_100cb68d0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 100cb6910; end: 100cb6937;  */

void FUN_100cb6910(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100cb6938; end: 100cb6a13;  */

void FUN_100cb6938(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100cb6a14; end: 100cb6a6f;  */

long FUN_100cb6a14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb6a70; end: 100cb6aa3;  */

void FUN_100cb6a70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 100cb6aa4; end: 100cb6b33;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100cb6aa4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 100cb6b34; end: 100cb6b5f;  */

long FUN_100cb6b34(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb6b60; end: 100cb6b73;  */

void FUN_100cb6b60(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 100cb6b74; end: 100cb6b9f;  */

long FUN_100cb6b74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb6ba0; end: 100cb6c23;  */

void FUN_100cb6ba0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 100cb6c24; end: 100cb6c5f;  */

void FUN_100cb6c24(undefined8 param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = (ulong)(*unaff_x20 != 0);
  if ((char)unaff_x20[1] != '\x01') {
    uVar1 = *unaff_x20;
  }
  func_0x000107c60690(param_1,uVar1);
  return;
}



/* Entry: 100cb6c60; end: 100cb6cf3;  */

void FUN_100cb6c60(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100cb6cf4; end: 100cb6d1f;  */

long FUN_100cb6cf4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb6d20; end: 100cb6d37;  */

undefined8 FUN_100cb6d20(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100cb6d38; end: 100cb6d5f;  */

void FUN_100cb6d38(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100cb6d60; end: 100cb6dfb;  */

void FUN_100cb6d60(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100cb6dfc; end: 100cb6e37;  */

void FUN_100cb6dfc(undefined8 param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = (ulong)(*unaff_x20 != 0);
  if ((char)unaff_x20[1] != '\x01') {
    uVar1 = *unaff_x20;
  }
  func_0x000107c60690(param_1,uVar1);
  return;
}



/* Entry: 100cb6e38; end: 100cb6eff;  */

void FUN_100cb6e38(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100cb6f00; end: 100cb6f27;  */

void FUN_100cb6f00(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100cb6f28; end: 100cb6f3f;  */

void FUN_100cb6f28(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100cb6f40; end: 100cb6f6f;  */

undefined1  [16] FUN_100cb6f40(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 100cb6f70; end: 100cb6fa3;  */

void FUN_100cb6f70(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 100cb6fa4; end: 100cb7033;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100cb6fa4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 100cb7034; end: 100cb705f;  */

long FUN_100cb7034(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb7060; end: 100cb7087;  */

int FUN_100cb7060(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100cb7088; end: 100cb70b3;  */

long FUN_100cb7088(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb70b4; end: 100cb70ef;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_100cb70b4(char param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == '\x02') {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100cb70f0; end: 100cb718f;  */

long FUN_100cb70f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb7190; end: 100cb71c3;  */

void FUN_100cb7190(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 100cb71c4; end: 100cb71c7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100cb71c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 100cb71c8; end: 100cb71f7;  */

undefined1  [16] FUN_100cb71c8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 100cb71f8; end: 100cb722b;  */

void FUN_100cb71f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100cb722c; end: 100cb7277;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100cb722c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 100cb7278; end: 100cb72a3;  */

long FUN_100cb7278(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb72a4; end: 100cb72bf;  */

undefined8 * FUN_100cb72a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 100cb72c0; end: 100cb72eb;  */

long FUN_100cb72c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb72ec; end: 100cb7387;  */

void FUN_100cb72ec(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 100cb7388; end: 100cb73b3;  */

long FUN_100cb7388(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb73b4; end: 100cb740f;  */

void FUN_100cb73b4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 100cb7410; end: 100cb7437;  */

void FUN_100cb7410(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100cb7438; end: 100cb74db;  */

void FUN_100cb7438(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100cb74dc; end: 100cb7507;  */

long FUN_100cb74dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb7508; end: 100cb752f;  */

void FUN_100cb7508(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 100cb7530; end: 100cb7557;  */

void FUN_100cb7530(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100cb7558; end: 100cb75fb;  */

void FUN_100cb7558(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100cb75fc; end: 100cb7627;  */

long FUN_100cb75fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb7628; end: 100cb762b;  */

undefined8 * FUN_100cb7628(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 100cb762c; end: 100cb7667;  */

undefined8 * FUN_100cb762c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 100cb7668; end: 100cb7683;  */

void FUN_100cb7668(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 100cb7684; end: 100cb76df;  */

void FUN_100cb7684(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x0001016707c0(uVar1,*(undefined1 *)(unaff_x20 + 1));
  *param_1 = uVar1;
  return;
}



/* Entry: 100cb76e0; end: 100cb776f;  */

int FUN_100cb76e0(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 100cb7770; end: 100cb77c7;  */

long FUN_100cb7770(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100cb77c8; end: 100cb77eb;  */

void FUN_100cb77c8(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb77ec; end: 100cb77f7;  */

void FUN_100cb77ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb77f8; end: 100cb783f;  */

void FUN_100cb77f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb7840; end: 100cb7853;  */

void FUN_100cb7840(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb7854; end: 100cb7887;  */

void FUN_100cb7854(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb7888; end: 100cb7893;  */

void FUN_100cb7888(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_release_11034f4c0;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb7894; end: 100cb78b7;  */

void FUN_100cb7894(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb78b8; end: 100cb78c3;  */

void FUN_100cb78b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb78c4; end: 100cb7913;  */

void FUN_100cb78c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb7914; end: 100cb793f;  */

void FUN_100cb7914(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb7940; end: 100cb7963;  */

void FUN_100cb7940(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb7964; end: 100cb797b;  */

void FUN_100cb7964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb797c; end: 100cb79c3;  */

void FUN_100cb797c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb79c4; end: 100cb79ef;  */

void FUN_100cb79c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb79f0; end: 100cb7a17;  */

void FUN_100cb79f0(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100cb7a18; end: 100cb7a3f;  */

void FUN_100cb7a18(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100cb7a40; end: 100cb7a63;  */

void FUN_100cb7a40(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb7a64; end: 100cb8527;  */

void FUN_100cb7a64(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  
  lVar4 = 0;
  func_0x000100b91d00();
  lVar12 = *(long *)(lVar4 + -8);
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar9 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + uVar9;
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x80));
  iVar3 = *(int *)(lVar4 + 0x3c);
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar5 + -8);
  pcVar11 = *(code **)(lVar13 + 0x30);
  lVar8 = lVar1 + iVar3;
  (*pcVar11)(lVar8,1,lVar5);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar13 + 8))(lVar1 + iVar3,lVar5);
  }
  iVar3 = *(int *)(lVar4 + 0x40);
  lVar8 = lVar1 + iVar3;
  (*pcVar11)(lVar8,1,lVar5);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar13 + 8))(lVar1 + iVar3,lVar5);
  }
  iVar3 = *(int *)(lVar4 + 0x44);
  lVar8 = lVar1 + iVar3;
  (*pcVar11)(lVar8,1,lVar5);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar13 + 8))(lVar1 + iVar3,lVar5);
  }
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x4c)));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x50)));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x54)));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x58)));
  lVar8 = lVar1 + *(int *)(lVar4 + 0x5c);
  if (*(long *)(lVar8 + 8) != 1) {
    func_0x000107c6142c();
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x18));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x28));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x38));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x48));
    if (*(long *)(lVar8 + 0x90) != 0) {
      func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x70));
      func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x80));
      func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x90));
    }
  }
  if (*(long *)(lVar1 + *(int *)(lVar4 + 100) + 8) != 1) {
    func_0x000107c6142c();
  }
  lVar8 = lVar1 + *(int *)(lVar4 + 0x68);
  if (*(long *)(lVar8 + 0x138) != 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x10));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x20));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x38));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x58));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x60));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x90));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0xa0));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0xb0));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0xc0));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0xd0));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0xe8));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x100));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x110));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x120));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x130));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x138));
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x6c));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar2);
  }
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x74) + 8));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x78) + 8));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x7c) + 8));
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x80));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar2);
  }
  lVar8 = lVar1 + *(int *)(lVar4 + 0x84);
  lVar6 = 0;
  func_0x000100b91fbc();
  lVar7 = lVar8;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar8,1,lVar6);
  if ((int)lVar7 == 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 8));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x30));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x40));
    iVar3 = *(int *)(lVar6 + 0x28);
    lVar7 = lVar8 + iVar3;
    (*pcVar11)(lVar7,1,lVar5);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar13 + 8))(lVar8 + iVar3,lVar5);
    }
    func_0x000107c6142c(*(undefined8 *)(lVar8 + *(int *)(lVar6 + 0x2c) + 8));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + *(int *)(lVar6 + 0x30) + 8));
    iVar3 = *(int *)(lVar6 + 0x34);
    lVar7 = lVar8 + iVar3;
    (*pcVar11)(lVar7,1,lVar5);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar13 + 8))(lVar8 + iVar3,lVar5);
    }
    func_0x000107c6142c(*(undefined8 *)(lVar8 + *(int *)(lVar6 + 0x38) + 8));
    func_0x000107c6142c(*(undefined8 *)(lVar8 + *(int *)(lVar6 + 0x3c) + 8));
  }
  lVar8 = lVar1 + *(int *)(lVar4 + 0x88);
  if (*(long *)(lVar8 + 8) != 0) {
    func_0x000107c6142c();
    lVar5 = *(long *)(lVar8 + 0x40);
    if (lVar5 != 1) {
      if (*(long *)(lVar8 + 0x20) != 1) {
        func_0x000107c6142c(*(long *)(lVar8 + 0x20));
        func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x30));
        lVar5 = *(long *)(lVar8 + 0x40);
      }
      func_0x000107c6142c(lVar5);
    }
    lVar5 = *(long *)(lVar8 + 0x78);
    if (lVar5 != 1) {
      if (*(long *)(lVar8 + 0x58) != 1) {
        func_0x000107c6142c(*(long *)(lVar8 + 0x58));
        func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x68));
        lVar5 = *(long *)(lVar8 + 0x78);
      }
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x98));
  }
  lVar8 = lVar1 + *(int *)(lVar4 + 0xac);
  if (*(long *)(lVar8 + 8) != 0) {
    func_0x000107c6142c();
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x18));
  }
  lVar8 = lVar1 + *(int *)(lVar4 + 0xb8);
  if (*(long *)(lVar8 + 8) != 0) {
    func_0x000107c6142c();
    lVar5 = *(long *)(lVar8 + 0x40);
    if (lVar5 != 1) {
      if (*(long *)(lVar8 + 0x20) != 1) {
        func_0x000107c6142c(*(long *)(lVar8 + 0x20));
        func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x30));
        lVar5 = *(long *)(lVar8 + 0x40);
      }
      func_0x000107c6142c(lVar5);
    }
    lVar5 = *(long *)(lVar8 + 0x78);
    if (lVar5 != 1) {
      if (*(long *)(lVar8 + 0x58) != 1) {
        func_0x000107c6142c(*(long *)(lVar8 + 0x58));
        func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x68));
        lVar5 = *(long *)(lVar8 + 0x78);
      }
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x98));
  }
  lVar1 = lVar1 + *(int *)(lVar4 + 0xbc);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x000107c6142c();
    lVar8 = *(long *)(lVar1 + 0x40);
    if (lVar8 != 1) {
      if (*(long *)(lVar1 + 0x20) != 1) {
        func_0x000107c6142c(*(long *)(lVar1 + 0x20));
        func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x30));
        lVar8 = *(long *)(lVar1 + 0x40);
      }
      func_0x000107c6142c(lVar8);
    }
    lVar8 = *(long *)(lVar1 + 0x78);
    if (lVar8 != 1) {
      if (*(long *)(lVar1 + 0x58) != 1) {
        func_0x000107c6142c(*(long *)(lVar1 + 0x58));
        func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x68));
        lVar8 = *(long *)(lVar1 + 0x78);
      }
      func_0x000107c6142c(lVar8);
    }
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x98));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)
            (unaff_x20,*(long *)(lVar12 + 0x40) + uVar9,uVar10 | 7);
  return;
}



/* Entry: 100cb8528; end: 100cb852b;  */

void FUN_100cb8528(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb852c; end: 100cb8557;  */

void FUN_100cb852c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8558; end: 100cb8563;  */

void FUN_100cb8558(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100cb8564; end: 100cb866b;  */

void FUN_100cb8564(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb866c; end: 100cb866f;  */

void FUN_100cb866c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8670; end: 100cb8693;  */

void FUN_100cb8670(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8694; end: 100cb86a3;  */

void FUN_100cb8694(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb86a4; end: 100cb86eb;  */

void FUN_100cb86a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb86ec; end: 100cb8703;  */

void FUN_100cb86ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8704; end: 100cb880b;  */

void FUN_100cb8704(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb880c; end: 100cb8837;  */

undefined8 * FUN_100cb880c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100cb8838; end: 100cb883b;  */

void FUN_100cb8838(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb883c; end: 100cb885f;  */

void FUN_100cb883c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8860; end: 100cb886f;  */

void FUN_100cb8860(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100cb8870; end: 100cb8917;  */

void FUN_100cb8870(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8918; end: 100cb892f;  */

void FUN_100cb8918(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8930; end: 100cb8977;  */

void FUN_100cb8930(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8978; end: 100cb897b;  */

void FUN_100cb8978(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb897c; end: 100cb8a27;  */

void FUN_100cb897c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8a28; end: 100cb8a37;  */

void FUN_100cb8a28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8a38; end: 100cb8b1f;  */

void FUN_100cb8a38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8b20; end: 100cb8b23;  */

void FUN_100cb8b20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8b24; end: 100cb8bb7;  */

void FUN_100cb8b24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8bb8; end: 100cb8bbb;  */

void FUN_100cb8bb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8bbc; end: 100cb8c2f;  */

void FUN_100cb8bbc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8c30; end: 100cb8c37;  */

void FUN_100cb8c30(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8c38; end: 100cb8c63;  */

void FUN_100cb8c38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100cb8c64; end: 100cb8c7f;  */

void FUN_100cb8c64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


