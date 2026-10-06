/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100694058; end: 10069407f;  */

undefined8 * FUN_100694058(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_100694034(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 100694080; end: 1006940e3;  */

undefined8 * FUN_100694080(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_100694058(param_1 + 1,&uStack_60);
  FUN_100693fec((ulong)&uStack_60 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_100693fec(param_1 + 2);
  return param_1;
}



/* Entry: 1006940e4; end: 1006940eb;  */

void FUN_1006940e4(void)

{
  return;
}



/* Entry: 1006940ec; end: 100694107;  */

void FUN_1006940ec(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 100694108; end: 10069411f;  */

void FUN_100694108(undefined8 param_1)

{
  undefined8 in_stack_00000018;
  long alStack_2d8 [27];
  byte bStack_200;
  long alStack_1f8 [27];
  byte bStack_120;
  undefined1 auStack_118 [232];
  
  func_0x000100694114(&stack0x00000650,param_1,in_stack_00000018);
  FUN_1006941fc();
  func_0x000100694e88(auStack_118);
  FUN_100694e94();
  func_0x0001005f7178(alStack_1f8,auStack_118);
  func_0x0001005f73dc(alStack_2d8);
  while ((((bStack_120 & 1) != 0 || ((bStack_200 & 1) != 0)) && (alStack_1f8[0] != alStack_2d8[0])))
  {
    func_0x000107c28eec(alStack_1f8);
    func_0x000107c32564();
    FUN_1005f6ee0(alStack_1f8);
  }
  FUN_100694ff0(alStack_2d8);
  FUN_100694ff0(alStack_1f8);
  FUN_1005f73e4(auStack_118);
  return;
}



/* Entry: 100694120; end: 1006941fb;  */

void FUN_100694120(void)

{
  long alStack_2d8 [27];
  byte bStack_200;
  long alStack_1f8 [27];
  byte bStack_120;
  undefined1 auStack_118 [232];
  
  func_0x000100694114();
  FUN_1006941fc();
  func_0x000100694e88(auStack_118);
  FUN_100694e94();
  func_0x0001005f7178(alStack_1f8,auStack_118);
  func_0x0001005f73dc(alStack_2d8);
  while ((((bStack_120 & 1) != 0 || ((bStack_200 & 1) != 0)) && (alStack_1f8[0] != alStack_2d8[0])))
  {
    func_0x000107c28eec(alStack_1f8);
    func_0x000107c32564();
    FUN_1005f6ee0(alStack_1f8);
  }
  FUN_100694ff0(alStack_2d8);
  FUN_100694ff0(alStack_1f8);
  FUN_1005f73e4(auStack_118);
  return;
}



/* Entry: 1006941fc; end: 1006942eb;  */

void FUN_1006941fc(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_438 [488];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_58 [24];
  
  func_0x00010066d6c0();
  if ((bool)in_ZR) {
    FUN_1005ecc68();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      uStack_250 = 0;
      uStack_248 = 0;
      func_0x000107c34210();
      func_0x000107c34374(auStack_58);
      func_0x000107c34310();
      FUN_10054f908();
      func_0x000107c34480();
      func_0x000107c34538();
      func_0x000107c343ac();
      func_0x000107c344e4();
      func_0x000107c34468();
      func_0x000107c34460();
    }
  }
  FUN_10065f0a0(auStack_438,*(long *)(unaff_x21 + 0x20) + 0x578);
  func_0x00010066b7f4(&uStack_250,auStack_438);
  FUN_10066b99c(&uStack_250);
  FUN_1006943bc();
  FUN_10066ba18(&uStack_250);
  func_0x00010066ba20();
  return;
}



/* Entry: 1006942ec; end: 100694307;  */

void FUN_1006942ec(undefined8 param_1)

{
  FUN_1000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006bbd20,param_1);
  return;
}



/* Entry: 100694308; end: 100694357;  */

void FUN_100694308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100694358; end: 10069438f;  */

void FUN_100694358(undefined8 param_1)

{
  FUN_1000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1006bbdc4,param_1);
  return;
}



/* Entry: 100694390; end: 1006943af;  */

void FUN_100694390(void)

{
  func_0x000107c61168(&PTR_PTR_11295ebf8);
  return;
}



/* Entry: 1006943b0; end: 1006943bb;  */

undefined8 FUN_1006943b0(undefined8 param_1)

{
  func_0x00010054f8c8();
  FUN_100292164();
  return param_1;
}



/* Entry: 1006943bc; end: 10069444f;  */

void FUN_1006943bc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1006943b0();
  FUN_100694450(param_1 + 0x18,unaff_x20 + 0x18);
  func_0x000107c60c94(unaff_x19 + 0x130,unaff_x20 + 0x130);
  func_0x000107c610b4(unaff_x19 + 0x148,unaff_x20 + 0x148,0x48);
  func_0x0001005fad5c(unaff_x19 + 400,unaff_x20 + 400);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1b8);
  *(undefined8 *)(unaff_x19 + 0x1c5) = *(undefined8 *)(unaff_x20 + 0x1c5);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x1c0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar3;
  return;
}



/* Entry: 100694450; end: 10069446f;  */

void FUN_100694450(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010069445c(param_1,0,param_2);
  FUN_1006946e0(&PTR_DAT_110a8d5f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c348cc();
  }
  func_0x0001006946ec();
  FUN_100694718();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x21;
  func_0x00010069486c((undefined8 *)(unaff_x19 + 0x30),unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x21;
  func_0x00010069487c((undefined8 *)(unaff_x19 + 0x48),unaff_x20 + 0x48);
  lVar2 = unaff_x20 + 0x60;
  func_0x0001002a0e60();
  *(long *)(unaff_x19 + 0x60) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010069488c();
  }
  *(long *)(unaff_x19 + 0x68) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_1006948a0();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010069488c();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_100694a30();
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_100694c50();
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a420();
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a424();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010069488c();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a428();
  }
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_100694d40();
  }
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a430();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a37c();
  }
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a380();
  }
  *(undefined8 *)(unaff_x19 + 200) = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a434();
  }
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c2a438();
  }
  *(undefined8 *)(unaff_x19 + 0xd8) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x10f) = *(undefined8 *)(unaff_x20 + 0x10f);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  return;
}



/* Entry: 100694470; end: 1006946df;  */

void FUN_100694470(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010069445c();
  FUN_1006946e0(&PTR_DAT_110a8d5f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c348cc();
  }
  func_0x0001006946ec();
  FUN_100694718();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x21;
  func_0x00010069486c((undefined8 *)(unaff_x19 + 0x30),unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x21;
  func_0x00010069487c((undefined8 *)(unaff_x19 + 0x48),unaff_x20 + 0x48);
  lVar2 = unaff_x20 + 0x60;
  func_0x0001002a0e60();
  *(long *)(unaff_x19 + 0x60) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010069488c();
  }
  *(long *)(unaff_x19 + 0x68) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_1006948a0();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010069488c();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_100694a30();
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_100694c50();
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a420();
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a424();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010069488c();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a428();
  }
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_100694d40();
  }
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a430();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a37c();
  }
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a380();
  }
  *(undefined8 *)(unaff_x19 + 200) = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a434();
  }
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c2a438();
  }
  *(undefined8 *)(unaff_x19 + 0xd8) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x10f) = *(undefined8 *)(unaff_x20 + 0x10f);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  return;
}



/* Entry: 1006946e0; end: 100694717;  */

void FUN_1006946e0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = param_1;
  return;
}



/* Entry: 100694718; end: 100694737;  */

void FUN_100694718(void)

{
  func_0x000100694704();
  FUN_100694738();
  return;
}



/* Entry: 100694738; end: 10069475b;  */

void FUN_100694738(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_100361ce4();
  plVar2 = param_1;
  FUN_10064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  FUN_100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10069475c; end: 10069482f;  */

void FUN_10069475c(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010069474c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_10068e734();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x000107c3493c();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x24) = 1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  func_0x00010069484c();
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c348d4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 100694830; end: 10069489f;  */

void FUN_100694830(undefined8 param_1)

{
  FUN_1000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006bbda8,param_1);
  return;
}



/* Entry: 1006948a0; end: 1006948d7;  */

undefined8 * FUN_1006948a0(undefined8 *param_1)

{
  int iVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000100694894();
  if (param_1 == (undefined8 *)0x0) {
    FUN_1006948d8();
  }
  else {
    param_1 = unaff_x20;
    func_0x000107c347dc();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_110a817c0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107c347bc();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 1) {
    FUN_100694948();
    param_1[2] = unaff_x20;
  }
  return param_1;
}



/* Entry: 1006948d8; end: 1006948df;  */

void FUN_1006948d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 1006948e0; end: 100694947;  */

undefined8 * FUN_1006948e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a817c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c347bc();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 1) {
    FUN_100694948(param_2,*(undefined8 *)(param_3 + 0x10));
    param_1[2] = param_2;
  }
  return param_1;
}



/* Entry: 100694948; end: 1006949bf;  */

undefined8 * FUN_100694948(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x28);
  }
  *puVar1 = &PTR_DAT_110a81770;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)((long)puVar1 + 0x1f) = 0;
  FUN_1006949c0();
  return puVar1;
}



