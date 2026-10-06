/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f37298; end: 101f372cf;  */

/* WARNING: Possible PIC construction at 0x000101f372ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f372bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f372b0) */
/* WARNING: Removing unreachable block (ram,0x000101f372c0) */

void FUN_101f37298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f372d0; end: 101f373df;  */

undefined8 * FUN_101f372d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  uVar3 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 101f373e0; end: 101f3744b;  */

undefined8 * FUN_101f373e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar2);
  param_1[5] = param_2[5];
  func_0x000107c6142c(param_1[6]);
  uVar2 = param_1[7];
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101f3744c; end: 101f3745b;  */

undefined1  [16] FUN_101f3744c(void)

{
  return ZEXT816(0x1104a27a8);
}



/* Entry: 101f3745c; end: 101f3748b;  */

/* WARNING: Possible PIC construction at 0x000101f37470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f37474) */

void FUN_101f3745c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f3748c; end: 101f3758b;  */

undefined8 * FUN_101f3748c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[7];
  param_1[7] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 101f3758c; end: 101f375ef;  */

undefined8 * FUN_101f3758c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101f375f0; end: 101f37697;  */

int FUN_101f375f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f37698; end: 101f37703;  */

/* WARNING: Possible PIC construction at 0x000101f376ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f376b0) */

void FUN_101f37698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f37704; end: 101f3776f;  */

undefined8 * FUN_101f37704(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f37770; end: 101f377bb;  */

undefined8 * FUN_101f37770(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101f377bc; end: 101f3787b;  */

int FUN_101f377bc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101f3787c; end: 101f378fb;  */

void FUN_101f3787c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da319ec;
  func_0x000107c61520(&UNK_10da319ec,&UNK_1104a2a80);
  puRam0000000112e41ea8 = puVar1;
  return;
}



/* Entry: 101f378fc; end: 101f3795b;  */

undefined8 FUN_101f378fc(undefined8 param_1,undefined8 param_2)

{
  FUN_101f3748c(param_2,param_1,&UNK_1104a2838);
  return param_2;
}



/* Entry: 101f3795c; end: 101f379db;  */

void FUN_101f3795c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3199c;
  func_0x000107c61520(&UNK_10da3199c,&UNK_1104a29f0);
  puRam0000000112e41ec0 = puVar1;
  return;
}



/* Entry: 101f379dc; end: 101f37a4b;  */

void FUN_101f379dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112e41ee0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e41ed8;
  func_0x00010002969c(0x112e41ed8,&UNK_10da316a0);
  uVar2 = uVar1;
  FUN_101f37a4c();
  puVar3 = PTR___sSayxGSesSeRzlMc_11034dd10;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,uVar1,&uStack_28);
  puRam0000000112e41ee0 = puVar3;
  return;
}



/* Entry: 101f37a4c; end: 101f37a8b;  */

void FUN_101f37a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41ee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da315dc;
  func_0x000107c61520(&UNK_10da315dc,&UNK_1104a2838);
  puRam0000000112e41ee8 = puVar1;
  return;
}



/* Entry: 101f37a8c; end: 101f37aeb;  */

undefined8 FUN_101f37a8c(undefined8 param_1,undefined8 param_2)

{
  FUN_101f372d0(param_2,param_1,&UNK_1104a27a8);
  return param_2;
}



/* Entry: 101f37aec; end: 101f37eeb;  */

int FUN_101f37aec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f37b68;
        goto LAB_101f37b4c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f37b4c:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_101f37b68:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f37eec; end: 101f37f2b;  */

void FUN_101f37eec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31744;
  func_0x000107c61520(&UNK_10da31744,&UNK_1104a2a80);
  puRam0000000112e41ef0 = puVar1;
  return;
}



/* Entry: 101f37f2c; end: 101f37f2f;  */

void FUN_101f37f2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31834;
  func_0x000107c61520(&UNK_10da31834,&UNK_1104a29f0);
  puRam0000000112e41ef8 = puVar1;
  return;
}



/* Entry: 101f37f30; end: 101f37f6f;  */

void FUN_101f37f30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31834;
  func_0x000107c61520(&UNK_10da31834,&UNK_1104a29f0);
  puRam0000000112e41ef8 = puVar1;
  return;
}



/* Entry: 101f37f70; end: 101f37f73;  */

void FUN_101f37f70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31924;
  func_0x000107c61520(&UNK_10da31924,&UNK_1104a2960);
  puRam0000000112e41f00 = puVar1;
  return;
}



/* Entry: 101f37f74; end: 101f37fb3;  */

