/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102141cec; end: 102141d3f;  */

void FUN_102141cec(undefined8 *param_1)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  FUN_1021417bc(&uStack_a0);
  param_1[9] = uStack_58;
  param_1[8] = uStack_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = CONCAT62(uStack_36,uStack_38);
  param_1[0xc] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x72) = uStack_2e;
  *(ulong *)((long)param_1 + 0x6a) = CONCAT26(uStack_30,uStack_36);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Entry: 102141d40; end: 102141eb3;  */

code * FUN_102141d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = &UNK_1104d0ab0;
  func_0x000107c613fc(&UNK_1104d0ab0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  uVar2 = 0x102142f40;
  func_0x0001000d5158(0x102142f40,puVar1,&UNK_1104d0450);
  func_0x000107c61574(puVar1);
  func_0x000107c6157c(uVar4);
  pcVar3 = FUN_102142fac;
  func_0x0001000bfde0(FUN_102142fac,uVar4,&UNK_1106ba3d0);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  return pcVar3;
}



/* Entry: 102141eb4; end: 102141f03;  */

void FUN_102141eb4(undefined8 *param_1)

{
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_10213ab98(&uStack_90);
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = CONCAT71(uStack_37,uStack_38);
  param_1[10] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x61) = uStack_2f;
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_30,uStack_37);
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Entry: 102141f04; end: 102141f0b;  */

void FUN_102141f04(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000f66f0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*param_2);
  *param_1 = (byte)uVar1 & 1;
  return;
}



/* Entry: 102141f0c; end: 102141f9f;  */

undefined * FUN_102141f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1104d0a88;
  func_0x000107c613fc(&UNK_1104d0a88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  uVar2 = 0x102142f3c;
  func_0x0001000bfde0(0x102142f3c,puVar1,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar1);
  puVar1 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar2);
  return puVar1;
}



/* Entry: 102141fa0; end: 102141fb7;  */

void FUN_102141fa0(void)

{
  FUN_10213ab08();
  return;
}



/* Entry: 102141fb8; end: 102142023;  */

void FUN_102141fb8(void)