/* Entry: 1006949c0; end: 100694a2f;  */

void FUN_1006949c0(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 100694a30; end: 100694af3;  */

undefined8 * FUN_100694a30(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000100694a24();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x88;
    func_0x000107c60e20();
  }
  else {
    puVar1 = unaff_x21;
    func_0x000107c303f0();
  }
  puVar1[1] = unaff_x21;
  *puVar1 = &PTR_DAT_110a8d418;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107c348cc();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_100694af4(puVar1 + 3);
  FUN_100694af4(puVar1 + 6);
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_100694afc();
  }
  puVar1[9] = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(unaff_x19 + 0x80);
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
  puVar1[0xf] = uVar7;
  puVar1[0xe] = uVar6;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  return puVar1;
}



/* Entry: 100694af4; end: 100694afb;  */

undefined8 * FUN_100694af4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x21;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = unaff_x21;
  func_0x0001006900e0(param_1,param_3);
  return param_1;
}



/* Entry: 100694afc; end: 100694b8f;  */

undefined8 * FUN_100694afc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_10066b320();
  }
  else {
    func_0x000107c34904();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_110a8d378;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000107c348cc();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_100694b90(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_100694b90(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  return puVar2;
}



/* Entry: 100694b90; end: 100694beb;  */

undefined8 * FUN_100694b90(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000100694a24();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000100694bec();
  }
  else {
    param_1 = unaff_x21;
    func_0x000107c34924();
  }
  *param_1 = &PTR_DAT_110a8d0f8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x000100694bf4();
  return param_1;
}



/* Entry: 100694bec; end: 100694c4f;  */

void FUN_100694bec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 100694c50; end: 100694c8b;  */

undefined8 * FUN_100694c50(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000100694c44();
  if (param_1 == 0) {
    unaff_x20 = (undefined8 *)0x48;
    func_0x000107c60e20();
  }
  else {
    param_2 = 0x48;
    func_0x000107c303f0();
  }
  FUN_100694c8c();
  unaff_x20[1] = param_2;
  *unaff_x20 = &PTR_DAT_110a81e60;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c30374(unaff_x20 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x20 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x20 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c2a2d8(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  unaff_x20[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c2a2d8(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  unaff_x20[4] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x31);
  *(undefined8 *)((long)unaff_x20 + 0x39) = *(undefined8 *)(param_3 + 0x39);
  *(undefined8 *)((long)unaff_x20 + 0x31) = uVar4;
  unaff_x20[6] = uVar3;
  unaff_x20[5] = uVar2;
  return unaff_x20;
}



/* Entry: 100694c8c; end: 100694c97;  */

void FUN_100694c8c(void)

{
  return;
}



/* Entry: 100694c98; end: 100694d33;  */

undefined8 * FUN_100694c98(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a81e60;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c2a2d8(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c2a2d8(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x31);
  *(undefined8 *)((long)param_1 + 0x39) = *(undefined8 *)(param_3 + 0x39);
  *(undefined8 *)((long)param_1 + 0x31) = uVar4;
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 100694d34; end: 100694d3f;  */

void FUN_100694d34(void)

{
  return;
}



/* Entry: 100694d40; end: 100694da7;  */

undefined8 * FUN_100694d40(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000100694a24();
  if (param_1 == (undefined8 *)0x0) {
    FUN_10066b320();
  }
  else {
    param_1 = unaff_x21;
    func_0x000107c303f0();
  }
  *param_1 = &PTR_DAT_110a8d058;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_100694da8();
  return param_1;
}



/* Entry: 100694da8; end: 100694e0b;  */

void FUN_100694da8(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 100694e0c; end: 100694e57;  */

void FUN_100694e0c(undefined8 param_1)

{
  FUN_1000285a8(0x11302a510,&UNK_10dca58e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006bbbb0,param_1);
  return;
}



/* Entry: 100694e58; end: 100694e77;  */

void FUN_100694e58(void)

{
  func_0x000107c61168(&PTR_PTR_11295de88);
  return;
}



/* Entry: 100694e78; end: 100694e93;  */

void FUN_100694e78(void)

{
  return;
}



/* Entry: 100694e94; end: 100694f13;  */

void FUN_100694e94(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  FUN_1005ee630();
  if ((bool)in_ZR) {
    FUN_1005ecc68();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c34184();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3423c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_10066cbdc(*(undefined8 *)(unaff_x21 + 0x20));
  FUN_100694f14();
  return;
}



/* Entry: 100694f14; end: 100694f37;  */

void FUN_100694f14(void)

{
  func_0x0001005ed940();
  FUN_1005f6d74();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_1005f6e8c();
  return;
}



/* Entry: 100694f38; end: 100694f8f;  */

void FUN_100694f38(void)

{
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_1005f6e8c();
  return;
}



/* Entry: 100694f90; end: 100694fef;  */

void FUN_100694f90(void)

{
  func_0x000107c61168(&PTR_PTR_11295db40);
  return;
}



/* Entry: 100694ff0; end: 100694ff7;  */

void FUN_100694ff0(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x000107c28f8c();
  }
  return;
}



/* Entry: 100694ff8; end: 100695017;  */

void FUN_100694ff8(void)

{
  func_0x000107c61168(&PTR_PTR_112ef7308);
  return;
}



/* Entry: 100695018; end: 100695033;  */

undefined1 * FUN_100695018(void)

{
  char in_stack_00000490;
  
  if (in_stack_00000490 == '\x01') {
    func_0x0001006b7604();
  }
  else {
    FUN_10066b480(&stack0x000002c0,&stack0x00000650);
  }
  return &stack0x000002c0;
}



/* Entry: 100695034; end: 100695347;  */

void FUN_100695034(long param_1,ulong param_2,long param_3,long param_4)

{
  byte bVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  code *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  int iStack_60;
  undefined1 uStack_5c;
  
  FUN_10007847c(auStack_b8,&UNK_10f4b15b7);
  if (((*(byte *)(param_3 + 0x60) >> 2 & 1) == 0) ||
     (*(int *)(*(long *)(param_3 + 0x78) + 0xa8) != 0x17)) {
    lVar5 = 0;
    lStack_c0 = 0;
  }
  else {
    lVar5 = 0x1a8;
    func_0x000107c60e20();
    FUN_10068e4a4();
    lStack_c0 = lVar5;
    func_0x000107c28f04(lVar5 + 0x50,param_2 + 0xd0);
    FUN_10069b7f4(*(undefined8 *)(param_2 + 0x70));
    (*extraout_x8)();
  }
  if (lVar5 != 0) {
    param_3 = lVar5;
  }
  iVar4 = (int)param_3 + 0x50;
  FUN_100695348(&uStack_a0);
  func_0x000100695494(*(undefined8 *)(param_3 + 0x78));
  uStack_5c = *(undefined1 *)(param_3 + 0x148);
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  uStack_68 = cStack_88 == '\x01';
  if ((bool)uStack_68) {
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    uStack_70 = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
  }
  iStack_60 = iVar4;
  FUN_1006954e4(param_1,param_2,param_3,&uStack_80,param_4);
  FUN_1001148fc(&uStack_80);
  func_0x00010069c688();
  uVar9 = *(ulong *)(param_4 + 0x30);
  puVar2 = (ulong *)(param_4 + 0x30);
  if ((uVar9 & 1) != 0) {
    puVar2 = (ulong *)(uVar9 + 7);
  }
  for (lVar5 = (long)*(int *)(param_4 + 0x38) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    if ((*(char *)(param_3 + 0x28) == '\x01') &&
       (uVar9 = *puVar2, *(ulong *)(param_3 + 0x20) <= *(ulong *)(uVar9 + 0x28))) {
      ppuVar3 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(uVar9 + 0x18) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(uVar9 + 0x18);
      }
      uVar6 = param_2;
      FUN_1006933e4(param_2,ppuVar3);
      if (((uVar6 & 1) != 0) ||
         (*(char *)(param_3 + 0x28) == '\x01' &&
          *(ulong *)(uVar9 + 0x40) < *(ulong *)(param_3 + 0x20))) {
        ppuVar3 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(uVar9 + 0x18) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(uVar9 + 0x18);
        }
        FUN_100696384(&uStack_80,ppuVar3);
        FUN_10069c690(param_1 + 0x3d8,&uStack_80);
        FUN_100100fec(&uStack_80);
      }
    }
    puVar2 = puVar2 + 1;
  }
  lVar10 = *(long *)(param_1 + 0x470);
  for (lVar5 = *(long *)(param_1 + 0x468); lVar5 != lVar10; lVar5 = lVar5 + 0x60) {
    lVar7 = lVar5;
    FUN_1006760d0(lVar5,param_2);
    if ((int)lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      if (*(long *)(param_4 + 0x1a8) < *(long *)(lVar5 + 0x48)) {
        uVar8 = *(undefined1 *)(lVar5 + 0x50);
      }
    }
    *(undefined1 *)(lVar5 + 0x58) = uVar8;
  }
  func_0x00010069cca4(&uStack_80,param_3);
  FUN_10065ad64(param_1 + 0x3f0,&uStack_80);
  func_0x0001005fb56c(&uStack_80);
  ppuVar3 = &PTR_PTR_11327ab60;
  if (*(undefined ***)(param_4 + 0x98) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_4 + 0x98);
  }
  bVar1 = 0;
  if (ppuVar3[0xc] <= *(undefined **)(param_3 + 0x20)) {
    bVar1 = (*(int *)(param_4 + 0x108) == 0 && ppuVar3[0xc] != (undefined *)0x0) &
            *(byte *)(param_3 + 0x28);
  }
  *(byte *)(param_1 + 0x4a1) = bVar1;
  FUN_10069cd7c(param_2,param_3,param_4,param_1);
  FUN_10069e51c(&lStack_c0);
  FUN_100078bd8(auStack_b8);
  return;
}



/* Entry: 100695348; end: 10069546f;  */

void FUN_100695348(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [24];
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  ppuVar1 = &PTR_PTR_11326bad8;
  if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x38);
  }
  iVar2 = *(int *)((long)ppuVar1 + 0x24);
  if (iVar2 == 1) {
    func_0x000107c29df4(auStack_48,ppuVar1[3]);
    FUN_100695470();
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        FUN_1002a8234(param_1,(ulong)ppuVar1[3] & 0xfffffffffffffffc);
      }
      goto LAB_1006953d4;
    }
    func_0x000107c60de8(auStack_48,ppuVar1[3]);
    FUN_100695470();
  }
  func_0x00010069547c();
LAB_1006953d4:
  if (*(char *)(param_1 + 3) == '\x01') {
    puVar5 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)((long)*param_1 + param_1[1]);
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      puVar5 = param_1;
      puVar3 = (undefined8 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    }
    if (((ulong)ppuVar1[2] & 1) == 0) {
      for (; puVar5 != puVar3; puVar5 = (undefined8 *)((long)puVar5 + 1)) {
        uVar4 = *(undefined1 *)puVar5;
        func_0x000107c60e84();
        *(undefined1 *)puVar5 = uVar4;
      }
    }
    else {
      for (; puVar5 != puVar3; puVar5 = (undefined8 *)((long)puVar5 + 1)) {
        uVar4 = *(undefined1 *)puVar5;
        func_0x000107c60e80();
        *(undefined1 *)puVar5 = uVar4;
      }
    }
  }
  return;
}