void FUN_101f37f74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31924;
  func_0x000107c61520(&UNK_10da31924,&UNK_1104a2960);
  puRam0000000112e41f00 = puVar1;
  return;
}



/* Entry: 101f37fb4; end: 101f37fb7;  */

void FUN_101f37fb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31884;
  func_0x000107c61520(&UNK_10da31884,&UNK_1104a2960);
  puRam0000000112e41f08 = puVar1;
  return;
}



/* Entry: 101f37fb8; end: 101f37ff7;  */

void FUN_101f37fb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31884;
  func_0x000107c61520(&UNK_10da31884,&UNK_1104a2960);
  puRam0000000112e41f08 = puVar1;
  return;
}



/* Entry: 101f37ff8; end: 101f37ffb;  */

void FUN_101f37ff8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3185c;
  func_0x000107c61520(&UNK_10da3185c,&UNK_1104a2960);
  puRam0000000112e41f10 = puVar1;
  return;
}



/* Entry: 101f37ffc; end: 101f3803b;  */

void FUN_101f37ffc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3185c;
  func_0x000107c61520(&UNK_10da3185c,&UNK_1104a2960);
  puRam0000000112e41f10 = puVar1;
  return;
}



/* Entry: 101f3803c; end: 101f3803f;  */

void FUN_101f3803c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31794;
  func_0x000107c61520(&UNK_10da31794,&UNK_1104a29f0);
  puRam0000000112e41f18 = puVar1;
  return;
}



/* Entry: 101f38040; end: 101f3807f;  */

void FUN_101f38040(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31794;
  func_0x000107c61520(&UNK_10da31794,&UNK_1104a29f0);
  puRam0000000112e41f18 = puVar1;
  return;
}



/* Entry: 101f38080; end: 101f38083;  */

void FUN_101f38080(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3176c;
  func_0x000107c61520(&UNK_10da3176c,&UNK_1104a29f0);
  puRam0000000112e41f20 = puVar1;
  return;
}



/* Entry: 101f38084; end: 101f380c3;  */

void FUN_101f38084(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3176c;
  func_0x000107c61520(&UNK_10da3176c,&UNK_1104a29f0);
  puRam0000000112e41f20 = puVar1;
  return;
}



/* Entry: 101f380c4; end: 101f380c7;  */

void FUN_101f380c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da316dc;
  func_0x000107c61520(&UNK_10da316dc,&UNK_1104a2a80);
  puRam0000000112e41f28 = puVar1;
  return;
}



/* Entry: 101f380c8; end: 101f38107;  */

void FUN_101f380c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da316dc;
  func_0x000107c61520(&UNK_10da316dc,&UNK_1104a2a80);
  puRam0000000112e41f28 = puVar1;
  return;
}



/* Entry: 101f38108; end: 101f3810b;  */

void FUN_101f38108(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da316b4;
  func_0x000107c61520(&UNK_10da316b4,&UNK_1104a2a80);
  puRam0000000112e41f30 = puVar1;
  return;
}



/* Entry: 101f3810c; end: 101f3814b;  */

void FUN_101f3810c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da316b4;
  func_0x000107c61520(&UNK_10da316b4,&UNK_1104a2a80);
  puRam0000000112e41f30 = puVar1;
  return;
}



/* Entry: 101f3814c; end: 101f381a7;  */

undefined1 FUN_101f3814c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101f381a8; end: 101f381cb;  */

void FUN_101f381a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f381cc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f381cc; end: 101f3820b;  */

void FUN_101f381cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31a84;
  func_0x000107c61520(&UNK_10da31a84,&UNK_1104a2b80);
  puRam0000000112e42060 = puVar1;
  return;
}



/* Entry: 101f3820c; end: 101f38213;  */

undefined8 FUN_101f3820c(void)

{
  return 1;
}



/* Entry: 101f38214; end: 101f38237;  */