{
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  func_0x0001021361b8();
  func_0x000107c61574(uStack_38);
  func_0x000100087bd4(FUN_102142f98,*(undefined8 *)(unaff_x20 + 0x48),PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102142024; end: 102142153;  */

void FUN_102142024(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  pcVar1 = "fetchOptInStatus(completion:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  pcVar2 = pcVar1;
  func_0x0001000d224c(&uStack_48);
  FUN_10212fb94();
  func_0x000107c61574(uStack_48);
  puVar3 = &UNK_1104d07d0;
  func_0x000107c613fc(&UNK_1104d07d0,0x28,7);
  *(char **)(puVar3 + 0x10) = pcVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  func_0x000107c615f0(pcVar1);
  func_0x000107c6157c(param_2);
  uVar4 = 0;
  func_0x00010488a220(0,1,FUN_102142224,puVar3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104d07f8;
  func_0x000107c613fc(&UNK_1104d07f8,0x28,7);
  *(char **)(puVar3 + 0x10) = pcVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  func_0x000107c615f0(pcVar1);
  func_0x000107c6157c(param_2);
  func_0x000104888fc0(0,1,FUN_102142334,puVar3);
  func_0x000107c615e8(pcVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102142154; end: 102142223;  */

void FUN_102142154(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = *param_1;
  puVar2 = &UNK_1104d0b28;
  func_0x000107c613fc(&UNK_1104d0b28,0x21,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  puVar2[0x20] = uVar1;
  uStack_50 = 0x1021429a8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104d0b40;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102142224; end: 10214223f;  */

void FUN_102142224(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102142154(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102142240; end: 1021422f7;  */

void FUN_102142240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1104d0ad8;
  func_0x000107c613fc(&UNK_1104d0ad8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  pcStack_40 = FUN_102142984;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104d0af0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1021422f8; end: 102142333;  */

void FUN_1021422f8(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102142334; end: 10214233f;  */

void FUN_102142334(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_60;
  puVar3 = &UNK_1104d0ad8;
  func_0x000107c613fc(&UNK_1104d0ad8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  pcStack_40 = FUN_102142984;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104d0af0;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102142340; end: 102142407;  */

void FUN_102142340(double param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  long lStack_28;
  
  func_0x0001000d224c(&uStack_70);
  func_0x000107c6071c();
  param_1 = param_1 * 1000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102142400);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      lStack_28 = (long)param_1;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0x200;
      uStack_56 = 1;
      uStack_50 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 1;
      uStack_48 = param_2;
      FUN_102143024(&uStack_68);
      func_0x000107c61170(uStack_70);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102142408);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102142404);
  (*pcVar1)();
}



/* Entry: 102142408; end: 1021424bf;  */

void FUN_102142408(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cStack_38;
  undefined7 uStack_37;
  
  func_0x0001000d224c(&cStack_38);
  uVar1 = CONCAT71(uStack_37,cStack_38);
  func_0x000100087bd4(&cStack_38,FUN_1021424c0,uVar1,&UNK_1106ba5f0);
  uVar2 = 1;
  FUN_10213009c(1,cStack_38 != '\x02',0,cStack_38 == '\x02',0,0,param_1);
  func_0x00010075a04c(0,1,FUN_1021424d8,0);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1021424c0; end: 1021424d7;  */

void FUN_1021424c0(void)

{
  FUN_10212fb88();
  return;
}



/* Entry: 1021424d8; end: 10214278f;  */

void FUN_1021424d8(void)

{
  return;
}



/* Entry: 102142790; end: 1021427bb;  */

long FUN_102142790(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1021427bc; end: 1021427bf;  */

void FUN_1021427bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)();
  return;
}



/* Entry: 1021427c0; end: 10214285f;  */

void FUN_1021427c0(long param_1,long param_2)

{
  func_0x000107c6160c();
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return;
}



/* Entry: 102142860; end: 1021428ff;  */

int FUN_102142860(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x80000000;
  }
  uVar1 = *param_1 & 0x7fffffff;
  if ((*(ulong *)(param_1 + 2) & 0xf000000000000007) == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102142900; end: 10214293f;  */

void FUN_102142900(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60fc4;
  func_0x000107c61520(&UNK_10da60fc4,&UNK_1104d09e8);
  puRam0000000112e5b418 = puVar1;
  return;
}



/* Entry: 102142940; end: 102142943;  */

void FUN_102142940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6102c;
  func_0x000107c61520(&UNK_10da6102c,&UNK_1104d0958);
  puRam0000000112e5b420 = puVar1;
  return;
}



/* Entry: 102142944; end: 102142983;  */

void FUN_102142944(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6102c;
  func_0x000107c61520(&UNK_10da6102c,&UNK_1104d0958);
  puRam0000000112e5b420 = puVar1;
  return;
}



/* Entry: 102142984; end: 102142a73;  */

void FUN_102142984(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(3);
  return;
}



/* Entry: 102142a74; end: 102142a87;  */

/* WARNING: Removing unreachable block (ram,0x000102136408) */
/* WARNING: Removing unreachable block (ram,0x000102136418) */
/* WARNING: Removing unreachable block (ram,0x000102136514) */
/* WARNING: Removing unreachable block (ram,0x000102136424) */
/* WARNING: Removing unreachable block (ram,0x00010213642c) */
/* WARNING: Removing unreachable block (ram,0x0001021364a4) */
/* WARNING: Removing unreachable block (ram,0x0001021364ac) */
/* WARNING: Removing unreachable block (ram,0x0001021364b0) */
/* WARNING: Removing unreachable block (ram,0x0001021364dc) */
/* WARNING: Removing unreachable block (ram,0x0001021364e4) */
/* WARNING: Removing unreachable block (ram,0x0001021364b4) */
/* WARNING: Removing unreachable block (ram,0x0001021364f4) */

undefined * FUN_102142a74(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112e5b1d8;
    func_0x0001000285a8(0x112e5b1d8,&UNK_10da60d10);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar5,&UNK_1104d0a60);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 102142a88; end: 102142abf;  */

long FUN_102142a88(long param_1,long param_2)

{
  func_0x000107c6161c(param_2,param_1);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  return param_2;
}



/* Entry: 102142ac0; end: 102142c53;  */

void FUN_102142ac0(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102142b88);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  lVar1 = lVar7 + 0x20 + param_1 * 0x10;
  func_0x000107c61408(lVar1,lVar4,&UNK_1104d0a60);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102142b8c);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102142b90);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 0x10;
    uVar3 = lVar7 + 0x20 + param_2 * 0x10;
    if (uVar2 < uVar3 || uVar3 + (*(long *)(lVar7 + 0x10) - param_2) * 0x10 <= uVar2) {
      func_0x000107c61414();
    }
    else if (uVar2 != uVar3) {
      func_0x000107c61410();
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102142b94);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102142b98);
  (*pcVar6)();
}



/* Entry: 102142c54; end: 102142c8b;  */

long FUN_102142c54(long param_1,long param_2)

{
  func_0x000107c61620(param_2,param_1);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  return param_2;
}



/* Entry: 102142c8c; end: 102142c93;  */

undefined1 FUN_102142c8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x7a);
}



/* Entry: 102142c94; end: 102142cb7;  */

void FUN_102142c94(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 102142cb8; end: 102142cc3;  */

void FUN_102142cb8(void)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  uint uVar5;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  pcVar2 = pcVar1;
  func_0x00010213ffbc(pcVar1,lVar4,*(undefined8 *)(unaff_x20 + 0x20));
  if (pcVar2 == (code *)0x0) {
    uVar5 = 0;
  }
  else {
    pcVar3 = pcVar2;
    func_0x000107c614f0();
    uVar5 = (uint)pcVar3;
    (**(code **)(lVar4 + 8))();
    func_0x000107c615e8(pcVar2);
  }
  (*pcVar1)(uVar5 & 1);
  return;
}



/* Entry: 102142cc4; end: 102142cef;  */

void FUN_102142cc4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102142cf0; end: 102142cf7;  */

void FUN_102142cf0(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102142cf8; end: 102142d6f;  */

void FUN_102142cf8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10214057c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined1 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102142d70; end: 102142dbb;  */

void FUN_102142d70(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c614b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1);
  return;
}



/* Entry: 102142dbc; end: 102142e17;  */

void FUN_102142dbc(void)

{
  long unaff_x20;
  
  FUN_1021367e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102142e18; end: 102142e3b;  */

void FUN_102142e18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
  if (param_1 == 0) {
    uStack_d0 = 0;
    uStack_c8 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    uStack_40 = uStack_d0;
    uStack_38 = uStack_c8;
    func_0x000107c5fb78(0xd000000000000021,0x800000010f064a30);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_50 = *(undefined4 *)(unaff_x20 + 0x90);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c603d0(&uStack_d0,&uStack_40,&UNK_1104cfe88,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_38;
    func_0x0001007d6c6c(1,uStack_40,uStack_38,uVar2,&PTR_DAT_1104d0850);
    func_0x000107c6142c(uVar1);
  }
  else {
    uStack_d0 = 0;
    uStack_c8 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x1f);
    func_0x000107c6142c(uStack_c8);
    uStack_d0 = 0xd00000000000001d;
    uStack_c8 = 0x800000010f064a60;
    func_0x000107c614cc(param_1,auStack_d8,auStack_f0);
    uVar1 = uStack_e0;
    func_0x000107c60640(uStack_e8,uStack_e0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    uVar1 = uStack_c8;
    func_0x0001007d6c6c(3,uStack_d0,uStack_c8,uVar2,&PTR_DAT_1104d0850);
    func_0x000107c6142c(uVar1);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 102142e3c; end: 102142e67;  */

void FUN_102142e3c(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 102142e68; end: 102142ebb;  */

void FUN_102142e68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102142ebc; end: 102142ecb;  */

void FUN_102142ebc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar3 = *param_1;
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x2a);
    func_0x000107c5fb78(0xd000000000000028,0x800000010f064fb0);
    uVar1 = 0x112d393f0;
    uStack_58 = uVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_58,&uStack_50,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_48;
    func_0x0001007d6c6c(3,uStack_50,uStack_48,uVar2,&PTR_DAT_1104d0850);
    func_0x000107c6142c(uVar1);
    func_0x00010488ade0(uVar3);
  }
  else {
    uStack_50 = CONCAT71(uStack_50._1_7_,*(undefined1 *)(unaff_x20 + 0x18)) & 0xffffffffffffff01;
    func_0x000100b60084(&uStack_50,*(undefined8 *)(unaff_x20 + 0x10));
  }
  return;
}



/* Entry: 102142ecc; end: 102142edf;  */

void FUN_102142ecc(void)

{
  FUN_102141cd0();
  return;
}



/* Entry: 102142ee0; end: 102142f5f;  */

undefined1 FUN_102142ee0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102142f60; end: 102142f87;  */

void FUN_102142f60(void)

{
  func_0x000102141c1c();
  return;
}



/* Entry: 102142f88; end: 102142f97;  */

void FUN_102142f88(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 102142f98; end: 102142fab;  */

void FUN_102142f98(void)

{
  FUN_102141fa0();
  return;
}



/* Entry: 102142fac; end: 102142faf;  */

void FUN_102142fac(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined8 uStack_ce;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  uStack_78 = *(undefined8 *)(param_2 + 0x58);
  uStack_80 = *(undefined8 *)(param_2 + 0x50);
  uStack_70 = *(undefined8 *)(param_2 + 0x60);
  uStack_68 = (undefined1)*(undefined8 *)(param_2 + 0x68);
  uStack_5f = *(undefined8 *)(param_2 + 0x71);
  uStack_67 = (undefined7)*(undefined8 *)(param_2 + 0x69);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x69) >> 0x38);
  uStack_b8 = *(undefined8 *)(param_2 + 0x18);
  uStack_c0 = *(undefined8 *)(param_2 + 0x10);
  uStack_a8 = *(undefined8 *)(param_2 + 0x28);
  uStack_b0 = *(undefined8 *)(param_2 + 0x20);
  uStack_98 = *(undefined8 *)(param_2 + 0x38);
  uStack_a0 = *(undefined8 *)(param_2 + 0x30);
  uStack_88 = *(undefined8 *)(param_2 + 0x48);
  uStack_90 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *param_2;
  func_0x000107c61434(uVar3);
  func_0x0001021429d0(&uStack_c0,&uStack_140,0x112e5b300,&UNK_10da60e30);
  func_0x0001000d224c(&uStack_140);
  uVar2 = uStack_140;
  func_0x000100087bd4(&cStack_141,0x102142fc4,uStack_140,&UNK_1106ba5f0);
  func_0x000107c61574(uVar2);
  func_0x0001039dde90(&uStack_140,cStack_141 != '\x02',uVar1,uVar3,&uStack_c0);
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = uStack_f0;
  param_1[0xd] = CONCAT62(uStack_d6,uStack_d8);
  param_1[0xc] = uStack_e0;
  *(undefined8 *)((long)param_1 + 0x72) = uStack_ce;
  *(ulong *)((long)param_1 + 0x6a) = CONCAT26(uStack_d0,uStack_d6);
  param_1[1] = uStack_138;
  *param_1 = uStack_140;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  param_1[5] = uStack_118;
  param_1[4] = uStack_120;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  return;
}



/* Entry: 102142fb0; end: 102142fd7;  */

void FUN_102142fb0(void)

{
  FUN_1021424c0();
  return;
}



/* Entry: 102142fd8; end: 102143023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102142fd8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5b430) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102143024; end: 10214357f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102143024(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    puVar5 = PTR_PTR_1126a9f20;
    func_0x000107c610f8(PTR_PTR_1126a9f20);
    func_0x000107c453e4();
    func_0x000107c556d4();
    bVar3 = *(byte *)((long)param_1 + 0x11);
    uVar6 = 0x4244;
    if (bVar3 != 5) {
      uVar6 = 0xd000000000000012;
    }
    uVar7 = 0xe200000000000000;
    if (bVar3 != 5) {
      uVar7 = 0x800000010f065000;
    }
    uVar8 = 0x53474e4954544553;
    if (bVar3 != 3) {
      uVar8 = 0xd000000000000012;
    }
    uVar1 = 0xe800000000000000;
    if (bVar3 != 3) {
      uVar1 = 0x800000010f065020;
    }
    if (bVar3 < 5) {
      uVar7 = uVar1;
      uVar6 = uVar8;
    }
    uVar8 = 0xee005353494d5349;
    uVar1 = 0x445f474f4c414944;
    if (bVar3 != 1) {
      uVar8 = 0xee004e4f444e4142;
      uVar1 = 0x415f474f4c414944;
    }
    uVar2 = 0xed00004e4f545455;
    uVar4 = 0x425f474f4c414944;
    if (bVar3 != 0) {
      uVar2 = uVar8;
      uVar4 = uVar1;
    }
    if (bVar3 < 3) {
      uVar7 = uVar2;
      uVar6 = uVar4;
    }
    func_0x000107c5fadc(uVar6,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c31138(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c56690(puVar5);
    func_0x000107c57054(puVar5);
    func_0x000107c57e90(puVar5);
    if (param_1[1] != 0) {
      uVar6 = *param_1;
      func_0x000107c5fadc(uVar6);
      func_0x000107c58ca4(puVar5);
      func_0x000107c61170(uVar6);
    }
    if (*(char *)(param_1 + 7) != '\x01') {
      func_0x000107c59a68(puVar5);
    }
    lVar9 = param_1[3];
    func_0x000107c59aa8(puVar5);
    if (*(char *)(param_1 + 5) != '\x01') {
      func_0x000107c57990(puVar5);
    }
    if (lVar9 != 0) {
      func_0x000107c614cc(lVar9,auStack_50,auStack_68);
      uVar7 = uStack_58;
      func_0x000107c60640(uStack_60,uStack_58);
      uVar6 = uStack_60;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar7);
      func_0x000107c57b84(puVar5);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c4bfb0(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102143580; end: 1021435df; -[_TtC27LensLeaderboardServicesImpl21LensLeaderboardLogger init] */

void FUN_102143580(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardServicesImpl.LensLeaderboardLogger",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021435ac);
  (*pcVar1)();
}



/* Entry: 1021435e0; end: 102143603; -[_TtC27LensLeaderboardServicesImpl21LensLeaderboardLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021435e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5b430));
  return;
}



/* Entry: 102143604; end: 102143817;  */

void FUN_102143604(void)

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
  uVar1 = 0x656974;
  if (bVar5 != 2) {
    uVar1 = 0x6573726f77;
  }
  uVar2 = 0xe300000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe500000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar3 = 0x726574746562;
  }
  uVar4 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xe600000000000000;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102143818; end: 102143887;  */

void FUN_102143818(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x656974;
  if (bVar5 != 2) {
    uVar1 = 0x6573726f77;
  }
  uVar2 = 0xe300000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe500000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar3 = 0x726574746562;
  }
  uVar4 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xe600000000000000;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102143888; end: 1021438e3;  */

void FUN_102143888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_102144188();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1021438e4; end: 10214392f;  */

void FUN_1021438e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102144188();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 102143930; end: 102143993;  */

ulong FUN_102143930(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 102143994; end: 102143997;  */

void FUN_102143994(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da610c0;
  func_0x000107c61520(&UNK_10da610c0,&UNK_1104d1100);
  puRam0000000112e5b460 = puVar1;
  return;
}



/* Entry: 102143998; end: 1021439d7;  */

void FUN_102143998(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da610c0;
  func_0x000107c61520(&UNK_10da610c0,&UNK_1104d1100);
  puRam0000000112e5b460 = puVar1;
  return;
}



/* Entry: 1021439d8; end: 102143a27;  */

void FUN_1021439d8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 102143a28; end: 102143ae7;  */

undefined8 * FUN_102143a28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined2 *)((long)param_1 + 0x61) = *(undefined2 *)((long)param_2 + 0x61);
  uVar5 = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c614b0(uVar5);
  param_1[0xd] = uVar5;
  uVar6 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar6;
  return param_1;
}



/* Entry: 102143ae8; end: 102143c17;  */

undefined8 * FUN_102143ae8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
  *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
  uVar1 = param_1[0xd];
  uVar2 = param_2[0xd];
  func_0x000107c614b0(uVar2);
  param_1[0xd] = uVar2;
  func_0x000107c614ac(uVar1);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  return param_1;
}



/* Entry: 102143c18; end: 102143ccb;  */

undefined8 * FUN_102143c18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
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
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
  *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
  uVar2 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c614ac(uVar2);
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  return param_1;
}