/* Entry: 100695470; end: 1006954e3;  */

void FUN_100695470(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(char *)(unaff_x19 + 3) == '\x01') {
    FUN_100066230();
  }
  else {
    unaff_x19[2] = in_stack_00000018;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
    *(undefined1 *)(unaff_x19 + 3) = 1;
  }
  return;
}



/* Entry: 1006954e4; end: 100696273;  */

void FUN_1006954e4(long param_1,ulong param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  byte bVar20;
  byte bVar21;
  undefined4 uVar22;
  int iVar23;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  undefined **ppuVar24;
  code *extraout_x8_04;
  bool bVar25;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long lVar26;
  long *plVar27;
  byte bVar28;
  byte bVar29;
  undefined **ppuStack_ed0;
  undefined1 uStack_ec4;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined1 auStack_e80 [40];
  undefined1 auStack_e58 [456];
  undefined1 auStack_c90 [40];
  ulong uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  char cStack_c50;
  undefined4 uStack_c48;
  undefined1 uStack_c44;
  ulong uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined1 uStack_c28;
  undefined4 uStack_c20;
  undefined1 uStack_c1c;
  undefined1 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined1 auStack_be8 [64];
  undefined1 auStack_ba8 [568];
  undefined1 uStack_970;
  undefined1 auStack_968 [24];
  undefined1 auStack_950 [32];
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined1 uStack_8f8;
  undefined1 auStack_8f0 [32];
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long *plStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 *puStack_870;
  undefined1 uStack_868;
  long lStack_860;
  byte bStack_858;
  char cStack_818;
  undefined1 auStack_518 [928];
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [24];
  long *plStack_a0;
  code *pcStack_98;
  ulong *puStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  
  FUN_10007847c(auStack_b8,&UNK_10f4b15d0);
  auStack_d8[0] = 0;
  uStack_c0 = 0;
  if ((char)param_3[0x21] == '\x01') {
    plStack_a0 = (long *)0x0;
    pcStack_98 = (code *)0x0;
    puStack_90 = (ulong *)0x0;
    lVar17 = param_3[0x1f];
    for (lVar26 = param_3[0x1e]; lVar26 != lVar17; lVar26 = lVar26 + 0x18) {
      func_0x000107c29070(&plStack_a0,lVar26);
    }
    uStack_8a8 = pcStack_98;
    plStack_8b0 = plStack_a0;
    uStack_8a0 = puStack_90;
    plStack_a0 = (long *)0x0;
    pcStack_98 = (code *)0x0;
    puStack_90 = (ulong *)0x0;
    uStack_898 = CONCAT71(uStack_898._1_7_,1);
    func_0x000107c28e88(auStack_d8,&plStack_8b0);
    FUN_10069b294(&plStack_8b0);
    func_0x000104be1594(&plStack_a0);
  }
  ppuVar2 = &PTR_PTR_113280c30;
  if ((undefined **)param_3[0xf] != (undefined **)0x0) {
    ppuVar2 = (undefined **)param_3[0xf];
  }
  if (param_5 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_5 + 0x18;
    FUN_100696274(lVar26,param_2 + 0x18);
  }
  uStack_100 = uStack_100 & 0xffffffffffffff00;
  cStack_e8 = '\0';
  if (((*(byte *)(param_3 + 0xc) >> 3 & 1) == 0) ||
     ((*(byte *)(param_3[0x10] + 0x10) >> 2 & 1) == 0)) {
LAB_1006956b0:
    bVar4 = false;
    uVar6 = 0;
  }
  else {
    if ((*(byte *)(*(long *)(param_3[0x10] + 0x118) + 0x20) & 1) == 0) {
      (**(code **)(**(long **)(param_2 + 0xc0) + 0x18))
                (&plStack_8b0,*(long **)(param_2 + 0xc0),param_3 + 10);
      func_0x0001052b2b60(&uStack_100,&plStack_8b0);
      FUN_1002a2294(&plStack_8b0);
    }
    if ((char)param_3[5] != '\x01') goto LAB_1006956b0;
    func_0x000107c2a030(&plStack_8b0,*(undefined8 *)(param_2 + 0x70),param_3);
    bVar4 = false;
    if ((cStack_818 == '\x01') && ((bStack_858 & 1) != 0)) {
      bVar4 = param_3[4] <= lStack_860;
    }
    ppuVar12 = &PTR_PTR_113286e08;
    if ((undefined **)param_3[0x10] != (undefined **)0x0) {
      ppuVar12 = (undefined **)param_3[0x10];
    }
    ppuStack_ed0 = &PTR_PTR_113287db8;
    if ((undefined **)ppuVar12[0x23] != (undefined **)0x0) {
      ppuStack_ed0 = (undefined **)ppuVar12[0x23];
    }
    uStack_ec4 = *(undefined1 *)(ppuStack_ed0 + 4);
    func_0x000107c29eb8();
    func_0x000107c290b8(&plStack_8b0);
    uVar6 = 1;
  }
  FUN_1006962a0(&uStack_120,param_2,param_3,lVar26);
  FUN_10054f8dc(&uStack_160,param_3);
  uStack_130 = uStack_150;
  lStack_128 = param_3[3];
  uStack_138 = uStack_158;
  uStack_140 = uStack_160;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  ppuVar12 = &PTR_PTR_11326cb58;
  if ((undefined **)param_3[0xd] != (undefined **)0x0) {
    ppuVar12 = (undefined **)param_3[0xd];
  }
  FUN_100696384(auStack_178,ppuVar12);
  if (cStack_e8 == '\x01') {
    uStack_8c8 = uStack_f8;
    uStack_8d0 = uStack_100;
    uStack_8c0 = uStack_f0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
  }
  else {
    FUN_1006963ec(&uStack_8d0,(ulong)ppuVar2[0xc] & 0xfffffffffffffffc);
  }
  uVar11 = (ulong)*(uint *)(ppuVar2 + 0x15);
  func_0x000100693194(uVar11);
  FUN_100696c78(auStack_8f0,ppuVar2);
  FUN_100696d64(&uStack_930,param_3,*(undefined1 *)(param_2 + 0xe2));
  uStack_908 = uStack_928;
  uStack_910 = uStack_930;
  uStack_900 = uStack_920;
  uStack_920 = 0;
  uStack_928 = 0;
  uStack_930 = 0;
  uStack_8f8 = 1;
  FUN_10069957c(auStack_950,auStack_d8);
  FUN_1006995dc(auStack_968,ppuVar2);
  auStack_ba8[0] = 0;
  uStack_970 = 0;
  ppuVar12 = ppuVar2;
  func_0x000100699a38();
  FUN_100699a74(auStack_be8,ppuVar2);
  uStack_c08 = uStack_118;
  uStack_c10 = uStack_120;
  uStack_bf8 = uStack_108;
  uStack_c00 = uStack_110;
  uVar7 = *(uint *)(param_3 + 0xc);
  if ((uVar7 >> 6 & 1) == 0) {
    uStack_c18 = 0;
    uStack_c40 = uStack_c40 & 0xffffffffffffff00;
  }
  else {
    func_0x000107c29ea0(&uStack_c68,param_3[0x13]);
    uStack_c40 = uStack_c40 & 0xffffffffffffff00;
    uStack_c28 = cStack_c50 == '\x01';
    if ((bool)uStack_c28) {
      uStack_c38 = uStack_c60;
      uStack_c40 = uStack_c68;
      uStack_c30 = uStack_c58;
      uStack_c58 = 0;
      uStack_c68 = 0;
      uStack_c60 = 0;
    }
    uStack_c20 = uStack_c48;
    uStack_c1c = uStack_c44;
    uStack_c18 = 1;
  }
  ppuVar24 = &PTR_PTR_113280a08;
  if ((undefined **)ppuVar2[0x14] != (undefined **)0x0) {
    ppuVar24 = (undefined **)ppuVar2[0x14];
  }
  FUN_100699c9c(&plStack_a0,ppuVar24);
  FUN_100699d30(auStack_c90);
  func_0x000100699da8(&plStack_8b0,&uStack_8d0,uVar11,auStack_8f0,&uStack_910,auStack_950,
                      auStack_968,auStack_ba8,(uint)ppuVar12 & 0xffff,auStack_be8,&uStack_c10,
                      &uStack_c40,auStack_c90);
  FUN_10069a0f8(auStack_518,&plStack_8b0);
  ppuVar12 = &PTR_PTR_113286e08;
  if ((undefined **)param_3[0x10] != (undefined **)0x0) {
    ppuVar12 = (undefined **)param_3[0x10];
  }
  FUN_10069a14c(auStack_e58,ppuVar12,param_3[0x1c]);
  uStack_c10 = CONCAT44(uStack_c10._4_4_,(int)param_3[0x17]);
  puVar13 = &uStack_c10;
  FUN_10069ad10(puVar13);
  plVar27 = param_3 + 0x19;
  FUN_10069ad68(plVar27);
  FUN_10069add4(auStack_e80,param_4);
  uVar3 = (*(uint *)(param_3 + 5) & 1) == 0;
  uVar11 = param_3[4];
  if ((bool)uVar3) {
    uVar11 = param_3[3] | 0x4000000000000000;
  }
  FUN_10069ae0c(param_1,&uStack_140,auStack_178,auStack_518,auStack_e58,puVar13,plVar27,auStack_e80,
                uVar11);
  FUN_1001148fc(auStack_e80);
  func_0x00010069b0c8(auStack_e58);
  FUN_10069b1b4(auStack_518);
  FUN_10069b158(&plStack_8b0);
  FUN_10069b138(auStack_c90);
  FUN_10069b370(&plStack_a0);
  func_0x00010069b1d4(&uStack_c40);
  if ((uVar7 >> 6 & 1) != 0) {
    FUN_1001148fc(&uStack_c68);
  }
  func_0x00010069b1f4(auStack_be8);
  FUN_10069b214(auStack_ba8);
  func_0x00010069b244(auStack_968);
  FUN_10069b294(auStack_950);
  FUN_10069b2d8(&uStack_910);
  FUN_10069b2b4(&uStack_930);
  FUN_10069b324(auStack_8f0);
  FUN_100100fec(&uStack_8d0);
  FUN_100100fec(auStack_178);
  FUN_100100fec(&uStack_140);
  puVar13 = &uStack_160;
  FUN_100100fec(puVar13);
  if (((*(byte *)(param_2 + 0xe0) & 1) == 0) &&
     (uVar3 = *(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28), (bool)uVar3)) {
    func_0x000100458ae4();
    func_0x00010069b458();
    lVar17 = extraout_x9 + 0xc30;
    if (!(bool)uVar3) {
      lVar17 = extraout_x8;
    }
    uStack_c10 = CONCAT44(uStack_c10._4_4_,*(undefined4 *)(lVar17 + 0xa8));
    pcStack_98 = FUN_100697a48;
    puStack_88 = &UNK_1059871fc;
    puStack_80 = &uStack_c10;
    puStack_78 = &UNK_1086e0c20;
    plStack_a0 = param_3;
    puStack_90 = (ulong *)(param_3 + 4);
    FUN_1003a91d4(&UNK_10f4b15e6);
    FUN_1003a9204(&uStack_e98);
    puVar14 = &uStack_eb0;
    FUN_10002b838(puVar14,"");
    FUN_10054f908();
    uStack_878 = uStack_ea0;
    plStack_8b0 = (long *)CONCAT44(plStack_8b0._4_4_,2);
    uStack_8a8 = 0;
    uStack_898 = uStack_e90;
    uStack_8a0 = uStack_e98;
    uStack_890 = uStack_e88;
    uStack_e98 = 0;
    uStack_e90 = 0;
    uStack_e88 = 0;
    uStack_880 = uStack_ea8;
    uStack_888 = uStack_eb0;
    uStack_eb0 = 0;
    uStack_ea8 = 0;
    uStack_ea0 = 0;
    uStack_868 = 0;
    puStack_870 = puVar14;
    func_0x000107c31340(puVar13,&plStack_8b0);
    func_0x00010786e114(&plStack_8b0);
    func_0x000107c60ca0(&uStack_eb0);
    func_0x000107c60ca0(&uStack_e98);
    *(undefined1 *)(param_2 + 0xe0) = 1;
    if (param_5 != 0) goto LAB_100695a28;
LAB_100695b28:
    uVar5 = 0;
  }
  else {
    if (param_5 == 0) goto LAB_100695b28;
LAB_100695a28:
    uVar11 = param_2;
    FUN_10069b3ac(param_2,param_5,param_3);
    uVar5 = (undefined1)uVar11;
  }
  *(undefined1 *)(param_1 + 0x534) = uVar5;
  func_0x00010069b458();
  lVar17 = extraout_x9_00 + 0xc30;
  if (!(bool)uVar3) {
    lVar17 = extraout_x8_00;
  }
  if (*(int *)(lVar17 + 0xa8) == 0) {
    ppuVar12 = &PTR_PTR_11326cb58;
    if ((undefined **)param_3[0xd] != (undefined **)0x0) {
      ppuVar12 = (undefined **)param_3[0xd];
    }
    uVar11 = param_2;
    FUN_1006933e4(param_2,ppuVar12);
    uVar3 = (char)param_3[5] == '\x01';
    if ((!(bool)uVar3) || (*(long *)(param_2 + 0x30) == 0)) goto LAB_100695c84;
    uVar15 = *(ulong *)(param_2 + 0x40);
    if (uVar15 == 0) {
      uVar22 = 0;
      bVar25 = false;
    }
    else {
      func_0x00010069b468();
      FUN_10069b488();
      uVar7 = (uint)uVar15;
      if ((uVar15 & 1) == 0) {
        func_0x00010069b5b8();
        uVar8 = (int)param_3 + 0x50;
        FUN_10069b5c4();
        uVar15 = param_2;
        FUN_10069b72c(param_2,param_3,*(undefined4 *)(*(long *)(param_2 + 0x40) + 8));
        uVar9 = (uint)*(undefined8 *)(param_2 + 0x40);
        func_0x00010069b468();
        FUN_10069b764();
        uVar10 = (uint)*(undefined8 *)(param_2 + 0x40);
        func_0x00010069b468();
        FUN_10069b7bc();
        uVar1 = (uint)uVar11 & ((uint)lVar26 ^ 1);
        if ((((uint)uVar15 & (uVar8 ^ 1) | (uVar7 ^ 1 | uVar9 | uVar10) ^ 0xffffffff) & 1) == 0) {
          if (uVar1 == 0) {
            if (((uVar7 ^ 1 | uVar10) & 1) == 0) {
LAB_1006960b0:
              uVar22 = (undefined4)*(undefined8 *)(param_2 + 0x40);
              func_0x00010069b468();
              func_0x000107c2926c();
            }
            else {
              uVar7 = (uint)*(undefined8 *)(param_2 + 0x30);
              FUN_10069b7f4();
              func_0x00010069b800();
LAB_1006960a0:
              uVar3 = uVar7 == 4;
              if (uVar7 < 4) {
                uVar22 = *(undefined4 *)(&UNK_10df463c0 + (ulong)uVar7 * 4);
              }
              else {
                uVar22 = 3;
              }
            }
            goto LAB_100695b94;
          }
          uVar3 = (char)param_3[0x2f] == '\x01';
          if (!(bool)uVar3) goto LAB_100695c84;
          uVar22 = 0;
          lVar17 = *(long *)(*(long *)(param_2 + 0x60) + 0x10);
          bVar25 = false;
          if ((lVar17 != 0) && (uVar3 = lVar17 == param_3[0x1c], lVar17 <= param_3[0x1c])) {
            if (uVar10 == 0) goto LAB_1006960b0;
            uVar7 = (uint)*(undefined8 *)(param_2 + 0x30);
            FUN_10069b7f4();
            func_0x00010069b800();
            goto LAB_1006960a0;
          }
        }
        else {
          uVar3 = uVar1 == 0;
          uVar22 = 0;
          bVar25 = (bool)uVar3;
          if ((bool)uVar3) {
            uVar22 = 6;
          }
        }
      }
      else {
        uVar22 = 5;
LAB_100695b94:
        bVar25 = true;
      }
    }
  }
  else {
LAB_100695c84:
    uVar22 = 0;
    bVar25 = false;
  }
  *(bool *)(param_1 + 0x49c) = bVar25;
  *(undefined4 *)(param_1 + 0x498) = uVar22;
  *(bool *)(param_1 + 0x524) = bVar4;
  *(undefined1 *)(param_1 + 0x525) = uStack_ec4;
  *(undefined ***)(param_1 + 0x528) = ppuStack_ed0;
  *(undefined1 *)(param_1 + 0x530) = uVar6;
  uVar16 = *(undefined8 *)(param_2 + 0x80);
  FUN_100671198(uVar16);
  FUN_10069baf8(&plStack_8b0,param_3,param_2,uVar16);
  FUN_10069bd7c(param_1 + 0x538,&plStack_8b0);
  FUN_10069aadc(&plStack_8b0);
  plVar27 = (long *)(param_2 + 0x40);
  if (*plVar27 != 0) {
    func_0x00010069b458();
    lVar17 = extraout_x9_01 + 0xc30;
    if (!(bool)uVar3) {
      lVar17 = extraout_x8_01;
    }
    if (*(int *)(lVar17 + 0xac) == 3) {
      iVar23 = 1;
    }
    else {
      iVar23 = (int)param_3 + 0x50;
      FUN_10069b5c4();
    }
    lVar17 = *(long *)(param_1 + 0x408);
    lVar19 = *(long *)(param_1 + 0x410);
    if ((iVar23 != 0) && (lVar17 != lVar19)) {
      func_0x000107c29d44(*plVar27,param_1,*(undefined8 *)(param_1 + 0x18));
      lVar17 = *(long *)(param_1 + 0x408);
      lVar19 = *(long *)(param_1 + 0x410);
    }
    FUN_10069bdf4(lVar17,lVar19,param_2);
    uVar3 = *(long *)(param_1 + 0x410) == lVar17;
    FUN_10069be54(*plVar27,param_1,*(undefined8 *)(param_1 + 0x18),!(bool)uVar3);
  }
  lVar17 = *(long *)(param_2 + 0x80);
  FUN_100671198();
  plVar18 = param_3;
  uVar11 = param_2;
  FUN_10069bf24(param_3,param_2,lVar26);
  if ((int)plVar18 == 0) {
LAB_100695ddc:
    bVar29 = 0;
    bVar28 = 0;
  }
  else {
    plVar18 = param_3 + 10;
    func_0x000107c28f5c();
    uVar3 = (long)plVar18 - lVar17 == 1;
    if (0 < (long)plVar18 - lVar17) {
      func_0x000107c32890(&plStack_8b0);
      plVar18 = plStack_8b0;
      if (plStack_8b0 != (long *)0x0) {
        func_0x000107c328a4();
        func_0x000107c28f5c(param_3 + 10);
        func_0x000107c32898(*(undefined8 *)(*plVar18 + 0x10));
      }
      func_0x000107c3289c();
      goto LAB_100695ddc;
    }
    bVar29 = 1;
    bVar28 = 1;
  }
  if (((param_5 != 0) && (bVar28 = bVar29, (*(byte *)(param_3 + 0xc) >> 2 & 1) != 0)) &&
     (uVar3 = *(int *)(param_3[0xf] + 0xa8) == 0x25, (bool)uVar3)) {
    plVar18 = param_3 + 10;
    func_0x000107c28f60();
    if (((uVar11 & 1) != 0) && (uVar3 = (long)plVar18 - lVar17 == 1, 0 < (long)plVar18 - lVar17)) {
      func_0x000107c32890(&plStack_8b0);
      plVar18 = plStack_8b0;
      if (plStack_8b0 != (long *)0x0) {
        func_0x000107c328a4();
        FUN_10069b7f4(*(undefined8 *)(param_2 + 0x80));
        (*extraout_x8_02)();
        func_0x000107c32898(*(undefined8 *)(*plVar18 + 0x10));
      }
      func_0x000107c3289c();
    }
  }
  plVar18 = param_3;
  FUN_10069bfd8(param_3,param_5,param_2,param_2 + 0x18,plVar27,param_2 + 0x50,param_2 + 0x60,
                *(undefined1 *)(param_2 + 0xe1),lVar17,*(undefined1 *)(param_2 + 0xe3));
  *(char *)(param_1 + 0x4a0) = (char)plVar18;
  func_0x00010069b458();
  lVar26 = extraout_x9_02 + 0xc30;
  if (!(bool)uVar3) {
    lVar26 = extraout_x8_03;
  }
  uVar22 = *(undefined4 *)(lVar26 + 0xa8);
  if ((param_5 == 0) || ((*(byte *)(param_2 + 0xe1) & 1) == 0)) {
    if (param_5 != 0) goto LAB_100695eb8;
LAB_100695ed4:
    ppuVar24 = (undefined **)param_3[0xd];
    FUN_1005f6fa4(&plStack_8b0,param_2);
    ppuVar12 = &PTR_PTR_11326cb58;
    if (ppuVar24 != (undefined **)0x0) {
      ppuVar12 = ppuVar24;
    }
    func_0x00010069c2e0(ppuVar12,&plStack_8b0);
    bVar29 = (byte)&plStack_8b0;
    FUN_1005f73a4();
    bVar20 = 1;
    bVar21 = 1;
    switch(uVar22) {
    case 0:
    case 0x15:
      if (((ulong)ppuVar12 & 1) == 0) {
        func_0x00010069b5b8();
        bVar21 = bVar28 | bVar29;
      }
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 8:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x22:
      break;
    default:
      bVar21 = 0;
      break;
    case 0x25:
      if (param_5 != 0) {
        bVar4 = *(int *)(param_5 + 0x11c) != 8;
        goto code_r0x000100695ecc;
      }
      *(undefined1 *)(param_1 + 0x4a2) = 0;
      goto LAB_100695f5c;
    }
    *(byte *)(param_1 + 0x4a2) = bVar21;
    if (param_5 != 0) goto LAB_100695f3c;
    bVar20 = 1;
  }
  else {
    if ((*(byte *)(param_5 + 0x119) & 1) == 0) {
LAB_100695eb8:
      uVar11 = param_5;
      FUN_10069c2a8();
      if ((uVar11 & 1) == 0) goto LAB_100695ed4;
    }
    bVar4 = false;
code_r0x000100695ecc:
    *(bool *)(param_1 + 0x4a2) = bVar4;
LAB_100695f3c:
    if ((*(byte *)(param_5 + 0x119) & 1) == 0) {
      uVar11 = param_5;
      FUN_10069c2a8();
      bVar20 = (byte)uVar11 ^ 1;
    }
    else {
      bVar20 = 0;
    }
  }
LAB_100695f5c:
  *(byte *)(param_1 + 0x4a3) = bVar20;
  uVar11 = param_1 + 0x20;
  FUN_1006760a8(uVar11,param_2);
  if ((uVar11 & 1) == 0) {
    if (((*(byte *)(param_3 + 0xc) >> 2 & 1) != 0) &&
       ((*(byte *)(param_3[0xf] + 0x10) >> 4 & 1) != 0)) {
      ppuVar24 = *(undefined ***)(*(long *)(param_3[0xf] + 0x88) + 0x18);
      ppuVar12 = &PTR_PTR_11326cb58;
      if (ppuVar24 != (undefined **)0x0) {
        ppuVar12 = ppuVar24;
      }
      uVar11 = param_2;
      FUN_1006933e4(param_2,ppuVar12);
      uVar6 = (undefined1)uVar11;
      goto LAB_100695fc4;
    }
    if (param_5 != 0) {
      param_5 = param_5 + 0x18;
      func_0x00010069c340();
      if ((param_5 & 1) != 0) goto LAB_100695f70;
    }
    uVar6 = 0;
  }
  else {
LAB_100695f70:
    uVar6 = 1;
  }
LAB_100695fc4:
  *(undefined1 *)(param_1 + 0x4a4) = uVar6;
  plVar27 = param_3 + 10;
  FUN_10069c404(plVar27,param_2,param_1 + 0x20);
  *(char *)(param_1 + 0x4a6) = (char)plVar27;
  FUN_10069c4b8(&plStack_8b0,param_3 + 10);
  FUN_10069c558(param_1 + 0x4a8,&plStack_8b0);
  FUN_10069ab7c(&plStack_8b0);
  iVar23 = *(int *)((long)ppuVar2 + 0xac) + -1;
  if (2 < *(int *)((long)ppuVar2 + 0xac) - 2U) {
    iVar23 = 0;
  }
  *(int *)(param_1 + 0x520) = iVar23;
  uVar16 = *(undefined8 *)(param_2 + 0x80);
  FUN_10069b7f4(uVar16);
  (*extraout_x8_04)();
  param_3 = param_3 + 10;
  FUN_10069c57c(param_3,param_2,uVar16);
  *(int *)(param_1 + 0x4d0) = (int)param_3;
  *(char *)(param_1 + 0x4d4) = (char)((ulong)param_3 >> 0x20);
  FUN_1002a2294(&uStack_100);
  FUN_10069b294(auStack_d8);
  FUN_100078bd8(auStack_b8);
  return;
}



