/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c390c8; end: 103c390e3;  */

void FUN_103c390c8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c37ac0(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c390e4; end: 103c390ff;  */

void FUN_103c390e4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c3481c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c39100; end: 103c3911b;  */

void FUN_103c39100(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c348f4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c3911c; end: 103c3916b;  */

void FUN_103c3911c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c37b9c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c3916c; end: 103c39187;  */

void FUN_103c3916c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c34670(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c39188; end: 103c391ef;  */

void FUN_103c39188(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = (byte)*param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 103c391f0; end: 103c3920b;  */

void FUN_103c391f0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c35e68(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c3920c; end: 103c39243;  */

void FUN_103c3920c(undefined8 param_1)

{
  FUN_103c39244(param_1,FUN_103c36924);
  return;
}



/* Entry: 103c39244; end: 103c3926f;  */

void FUN_103c39244(undefined8 *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_2)(*param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c39270; end: 103c39293;  */

void FUN_103c39270(void)

{
  long unaff_x20;
  
  FUN_103c3a5a4(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c39294; end: 103c392d7;  */

undefined8 FUN_103c39294(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103c392d8; end: 103c392fb;  */

void FUN_103c392d8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c392ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103c392fc; end: 103c39373;  */

long FUN_103c392fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c39374; end: 103c39387;  */

/* WARNING: Possible PIC construction at 0x000103c393b4: Changing call to branch */

undefined8 FUN_103c39374(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if ((1 < *(byte *)(param_1 + 4)) && (*(byte *)(param_1 + 4) != 2)) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,uVar1,param_1[2],param_1[3]);
  return uVar1;
}



/* Entry: 103c39388; end: 103c393d3;  */

/* WARNING: Possible PIC construction at 0x000103c393b4: Changing call to branch */

void FUN_103c39388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if ((1 < param_5) && (param_5 != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c393d4; end: 103c394a3;  */

undefined8 * FUN_103c393d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x000103c39328(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 103c394a4; end: 103c394eb;  */

undefined8 * FUN_103c394a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_103c39388(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 103c394ec; end: 103c39597;  */

int FUN_103c394ec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 < 0xfe) || (*(char *)((long)param_1 + 0x21) == '\0')) {
    uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
    if (*(byte *)(param_1 + 8) < 3) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = *param_1 + 0xfd;
  }
  return uVar1 + 1;
}



/* Entry: 103c39598; end: 103c395d3;  */

undefined8 FUN_103c39598(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c395d4; end: 103c395eb;  */

void FUN_103c395d4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c37544(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c395ec; end: 103c39607;  */

void FUN_103c395ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c37af4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c39608; end: 103c39623;  */

void FUN_103c39608(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c344f4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c39624; end: 103c3963f;  */

void FUN_103c39624(void)

{
  func_0x000103c39ef8();
  func_0x000103c37a88();
  return;
}



/* Entry: 103c39640; end: 103c3965b;  */

void FUN_103c39640(void)

{
  func_0x000103c39ef8();
  FUN_103c34310();
  return;
}



/* Entry: 103c3965c; end: 103c39677;  */

void FUN_103c3965c(void)

{
  func_0x000103c39ef8();
  FUN_103c37a58();
  return;
}



/* Entry: 103c39678; end: 103c396b7;  */

void FUN_103c39678(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c373a0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c396b8; end: 103c396c3;  */

undefined8 * FUN_103c396b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 103c396c4; end: 103c396ff;  */

void FUN_103c396c4(void)

{
  FUN_103c33c8c();
  return;
}



/* Entry: 103c39700; end: 103c39f17;  */

void FUN_103c39700(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocError_11034f210)(&UNK_1106ed6c0,param_1,0,0);
  return;
}



/* Entry: 103c39f18; end: 103c39f63;  */

undefined8 FUN_103c39f18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103c3abec();
  func_0x000107c613fc();
  FUN_103c3a40c(param_1,param_2);
  return uVar1;
}



/* Entry: 103c39f64; end: 103c39f8b;  */

void FUN_103c39f64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000103c3abec();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_1;
  return;
}



/* Entry: 103c39f8c; end: 103c39fa7;  */

void FUN_103c39f8c(void)

{
  long unaff_x20;
  
  func_0x000108933d40(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c39fa8; end: 103c39fc7;  */

void FUN_103c39fa8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c39fc8,0,0);
  return;
}



/* Entry: 103c39fc8; end: 103c3a07b;  */

void FUN_103c39fc8(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x20);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  uVar2 = *(undefined8 *)(lVar3 + 0x50);
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103c3a050;
                    /* WARNING: Could not recover jumptable at 0x000103c3a04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101ab20c4)
            (*(undefined8 *)(unaff_x22 + 0x10),0,0,0x65756c6176,0xe500000000000000,FUN_103c3a590,
             *(undefined8 *)(unaff_x22 + 0x18),uVar2);
  return;
}



/* Entry: 103c3a07c; end: 103c3a0df;  */

void FUN_103c3a07c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103c332cc(0);
  func_0x000107c61534();
  FUN_103c33294();
  FUN_103c3a0e0();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103c3a0e0; end: 103c3a25f;  */

void FUN_103c3a0e0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  uVar8 = *(undefined8 *)(*param_3 + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c5fcb8(0,uVar8,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar10 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar9 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(auStack_80 + -extraout_x8,param_2,lVar2);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar7 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1106eda48;
  func_0x000107c613fc(&UNK_1106eda48,uVar7 + lVar9,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar7,auStack_80 + -extraout_x8,lVar2);
  FUN_103c33654(0);
  func_0x000107c613fc();
  pcVar4 = FUN_103c3ab80;
  FUN_103c33118(FUN_103c3ab80,puVar3);
  func_0x000107c6157c(puVar3);
  pcVar5 = pcVar4;
  FUN_103c335f8(pcVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  func_0x000108933e18(*(undefined8 *)(param_1 + 0x10),param_3[2],pcVar5);
  return;
}



/* Entry: 103c3a260; end: 103c3a3ab;  */

/* WARNING: Removing unreachable block (ram,0x000103c3a2e8) */

undefined8 FUN_103c3a260(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [16];
  
  lVar6 = *(long *)(param_3 + -8);
  lVar3 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  FUN_103c348f4(lVar5,0,lVar3);
  (**(code **)(lVar6 + 0x10))(puVar4,lVar5,param_3);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0;
  func_0x000107c5fcb8(0,param_3,uVar1,PTR___ss5ErrorWS_11034ee10);
  func_0x000107c5fcb4(puVar4,uVar2);
  (**(code **)(lVar6 + 8))(lVar5,param_3);
  return 1;
}



/* Entry: 103c3a3ac; end: 103c3a403;  */

void FUN_103c3a3ac(void)

{
  long extraout_x8;
  long unaff_x22;
  
  func_0x000103c3ac48();
  func_0x000103c3ac34(*(undefined8 *)(extraout_x8 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c3abe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c3a404; end: 103c3a40b;  */

void FUN_103c3a404(void)

{
  long *plVar1;
  long unaff_x20;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  func_0x0001052b2560();
  (**(code **)(*plVar1 + 0x38))();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 103c3a40c; end: 103c3a58f;  */

void FUN_103c3a40c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *unaff_x20;
  func_0x000103c3ac3c(param_1 + 0x10,auStack_58);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000108933cec(lVar1,param_2);
  if (lVar1 == 0) {
    FUN_103c333a8();
    if (unaff_x21 == 0) {
      func_0x000107c602fc(0x66);
      func_0x000107c5fb78(0x74612065756c6156,0xef207865646e6920);
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      puVar2 = (undefined8 *)0xd000000000000055;
      func_0x000107c5fb78(0xd000000000000055,0x800000010f1b0a30);
      func_0x000100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,puVar2,0,0);
      *puVar2 = 0;
      puVar2[1] = 0xe000000000000000;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 4) = 0;
      func_0x000107c61654();
    }
    func_0x000107c61574(param_1);
    func_0x000103c3a598(0,*(undefined8 *)(lVar4 + 0x50));
    func_0x000107c61464();
  }
  else {
    func_0x000107c61574(param_1);
    unaff_x20[2] = lVar1;
  }
  return;
}



/* Entry: 103c3a590; end: 103c3a5a3;  */

void FUN_103c3a590(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103c332cc(0);
  func_0x000107c61534();
  FUN_103c33294();
  FUN_103c3a0e0();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103c3a5a4; end: 103c3a5e7;  */

void FUN_103c3a5a4(long param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000103c3ac3c(param_1 + 0x10,auStack_38);
  func_0x000108933db4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c3a5e8; end: 103c3a613;  */

void FUN_103c3a5e8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x78))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103c3a614; end: 103c3a627;  */

void FUN_103c3a614(void)

{
  FUN_103c3a5a4();
  return;
}



/* Entry: 103c3a628; end: 103c3a64f;  */

void FUN_103c3a628(void)

{
  code *pcVar1;
  
  func_0x000107c61534();
  FUN_103c3a650();
  func_0x000103c3ac10("aldiPromise.swift");
  func_0x000107c60450();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3a694);
  (*pcVar1)();
}



/* Entry: 103c3a650; end: 103c3a693;  */

void FUN_103c3a650(void)

{
  code *pcVar1;
  
  func_0x000103c3ac10("aldiPromise.swift");
  func_0x000107c60450();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3a694);
  (*pcVar1)();
}



/* Entry: 103c3a694; end: 103c3a6bf;  */

undefined8 FUN_103c3a694(undefined8 param_1)

{
  func_0x000103c3abec();
  func_0x000107c613fc();
  FUN_103c3a6c0();
  return param_1;
}



/* Entry: 103c3a6c0; end: 103c3a777;  */

void FUN_103c3a6c0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_68 [56];
  
  lVar2 = 0;
  FUN_103c332cc();
  func_0x000107c61534();
  FUN_103c33294();
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000108933d4c(uVar3);
  lVar4 = *(long *)(lVar2 + 0x10);
  func_0x000108933cec(lVar4,uVar3);
  if (lVar4 != 0) {
    func_0x000107c61574(lVar2);
    *(long *)(unaff_x20 + 0x10) = lVar4;
    return;
  }
  func_0x000103c3ac10("arshalled to ValdiPromise");
  func_0x000107c60450();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3a778);
  (*pcVar1)();
}



/* Entry: 103c3a778; end: 103c3a7e3;  */

void FUN_103c3a778(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103c332cc(0);
  func_0x000107c613fc();
  FUN_103c33294();
  FUN_103c3a7e4();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103c3a7e4; end: 103c3a85b;  */

void FUN_103c3a7e4(long param_1,undefined8 param_2,long *param_3)

{
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  FUN_103c35e68(param_2,*(undefined8 *)(*param_3 + 0x88));
  if (unaff_x21 == 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
    func_0x000108933ea8(*(undefined8 *)(param_1 + 0x10),param_3[2],param_2);
  }
  return;
}



/* Entry: 103c3a85c; end: 103c3a8f3;  */

void FUN_103c3a85c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x21;
  ulong uStack_30;
  ulong uStack_28;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) != 0) {
      uStack_28 = param_2 & 0xffffffffffffff;
      uStack_30 = param_1;
      func_0x000108933fa0(*(undefined8 *)(unaff_x20 + 0x10),&uStack_30);
      if (unaff_x21 == 0) {
        return;
      }
      func_0x000107c614ac();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3a8f4);
      (*pcVar1)();
    }
    if ((param_1 >> 0x3c & 1) != 0) {
      func_0x000108933fa0(*(undefined8 *)(unaff_x20 + 0x10),(param_2 & 0xfffffffffffffff) + 0x20);
      return;
    }
  }
  func_0x000107c602f0(FUN_103c3a8f4);
  return;
}



/* Entry: 103c3a8f4; end: 103c3a91f;  */

void FUN_103c3a8f4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000108933fa0(*(undefined8 *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103c3a920; end: 103c3a98b;  */

void FUN_103c3a920(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103c332cc(0);
  func_0x000107c61534();
  FUN_103c33294();
  FUN_103c3a98c();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103c3a98c; end: 103c3aa77;  */

void FUN_103c3a98c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 auStack_68 [24];
  
  puVar1 = &UNK_1106eda20;
  func_0x000107c613fc(&UNK_1106eda20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  FUN_103c33654(0);
  func_0x000107c613fc();
  pcVar2 = FUN_103c3ab14;
  FUN_103c33118(FUN_103c3ab14,puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar1);
  pcVar3 = pcVar2;
  FUN_103c335f8(pcVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  func_0x000108934074(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_4 + 0x10),pcVar3);
  return;
}



/* Entry: 103c3aa78; end: 103c3ab07;  */

void FUN_103c3aa78(void)

{
  FUN_103c39f8c();
  func_0x000103c3abec();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c3ab08; end: 103c3ab13;  */

void FUN_103c3ab08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7bb958);
  return;
}



/* Entry: 103c3ab14; end: 103c3ab37;  */

undefined8 FUN_103c3ab14(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return 1;
}



/* Entry: 103c3ab38; end: 103c3ab7f;  */

void FUN_103c3ab38(void)

{
  long extraout_x8;
  long *unaff_x22;
  long lVar1;
  
  func_0x000103c3ac48();
  lVar1 = *unaff_x22;
  if (*(long *)(extraout_x8 + 0x30) != 0) {
    func_0x000107c61654();
  }
                    /* WARNING: Could not recover jumptable at 0x000103c3ab7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c3ab80; end: 103c3abd3;  */

/* WARNING: Removing unreachable block (ram,0x000103c3a2e8) */

undefined8 FUN_103c3ab80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  ulong uVar4;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [16];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar3 = param_1;
  func_0x000103c3abfc();
  func_0x000103c3ac54();
  func_0x000107c5fcb8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar8 = *(long *)(lVar5 + -8);
  lVar3 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(lVar8 + 0x40),param_1,
             unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff)));
  puVar6 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  FUN_103c348f4(lVar7,0,lVar3);
  (**(code **)(lVar8 + 0x10))(puVar6,lVar7,lVar5);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0;
  func_0x000107c5fcb8(0,lVar5,uVar1,PTR___ss5ErrorWS_11034ee10);
  func_0x000107c5fcb4(puVar6,uVar2);
  (**(code **)(lVar8 + 8))(lVar7,lVar5);
  return 1;
}



/* Entry: 103c3abd4; end: 103c3ac67;  */

void FUN_103c3abd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 103c3ac68; end: 103c3ac77; -[_TtC24ValdiCallingDependencies30ValdiCallingDependencyServices rendererManagerBridgeObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3ac68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ffa918));
  return;
}



/* Entry: 103c3ac78; end: 103c3ac87; -[_TtC24ValdiCallingDependencies30ValdiCallingDependencyServices localFrameProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3ac78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ffa928));
  return;
}



/* Entry: 103c3ac88; end: 103c3ac97; -[_TtC24ValdiCallingDependencies30ValdiCallingDependencyServices opsDataProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3ac88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ffa938));
  return;
}



/* Entry: 103c3ac98; end: 103c3aca7; -[_TtC24ValdiCallingDependencies30ValdiCallingDependencyServices incomingCallRequestSubjectObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3ac98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ffa940));
  return;
}



/* Entry: 103c3aca8; end: 103c3acb7; -[_TtC24ValdiCallingDependencies30ValdiCallingDependencyServices unknownSnapchatterMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3aca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ffa948));
  return;
}



/* Entry: 103c3acb8; end: 103c3adf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c3acb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ffa910) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ffa918) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ffa920) = param_2;
  uVar1 = param_2;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ffa928) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ffa930) = param_3;
  uVar1 = param_3;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ffa938) = uVar1;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ffa940) = puVar2;
  func_0x0001003a5b88();
  *(undefined **)(unaff_x20 + _DAT_112ffa948) = puVar2;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103c3adf4; end: 103c3ae27;  */

void FUN_103c3adf4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c3ae28; end: 103c3aeef; -[_TtC24ValdiCallingDependencies30ValdiCallingDependencyServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c3ae54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c3ae74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c3ae94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c3ae78) */
/* WARNING: Removing unreachable block (ram,0x000103c3ae58) */
/* WARNING: Removing unreachable block (ram,0x000103c3ae98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3ae28(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ffa910));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffa918));
  return;
}



/* Entry: 103c3aef0; end: 103c3b043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3aef0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_112ffa978;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1b0bb0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ffa980;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103c3da48();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ffa988) = param_1;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c3b044; end: 103c3b06b; -[CollectionViewAutoPlayEventsLogger initWithDiscoverFeedEventsController:] */

void FUN_103c3b044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103c3aef0();
  return;
}



/* Entry: 103c3b06c; end: 103c3b16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3b06c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ffa978);
  puVar1 = &UNK_1106edbd0;
  func_0x000107c613fc(&UNK_1106edbd0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1106edbf8;
  func_0x000107c613fc(&UNK_1106edbf8,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  pcStack_50 = FUN_103c3dbcc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106edc10;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c3b16c; end: 103c3b2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3b16c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112ffaa60;
  func_0x0001000285a8(0x112ffaa60,&UNK_10dc68ed8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)auStack_80 - extraout_x8);
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = 0;
    FUN_103c3e0b8();
    iVar1 = *(int *)(lVar2 + 0x14);
    func_0x000107c61434(param_3);
    func_0x000107c5eea0((long)puVar5 + (long)iVar1);
    puVar3 = PTR_PTR_1126b46f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = PTR_PTR_1126b46f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *puVar5 = param_4;
    *(undefined **)((long)puVar5 + (long)*(int *)(lVar2 + 0x18)) = puVar3;
    *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar2 + 0x1c)) = 0;
    *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar2 + 0x20)) = 0;
    *(undefined **)((long)puVar5 + (long)*(int *)(lVar2 + 0x24)) = puVar4;
    *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar2 + 0x28)) = 1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar5,0,1,lVar2);
    func_0x000107c61428(param_1 + _DAT_112ffa980,auStack_80,0x21,0);
    func_0x000107c61174(param_4);
    FUN_103c3b2e8(puVar5,param_2,param_3);
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103c3b2e8; end: 103c3b463;  */

void FUN_103c3b2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112ffaa60;
  func_0x0001000285a8(0x112ffaa60,&UNK_10dc68ed8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  FUN_103c3e0b8();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000103c3e248(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000103c3e298(lVar5);
    FUN_103c3d134(puVar4,param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x000103c3e298(puVar4);
  }
  else {
    func_0x000103c3e1c8(lVar5,lVar6);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_68 = *unaff_x20;
    func_0x000103c3d24c(lVar6,param_2,param_3,uVar3);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_68;
  }
  return;
}



/* Entry: 103c3b464; end: 103c3b4d7; -[CollectionViewAutoPlayEventsLogger createTileViewOnOpenViewWithItemId:loggingInfo:] */

void FUN_103c3b464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103c3b06c(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c3b4d8; end: 103c3b5d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3b4d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ffa978);
  puVar2 = &UNK_1106edbd0;
  func_0x000107c613fc(&UNK_1106edbd0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1106edc48;
  func_0x000107c613fc(&UNK_1106edc48,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(long *)(puVar3 + 0x28) = lVar1;
  uStack_50 = 0x103c3dbf4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106edc60;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 103c3b5d8; end: 103c3b8ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3b5d8(double param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long alStack_c0 [4];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar2 = 0x112ffaa60;
  alStack_c0[2] = param_3;
  alStack_c0[3] = param_4;
  func_0x0001000285a8(0x112ffaa60,&UNK_10dc68ed8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = ((long)alStack_c0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_103c3e0b8();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar12 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar12 - extraout_x12;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ffa980;
  if (param_2 != 0) {
    alStack_c0[1] = (long)alStack_c0 - extraout_x8;
    func_0x000107c61428(param_2 + _DAT_112ffa980,auStack_a0,0x20,0);
    lVar7 = *(long *)(param_2 + lVar2);
    if (*(long *)(lVar7 + 0x10) != 0) {
      func_0x000107c61434(lVar7);
      lVar5 = alStack_c0[2];
      uVar6 = alStack_c0[3];
      func_0x000100029284(alStack_c0[2]);
      if ((uVar6 & 1) != 0) {
        func_0x000103c3e184(*(long *)(lVar7 + 0x38) + *(long *)(lVar8 + 0x48) * lVar5,lVar12);
        func_0x000103c3e1c8(lVar12,lVar10);
        func_0x000107c614a8(auStack_a0);
        func_0x000107c6142c(lVar7);
        func_0x000107c5eea0(lVar11);
        func_0x000107c5ee68(lVar10 + *(int *)(lVar4 + 0x14));
        (**(code **)(lVar9 + 8))(lVar11,lVar3);
        param_1 = param_1 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3b8a4);
          (*pcVar1)();
        }
        if (-9.223372036854778e+18 < param_1) {
          if (param_1 < 9.223372036854776e+18) {
            *(long *)(lVar10 + *(int *)(lVar4 + 0x1c)) = (long)param_1;
            func_0x000107c5ba38(*(undefined8 *)(lVar10 + *(int *)(lVar4 + 0x18)));
            lVar3 = alStack_c0[1];
            func_0x000103c3e184(lVar10,alStack_c0[1]);
            (**(code **)(lVar8 + 0x38))(lVar3,0,1,lVar4);
            func_0x000107c61428(param_2 + lVar2,auStack_a0,0x21,0);
            lVar2 = alStack_c0[3];
            func_0x000107c61434(alStack_c0[3]);
            FUN_103c3b2e8(lVar3,alStack_c0[2],lVar2);
            func_0x000107c614a8(auStack_a0);
            func_0x000107c61170(param_2);
            func_0x000103c3e20c(lVar10);
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3b8ac);
          (*pcVar1)();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3b8a8);
        (*pcVar1)();
      }
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c614a8(auStack_a0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103c3b8ac; end: 103c3b907; -[CollectionViewAutoPlayEventsLogger mediaStartsToDisplayWithItemId:] */

void FUN_103c3b8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103c3b4d8(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c3b908; end: 103c3ba7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3b908(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_103c3e0b8();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar3 - extraout_x12;
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112ffa980;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112ffa980,auStack_80,0x20,0);
    lVar4 = *(long *)(param_1 + lVar4);
    if (*(long *)(lVar4 + 0x10) != 0) {
      func_0x000107c61434(lVar4);
      func_0x000100029284(param_2);
      if ((param_3 & 1) != 0) {
        func_0x000103c3e184(*(long *)(lVar4 + 0x38) + *(long *)(lVar5 + 0x48) * param_2,lVar3);
        func_0x000103c3e1c8(lVar3,lVar2);
        func_0x000107c614a8(auStack_80);
        func_0x000107c6142c(lVar4);
        func_0x000107c4e454(*(undefined8 *)(lVar2 + *(int *)(lVar1 + 0x18)));
        func_0x000107c4e454(*(undefined8 *)(lVar2 + *(int *)(lVar1 + 0x24)));
        func_0x000107c61170(param_1);
        func_0x000103c3e20c(lVar2);
        return;
      }
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103c3ba7c; end: 103c3ba97; -[CollectionViewAutoPlayEventsLogger pausePlaybackStopwatchWithItemId:] */

void FUN_103c3ba7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103c3bcac(param_3,param_2,&UNK_1106edc98,0x103c3dc00,&UNK_1106edcb0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c3ba98; end: 103c3bb0f;  */

void FUN_103c3ba98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103c3bcac(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c3bb10; end: 103c3bc8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3bb10(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  byte abStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_103c3e0b8();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  pbVar3 = abStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)pbVar3 - extraout_x12;
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112ffa980;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112ffa980,abStack_80,0x20,0);
    lVar4 = *(long *)(param_1 + lVar4);
    if (*(long *)(lVar4 + 0x10) != 0) {
      func_0x000107c61434(lVar4);
      func_0x000100029284(param_2);
      if ((param_3 & 1) != 0) {
        func_0x000103c3e184(*(long *)(lVar4 + 0x38) + *(long *)(lVar5 + 0x48) * param_2,pbVar3);
        func_0x000103c3e1c8(pbVar3,lVar2);
        func_0x000107c614a8(abStack_80);
        func_0x000107c6142c(lVar4);
        func_0x000107c5ba38(*(undefined8 *)(lVar2 + *(int *)(lVar1 + 0x18)));
        if ((*(byte *)(lVar2 + *(int *)(lVar1 + 0x28)) & 1) == 0) {
          func_0x000107c5ba38(*(undefined8 *)(lVar2 + *(int *)(lVar1 + 0x24)));
        }
        func_0x000107c61170(param_1);
        func_0x000103c3e20c(lVar2);
        return;
      }
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c614a8(abStack_80);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103c3bc90; end: 103c3bcab; -[CollectionViewAutoPlayEventsLogger resumePlaybackStopwatchWithItemId:] */

void FUN_103c3bc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103c3bcac(param_3,param_2,&UNK_1106edce8,0x103c3dc0c,&UNK_1106edd00);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c3bcac; end: 103c3beab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3bcac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ffa978);
  puVar2 = &UNK_1106edbd0;
  func_0x000107c613fc(&UNK_1106edbd0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(param_3,0x28,7);
  *(undefined **)(param_3 + 0x10) = puVar2;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_5;
  uStack_60 = param_4;
  lStack_58 = param_3;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c61434(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c3beac; end: 103c3c6e3;  */

/* WARNING: Removing unreachable block (ram,0x000103c3c6dc) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6d4) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6cc) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6c4) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6bc) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6b4) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6b0) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6b8) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6c0) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6c8) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6d0) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6d8) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6e0) */
/* WARNING: Removing unreachable block (ram,0x000103c3c6ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3beac(double param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long *plVar14;
  long lVar15;
  double dVar16;
  long alStack_380 [3];
  undefined8 *puStack_368;
  long *plStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  undefined8 uStack_338;
  long alStack_330 [3];
  undefined *puStack_318;
  undefined1 auStack_310 [32];
  undefined1 auStack_2f0 [608];
  undefined1 auStack_90 [32];
  
  lVar4 = 0x112ffaa60;
  uStack_338 = param_5;
  func_0x0001000285a8(0x112ffaa60,&UNK_10dc68ed8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_103c3e0b8();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar15 = ((long)alStack_380 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar14 = (long *)(lVar15 - extraout_x12);
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lStack_340 = _DAT_112ffa980;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112ffa980,auStack_310,0x20,0);
    lVar9 = *(long *)(param_2 + lStack_340);
    if (*(long *)(lVar9 + 0x10) != 0) {
      func_0x000107c61434(lVar9);
      lVar5 = param_3;
      uVar6 = param_4;
      func_0x000100029284(param_3);
      if ((uVar6 & 1) != 0) {
        func_0x000103c3e184(*(long *)(lVar9 + 0x38) + *(long *)(lVar11 + 0x48) * lVar5,lVar15);
        func_0x000103c3e1c8(lVar15,plVar14);
        func_0x000107c614a8(auStack_310);
        func_0x000107c6142c(lVar9);
        uVar12 = *(undefined8 *)((long)plVar14 + (long)*(int *)(lVar4 + 0x18));
        func_0x000107c4e454(uVar12);
        uVar10 = *(undefined8 *)((long)plVar14 + (long)*(int *)(lVar4 + 0x24));
        func_0x000107c4e454(uVar10);
        func_0x000107c3cf50(uVar12);
        param_1 = param_1 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c3c694);
          (*pcVar3)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c3c698);
          (*pcVar3)();
        }
        dVar16 = 9.223372036854776e+18;
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c3c69c);
          (*pcVar3)();
        }
        func_0x000107c3cf50(uVar10);
        dVar16 = dVar16 * 1000.0;
        if ((ulong)ABS(dVar16) < 0x7ff0000000000000) {
          if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103c3c6a4);
            (*pcVar3)();
          }
          if (dVar16 < 9.223372036854776e+18) {
            lStack_348 = (long)param_1;
            lStack_358 = (long)dVar16;
            lStack_350 = lStack_348 - lStack_358;
            if (!SBORROW8(lStack_348,lStack_358)) {
              lVar11 = 0x112d4b5e8;
              alStack_380[0] = (long)alStack_380 - extraout_x8;
              alStack_380[1] = param_3;
              alStack_380[2] = param_4;
              func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
              puVar7 = auStack_2f0;
              func_0x000107c61534();
              *(undefined8 *)(lVar11 + 0x18) = 0x18;
              *(undefined8 *)(lVar11 + 0x10) = 0xc;
              ppuVar13 = &PTR____CFConstantStringClassReference_110e72518;
              func_0x000107c5faec();
              puVar8 = puVar7;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110e72518);
              *(undefined8 *)(lVar11 + 0x20) = ppuVar13;
              puStack_368 = (undefined8 *)(lVar11 + 0x20);
              *(undefined1 **)(lVar11 + 0x28) = puVar7;
              lVar9 = *plVar14;
              lVar15 = *(long *)(lVar9 + _DAT_11306e988);
              plStack_360 = plVar14;
              if (lVar15 != 0) {
                func_0x000107c49820();
              }
              puVar2 = PTR___sSiN_11034deb0;
              *(undefined **)(lVar11 + 0x48) = PTR___sSiN_11034deb0;
              *(long *)(lVar11 + 0x30) = lVar15;
              ppuVar13 = &PTR____CFConstantStringClassReference_110ea1ad8;
              func_0x000107c5faec();
              puVar7 = puVar8;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110ea1ad8);
              *(undefined ***)(lVar11 + 0x50) = ppuVar13;
              *(undefined1 **)(lVar11 + 0x58) = puVar8;
              uVar10 = *(undefined8 *)(lVar9 + _DAT_11306e990);
              *(undefined **)(lVar11 + 0x78) = puVar2;
              *(undefined8 *)(lVar11 + 0x60) = uVar10;
              ppuVar13 = &PTR____CFConstantStringClassReference_110e02998;
              func_0x000107c5faec();
              puVar8 = puVar7;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110e02998);
              *(undefined ***)(lVar11 + 0x80) = ppuVar13;
              *(undefined1 **)(lVar11 + 0x88) = puVar7;
              puVar2 = PTR___sSSN_11034da80;
              uVar10 = *(undefined8 *)(lVar9 + _DAT_11306e9a0);
              uVar12 = ((undefined8 *)(lVar9 + _DAT_11306e9a0))[1];
              *(undefined **)(lVar11 + 0xa8) = PTR___sSSN_11034da80;
              *(undefined8 *)(lVar11 + 0x90) = uVar10;
              *(undefined8 *)(lVar11 + 0x98) = uVar12;
              ppuVar13 = &PTR____CFConstantStringClassReference_110f42198;
              func_0x000107c61434();
              func_0x000107c5faec();
              puVar7 = puVar8;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f42198);
              *(undefined ***)(lVar11 + 0xb0) = ppuVar13;
              *(undefined1 **)(lVar11 + 0xb8) = puVar8;
              uVar12 = *(undefined8 *)(lVar9 + _DAT_11306e9a8);
              lVar15 = ((undefined8 *)(lVar9 + _DAT_11306e9a8))[1];
              *(undefined **)(lVar11 + 0xd8) = puVar2;
              uVar10 = 0;
              if (lVar15 != 0) {
                uVar10 = uVar12;
              }
              lVar5 = -0x2000000000000000;
              if (lVar15 != 0) {
                lVar5 = lVar15;
              }
              *(undefined8 *)(lVar11 + 0xc0) = uVar10;
              *(long *)(lVar11 + 200) = lVar5;
              ppuVar13 = &PTR____CFConstantStringClassReference_110f41ed8;
              func_0x000107c61434();
              func_0x000107c5faec();
              puVar8 = puVar7;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41ed8);
              *(undefined ***)(lVar11 + 0xe0) = ppuVar13;
              *(undefined1 **)(lVar11 + 0xe8) = puVar7;
              uVar12 = *(undefined8 *)(lVar9 + _DAT_11306e9b0);
              lVar15 = ((undefined8 *)(lVar9 + _DAT_11306e9b0))[1];
              *(undefined **)(lVar11 + 0x108) = puVar2;
              uVar10 = 0;
              if (lVar15 != 0) {
                uVar10 = uVar12;
              }
              lVar5 = -0x2000000000000000;
              if (lVar15 != 0) {
                lVar5 = lVar15;
              }
              *(undefined8 *)(lVar11 + 0xf0) = uVar10;
              *(long *)(lVar11 + 0xf8) = lVar5;
              ppuVar13 = &PTR____CFConstantStringClassReference_110f42bd8;
              func_0x000107c61434();
              func_0x000107c5faec();
              puVar7 = puVar8;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f42bd8);
              plVar14 = plStack_360;
              *(undefined ***)(lVar11 + 0x110) = ppuVar13;
              *(undefined1 **)(lVar11 + 0x118) = puVar8;
              puVar2 = PTR___sSiN_11034deb0;
              uVar10 = *(undefined8 *)((long)plStack_360 + (long)*(int *)(lVar4 + 0x1c));
              *(undefined **)(lVar11 + 0x138) = PTR___sSiN_11034deb0;
              *(undefined8 *)(lVar11 + 0x120) = uVar10;
              ppuVar13 = &PTR____CFConstantStringClassReference_110f41fb8;
              func_0x000107c5faec();
              puVar8 = puVar7;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41fb8);
              *(undefined ***)(lVar11 + 0x140) = ppuVar13;
              *(undefined1 **)(lVar11 + 0x148) = puVar7;
              *(undefined **)(lVar11 + 0x168) = puVar2;
              *(long *)(lVar11 + 0x150) = lStack_348;
              ppuVar13 = &PTR____CFConstantStringClassReference_110f42ab8;
              func_0x000107c5faec();
              puVar7 = puVar8;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f42ab8);
              *(undefined ***)(lVar11 + 0x170) = ppuVar13;
              *(undefined1 **)(lVar11 + 0x178) = puVar8;
              *(undefined **)(lVar11 + 0x198) = puVar2;
              *(undefined8 *)(lVar11 + 0x180) = uStack_338;
              ppuVar13 = &PTR____CFConstantStringClassReference_110eb3738;
              func_0x000107c5faec();
              puVar8 = puVar7;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110eb3738);
              *(undefined ***)(lVar11 + 0x1a0) = ppuVar13;
              *(undefined1 **)(lVar11 + 0x1a8) = puVar7;
              uVar12 = *(undefined8 *)(lVar9 + _DAT_11306e9c0);
              lVar4 = ((undefined8 *)(lVar9 + _DAT_11306e9c0))[1];
              *(undefined **)(lVar11 + 0x1c8) = PTR___sSSN_11034da80;
              uVar10 = 0;
              if (lVar4 != 0) {
                uVar10 = uVar12;
              }
              lVar15 = -0x2000000000000000;
              if (lVar4 != 0) {
                lVar15 = lVar4;
              }
              *(undefined8 *)(lVar11 + 0x1b0) = uVar10;
              *(long *)(lVar11 + 0x1b8) = lVar15;
              ppuVar13 = &PTR____CFConstantStringClassReference_110f41f78;
              func_0x000107c61434();
              func_0x000107c5faec();
              puVar7 = puVar8;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41f78);
              *(undefined ***)(lVar11 + 0x1d0) = ppuVar13;
              *(undefined1 **)(lVar11 + 0x1d8) = puVar8;
              *(undefined **)(lVar11 + 0x1f8) = puVar2;
              *(long *)(lVar11 + 0x1e0) = lStack_350;
              ppuVar13 = &PTR____CFConstantStringClassReference_110f41f98;
              func_0x000107c5faec();
              puVar8 = puVar7;
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41f98);
              *(undefined ***)(lVar11 + 0x200) = ppuVar13;
              *(undefined1 **)(lVar11 + 0x208) = puVar7;
              *(undefined **)(lVar11 + 0x228) = puVar2;
              *(long *)(lVar11 + 0x210) = lStack_358;
              ppuVar13 = &PTR____CFConstantStringClassReference_110f41cb8;
              func_0x000107c5faec();
              func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41cb8);
              *(undefined ***)(lVar11 + 0x230) = ppuVar13;
              *(undefined1 **)(lVar11 + 0x238) = puVar8;
              uVar12 = *(undefined8 *)(lVar9 + _DAT_11306e9c8);
              uVar1 = ((undefined8 *)(lVar9 + _DAT_11306e9c8))[1];
              uVar10 = 0x112d35ff8;
              func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
              *(undefined8 *)(lVar11 + 600) = uVar10;
              *(undefined8 *)(lVar11 + 0x240) = uVar12;
              *(undefined8 *)(lVar11 + 0x248) = uVar1;
              func_0x000107c61434(uVar1);
              lVar15 = lVar11;
              func_0x000100214a84();
              func_0x000107c61588(lVar11);
              uVar10 = 0x112d4b5f0;
              func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
              uVar12 = 0xc;
              func_0x000107c61408(puStack_368,0xc,uVar10);
              lVar4 = _DAT_11306e9b8;
              if (*(long *)(lVar9 + _DAT_11306e9b8) != -1) {
                ppuVar13 = &PTR____CFConstantStringClassReference_110dcad78;
                func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcad78);
                func_0x000107c61170(&PTR____CFConstantStringClassReference_110dcad78);
                alStack_330[0] = *(long *)(lVar9 + lVar4);
                puStack_318 = PTR___sSiN_11034deb0;
                func_0x000100102924(alStack_330,auStack_310);
                lVar4 = lVar15;
                func_0x000107c61558(lVar15);
                alStack_330[0] = lVar15;
                func_0x0001001029e8(auStack_310,ppuVar13,uVar12,lVar4);
                func_0x000107c6142c(uVar12);
                lVar15 = alStack_330[0];
              }
              lVar4 = *(long *)(param_2 + _DAT_112ffa988);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar4 != 0) {
                uVar10 = 0xd000000000000022;
                func_0x000107c5fadc(0xd000000000000022,0x800000010dc68e50);
                lVar11 = lVar15;
                func_0x00010018cc3c(lVar15);
                lVar9 = lVar11;
                func_0x000107c5f9dc();
                func_0x000107c6142c(lVar11);
                func_0x000107c41dbc(lVar4);
                func_0x000107c615e8(lVar4);
                func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41778);
                func_0x000107c61170(uVar10);
                func_0x000107c61170(lVar9);
              }
              func_0x000107c61428(param_2 + lStack_340,auStack_310,0x21,0);
              lVar4 = alStack_380[0];
              FUN_103c3d134(alStack_380[0],alStack_380[1],alStack_380[2]);
              func_0x000107c614a8(auStack_310);
              func_0x000107c61170(param_2);
              func_0x000103c3e298(lVar4);
              func_0x000107c6142c(lVar15);
              func_0x000103c3e20c(plVar14);
              return;
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103c3c6ac);
            (*pcVar3)();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c3c6a8);
          (*pcVar3)();
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103c3c6a0);
        (*pcVar3)();
      }
      func_0x000107c6142c(lVar9);
    }
    func_0x000107c614a8(auStack_310);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103c3c6e4; end: 103c3c743; -[CollectionViewAutoPlayEventsLogger logStoryFeedTileViewOnCloseViewWithItemId:totalStallCount:] */

void FUN_103c3c6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x000103c3bd9c(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c3c744; end: 103c3c963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3c744(long param_1,long param_2,ulong param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte abStack_a0 [8];
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112ffaa60;
  lStack_98 = param_2;
  func_0x0001000285a8(0x112ffaa60,&UNK_10dc68ed8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar6 = abStack_a0 + -extraout_x8;
  lVar2 = 0;
  FUN_103c3e0b8();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)pbVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ffa980;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112ffa980,auStack_90,0x20,0);
    lVar5 = *(long *)(param_1 + lVar1);
    if (*(long *)(lVar5 + 0x10) != 0) {
      func_0x000107c61434(lVar5);
      lVar3 = lStack_98;
      uVar4 = param_3;
      func_0x000100029284(lStack_98);
      if ((uVar4 & 1) != 0) {
        func_0x000103c3e184(*(long *)(lVar5 + 0x38) + *(long *)(lVar9 + 0x48) * lVar3,lVar8);
        func_0x000103c3e1c8(lVar8,lVar7);
        func_0x000107c614a8(auStack_90);
        func_0x000107c6142c(lVar5);
        *(byte *)(lVar7 + *(int *)(lVar2 + 0x28)) = param_4 & 1;
        if ((param_4 & 1) == 0) {
          func_0x000107c5ba38(*(undefined8 *)(lVar7 + *(int *)(lVar2 + 0x24)));
        }
        else {
          func_0x000107c4e454();
        }
        func_0x000103c3e184(lVar7,pbVar6);
        (**(code **)(lVar9 + 0x38))(pbVar6,0,1,lVar2);
        func_0x000107c61428(param_1 + lVar1,auStack_90,0x21,0);
        func_0x000107c61434(param_3);
        FUN_103c3b2e8(pbVar6,lStack_98,param_3);
        func_0x000107c614a8(auStack_90);
        func_0x000107c61170(param_1);
        func_0x000103c3e20c(lVar7);
        return;
      }
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c614a8(auStack_90);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103c3c964; end: 103c3c97f; -[CollectionViewAutoPlayEventsLogger toggleMuteStopwatchesWithItemId:muted:] */

void FUN_103c3c964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103c3c980(param_3,param_2,param_4,&UNK_1106edd88,0x103c3dc28,&UNK_1106edda0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c3c980; end: 103c3cf5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3c980(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar3 = &puStack_90;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ffa978);
  puVar2 = &UNK_1106edbd0;
  func_0x000107c613fc(&UNK_1106edbd0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(param_4,0x29,7);
  *(undefined **)(param_4 + 0x10) = puVar2;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  *(undefined1 *)(param_4 + 0x28) = param_3;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  uStack_78 = param_6;
  uStack_70 = param_5;
  lStack_68 = param_4;
  func_0x000107c60bc4(&puStack_90);
  lVar1 = lStack_68;
  func_0x000107c61434(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c3cf5c; end: 103c3cf77; -[CollectionViewAutoPlayEventsLogger logFeedItemActionCriticalSoundOnOffWithItemId:muted:] */

void FUN_103c3cf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103c3c980(param_3,param_2,param_4,&UNK_1106eddd8,FUN_103c3dc70,&UNK_1106eddf0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c3cf78; end: 103c3d003;  */

void FUN_103c3cf78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103c3c980(param_3,param_2,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c3d004; end: 103c3d063; -[CollectionViewAutoPlayEventsLogger init] */

void FUN_103c3d004(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CollectionViewAutoPlayLoggingServicesImplementation.CollectionViewAutoPlayEventsLogger"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3d030);
  (*pcVar1)();
}



/* Entry: 103c3d064; end: 103c3d0ab; -[CollectionViewAutoPlayEventsLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3d064(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ffa988));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ffa978));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ffa980));
  return;
}



/* Entry: 103c3d0ac; end: 103c3d133;  */

void FUN_103c3d0ac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  FUN_103c3e0b8();
  func_0x000103c3e1c8(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c3d134);
  (*pcVar2)();
}



/* Entry: 103c3d134; end: 103c3d377;  */

void FUN_103c3d134(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    FUN_103c3e0b8();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000103c3d378();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    FUN_103c3e0b8();
    lVar6 = *(long *)(lVar4 + -8);
    func_0x000103c3e1c8(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    func_0x000103c3d878(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000103c3d238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 103c3d378; end: 103c3dbcb;  */

void FUN_103c3d378(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = 0;
  FUN_103c3e0b8();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x0001000285a8(0x112ffaa68,&UNK_10dc68ee0);
  lVar13 = *unaff_x20;
  lVar6 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c61574(lVar13);
LAB_103c3d548:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar13 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar13) || (lVar1 + uVar8 * 8 <= lVar6 + 0x40U)) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar14 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
  if (uVar8 == 0) goto LAB_103c3d4a4;
  do {
    uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar8 = uVar8 - 1 & uVar8;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar7 + 0x48) * uVar10;
      func_0x000103c3e184(*(long *)(lVar13 + 0x38) + lVar12,
                          &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x000103c3e1c8(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar6 + 0x38) + lVar12);
      func_0x000107c61434(uVar4);
      if (uVar8 != 0) break;
LAB_103c3d4a4:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103c3d570);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar13);
          goto LAB_103c3d548;
        }
        uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar8 == 0);
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar14 = lVar11;
    }
  } while( true );
}



/* Entry: 103c3dbcc; end: 103c3dc37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3dbcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0x112ffaa60;
  func_0x0001000285a8(0x112ffaa60,&UNK_10dc68ed8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_80 - extraout_x8);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar6 = 0;
    FUN_103c3e0b8();
    iVar4 = *(int *)(lVar6 + 0x14);
    func_0x000107c61434(uVar1);
    func_0x000107c5eea0((long)puVar9 + (long)iVar4);
    puVar7 = PTR_PTR_1126b46f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar8 = PTR_PTR_1126b46f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *puVar9 = uVar3;
    *(undefined **)((long)puVar9 + (long)*(int *)(lVar6 + 0x18)) = puVar7;
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar6 + 0x1c)) = 0;
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar6 + 0x20)) = 0;
    *(undefined **)((long)puVar9 + (long)*(int *)(lVar6 + 0x24)) = puVar8;
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar6 + 0x28)) = 1;
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar9,0,1,lVar6);
    func_0x000107c61428(lVar5 + _DAT_112ffa980,auStack_80,0x21,0);
    func_0x000107c61174(uVar3);
    FUN_103c3b2e8(puVar9,uVar2,uVar1);
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 103c3dc38; end: 103c3dc6f;  */

void FUN_103c3dc38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103c3dc70; end: 103c3dc7f;  */

/* WARNING: Removing unreachable block (ram,0x000103c3cf54) */
/* WARNING: Removing unreachable block (ram,0x000103c3cf4c) */
/* WARNING: Removing unreachable block (ram,0x000103c3cf44) */
/* WARNING: Removing unreachable block (ram,0x000103c3cf48) */
/* WARNING: Removing unreachable block (ram,0x000103c3cf50) */
/* WARNING: Removing unreachable block (ram,0x000103c3cf58) */
/* WARNING: Removing unreachable block (ram,0x000103c3cf3c) */
/* WARNING: Removing unreachable block (ram,0x000103c3cf40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3dc70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long extraout_x8;
  undefined8 uVar14;
  long extraout_x12;
  long unaff_x20;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 *puStack_220;
  long lStack_218;
  long *plStack_210;
  undefined1 auStack_208 [368];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  uVar13 = *(ulong *)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x28);
  lVar6 = 0;
  FUN_103c3e0b8();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar17 = (long)&puStack_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(lVar7 + 0x10,auStack_80,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112ffa980;
  if (lVar7 != 0) {
    func_0x000107c61428(lVar7 + _DAT_112ffa980,auStack_98,0x20,0);
    lVar6 = *(long *)(lVar7 + lVar6);
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c61434(lVar6);
      lVar8 = lVar9;
      uVar10 = uVar13;
      func_0x000100029284(lVar9);
      if ((uVar10 & 1) != 0) {
        func_0x000103c3e184(*(long *)(lVar6 + 0x38) + *(long *)(lVar15 + 0x48) * lVar8,lVar17);
        func_0x000103c3e1c8(lVar17,(long *)(lVar17 - extraout_x12));
        func_0x000107c614a8(auStack_98);
        func_0x000107c6142c(lVar6);
        lStack_218 = 0x92;
        if ((bVar3 & 1) != 0) {
          lStack_218 = 0x93;
        }
        lVar6 = 0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        puVar11 = auStack_208;
        func_0x000107c61534();
        *(undefined8 *)(lVar6 + 0x18) = 0xe;
        *(undefined8 *)(lVar6 + 0x10) = 7;
        ppuVar16 = &PTR____CFConstantStringClassReference_110ed79b8;
        plStack_210 = (long *)(lVar17 - extraout_x12);
        func_0x000107c5faec();
        puVar12 = puVar11;
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110ed79b8);
        puStack_220 = (undefined8 *)(lVar6 + 0x20);
        *puStack_220 = ppuVar16;
        puVar4 = PTR___sSiN_11034deb0;
        *(undefined **)(lVar6 + 0x48) = PTR___sSiN_11034deb0;
        *(undefined1 **)(lVar6 + 0x28) = puVar11;
        *(undefined8 *)(lVar6 + 0x30) = 5;
        ppuVar16 = &PTR____CFConstantStringClassReference_110daf5b8;
        func_0x000107c5faec();
        puVar11 = puVar12;
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110daf5b8);
        *(undefined ***)(lVar6 + 0x50) = ppuVar16;
        *(undefined1 **)(lVar6 + 0x58) = puVar12;
        *(undefined **)(lVar6 + 0x78) = puVar4;
        *(long *)(lVar6 + 0x60) = lStack_218;
        ppuVar16 = &PTR____CFConstantStringClassReference_110e72518;
        lStack_218 = lVar9;
        func_0x000107c5faec();
        puVar12 = puVar11;
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110e72518);
        *(undefined ***)(lVar6 + 0x80) = ppuVar16;
        *(undefined1 **)(lVar6 + 0x88) = puVar11;
        lVar15 = *plStack_210;
        lVar9 = *(long *)(lVar15 + _DAT_11306e988);
        if (lVar9 != 0) {
          func_0x000107c49820();
        }
        puVar4 = PTR___sSiN_11034deb0;
        *(undefined **)(lVar6 + 0xa8) = PTR___sSiN_11034deb0;
        *(long *)(lVar6 + 0x90) = lVar9;
        ppuVar16 = &PTR____CFConstantStringClassReference_110ea1ad8;
        func_0x000107c5faec();
        puVar11 = puVar12;
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110ea1ad8);
        *(undefined ***)(lVar6 + 0xb0) = ppuVar16;
        *(undefined1 **)(lVar6 + 0xb8) = puVar12;
        uVar14 = *(undefined8 *)(lVar15 + _DAT_11306e990);
        *(undefined **)(lVar6 + 0xd8) = puVar4;
        *(undefined8 *)(lVar6 + 0xc0) = uVar14;
        ppuVar16 = &PTR____CFConstantStringClassReference_110e02998;
        func_0x000107c5faec();
        puVar12 = puVar11;
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110e02998);
        *(undefined ***)(lVar6 + 0xe0) = ppuVar16;
        *(undefined1 **)(lVar6 + 0xe8) = puVar11;
        puVar4 = PTR___sSSN_11034da80;
        *(undefined **)(lVar6 + 0x108) = PTR___sSSN_11034da80;
        *(long *)(lVar6 + 0xf0) = lStack_218;
        *(ulong *)(lVar6 + 0xf8) = uVar13;
        ppuVar16 = &PTR____CFConstantStringClassReference_110eb3738;
        func_0x000107c61434(uVar13);
        func_0x000107c5faec();
        puVar11 = puVar12;
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110eb3738);
        plVar5 = plStack_210;
        *(undefined ***)(lVar6 + 0x110) = ppuVar16;
        *(undefined1 **)(lVar6 + 0x118) = puVar12;
        uVar1 = *(undefined8 *)(lVar15 + _DAT_11306e9c0);
        lVar9 = ((undefined8 *)(lVar15 + _DAT_11306e9c0))[1];
        *(undefined **)(lVar6 + 0x138) = puVar4;
        uVar14 = 0;
        if (lVar9 != 0) {
          uVar14 = uVar1;
        }
        lVar17 = -0x2000000000000000;
        if (lVar9 != 0) {
          lVar17 = lVar9;
        }
        *(undefined8 *)(lVar6 + 0x120) = uVar14;
        *(long *)(lVar6 + 0x128) = lVar17;
        ppuVar16 = &PTR____CFConstantStringClassReference_110f41cb8;
        func_0x000107c61434();
        func_0x000107c5faec();
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41cb8);
        *(undefined ***)(lVar6 + 0x140) = ppuVar16;
        *(undefined1 **)(lVar6 + 0x148) = puVar11;
        uVar1 = *(undefined8 *)(lVar15 + _DAT_11306e9c8);
        uVar2 = ((undefined8 *)(lVar15 + _DAT_11306e9c8))[1];
        uVar14 = 0x112d35ff8;
        func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
        *(undefined8 *)(lVar6 + 0x168) = uVar14;
        *(undefined8 *)(lVar6 + 0x150) = uVar1;
        *(undefined8 *)(lVar6 + 0x158) = uVar2;
        func_0x000107c61434(uVar2);
        lVar9 = lVar6;
        func_0x000100214a84(lVar6);
        func_0x000107c61588(lVar6);
        uVar14 = 0x112d4b5f0;
        func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
        func_0x000107c61408(puStack_220,7,uVar14);
        lVar6 = *(long *)(lVar7 + _DAT_112ffa988);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c6142c(lVar9);
        }
        else {
          uVar14 = 0xd000000000000022;
          func_0x000107c5fadc(0xd000000000000022,0x800000010dc68e50);
          lVar15 = lVar9;
          func_0x00010018cc3c(lVar9);
          func_0x000107c6142c(lVar9);
          lVar9 = lVar15;
          func_0x000107c5f9dc(lVar15,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                              PTR___ss11AnyHashableVSHsWP_11034e450);
          func_0x000107c6142c(lVar15);
          func_0x000107c41dbc(lVar6);
          func_0x000107c615e8(lVar6);
          func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41518);
          func_0x000107c61170(uVar14);
          func_0x000107c61170(lVar9);
        }
        func_0x000107c61170(lVar7);
        func_0x000103c3e20c(plVar5);
        return;
      }
      func_0x000107c6142c(lVar6);
    }
    func_0x000107c614a8(auStack_98);
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 103c3dc80; end: 103c3dc9f;  */

void FUN_103c3dc80(void)

{
  func_0x000107c61168(&PTR_PTR_1129480d8);
  return;
}



/* Entry: 103c3dca0; end: 103c3dd7f;  */

long * FUN_103c3dca0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    iVar2 = *(int *)(param_3 + 0x14);
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61174(lVar5);
    (*pcVar7)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    iVar2 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 0x24);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar6 = *(undefined8 *)((long)param_2 + (long)iVar2);
    *(undefined8 *)((long)param_1 + (long)iVar2) = uVar6;
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    func_0x000107c61174();
    func_0x000107c61174(uVar6);
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c(lVar5);
  }
  return param_1;
}