/* Entry: 102143ccc; end: 102143d83;  */

int FUN_102143ccc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102143d84; end: 102143dab;  */

void FUN_102143d84(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 102143dac; end: 102143ecf;  */

undefined8 * FUN_102143dac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x11) = *(undefined2 *)((long)param_2 + 0x11);
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x000107c614b0(uVar2);
  uVar1 = param_2[4];
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  return param_1;
}



/* Entry: 102143ed0; end: 102143f53;  */

undefined8 * FUN_102143ed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c614ac(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  return param_1;
}



/* Entry: 102143f54; end: 102144187;  */

int FUN_102143f54(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x12] != '\0')) {
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



/* Entry: 102144188; end: 1021441c7;  */

void FUN_102144188(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da61128;
  func_0x000107c61520(&UNK_10da61128,&UNK_1104d1100);
  puRam0000000112e5b468 = puVar1;
  return;
}



/* Entry: 1021441c8; end: 1021441cf;  */

long FUN_1021441c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1021441d0; end: 10214428b;  */

void FUN_1021441d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d1220;
  func_0x000107c613fc(&UNK_1104d1220,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021445cc,puVar1);
  return;
}



/* Entry: 10214428c; end: 1021445cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10214428c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c4b100();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar4 = lStack_68;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      lVar4 = lVar2;
      func_0x000107c4b528();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x0001000285a8(0x112d53a90,&UNK_10da61260);
      func_0x000100083b20(&lStack_68);
      lVar2 = lStack_68;
      lVar5 = lStack_68;
      func_0x000107c4cfbc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      lVar6 = lVar5;
      func_0x0001000bda74();
      func_0x000107c61170(lVar5);
      func_0x0001000285a8(0x112de7260,&UNK_10dbc1260);
      func_0x000100083b20(&lStack_68);
      lVar2 = lStack_68;
      lVar5 = lStack_68;
      func_0x000107c4b028();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      lVar7 = lVar5;
      func_0x0001000bda74();
      func_0x000107c61170(lVar5);
      lVar5 = lVar3;
      func_0x000107c4dafc();
      puVar8 = PTR_PTR_1126aeea8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c615f0(lVar4);
      func_0x000100083b20(&lStack_68);
      uVar14 = *(undefined8 *)(lStack_68 + _DAT_113091b78);
      func_0x000107c615f0(uVar14);
      func_0x000107c61170(lStack_68);
      lVar9 = 0;
      FUN_102144dbc();
      lVar10 = lVar9;
      func_0x000107c610f8();
      lVar2 = _DAT_112e5b540;
      uVar11 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      *(undefined8 *)(lVar10 + lVar2) = uVar11;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112e5b548);
      *puVar1 = 0xd000000000000020;
      puVar1[1] = 0x800000010f065080;
      *(undefined8 *)(lVar10 + _DAT_112e5b550) = 1;
      *(long *)(lVar10 + _DAT_112e5b510) = lVar6;
      *(long *)(lVar10 + _DAT_112e5b518) = lVar7;
      *(long *)(lVar10 + _DAT_112e5b520) = lVar5;
      *(undefined **)(lVar10 + _DAT_112e5b528) = puVar8;
      *(long *)(lVar10 + _DAT_112e5b530) = lVar4;
      *(undefined8 *)(lVar10 + _DAT_112e5b538) = uVar14;
      plVar12 = &lStack_78;
      lStack_78 = lVar10;
      lStack_70 = lVar9;
      func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
      func_0x0001000a0a8c(0);
      plVar13 = plVar12;
      func_0x000104494b00();
      func_0x000107c61170(plVar12);
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
    }
    func_0x000107c615e8(lVar3);
  }
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 1021445cc; end: 102144627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021445cc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c4b100();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar4 = lStack_68;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      lVar4 = lVar2;
      func_0x000107c4b528();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x0001000285a8(0x112d53a90,&UNK_10da61260);
      func_0x000100083b20(&lStack_68);
      lVar2 = lStack_68;
      lVar5 = lStack_68;
      func_0x000107c4cfbc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      lVar6 = lVar5;
      func_0x0001000bda74();
      func_0x000107c61170(lVar5);
      func_0x0001000285a8(0x112de7260,&UNK_10dbc1260);
      func_0x000100083b20(&lStack_68);
      lVar2 = lStack_68;
      lVar5 = lStack_68;
      func_0x000107c4b028();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      lVar7 = lVar5;
      func_0x0001000bda74();
      func_0x000107c61170(lVar5);
      lVar5 = lVar3;
      func_0x000107c4dafc();
      puVar8 = PTR_PTR_1126aeea8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c615f0(lVar4);
      func_0x000100083b20(&lStack_68);
      uVar14 = *(undefined8 *)(lStack_68 + _DAT_113091b78);
      func_0x000107c615f0(uVar14);
      func_0x000107c61170(lStack_68);
      lVar9 = 0;
      FUN_102144dbc();
      lVar10 = lVar9;
      func_0x000107c610f8();
      lVar2 = _DAT_112e5b540;
      uVar11 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      *(undefined8 *)(lVar10 + lVar2) = uVar11;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112e5b548);
      *puVar1 = 0xd000000000000020;
      puVar1[1] = 0x800000010f065080;
      *(undefined8 *)(lVar10 + _DAT_112e5b550) = 1;
      *(long *)(lVar10 + _DAT_112e5b510) = lVar6;
      *(long *)(lVar10 + _DAT_112e5b518) = lVar7;
      *(long *)(lVar10 + _DAT_112e5b520) = lVar5;
      *(undefined **)(lVar10 + _DAT_112e5b528) = puVar8;
      *(long *)(lVar10 + _DAT_112e5b530) = lVar4;
      *(undefined8 *)(lVar10 + _DAT_112e5b538) = uVar14;
      plVar12 = &lStack_78;
      lStack_78 = lVar10;
      lStack_70 = lVar9;
      func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
      func_0x0001000a0a8c(0);
      plVar13 = plVar12;
      func_0x000104494b00();
      func_0x000107c61170(plVar12);
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
    }
    func_0x000107c615e8(lVar3);
  }
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 102144628; end: 10214466b;  */