/* Entry: 100696274; end: 10069629f;  */

undefined8 FUN_100696274(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x9;
  
  bVar3 = *(int *)(param_1 + 0xf0) == 0;
  bVar4 = *(int *)(param_1 + 0x20) == 1;
  bVar2 = bVar3 && bVar4;
  if (!bVar3 || !bVar4) {
    return 0;
  }
  FUN_10069b43c(*(undefined8 *)(param_1 + 0x68));
  lVar7 = extraout_x9;
  if (!bVar2) {
    lVar7 = extraout_x8;
  }
  uVar6 = *param_2;
  uVar1 = param_2[1];
  func_0x0001006933dc();
  puVar5 = param_2;
  func_0x0001006933dc();
  func_0x000100693448(uVar6,uVar1,param_2,(long)puVar5 + lVar7);
  return uVar6;
}



/* Entry: 1006962a0; end: 100696323;  */

void FUN_1006962a0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  ppuVar1 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_3 + 0x78) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_3 + 0x78);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if ((((*(byte *)(ppuVar1 + 2) >> 6 & 1) == 0) || (*(int *)(ppuVar1[0x13] + 0x1c) != 2)) ||
     (FUN_10069bf24(param_3,param_2,param_4), (int)param_3 != 0)) {
    FUN_100696324(&uStack_40,ppuVar1);
    param_1[1] = CONCAT71(uStack_37,uStack_38);
    *param_1 = uStack_40;
    *(undefined8 *)((long)param_1 + 0x11) = uStack_2f;
    *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_30,uStack_37);
  }
  return;
}