void FUN_101f38214(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 101f38238; end: 101f38263;  */

undefined1  [16] FUN_101f38238(void)

{
  return ZEXT816(0x1104a2b80);
}



/* Entry: 101f38264; end: 101f38287;  */

void FUN_101f38264(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f38288();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f38288; end: 101f382c7;  */

void FUN_101f38288(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31b24;
  func_0x000107c61520(&UNK_10da31b24,&UNK_1104a2be0);
  puRam0000000112e42068 = puVar1;
  return;
}



/* Entry: 101f382c8; end: 101f382cf;  */

undefined8 FUN_101f382c8(void)

{
  return 1;
}



/* Entry: 101f382d0; end: 101f382f3;  */

void FUN_101f382d0(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 101f382f4; end: 101f3831f;  */

undefined1  [16] FUN_101f382f4(void)

{
  return ZEXT816(0x1104a2be0);
}



/* Entry: 101f38320; end: 101f38343;  */

void FUN_101f38320(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f38344();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f38344; end: 101f38383;  */

void FUN_101f38344(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31bb4;
  func_0x000107c61520(&UNK_10da31bb4,&UNK_1104a2c40);
  puRam0000000112e42070 = puVar1;
  return;
}



/* Entry: 101f38384; end: 101f3838b;  */

undefined8 FUN_101f38384(void)

{
  return 1;
}



/* Entry: 101f3838c; end: 101f383af;  */

void FUN_101f3838c(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 101f383b0; end: 101f383c7;  */

undefined1  [16] FUN_101f383b0(void)

{
  return ZEXT816(0x1104a2c40);
}



/* Entry: 101f383c8; end: 101f3841b;  */

void FUN_101f383c8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3841c; end: 101f38437;  */

void FUN_101f3841c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x692d646e65697266,0xe900000000000064);
  return;
}



/* Entry: 101f38438; end: 101f38487;  */

void FUN_101f38438(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f38488; end: 101f384f3;  */

void FUN_101f38488(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101f384f4; end: 101f3852f;  */

void FUN_101f384f4(undefined8 *param_1)

{
  *param_1 = 0x692d646e65697266;
  param_1[1] = 0xe900000000000064;
  return;
}



/* Entry: 101f38530; end: 101f3859f;  */

void FUN_101f38530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 101f385a0; end: 101f385b7;  */

undefined1  [16] FUN_101f385a0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f385b8; end: 101f38607;  */

void FUN_101f385b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f38608();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f38608; end: 101f38647;  */

void FUN_101f38608(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31d90;
  func_0x000107c61520(&UNK_10da31d90,&UNK_1104a2d90);
  puRam0000000112e42080 = puVar1;
  return;
}



/* Entry: 101f38648; end: 101f38667;  */

undefined1  [16] FUN_101f38648(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000746168;
  auVar1._0_8_ = 0x632d68636e75616c;
  return auVar1;
}



/* Entry: 101f38668; end: 101f3868b;  */

void FUN_101f38668(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3868c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3868c; end: 101f386cb;  */

void FUN_101f3868c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31c4c;
  func_0x000107c61520(&UNK_10da31c4c,&UNK_1104a2cf8);
  puRam0000000112e42088 = puVar1;
  return;
}



/* Entry: 101f386cc; end: 101f386fb;  */

long FUN_101f386cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101f386fc; end: 101f38823;  */

/* WARNING: Removing unreachable block (ram,0x000101f387c0) */

void FUN_101f386fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e42078;
  func_0x0001000285a8(0x112e42078,&UNK_10da31c00);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f38608();
  puVar5 = &UNK_1104a2d90;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a2d90,&UNK_1104a2d90,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f38824; end: 101f3882b;  */

void FUN_101f38824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f3882c; end: 101f3889b;  */

undefined8 * FUN_101f3882c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f3889c; end: 101f38a1f;  */

int FUN_101f3889c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f38a20; end: 101f38a5f;  */

void FUN_101f38a20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31d68;
  func_0x000107c61520(&UNK_10da31d68,&UNK_1104a2d90);
  puRam0000000112e42090 = puVar1;
  return;
}



/* Entry: 101f38a60; end: 101f38a63;  */

void FUN_101f38a60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31cc8;
  func_0x000107c61520(&UNK_10da31cc8,&UNK_1104a2d90);
  puRam0000000112e42098 = puVar1;
  return;
}



/* Entry: 101f38a64; end: 101f38aa3;  */

void FUN_101f38a64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31cc8;
  func_0x000107c61520(&UNK_10da31cc8,&UNK_1104a2d90);
  puRam0000000112e42098 = puVar1;
  return;
}



/* Entry: 101f38aa4; end: 101f38aa7;  */

void FUN_101f38aa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e420a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31ca0;
  func_0x000107c61520(&UNK_10da31ca0,&UNK_1104a2d90);
  puRam0000000112e420a0 = puVar1;
  return;
}



/* Entry: 101f38aa8; end: 101f38ae7;  */

void FUN_101f38aa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e420a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31ca0;
  func_0x000107c61520(&UNK_10da31ca0,&UNK_1104a2d90);
  puRam0000000112e420a0 = puVar1;
  return;
}