void FUN_102144628(long param_1,long *param_2,long param_3)

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



/* Entry: 10214466c; end: 1021449e3;  */

void FUN_10214466c(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_c8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  func_0x000107c3d128();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    uVar4 = 0;
    func_0x00010214632c(0,0x112d530b0,&PTR_PTR_1126d8840);
    uVar5 = unaff_x20;
    func_0x000107c5fc54(unaff_x20,uVar4);
    func_0x000107c61170(unaff_x20);
    if (uVar5 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar13 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar13 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar13 != 0) {
      uStack_b0 = uVar5 & 0xffffffffffffff8;
      uVar14 = 0;
      puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_b0 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102144984);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar5 + uVar14 * 8 + 0x20);
          func_0x000107c61174(uVar6);
        }
        else {
          uVar6 = uVar14;
          func_0x000100ff3f74(uVar14,uVar5);
        }
        puVar11 = PTR___NSConcreteStackBlock_11034bd00;
        uVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102144980);
          (*pcVar3)();
        }
        puStack_80 = (undefined *)0x0;
        lStack_78 = 0;
        pcStack_88 = FUN_1021449e4;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100fe4708;
        puStack_90 = &UNK_1104d1380;
        ppuVar7 = &puStack_a8;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_80);
        puVar10 = &UNK_1104d13b8;
        func_0x000107c613fc(&UNK_1104d13b8,0x18,7);
        *(long **)(puVar10 + 0x10) = &lStack_78;
        puVar8 = &UNK_1104d13e0;
        func_0x000107c613fc(&UNK_1104d13e0,0x20,7);
        *(undefined8 *)(puVar8 + 0x10) = 0x1021462e0;
        *(undefined **)(puVar8 + 0x18) = puVar10;
        pcStack_88 = (code *)0x10214630c;
        puStack_a8 = puVar11;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100fe4704;
        puStack_90 = &UNK_1104d13f8;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar11 = puStack_80;
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(puVar11);
        func_0x000107c4c5c4(uVar6);
        func_0x000107c61170(uVar6);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar7);
        uVar6 = 0;
        func_0x000107c61544(0,"",0x70,0x16,0x26,1);
        func_0x000107c61574(puVar10);
        if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102144988);
          (*pcVar3)();
        }
        puVar11 = puVar8;
        func_0x000107c61544(puVar8,"",0x70,0x17,0x17,1);
        func_0x000107c61574(puVar8);
        lVar2 = lStack_78;
        if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10214498c);
          (*pcVar3)();
        }
        if (lStack_78 != 0) {
          puVar11 = puStack_c8;
          func_0x000107c61550();
          if ((((int)puVar11 == 0) || ((long)puStack_c8 < 0)) ||
             (puVar11 = puStack_c8, ((ulong)puStack_c8 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_c8 >> 0x3e == 0) {
              puVar10 = *(undefined **)(((ulong)puStack_c8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar10 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_c8) {
                puVar10 = puStack_c8;
              }
              func_0x000107c60480(puVar10);
            }
            puVar11 = (undefined *)0x0;
            func_0x000100fe2a60(0,puVar10 + 1,1,puStack_c8);
          }
          uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
          uVar6 = *(ulong *)(uVar12 + 0x10);
          puStack_c8 = puVar11;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
            puStack_c8 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            func_0x000100fe2a60(puStack_c8,uVar6 + 1,1,puVar11);
            uVar12 = (ulong)puStack_c8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
          *(long *)(uVar12 + uVar6 * 8 + 0x20) = lVar2;
        }
        uVar14 = uVar14 + 1;
      } while (uVar1 != uVar13);
    }
    func_0x000107c6142c(uVar5);
  }
  return;
}