/* Entry: 100696324; end: 100696383;  */

void FUN_100696324(undefined2 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 0x10) >> 6 & 1) != 0) {
    iVar1 = *(int *)(*(long *)(param_2 + 0x98) + 0x1c);
    if (iVar1 == 2) {
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x98) + 0x10) + 0x10);
      *param_1 = 0;
      *(undefined8 *)(param_1 + 4) = uVar2;
      *(undefined8 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    if (iVar1 == 1) {
      *param_1 = 0x101;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



/* Entry: 100696384; end: 1006963eb;  */

void FUN_100696384(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar1 = (long)*(char *)(uVar2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(uVar2 + 8);
  }
  FUN_100553394(lVar1);
  FUN_1006963ec(&uStack_40,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  FUN_100100fec(&uStack_40);
  return;
}



/* Entry: 1006963ec; end: 10069640f;  */

undefined8 * FUN_1006963ec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100696410();
  return param_1;
}



/* Entry: 100696410; end: 10069648b;  */

void FUN_100696410(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10002b958(param_1,param_4);
    FUN_100696c3c(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_10002b9fc(&uStack_40);
  return;
}



/* Entry: 10069648c; end: 1006964b7;  */

undefined8 * FUN_10069648c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100696410();
  return param_1;
}



/* Entry: 1006964b8; end: 100696c3b;  */

void FUN_1006964b8(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lStack_20;
  undefined8 uStack_18;
  
  pcVar3 = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    pcVar3 = *(code **)(*plVar1 + ((ulong)pcVar3 & 0xffffffff));
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x58);
  lStack_20 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  (*pcVar3)(plVar1,*(undefined8 *)(param_1 + 0x38),param_1 + 0x40,&uStack_18,&lStack_20);
  lVar2 = lStack_20;
  lStack_20 = 0;
  if (lVar2 != 0) {
    FUN_1008986bc();
  }
  func_0x0001006a5b60(&uStack_18);
  return;
}



/* Entry: 100696c3c; end: 100696c77;  */

void FUN_100696c3c(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 100696c78; end: 100696d4f;  */

void FUN_100696c78(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 *extraout_x10;
  long lVar2;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    FUN_100696d50();
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x000105290778(&uStack_50);
    FUN_1006974ec(param_2 + 0x18);
    puVar1 = extraout_x8;
    if (!(bool)in_ZR) {
      puVar1 = extraout_x10;
    }
    for (lVar2 = (long)*(int *)(param_2 + 0x20) << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
      func_0x000107c29e54(auStack_98,*puVar1);
      func_0x000105290aec(&uStack_50,auStack_98);
      func_0x000104be16a0(auStack_98);
      puVar1 = puVar1 + 1;
    }
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x000104be1618(&uStack_50);
  }
  return;
}



/* Entry: 100696d50; end: 100696d63;  */

void FUN_100696d50(void)

{
  undefined1 *unaff_x19;
  
  *unaff_x19 = 0;
  unaff_x19[0x18] = 0;
  return;
}



/* Entry: 100696d64; end: 1006974eb;  */

void FUN_100696d64(long *param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  ulong *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 in_ZR;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *extraout_x8;
  undefined **extraout_x8_00;
  ulong uVar12;
  long *extraout_x8_01;
  ulong uVar13;
  ulong uVar14;
  long *extraout_x10;
  long *plVar15;
  long *extraout_x10_00;
  long extraout_x11;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong unaff_x23;
  undefined *puVar22;
  undefined1 auStack_120 [28];
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  uint uStack_e0;
  undefined1 uStack_dc;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  float fStack_a0;
  long *plStack_90;
  long **pplStack_88;
  long lStack_80;
  
  func_0x00010069316c(*(undefined8 *)(param_2 + 0x78));
  uStack_b8 = 0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  fStack_a0 = 1.0;
  FUN_1006974ec();
  plVar11 = extraout_x8;
  if (!(bool)in_ZR) {
    plVar11 = extraout_x10;
  }
  plVar2 = plVar11 + *(int *)(extraout_x11 + 0x50);
  do {
    bVar8 = plVar11 == plVar2;
    if (bVar8) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_100697518(param_1,(long)*(int *)(extraout_x11 + 0x38));
      uVar14 = 0;
      do {
        if ((long)*(int *)(extraout_x11 + 0x38) <= (long)uVar14) {
          FUN_100699524(&lStack_c0);
          return;
        }
        lStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uVar10 = *(ulong *)(extraout_x11 + 0x30);
        bVar8 = (uVar10 & 1) == 0;
        puVar3 = (ulong *)(extraout_x11 + 0x30);
        if (!bVar8) {
          puVar3 = (ulong *)(uVar10 + uVar14 * 8 + 7);
        }
        FUN_100697858(*puVar3);
        plVar11 = extraout_x8_01;
        if (!bVar8) {
          plVar11 = extraout_x10_00;
        }
        plVar2 = plVar11 + (int)extraout_x8_01[1];
        for (; uVar10 = uStack_b8, plVar11 != plVar2; plVar11 = plVar11 + 1) {
          lVar9 = *plVar11;
          uStack_e0 = uStack_e0 & 0xffffff00;
          uStack_dc = 0;
          if ((uStack_b8 != 0) && (uStack_a8 != 0)) {
            lVar19 = *(long *)(lVar9 + 0x40);
            uVar12 = uVar14;
            func_0x000107c29ec4(uVar14,lVar19);
            uVar13 = uVar10 - 1;
            if ((uVar10 & uVar13) == 0) {
              uVar16 = uVar12 & uVar13;
            }
            else {
              uVar16 = uVar12;
              if (uVar10 <= uVar12) {
                uVar16 = 0;
                if (uVar10 != 0) {
                  uVar16 = uVar12 / uVar10;
                }
                uVar16 = uVar12 - uVar16 * uVar10;
              }
            }
            plVar21 = *(long **)(lStack_c0 + uVar16 * 8);
            if (plVar21 != (long *)0x0) {
              do {
                while( true ) {
                  plVar21 = (long *)*plVar21;
                  if (plVar21 == (long *)0x0) goto LAB_1006972c4;
                  uVar17 = plVar21[1];
                  if (uVar17 != uVar12) break;
                  if (*(int *)(plVar21 + 2) == (int)uVar14 && plVar21[3] == lVar19) {
                    uStack_e0 = *(uint *)(plVar21 + 4);
                    uStack_dc = uStack_e0 < 3;
                    if (!(bool)uStack_dc) {
                      uStack_e0 = 0;
                    }
                    goto LAB_1006972c4;
                  }
                }
                if ((uVar10 & uVar13) == 0) {
                  uVar17 = uVar17 & uVar13;
                }
                else if (uVar10 <= uVar17) {
                  uVar6 = 0;
                  if (uVar10 != 0) {
                    uVar6 = uVar17 / uVar10;
                  }
                  uVar17 = uVar17 - uVar6 * uVar10;
                }
              } while (uVar17 == uVar16);
            }
          }
LAB_1006972c4:
          func_0x000100697868(auStack_f8);
          uVar20 = *(undefined8 *)(lVar9 + 0x40);
          uStack_100 = uVar20;
          uVar4 = *(undefined4 *)(lVar9 + 0x4c);
          func_0x000100697870();
          uStack_104 = uVar4;
          FUN_100697884(auStack_120,param_2,uVar14,uVar20);
          if (uStack_d0 < uStack_c8) {
            func_0x0001006991a4();
            uVar10 = uStack_d0 + 0x58;
          }
          else {
            plVar21 = &lStack_d8;
            FUN_10069909c(plVar21,(long)(uStack_d0 - lStack_d8) / 0x58 + 1);
            func_0x000100699150(&plStack_90,plVar21,(long)(uStack_d0 - lStack_d8) / 0x58,&uStack_c8)
            ;
            func_0x0001006991a4(lStack_80);
            lStack_80 = lStack_80 + 0x58;
            FUN_100699328(&lStack_d8,&plStack_90);
            uVar10 = uStack_d0;
            FUN_100699424(&plStack_90);
          }
          uStack_d0 = uVar10;
          func_0x000107c60ca0(auStack_120);
          FUN_100699488();
        }
        uVar10 = param_1[1];
        if (uVar10 < (ulong)param_1[2]) {
          FUN_100699490(uVar10,&lStack_d8);
          lVar9 = uVar10 + 0x18;
        }
        else {
          plVar11 = param_1;
          func_0x00010528d850(param_1,(long)(uVar10 - *param_1) / 0x18 + 1);
          FUN_1006975a8(&plStack_90,plVar11,(param_1[1] - *param_1) / 0x18,param_1 + 2);
          FUN_100699490(lStack_80,&lStack_d8);
          lStack_80 = lStack_80 + 0x18;
          FUN_10069768c(param_1,&plStack_90);
          lVar9 = param_1[1];
          FUN_1006977ec(&plStack_90);
        }
        param_1[1] = lVar9;
        func_0x0001006994c8(&lStack_d8);
        uVar14 = uVar14 + 1;
      } while( true );
    }
    uVar4 = *(undefined4 *)(*plVar11 + 0x20);
    uVar5 = *(uint *)(*plVar11 + 0x24);
    uVar14 = (ulong)uVar5;
    func_0x000107c34044();
    ppuVar1 = &PTR_PTR_1133ae720;
    if (!bVar8) {
      ppuVar1 = extraout_x8_00;
    }
    puVar22 = ppuVar1[2];
    func_0x000107c29ec4(uVar14,puVar22);
    uVar10 = uStack_b8;
    if (uStack_b8 != 0) {
      uVar12 = uStack_b8 - 1;
      if ((uStack_b8 & uVar12) == 0) {
        unaff_x23 = uVar12 & uVar14;
      }
      else {
        unaff_x23 = uVar14;
        if (uStack_b8 <= uVar14) {
          uVar13 = 0;
          if (uStack_b8 != 0) {
            uVar13 = uVar14 / uStack_b8;
          }
          unaff_x23 = uVar14 - uVar13 * uStack_b8;
        }
      }
      plVar21 = *(long **)(lStack_c0 + unaff_x23 * 8);
      if (plVar21 != (long *)0x0) {
        do {
          while( true ) {
            plVar21 = (long *)*plVar21;
            if (plVar21 == (long *)0x0) goto LAB_100696ea0;
            uVar13 = plVar21[1];
            if (uVar13 != uVar14) break;
            if (*(uint *)(plVar21 + 2) == uVar5 && (undefined *)plVar21[3] == puVar22)
            goto LAB_10069715c;
          }
          if ((uStack_b8 & uVar12) == 0) {
            uVar13 = uVar13 & uVar12;
          }
          else if (uStack_b8 <= uVar13) {
            uVar16 = 0;
            if (uStack_b8 != 0) {
              uVar16 = uVar13 / uStack_b8;
            }
            uVar13 = uVar13 - uVar16 * uStack_b8;
          }
        } while (uVar13 == unaff_x23);
      }
    }
LAB_100696ea0:
    plVar21 = (long *)0x28;
    func_0x000107c60e20();
    lStack_80 = 1;
    *plVar21 = 0;
    plVar21[1] = uVar14;
    *(uint *)(plVar21 + 2) = uVar5;
    plVar21[3] = (long)puVar22;
    *(undefined4 *)(plVar21 + 4) = 0;
    pplStack_88 = &plStack_b0;
    if ((uVar10 == 0) || (fStack_a0 * (float)uVar10 < (float)(uStack_a8 + 1))) {
      uVar12 = 1;
      if (2 < uVar10) {
        uVar12 = (ulong)((uVar10 & uVar10 - 1) != 0);
      }
      uVar12 = uVar12 | uVar10 << 1;
      uVar13 = (ulong)((float)(uStack_a8 + 1) / fStack_a0);
      if (uVar12 <= uVar13) {
        uVar12 = uVar13;
      }
      uVar13 = uVar10;
      plStack_90 = plVar21;
      if (uVar12 - 1 == 0) {
        uVar12 = 2;
      }
      else if ((uVar12 & uVar12 - 1) != 0) {
        func_0x000107c60c44();
        uVar13 = uStack_b8;
      }
      uVar10 = uVar12;
      if (uVar13 < uVar12) {
LAB_100696f50:
        if (uVar10 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10069745c);
          (*pcVar7)();
        }
        lVar9 = uVar10 << 3;
        func_0x000107c60e20(lVar9);
        func_0x000107c29ec8(&lStack_c0,lVar9);
        for (uVar12 = 0; uVar10 != uVar12; uVar12 = uVar12 + 1) {
          *(undefined8 *)(lStack_c0 + uVar12 * 8) = 0;
        }
        uStack_b8 = uVar10;
        if (plStack_b0 != (long *)0x0) {
          uVar16 = plStack_b0[1];
          uVar13 = uVar10 - 1;
          uVar12 = 0;
          if (uVar10 != 0) {
            uVar12 = uVar16 / uVar10;
          }
          uVar17 = uVar16;
          if (uVar10 <= uVar16) {
            uVar17 = uVar16 - uVar12 * uVar10;
          }
          if ((uVar10 & uVar13) == 0) {
            uVar17 = uVar16 & uVar13;
          }
          *(long ***)(lStack_c0 + uVar17 * 8) = &plStack_b0;
          plVar18 = plStack_b0;
          while (plVar15 = plVar18, plVar18 = (long *)*plVar15, plVar18 != (long *)0x0) {
            uVar12 = plVar18[1];
            if ((uVar10 & uVar13) == 0) {
              uVar12 = uVar12 & uVar13;
            }
            else if (uVar10 <= uVar12) {
              uVar16 = 0;
              if (uVar10 != 0) {
                uVar16 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar16 * uVar10;
            }
            if (uVar12 != uVar17) {
              if (*(long *)(lStack_c0 + uVar12 * 8) == 0) {
                *(long **)(lStack_c0 + uVar12 * 8) = plVar15;
                uVar17 = uVar12;
              }
              else {
                *plVar15 = *plVar18;
                *plVar18 = **(long **)(lStack_c0 + uVar12 * 8);
                **(undefined8 **)(lStack_c0 + uVar12 * 8) = plVar18;
                plVar18 = plVar15;
              }
            }
          }
        }
      }
      else {
        uVar10 = uVar13;
        if (uVar12 < uVar13) {
          uVar10 = (ulong)((float)uStack_a8 / fStack_a0);
          if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar10) {
            uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
          }
          if (uVar12 <= uVar10) {
            uVar12 = uVar10;
          }
          uVar10 = uStack_b8;
          if (uVar12 < uVar13) {
            uVar10 = uVar12;
            if (uVar12 != 0) goto LAB_100696f50;
            func_0x000107c29ec8(&lStack_c0,0);
            uStack_b8 = 0;
            uVar10 = 0;
          }
        }
      }
      if ((uVar10 & uVar10 - 1) == 0) {
        unaff_x23 = uVar10 - 1 & uVar14;
      }
      else {
        unaff_x23 = uVar14;
        if (uVar10 <= uVar14) {
          uVar12 = 0;
          if (uVar10 != 0) {
            uVar12 = uVar14 / uVar10;
          }
          unaff_x23 = uVar14 - uVar12 * uVar10;
        }
      }
    }
    plVar18 = *(long **)(lStack_c0 + unaff_x23 * 8);
    if (plVar18 == (long *)0x0) {
      *plVar21 = (long)plStack_b0;
      *(long ***)(lStack_c0 + unaff_x23 * 8) = &plStack_b0;
      plStack_b0 = plVar21;
      if (*plVar21 != 0) {
        uVar14 = *(ulong *)(*plVar21 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar14 = uVar14 & uVar10 - 1;
        }
        else if (uVar10 <= uVar14) {
          uVar12 = 0;
          if (uVar10 != 0) {
            uVar12 = uVar14 / uVar10;
          }
          uVar14 = uVar14 - uVar12 * uVar10;
        }
        *(long **)(lStack_c0 + uVar14 * 8) = plVar21;
      }
    }
    else {
      *plVar21 = *plVar18;
      *plVar18 = (long)plVar21;
    }
    plStack_90 = (long *)0x0;
    uStack_a8 = uStack_a8 + 1;
    func_0x000107c29ecc(&plStack_90);
LAB_10069715c:
    *(undefined4 *)(plVar21 + 4) = uVar4;
    plVar11 = plVar11 + 1;
  } while( true );
}