/* Entry: 101f38ae8; end: 101f38b03;  */

undefined8 * FUN_101f38ae8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f38b04; end: 101f38dcb;  */

void FUN_101f38b04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar2 = 0xe900000000000064;
  uVar4 = 0x692d7265646e6573;
  if (bVar5 != 3) {
    uVar2 = 0xec00000074786574;
    uVar4 = 0x2d73736572646461;
  }
  uVar1 = 0x64692d706f7264;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x656475746974616c;
  if (bVar5 != 0) {
    uVar2 = 0x64757469676e6f6c;
  }
  uVar3 = 0xe800000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe900000000000065;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f38dcc; end: 101f38f1f;  */

void FUN_101f38dcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar2 = 0xe900000000000064;
  uVar4 = 0x692d7265646e6573;
  if (bVar5 != 3) {
    uVar2 = 0xec00000074786574;
    uVar4 = 0x2d73736572646461;
  }
  uVar1 = 0x64692d706f7264;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x656475746974616c;
  if (bVar5 != 0) {
    uVar2 = 0x64757469676e6f6c;
  }
  uVar3 = 0xe800000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe900000000000065;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  return;
}



/* Entry: 101f38f20; end: 101f38f43;  */

void FUN_101f38f20(undefined1 *param_1,undefined1 param_2)

{
  func_0x000101f39170();
  *param_1 = param_2;
  return;
}



/* Entry: 101f38f44; end: 101f38f5b;  */

undefined1  [16] FUN_101f38f44(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f38f5c; end: 101f38fab;  */

void FUN_101f38f5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f396e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f38fac; end: 101f38fcb;  */

undefined1  [16] FUN_101f38fac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec00000073706f72;
  auVar1._0_8_ = 0x642d68636e75616c;
  return auVar1;
}



/* Entry: 101f38fcc; end: 101f39013;  */