/* Entry: 1021449e4; end: 1021449fb;  */

void FUN_1021449e4(void)

{
  return;
}



/* Entry: 1021449fc; end: 102144aa7;  */

void FUN_1021449fc(void)

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



/* Entry: 102144aa8; end: 102144ac7;  */

void FUN_102144aa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102144ac8; end: 102144cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102144ac8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e5b550;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e5b550);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    func_0x000102144b34();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    func_0x000100fe3f08(uVar4);
  }
  func_0x000100fe3f18(lVar3);
  return lVar2;
}



/* Entry: 102144cc0; end: 102144d1f; -[_TtC22SCLensExplorerPrefetch37ARBarOfflineTabLensesPrefetchWorkflow init] */

void FUN_102144cc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensExplorerPrefetch.ARBarOfflineTabLensesPrefetchWorkflow",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102144cec);
  (*pcVar1)();
}



/* Entry: 102144d20; end: 102144dbb; -[_TtC22SCLensExplorerPrefetch37ARBarOfflineTabLensesPrefetchWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102144d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102144d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102144d60) */
/* WARNING: Removing unreachable block (ram,0x000102144d80) */
/* WARNING: Removing unreachable block (ram,0x000100fe3f08) */
/* WARNING: Removing unreachable block (ram,0x000100fe3f14) */
/* WARNING: Removing unreachable block (ram,0x000100fe3f10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102144d20(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b510));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b518));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e5b528));
  return;
}



/* Entry: 102144dbc; end: 102144ddb;  */