/* Entry: 1006974ec; end: 100697517;  */

void FUN_1006974ec(void)

{
  return;
}



/* Entry: 100697518; end: 100697567;  */

void FUN_100697518(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001006974f8();
  if ((bool)in_CY && !(bool)in_ZR) {
    FUN_100697568();
    if ((bool)in_CY) {
      func_0x00010528d768();
      func_0x00010528daf4();
      FUN_1006977ec();
      func_0x00010528da6c();
      return;
    }
    func_0x00010069757c();
    FUN_1006975a8();
    func_0x000100697654();
    FUN_10069768c();
    FUN_1006977ec(auStack_48);
  }
  return;
}



/* Entry: 100697568; end: 1006975a7;  */

void FUN_100697568(void)

{
  return;
}



/* Entry: 1006975a8; end: 1006975d7;  */

void FUN_1006975a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000100697598();
  if (param_2 != 0) {
    FUN_1006975fc(param_4);
  }
  func_0x000100697630();
  return;
}



/* Entry: 1006975d8; end: 1006975fb;  */

void FUN_1006975d8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1006975d8();
  return;
}



/* Entry: 1006975fc; end: 10069761b;  */

void FUN_1006975fc(void)

{
  FUN_1006975d8();
  return;
}



/* Entry: 10069761c; end: 10069768b;  */