uint FUN_101f38fcc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_101f39054(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101f39014; end: 101f39053;  */

void FUN_101f39014(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101f391d4(&uStack_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = uStack_38;
    param_1[4] = uStack_40;
    param_1[7] = uStack_28;
    param_1[6] = uStack_30;
  }
  return;
}



/* Entry: 101f39054; end: 101f391d3;  */

undefined8 FUN_101f39054(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((*param_1 != *param_2) || (param_1[1] != param_2[1])) {
    return 0;
  }
  dVar1 = param_1[2];
  if ((dVar1 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(dVar1,param_1[3],param_2[2],param_2[3],0), ((ulong)dVar1 & 1) == 0)) {
    return 0;
  }
  dVar2 = param_1[5];
  dVar1 = param_2[5];
  if (dVar2 == 0.0) {
    if (dVar1 != 0.0) {
      return 0;
    }
  }
  else {
    if (dVar1 == 0.0) {
      return 0;
    }
    dVar3 = param_1[4];
    if (((dVar3 != param_2[4]) || (dVar2 != dVar1)) &&
       (func_0x000107c605b8(dVar3,dVar2,param_2[4],dVar1,0), ((ulong)dVar3 & 1) == 0)) {
      return 0;
    }
  }
  dVar2 = param_1[7];
  dVar1 = param_2[7];
  if (dVar2 == 0.0) {
    if (dVar1 == 0.0) {
      return 1;
    }
  }
  else if (dVar1 != 0.0) {
    dVar3 = param_1[6];
    if ((dVar3 == param_2[6]) && (dVar2 == dVar1)) {
      return 1;
    }
    func_0x000107c605b8(dVar3,dVar2,param_2[6],dVar1,0);
    if (((ulong)dVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 101f391d4; end: 101f3942b;  */

/* WARNING: Removing unreachable block (ram,0x000101f39344) */
/* WARNING: Removing unreachable block (ram,0x000101f39398) */
/* WARNING: Removing unreachable block (ram,0x000101f392e0) */

void FUN_101f391d4(ulong *param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_140 [8];
  ulong uStack_138;
  undefined1 auStack_130 [64];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong *puStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  undefined1 *puStack_78;
  ulong uStack_70;
  undefined1 uStack_51;
  
  uVar3 = 0x112e42130;
  func_0x0001000285a8(0x112e42130,&UNK_10da31e70);
  lVar10 = *(long *)(uVar3 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  lVar4 = param_3;
  func_0x0001000a8868(param_3,uVar1);
  FUN_101f396e8();
  func_0x000107c606e0(auStack_140 + -extraout_x8,&UNK_1104a2f90,&UNK_1104a2f90,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_f0 = uStack_f0 & 0xffffffffffffff00;
    func_0x000107c604fc(&uStack_f0,uVar3);
    uStack_f0._0_1_ = 1;
    uStack_a8 = param_2;
    func_0x000107c604fc(&uStack_f0,uVar3);
    uStack_f0._0_1_ = 2;
    puVar5 = &uStack_f0;
    uVar8 = uVar3;
    uStack_a0 = param_2;
    func_0x000107c604f4();
    uStack_f0 = CONCAT71(uStack_f0._1_7_,3);
    puVar6 = &uStack_f0;
    uVar9 = uVar3;
    puStack_98 = puVar5;
    uStack_90 = uVar8;
    func_0x000107c604d4();
    uStack_51 = 4;
    puVar7 = &uStack_51;
    uVar8 = uVar3;
    uStack_138 = uVar9;
    puStack_88 = puVar6;
    uStack_80 = uVar9;
    func_0x000107c604d4();
    (**(code **)(lVar10 + 8))(auStack_140 + -extraout_x8,uVar3);
    uStack_e8 = uStack_a0;
    uStack_f0 = uStack_a8;
    uStack_d8 = uStack_90;
    puStack_e0 = puStack_98;
    uStack_c8 = uStack_80;
    puStack_d0 = puStack_88;
    puStack_c0 = puVar7;
    uStack_b8 = uVar8;
    puStack_78 = puVar7;
    uStack_70 = uVar8;
    FUN_101f39728(&uStack_f0,auStack_130);
    func_0x0001000834e4(param_3);
    func_0x000101f3975c(&uStack_a8);
    param_1[1] = uStack_e8;
    *param_1 = uStack_f0;
    param_1[3] = uStack_d8;
    param_1[2] = (ulong)puStack_e0;
    param_1[5] = uStack_c8;
    param_1[4] = (ulong)puStack_d0;
    param_1[7] = uStack_b8;
    param_1[6] = (ulong)puStack_c0;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 101f3942c; end: 101f3944f;  */

void FUN_101f3942c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f39450();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f39450; end: 101f3948f;  */

void FUN_101f39450(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31e24;
  func_0x000107c61520(&UNK_10da31e24,&UNK_1104a2ee8);
  puRam0000000112e42128 = puVar1;
  return;
}



/* Entry: 101f39490; end: 101f394eb;  */

long FUN_101f39490(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f394ec; end: 101f395e3;  */

undefined8 * FUN_101f394ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 101f395e4; end: 101f3963f;  */

undefined8 * FUN_101f395e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f39640; end: 101f396e7;  */

int FUN_101f39640(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f396e8; end: 101f39727;  */

void FUN_101f396e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31f74;
  func_0x000107c61520(&UNK_10da31f74,&UNK_1104a2f90);
  puRam0000000112e42138 = puVar1;
  return;
}



/* Entry: 101f39728; end: 101f39787;  */

undefined8 FUN_101f39728(undefined8 param_1,undefined8 param_2)

{
  FUN_101f394ec(param_2,param_1,&UNK_1104a2ee8);
  return param_2;
}



/* Entry: 101f39788; end: 101f398ef;  */

int FUN_101f39788(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f39804;
        goto LAB_101f397e8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f397e8:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101f39804:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f398f0; end: 101f3992f;  */

void FUN_101f398f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31f4c;
  func_0x000107c61520(&UNK_10da31f4c,&UNK_1104a2f90);
  puRam0000000112e42140 = puVar1;
  return;
}



/* Entry: 101f39930; end: 101f39933;  */

void FUN_101f39930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31eac;
  func_0x000107c61520(&UNK_10da31eac,&UNK_1104a2f90);
  puRam0000000112e42148 = puVar1;
  return;
}



/* Entry: 101f39934; end: 101f39973;  */

void FUN_101f39934(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31eac;
  func_0x000107c61520(&UNK_10da31eac,&UNK_1104a2f90);
  puRam0000000112e42148 = puVar1;
  return;
}



/* Entry: 101f39974; end: 101f39977;  */

void FUN_101f39974(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31e84;
  func_0x000107c61520(&UNK_10da31e84,&UNK_1104a2f90);
  puRam0000000112e42150 = puVar1;
  return;
}



/* Entry: 101f39978; end: 101f399b7;  */

void FUN_101f39978(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da31e84;
  func_0x000107c61520(&UNK_10da31e84,&UNK_1104a2f90);
  puRam0000000112e42150 = puVar1;
  return;
}



/* Entry: 101f399b8; end: 101f39a63;  */

void FUN_101f399b8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}