void FUN_102144dbc(void)

{
  func_0x000107c61168(&PTR_PTR_112820610);
  return;
}



/* Entry: 102144ddc; end: 102144e07; -[_TtC22SCLensExplorerPrefetch37ARBarOfflineTabLensesPrefetchWorkflow dataSyncerIdentifier] */

void FUN_102144ddc(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f065230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102144e08; end: 102144e0f; -[_TtC22SCLensExplorerPrefetch37ARBarOfflineTabLensesPrefetchWorkflow submitOnRegister] */

undefined8 FUN_102144e08(void)

{
  return 1;
}



/* Entry: 102144e10; end: 1021450bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102144e10(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0xd00000000000003c,0x800000010f0651f0);
  uVar9 = *(ulong *)(unaff_x20 + _DAT_112e5b520);
  puVar3 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c(0xe000000000000000);
  puVar3 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126b7248;
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar9;
  if (SUB168(auVar1 * ZEXT816(0x3c),8) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1021450a8);
    (*pcVar2)();
  }
  if (uVar9 * 0x3c >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1021450ac);
    (*pcVar2)();
  }
  func_0x000107c57d34();
  func_0x000107c57c1c(puVar4);
  func_0x000107c55974(puVar3);
  puVar6 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56a40();
  func_0x000107c52c2c(puVar6);
  puVar7 = puVar6;
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1021450b0);
    (*pcVar2)();
  }
  func_0x000107c3d93c();
  func_0x000107c61170(puVar7);
  puVar7 = puVar6;
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c3d93c();
    func_0x000107c61170(puVar7);
    puVar7 = puVar6;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021450b8);
      (*pcVar2)();
    }
    func_0x000107c3d93c();
    func_0x000107c61170(puVar7);
    puVar7 = puVar6;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c3d93c();
      func_0x000107c61170(puVar7);
      uVar8 = 0xd000000000000020;
      func_0x000107c5fadc(0xd000000000000020,0x800000010f065230);
      func_0x000107c57688(puVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c55958(puVar3);
      func_0x000107c54734(puVar3);
      uVar8 = 0xd000000000000020;
      func_0x000107c5fadc(0xd000000000000020,0x800000010f065230);
      func_0x000107c5597c(puVar3);
      func_0x000107c61170(uVar8);
      func_0x000107c55968(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      return puVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1021450bc);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021450b4);
  (*pcVar2)();
}



/* Entry: 1021450bc; end: 1021450ef; -[_TtC22SCLensExplorerPrefetch37ARBarOfflineTabLensesPrefetchWorkflow jobConfig] */

void FUN_1021450bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102144e10();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021450f0; end: 1021453df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021450f0(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  code *pcVar9;
  
  pcVar1 = param_1;
  FUN_102144ac8();
  if (pcVar1 == (code *)0x0) {
    if (param_1 != (code *)0x0) {
      FUN_1021455b0();
      puVar8 = &UNK_1104d1530;
      func_0x000107c613f8(&UNK_1104d1530,pcVar1,0,0);
      *pcVar1 = (code)0x1;
      (*param_1)(2,puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(puVar8);
      return;
    }
  }
  else {
    lVar2 = *(long *)(unaff_x20 + _DAT_112e5b538);
    func_0x000107c3dfc0();
    func_0x000107c602fc(0x3b);
    func_0x000107c5fb78(0xd000000000000027,0x800000010f0650b0);
    uVar5 = 0x65757274;
    if (lVar2 != 2) {
      uVar5 = 0x65736c6166;
    }
    uVar7 = 0xe400000000000000;
    if (lVar2 != 2) {
      uVar7 = 0xe500000000000000;
    }
    puVar8 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    func_0x000107c5fb78(0xd000000000000010,0x800000010f0650e0);
    func_0x000107c5fb78(uVar5,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(0xe000000000000000);
    pcVar3 = pcVar1;
    func_0x000107c5bc1c(pcVar1);
    FUN_1021455f0();
    puVar8 = &UNK_1104d12f0;
    puVar4 = puVar8;
    func_0x000107c613fc(&UNK_1104d12f0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar5 = 0x112e5b588;
    func_0x0001000285a8(0x112e5b588,&UNK_10da61308);
    pcVar9 = FUN_102146230;
    func_0x00010068b194(FUN_102146230,puVar4,uVar5);
    func_0x000107c61574(pcVar3);
    func_0x000107c61574(puVar4);
    plVar6 = (long *)0x1;
    func_0x00010061b458();
    func_0x000107c61574(pcVar9);
    func_0x000107c613fc(&UNK_1104d12f0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar4 = &UNK_1104d1318;
    func_0x000107c613fc(&UNK_1104d1318,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar8;
    *(code **)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    pcVar9 = *(code **)(*plVar6 + 0x60);
    FUN_10212d7c8(param_1,param_2);
    uVar5 = 0x102146238;
    puVar8 = puVar4;
    (*pcVar9)(0x102146238);
    func_0x000107c61574(plVar6);
    func_0x000107c61574(puVar4);
    uVar7 = uVar5;
    func_0x000107c614f0(uVar5);
    (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112e5b540),uVar7,puVar8);
    func_0x000107c615e8(pcVar1);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 1021453e0; end: 10214551b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1021453e0(ulong *param_1,long param_2,code *param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong auStack_70 [2];
  ulong *puStack_60;
  undefined1 auStack_58 [24];
  
  if ((char)param_1[1] == '\x01') {
    uVar3 = *param_1;
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    puVar1 = (ulong *)0x0;
    if (param_2 != 0) {
      func_0x000107c61170();
      auStack_70[1] = 0;
      puStack_60 = (ulong *)0xe000000000000000;
      func_0x000107c602fc(0x29);
      func_0x000107c5fb78(0xd000000000000027,0x800000010f065100);
      auStack_70[0] = uVar3;
      func_0x000107c603d0(auStack_70,auStack_70 + 1,&UNK_1104d14a0,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      puVar1 = puStack_60;
      func_0x000107c6142c();
    }
    if (param_3 != (code *)0x0) {
      FUN_102146244();
      puVar2 = &UNK_1104d14a0;
      func_0x000107c613f8(&UNK_1104d14a0,puVar1,0,0);
      *puVar1 = uVar3;
      func_0x000107c614b0(uVar3 & 0x7fffffffffffffff);
      (*param_3)(2,puVar2);
      func_0x000107c614ac(puVar2);
    }
  }
  else if (param_3 != (code *)0x0) {
    (*param_3)(0,0);
  }
  return;
}



/* Entry: 10214551c; end: 1021455a7; -[_TtC22SCLensExplorerPrefetch37ARBarOfflineTabLensesPrefetchWorkflow onSync:] */

void FUN_10214551c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1104d12c8;
    func_0x000107c613fc(&UNK_1104d12c8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_1021455a8;
  }
  func_0x000107c61174(param_1);
  FUN_1021450f0(pcVar2,puVar1);
  FUN_10212d6a4(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021455a8; end: 1021455af;  */

void FUN_1021455a8(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1021455b0; end: 1021455ef;  */

void FUN_1021455b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da613fc;
  func_0x000107c61520(&UNK_10da613fc,&UNK_1104d1530);
  puRam0000000112e5b580 = puVar1;
  return;
}



/* Entry: 1021455f0; end: 102145993;  */

undefined ** FUN_1021455f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  ppuVar6 = &puStack_40;
  FUN_102144ac8();
  if (param_1 == 0) {
    puVar4 = (undefined1 *)0x112e5b5a8;
    func_0x0001000285a8(0x112e5b5a8,&UNK_10da61318);
    FUN_1021455b0();
    puVar5 = &UNK_1104d1530;
    func_0x000107c613f8(&UNK_1104d1530,puVar4,0,0);
    *puVar4 = 1;
    uStack_38 = 1;
    puStack_40 = puVar5;
    func_0x000100854cb0(&puStack_40);
    func_0x000107c614ac(puVar5);
  }
  else {
    func_0x0001000285a8(0x112d530a0,&UNK_10d9db4c0);
    lVar1 = param_1;
    func_0x000107c4cd74(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    puVar5 = &UNK_1104d12f0;
    func_0x000107c613fc(&UNK_1104d12f0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    uVar3 = 0x112e5b5b0;
    func_0x0001000285a8(0x112e5b5b0,&UNK_10da61328);
    ppuVar6 = (undefined **)0x1021462d8;
    func_0x0001000bfde0(0x1021462d8,puVar5,uVar3);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar5);
  }
  return ppuVar6;
}



/* Entry: 102145994; end: 102145cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102145994(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(0xe000000000000000);
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar7 = PTR___sSiN_11034deb0;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x7365736e656c20,0xe700000000000000);
  func_0x000107c6142c(0x800000010f065150);
  lVar3 = *(long *)(unaff_x20 + _DAT_112e5b538);
  func_0x000107c3dfc0();
  func_0x000107c602fc(0x3a);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f065180);
  bVar2 = lVar3 == 2;
  uVar6 = 2;
  if (bVar2) {
    uVar6 = 3;
  }
  uVar8 = 3;
  if (bVar2) {
    uVar8 = 1;
  }
  uVar9 = 0x65757274;
  if (!bVar2) {
    uVar9 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (!bVar2) {
    uVar1 = 0xe500000000000000;
  }
  puVar4 = puVar5;
  func_0x000107c6057c(puVar7,puVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x656372756f73202c,0xee00203a65707954);
  func_0x000107c6057c(puVar7,puVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f0650e0);
  func_0x000107c5fb78(uVar9,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(0xe000000000000000);
  puVar7 = &UNK_1104d12f0;
  puVar4 = puVar7;
  func_0x000107c613fc(&UNK_1104d12f0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1104d1340;
  func_0x000107c613fc(&UNK_1104d1340,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(ulong *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(undefined8 *)(puVar5 + 0x28) = uVar6;
  func_0x0001000285a8(0x112e5b5a0,&UNK_10da61790);
  func_0x000107c613fc();
  func_0x000107c61434(param_1);
  uVar6 = 0x102146298;
  func_0x0001000b64ac(0x102146298,puVar5);
  func_0x000107c613fc(&UNK_1104d12f0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  uVar8 = 0x112e5b588;
  func_0x0001000285a8(0x112e5b588,&UNK_10da61308);
  uVar9 = 0x1021462a4;
  func_0x0001000bfde0(0x1021462a4,puVar7,uVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  return uVar9;
}



/* Entry: 102145cbc; end: 102145e07;  */

void FUN_102145cbc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  puStack_50 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61170();
    func_0x000107c602fc(0x2e);
    uVar1 = 0xe000000000000000;
    func_0x000107c6142c();
    puStack_50 = (undefined *)0x800000010f0651c0;
    FUN_10214466c();
    if (uVar1 != 0) {
      if (uVar1 >> 0x3e != 0) {
        func_0x000107c60480();
      }
      func_0x000107c6142c();
    }
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    func_0x000107c5fb78(0x7365736e656c20,0xe700000000000000);
    func_0x000107c6142c();
  }
  FUN_10214466c();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_50 != (undefined *)0x0) {
    puVar2 = puStack_50;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102145e08; end: 10214601f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102145e08(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_90;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar1 = (undefined1 *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_1021455b0();
    puVar5 = &UNK_1104d1530;
    func_0x000107c613f8(&UNK_1104d1530,puVar1,0,0);
    *puVar1 = 0;
    uStack_88 = CONCAT71(uStack_88._1_7_,1);
    puStack_90 = puVar5;
    func_0x000100087f6c(&puStack_90);
    func_0x000107c614ac(puVar5);
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000104885df0(0,0);
  }
  else {
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 != 0) {
      uVar2 = 0;
      func_0x00010214632c(0,0x112d4d630,&PTR_PTR_1126ae6a8);
      func_0x000107c5fc48(param_3,uVar2);
      lVar3 = lStack_60;
      func_0x000107c43164(lStack_60);
      func_0x000107c61180();
      func_0x000107c615e8(lStack_60);
      func_0x000107c61170(param_3);
      uStack_70 = 0x1021462b4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_101286f34;
      puStack_78 = &UNK_1104d1358;
      uStack_68 = param_1;
      func_0x000107c60bc4(&puStack_90);
      uVar2 = uStack_68;
      func_0x000107c6157c(param_1);
      func_0x000107c61574(uVar2);
      func_0x000107c5dc64(lVar3);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar3);
    }
    func_0x0001000b6d30(0);
    puVar5 = &UNK_1104d12f0;
    func_0x000107c613fc(&UNK_1104d12f0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,puVar1);
    func_0x000104885df0(0x1021462ac,puVar5);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102146020; end: 102146113;  */

void FUN_102146020(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined1 uStack_28;
  
  if (param_2 == 0) {
    lStack_30 = 0;
    uStack_28 = 0;
    func_0x000100087f6c(&lStack_30);
  }
  else {
    uStack_28 = 1;
    lStack_30 = param_2;
    func_0x000107c614b0(param_2);
    func_0x000100087f6c(&lStack_30);
    func_0x000107c614ac(param_2);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 102146114; end: 10214622f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102146114(ulong *param_1,ulong *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong auStack_60 [3];
  undefined1 auStack_48 [24];
  
  if ((char)param_2[1] == '\x01') {
    uVar3 = *param_2;
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      func_0x000107c614b0(uVar3);
    }
    else {
      func_0x000100fabc04(uVar3,1);
      func_0x000107c61170(param_3);
      auStack_60[1] = 0;
      auStack_60[2] = 0xe000000000000000;
      func_0x000107c602fc(0x1f);
      func_0x000107c5fb78(0xd00000000000001d,0x800000010f0651a0);
      uVar1 = 0x112d393f0;
      auStack_60[0] = uVar3;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(auStack_60,auStack_60 + 1,uVar1,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(auStack_60[2]);
    }
    uVar3 = uVar3 | 0x8000000000000000;
    uVar2 = 1;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
  }
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 102146230; end: 102146243;  */

undefined8 ****** FUN_102146230(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *****pppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 ******ppppppuVar7;
  undefined8 *****pppppuStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  ppppppuVar7 = (undefined8 ******)*param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    puVar3 = (undefined1 *)0x112e5b598;
    func_0x0001000285a8(0x112e5b598,&UNK_10da61310);
    FUN_1021455b0();
    pppppuVar4 = (undefined8 *****)&UNK_1104d1530;
    func_0x000107c613f8(&UNK_1104d1530,puVar3,0,0);
    *puVar3 = 0;
    uStack_50 = CONCAT71(uStack_50._1_7_,1);
    ppppppuVar7 = &pppppuStack_58;
    pppppuStack_58 = pppppuVar4;
    func_0x000100854cb0(ppppppuVar7);
  }
  else {
    if ((char)uVar1 == '\x01') {
      func_0x0001000285a8(0x112e5b598,&UNK_10da61310);
      uStack_50 = CONCAT71(uStack_50._1_7_,1);
      pppppuStack_58 = ppppppuVar7;
      func_0x000107c614b0(ppppppuVar7);
      ppppppuVar5 = &pppppuStack_58;
      func_0x000100854cb0(ppppppuVar5);
      func_0x000107c61170(lVar2);
      FUN_102146284(ppppppuVar7,1);
      return ppppppuVar5;
    }
    if ((ulong)ppppppuVar7 >> 0x3e == 0) {
      ppppppuVar5 = (undefined8 ******)
                    ((undefined8 ******)((ulong)ppppppuVar7 & 0xffffffffffffff8))[2];
    }
    else {
      ppppppuVar5 = (undefined8 ******)((ulong)ppppppuVar7 & 0xffffffffffffff8);
      if (((ulong)ppppppuVar7 & 0x8000000000000000) != 0) {
        ppppppuVar5 = ppppppuVar7;
      }
      func_0x000107c60480();
    }
    if (ppppppuVar5 != (undefined8 ******)0x0) {
      pppppuStack_58 = (undefined8 *****)0x0;
      uStack_50 = 0xe000000000000000;
      func_0x000107c602fc(0x28);
      func_0x000107c6142c(uStack_50);
      pppppuStack_58 = (undefined8 *****)0x2064656863746546;
      uStack_50 = 0xe800000000000000;
      if ((ulong)ppppppuVar7 >> 0x3e != 0) {
        func_0x000107c60480();
      }
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c5fb78(0xd00000000000001e,0x800000010f065130);
      func_0x000107c6142c(uStack_50);
      FUN_102145994(ppppppuVar7);
      func_0x000107c61170(lVar2);
      return ppppppuVar7;
    }
    puVar3 = (undefined1 *)0x112e5b598;
    func_0x0001000285a8(0x112e5b598,&UNK_10da61310);
    FUN_1021455b0();
    pppppuVar4 = (undefined8 *****)&UNK_1104d1530;
    func_0x000107c613f8(&UNK_1104d1530,puVar3,0,0);
    *puVar3 = 2;
    uStack_50 = CONCAT71(uStack_50._1_7_,1);
    ppppppuVar7 = &pppppuStack_58;
    pppppuStack_58 = pppppuVar4;
    func_0x000100854cb0(ppppppuVar7);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c614ac(pppppuVar4);
  return ppppppuVar7;
}



/* Entry: 102146244; end: 102146283;  */

void FUN_102146244(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da613bc;
  func_0x000107c61520(&UNK_10da613bc,&UNK_1104d14a0);
  puRam0000000112e5b590 = puVar1;
  return;
}



/* Entry: 102146284; end: 1021462df;  */

void FUN_102146284(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}