void FUN_10069761c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
  return;
}



/* Entry: 10069768c; end: 1006976af;  */

void FUN_10069768c(void)

{
  func_0x000100697660();
  FUN_1006976d0();
  func_0x000100697794();
  return;
}



/* Entry: 1006976b0; end: 1006976cf;  */

void FUN_1006976b0(void)

{
  undefined8 in_x3;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = in_x3;
  return;
}



/* Entry: 1006976d0; end: 10069771f;  */

void FUN_1006976d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  FUN_1006976b0();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x00010528da94();
    lVar1 = extraout_x8_00;
  }
  uStack_38 = 1;
  FUN_100697720();
  FUN_100697758(auStack_50);
  return;
}



/* Entry: 100697720; end: 10069774f;  */

void FUN_100697720(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x0001006994c8();
  }
  return;
}



/* Entry: 100697750; end: 100697757;  */

void FUN_100697750(void)

{
  return;
}



/* Entry: 100697758; end: 100697787;  */

long FUN_100697758(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x00010528d774(param_1);
  }
  return param_1;
}



/* Entry: 100697788; end: 1006977eb;  */

void FUN_100697788(void)

{
  return;
}



/* Entry: 1006977ec; end: 100697817;  */

long * FUN_1006977ec(long *param_1)

{
  func_0x0001006977e4();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100697818; end: 100697823;  */

void FUN_100697818(void)

{
  return;
}



/* Entry: 100697824; end: 100697857;  */

void FUN_100697824(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_100697818();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x0001006994c8();
  }
  return;
}



