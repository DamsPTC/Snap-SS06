/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dde880; end: 101dde89f; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint init] */

void FUN_101dde880(void)

{
  FUN_101dde7d0();
  return;
}



/* Entry: 101dde8a0; end: 101dde8d3;  */

void FUN_101dde8a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101dde8d4; end: 101dde94b; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde8d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e2eb00);
  func_0x000107c61610(param_1 + _DAT_112e2eb08);
  func_0x000107c61610(param_1 + _DAT_112e2eb10);
  func_0x000107c61610(param_1 + _DAT_112e2eb18);
  func_0x000107c61610(param_1 + _DAT_112e2eb20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2eb28));
  return;
}



/* Entry: 101dde94c; end: 101dde96b;  */

void FUN_101dde94c(void)

{
  func_0x000107c61168(&PTR_PTR_112804f38);
  return;
}



/* Entry: 101dde96c; end: 101dde99f;  */

void FUN_101dde96c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101dde980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101dde9a0; end: 101ddea4b;  */

void FUN_101dde9a0(void)

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



/* Entry: 101ddea4c; end: 101ddea5f;  */

void FUN_101ddea4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101ddea60; end: 101ddea9f;  */

void FUN_101ddea60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2eb58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da17750;
  func_0x000107c61520(&UNK_10da17750,&UNK_110487d10);
  puRam0000000112e2eb58 = puVar1;
  return;
}



/* Entry: 101ddeaa0; end: 101ddec03;  */

int FUN_101ddeaa0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101ddeb1c;
        goto LAB_101ddeb00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101ddeb00:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101ddeb1c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101ddec04; end: 101ddec9f;  */

long FUN_101ddec04(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101ddeca0; end: 101dded77;  */

undefined8 * FUN_101ddeca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar8 = param_2[2];
  func_0x000107c615f0();
  func_0x00010006c00c(uVar1,uVar8);
  param_1[1] = uVar1;
  param_1[2] = uVar8;
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  uVar8 = param_2[7];
  uVar4 = param_2[8];
  param_1[7] = uVar8;
  param_1[8] = uVar4;
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar6;
  uVar7 = param_2[0xd];
  param_1[0xd] = uVar7;
  func_0x000107c615f0();
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61174(uVar7);
  return param_1;
}



/* Entry: 101dded78; end: 101ddeebf;  */

undefined8 * FUN_101dded78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[9] = param_2[9];
  uVar4 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[0xb] = param_2[0xb];
  uVar4 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  return param_1;
}



/* Entry: 101ddeec0; end: 101ddef7b;  */

undefined8 * FUN_101ddeec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c615e8(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(param_1[5]);
  uVar1 = param_1[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_1[7]);
  uVar1 = param_1[8];
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[0xb] = param_2[0xb];
  func_0x000107c6142c(param_1[0xc]);
  uVar1 = param_1[0xd];
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101ddef7c; end: 101ddf02f;  */

int FUN_101ddef7c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101ddf030; end: 101ddf213;  */

void FUN_101ddf030(ulong *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  if (((((uVar2 == 0) || (uVar9 = *(ulong *)(unaff_x20 + 0x20), 0xe < uVar9 >> 0x3c)) ||
       (uVar7 = *(ulong *)(unaff_x20 + 0x28), uVar7 == 0)) ||
      ((uVar5 = *(ulong *)(unaff_x20 + 0x30), uVar5 == 0 ||
       (uVar12 = *(ulong *)(unaff_x20 + 0x48), uVar12 == 0)))) ||
     ((puVar11 = *(undefined1 **)(unaff_x20 + 0x50), puVar11 == (undefined1 *)0x0 ||
      (uVar10 = *(ulong *)(unaff_x20 + 0x78), uVar10 == 0)))) {
    func_0x000101ddf2c0();
    func_0x000107c613f8(&UNK_110487d10,param_2,0,0);
    *param_2 = 0;
    func_0x000107c61654();
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + 0x18);
    func_0x000107c615f0(uVar2);
    func_0x000100de78a0(uVar8,uVar9);
    func_0x000107c615f0(uVar7);
    func_0x000107c615f0(uVar5);
    func_0x000107c61434(uVar12);
    func_0x000107c61434(puVar11);
    func_0x000107c61174();
    uVar1 = uVar2;
    func_0x000107c44a00();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(unaff_x20 + 0x38);
      uVar4 = *(ulong *)(unaff_x20 + 0x40);
    }
    else {
      uVar4 = *(ulong *)(unaff_x20 + 0x40);
      if ((uVar4 == 0) || (uVar1 = *(ulong *)(unaff_x20 + 0x38), uVar1 == 0)) {
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c();
        func_0x000101ddf2c0();
        func_0x000107c613f8(&UNK_110487d10,puVar11,0,0);
        *puVar11 = 1;
        func_0x000107c61654();
        func_0x000107c615e8(uVar7);
        func_0x000107c615e8(uVar5);
        func_0x000107c61170(uVar10);
        func_0x0001000b44c0(uVar8,uVar9);
        func_0x000107c615e8(uVar2);
        return;
      }
    }
    *param_1 = uVar2;
    param_1[1] = uVar8;
    param_1[2] = uVar9;
    param_1[3] = uVar7;
    param_1[4] = uVar5;
    param_1[5] = uVar1;
    param_1[6] = uVar4;
    param_1[7] = uVar12;
    param_1[8] = (ulong)puVar11;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar2 = *(ulong *)(unaff_x20 + 0x58);
    param_1[10] = *(ulong *)(unaff_x20 + 0x60);
    param_1[9] = uVar2;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar2 = *(ulong *)(unaff_x20 + 0x68);
    param_1[0xc] = *(ulong *)(unaff_x20 + 0x70);
    param_1[0xb] = uVar2;
    param_1[0xd] = uVar10;
    func_0x000107c615f0();
    func_0x000107c61174(uVar4);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar6);
  }
  return;
}



/* Entry: 101ddf214; end: 101ddf2ff;  */

void FUN_101ddf214(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101ddf300; end: 101ddf32f;  */

void FUN_101ddf300(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  return;
}



/* Entry: 101ddf330; end: 101ddf463;  */

long FUN_101ddf330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110487e38;
  func_0x000107c613fc(&UNK_110487e38,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x0001000285a8(0x112e2ec58,&UNK_10da17920);
  func_0x000107c613fc();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  pcVar2 = FUN_101ddf6d8;
  func_0x0001000bdd8c(FUN_101ddf6d8,puVar1);
  uVar3 = 0;
  func_0x0001002cc734(0);
  func_0x000107c610f8();
  func_0x000103a70f54(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101ddf464; end: 101ddf58f;  */

void FUN_101ddf464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_110487e60;
  func_0x000107c613fc(&UNK_110487e60,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x0001000285a8(0x112e2ec58,&UNK_10da17920);
  func_0x000107c613fc();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  uVar2 = 0x101ddf7dc;
  func_0x0001000bdd8c(0x101ddf7dc,puVar1);
  uVar3 = 0;
  func_0x0001002cc734(0);
  func_0x000107c610f8();
  func_0x000103a70f54(uVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return;
}



/* Entry: 101ddf590; end: 101ddf6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ddf590(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(auStack_78);
  puVar2 = auStack_78;
  func_0x0001000a8868(puVar2,uStack_60);
  uVar3 = 2;
  func_0x00010043c5c0(2,0xf,0,uStack_60,uStack_58,puVar2);
  func_0x000107c42404();
  func_0x000107c61180();
  if (param_3 != 0) {
    func_0x0001000285a8(0x112e2ed30,&UNK_10da17958);
    lVar4 = param_3;
    func_0x0001000bda74();
    func_0x000107c61170(param_3);
    uVar8 = *(undefined8 *)(param_4 + _DAT_112fd9cb8);
    uVar7 = *(undefined8 *)(param_5 + _DAT_112fd9c48);
    lVar5 = 0;
    func_0x000101ddf81c();
    lVar6 = lVar5;
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x10) = uVar3;
    *(long *)(lVar6 + 0x18) = lVar4;
    *(undefined8 *)(lVar6 + 0x20) = uVar8;
    *(undefined8 *)(lVar6 + 0x28) = uVar7;
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(uVar7);
    func_0x0001000834e4(auStack_78);
    param_1[3] = lVar5;
    param_1[4] = (long)&PTR_DAT_110487e90;
    *param_1 = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ddf6d8);
  (*pcVar1)();
}



/* Entry: 101ddf6d8; end: 101ddf6e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ddf6d8(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x0001000d224c(auStack_78);
  puVar3 = auStack_78;
  func_0x0001000a8868(puVar3,uStack_60);
  uVar4 = 2;
  func_0x00010043c5c0(2,0xf,0,uStack_60,uStack_58,puVar3);
  func_0x000107c42404();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x0001000285a8(0x112e2ed30,&UNK_10da17958);
    lVar5 = lVar6;
    func_0x0001000bda74();
    func_0x000107c61170(lVar6);
    uVar9 = *(undefined8 *)(lVar7 + _DAT_112fd9cb8);
    uVar8 = *(undefined8 *)(lVar1 + _DAT_112fd9c48);
    lVar6 = 0;
    func_0x000101ddf81c();
    lVar7 = lVar6;
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x10) = uVar4;
    *(long *)(lVar7 + 0x18) = lVar5;
    *(undefined8 *)(lVar7 + 0x20) = uVar9;
    *(undefined8 *)(lVar7 + 0x28) = uVar8;
    func_0x000107c6157c(uVar9);
    func_0x000107c6157c(uVar8);
    func_0x0001000834e4(auStack_78);
    param_1[3] = lVar6;
    param_1[4] = (long)&PTR_DAT_110487e90;
    *param_1 = lVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ddf6d8);
  (*pcVar2)();
}



/* Entry: 101ddf6e4; end: 101ddf71f;  */

void FUN_101ddf6e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ddf720; end: 101ddf72f;  */

void FUN_101ddf720(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ddf730; end: 101ddf7cf;  */

void FUN_101ddf730(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ddf7d0; end: 101ddf7df;  */

void FUN_101ddf7d0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101ddf7e0; end: 101ddf83b;  */

void FUN_101ddf7e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ddf83c; end: 101ddfe2f;  */

undefined8
FUN_101ddf83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112e2ee00,&UNK_10da179b0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar1 = &UNK_110487fa0;
  func_0x000107c613fc(&UNK_110487fa0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c615f0(param_1);
  func_0x00010006c00c(param_2,param_3);
  uVar2 = uVar6;
  func_0x000104889654(uVar6,1,FUN_101de0f00,puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = &UNK_110487fc8;
  func_0x000107c613fc(&UNK_110487fc8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  uVar3 = 0;
  func_0x000101ddf2a0(0);
  func_0x000107c61580(uVar8,3);
  func_0x000107c61580(uVar7,3);
  func_0x000107c615f0(param_1);
  uVar4 = uVar6;
  func_0x0001048898b8(uVar6,1,0x101de0f1c,puVar1,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = &UNK_110487ff0;
  func_0x000107c613fc(&UNK_110487ff0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  func_0x000107c61580(uVar9,2);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar7);
  uVar2 = uVar6;
  func_0x0001048898b8(uVar6,1,0x101de0f38,puVar1,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar1 = &UNK_110488018;
  func_0x000107c613fc(&UNK_110488018,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar7);
  uVar4 = uVar6;
  func_0x0001048898b8(uVar6,1,0x101de0f54,puVar1,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar1 = &UNK_110488040;
  func_0x000107c613fc(&UNK_110488040,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  func_0x000107c615f0(param_1);
  uVar9 = uVar6;
  func_0x0001048898b8(uVar6,1,0x101de0f70,puVar1,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar2 = uStack_68;
  puVar1 = &UNK_110487eb0;
  func_0x000107c613fc(&UNK_110487eb0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,unaff_x20);
  puVar5 = &UNK_110488068;
  func_0x000107c613fc(&UNK_110488068,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  func_0x000107c615f0(param_1);
  uVar6 = 0x112e2ee08;
  func_0x0001000285a8(0x112e2ee08,&UNK_10da179b8);
  uVar4 = uVar2;
  func_0x000100775264(uVar2,1,FUN_101de0fc4,puVar5,uVar6);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar1 = &UNK_110488090;
  func_0x000107c613fc(&UNK_110488090,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  puVar5 = &UNK_1104880b8;
  func_0x000107c613fc(&UNK_1104880b8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101de1010;
  *(undefined **)(puVar5 + 0x18) = puVar1;
  func_0x000107c615f0(param_1);
  uVar2 = uVar6;
  func_0x0001048898b8(uVar6,1,FUN_101de101c,puVar5,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar1 = &UNK_1104880e0;
  func_0x000107c613fc(&UNK_1104880e0,0x20,7);
  puVar1[0x10] = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c615f0(param_1);
  uVar4 = uVar6;
  func_0x000100775264(uVar6,1,FUN_101de104c,puVar1,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar1 = &UNK_110488108;
  func_0x000107c613fc(&UNK_110488108,0x20,7);
  puVar1[0x10] = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c615f0(param_1);
  uVar2 = uVar6;
  func_0x000100775264(uVar6,1,0x101de1068,puVar1,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar1 = &UNK_110488130;
  func_0x000107c613fc(&UNK_110488130,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174();
  uVar4 = uVar6;
  func_0x000100775264(uVar6,1,FUN_101de1084,puVar1,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_101de08b4,0,&UNK_110487d88);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uStack_68);
  return uVar6;
}



/* Entry: 101ddfe30; end: 101de001b;  */

undefined8 FUN_101ddfe30(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined1 auStack_78 [24];
  undefined8 uStack_58;
  
  uVar17 = *param_1;
  uVar8 = param_1[1];
  uVar1 = param_1[2];
  uVar9 = param_1[3];
  uVar2 = param_1[4];
  uVar10 = param_1[5];
  uVar3 = param_1[6];
  uVar11 = param_1[7];
  uVar4 = param_1[8];
  uVar12 = param_1[9];
  uVar5 = param_1[10];
  uVar13 = param_1[0xb];
  uVar6 = param_1[0xc];
  uVar14 = param_1[0xd];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar17 = 0;
  }
  else {
    func_0x0001000285a8(0x112d627d8,&UNK_10d9285c0);
    func_0x0001000d224c(&uStack_58);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    puVar16 = &UNK_110487f00;
    func_0x000107c613fc(&UNK_110487f00,0x98,7);
    *(undefined8 *)(puVar16 + 0x10) = uVar15;
    *(undefined8 *)(puVar16 + 0x18) = uVar17;
    *(undefined8 *)(puVar16 + 0x20) = uVar8;
    *(undefined8 *)(puVar16 + 0x28) = uVar1;
    *(undefined8 *)(puVar16 + 0x30) = uVar9;
    *(undefined8 *)(puVar16 + 0x38) = uVar2;
    *(undefined8 *)(puVar16 + 0x40) = uVar10;
    *(undefined8 *)(puVar16 + 0x48) = uVar3;
    *(undefined8 *)(puVar16 + 0x50) = uVar11;
    *(undefined8 *)(puVar16 + 0x58) = uVar4;
    *(undefined8 *)(puVar16 + 0x60) = uVar14;
    *(undefined4 *)(puVar16 + 0x68) = param_3;
    *(undefined8 *)(puVar16 + 0x70) = uVar12;
    *(undefined8 *)(puVar16 + 0x78) = uVar5;
    *(undefined8 *)(puVar16 + 0x80) = uVar13;
    *(undefined8 *)(puVar16 + 0x88) = uVar6;
    *(undefined8 *)(puVar16 + 0x90) = uVar7;
    func_0x000107c6157c(uVar15);
    func_0x000107c6157c(uVar7);
    func_0x000107c615f0(uVar17);
    func_0x00010006c00c(uVar8,uVar1);
    func_0x000107c61434(uVar6);
    func_0x000107c615f0(uVar9);
    func_0x000107c615f0(uVar2);
    func_0x000107c615f0(uVar10);
    func_0x000107c61174(uVar3);
    func_0x000107c61434(uVar11);
    func_0x000107c61434(uVar4);
    func_0x000107c61174(uVar14);
    func_0x000107c61434(uVar5);
    uVar17 = uStack_58;
    func_0x0001048897a0(uStack_58,1,0,FUN_101de0bac,puVar16);
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar16);
    func_0x000107c61574(param_2);
  }
  return uVar17;
}



/* Entry: 101de001c; end: 101de0113;  */

undefined8
FUN_101de001c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar4 = *unaff_x20;
  FUN_101ddf83c();
  func_0x0001000d224c(&uStack_48);
  puVar1 = &UNK_110487eb0;
  func_0x000107c613fc(&UNK_110487eb0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar4);
  puVar2 = &UNK_110487ed8;
  func_0x000107c613fc(&UNK_110487ed8,0x1c,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined4 *)(puVar2 + 0x18) = param_4;
  uVar4 = 0x112d508c0;
  func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
  uVar3 = uStack_48;
  func_0x0001048898b8(uStack_48,1,FUN_101de0114,puVar2,uVar4);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 101de0114; end: 101de012f;  */

void FUN_101de0114(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101ddfe30(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101de0130; end: 101de01cf;  */

void FUN_101de0130(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  func_0x000101ddf2a0();
  func_0x000107c613fc();
  FUN_101ddf300();
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  func_0x000107c615e8(uVar3);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  func_0x000107c615f0(param_2);
  func_0x0001000b44c0(uVar3,uVar1);
  *param_1 = lVar2;
  func_0x00010006c00c(param_3,param_4);
  return;
}



/* Entry: 101de01d0; end: 101de02bf;  */

undefined8 FUN_101de01d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_48;
  
  uVar3 = *param_1;
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x40))(param_3,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_48);
  uVar1 = 0;
  func_0x000101ddf2a0(0);
  func_0x000107c6157c(uVar3);
  uVar2 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101de1564,uVar3,uVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(auStack_78);
  return uVar2;
}



/* Entry: 101de02c0; end: 101de03af;  */

undefined8 FUN_101de02c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_48;
  
  uVar3 = *param_1;
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x10))(param_3,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_48);
  uVar1 = 0;
  func_0x000101ddf2a0(0);
  func_0x000107c6157c(uVar3);
  uVar2 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101de1514,uVar3,uVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(auStack_78);
  return uVar2;
}



/* Entry: 101de03b0; end: 101de049f;  */

undefined8 FUN_101de03b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_48;
  
  uVar3 = *param_1;
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x30))(param_3,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_48);
  uVar1 = 0;
  func_0x000101ddf2a0(0);
  func_0x000107c6157c(uVar3);
  uVar2 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101de14cc,uVar3,uVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(auStack_78);
  return uVar2;
}



/* Entry: 101de04a0; end: 101de058f;  */

undefined8 FUN_101de04a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_48;
  
  uVar3 = *param_1;
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x20))(param_3,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_48);
  uVar1 = 0;
  func_0x000101ddf2a0(0);
  func_0x000107c6157c(uVar3);
  uVar2 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101de147c,uVar3,uVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(auStack_78);
  return uVar2;
}



/* Entry: 101de0590; end: 101de066b;  */

void FUN_101de0590(long *param_1,long *param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  lVar3 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  puVar1 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61648();
  if (puVar1 == (undefined1 *)0x0) {
    func_0x000101de0c04();
    func_0x000107c613f8(&UNK_1106c47b0,puVar1,0,0);
    *puVar1 = 0;
    func_0x000107c61654();
  }
  else {
    FUN_101de13b8();
    func_0x000107c61574(puVar1);
    if (unaff_x21 == 0) {
      uVar2 = *(undefined8 *)(lVar3 + 0x48);
      *(long *)(lVar3 + 0x48) = param_4;
      func_0x000107c6142c(uVar2);
      *param_1 = lVar3;
      param_1[1] = param_4;
      func_0x000107c61434(param_4);
      func_0x000107c6157c(lVar3);
    }
  }
  return;
}



/* Entry: 101de066c; end: 101de075b;  */

undefined8
FUN_101de066c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x38))(param_4,param_2,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_80);
  uVar1 = 0;
  func_0x000101ddf2a0(0);
  func_0x000107c6157c(param_1);
  uVar2 = uStack_80;
  func_0x000100775264(uStack_80,1,FUN_101de10d8,param_1,uVar1);
  func_0x000107c61574(param_4);
  func_0x000107c61170(uStack_80);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_78);
  return uVar2;
}



/* Entry: 101de075c; end: 101de0807;  */

void FUN_101de075c(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar4 = (uint)(param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  lVar6 = *param_2;
  if (((param_3 & 1) != 0) && (uVar1 = param_4, func_0x000107c44b8c(), (int)uVar1 != 0)) {
    func_0x000107c5c928();
    func_0x000107c61180();
    if (param_4 != 0) {
      uVar2 = param_4;
      func_0x000107c5faec();
      func_0x000107c61170(param_4);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar4 & 0x20000000) != 0) {
        uVar1 = (ulong)(uVar4 >> 0x18) & 0xf;
      }
      uVar5 = CONCAT44(uVar4,uVar3);
      if (uVar1 != 0) {
        uVar5 = *(undefined8 *)(lVar6 + 0x60);
        *(ulong *)(lVar6 + 0x58) = uVar2;
        *(ulong *)(lVar6 + 0x60) = CONCAT44(uVar4,uVar3);
      }
      func_0x000107c6142c(uVar5);
    }
  }
  *param_1 = lVar6;
  func_0x000107c6157c(lVar6);
  return;
}



/* Entry: 101de0808; end: 101de08b3;  */

void FUN_101de0808(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar4 = (uint)(param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  lVar6 = *param_2;
  if (((param_3 & 1) != 0) && (uVar1 = param_4, func_0x000107c44a00(), (int)uVar1 != 0)) {
    func_0x000107c4e174();
    func_0x000107c61180();
    if (param_4 != 0) {
      uVar2 = param_4;
      func_0x000107c5faec();
      func_0x000107c61170(param_4);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar4 & 0x20000000) != 0) {
        uVar1 = (ulong)(uVar4 >> 0x18) & 0xf;
      }
      uVar5 = CONCAT44(uVar4,uVar3);
      if (uVar1 != 0) {
        uVar5 = *(undefined8 *)(lVar6 + 0x70);
        *(ulong *)(lVar6 + 0x68) = uVar2;
        *(ulong *)(lVar6 + 0x70) = CONCAT44(uVar4,uVar3);
      }
      func_0x000107c6142c(uVar5);
    }
  }
  *param_1 = lVar6;
  func_0x000107c6157c(lVar6);
  return;
}



/* Entry: 101de08b4; end: 101de0907;  */

void FUN_101de08b4(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_101ddf030(&uStack_90);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_48;
    param_1[8] = uStack_50;
    param_1[0xb] = uStack_38;
    param_1[10] = uStack_40;
    param_1[0xd] = uStack_28;
    param_1[0xc] = uStack_30;
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
    param_1[5] = uStack_68;
    param_1[4] = uStack_70;
    param_1[7] = uStack_58;
    param_1[6] = uStack_60;
  }
  return;
}