/* Entry: 100697858; end: 100697883;  */

void FUN_100697858(void)

{
  return;
}



/* Entry: 100697884; end: 10069791b;  */

void FUN_100697884(undefined8 param_1)

{
  FUN_1003a91d4(&UNK_10df61ac2);
  FUN_1003a9204(param_1);
  return;
}



/* Entry: 10069791c; end: 1006979fb;  */

undefined1 * FUN_10069791c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3c] = 0;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x98] = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8d) = 0;
  func_0x000107c60ee4(param_1 + 0xa0,0xc9);
  *(undefined8 *)(param_1 + 0x1b8) = 4;
  *(undefined4 *)(param_1 + 0x1c0) = 2;
  param_1[0x1c4] = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  param_1[0x1e0] = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined1 **)(param_1 + 0x1e8) = param_1 + 0x1f0;
  return param_1;
}



/* Entry: 1006979fc; end: 100697a47;  */

undefined8 FUN_1006979fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_3;
  FUN_1005ed240(auStack_38,param_2);
  func_0x000100697a74(uVar1,&DAT_10f2fb62f,auStack_38);
  func_0x000100698fec();
  return uVar1;
}



/* Entry: 100697a48; end: 100697a9f;  */

void FUN_100697a48(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_1006979fc(puVar1,param_1);
  *param_3 = (long)puVar1;
  return;
}



/* Entry: 100697aa0; end: 100697d8b;  */

undefined * FUN_100697aa0(uint param_1)

{
  if (param_1 < 6) {
    return (&PTR_DAT_110cd7a68)[param_1];
  }
  return &UNK_10f74aa84;
}



/* Entry: 100697d8c; end: 100697dab;  */

void FUN_100697d8c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef77a0);
  return;
}



/* Entry: 100697dac; end: 100698e2b;  */

void FUN_100697dac(long param_1,undefined4 param_2)

{
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  *(undefined1 *)(param_1 + 0x668) = 1;
  *(undefined4 *)(param_1 + 0x664) = param_2;
  if (*(int *)(*(long *)(param_1 + 0x38) + 0x44) == 0) {
    return;
  }
  uStack_18 = 0;
  func_0x000107c2dfec(*(long *)(param_1 + 0x38),param_2,param_1 + 0x28,1,auStack_30);
  func_0x000107c36a28();
  return;
}



/* Entry: 100698e2c; end: 100698e4b;  */

void FUN_100698e2c(void)

{
  func_0x000107c61168(&PTR_PTR_11299f3a8);
  return;
}



/* Entry: 100698e4c; end: 100698faf;  */

undefined1 * FUN_100698e4c(void)

{
  return &stack0x00000010;
}



/* Entry: 100698fb0; end: 10069900f;  */

void FUN_100698fb0(void)

{
  return;
}



/* Entry: 100699010; end: 10069909b;  */

undefined1 * FUN_100699010(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)-(long)param_2;
  if (-1 < (long)param_2) {
    puVar2 = param_2;
  }
  puVar1 = puVar2;
  FUN_1003b0470();
  FUN_1005d47dc((ulong)param_2 >> 0x3f);
  func_0x0001005d47ec();
  if (puVar1 == (undefined1 *)0x0) {
    if ((long)param_2 < 0) {
      func_0x000107c3a9dc(0x2d);
    }
    func_0x000107c29934();
  }
  else {
    if ((long)param_2 < 0) {
      *puVar1 = 0x2d;
    }
    func_0x0001003b04f4();
    puVar2 = param_1;
  }
  return puVar2;
}



/* Entry: 10069909c; end: 10069912b;  */

/* WARNING: Possible PIC construction at 0x00010069913c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100699140) */

ulong FUN_10069909c(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  if (0x2e8ba2e8ba2e8ba < param_2) {
    puVar4 = &stack0xfffffffffffffff0;
    uVar5 = 0x1006990fc;
    func_0x00010528f52c();
    puVar2 = &stack0xfffffffffffffff0;
    while (0x2e8ba2e8ba2e8ba < param_2) {
      *(undefined1 **)(puVar2 + -0x10) = puVar4;
      *(undefined8 *)(puVar2 + -8) = uVar5;
      func_0x000104bd35f4();
      *(undefined8 *)(puVar2 + -0x30) = unaff_x20;
      *(ulong *)(puVar2 + -0x28) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
      *(code **)(puVar2 + -0x18) = FUN_10069912c;
      puVar4 = puVar2 + -0x20;
      uVar5 = 0x100699140;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = param_2;
    }
    param_2 = param_2 * 0x58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return param_2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  uVar3 = uVar1 * 2;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar3 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    uVar3 = 0x2e8ba2e8ba2e8ba;
  }
  return uVar3;
}



/* Entry: 10069912c; end: 10069919b;  */

void FUN_10069912c(void)

{
  func_0x0001006990fc();
  return;
}



/* Entry: 10069919c; end: 1006991d3;  */

void FUN_10069919c(void)

{
  return;
}



/* Entry: 1006991d4; end: 100699223;  */

void FUN_1006991d4(long param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001006991bc();
  FUN_100699224();
  func_0x000100699248();
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  func_0x00010069925c(uStack_40);
  *(undefined8 *)(param_1 + 0x38) = extraout_x8;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = extraout_x11;
  func_0x000100699268();
  func_0x000100699270();
  return;
}



/* Entry: 100699224; end: 100699283;  */

void FUN_100699224(void)

{
  undefined8 *in_x4;
  
  in_x4[1] = 0;
  in_x4[2] = 0;
  *in_x4 = 0;
  return;
}



/* Entry: 100699284; end: 100699327;  */

void FUN_100699284(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x58) {
    func_0x00010528f540(param_4,lVar1);
    param_4 = lStack_38 + 0x58;
  }
  uStack_48 = 1;
  FUN_1006993b4(param_1,param_2,param_3);
  FUN_1006993ec(&uStack_60);
  return;
}



/* Entry: 100699328; end: 1006993b3;  */

void FUN_100699328(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_100699284(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1006993b4; end: 1006993e3;  */

void FUN_1006993b4(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x0001006a0e58();
  }
  return;
}



/* Entry: 1006993e4; end: 1006993eb;  */

void FUN_1006993e4(void)

{
  return;
}