/* Entry: 101de0908; end: 101de0bab;  */

void FUN_101de0908(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  puVar1 = param_1;
  func_0x0001000d224c(&puStack_98);
  puVar5 = puStack_98;
  if (puStack_98 != (undefined *)0x0) {
    func_0x000107c5ee20(param_4,param_5);
    if (in_stack_00000008 == 0) {
      lStack_c0 = 0;
    }
    else {
      uVar2 = 0x112e2edf8;
      func_0x0001000285a8(0x112e2edf8,&UNK_10da179a8);
      func_0x000107c5fc48(in_stack_00000008,uVar2);
      lStack_c0 = in_stack_00000008;
    }
    if (in_stack_00000010 == 0) {
      lStack_c8 = 0;
    }
    else {
      uVar3 = 0;
      FUN_101de0ec0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar4 = 0;
      FUN_101de0ec0(0,0x112e2dde8,&PTR_PTR_1126c4ba8);
      uVar2 = uVar4;
      func_0x000100120cb0();
      func_0x000107c5f9dc(in_stack_00000010,uVar3,uVar4,uVar2);
      lStack_c8 = in_stack_00000010;
    }
    func_0x000107c45374();
    if (in_stack_00000030 == 0) {
      in_stack_00000028 = 0;
    }
    else {
      func_0x000107c5fadc(in_stack_00000028,in_stack_00000030);
    }
    if (in_stack_00000040 == 0) {
      in_stack_00000038 = 0;
    }
    else {
      func_0x000107c5fadc(in_stack_00000038,in_stack_00000040);
    }
    puVar6 = &UNK_110487f28;
    func_0x000107c613fc(&UNK_110487f28,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = in_stack_00000048;
    *(undefined1 **)(puVar6 + 0x18) = param_1;
    pcStack_78 = FUN_101de0d10;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_101de0de0;
    puStack_80 = &UNK_110487f40;
    ppuVar7 = &puStack_98;
    puStack_70 = puVar6;
    func_0x000107c60bc4();
    puVar6 = puStack_70;
    func_0x000107c6157c(in_stack_00000048);
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar6);
    func_0x000107c50178(puVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(lStack_c0);
    func_0x000107c61170(lStack_c8);
    func_0x000107c61170(in_stack_00000028);
    func_0x000107c61170(in_stack_00000038);
    return;
  }
  func_0x000101de0c04();
  puVar5 = &UNK_1106c47b0;
  func_0x000107c613f8(&UNK_1106c47b0,puVar1,0,0);
  *puVar1 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 101de0bac; end: 101de0c43;  */

void FUN_101de0bac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101de0908(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined4 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101de0c44; end: 101de0d0f;  */

void FUN_101de0c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  puVar1 = &UNK_110487f78;
  func_0x000107c613fc(&UNK_110487f78,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  puVar1[0x20] = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c614b0(param_5);
  uVar2 = 0;
  FUN_101de0ec0(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(param_7);
  func_0x000107c615f0(param_1);
  func_0x00010090569c(0x101de0eb0,puVar1,uVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101de0d10; end: 101de0d17;  */

void FUN_101de0d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_110487f78;
  func_0x000107c613fc(&UNK_110487f78,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  puVar2[0x20] = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  func_0x000107c614b0(param_5);
  uVar3 = 0;
  FUN_101de0ec0(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(param_1);
  func_0x00010090569c(0x101de0eb0,puVar2,uVar3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101de0d18; end: 101de0ddf;  */

void FUN_101de0d18(undefined *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lStack_28;
  
  if (param_1 == (undefined *)0x0) {
    if ((param_3 & 1) == 0) {
      func_0x000101de0c04();
      puVar1 = &UNK_1106c47b0;
      func_0x000107c613f8(&UNK_1106c47b0,param_1,0,0);
      uVar2 = 1;
    }
    else {
      if (param_4 != 0) {
        lStack_28 = param_4;
        func_0x000107c615f0(param_4);
        func_0x000100b60084(&lStack_28);
        func_0x000107c615e8(param_4);
        return;
      }
      func_0x000101de0c04();
      puVar1 = &UNK_1106c47b0;
      func_0x000107c613f8(&UNK_1106c47b0,param_1,0,0);
      uVar2 = 2;
    }
    *param_1 = uVar2;
  }
  else {
    func_0x000107c614b0();
    puVar1 = param_1;
  }
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101de0de0; end: 101de0e93;  */

void FUN_101de0de0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_5;
  func_0x000107c61174(param_5);
  (*pcVar1)(param_2,param_3,uVar4,param_4,param_5);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 101de0e94; end: 101de0ebf;  */

void FUN_101de0e94(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101de0ec0; end: 101de0eff;  */

void FUN_101de0ec0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101de0f00; end: 101de0f8b;  */

void FUN_101de0f00(void)

{
  long unaff_x20;
  
  FUN_101de0130(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101de0f8c; end: 101de0fc3;  */

void FUN_101de0f8c(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101de0fc4; end: 101de100f;  */

void FUN_101de0fc4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101de0590(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101de1010; end: 101de101b;  */

undefined8 FUN_101de1010(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(auStack_78,param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),uVar1,
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x38))(uVar1,param_2,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_80);
  uVar2 = 0;
  func_0x000101ddf2a0(0);
  func_0x000107c6157c(param_1);
  uVar3 = uStack_80;
  func_0x000100775264(uStack_80,1,FUN_101de10d8,param_1,uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_80);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_78);
  return uVar3;
}



/* Entry: 101de101c; end: 101de104b;  */

void FUN_101de101c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 101de104c; end: 101de1083;  */

void FUN_101de104c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101de075c(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101de1084; end: 101de10d7;  */

void FUN_101de1084(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *param_2;
  uVar1 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x78) = uVar2;
  func_0x000107c61170(uVar1);
  *param_1 = lVar3;
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(lVar3);
  return;
}



/* Entry: 101de10d8; end: 101de1127;  */

void FUN_101de10d8(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  func_0x000107c6142c(uVar1);
  *param_1 = unaff_x20;
  func_0x000107c61434(uVar2);
  func_0x000107c6157c();
  return;
}



/* Entry: 101de1128; end: 101de1257;  */

undefined * FUN_101de1128(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101de126c(0,lVar5,0);
  puVar1 = PTR___sypN_11034f1a8;
  if (lVar5 != 0) {
    do {
      puVar2 = puStack_68;
      param_1 = param_1 + 0x20;
      func_0x0001000bb420(param_1,auStack_88);
      func_0x000100102924(auStack_88,auStack_a8);
      uVar3 = 0x112e2edf8;
      func_0x0001000285a8(0x112e2edf8,&UNK_10da179a8);
      uVar4 = 0;
      func_0x000107c6147c(&uStack_b0,auStack_a8,puVar1 + 8,uVar3,6);
      uVar3 = uStack_b0;
      if ((uVar4 & 1) == 0) {
        func_0x000107c61574(puVar2);
        return (undefined *)0x0;
      }
      uVar4 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        FUN_101de126c(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puStack_68;
}



/* Entry: 101de1258; end: 101de126b;  */

void FUN_101de1258(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2ee10 == (undefined *)0x0 || ((ulong)puRam0000000112e2ee10 & 1) != 0) {
    puVar1 = &UNK_10e8b9db8;
    func_0x000107c61518(&UNK_10e8b9db8,0x20,0,0);
    puRam0000000112e2ee10 = puVar1;
  }
  return;
}



/* Entry: 101de126c; end: 101de1287;  */

void FUN_101de126c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101de1288();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101de1288; end: 101de13b7;  */

undefined * FUN_101de1288(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101de13b8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_101de1258();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112e2edf8;
    func_0x0001000285a8(0x112e2edf8,&UNK_10da179a8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101de13b8; end: 101de147b;  */

void FUN_101de13b8(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  func_0x000107c5b148();
  func_0x000107c61180();
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = param_1;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    if (*(long *)(puVar1 + 0x10) == 0) {
      func_0x000107c6142c(puVar1);
    }
    else {
      puVar2 = puVar1;
      FUN_101de1128();
      func_0x000107c6142c();
      if (puVar2 == (undefined1 *)0x0) {
        func_0x000101de0c04();
        func_0x000107c613f8(&UNK_1106c47b0,puVar1,0,0);
        *puVar1 = 3;
        func_0x000107c61654();
      }
    }
  }
  return;
}



/* Entry: 101de147c; end: 101de14cb;  */

void FUN_101de147c(long *param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *param_1 = unaff_x20;
  func_0x000107c6157c();
  return;
}



/* Entry: 101de14cc; end: 101de1513;  */

void FUN_101de14cc(long *param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  *param_1 = unaff_x20;
  func_0x000107c6157c();
  return;
}



/* Entry: 101de1514; end: 101de1563;  */

void FUN_101de1514(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  func_0x000107c615e8(uVar1);
  *param_1 = unaff_x20;
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c();
  return;
}



/* Entry: 101de1564; end: 101de15b3;  */

void FUN_101de1564(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  func_0x000107c615e8(uVar1);
  *param_1 = unaff_x20;
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c();
  return;
}



/* Entry: 101de15b4; end: 101de1603;  */

void FUN_101de15b4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110488238;
  if (lRam0000000112e2ee18 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e2ee18 = param_1;
  }
  return;
}



/* Entry: 101de1604; end: 101de16db;  */

void FUN_101de1604(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101de16dc; end: 101de171f;  */

void FUN_101de16dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d55598 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b25d0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d55598 = puVar1;
  return;
}



/* Entry: 101de1720; end: 101de173f;  */

long FUN_101de1720(long param_1,uint param_2)

{
  long lVar1;
  
  if (4 < param_1 - 1U) {
    param_1 = 0x100000000;
  }
  lVar1 = 2;
  if ((param_2 & 1) == 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



/* Entry: 101de1740; end: 101de1787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101de1740(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112e2ee38;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 101de1788; end: 101de178f;  */

void FUN_101de1788(void)

{
  if (lRam0000000112e2ee68 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e691c38);
  return;
}



/* Entry: 101de1790; end: 101de17c7;  */

void FUN_101de1790(undefined8 param_1)

{
  if (lRam0000000112e2ee68 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e691c38);
  return;
}



/* Entry: 101de17c8; end: 101de183f;  */

void FUN_101de17c8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10da17ab8;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 101de1840; end: 101de184b;  */

void FUN_101de1840(void)

{
  return;
}



/* Entry: 101de184c; end: 101de188f;  */

void FUN_101de184c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101de1890; end: 101de1907;  */

void FUN_101de1890(undefined1 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x79) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x78) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101de1908,param_2,0);
  return;
}



/* Entry: 101de1908; end: 101de19db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101de1908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  lVar6 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c5eea0(uVar3);
  lVar5 = _DAT_112e2ee38;
  func_0x000107c61428(lVar6 + _DAT_112e2ee38,unaff_x22 + 0x10,0,0);
  (**(code **)(lVar4 + 0x10))(uVar1,lVar6 + lVar5,uVar2);
  func_0x000107c5ee68(uVar1);
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  func_0x000107c61428(lVar6 + lVar5,unaff_x22 + 0x28,0x21,0);
  (**(code **)(lVar4 + 0x28))(lVar6 + lVar5,uVar3,uVar2);
  func_0x000107c614a8(unaff_x22 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101de19dc,0,0);
  return;
}



/* Entry: 101de19dc; end: 101de1beb;  */

void FUN_101de19dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  cVar3 = *(char *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + 0x10);
  uVar8 = 0x535f444554494445;
  uVar7 = 0xeb0000000050414e;
  if (cVar3 != '\x01') {
    uVar8 = 0xd000000000000012;
    uVar7 = 0x800000010f011680;
  }
  uVar6 = 0x50414e535f57454e;
  if (cVar3 != '\0') {
    uVar6 = uVar8;
  }
  uVar8 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar8 = uVar7;
  }
  bVar4 = *(byte *)(unaff_x22 + 0x79);
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  uVar8 = 0xed00006f77546d65;
  uVar7 = 0x4d6f546465766173;
  if (bVar4 != 5) {
    uVar8 = 0xed00007963616765;
    uVar7 = 0x4c6f546465766173;
  }
  uVar1 = 0x800000010f0116a0;
  uVar2 = 0xd000000000000018;
  if (bVar4 != 3) {
    uVar1 = 0xee00736569726f6d;
    uVar2 = 0x654d6f5465766173;
  }
  if (bVar4 < 5) {
    uVar8 = uVar1;
    uVar7 = uVar2;
  }
  uVar1 = 0x676e697a69736572;
  if (bVar4 != 1) {
    uVar1 = 0x6974707972636e65;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 1) {
    uVar2 = 0xea00000000006e6f;
  }
  uVar10 = 0x800000010f0116c0;
  uVar5 = 0xd000000000000014;
  if (bVar4 != 0) {
    uVar10 = uVar2;
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar8 = uVar10;
    uVar7 = uVar5;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c5fadc(uVar7,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x0001058dad4c(uVar10,uVar9,uVar6,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101de1be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101de1bec; end: 101de248b;  */

undefined1  [16] FUN_101de1bec(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lStack_50;
  byte bStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar1 = param_3 >> 5 & 7;
  if (uVar1 < 2) {
    pcVar4 = "T_SNAP_DOC_METADATA";
    uVar2 = 0xd000000000000022;
    if (uVar1 != 0) {
      pcVar4 = "FAILED_TO_RESIZE_IMAGE";
      uVar2 = 0xd000000000000024;
    }
    auVar5._8_8_ = (ulong)pcVar4 | 0x8000000000000000;
    auVar5._0_8_ = uVar2;
    return auVar5;
  }
  lStack_50 = param_1;
  if (uVar1 == 2) {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x44);
    func_0x000107c5fb78(0xd000000000000037,0x800000010f0118f0);
    puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
    func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                        PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    func_0x000107c5fb78(0x6c6175746361202c,0xe90000000000003d);
    puVar3 = (undefined *)0x112d3d530;
    lStack_50 = param_2;
    bStack_48 = (byte)param_3 & 0x1f;
    func_0x0001000285a8(0x112d3d530,&UNK_10d9059d0);
    func_0x000107c5fb18(&lStack_50,puVar3);
  }
  else {
    if (uVar1 != 3) {
      if ((param_2 == 0 && param_1 == 0) && ((param_3 & 0xff) == 0x80)) {
        pcVar4 = "SE_MEDIA_TO_SNAP_DOC";
LAB_101de1dd4:
        uStack_38 = (ulong)pcVar4 | 0x8000000000000000;
        uStack_40 = 0xd000000000000018;
        goto LAB_101de1d94;
      }
      if (((param_1 == 1) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
        pcVar4 = "FAILED_TO_ADD_BASE_MEDIA_TO_SNAP_DOC";
LAB_101de1dfc:
        uStack_38 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
        uStack_40 = 0xd000000000000024;
        goto LAB_101de1d94;
      }
      if (((param_1 == 2) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
        pcVar4 = "FAILED_TO_APPROXIMATE_TOTAL_MEDIA_SIZE";
LAB_101de1e34:
        uStack_38 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
        uStack_40 = 0xd000000000000026;
        goto LAB_101de1d94;
      }
      if (((param_1 == 3) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
        uStack_38 = 0x800000010f011cb0;
        uStack_40 = 0xd000000000000015;
        goto LAB_101de1d94;
      }
      if (((param_1 == 4) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
        pcVar4 = "FAILED_TO_COPY_SNAP_DOC";
LAB_101de1ea4:
        uStack_38 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
        uStack_40 = 0xd000000000000017;
        goto LAB_101de1d94;
      }
      if (((param_1 == 5) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
        uStack_38 = 0x800000010f011c60;
        uStack_40 = 0xd00000000000002b;
        goto LAB_101de1d94;
      }
      if (((param_1 == 6) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
        uStack_38 = 0x800000010f011c20;
        uStack_40 = 0xd000000000000030;
        goto LAB_101de1d94;
      }
      if (((param_1 == 7) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
        pcVar4 = "FAILED_TO_CREATE_CONTENT_WRITER";
      }
      else {
        if (((param_1 == 8) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
          pcVar4 = "FAILED_TO_CREATE_IMAGE_FROM_IMAGE_DATA";
          goto LAB_101de1e34;
        }
        if (((param_1 != 9) || (param_2 != 0)) || ((param_3 & 0xff) != 0x80)) {
          if (((param_1 == 10) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
            uStack_38 = 0x800000010f011b90;
            uStack_40 = 0xd00000000000001c;
            goto LAB_101de1d94;
          }
          if (((param_1 == 0xb) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
            uStack_38 = 0x800000010f011b30;
            uStack_40 = 0xd000000000000023;
            goto LAB_101de1d94;
          }
          if (((param_1 == 0xc) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
            pcVar4 = "FEATURED_ENTRY_DOES_NOT_EXIST";
          }
          else {
            if (((param_1 == 0xd) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
              pcVar4 = "FAILED_TO_FETCH_EXISTING_ENTRY";
LAB_101de2070:
              uStack_38 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
              uStack_40 = 0xd00000000000001e;
              goto LAB_101de1d94;
            }
            if (((param_1 != 0xe) || (param_2 != 0)) || ((param_3 & 0xff) != 0x80)) {
              if (((param_1 == 0xf) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                uStack_38 = 0x800000010f011a80;
                uStack_40 = 0xd000000000000016;
                goto LAB_101de1d94;
              }
              if (((param_1 == 0x10) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                pcVar4 = "FAILED_TO_RESOLVE_SNAP_DOC_ENCRYPTION_INFO";
              }
              else {
                if (((param_1 == 0x11) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                  pcVar4 = "FAILED_TO_RETRIEVE_MEDIA_DATA";
                  goto LAB_101de2044;
                }
                if (((param_1 == 0x12) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                  pcVar4 = "FAILED_TO_UNCLAIM_MEDIA";
                  goto LAB_101de1ea4;
                }
                if (((param_1 == 0x13) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                  uStack_38 = 0x800000010f0119e0;
                  uStack_40 = 0xd000000000000029;
                  goto LAB_101de1d94;
                }
                if (((param_1 == 0x14) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                  pcVar4 = "FAILED_TO_WRITE_ENCRYPTED_MEDIA_DATA";
                  goto LAB_101de1dfc;
                }
                if (((param_1 == 0x15) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                  uStack_38 = 0x800000010f011980;
                  uStack_40 = 0xd000000000000022;
                  goto LAB_101de1d94;
                }
                if (((param_1 == 0x16) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                  uStack_38 = 0x800000010f011960;
                  uStack_40 = 0xd000000000000014;
                  goto LAB_101de1d94;
                }
                if (((param_1 != 0x17) || (param_2 != 0)) || ((param_3 & 0xff) != 0x80)) {
                  if (((param_1 == 0x18) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                    uStack_38 = 0x800000010f0118c0;
                    uStack_40 = 0xd00000000000002d;
                    goto LAB_101de1d94;
                  }
                  if (((param_1 == 0x19) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                    uStack_38 = 0x800000010f011850;
                    uStack_40 = 0xd000000000000036;
                    goto LAB_101de1d94;
                  }
                  if (((param_1 != 0x1a) || (param_2 != 0)) || ((param_3 & 0xff) != 0x80)) {
                    if (((param_1 == 0x1b) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                      uStack_38 = 0x800000010f011810;
                      uStack_40 = 0xd000000000000019;
                      goto LAB_101de1d94;
                    }
                    if (((param_1 == 0x1c) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                      uStack_38 = 0x800000010f0117e0;
                      uStack_40 = 0xd00000000000002e;
                      goto LAB_101de1d94;
                    }
                    if (((param_1 == 0x1d) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                      uStack_38 = 0x800000010f0117b0;
                      uStack_40 = 0xd00000000000002c;
                      goto LAB_101de1d94;
                    }
                    if (((param_1 == 0x1e) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                      uStack_38 = 0x800000010f011780;
                      uStack_40 = 0xd000000000000025;
                      goto LAB_101de1d94;
                    }
                    if (((param_1 == 0x1f) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                      uStack_38 = 0x800000010f011750;
                      uStack_40 = 0xd000000000000020;
                      goto LAB_101de1d94;
                    }
                    if (((param_1 == 0x20) && (param_2 == 0)) && ((param_3 & 0xff) == 0x80)) {
                      uStack_38 = 0x800000010f011720;
                      uStack_40 = 0xd000000000000020;
                      goto LAB_101de1d94;
                    }
                    if (((param_1 != 0x21) || (param_2 != 0)) || ((param_3 & 0xff) != 0x80)) {
                      uStack_38 = 0x800000010f0116e0;
                      uStack_40 = 0xd000000000000012;
                      goto LAB_101de1d94;
                    }
                    pcVar4 = "STORY_HAS_NO_SNAPS";
                    goto LAB_101de1dd4;
                  }
                  pcVar4 = "INCONSISTENT_MEDIA_METADATA_ID";
                  goto LAB_101de2070;
                }
                pcVar4 = "UNEXPECTED_PLAYBACK_LAYER_WITHOUT_MEDIA_ID";
              }
              uStack_38 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
              uStack_40 = 0xd00000000000002a;
              goto LAB_101de1d94;
            }
            pcVar4 = "FAILED_TO_FETCH_EXISTING_SNAP";
          }
LAB_101de2044:
          uStack_40 = 0xd00000000000001d;
          uStack_38 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
          goto LAB_101de1d94;
        }
        pcVar4 = "FAILED_TO_CONVERT_IMAGE_TO_JPEG";
      }
      uStack_38 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
      uStack_40 = 0xd00000000000001f;
      goto LAB_101de1d94;
    }
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(uStack_38);
    uStack_40 = 0xd000000000000027;
    uStack_38 = 0x800000010f011890;
    puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
    func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                        PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
LAB_101de1d94:
  auVar6._8_8_ = uStack_38;
  auVar6._0_8_ = uStack_40;
  return auVar6;
}



/* Entry: 101de248c; end: 101de25df;  */

undefined1  [16] FUN_101de248c(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5fcbc();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_48 = param_1;
  func_0x000107c614b0(param_1);
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = &uStack_60;
  func_0x000107c6147c(puVar2,&uStack_48,uVar4,&UNK_1106e3fc0,6);
  if ((int)puVar2 == 0) {
    uStack_60 = param_1;
    func_0x000107c614b0(param_1);
    lVar3 = lVar6;
    func_0x000107c6147c(lVar6,&uStack_60,uVar4,lVar1,6);
    if ((int)lVar3 == 0) {
      uVar5 = 0xe700000000000000;
      uVar4 = 0x4e574f4e4b4e55;
    }
    else {
      (**(code **)(lVar7 + 8))(lVar6,lVar1);
      uVar5 = 0xe900000000000044;
      uVar4 = 0x454c4c45434e4143;
    }
  }
  else {
    uVar4 = uStack_60;
    uVar5 = uStack_58;
    FUN_101de1bec(uStack_60,uStack_58,uStack_50);
    FUN_101de25e0(uStack_60,uStack_58,uStack_50);
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar4;
  return auVar8;
}



/* Entry: 101de25e0; end: 101de25f3;  */

void FUN_101de25e0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  return;
}



/* Entry: 101de25f4; end: 101de2a03;  */

undefined8 FUN_101de25f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lStack_60;
  long lStack_58;
  byte bStack_50;
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5fcbc();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_48 = param_1;
  func_0x000107c614b0(param_1);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  plVar3 = &lStack_60;
  func_0x000107c6147c(plVar3,&lStack_48,uVar2,&UNK_1106e3fc0,6);
  if ((int)plVar3 == 0) {
    lStack_60 = param_1;
    func_0x000107c614b0(param_1);
    lVar4 = lVar6;
    func_0x000107c6147c(lVar6,&lStack_60,uVar2,lVar1,6);
    if ((int)lVar4 != 0) {
      (**(code **)(lVar7 + 8))(lVar6,lVar1);
      return 0;
    }
  }
  else {
    uVar5 = (uint)(bStack_50 >> 5);
    if (uVar5 < 2) {
      if (uVar5 == 0) {
        FUN_101de25e0();
        return 5;
      }
      FUN_101de25e0();
      return 8;
    }
    if (uVar5 - 2 < 2) {
      return 6;
    }
    if ((lStack_58 != 0 || lStack_60 != 0) || (bStack_50 != 0x80)) {
      if ((lStack_60 == 1) && ((lStack_58 == 0 && (bStack_50 == 0x80)))) {
        return 3;
      }
      if (((lStack_60 != 2) || (lStack_58 != 0)) || (bStack_50 != 0x80)) {
        if (((lStack_60 == 3) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
          return 2;
        }
        if (((lStack_60 == 4) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
          return 3;
        }
        if (((lStack_60 == 5) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
          return 8;
        }
        if (((lStack_60 == 6) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
          return 8;
        }
        if (((lStack_60 == 7) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
          return 5;
        }
        if ((((lStack_60 == 8) && (lStack_58 == 0)) && (bStack_50 == 0x80)) ||
           (((lStack_60 == 9 && (lStack_58 == 0)) && (bStack_50 == 0x80)))) {
          return 4;
        }
        if (((lStack_60 == 10) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
          return 5;
        }
        if (((lStack_60 == 0xb) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
          return 6;
        }
        if (((((lStack_60 != 0xc) || (lStack_58 != 0)) || (bStack_50 != 0x80)) &&
            (((lStack_60 != 0xd || (lStack_58 != 0)) || (bStack_50 != 0x80)))) &&
           (((lStack_60 != 0xe || (lStack_58 != 0)) || (bStack_50 != 0x80)))) {
          if (((lStack_60 == 0xf) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
            return 4;
          }
          if (((lStack_60 == 0x10) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
            return 5;
          }
          if (((lStack_60 != 0x11) || (lStack_58 != 0)) || (bStack_50 != 0x80)) {
            if (((lStack_60 == 0x12) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
              return 2;
            }
            if (((lStack_60 == 0x13) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
              return 3;
            }
            if (((lStack_60 == 0x14) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
              return 5;
            }
            if (((lStack_60 == 0x15) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
              return 4;
            }
            if (((lStack_60 != 0x16) || (lStack_58 != 0)) || (bStack_50 != 0x80)) {
              if (((lStack_60 == 0x17) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 6;
              }
              if (((lStack_60 == 0x18) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 6;
              }
              if (((lStack_60 == 0x19) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 6;
              }
              if (((lStack_60 == 0x1a) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 6;
              }
              if (((lStack_60 == 0x1b) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 6;
              }
              if (((lStack_60 == 0x1c) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 6;
              }
              if (((lStack_60 == 0x1d) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 6;
              }
              if (((lStack_60 == 0x1e) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 7;
              }
              if (((lStack_60 == 0x1f) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 2;
              }
              if (((lStack_60 == 0x20) && (lStack_58 == 0)) && (bStack_50 == 0x80)) {
                return 2;
              }
              if ((bStack_50 == 0x80 && lStack_58 == 0) && lStack_60 == 0x21) {
                return 2;
              }
              return 10;
            }
          }
        }
      }
    }
  }
  return 10;
}



/* Entry: 101de2a04; end: 101de2a83;  */

void FUN_101de2a04(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  puVar2 = PTR_PTR_1126b1060;
  func_0x000107c610f8();
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c47d08();
  func_0x000107c61170(uVar1);
  puRam0000000113804540 = puVar2;
  return;
}



/* Entry: 101de2a84; end: 101de2ae3; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager init] */

void FUN_101de2a84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSaveServicesImpl.MemoriesSaveManager",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101de2ab0);
  (*pcVar1)();
}



/* Entry: 101de2ae4; end: 101de2c2b; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101de2b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101de2b74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101de2ae4(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112e2ef98);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2efa0));
  func_0x0001000834e4(param_1 + _DAT_112e2efa8);
  func_0x0001000834e4(param_1 + _DAT_112e2efb0);
  func_0x0001000834e4(param_1 + _DAT_112e2efb8);
  func_0x0001000834e4(param_1 + _DAT_112e2efc0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2efc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e2efd0));
  return;
}



/* Entry: 101de2c2c; end: 101de2c4b;  */

void FUN_101de2c2c(void)

{
  func_0x000107c61168(&PTR_PTR_112805068);
  return;
}



/* Entry: 101de2c4c; end: 101de2c67;  */

void FUN_101de2c4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101de2c68,0,0);
  return;
}



/* Entry: 101de2c68; end: 101de2d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101de2c68(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  if (*(long *)(unaff_x22 + 0x10) != 0) {
    func_0x000107c61170();
    func_0x0001000d224c(unaff_x22 + 0x10);
    if (*(long *)(unaff_x22 + 0x10) != 0) {
      func_0x000107c615e8();
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101de2d4c;
    }
  }
  puVar2 = (undefined8 *)0x0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_101df6cf4();
  puVar3 = &UNK_1106e3fc0;
  func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
  puVar2[1] = 0;
  *puVar2 = 0x16;
  *(undefined1 *)(puVar2 + 2) = 0x80;
  func_0x000107c61654();
  func_0x000107c614b0(puVar3);
  FUN_101de2d64(uVar4,uVar1,puVar3);
  func_0x000107c61654();
  func_0x000107c614ac(puVar3);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101de2d4c:
                    /* WARNING: Could not recover jumptable at 0x000101de2d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101de2d64; end: 101de2e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101de2d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar1 = unaff_x20 + _DAT_112e2f020;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  func_0x000107c61434(param_2);
  func_0x000107c6142c(0);
  uStack_170 = 0;
  uStack_168 = 1;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 1;
  uStack_130 = 0;
  uStack_128 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_e8 = 1;
  auStack_e0[0] = 0;
  uStack_d8 = 1;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 1;
  uStack_160 = param_1;
  uStack_158 = param_2;
  uStack_d0 = param_1;
  uStack_c8 = param_2;
  func_0x000101df658c(&uStack_170,&uStack_200);
  func_0x000101df65c8(auStack_e0);
  FUN_101de25f4();
  uStack_1b8 = CONCAT62(uStack_126,uStack_128);
  uStack_1c0 = uStack_130;
  uStack_1a8 = uStack_118;
  uStack_1b0 = uStack_120;
  uStack_198 = uStack_108;
  uStack_1a0 = uStack_110;
  uStack_188 = uStack_f8;
  uStack_190 = uStack_100;
  uStack_200 = CONCAT71(uStack_16f,uStack_170);
  uStack_1f8 = uStack_168;
  uStack_1e8 = uStack_158;
  uStack_1f0 = uStack_160;
  uStack_1c8 = CONCAT71(uStack_137,uStack_138);
  uStack_1d8 = uStack_148;
  uStack_1e0 = uStack_150;
  uStack_1d0 = uStack_140;
  uStack_178 = 0;
  uStack_180 = param_3;
  (**(code **)(lVar3 + 8))(9,&uStack_200,uVar2,lVar3);
  func_0x000101df65c8(&uStack_200);
  return;
}



/* Entry: 101de2e98; end: 101de2f33;  */

void FUN_101de2e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_13;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_12;
  *(undefined8 *)(unaff_x22 + 0x60) = param_11;
  *(undefined1 *)(unaff_x22 + 0xbb) = param_9._2_1_;
  *(undefined1 *)(unaff_x22 + 0xba) = param_9._1_1_;
  *(undefined1 *)(unaff_x22 + 0xb9) = (undefined1)param_9;
  *(undefined1 *)(unaff_x22 + 0xb8) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101de2f34,0,0);
  return;
}



/* Entry: 101de2f34; end: 101de32bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101de2f34(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  byte bVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long unaff_x22;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  puVar20 = *(undefined8 **)(unaff_x22 + 0x10);
  if (puVar20 == (undefined8 *)0x0) {
LAB_101de3218:
    uVar22 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
    FUN_101df6cf4();
    puVar17 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,param_1,0,0);
    param_1[1] = 0;
    *param_1 = 0x16;
    *(undefined1 *)(param_1 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c614b0(puVar17);
    FUN_101de2d64(uVar22,uVar14,puVar17);
    func_0x000107c61654();
    func_0x000107c614ac(puVar17);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101de32b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x0001000d224c(unaff_x22 + 0x18);
  lVar21 = *(long *)(unaff_x22 + 0x18);
  if (lVar21 == 0) {
    func_0x000107c61170();
    param_1 = puVar20;
    goto LAB_101de3218;
  }
  lVar19 = *(long *)(unaff_x22 + 0x58);
  if (lVar19 != 0) {
    uVar22 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar17 = PTR_PTR_1126af4c0;
    func_0x000107c61168();
    func_0x000107c5fadc(uVar22,lVar19);
    func_0x000107c43148();
    func_0x000107c61180();
    func_0x000107c61170(uVar22);
    if (puVar17 != (undefined *)0x0) {
      puVar13 = PTR_PTR_1126af4c0;
      func_0x000107c61168(PTR_PTR_1126af4c0);
      puVar18 = puVar17;
      func_0x000107c6148c(puVar17,puVar13);
      if (puVar18 == (undefined *)0x0) {
        func_0x000107c615e8(puVar17);
      }
      goto LAB_101de3024;
    }
  }
  puVar18 = (undefined *)0x0;
LAB_101de3024:
  *(undefined **)(unaff_x22 + 0x88) = puVar18;
  uVar22 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar19 = *(long *)(unaff_x22 + 0x40);
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(puVar18);
  func_0x000107c490d4(puVar17);
  uVar14 = 0;
  func_0x000103bd5d30(0);
  func_0x000107c610f8();
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103bd5a20(uVar14,PTR___swiftEmptyArrayStorage_11034f1c8,
                      PTR___swiftEmptyArrayStorage_11034f1c8,puVar17,0,0,0,0,0,0);
  *(undefined **)(unaff_x22 + 0x90) = puVar13;
  func_0x000107c61170(puVar20);
  func_0x000107c615e8(lVar21);
  func_0x0001000285a8(0x112d62368,&UNK_10d928280);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar22;
  func_0x000107c61174();
  lVar21 = unaff_x22 + 0x20;
  func_0x000104888f7c();
  *(long *)(unaff_x22 + 0x98) = lVar21;
  if (0x7fffffff < lVar19) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x101de32b8);
    (*pcVar11)();
  }
  lVar19 = *(long *)(unaff_x22 + 0x48);
  if ((-0x80000001 < lVar19) && (lVar23 = *(long *)(unaff_x22 + 0x40), -0x80000001 < lVar23)) {
    if (lVar19 < 0x80000000) {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar15 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar15 + -8) + 0x38))(uVar22,1,1,lVar15);
      bVar12 = (byte)uVar22;
      FUN_101de3414();
      plVar16 = (long *)0x13a0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa0) = plVar16;
      *plVar16 = unaff_x22;
      plVar16[1] = (long)FUN_101de32c0;
      lVar3 = *(long *)(unaff_x22 + 0x80);
      lVar15 = *(long *)(unaff_x22 + 0x60);
      lVar4 = *(long *)(unaff_x22 + 0x68);
      uVar7 = *(undefined1 *)(unaff_x22 + 0xbb);
      uVar8 = *(undefined1 *)(unaff_x22 + 0xba);
      uVar9 = *(undefined1 *)(unaff_x22 + 0xb9);
      uVar10 = *(undefined1 *)(unaff_x22 + 0xb8);
      lVar1 = *(long *)(unaff_x22 + 0x50);
      lVar5 = *(long *)(unaff_x22 + 0x58);
      lVar2 = *(long *)(unaff_x22 + 0x28);
      lVar6 = *(long *)(unaff_x22 + 0x30);
      plVar16[0x1f6] = *(long *)(unaff_x22 + 0x78);
      plVar16[0x1f5] = 1;
      plVar16[500] = 0;
      plVar16[499] = 0;
      *(byte *)((long)plVar16 + 299) = bVar12 & 1;
      plVar16[0x1f2] = 0;
      plVar16[0x1f1] = 0;
      plVar16[0x1f0] = 0;
      plVar16[0x1ef] = 0;
      plVar16[0x1ee] = (long)puVar18;
      plVar16[0x1ed] = lVar3;
      plVar16[0x1ec] = (long)puVar13;
      plVar16[0x1eb] = 0;
      plVar16[0x1ea] = 0;
      plVar16[0x1e9] = lVar4;
      plVar16[0x1e8] = lVar15;
      *(undefined1 *)((long)plVar16 + 0x12a) = uVar7;
      *(undefined1 *)((long)plVar16 + 0x129) = uVar8;
      *(undefined1 *)((long)plVar16 + 0x9b) = uVar9;
      *(undefined1 *)((long)plVar16 + 0x9a) = uVar10;
      plVar16[0x1e7] = lVar5;
      plVar16[0x1e6] = lVar1;
      plVar16[0x1e5] = 0;
      plVar16[0x1e4] = 0;
      plVar16[0x1e3] = 0;
      plVar16[0x1e2] = 0;
      *(int *)((long)plVar16 + 300) = (int)lVar19;
      *(int *)((long)plVar16 + 0x9c) = (int)lVar23;
      *(undefined1 *)((long)plVar16 + 0x99) = 0;
      plVar16[0x1e1] = lVar21;
      plVar16[0x1e0] = 0;
      plVar16[0x1df] = 0;
      plVar16[0x1de] = lVar6;
      plVar16[0x1dd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101de34fc,0,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x101de32c0);
    (*pcVar11)();
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x101de32bc);
  (*pcVar11)();
}



/* Entry: 101de32c0; end: 101de3367;  */

void FUN_101de32c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0x98);
  uVar2 = *(undefined8 *)(lVar5 + 0x88);
  uVar3 = *(undefined8 *)(lVar5 + 0x90);
  *(long *)(lVar5 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xa0));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar5 + 0xb0) = param_1;
    func_0x000101df89f8(*(undefined8 *)(lVar5 + 0x80),0x112d373d8,&UNK_10d9014c0);
    pcVar4 = FUN_101de3368;
  }
  else {
    pcVar4 = FUN_101de33b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101de3368; end: 101de33b3;  */

void FUN_101de3368(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101de33b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Entry: 101de33b4; end: 101de3413;  */

void FUN_101de33b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61170(uVar1);
  func_0x000101df89f8(uVar2,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101de3410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101de3414; end: 101de341b;  */

undefined8 FUN_101de3414(void)

{
  return 0;
}



/* Entry: 101de341c; end: 101de34fb;  */

void FUN_101de341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28,
                  undefined4 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xfb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xfa8) = param_32;
  *(undefined8 *)(unaff_x22 + 4000) = param_31;
  *(undefined8 *)(unaff_x22 + 0xf98) = param_30;
  *(undefined1 *)(unaff_x22 + 299) = param_28;
  *(undefined8 *)(unaff_x22 + 0xf90) = param_27;
  *(undefined8 *)(unaff_x22 + 0xf88) = param_26;
  *(undefined8 *)(unaff_x22 + 0xf80) = param_25;
  *(undefined8 *)(unaff_x22 + 0xf78) = param_24;
  *(undefined8 *)(unaff_x22 + 0xf70) = param_23;
  *(undefined8 *)(unaff_x22 + 0xf68) = param_22;
  *(undefined8 *)(unaff_x22 + 0xf60) = param_21;
  *(undefined8 *)(unaff_x22 + 0xf58) = param_20;
  *(undefined8 *)(unaff_x22 + 0xf50) = param_19;
  *(undefined8 *)(unaff_x22 + 0xf48) = param_18;
  *(undefined8 *)(unaff_x22 + 0xf40) = param_17;
  *(undefined1 *)(unaff_x22 + 0x12a) = param_15._3_1_;
  *(undefined1 *)(unaff_x22 + 0x129) = param_15._2_1_;
  *(undefined1 *)(unaff_x22 + 0x9b) = param_15._1_1_;
  *(undefined1 *)(unaff_x22 + 0x9a) = (undefined1)param_15;
  *(undefined8 *)(unaff_x22 + 0xf38) = param_14;
  *(undefined8 *)(unaff_x22 + 0xf30) = param_13;
  *(undefined8 *)(unaff_x22 + 0xf28) = param_12;
  *(undefined8 *)(unaff_x22 + 0xf20) = param_11;
  *(undefined8 *)(unaff_x22 + 0xf18) = param_10;
  *(undefined8 *)(unaff_x22 + 0xf10) = param_9;
  *(undefined4 *)(unaff_x22 + 300) = param_8;
  *(undefined4 *)(unaff_x22 + 0x9c) = param_7;
  *(undefined1 *)(unaff_x22 + 0x99) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf08) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf00) = param_4;
  *(undefined8 *)(unaff_x22 + 0xef8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xef0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xee8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101de34fc,0,0);
  return;
}



/* Entry: 101de34fc; end: 101de3cdf;  */

/* WARNING: Removing unreachable block (ram,0x000101de39fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101de34fc(ulong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  
  *(undefined8 *)(unaff_x22 + 0xfb8) =
       *(undefined8 *)(*(long *)(unaff_x22 + 0xfb0) + _DAT_112e2efa0);
  func_0x0001000d224c(unaff_x22 + 0xe98);
  uVar11 = *(ulong *)(unaff_x22 + 0xe98);
  *(ulong *)(unaff_x22 + 0xfc0) = uVar11;
  if (uVar11 == 0) {
    uVar9 = 0;
  }
  else {
    uVar4 = 0x736569726f6d654d;
    param_2 = (undefined8 *)0xec00000065766153;
    func_0x000107c5fadc(0x736569726f6d654d);
    uVar9 = uVar11;
    func_0x000107c3e764();
    func_0x000107c61170(uVar4);
    func_0x000107c615e8();
    param_1 = uVar11;
  }
  *(ulong *)(unaff_x22 + 0xfc8) = uVar9;
  puVar12 = *(undefined8 **)(unaff_x22 + 0xf00);
  if (puVar12 == (undefined8 *)0x0) {
LAB_101de35c4:
    func_0x00010011df08();
    func_0x000107c61180();
    uVar9 = param_1;
    func_0x000107c5faec();
    puVar15 = param_2;
    func_0x000107c61170(param_1);
  }
  else {
    uVar9 = *(ulong *)(unaff_x22 + 0xef8);
    uVar11 = uVar9 & 0xffffffffffff;
    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
      uVar11 = (ulong)puVar12 >> 0x38 & 0xf;
    }
    if (uVar11 == 0) goto LAB_101de35c4;
    func_0x000107c61434(puVar12);
    puVar15 = param_2;
    param_2 = puVar12;
  }
  puVar12 = (undefined8 *)(unaff_x22 + 0x490);
  *(undefined8 **)(unaff_x22 + 0xfd8) = param_2;
  *(ulong *)(unaff_x22 + 0xfd0) = uVar9;
  uVar11 = *(ulong *)(unaff_x22 + 0xf70);
  if (uVar11 != 0) {
    func_0x000107c42950();
    func_0x000107c61180();
    if (uVar11 != 0) {
      uVar10 = uVar11;
      func_0x000107c5faec();
      func_0x000107c61170(uVar11);
      goto LAB_101de3658;
    }
  }
  puVar15 = *(undefined8 **)(unaff_x22 + 0xf38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x000107c61434(param_2);
    uVar10 = uVar9;
    puVar15 = param_2;
  }
  else {
    uVar10 = *(ulong *)(unaff_x22 + 0xf30);
    func_0x000107c61434(puVar15);
  }
LAB_101de3658:
  *(undefined8 **)(unaff_x22 + 0xfe8) = puVar15;
  *(ulong *)(unaff_x22 + 0xfe0) = uVar10;
  lVar8 = *(long *)(unaff_x22 + 0xfb0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xfa8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xef0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xee8);
  bVar3 = *(long *)(unaff_x22 + 0xf58) != 0;
  func_0x000107c61434(uVar17);
  func_0x000107c6142c(0);
  *(bool *)(unaff_x22 + 0x5b0) = bVar3;
  *(undefined8 *)(unaff_x22 + 0x5b8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x5c0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x5c8) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x5d0) = 0;
  *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
  *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
  *(undefined1 *)(unaff_x22 + 0x5e8) = 1;
  *(undefined8 *)(unaff_x22 + 0x5f0) = 0;
  *(undefined2 *)(unaff_x22 + 0x5f8) = 1;
  *(undefined8 *)(unaff_x22 + 0x608) = 0;
  *(undefined8 *)(unaff_x22 + 0x600) = 0;
  *(undefined8 *)(unaff_x22 + 0x618) = 0;
  *(undefined8 *)(unaff_x22 + 0x610) = 0;
  *(undefined8 *)(unaff_x22 + 0x628) = 0;
  *(undefined8 *)(unaff_x22 + 0x620) = 0;
  *(undefined8 *)(unaff_x22 + 0x630) = 0;
  *(undefined1 *)(unaff_x22 + 0x638) = 1;
  *(bool *)(unaff_x22 + 0x520) = bVar3;
  *(undefined8 *)(unaff_x22 + 0x528) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x530) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x538) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x550) = 0;
  *(undefined8 *)(unaff_x22 + 0x548) = 0;
  *(undefined8 *)(unaff_x22 + 0x540) = 0;
  *(undefined1 *)(unaff_x22 + 0x558) = 1;
  *(undefined8 *)(unaff_x22 + 0x560) = 0;
  *(undefined2 *)(unaff_x22 + 0x568) = 1;
  *(undefined8 *)(unaff_x22 + 0x578) = 0;
  *(undefined8 *)(unaff_x22 + 0x570) = 0;
  *(undefined8 *)(unaff_x22 + 0x588) = 0;
  *(undefined8 *)(unaff_x22 + 0x580) = 0;
  *(undefined8 *)(unaff_x22 + 0x598) = 0;
  *(undefined8 *)(unaff_x22 + 0x590) = 0;
  *(undefined8 *)(unaff_x22 + 0x5a0) = 0;
  *(undefined1 *)(unaff_x22 + 0x5a8) = 1;
  func_0x000101df658c((undefined8 *)(unaff_x22 + 0x5b0),unaff_x22 + 0x640);
  func_0x000101df65c8(unaff_x22 + 0x520);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x618);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x5d8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x5d0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x5e8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x5e0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x5f8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x5f0);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x608);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x600);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x5b8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x5b0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x5c8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x5c0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x620);
  uStack_108 = (undefined1)*(undefined8 *)(unaff_x22 + 0x628);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x631);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x629);
  uStack_107 = (undefined7)uVar21;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(unaff_x22 + 0x4b8) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x4b0) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x4c8) = uVar29;
  *(undefined8 *)(unaff_x22 + 0x4c0) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x4d8) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x4d0) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x4e8) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x4e0) = uVar27;
  *(undefined8 *)(unaff_x22 + 0x498) = uVar24;
  *puVar12 = uVar16;
  *(undefined8 *)(unaff_x22 + 0x4a8) = uVar31;
  *(undefined8 *)(unaff_x22 + 0x4a0) = uVar28;
  *(ulong *)(unaff_x22 + 0x508) = CONCAT71(uStack_107,uStack_108);
  *(undefined8 *)(unaff_x22 + 0x500) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x511) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x509) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x408) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x400) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x418) = uVar31;
  *(undefined8 *)(unaff_x22 + 0x410) = uVar28;
  *(undefined8 *)(unaff_x22 + 0x448) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x440) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x458) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x450) = uVar27;
  *(undefined8 *)(unaff_x22 + 0x428) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x420) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x438) = uVar29;
  *(undefined8 *)(unaff_x22 + 0x430) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x481) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x479) = uVar21;
  *(ulong *)(unaff_x22 + 0x4f0) = uVar9;
  *(undefined8 **)(unaff_x22 + 0x4f8) = param_2;
  *(ulong *)(unaff_x22 + 0x460) = uVar9;
  *(undefined8 **)(unaff_x22 + 0x468) = param_2;
  *(ulong *)(unaff_x22 + 0x478) = CONCAT71(uStack_107,uStack_108);
  *(undefined8 *)(unaff_x22 + 0x470) = uVar20;
  func_0x000101df658c(puVar12,unaff_x22 + 0x6d0);
  func_0x000101df65c8((undefined8 *)(unaff_x22 + 0x400));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x4e8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x4b8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x4b0);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x4c8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x4c0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x4d0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar28 = *puVar12;
  uVar24 = *(undefined8 *)(unaff_x22 + 0x4a8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x4f8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x4f0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x500);
  uStack_f8 = (undefined1)*(undefined8 *)(unaff_x22 + 0x508);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x511);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x509);
  uStack_f7 = (undefined7)uVar21;
  func_0x000107c61434(puVar15);
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(unaff_x22 + 0x398) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x390) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x3a8) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x3a0) = uVar27;
  *(undefined8 *)(unaff_x22 + 0x3b8) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x3b0) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x378) = uVar31;
  *(undefined8 *)(unaff_x22 + 0x370) = uVar28;
  *(undefined8 *)(unaff_x22 + 0x388) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x380) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x3d8) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x3d0) = uVar20;
  *(ulong *)(unaff_x22 + 1000) = CONCAT71(uStack_f7,uStack_f8);
  *(undefined8 *)(unaff_x22 + 0x3e0) = uVar29;
  *(undefined8 *)(unaff_x22 + 0x3f1) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x3e9) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x308) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x300) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x318) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x310) = uVar27;
  *(undefined8 *)(unaff_x22 + 0x328) = uVar23;
  *(undefined8 *)(unaff_x22 + 800) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar31;
  *(undefined8 *)(unaff_x22 + 0x2e0) = uVar28;
  *(undefined8 *)(unaff_x22 + 0x2f8) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x2f0) = uVar16;
  *(ulong *)(unaff_x22 + 0x3c0) = uVar10;
  *(undefined8 **)(unaff_x22 + 0x3c8) = puVar15;
  *(ulong *)(unaff_x22 + 0x330) = uVar10;
  *(undefined8 **)(unaff_x22 + 0x338) = puVar15;
  *(undefined8 *)(unaff_x22 + 0x348) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x340) = uVar20;
  *(ulong *)(unaff_x22 + 0x358) = CONCAT71(uStack_f7,uStack_f8);
  *(undefined8 *)(unaff_x22 + 0x350) = uVar29;
  *(undefined8 *)(unaff_x22 + 0x361) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x359) = uVar21;
  func_0x000101df658c(unaff_x22 + 0x370,unaff_x22 + 0x760);
  func_0x000101df65c8(unaff_x22 + 0x2e0);
  uVar17 = *(undefined8 *)(unaff_x22 + 1000);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x3c0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x380);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x390);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x3f8);
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar17);
  *(undefined8 *)(unaff_x22 + 0x298) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x290) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x2a8) = uVar29;
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x2b8) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x2b0) = uVar16;
  *(undefined8 *)(unaff_x22 + 600) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x250) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x268) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x260) = uVar27;
  *(undefined8 *)(unaff_x22 + 0x278) = uVar31;
  *(undefined8 *)(unaff_x22 + 0x270) = uVar28;
  *(undefined8 *)(unaff_x22 + 0x288) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x280) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x208) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x200) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x218) = uVar29;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x228) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x220) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar27;
  *(ulong *)(unaff_x22 + 0x2c0) = uVar9;
  *(undefined8 **)(unaff_x22 + 0x2c8) = param_2;
  *(undefined1 *)(unaff_x22 + 0x2d8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x2d0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar31;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar28;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar21;
  *(ulong *)(unaff_x22 + 0x230) = uVar9;
  *(undefined8 **)(unaff_x22 + 0x238) = param_2;
  *(undefined1 *)(unaff_x22 + 0x248) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x240) = uVar4;
  func_0x000101df658c(unaff_x22 + 0x250,unaff_x22 + 0x7f0);
  func_0x000101df65c8(unaff_x22 + 0x1c0);
  lVar8 = lVar8 + _DAT_112e2ef98;
  uVar11 = *(ulong *)(lVar8 + 0x18);
  lVar14 = *(long *)(lVar8 + 0x20);
  func_0x0001000a8868(lVar8,uVar11);
  (**(code **)(lVar14 + 8))(uVar11,lVar14);
  if ((uVar11 & 1) != 0) {
    func_0x000107c6142c();
    FUN_101df6cf4();
    puVar5 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,puVar15,0,0);
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined1 *)(puVar15 + 2) = 0x80;
    func_0x000107c61654();
    *(undefined8 *)(unaff_x22 + 0x898) = *(undefined8 *)(unaff_x22 + 0x268);
    *(undefined8 *)(unaff_x22 + 0x890) = *(undefined8 *)(unaff_x22 + 0x260);
    *(undefined8 *)(unaff_x22 + 0x8a8) = *(undefined8 *)(unaff_x22 + 0x278);
    *(undefined8 *)(unaff_x22 + 0x8a0) = *(undefined8 *)(unaff_x22 + 0x270);
    *(undefined8 *)(unaff_x22 + 0x8d8) = *(undefined8 *)(unaff_x22 + 0x2a8);
    *(undefined8 *)(unaff_x22 + 0x8d0) = *(undefined8 *)(unaff_x22 + 0x2a0);
    puVar12 = (undefined8 *)(unaff_x22 + 0x880);
    lVar13 = *(long *)(unaff_x22 + 0xfb0);
    cVar2 = *(char *)(unaff_x22 + 0x99);
    *(undefined1 *)(unaff_x22 + 0x880) = *(undefined1 *)(unaff_x22 + 0x250);
    *(undefined8 *)(unaff_x22 + 0x888) = *(undefined8 *)(unaff_x22 + 600);
    *(undefined8 *)(unaff_x22 + 0x8b0) = *(undefined8 *)(unaff_x22 + 0x280);
    *(undefined1 *)(unaff_x22 + 0x8b8) = *(undefined1 *)(unaff_x22 + 0x288);
    *(undefined8 *)(unaff_x22 + 0x8c0) = *(undefined8 *)(unaff_x22 + 0x290);
    *(undefined1 *)(unaff_x22 + 0x8c8) = *(undefined1 *)(unaff_x22 + 0x298);
    *(undefined1 *)(unaff_x22 + 0x8c9) = *(undefined1 *)(unaff_x22 + 0x299);
    *(undefined8 *)(unaff_x22 + 0x8e8) = *(undefined8 *)(unaff_x22 + 0x2b8);
    *(undefined8 *)(unaff_x22 + 0x8e0) = *(undefined8 *)(unaff_x22 + 0x2b0);
    *(undefined8 *)(unaff_x22 + 0x8f8) = *(undefined8 *)(unaff_x22 + 0x2c8);
    *(undefined8 *)(unaff_x22 + 0x8f0) = *(undefined8 *)(unaff_x22 + 0x2c0);
    *(undefined8 *)(unaff_x22 + 0x900) = *(undefined8 *)(unaff_x22 + 0x2d0);
    *(undefined1 *)(unaff_x22 + 0x908) = *(undefined1 *)(unaff_x22 + 0x2d8);
    FUN_101df4be4(puVar5,0,cVar2,*(undefined8 *)(unaff_x22 + 0xfd0),
                  *(undefined8 *)(unaff_x22 + 0xfd8),*(undefined8 *)(unaff_x22 + 0xee8),
                  *(undefined8 *)(unaff_x22 + 0xef0),*(undefined1 *)(unaff_x22 + 0x9a),
                  *(undefined1 *)(unaff_x22 + 0x129),*(undefined4 *)(unaff_x22 + 0x9c),
                  *(undefined4 *)(unaff_x22 + 300));
    lVar8 = lVar13 + _DAT_112e2f020;
    uVar4 = *(undefined8 *)(lVar8 + 0x18);
    lVar14 = *(long *)(lVar8 + 0x20);
    func_0x0001000a8868(lVar8,uVar4);
    plVar7 = (long *)(lVar13 + _DAT_112e2efe0);
    puVar6 = puVar5;
    FUN_101de25f4();
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x8c8);
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x8c0);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x8d8);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x8d0);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x8e8);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x8e0);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x8f8);
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x8f0);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x888);
    *(undefined8 *)(unaff_x22 + 0xa0) = *puVar12;
    *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x898);
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x890);
    *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x8a8);
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x8a0);
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x8b8);
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x8b0);
    *(undefined **)(unaff_x22 + 0x120) = puVar6;
    *(undefined1 *)(unaff_x22 + 0x128) = 0;
    pcVar19 = *(code **)(lVar14 + 8);
    func_0x000101df658c(puVar12,unaff_x22 + 0x910);
    (*pcVar19)(9,unaff_x22 + 0xa0,uVar4,lVar14);
    func_0x000101df65c8(unaff_x22 + 0xa0);
    lVar8 = plVar7[3];
    func_0x0001000a8868(plVar7,lVar8);
    lVar14 = *plVar7;
    FUN_101de248c(puVar5);
    uVar4 = *(undefined8 *)(lVar14 + 0x10);
    if (cVar2 == '\0') {
      uVar18 = 0xe800000000000000;
      uVar17 = 0x50414e535f57454e;
    }
    else if (cVar2 == '\x01') {
      uVar18 = 0xeb0000000050414e;
      uVar17 = 0x535f444554494445;
    }
    else {
      uVar18 = 0x800000010f011680;
      uVar17 = 0xd000000000000012;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0xfd8);
    lVar14 = *(long *)(unaff_x22 + 0xfc0);
    func_0x000107c5fadc(uVar17,uVar18);
    func_0x000107c6142c(uVar18);
    func_0x000107c5fadc(puVar5,lVar8);
    func_0x000107c6142c(lVar8);
    func_0x0001058dab1c(uVar4,uVar17,puVar5,1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar17);
    func_0x000107c6142c(uVar16);
    func_0x000107c61654();
    func_0x000107c6142c(0);
    func_0x000107c614ac(0);
    func_0x000101df65c8(puVar12);
    if (lVar14 != 0) {
      func_0x0001000d224c(unaff_x22 + 0xe88);
      lVar8 = *(long *)(unaff_x22 + 0xe88);
      if (lVar8 != 0) {
        func_0x000107c427f4(lVar8);
        func_0x000107c615e8(lVar8);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000101de3c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c5fd64();
  *(undefined8 *)(unaff_x22 + 0xff0) = 0;
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xff8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101de3ce0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 101de3ce0; end: 101de3da3;  */

void FUN_101de3ce0(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xff8));
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x1000) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = 0x101de3d50;
                    /* WARNING: Could not recover jumptable at 0x000101de3d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101184af0)();
  return;
}



/* Entry: 101de3da4; end: 101de6543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101de3da4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long *plVar27;
  undefined8 *puVar28;
  long *plVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  undefined8 uVar34;
  code *pcVar35;
  code *pcVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulong uVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined *puVar50;
  long lVar51;
  long lVar52;
  ulong uVar53;
  undefined8 *puVar54;
  undefined **ppuVar55;
  long lVar56;
  long lVar57;
  undefined *puVar58;
  long lVar59;
  long lVar60;
  long *plVar61;
  long lVar62;
  code *pcVar63;
  ulong uVar64;
  code *pcVar65;
  undefined8 *puVar66;
  long unaff_x22;
  long lVar67;
  ulong uVar68;
  ulong uVar69;
  long lVar70;
  undefined8 *puVar71;
  long lVar72;
  undefined8 *puVar73;
  ulong uVar74;
  undefined8 uVar75;
  code *pcVar76;
  long lVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined4 in_stack_fffffffffffffd50;
  undefined1 uStack_88;
  undefined7 uStack_87;
  
  cVar3 = *(char *)(unaff_x22 + 0x1b9);
  puVar50 = *(undefined **)(unaff_x22 + 0x1008);
  if (cVar3 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0xe80) = puVar50;
    iVar11 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar11 != 0) {
      uVar34 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658((undefined8 *)(unaff_x22 + 0xe80),uVar34,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xfe8));
  }
  else {
    puVar58 = puVar50;
    func_0x000107c40794(puVar50);
    func_0x000100cd2384(puVar50,cVar3);
    func_0x000107c60234(unaff_x22 + 0xd40,puVar58);
    func_0x000107c615e8(puVar58);
    uVar34 = 0;
    FUN_101df8140(0,0x112d50c78,&PTR_PTR_1126b25c0);
    uVar26 = unaff_x22 + 0xe40;
    func_0x000107c6147c(uVar26,unaff_x22 + 0xd40,PTR___sypN_11034f1a8 + 8,uVar34,6);
    if ((uVar26 & 1) != 0) {
      puVar17 = (undefined8 *)(unaff_x22 + 0x130);
      lVar59 = *(long *)(unaff_x22 + 0xfb0);
      lVar56 = *(long *)(unaff_x22 + 0xf48);
      uVar48 = *(undefined8 *)(unaff_x22 + 0xf40);
      cVar3 = *(char *)(unaff_x22 + 0x99);
      lVar57 = *(long *)(unaff_x22 + 0xe40);
      *(long *)(unaff_x22 + 0x1010) = lVar57;
      FUN_101df4b34();
      *(undefined8 *)(unaff_x22 + 0x1018) = uVar48;
      *(long *)(unaff_x22 + 0x1020) = lVar56;
      uVar34 = *(undefined8 *)(unaff_x22 + 0x278);
      uVar40 = *(undefined8 *)(unaff_x22 + 600);
      uVar46 = *(undefined8 *)(unaff_x22 + 0x250);
      uVar79 = *(undefined8 *)(unaff_x22 + 0x268);
      uVar47 = *(undefined8 *)(unaff_x22 + 0x260);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x2a8);
      uVar49 = *(undefined8 *)(unaff_x22 + 0x2a0);
      uVar80 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar75 = *(undefined8 *)(unaff_x22 + 0x2b0);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x2c0);
      uStack_88 = (undefined1)*(undefined8 *)(unaff_x22 + 0x2c8);
      uVar44 = *(undefined8 *)(unaff_x22 + 0x2d1);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x2c9);
      uStack_87 = (undefined7)uVar38;
      uVar45 = *(undefined8 *)(unaff_x22 + 0x288);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x280);
      uVar81 = *(undefined8 *)(unaff_x22 + 0x298);
      uVar78 = *(undefined8 *)(unaff_x22 + 0x290);
      func_0x000107c61434(lVar56);
      func_0x000107c6142c(uVar34);
      *(undefined8 *)(unaff_x22 + 0x138) = uVar40;
      *puVar17 = uVar46;
      *(undefined8 *)(unaff_x22 + 0x148) = uVar79;
      *(undefined8 *)(unaff_x22 + 0x140) = uVar47;
      *(undefined8 *)(unaff_x22 + 0x188) = uVar41;
      *(undefined8 *)(unaff_x22 + 0x180) = uVar49;
      *(undefined8 *)(unaff_x22 + 0x198) = uVar80;
      *(undefined8 *)(unaff_x22 + 400) = uVar75;
      *(ulong *)(unaff_x22 + 0x1a8) = CONCAT71(uStack_87,uStack_88);
      *(undefined8 *)(unaff_x22 + 0x1a0) = uVar37;
      *(undefined8 *)(unaff_x22 + 0x1b1) = uVar44;
      *(undefined8 *)(unaff_x22 + 0x1a9) = uVar38;
      *(undefined8 *)(unaff_x22 + 0x168) = uVar45;
      *(undefined8 *)(unaff_x22 + 0x160) = uVar39;
      *(undefined8 *)(unaff_x22 + 0x178) = uVar81;
      *(undefined8 *)(unaff_x22 + 0x170) = uVar78;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar40;
      *(undefined8 *)(unaff_x22 + 0x10) = uVar46;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar79;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar47;
      *(undefined8 *)(unaff_x22 + 0x91) = uVar44;
      *(undefined8 *)(unaff_x22 + 0x89) = uVar38;
      *(undefined8 *)(unaff_x22 + 0x78) = uVar80;
      *(undefined8 *)(unaff_x22 + 0x70) = uVar75;
      *(ulong *)(unaff_x22 + 0x88) = CONCAT71(uStack_87,uStack_88);
      *(undefined8 *)(unaff_x22 + 0x80) = uVar37;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar81;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar78;
      *(undefined8 *)(unaff_x22 + 0x68) = uVar41;
      *(undefined8 *)(unaff_x22 + 0x60) = uVar49;
      *(undefined8 *)(unaff_x22 + 0x150) = uVar48;
      *(long *)(unaff_x22 + 0x158) = lVar56;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar48;
      *(long *)(unaff_x22 + 0x38) = lVar56;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar45;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar39;
      func_0x000101df658c(puVar17,unaff_x22 + 0xa30);
      func_0x000101df65c8(unaff_x22 + 0x10);
      lVar30 = _DAT_112e2efe0;
      *(long *)(unaff_x22 + 0x1028) = _DAT_112e2efe0;
      plVar29 = (long *)(lVar59 + lVar30);
      func_0x0001000a8868(plVar29,plVar29[3]);
      uVar49 = *(undefined8 *)(*plVar29 + 0x10);
      uVar34 = 0x535f444554494445;
      uVar46 = 0xeb0000000050414e;
      if (cVar3 != '\x01') {
        uVar34 = 0xd000000000000012;
        uVar46 = 0x800000010f011680;
      }
      uVar37 = 0x50414e535f57454e;
      if (cVar3 != '\0') {
        uVar37 = uVar34;
      }
      uVar34 = 0xe800000000000000;
      if (cVar3 != '\0') {
        uVar34 = uVar46;
      }
      cVar3 = *(char *)(unaff_x22 + 299);
      func_0x000107c5fadc(uVar37,uVar34);
      func_0x000107c6142c(uVar34);
      func_0x0001058da834(uVar49,uVar37,1);
      func_0x000107c61170(uVar37);
      lVar12 = 0;
      func_0x000107c5eea4();
      *(long *)(unaff_x22 + 0x1030) = lVar12;
      lVar60 = *(long *)(lVar12 + -8);
      lVar59 = *(long *)(lVar60 + 0x40);
      uVar26 = lVar59 + 0xf;
      uVar13 = uVar26 & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar13);
      func_0x000107c5eea0(uVar13);
      lVar30 = 0;
      FUN_101de1790();
      func_0x000107c613fc();
      *(long *)(unaff_x22 + 0x1038) = lVar30;
      func_0x000107c61474();
      pcVar76 = *(code **)(lVar60 + 0x20);
      (*pcVar76)(lVar30 + _DAT_112e2ee38,uVar13,lVar12);
      func_0x000107c615c0(uVar13);
      lVar30 = _DAT_112e2f020;
      if (cVar3 != '\x01') {
        *(long *)(unaff_x22 + 0x11c8) = _DAT_112e2f020;
        lVar30 = *(long *)(unaff_x22 + 0xfb0) + lVar30;
        uVar34 = *(undefined8 *)(lVar30 + 0x18);
        lVar57 = *(long *)(lVar30 + 0x20);
        func_0x0001000a8868(lVar30,uVar34);
        lVar30 = 1;
        (**(code **)(lVar57 + 8))(1,puVar17,uVar34,lVar57);
        func_0x00010011df08();
        func_0x000107c61180();
        puVar15 = puVar17;
        if (lVar30 == 0) {
          func_0x000107c5faec();
          puVar15 = puVar17;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar17);
        }
        puVar50 = PTR_PTR_1126b25b8;
        func_0x000107c610f8();
        func_0x000107c46814();
        *(undefined **)(unaff_x22 + 0x11d0) = puVar50;
        func_0x000107c61170();
        func_0x00010011df08();
        func_0x000107c61180();
        if (lVar30 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar15);
        }
        lVar57 = *(long *)(unaff_x22 + 0xfb0);
        puVar50 = PTR_PTR_1126b25b8;
        func_0x000107c610f8();
        func_0x000107c46814();
        *(undefined **)(unaff_x22 + 0x11d8) = puVar50;
        func_0x000107c61170(lVar30);
        *(undefined8 *)(unaff_x22 + 0x11e0) = *(undefined8 *)(lVar57 + _DAT_112e2efc8);
        func_0x0001000d224c(unaff_x22 + 0xd90);
        uVar13 = *(ulong *)(unaff_x22 + 0xd90);
        uVar26 = uVar13;
        func_0x000107c4a45c();
        *(char *)(unaff_x22 + 0x1bc) = (char)uVar26;
        func_0x000107c615e8(uVar13);
        if ((uVar26 & 1) != 0) {
          plVar61 = *(long **)(*(long *)(unaff_x22 + 0xfb0) + _DAT_112e2f000);
          plVar29 = (long *)0x70;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x11e8) = plVar29;
          *plVar29 = unaff_x22;
          plVar29[1] = (long)FUN_101de831c;
          uVar26 = unaff_x22 + 0xae8;
          goto LAB_104875f04;
        }
        *(undefined8 *)(unaff_x22 + 0x1200) = *(undefined8 *)(unaff_x22 + 0xff0);
        uVar38 = *(undefined8 *)(unaff_x22 + 0x11d0);
        uVar49 = *(undefined8 *)(unaff_x22 + 0x1018);
        uVar48 = *(undefined8 *)(unaff_x22 + 0x1010);
        lVar30 = *(long *)(unaff_x22 + 0xfb0);
        uVar34 = uVar48;
        FUN_101df6d34(uVar48,uVar49,*(undefined8 *)(unaff_x22 + 0x1020));
        func_0x000107c61434(uVar49);
        uVar37 = 0xe200000000000000;
        func_0x000107c5fb78(0x202c,0xe200000000000000);
        func_0x000107c6142c(uVar49);
        uVar46 = uVar48;
        func_0x000101df7088(uVar48);
        func_0x000107c61434(uVar49);
        func_0x000107c5fb78(uVar46,uVar37);
        func_0x000107c6142c(uVar37);
        func_0x000107c6142c(uVar49);
        *(undefined8 *)(unaff_x22 + 0x1208) = uVar34;
        *(undefined8 *)(unaff_x22 + 0x1210) = uVar49;
        lVar57 = _DAT_112e2efa8;
        *(long *)(unaff_x22 + 0x1218) = _DAT_112e2efa8;
        lVar30 = lVar30 + lVar57;
        func_0x0001000a8868(lVar30,*(undefined8 *)(lVar30 + 0x18));
        FUN_101df8b38(uVar48,uVar38);
        *(undefined8 *)(unaff_x22 + 0x1220) = uVar48;
        plVar29 = (long *)0x80;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1228) = plVar29;
        pcVar76 = FUN_101de8874;
        goto LAB_101de47c8;
      }
      uVar46 = *(undefined8 *)(unaff_x22 + 0xfd8);
      uVar34 = *(undefined8 *)(unaff_x22 + 0xfd0);
      lVar30 = *(long *)(unaff_x22 + 0xfb0);
      puVar50 = PTR_PTR_1126b25b8;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar34,uVar46);
      func_0x000107c46814();
      *(undefined **)(unaff_x22 + 0x1040) = puVar50;
      func_0x000107c61170(uVar34);
      plVar29 = (long *)(lVar30 + _DAT_112e2efc0);
      func_0x0001000a8868(plVar29,plVar29[3]);
      lVar43 = _DAT_112e2f020;
      *(long *)(unaff_x22 + 0x1048) = _DAT_112e2f020;
      lVar67 = *plVar29;
      *(long *)(unaff_x22 + 0x1050) = lVar67;
      *(undefined8 *)(unaff_x22 + 0x1058) = *(undefined8 *)(lVar67 + 0x58);
      func_0x0001000d224c(unaff_x22 + 0xe48);
      plVar61 = *(long **)(unaff_x22 + 0xe48);
      *(long **)(unaff_x22 + 0x1060) = plVar61;
      if (plVar61 == (long *)0x0) {
LAB_101de4800:
        uVar34 = *(undefined8 *)(unaff_x22 + 0xfe8);
        FUN_101df6cf4();
        puVar50 = &UNK_1106e3fc0;
        func_0x000107c613f8(&UNK_1106e3fc0,plVar29,0,0);
        plVar29[1] = 0;
        *plVar29 = 0x16;
        *(undefined1 *)(plVar29 + 2) = 0x80;
        func_0x000107c61654();
LAB_101de4840:
        func_0x000107c6142c(lVar56);
        func_0x000107c6142c(uVar34);
      }
      else {
        func_0x0001000d224c(unaff_x22 + 0xe50);
        lVar33 = *(long *)(unaff_x22 + 0xe50);
        *(long *)(unaff_x22 + 0x1068) = lVar33;
        if (lVar33 == 0) {
          func_0x000107c615e8();
          plVar29 = plVar61;
          goto LAB_101de4800;
        }
        lVar14 = 0;
        FUN_101e092b4();
        lVar62 = *(long *)(lVar14 + -8);
        puVar15 = (undefined8 *)(*(long *)(lVar62 + 0x40) + 0xfU & 0xfffffffffffffff0);
        func_0x000107c615b8();
        *(undefined8 **)(unaff_x22 + 0x1070) = puVar15;
        func_0x0001000a8868(lVar67 + 0x68,*(undefined8 *)(lVar67 + 0x80));
        lVar70 = 0x112e2f068;
        func_0x0001000285a8(0x112e2f068,&UNK_10da17ca0);
        uVar16 = *(long *)(*(long *)(lVar70 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        FUN_101e07fe4(uVar16,lVar57);
        uVar13 = uVar16;
        (**(code **)(lVar62 + 0x30))(uVar16,1,lVar14);
        if ((int)uVar13 == 1) {
          uVar34 = *(undefined8 *)(unaff_x22 + 0xfe8);
          func_0x000101df89f8(uVar16,0x112e2f068,&UNK_10da17ca0);
          func_0x000107c615c0(uVar16);
          func_0x000107c615c0();
          FUN_101df6cf4();
          puVar50 = &UNK_1106e3fc0;
          func_0x000107c613f8(&UNK_1106e3fc0,puVar15,0,0);
          puVar15[1] = 0;
          *puVar15 = 0xb;
          *(undefined1 *)(puVar15 + 2) = 0x80;
          func_0x000107c61654();
          func_0x000107c615e8(lVar33);
          func_0x000107c615e8(plVar61);
          goto LAB_101de4840;
        }
        FUN_101df7e18(uVar16,puVar15);
        func_0x000107c615c0(uVar16);
        lVar70 = puVar15[5];
        if (lVar70 != 0) {
          uVar46 = *(undefined8 *)(unaff_x22 + 0xfd8);
          uVar34 = *(undefined8 *)(unaff_x22 + 0xfd0);
          lVar62 = lVar70;
          func_0x000107c61174(lVar70);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c5fadc(uVar34,uVar46);
          func_0x000107c3d750(lVar33);
          func_0x000107c61170(uVar34);
          func_0x000107c61170(lVar62);
          func_0x000107c61170(lVar62);
        }
        lVar72 = *(long *)(unaff_x22 + 0xf60);
        lVar62 = *(long *)(unaff_x22 + 0xf70);
        if (lVar72 == 0) {
          if (lVar62 != 0) goto LAB_101de4960;
          uVar32 = 0;
        }
        else {
          lVar18 = *(long *)(lVar72 + _DAT_112ff5570);
          func_0x000107c49820();
          uVar32 = (uint)(lVar18 != 0);
          if ((lVar62 != 0) && (lVar18 == 0)) {
            lVar62 = *(long *)(unaff_x22 + 0xf70);
LAB_101de4960:
            uVar32 = (uint)lVar62;
            func_0x000107c4a5c8();
          }
        }
        lVar51 = *(long *)(unaff_x22 + 0xf78);
        uVar16 = uVar26 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        *(ulong *)(unaff_x22 + 0x1078) = uVar16;
        lVar62 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        lVar62 = *(long *)(lVar62 + -8);
        lVar18 = *(long *)(lVar62 + 0x40);
        uVar13 = lVar18 + 0xf;
        uVar19 = uVar13 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar19);
        if (lVar51 == 0) {
LAB_101de49fc:
          uVar34 = 1;
        }
        else {
          lVar77 = lVar51;
          func_0x000107c40bd8();
          func_0x000107c61180();
          if (lVar77 == 0) goto LAB_101de49fc;
          func_0x000107c5ee94(uVar19);
          func_0x000107c61170(lVar77);
          uVar34 = 0;
        }
        pcVar35 = *(code **)(lVar60 + 0x38);
        (*pcVar35)(uVar19,uVar34,1,lVar12);
        uVar20 = uVar13 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        func_0x0001003a4c00(uVar19,uVar20);
        pcVar63 = *(code **)(lVar60 + 0x30);
        uVar68 = uVar20;
        (*pcVar63)(uVar20,1,lVar12);
        if ((int)uVar68 == 1) {
          (**(code **)(lVar60 + 0x10))(uVar16,(long)puVar15 + (long)*(int *)(lVar14 + 0x30),lVar12);
          uVar68 = uVar20;
          (*pcVar63)(uVar20,1,lVar12);
          if ((int)uVar68 != 1) {
            func_0x000101df89f8(uVar20,0x112d373d8,&UNK_10d9014c0);
          }
        }
        else {
          (*pcVar76)(uVar16,uVar20,lVar12);
        }
        uVar64 = *(ulong *)(unaff_x22 + 0xf78);
        uVar68 = *(ulong *)(unaff_x22 + 0xf60);
        func_0x000107c615c0(uVar20);
        func_0x000107c615c0(uVar19);
        FUN_101e040a4();
        uVar19 = uVar68;
        func_0x000103be4ce0();
        if ((int)uVar19 != 0) {
          func_0x000103be4ce0();
        }
        lVar77 = lVar57;
        func_0x000107c41214();
        func_0x000107c61180();
        if (lVar77 == 0) {
          lVar52 = 0;
          uVar64 = 0xf000000000000000;
        }
        else {
          lVar52 = lVar77;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar77);
        }
        *(ulong *)(unaff_x22 + 0x1088) = uVar64;
        *(long *)(unaff_x22 + 0x1080) = lVar52;
        puVar58 = PTR_PTR_1126bf910;
        func_0x000107c610f8();
        func_0x000107c453e4();
        plVar29 = plVar61;
        func_0x000107c5d984(plVar61);
        func_0x000107c61180();
        puVar21 = puVar58;
        func_0x000107c58be8();
        func_0x000107c61180();
        func_0x000107c61170(plVar29);
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64c4);
          (*pcVar76)();
        }
        uVar34 = *(undefined8 *)(unaff_x22 + 0xfd0);
        func_0x000107c5fadc(uVar34,*(undefined8 *)(unaff_x22 + 0xfd8));
        puVar58 = puVar21;
        func_0x000107c593e4();
        func_0x000107c61180();
        func_0x000107c61170(uVar34);
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64c8);
          (*pcVar76)();
        }
        uVar34 = *(undefined8 *)(unaff_x22 + 0xfd0);
        func_0x000107c5fadc(uVar34,*(undefined8 *)(unaff_x22 + 0xfd8));
        puVar21 = puVar58;
        func_0x000107c56420();
        func_0x000107c61180();
        func_0x000107c61170(uVar34);
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64cc);
          (*pcVar76)();
        }
        if (uVar64 >> 0x3c < 0xf) {
          func_0x00010006c00c(lVar52,uVar64);
          lVar77 = lVar52;
          func_0x000107c5ee20(lVar52,uVar64);
          func_0x0001000b44c0(lVar52,uVar64);
        }
        else {
          lVar77 = 0;
        }
        puVar58 = puVar21;
        func_0x000107c59350();
        func_0x000107c61180();
        func_0x000107c61170(lVar77);
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64d0);
          (*pcVar76)();
        }
        uVar34 = 0;
        FUN_101df8140(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar46 = *puVar15;
        func_0x000107c60110(uVar46);
        puVar21 = puVar58;
        func_0x000107c59524();
        func_0x000107c61180();
        func_0x000107c61170(uVar46);
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64d4);
          (*pcVar76)();
        }
        puVar58 = puVar21;
        func_0x000107c5538c();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64d8);
          (*pcVar76)();
        }
        puVar21 = puVar58;
        func_0x000107c53018();
        func_0x000107c61180();
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64dc);
          (*pcVar76)();
        }
        puVar58 = puVar21;
        func_0x000107c54358((float)(double)puVar15[2]);
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64e0);
          (*pcVar76)();
        }
        if (*(int *)((long)puVar15 + 0xc) < 0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64ac);
          (*pcVar76)();
        }
        puVar21 = puVar58;
        func_0x000107c550b8();
        func_0x000107c61180();
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64e4);
          (*pcVar76)();
        }
        if (*(int *)(puVar15 + 1) < 0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64b0);
          (*pcVar76)();
        }
        puVar58 = puVar21;
        func_0x000107c5a724();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64e8);
          (*pcVar76)();
        }
        if (lVar70 != 0) {
          func_0x000107c61170(lVar70);
        }
        puVar21 = puVar58;
        func_0x000107c55018();
        func_0x000107c61180();
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64ec);
          (*pcVar76)();
        }
        func_0x000107c5ee70();
        puVar22 = puVar21;
        func_0x000107c53208();
        func_0x000107c61180();
        func_0x000107c61170(puVar58);
        func_0x000107c61170(puVar21);
        if (puVar22 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64f0);
          (*pcVar76)();
        }
        func_0x000107c5ee70();
        puVar58 = puVar22;
        func_0x000107c53a8c();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        func_0x000107c61170(puVar22);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64f4);
          (*pcVar76)();
        }
        uVar20 = uVar26 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar20);
        uVar19 = uVar20;
        func_0x000107c5eea0(uVar20);
        func_0x000107c5ee70();
        pcVar36 = *(code **)(lVar60 + 8);
        *(code **)(unaff_x22 + 0x1090) = pcVar36;
        lVar70 = lVar12;
        (*pcVar36)(uVar20,lVar12);
        func_0x000107c615c0(uVar20);
        puVar21 = puVar58;
        func_0x000107c57424();
        func_0x000107c61180();
        func_0x000107c61170(uVar19);
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64f8);
          (*pcVar76)();
        }
        puVar25 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar14 + 0x38));
        lVar14 = puVar25[1];
        if (lVar14 == 0) {
          puVar58 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
          func_0x000107c61168(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
          func_0x000107c4b834();
          func_0x000107c61180();
          lVar14 = 0;
          func_0x000107c5efa8();
          lVar77 = *(long *)(lVar14 + -8);
          uVar19 = *(long *)(lVar77 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar19);
          func_0x000107c5efa0(uVar19,puVar58);
          func_0x000107c61170(puVar58);
          func_0x000107c5ef94();
          (**(code **)(lVar77 + 8))(uVar19,lVar14);
          func_0x000107c615c0(uVar19);
          lVar14 = 0;
        }
        else {
          puVar58 = (undefined *)*puVar25;
          lVar70 = lVar14;
        }
        func_0x000107c61434(lVar14);
        func_0x000107c5fadc(puVar58,lVar70);
        func_0x000107c6142c(lVar70);
        puVar22 = puVar21;
        func_0x000107c59d9c();
        func_0x000107c61180();
        func_0x000107c61170(puVar58);
        func_0x000107c61170(puVar21);
        if (puVar22 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64fc);
          (*pcVar76)();
        }
        puVar58 = puVar22;
        func_0x000107c531d0();
        func_0x000107c61180();
        func_0x000107c61170(puVar22);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6500);
          (*pcVar76)();
        }
        if ((long)puVar15[4] < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64b4);
          (*pcVar76)();
        }
        if (0x7fffffff < (long)puVar15[4]) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64b8);
          (*pcVar76)();
        }
        puVar21 = puVar58;
        func_0x000107c570a8();
        func_0x000107c61180();
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6504);
          (*pcVar76)();
        }
        puVar58 = puVar21;
        func_0x000107c59558();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6508);
          (*pcVar76)();
        }
        if (*(long *)(unaff_x22 + 0xf58) == 0) {
          uVar46 = 0;
        }
        else {
          uVar46 = *(undefined8 *)(unaff_x22 + 0xf50);
          func_0x000107c5fadc(uVar46);
        }
        puVar21 = puVar58;
        func_0x000107c53080();
        func_0x000107c61180();
        func_0x000107c61170(uVar46);
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de650c);
          (*pcVar76)();
        }
        if (lVar72 == 0) {
          uVar46 = 0;
        }
        else {
          uVar49 = *(undefined8 *)(*(long *)(unaff_x22 + 0xf60) + _DAT_112ff5560);
          func_0x00010102c3b8(uVar49);
          uVar46 = uVar49;
          func_0x000107c5fc48();
          func_0x000107c6142c(uVar49);
        }
        puVar58 = puVar21;
        func_0x000107c53ab0();
        func_0x000107c61180();
        func_0x000107c61170(uVar46);
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6510);
          (*pcVar76)();
        }
        if (lVar72 == 0) {
          uVar46 = 0;
        }
        else {
          uVar49 = *(undefined8 *)(*(long *)(unaff_x22 + 0xf60) + _DAT_112ff5568);
          func_0x00010102c3b8(uVar49);
          uVar46 = uVar49;
          func_0x000107c5fc48();
          func_0x000107c6142c(uVar49);
        }
        puVar21 = puVar58;
        func_0x000107c53aac();
        func_0x000107c61180();
        func_0x000107c61170(uVar46);
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6514);
          (*pcVar76)();
        }
        if (uVar68 >> 0x1f != 0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64bc);
          (*pcVar76)();
        }
        puVar58 = puVar21;
        func_0x000107c53484();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6518);
          (*pcVar76)();
        }
        if ((lVar72 == 0) ||
           (puVar25 = (undefined8 *)(*(long *)(unaff_x22 + 0xf60) + _DAT_112ff5580), puVar25[1] == 0
           )) {
          uVar46 = 0;
        }
        else {
          uVar46 = *puVar25;
          func_0x000107c5fadc(uVar46);
        }
        puVar21 = puVar58;
        func_0x000107c53578();
        func_0x000107c61180();
        func_0x000107c61170(uVar46);
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de651c);
          (*pcVar76)();
        }
        if ((lVar72 == 0) ||
           (puVar25 = (undefined8 *)(*(long *)(unaff_x22 + 0xf60) + _DAT_112ff5578), puVar25[1] == 0
           )) {
          uVar46 = 0;
        }
        else {
          uVar46 = *puVar25;
          func_0x000107c5fadc(uVar46);
        }
        puVar58 = puVar21;
        func_0x000107c59c44();
        func_0x000107c61180();
        func_0x000107c61170(uVar46);
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6520);
          (*pcVar76)();
        }
        if ((lVar72 == 0) ||
           (puVar25 = (undefined8 *)(*(long *)(unaff_x22 + 0xf60) + _DAT_112ff5588), puVar25[1] == 0
           )) {
          uVar46 = 0;
        }
        else {
          uVar46 = *puVar25;
          func_0x000107c5fadc(uVar46);
        }
        puVar21 = puVar58;
        func_0x000107c54f78();
        func_0x000107c61180();
        func_0x000107c61170(uVar46);
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6524);
          (*pcVar76)();
        }
        puVar58 = puVar21;
        func_0x000107c5456c();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6528);
          (*pcVar76)();
        }
        puVar21 = puVar58;
        func_0x000107c55884();
        func_0x000107c61180();
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de652c);
          (*pcVar76)();
        }
        puVar58 = puVar21;
        func_0x000107c56458();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6530);
          (*pcVar76)();
        }
        func_0x000100de78a0(lVar52,uVar64);
        func_0x0001000b44c0(lVar52,uVar64);
        if (uVar64 >> 0x3c < 0xf) {
          func_0x0001000b44c0(0,0xf000000000000000);
        }
        puVar21 = puVar58;
        func_0x000107c55054();
        func_0x000107c61180();
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6534);
          (*pcVar76)();
        }
        puVar58 = puVar21;
        func_0x000107c59d30();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        if (puVar58 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6538);
          (*pcVar76)();
        }
        puVar21 = puVar58;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        *(undefined **)(unaff_x22 + 0x1098) = puVar21;
        func_0x000107c61170(puVar58);
        if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de653c);
          (*pcVar76)();
        }
        puVar58 = PTR_PTR_1126bf8f8;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar22 = puVar58;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        *(undefined **)(unaff_x22 + 0x10a0) = puVar22;
        func_0x000107c61170(puVar58);
        if (puVar22 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6540);
          (*pcVar76)();
        }
        puVar58 = PTR_PTR_1126bf900;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar23 = puVar58;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        *(undefined **)(unaff_x22 + 0x10a8) = puVar23;
        func_0x000107c61170(puVar58);
        if (puVar23 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de6544);
          (*pcVar76)();
        }
        lVar70 = *(long *)(unaff_x22 + 0xf70);
        uVar20 = uVar26 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        *(ulong *)(unaff_x22 + 0x10b0) = uVar20;
        uVar19 = uVar13 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar19);
        if (lVar70 == 0) {
LAB_101de5490:
          uVar46 = 1;
        }
        else {
          func_0x000107c40bd8();
          func_0x000107c61180();
          if (lVar70 == 0) goto LAB_101de5490;
          func_0x000107c5ee94(uVar19);
          func_0x000107c61170(lVar70);
          uVar46 = 0;
        }
        (*pcVar35)(uVar19,uVar46,1,lVar12);
        uVar24 = uVar13 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        func_0x0001003a4c00(uVar19,uVar24);
        uVar31 = uVar24;
        (*pcVar63)(uVar24,1,lVar12);
        if ((int)uVar31 == 1) {
          (**(code **)(lVar60 + 0x10))(uVar20,uVar16,lVar12);
          uVar31 = 1;
          uVar42 = uVar24;
          (*pcVar63)(uVar24,1,lVar12);
          if ((int)uVar42 != 1) {
            uVar31 = 0x112d373d8;
            func_0x000101df89f8(uVar24,0x112d373d8,&UNK_10d9014c0);
          }
        }
        else {
          uVar31 = uVar24;
          (*pcVar76)(uVar20,uVar24,lVar12);
        }
        func_0x000107c615c0(uVar24);
        func_0x000107c615c0(uVar19);
        uVar19 = uVar68;
        func_0x000107c307d0();
        if (uVar19 >> 0x1f != 0) {
                    /* WARNING: Does not return */
          pcVar76 = (code *)SoftwareBreakpoint(1,0x101de64c0);
          (*pcVar76)();
        }
        if (lVar51 == 0) {
LAB_101de55b0:
          lVar14 = 0;
          uVar31 = 0;
        }
        else {
          lVar70 = *(long *)(unaff_x22 + 0xf78);
          func_0x000107c5b2d0();
          func_0x000107c61180();
          if (lVar70 == 0) goto LAB_101de55b0;
          lVar14 = lVar70;
          func_0x000107c5faec();
          func_0x000107c61170(lVar70);
        }
        uVar44 = *(undefined8 *)(unaff_x22 + 0xfe8);
        uVar45 = *(undefined8 *)(unaff_x22 + 0xfe0);
        uVar49 = *(undefined8 *)(unaff_x22 + 0xfd8);
        uVar46 = *(undefined8 *)(unaff_x22 + 0xfd0);
        puVar25 = *(undefined8 **)(unaff_x22 + 0xf70);
        uVar75 = *(undefined8 *)(unaff_x22 + 0xf68);
        uVar37 = *(undefined8 *)(unaff_x22 + 0xf38);
        uVar47 = *(undefined8 *)(unaff_x22 + 0xf30);
        uVar38 = *(undefined8 *)(unaff_x22 + 0xf28);
        uVar39 = *(undefined8 *)(unaff_x22 + 0xf20);
        uVar40 = *(undefined8 *)(unaff_x22 + 0xf18);
        uVar41 = *(undefined8 *)(unaff_x22 + 0xf10);
        uVar1 = *(undefined4 *)(unaff_x22 + 300);
        uVar2 = *(undefined4 *)(unaff_x22 + 0x9c);
        FUN_101e05bec(puVar25,lVar14,uVar31);
        *(undefined8 **)(unaff_x22 + 0x10b8) = puVar25;
        func_0x000107c6142c(uVar31);
        uVar31 = uVar26 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        pcVar65 = *(code **)(lVar60 + 0x10);
        (*pcVar65)();
        uVar26 = uVar26 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        (*pcVar65)();
        uVar24 = uVar13 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        func_0x000101df89b0(uVar75,uVar24,0x112d373d8,&UNK_10d9014c0);
        uVar42 = (ulong)*(byte *)(lVar60 + 0x50);
        uVar69 = uVar42 + 0x62 & (uVar42 ^ 0xffffffffffffffff);
        uVar53 = lVar59 + uVar42 + uVar69 & (uVar42 ^ 0xffffffffffffffff);
        lVar59 = uVar53 + lVar59;
        bVar9 = *(byte *)(lVar62 + 0x50);
        uVar42 = (ulong)bVar9 + lVar59 + 1 & ((ulong)bVar9 ^ 0xffffffffffffffff);
        uVar74 = lVar18 + uVar42 + 7 & 0xfffffffffffffff8;
        puVar58 = &UNK_110488568;
        func_0x000107c613fc(&UNK_110488568,uVar74 + 0x20,*(byte *)(lVar60 + 0x50) | bVar9 | 7);
        *(undefined8 *)(puVar58 + 0x10) = uVar45;
        *(undefined8 *)(puVar58 + 0x18) = uVar44;
        *(undefined8 *)(puVar58 + 0x20) = uVar47;
        *(undefined8 *)(puVar58 + 0x28) = uVar37;
        *(undefined4 *)(puVar58 + 0x30) = uVar2;
        *(undefined4 *)(puVar58 + 0x34) = uVar1;
        *(undefined8 *)(puVar58 + 0x38) = 0;
        *(undefined8 *)(puVar58 + 0x40) = uVar41;
        *(undefined8 *)(puVar58 + 0x48) = uVar40;
        *(undefined8 *)(puVar58 + 0x50) = uVar39;
        *(undefined8 *)(puVar58 + 0x58) = uVar38;
        puVar58[0x60] = 0;
        puVar58[0x61] = (char)uVar32;
        (*pcVar76)(puVar58 + uVar69,uVar31,lVar12);
        (*pcVar76)(puVar58 + uVar53,uVar26,lVar12);
        puVar58[lVar59] = 0;
        func_0x0001003a4c00(uVar24,puVar58 + uVar42);
        *(ulong *)(puVar58 + uVar74) = uVar68;
        *(int *)(puVar58 + uVar74 + 8) = (int)uVar19;
        *(undefined8 *)(puVar58 + uVar74 + 0x10) = uVar46;
        *(undefined8 *)((long)(puVar58 + uVar74 + 0x10) + 8) = uVar49;
        func_0x000107c615c0(uVar24);
        func_0x000107c615c0(uVar26);
        func_0x000107c615c0(uVar31);
        func_0x0001000285a8(0x112e2f070,&UNK_10da17ca8);
        func_0x000107c613fc();
        func_0x000107c61434(uVar38);
        func_0x000107c61434(uVar37);
        func_0x000107c61434(uVar49);
        func_0x000107c61434(uVar44);
        func_0x000107c61434(uVar40);
        pcVar76 = FUN_101df7e5c;
        func_0x0001000bdd8c(FUN_101df7e5c,puVar58);
        *(code **)(unaff_x22 + 0x10c0) = pcVar76;
        puVar58 = PTR_PTR_1126d7f18;
        func_0x000107c610f8();
        func_0x000107c46700();
        *(undefined **)(unaff_x22 + 0x10c8) = puVar58;
        if (puVar58 == (undefined *)0x0) {
          uVar34 = *(undefined8 *)(unaff_x22 + 0xfe8);
          func_0x000107c6142c();
          FUN_101df6cf4();
          puVar50 = &UNK_1106e3fc0;
          func_0x000107c613f8(&UNK_1106e3fc0,puVar25,0,0);
          puVar25[1] = 0;
          *puVar25 = 5;
          *(undefined1 *)(puVar25 + 2) = 0x80;
          func_0x000107c61654();
          func_0x000107c615e8(plVar61);
          func_0x000107c615e8(lVar33);
          func_0x000107c61574(pcVar76);
          func_0x000107c61170(puVar23);
          func_0x000107c61170(puVar22);
          func_0x000107c61170(puVar21);
          func_0x0001000b44c0(lVar52,uVar64);
          (*pcVar36)(uVar20,lVar12);
          (*pcVar36)(uVar16,lVar12);
          FUN_101df7f70(puVar15);
          func_0x000107c6142c(lVar56);
          func_0x000107c6142c(uVar34);
        }
        else {
          lVar30 = lVar30 + lVar43;
          uVar46 = *(undefined8 *)(lVar30 + 0x18);
          lVar59 = *(long *)(lVar30 + 0x20);
          func_0x0001000a8868(lVar30,uVar46);
          puVar15 = (undefined8 *)0x4;
          puVar54 = puVar17;
          (**(code **)(lVar59 + 8))(4,puVar17,uVar46,lVar59);
          if ((uVar32 & 1) != 0) {
            if (lVar51 == 0) {
              func_0x000107c61174(puVar58);
              lVar30 = 0;
              puVar54 = (undefined8 *)0x0;
            }
            else {
              lVar57 = *(long *)(unaff_x22 + 0xf78);
              func_0x000107c61174(puVar58);
              func_0x000107c5b2d0();
              func_0x000107c61180();
              if (lVar57 == 0) {
                lVar30 = 0;
                puVar54 = (undefined8 *)0x0;
              }
              else {
                lVar30 = lVar57;
                func_0x000107c5faec();
                func_0x000107c61170(lVar57);
              }
            }
            *(undefined8 **)(unaff_x22 + 0x10d8) = puVar54;
            *(long *)(unaff_x22 + 0x10d0) = lVar30;
            puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c46ecc();
            *(undefined **)(unaff_x22 + 0x10e0) = puVar50;
            if (lVar72 == 0) {
              uVar49 = 0;
              uVar34 = 0;
              uVar48 = 0;
              uVar46 = 0;
            }
            else {
              puVar17 = (undefined8 *)(*(long *)(unaff_x22 + 0xf60) + _DAT_112ff5578);
              uVar34 = *puVar17;
              uVar48 = puVar17[1];
              puVar17 = (undefined8 *)(*(long *)(unaff_x22 + 0xf60) + _DAT_112ff5580);
              uVar46 = *puVar17;
              uVar49 = puVar17[1];
              func_0x000107c61434(uVar49);
              func_0x000107c61434(uVar48);
            }
            *(undefined8 *)(unaff_x22 + 0x1100) = uVar48;
            *(undefined8 *)(unaff_x22 + 0x10f8) = uVar34;
            *(undefined8 *)(unaff_x22 + 0x10f0) = uVar49;
            *(undefined8 *)(unaff_x22 + 0x10e8) = uVar46;
            plVar61 = *(long **)(lVar67 + 0x18);
            uVar34 = 0;
            FUN_101df8140(0,0x112d51320,&PTR_PTR_1126b24d8);
            *(undefined8 *)(unaff_x22 + 0xeb8) = uVar34;
            plVar27 = (long *)0xa0;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x1108) = plVar27;
            plVar29 = plVar27;
            func_0x000100faa6a0();
            *(long **)(unaff_x22 + 0x1110) = plVar29;
            *plVar27 = unaff_x22;
            plVar27[1] = (long)FUN_101de6544;
            plVar27[0xb] = (long)plVar29;
            plVar27[0xc] = unaff_x22 + 0xec0;
            plVar27[9] = unaff_x22 + 0xeb8;
            plVar27[10] = (long)&UNK_1107a6f08;
            plVar27[8] = unaff_x22 + 0xeb0;
            lVar57 = *plVar61;
            plVar27[0xd] = (long)&PTR_DAT_1107a6e88;
            lVar30 = 0x10;
            _swift_task_alloc();
            plVar27[0xe] = lVar30;
            lVar30 = *(long *)(lVar57 + 0x50);
            plVar27[0xf] = lVar30;
            lVar30 = *(long *)(lVar30 + -8);
            plVar27[0x10] = lVar30;
            uVar26 = *(long *)(lVar30 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            plVar27[0x11] = uVar26;
            plVar29 = (long *)0x70;
            _swift_task_alloc();
            plVar27[0x12] = (long)plVar29;
            *plVar29 = (long)plVar27;
            plVar29[1] = (long)&UNK_104876614;
LAB_104875f04:
            plVar29[5] = uVar26;
            plVar29[6] = (long)plVar61;
            lVar57 = *(long *)(*plVar61 + 0x50);
            plVar29[7] = lVar57;
            lVar30 = 0;
            __sSqMa(0,lVar57);
            plVar29[8] = lVar30;
            lVar30 = *(long *)(lVar30 + -8);
            plVar29[9] = lVar30;
            uVar26 = *(long *)(lVar30 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            plVar29[10] = uVar26;
            lVar30 = *(long *)(lVar57 + -8);
            plVar29[0xb] = lVar30;
            uVar26 = *(long *)(lVar30 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            plVar29[0xc] = uVar26;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
            return;
          }
          if (lVar51 == 0) {
            puVar71 = (undefined8 *)0x0;
            puVar54 = (undefined8 *)0x0;
          }
          else {
            puVar15 = *(undefined8 **)(unaff_x22 + 0xf78);
            func_0x000107c5b2d0();
            func_0x000107c61180();
            if (puVar15 == (undefined8 *)0x0) {
              puVar71 = (undefined8 *)0x0;
              puVar54 = (undefined8 *)0x0;
            }
            else {
              puVar71 = puVar15;
              func_0x000107c5faec();
              func_0x000107c61170();
            }
          }
          *(undefined8 **)(unaff_x22 + 0x1158) = puVar54;
          func_0x0001000d224c(unaff_x22 + 0xe58);
          puVar73 = *(undefined8 **)(unaff_x22 + 0xe58);
          *(undefined8 **)(unaff_x22 + 0x1160) = puVar73;
          if (puVar73 == (undefined8 *)0x0) {
LAB_101de5c70:
            FUN_101df6cf4();
            puVar50 = &UNK_1106e3fc0;
            func_0x000107c613f8(&UNK_1106e3fc0,puVar15,0,0);
            puVar15[1] = 0;
            *puVar15 = 0x16;
            *(undefined1 *)(puVar15 + 2) = 0x80;
            func_0x000107c61654();
          }
          else {
            func_0x0001000d224c(unaff_x22 + 0xe60);
            lVar59 = *(long *)(unaff_x22 + 0xe60);
            *(long *)(unaff_x22 + 0x1168) = lVar59;
            if (lVar59 == 0) {
LAB_101de5c68:
              func_0x000107c615e8();
              puVar15 = puVar73;
              goto LAB_101de5c70;
            }
            func_0x0001000d224c(unaff_x22 + 0xe68);
            lVar60 = *(long *)(unaff_x22 + 0xe68);
            *(long *)(unaff_x22 + 0x1170) = lVar60;
            if (lVar60 == 0) {
LAB_101de5c60:
              func_0x000107c615e8(lVar59);
              goto LAB_101de5c68;
            }
            func_0x0001000d224c(unaff_x22 + 0xe70);
            lVar43 = *(long *)(unaff_x22 + 0xe70);
            *(long *)(unaff_x22 + 0x1178) = lVar43;
            if (lVar43 == 0) {
              func_0x000107c61170(lVar60);
              goto LAB_101de5c60;
            }
            ppuVar55 = &PTR____CFConstantStringClassReference_110ec3518;
            puVar28 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
            func_0x000107c615b8();
            func_0x000107c61174();
            func_0x000107c5eea0(puVar28);
            uVar46 = 0;
            puVar15 = puVar28;
            (*pcVar35)(puVar28,0,1,lVar12);
            func_0x00010011df08();
            func_0x000107c61180();
            if (puVar15 == (undefined8 *)0x0) {
              func_0x000107c5faec();
              func_0x000107c5fadc();
              func_0x000107c6142c(uVar46);
            }
            uVar46 = 0x65766153;
            func_0x000107c5fadc(0x65766153,0xe400000000000000);
            puVar66 = puVar28;
            (*pcVar63)(puVar28,1,lVar12);
            if ((int)puVar66 == 1) {
              puVar66 = (undefined8 *)0x0;
            }
            else {
              func_0x000107c5ee70();
              (*pcVar36)(puVar28,lVar12);
            }
            if (lVar56 == 0) {
              uVar48 = 0;
            }
            else {
              func_0x000107c5fadc();
            }
            puVar58 = PTR_PTR_1126b2220;
            func_0x000107c610f8();
            uVar49 = uVar48;
            func_0x000107c4888c();
            in_stack_fffffffffffffd50 = (undefined4)uVar49;
            *(undefined **)(unaff_x22 + 0x1180) = puVar58;
            func_0x000107c61170(uVar48);
            func_0x000107c61170(puVar15);
            func_0x000107c61170(puVar66);
            func_0x000107c61170(uVar46);
            func_0x000107c61170(ppuVar55);
            func_0x000107c615c0();
            if (puVar58 == (undefined *)0x0) {
              FUN_101df6cf4();
              puVar50 = &UNK_1106e3fc0;
              func_0x000107c613f8(&UNK_1106e3fc0,puVar28,0,0);
              puVar28[1] = 0;
              *puVar28 = 6;
              *(undefined1 *)(puVar28 + 2) = 0x80;
              func_0x000107c61654();
              func_0x000107c61170(lVar43);
              func_0x000107c61170(lVar60);
              func_0x000107c615e8(lVar59);
            }
            else {
              puVar15 = *(undefined8 **)(unaff_x22 + 0xff0);
              func_0x0001000a8868(lVar67 + 0x20,*(undefined8 *)(lVar67 + 0x38));
              FUN_101e06018(lVar57,puVar50);
              *(undefined8 **)(unaff_x22 + 0x1188) = puVar15;
              if (puVar15 == (undefined8 *)0x0) {
                lVar56 = *(long *)(unaff_x22 + 0xf70);
                uVar46 = 0x112e2f078;
                func_0x0001000285a8(0x112e2f078,&UNK_10da17cb0);
                pcVar76 = FUN_101e04608;
                func_0x0001000cb480(FUN_101e04608,0,uVar46);
                pcVar35 = pcVar76;
                func_0x0001003a5b88();
                *(code **)(unaff_x22 + 0x1190) = pcVar35;
                func_0x000107c61574(pcVar76);
                puVar50 = PTR_PTR_1126d7f70;
                func_0x000107c610f8();
                func_0x000107c474c8();
                *(undefined **)(unaff_x22 + 0x1198) = puVar50;
                if (lVar56 == 0) {
                  func_0x0001000d224c((undefined8 *)(unaff_x22 + 0xe78));
                  uVar46 = *(undefined8 *)(unaff_x22 + 0xe78);
                }
                else {
                  uVar46 = *(undefined8 *)(unaff_x22 + 0xf70);
                }
                *(undefined8 *)(unaff_x22 + 0x11a0) = uVar46;
                if (puVar54 == (undefined8 *)0x0) {
                  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0xf70));
                  func_0x000107c615f0(uVar46);
                  func_0x000107c61174(puVar50);
                  func_0x000107c615f0(lVar59);
                  func_0x000107c61174(puVar58);
                  func_0x000107c61174(pcVar35);
                  puVar15 = (undefined8 *)0x0;
                }
                else {
                  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0xf70));
                  func_0x000107c615f0(uVar46);
                  func_0x000107c61174(puVar50);
                  func_0x000107c615f0(lVar59);
                  func_0x000107c61174(puVar58);
                  func_0x000107c61174(pcVar35);
                  puVar15 = puVar71;
                  func_0x000107c5fadc(puVar71,puVar54);
                }
                if (puVar25 == (undefined8 *)0x0) {
                  puVar28 = (undefined8 *)0x0;
                }
                else {
                  puVar28 = puVar25;
                  func_0x000107c5f9dc(puVar25,PTR___sSSN_11034da80,uVar34,PTR___sSSSHsWP_11034da90);
                }
                puVar21 = PTR_PTR_1126d7f60;
                func_0x000107c610f8();
                func_0x000107c48750();
                *(undefined **)(unaff_x22 + 0x11a8) = puVar21;
                func_0x000107c61170(puVar28);
                func_0x000107c61170(puVar15);
                func_0x000107c61170(pcVar35);
                func_0x000107c61170(puVar58);
                func_0x000107c615e8(lVar59);
                func_0x000107c61170(puVar50);
                func_0x000107c615e8(uVar46);
                if (puVar54 == (undefined8 *)0x0) {
                  bVar10 = false;
                }
                else {
                  puVar50 = PTR_PTR_1126af4d0;
                  func_0x000107c61168();
                  puVar15 = puVar71;
                  func_0x000107c5fadc(puVar71,puVar54);
                  func_0x000107c43118();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar15);
                  if (puVar50 == (undefined *)0x0) {
                    bVar10 = false;
                  }
                  else {
                    func_0x000107c615e8(puVar50);
                    bVar10 = true;
                  }
                }
                uVar48 = *(undefined8 *)(unaff_x22 + 0xfd8);
                uVar46 = *(undefined8 *)(unaff_x22 + 0xfd0);
                lVar56 = 0x112d38280;
                func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
                lVar59 = lVar56;
                func_0x000107c613fc();
                *(undefined8 *)(lVar59 + 0x18) = 2;
                *(undefined8 *)(lVar59 + 0x10) = 1;
                *(undefined8 *)(lVar59 + 0x20) = uVar46;
                *(undefined8 *)(lVar59 + 0x28) = uVar48;
                if (puVar54 == (undefined8 *)0x0) {
                  lVar12 = 0;
                }
                else {
                  lVar12 = lVar56;
                  func_0x000107c613fc(lVar56,0x30,7);
                  *(undefined8 *)(lVar12 + 0x18) = 2;
                  *(undefined8 *)(lVar12 + 0x10) = 1;
                  *(undefined8 **)(lVar12 + 0x20) = puVar71;
                  *(undefined8 **)(lVar12 + 0x28) = puVar54;
                }
                if (puVar25 == (undefined8 *)0x0) {
                  func_0x000107c61434(puVar54);
                  func_0x000107c61434(uVar48);
                  puVar25 = (undefined8 *)0x0;
                }
                else {
                  func_0x000107c61434(puVar54);
                  func_0x000107c61434(uVar48);
                  func_0x000107c5f9dc(puVar25,PTR___sSSN_11034da80,uVar34,PTR___sSSSHsWP_11034da90);
                }
                uVar34 = 0;
                func_0x000107c5fca0(0);
                uVar48 = *(undefined8 *)(unaff_x22 + 0xfd8);
                uVar46 = *(undefined8 *)(unaff_x22 + 0xfd0);
                if (bVar10) {
                  func_0x000107c613fc(lVar56,0x30,7);
                  *(undefined8 *)(lVar56 + 0x18) = 2;
                  *(undefined8 *)(lVar56 + 0x10) = 1;
                  *(undefined8 *)(lVar56 + 0x20) = uVar46;
                  *(undefined8 *)(lVar56 + 0x28) = uVar48;
                  func_0x000107c61434(uVar48);
                }
                else {
                  lVar56 = 0;
                }
                uVar49 = *(undefined8 *)(unaff_x22 + 4000);
                uVar37 = *(undefined8 *)(unaff_x22 + 0xf98);
                FUN_101df8140(0,0x112e2f080,&PTR_PTR_1126d7f28);
                lVar67 = lVar59;
                func_0x000103bbb748(lVar59,lVar12,puVar25,0,0,uVar34,lVar56,0);
                *(long *)(unaff_x22 + 0x11b0) = lVar67;
                func_0x000107c61170(uVar34);
                func_0x000107c6142c(lVar56);
                func_0x000107c61170(puVar25);
                func_0x000107c6142c(lVar12);
                func_0x000107c61588(lVar59);
                func_0x000107c61408((undefined8 *)(lVar59 + 0x20),*(undefined8 *)(lVar59 + 0x10),
                                    PTR___sSSN_11034da80);
                func_0x000107c6145c(lVar59,0x20,7);
                uVar34 = *(undefined8 *)(lVar30 + 0x18);
                lVar56 = *(long *)(lVar30 + 0x20);
                func_0x0001000a8868(lVar30,uVar34);
                (**(code **)(lVar56 + 8))(6,puVar17,uVar34,lVar56);
                func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
                func_0x000101df7fac(lVar30,unaff_x22 + 0xb10);
                puVar50 = &UNK_110488590;
                func_0x000107c613fc(&UNK_110488590,0x118,7);
                *(undefined8 **)(puVar50 + 0x10) = puVar73;
                *(undefined **)(puVar50 + 0x18) = puVar21;
                *(long *)(puVar50 + 0x20) = lVar57;
                *(long *)(puVar50 + 0x28) = lVar67;
                *(undefined8 *)(puVar50 + 0x30) = uVar37;
                *(undefined8 *)(puVar50 + 0x38) = uVar49;
                *(long *)(puVar50 + 0x40) = lVar60;
                func_0x000100cd236c(unaff_x22 + 0xb10,puVar50 + 0x48);
                uVar34 = *(undefined8 *)(unaff_x22 + 400);
                uVar39 = *(undefined8 *)(unaff_x22 + 0x1a8);
                uVar38 = *(undefined8 *)(unaff_x22 + 0x1a0);
                *(undefined8 *)(puVar50 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x198);
                *(undefined8 *)(puVar50 + 0xd0) = uVar34;
                *(undefined8 *)(puVar50 + 0xe8) = uVar39;
                *(undefined8 *)(puVar50 + 0xe0) = uVar38;
                uVar34 = *(undefined8 *)(unaff_x22 + 0x1a9);
                *(undefined8 *)(puVar50 + 0xf1) = *(undefined8 *)(unaff_x22 + 0x1b1);
                *(undefined8 *)(puVar50 + 0xe9) = uVar34;
                uVar34 = *(undefined8 *)(unaff_x22 + 0x150);
                uVar39 = *(undefined8 *)(unaff_x22 + 0x168);
                uVar38 = *(undefined8 *)(unaff_x22 + 0x160);
                *(undefined8 *)(puVar50 + 0x98) = *(undefined8 *)(unaff_x22 + 0x158);
                *(undefined8 *)(puVar50 + 0x90) = uVar34;
                *(undefined8 *)(puVar50 + 0xa8) = uVar39;
                *(undefined8 *)(puVar50 + 0xa0) = uVar38;
                uVar39 = *(undefined8 *)(unaff_x22 + 0x170);
                uVar38 = *(undefined8 *)(unaff_x22 + 0x188);
                uVar34 = *(undefined8 *)(unaff_x22 + 0x180);
                *(undefined8 *)(puVar50 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x178);
                *(undefined8 *)(puVar50 + 0xb0) = uVar39;
                *(undefined8 *)(puVar50 + 200) = uVar38;
                *(undefined8 *)(puVar50 + 0xc0) = uVar34;
                uVar39 = *puVar17;
                uVar38 = *(undefined8 *)(unaff_x22 + 0x148);
                uVar34 = *(undefined8 *)(unaff_x22 + 0x140);
                *(undefined8 *)(puVar50 + 0x78) = *(undefined8 *)(unaff_x22 + 0x138);
                *(undefined8 *)(puVar50 + 0x70) = uVar39;
                *(undefined8 *)(puVar50 + 0x88) = uVar38;
                *(undefined8 *)(puVar50 + 0x80) = uVar34;
                puVar50[0xf9] = 0;
                *(undefined8 *)(puVar50 + 0x100) = uVar46;
                *(undefined8 *)(puVar50 + 0x108) = uVar48;
                *(long *)(puVar50 + 0x110) = lVar43;
                func_0x000107c61434();
                func_0x000101df658c(puVar17,unaff_x22 + 0x9a0);
                func_0x000107c61174(puVar21);
                func_0x000107c61174(lVar67);
                func_0x000107c615f0(puVar73);
                func_0x000107c61174(lVar60);
                func_0x000107c61174(lVar43);
                FUN_101df8040(uVar37,uVar49);
                uVar34 = 0;
                func_0x0001048897a0(0,1,0,FUN_101df7ff0,puVar50);
                *(undefined8 *)(unaff_x22 + 0x11b8) = uVar34;
                func_0x000107c61574(puVar50);
                plVar29 = (long *)0x80;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x11c0) = plVar29;
                pcVar76 = FUN_101de7ad0;
LAB_101de47c8:
                *plVar29 = unaff_x22;
                plVar29[1] = (long)pcVar76;
                    /* WARNING: Could not recover jumptable at 0x000101de47f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)&UNK_100fab8ec)();
                return;
              }
              func_0x000107c614ac();
              FUN_101df6cf4();
              puVar50 = &UNK_1106e3fc0;
              func_0x000107c613f8(&UNK_1106e3fc0,puVar15,0,0);
              puVar15[1] = 0;
              *puVar15 = 2;
              *(undefined1 *)(puVar15 + 2) = 0x80;
              func_0x000107c61654();
              func_0x000107c61170(puVar58);
              func_0x000107c61170(lVar43);
              func_0x000107c61170(lVar60);
              func_0x000107c615e8(lVar59);
            }
            func_0x000107c615e8(puVar73);
          }
          uVar49 = *(undefined8 *)(unaff_x22 + 0x1158);
          uVar45 = *(undefined8 *)(unaff_x22 + 0x10c8);
          uVar38 = *(undefined8 *)(unaff_x22 + 0x10b8);
          uVar20 = *(ulong *)(unaff_x22 + 0x10b0);
          uVar75 = *(undefined8 *)(unaff_x22 + 0x10a8);
          uVar41 = *(undefined8 *)(unaff_x22 + 0x10a0);
          uVar44 = *(undefined8 *)(unaff_x22 + 0x1098);
          pcVar76 = *(code **)(unaff_x22 + 0x1090);
          uVar34 = *(undefined8 *)(unaff_x22 + 0x1088);
          uVar46 = *(undefined8 *)(unaff_x22 + 0x1080);
          uVar16 = *(ulong *)(unaff_x22 + 0x1078);
          puVar15 = *(undefined8 **)(unaff_x22 + 0x1070);
          uVar47 = *(undefined8 *)(unaff_x22 + 0x1068);
          uVar39 = *(undefined8 *)(unaff_x22 + 0x1060);
          uVar40 = *(undefined8 *)(unaff_x22 + 0x1030);
          uVar37 = *(undefined8 *)(unaff_x22 + 0x1020);
          uVar48 = *(undefined8 *)(unaff_x22 + 0xfe8);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x10c0));
          func_0x000107c61170(uVar45);
          func_0x000107c61170(uVar75);
          func_0x000107c61170(uVar41);
          func_0x000107c61170(uVar44);
          func_0x000107c615e8(uVar47);
          func_0x000107c615e8(uVar39);
          func_0x000107c6142c(uVar38);
          func_0x000107c6142c(uVar49);
          func_0x0001000b44c0(uVar46,uVar34);
          (*pcVar76)(uVar20,uVar40);
          (*pcVar76)(uVar16,uVar40);
          FUN_101df7f70(puVar15);
          func_0x000107c6142c(uVar37);
          func_0x000107c6142c(uVar48);
        }
        func_0x000107c615c0(uVar20);
        func_0x000107c615c0(uVar16);
        func_0x000107c615c0(puVar15);
      }
      uVar34 = *(undefined8 *)(unaff_x22 + 0x1038);
      uVar46 = *(undefined8 *)(unaff_x22 + 0x1010);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1040));
      func_0x000107c61574(uVar34);
      func_0x000107c61170(uVar46);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x1b8);
      uVar40 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar39 = *(undefined8 *)(unaff_x22 + 400);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar44 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar5 = *(undefined1 *)(unaff_x22 + 0x179);
      uVar46 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar6 = *(undefined1 *)(unaff_x22 + 0x178);
      uVar48 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar7 = *(undefined1 *)(unaff_x22 + 0x168);
      uVar78 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar75 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar47 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar45 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar49 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar8 = *(undefined1 *)(unaff_x22 + 0x130);
      goto LAB_101de4304;
    }
    puVar17 = *(undefined8 **)(unaff_x22 + 0xfe8);
    func_0x000107c6142c();
    FUN_101df6cf4();
    puVar50 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,puVar17,0,0);
    puVar17[1] = 0;
    *puVar17 = 4;
    *(undefined1 *)(puVar17 + 2) = 0x80;
    func_0x000107c61654();
  }
  uVar34 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x2d8);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar44 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x299);
  uVar46 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x298);
  uVar48 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar7 = *(undefined1 *)(unaff_x22 + 0x288);
  uVar78 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar75 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar47 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar45 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar49 = *(undefined8 *)(unaff_x22 + 600);
  uVar8 = *(undefined1 *)(unaff_x22 + 0x250);
LAB_101de4304:
  puVar17 = (undefined8 *)(unaff_x22 + 0x880);
  lVar56 = *(long *)(unaff_x22 + 0xfb0);
  cVar3 = *(char *)(unaff_x22 + 0x99);
  *(undefined1 *)(unaff_x22 + 0x880) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x888) = uVar49;
  *(undefined8 *)(unaff_x22 + 0x898) = uVar78;
  *(undefined8 *)(unaff_x22 + 0x890) = uVar75;
  *(undefined8 *)(unaff_x22 + 0x8a8) = uVar47;
  *(undefined8 *)(unaff_x22 + 0x8a0) = uVar45;
  *(undefined8 *)(unaff_x22 + 0x8b0) = uVar48;
  *(undefined1 *)(unaff_x22 + 0x8b8) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x8c0) = uVar46;
  *(undefined1 *)(unaff_x22 + 0x8c8) = uVar6;
  *(undefined1 *)(unaff_x22 + 0x8c9) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x8d8) = uVar44;
  *(undefined8 *)(unaff_x22 + 0x8d0) = uVar41;
  *(undefined8 *)(unaff_x22 + 0x8e8) = uVar40;
  *(undefined8 *)(unaff_x22 + 0x8e0) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x8f8) = uVar38;
  *(undefined8 *)(unaff_x22 + 0x8f0) = uVar37;
  *(undefined8 *)(unaff_x22 + 0x900) = uVar34;
  *(undefined1 *)(unaff_x22 + 0x908) = uVar4;
  FUN_101df4be4(puVar50,0,cVar3,*(undefined8 *)(unaff_x22 + 0xfd0),
                *(undefined8 *)(unaff_x22 + 0xfd8),*(undefined8 *)(unaff_x22 + 0xee8),
                *(undefined8 *)(unaff_x22 + 0xef0),*(undefined1 *)(unaff_x22 + 0x9a),
                CONCAT71(CONCAT61((int6)(CONCAT44(*(undefined4 *)(unaff_x22 + 0x9c),
                                                  in_stack_fffffffffffffd50) >> 0x10),
                                  *(undefined1 *)(unaff_x22 + 0x12a)),
                         *(undefined1 *)(unaff_x22 + 0x129)),*(undefined4 *)(unaff_x22 + 300));
  lVar30 = lVar56 + _DAT_112e2f020;
  uVar34 = *(undefined8 *)(lVar30 + 0x18);
  lVar57 = *(long *)(lVar30 + 0x20);
  func_0x0001000a8868(lVar30,uVar34);
  plVar29 = (long *)(lVar56 + _DAT_112e2efe0);
  puVar58 = puVar50;
  FUN_101de25f4();
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x8c8);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x8c0);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x8d8);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x8d0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x8e8);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x8e0);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x8f8);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x8f0);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x888);
  *(undefined8 *)(unaff_x22 + 0xa0) = *puVar17;
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x898);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x890);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x8a8);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x8a0);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x8b8);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x8b0);
  *(undefined **)(unaff_x22 + 0x120) = puVar58;
  *(undefined1 *)(unaff_x22 + 0x128) = 0;
  pcVar76 = *(code **)(lVar57 + 8);
  func_0x000101df658c(puVar17,unaff_x22 + 0x910);
  (*pcVar76)(9,unaff_x22 + 0xa0,uVar34,lVar57);
  func_0x000101df65c8(unaff_x22 + 0xa0);
  lVar30 = plVar29[3];
  func_0x0001000a8868(plVar29,lVar30);
  lVar57 = *plVar29;
  FUN_101de248c(puVar50);
  uVar48 = *(undefined8 *)(lVar57 + 0x10);
  uVar34 = 0x535f444554494445;
  uVar46 = 0xeb0000000050414e;
  if (cVar3 != '\x01') {
    uVar34 = 0xd000000000000012;
    uVar46 = 0x800000010f011680;
  }
  uVar49 = 0x50414e535f57454e;
  if (cVar3 != '\0') {
    uVar49 = uVar34;
  }
  uVar34 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar34 = uVar46;
  }
  uVar46 = *(undefined8 *)(unaff_x22 + 0xfd8);
  lVar57 = *(long *)(unaff_x22 + 0xfc0);
  func_0x000107c5fadc(uVar49,uVar34);
  func_0x000107c6142c(uVar34);
  func_0x000107c5fadc(puVar50,lVar30);
  func_0x000107c6142c(lVar30);
  func_0x0001058dab1c(uVar48,uVar49,puVar50,1);
  func_0x000107c61170(puVar50);
  func_0x000107c61170(uVar49);
  func_0x000107c6142c(uVar46);
  func_0x000107c61654();
  func_0x000107c6142c(0);
  func_0x000107c614ac(0);
  func_0x000101df65c8(puVar17);
  if (lVar57 != 0) {
    func_0x0001000d224c(unaff_x22 + 0xe88);
    lVar30 = *(long *)(unaff_x22 + 0xe88);
    if (lVar30 != 0) {
      func_0x000107c427f4(lVar30);
      func_0x000107c615e8(lVar30);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101de4564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101de6544; end: 101de667f;  */

void FUN_101de6544(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1108));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101de659c;
  }
  else {
    pcVar1 = FUN_101de6680;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


