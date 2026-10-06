/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101164de8; end: 101164e57;  */

void FUN_101164de8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x000107c5fe14(lVar2,PTR___sSiN_11034deb0,PTR___sSiSHsWP_11034dec0);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    lStack_38 = lVar1;
    do {
      FUN_100f73104(auStack_40,*puVar3);
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 101164e58; end: 101164ea3;  */

undefined8 FUN_101164e58(long param_1)

{
  code *pcVar1;
  long lStack_18;
  
  if (param_1 + 1U < 10) {
    return *(undefined8 *)(&UNK_10d926ba0 + (param_1 + 1U) * 8);
  }
  lStack_18 = param_1;
  func_0x000107c60614(&UNK_1106a3440,&lStack_18,&UNK_1106a3440,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101164ea4);
  (*pcVar1)();
}



/* Entry: 101164ea4; end: 101164ec7;  */

void FUN_101164ea4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101164ec8; end: 101164ee7;  */

void FUN_101164ec8(void)

{
  func_0x000107c61168(&PTR_PTR_112d60730);
  return;
}



/* Entry: 101164ee8; end: 101164eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101164ee8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 0x60) = 0;
    func_0x000107c61170(uVar3);
    lVar1 = _DAT_112f20e80;
    lVar4 = *(long *)(lVar2 + 0x10);
    func_0x000107c61428(lVar4 + _DAT_112f20e80,auStack_60,0,0);
    lVar4 = lVar4 + lVar1;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c4c338();
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101164ef0; end: 101164f33;  */

void FUN_101164ef0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d603a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000103a2db6c(0xff);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112d603a0 = puVar2;
  return;
}



/* Entry: 101164f34; end: 101164f3b;  */

void FUN_101164f34(long param_1,long param_2)

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



/* Entry: 101164f3c; end: 101165357;  */

/* WARNING: Possible PIC construction at 0x00010116503c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011650b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101165170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011652e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011652f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101165304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101165314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011650f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101165318) */
/* WARNING: Removing unreachable block (ram,0x000101165308) */
/* WARNING: Removing unreachable block (ram,0x0001011652f8) */
/* WARNING: Removing unreachable block (ram,0x0001011652e8) */
/* WARNING: Removing unreachable block (ram,0x000101165174) */
/* WARNING: Removing unreachable block (ram,0x0001011650b8) */
/* WARNING: Removing unreachable block (ram,0x000101165124) */
/* WARNING: Removing unreachable block (ram,0x0001011650d8) */
/* WARNING: Removing unreachable block (ram,0x000101165138) */
/* WARNING: Removing unreachable block (ram,0x000101165040) */
/* WARNING: Removing unreachable block (ram,0x0001011650e4) */
/* WARNING: Removing unreachable block (ram,0x000101165058) */
/* WARNING: Removing unreachable block (ram,0x0001011650f8) */

void FUN_101164f3c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8(PTR_PTR_1126ae568);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b0648;
  func_0x000107c610f8(PTR_PTR_1126b0648);
  func_0x000107c46e04();
  if (lRam0000000112d60880 != -1) {
    func_0x000107c61568(0x112d60880,0x101165648);
  }
  func_0x000107c4d664(puVar2);
  func_0x0001011656ac();
  func_0x000107c3d89c();
  func_0x000107c51738(0x4000000000000000,0x4000000000000000,0,0x4000000000000000,puVar3);
  func_0x000107c5d200();
  func_0x000107c61180();
  func_0x000107c55b70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 101165358; end: 101165497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101165358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar1 = _DAT_112d607e0;
  if (lRam0000000112d60880 != -1) {
    func_0x000107c61568(0x112d60880,0x101165648);
  }
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x0001011656ac();
  lVar1 = _DAT_112d607e0;
  func_0x000107c3d89c();
  func_0x000107c51738(0x4000000000000000,0x4000000000000000,0,0x4000000000000000,
                      *(undefined8 *)(puVar3 + lVar1));
  puVar5 = puVar3;
  func_0x000107c5d200(puVar3);
  func_0x000107c61180();
  func_0x000107c55b70();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 101165498; end: 1011654b7; -[_TtC29MapFriendPickerImplementation10FriendCell initWithFrame:] */

void FUN_101165498(void)

{
  FUN_101165358();
  return;
}



/* Entry: 1011654b8; end: 10116559f;  */

/* WARNING: Possible PIC construction at 0x000101165518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116551c) */
/* WARNING: Removing unreachable block (ram,0x00010116552c) */
/* WARNING: Removing unreachable block (ram,0x000101165558) */
/* WARNING: Removing unreachable block (ram,0x000101165534) */
/* WARNING: Removing unreachable block (ram,0x000101165578) */

void FUN_1011654b8(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    func_0x000107c61174();
    func_0x000107c3e544();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c5faec();
      param_1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1011655a0; end: 1011655e3; -[_TtC29MapFriendPickerImplementation10FriendCell prepareForReuse] */

/* WARNING: Possible PIC construction at 0x0001011655d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011655d4) */

void FUN_1011655a0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000107c5d200();
  func_0x000107c61180();
  func_0x000107c529bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011655e4; end: 101165617;  */

void FUN_1011655e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101165618; end: 101165627; -[_TtC29MapFriendPickerImplementation10FriendCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101165618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d607e0));
  return;
}



/* Entry: 101165628; end: 101165647;  */

void FUN_101165628(void)

{
  func_0x000107c61168(&PTR_PTR_112d60828);
  return;
}



/* Entry: 101165648; end: 10116577f;  */

void FUN_101165648(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000108ffef38(0,puVar1,1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uRam0000000112d60888 = uVar2;
  return;
}



/* Entry: 101165780; end: 1011657a7;  */

/* WARNING: Possible PIC construction at 0x000101165518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116551c) */
/* WARNING: Removing unreachable block (ram,0x00010116552c) */
/* WARNING: Removing unreachable block (ram,0x000101165558) */
/* WARNING: Removing unreachable block (ram,0x000101165534) */
/* WARNING: Removing unreachable block (ram,0x000101165578) */

void FUN_101165780(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    func_0x000107c61174();
    func_0x000107c3e544();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c5faec();
      param_1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1011657a8; end: 101165adb;  */

undefined1  [16] FUN_1011657a8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef28650);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef28530);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101165874);
  (*pcVar1)();
}



/* Entry: 101165adc; end: 101165aff;  */

undefined1  [16] FUN_101165adc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x65766173;
  func_0x000107c5fadc(0x65766173,0xe400000000000000);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef28530);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011660e8);
  (*pcVar1)();
}



/* Entry: 101165b00; end: 101165d63;  */

undefined1  [16] FUN_101165b00(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe6;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef28550);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef28530);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101165bcc);
  (*pcVar1)();
}



/* Entry: 101165d64; end: 101165dc7;  */

undefined1  [16] FUN_101165d64(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x796c746e65636572;
  func_0x000107c5fadc(0x796c746e65636572,0xee0064656464615f);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef28530);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011660e8);
  (*pcVar1)();
}



/* Entry: 101165dc8; end: 10116602b;  */

undefined1  [16] FUN_101165dc8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28510);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef28530);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101165e94);
  (*pcVar1)();
}



/* Entry: 10116602c; end: 101166037;  */

undefined1  [16] FUN_10116602c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6b6f;
  func_0x000107c5fadc(0x6b6f,0xe200000000000000);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef28530);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011660e8);
  (*pcVar1)();
}



/* Entry: 101166038; end: 10116667f;  */

undefined1  [16] FUN_101166038(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef28530);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011660e8);
  (*pcVar1)();
}



/* Entry: 101166680; end: 10116668b; -[SCMapFriendPickerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101166680(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60890;
  func_0x000107c61428(param_1 + _DAT_112d60890,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10116668c; end: 101166697; -[SCMapFriendPickerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116668c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60890;
  func_0x000107c61428(param_1 + _DAT_112d60890,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101166698; end: 1011666a3; -[SCMapFriendPickerEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101166698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60898;
  func_0x000107c61428(param_1 + _DAT_112d60898,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011666a4; end: 1011666af; -[SCMapFriendPickerEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011666a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60898;
  func_0x000107c61428(param_1 + _DAT_112d60898,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011666b0; end: 1011666bb; -[SCMapFriendPickerEntryPoint locationSharingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011666b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d608a0;
  func_0x000107c61428(param_1 + _DAT_112d608a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011666bc; end: 1011666c7; -[SCMapFriendPickerEntryPoint setLocationSharingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011666bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d608a0;
  func_0x000107c61428(param_1 + _DAT_112d608a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011666c8; end: 1011666d3; -[SCMapFriendPickerEntryPoint mapPeopleServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011666c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d608a8;
  func_0x000107c61428(param_1 + _DAT_112d608a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011666d4; end: 1011666df; -[SCMapFriendPickerEntryPoint setMapPeopleServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011666d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d608a8;
  func_0x000107c61428(param_1 + _DAT_112d608a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011666e0; end: 1011666eb; -[SCMapFriendPickerEntryPoint bitmojiFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011666e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d608b0;
  func_0x000107c61428(param_1 + _DAT_112d608b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011666ec; end: 1011666f7; -[SCMapFriendPickerEntryPoint setBitmojiFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011666ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d608b0;
  func_0x000107c61428(param_1 + _DAT_112d608b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011666f8; end: 101166703; -[SCMapFriendPickerEntryPoint mapPersonLocationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011666f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d608b8;
  func_0x000107c61428(param_1 + _DAT_112d608b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101166704; end: 10116670f; -[SCMapFriendPickerEntryPoint setMapPersonLocationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101166704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d608b8;
  func_0x000107c61428(param_1 + _DAT_112d608b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101166710; end: 10116671b; -[SCMapFriendPickerEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101166710(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d608c0;
  func_0x000107c61428(param_1 + _DAT_112d608c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10116671c; end: 101166727; -[SCMapFriendPickerEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116671c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d608c0;
  func_0x000107c61428(param_1 + _DAT_112d608c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101166728; end: 101166733; -[SCMapFriendPickerEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101166728(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d608c8;
  func_0x000107c61428(param_1 + _DAT_112d608c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101166734; end: 10116673f; -[SCMapFriendPickerEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101166734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d608c8;
  func_0x000107c61428(param_1 + _DAT_112d608c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101166740; end: 10116674b; -[SCMapFriendPickerEntryPoint customAppThemeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101166740(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d608d0;
  func_0x000107c61428(param_1 + _DAT_112d608d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10116674c; end: 10116678f;  */

void FUN_10116674c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101166790; end: 10116679b; -[SCMapFriendPickerEntryPoint setCustomAppThemeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101166790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d608d0;
  func_0x000107c61428(param_1 + _DAT_112d608d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10116679c; end: 1011667ef;  */

void FUN_10116679c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011667f0; end: 101166b67;  */

/* WARNING: Possible PIC construction at 0x000101166998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011669a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011669b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011669c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011669d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101166a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101166a4c) */
/* WARNING: Removing unreachable block (ram,0x000101166a6c) */
/* WARNING: Removing unreachable block (ram,0x000101166a9c) */
/* WARNING: Removing unreachable block (ram,0x000101166a8c) */
/* WARNING: Removing unreachable block (ram,0x000101166acc) */
/* WARNING: Removing unreachable block (ram,0x000101166abc) */
/* WARNING: Removing unreachable block (ram,0x000101166aac) */
/* WARNING: Removing unreachable block (ram,0x000101166afc) */
/* WARNING: Removing unreachable block (ram,0x000101166aec) */
/* WARNING: Removing unreachable block (ram,0x000101166adc) */
/* WARNING: Removing unreachable block (ram,0x000101166b3c) */
/* WARNING: Removing unreachable block (ram,0x000101166b2c) */
/* WARNING: Removing unreachable block (ram,0x000101166b1c) */
/* WARNING: Removing unreachable block (ram,0x0001011669dc) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001011669cc) */
/* WARNING: Removing unreachable block (ram,0x0001011669bc) */
/* WARNING: Removing unreachable block (ram,0x0001011669ac) */
/* WARNING: Removing unreachable block (ram,0x00010116699c) */
/* WARNING: Removing unreachable block (ram,0x000101166a3c) */

void FUN_1011667f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3d1c4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b904();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4c398();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c3e9b4();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c4c3a8();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar7 = unaff_x20;
            func_0x000107c5d900();
            func_0x000107c61180();
            if (lVar7 != 0) {
              lVar8 = unaff_x20;
              func_0x000107c3fa0c();
              func_0x000107c61180();
              if (lVar8 != 0) {
                func_0x000107c41094();
                func_0x000107c61180();
                if (unaff_x20 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar9 = 0;
                  FUN_101164ec8();
                  func_0x000107c613fc();
                  *(undefined8 *)(lVar9 + 0x58) = 0;
                  *(undefined8 *)(lVar9 + 0x60) = 0;
                  *(long *)(lVar9 + 0x10) = lVar1;
                  *(long *)(lVar9 + 0x18) = lVar2;
                  *(long *)(lVar9 + 0x20) = lVar3;
                  *(long *)(lVar9 + 0x28) = lVar4;
                  *(long *)(lVar9 + 0x30) = lVar5;
                  *(long *)(lVar9 + 0x38) = lVar6;
                  *(long *)(lVar9 + 0x40) = lVar7;
                  *(long *)(lVar9 + 0x48) = lVar8;
                  *(long *)(lVar9 + 0x50) = unaff_x20;
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174(lVar3);
                  func_0x000107c61174(lVar4);
                  func_0x000107c61174(lVar5);
                  func_0x000107c61174(lVar6);
                  func_0x000107c61174(lVar7);
                  func_0x000107c61174(lVar8);
                  func_0x000107c61174(unaff_x20);
                  func_0x0001011644c8();
                  lVar1 = unaff_x20;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101166b68; end: 101166b8f; -[SCMapFriendPickerEntryPoint begin] */

void FUN_101166b68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011667f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101166b90; end: 101166cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101166b90(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112d608d8);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x60) != 0)) {
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + _DAT_112f20e78);
    puVar1 = &UNK_110388dc0;
    func_0x000107c613fc(&UNK_110388dc0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,lVar3);
    pcStack_60 = FUN_101166cb8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000b0c7c;
    puStack_68 = &UNK_110388dd8;
    puStack_58 = puVar1;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c6157c(lVar3);
    func_0x000107c615f0(uVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c41864(uVar4);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101166cb8; end: 101166cdb;  */

void FUN_101166cb8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101166cdc; end: 101166d0f; -[SCMapFriendPickerEntryPoint end] */

void FUN_101166cdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101166b90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101166d10; end: 10116718b;  */

void FUN_101166d10(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_101166d9c;
  }
  if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef1d0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000017;
      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10d81e0)) ||
         (func_0x000107c605b8(0xd000000000000017,0x800000010ef27e20,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56070();
      }
      else {
        uVar2 = 0xd000000000000011;
        if (((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef10d8260)) ||
           (func_0x000107c605b8(0xd000000000000011,0x800000010ef27da0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56260();
        }
        else {
          if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e69b0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000014,0x800000010ef19650,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000019;
              if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10d8240)) ||
                 (func_0x000107c605b8(0xd000000000000019,0x800000010ef27dc0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c56264();
              }
              else {
                if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ef610)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
                       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c53414();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10d7860)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd000000000000016,0x800000010ef287a0,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          func_0x000107c602fc(0x15);
                          func_0x000107c6142c(0xe000000000000000);
                          func_0x000107c5fb78(param_2,param_3);
                          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                              0x800000010ef0fc20,
                                              "MapFriendPickerImplementation/SCMapFriendPickerEntryPoint.swift"
                                              ,0x3f,2,0x4e,0);
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x10116718c);
                          (*pcVar1)();
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c53cd8();
                    }
                    goto LAB_101166d9c;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5a2fc();
              }
              goto LAB_101166d9c;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52cf4();
        }
      }
      goto LAB_101166d9c;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52228();
LAB_101166d9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10116718c; end: 101167237; -[SCMapFriendPickerEntryPoint setValue:forIvarName:] */

void FUN_10116718c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101166d10(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101167238; end: 101167337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101167238(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d60890,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60898,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d608a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d608a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d608b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d608b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d608c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d608c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d608d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d608d8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101167338; end: 101167357; -[SCMapFriendPickerEntryPoint init] */

void FUN_101167338(void)

{
  FUN_101167238();
  return;
}



/* Entry: 101167358; end: 10116738b;  */

void FUN_101167358(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10116738c; end: 101167443; -[SCMapFriendPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116738c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d60890);
  func_0x000107c61610(param_1 + _DAT_112d60898);
  func_0x000107c61610(param_1 + _DAT_112d608a0);
  func_0x000107c61610(param_1 + _DAT_112d608a8);
  func_0x000107c61610(param_1 + _DAT_112d608b0);
  func_0x000107c61610(param_1 + _DAT_112d608b8);
  func_0x000107c61610(param_1 + _DAT_112d608c0);
  func_0x000107c61610(param_1 + _DAT_112d608c8);
  func_0x000107c61610(param_1 + _DAT_112d608d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d608d8));
  return;
}



/* Entry: 101167444; end: 101167463;  */

void FUN_101167444(void)

{
  func_0x000107c61168(&PTR_PTR_1127b1898);
  return;
}



/* Entry: 101167464; end: 10116775f;  */

/* WARNING: Possible PIC construction at 0x00010116754c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116755c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011675a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011676ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101167704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101167714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101167724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101167718) */
/* WARNING: Removing unreachable block (ram,0x000101167708) */
/* WARNING: Removing unreachable block (ram,0x0001011676b0) */
/* WARNING: Removing unreachable block (ram,0x0001011675a8) */
/* WARNING: Removing unreachable block (ram,0x000101167560) */
/* WARNING: Removing unreachable block (ram,0x000101167550) */
/* WARNING: Removing unreachable block (ram,0x000101167728) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101167464(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d60908) + _DAT_112ebb1a8);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d60908) + _DAT_112ebb1b0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d60938);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d60938))[1];
  puVar6 = PTR_PTR_1126a6418;
  func_0x000107c610f8(PTR_PTR_1126a6418);
  uVar7 = 0;
  FUN_101167c48(0);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar4);
  uVar8 = uVar9;
  func_0x000107c5fc48(uVar9,uVar7);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c46e84(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 101167760; end: 10116786f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101167760(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112d60950);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c42018();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101167870; end: 10116791f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101167870(ulong param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  
  if ((param_1 & 1) == 0) {
    func_0x0001002a64a8();
  }
  else {
    pcVar1 = "handleCloseTray(withSubmitted:)";
    func_0x0001000c10c0("handleCloseTray(withSubmitted:)");
    func_0x000107c61180();
    pcVar2 = pcVar1;
    func_0x000107c614f0();
    puVar3 = &UNK_110388eb0;
    func_0x000107c613fc(&UNK_110388eb0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    func_0x000107c6157c(puVar3);
    func_0x00010090569c(FUN_101167c40,puVar3,pcVar2);
    func_0x000107c615e8(pcVar1);
    func_0x000107c61578(puVar3,2);
  }
  return;
}



/* Entry: 101167920; end: 101167a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101167920(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar2 = puVar1;
    FUN_1011687d4();
    puVar4 = puVar3;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar3);
    FUN_1011687d4();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
    func_0x000107c40930(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c5c2e0(*(undefined8 *)(param_1 + _DAT_112d60930));
    uVar5 = *(undefined8 *)(param_1 + _DAT_112d60958);
    func_0x000107c6157c(uVar5);
    func_0x0001002a64a8();
    func_0x000107c61574(uVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 101167a28; end: 101167a57; -[_TtC42MapPlaceSuggestAttributeTrayImplementation38MapPlaceSuggestAttributeTrayController handleCloseTrayWithSubmitted:] */

void FUN_101167a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101167870(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101167a58; end: 101167a5f; -[_TtC42MapPlaceSuggestAttributeTrayImplementation38MapPlaceSuggestAttributeTrayController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_101167a58(void)

{
  return 0;
}



/* Entry: 101167a60; end: 101167acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101167a60(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112d60950;
  if (*(long *)(unaff_x20 + _DAT_112d60950) != 0) {
    func_0x000107c5a074();
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x000107c42018();
    }
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101167ad0; end: 101167af3; -[_TtC42MapPlaceSuggestAttributeTrayImplementation38MapPlaceSuggestAttributeTrayController dealloc] */

void FUN_101167ad0(void)

{
  func_0x000107c61174();
  FUN_101167a60();
  return;
}



/* Entry: 101167af4; end: 101167bbf; -[_TtC42MapPlaceSuggestAttributeTrayImplementation38MapPlaceSuggestAttributeTrayController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101167af4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d60908));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d60910));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d60918));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d60920));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d60928));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d60930));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d60938 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d60940));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d60948));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d60950));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d60958));
  return;
}



/* Entry: 101167bc0; end: 101167beb; -[_TtC42MapPlaceSuggestAttributeTrayImplementation38MapPlaceSuggestAttributeTrayController init] */

void FUN_101167bc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapPlaceSuggestAttributeTrayImplementation.MapPlaceSuggestAttributeTrayController"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101167bec);
  (*pcVar1)();
}



/* Entry: 101167bec; end: 101167c1f; -[_TtC42MapPlaceSuggestAttributeTrayImplementation38MapPlaceSuggestAttributeTrayController tray:positionDidChange:] */

void FUN_101167bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
    func_0x000107c61174();
    func_0x0001011677dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101167c20; end: 101167c3f;  */

void FUN_101167c20(void)

{
  func_0x000107c61168(&PTR_PTR_1127b1998);
  return;
}



/* Entry: 101167c40; end: 101167c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101167c40(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar4,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar3 = puVar2;
    FUN_1011687d4();
    puVar5 = puVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
    FUN_1011687d4();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar5);
    func_0x000107c40930(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c5c2e0(*(undefined8 *)(lVar1 + _DAT_112d60930));
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112d60958);
    func_0x000107c6157c(uVar6);
    func_0x0001002a64a8();
    func_0x000107c61574(uVar6);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101167c48; end: 101167c8b;  */

void FUN_101167c48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d60988 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6420;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d60988 = puVar1;
  return;
}



/* Entry: 101167c8c; end: 10116814f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101167c8c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long alStack_e0 [3];
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *aplStack_98 [3];
  long lStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar8 = 0x20;
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61174();
  lVar1 = param_3;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar4 == 0) {
LAB_10116808c:
    func_0x000107c61170(param_1);
  }
  else {
    lVar1 = lVar4;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar1 == 0) goto LAB_10116808c;
    lVar4 = param_5;
    func_0x000107c4d604();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      lVar4 = param_4;
      lStack_a0 = param_5;
      func_0x000107c4d80c();
      func_0x000107c61180();
      lVar3 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        lVar4 = *(long *)(param_6 + _DAT_113083898);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          uVar10 = *(undefined8 *)(param_1 + _DAT_112ebb1a0);
          lStack_b0 = *(undefined8 *)(param_2 + _DAT_113083f78);
          puStack_c8 = (undefined1 *)uVar10;
          lStack_b8 = lVar4;
          func_0x000107c61174();
          alStack_e0[2] = param_1;
          func_0x000107c615f0(uVar10);
          func_0x000107c615f0(lVar1);
          func_0x000107c615f0(lVar2);
          lStack_a8 = lVar3;
          func_0x000107c615f0(lVar3);
          lVar4 = lStack_b0;
          func_0x000107c5d984();
          func_0x000107c61180();
          uVar10 = lVar4;
          func_0x000107c5faec();
          alStack_e0[0] = lVar8;
          alStack_e0[1] = uVar10;
          func_0x000107c61170(lVar4);
          lVar5 = 0;
          FUN_101167c20();
          lVar3 = lVar5;
          lStack_b0 = lVar2;
          func_0x000107c610f8();
          lVar4 = _DAT_112d60920;
          puVar6 = PTR_PTR_1126ae810;
          lStack_c0 = param_4;
          func_0x000107c610f8();
          lVar2 = lStack_b8;
          func_0x000107c615f0(lStack_b8);
          func_0x000107c453e4();
          *(undefined **)(lVar3 + lVar4) = puVar6;
          *(undefined8 *)(lVar3 + _DAT_112d60940) = 0;
          *(undefined8 *)(lVar3 + _DAT_112d60950) = 0;
          lVar4 = _DAT_112d60958;
          uVar10 = 0x112d60990;
          func_0x0001000285a8(0x112d60990,&UNK_10d926cd0);
          func_0x000107c613fc();
          func_0x0001000c2754();
          lVar8 = alStack_e0[2];
          *(undefined8 *)(lVar3 + lVar4) = uVar10;
          *(long *)(lVar3 + _DAT_112d60908) = alStack_e0[2];
          *(undefined1 **)(lVar3 + _DAT_112d60910) = puStack_c8;
          *(long *)(lVar3 + _DAT_112d60918) = lVar1;
          *(long *)(lVar3 + _DAT_112d60928) = lStack_b0;
          *(long *)(lVar3 + _DAT_112d60930) = lStack_a8;
          puVar11 = (undefined8 *)(lVar3 + _DAT_112d60938);
          *puVar11 = alStack_e0[1];
          puVar11[1] = alStack_e0[0];
          *(long *)(lVar3 + _DAT_112d60948) = lVar2;
          plVar7 = &lStack_70;
          lStack_70 = lVar3;
          lStack_68 = lVar5;
          func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
          uVar9 = *(undefined8 *)((long)plVar7 + _DAT_112d60958);
          ppuStack_78 = &PTR_DAT_110388e80;
          uVar10 = 0;
          aplStack_98[0] = plVar7;
          lStack_80 = lVar5;
          FUN_101168660();
          func_0x000107c610f8();
          alStack_e0[1] = uVar10;
          func_0x0001000c6518(aplStack_98,lVar5);
          puStack_c8 = (undefined1 *)alStack_e0;
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
          puVar11 = (undefined8 *)((long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
          (**(code **)(extraout_x12 + 0x10))(puVar11);
          uVar10 = *puVar11;
          func_0x000107c61174();
          func_0x000107c6157c(uVar9);
          func_0x000107c61174(plVar7);
          lVar4 = lVar8;
          FUN_1011681e0(lVar8,uVar10,uVar9,alStack_e0[1]);
          func_0x000107c61170(plVar7);
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(lStack_b0);
          func_0x000107c615e8(lStack_a8);
          func_0x000107c615e8(lStack_b8);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_3);
          func_0x000107c61170(lStack_c0);
          func_0x000107c61170(lStack_a0);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar8);
          func_0x000107c61574(uVar9);
          func_0x0001000834e4(aplStack_98);
          *(long *)(unaff_x20 + 0x18) = lVar4;
          return unaff_x20;
        }
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar2);
        lVar2 = lVar3;
      }
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      param_5 = lStack_a0;
      goto LAB_1011680b8;
    }
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_6);
    param_6 = param_1;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
LAB_1011680b8:
  func_0x000107c61170(param_5);
  return unaff_x20;
}



/* Entry: 101168150; end: 10116817b;  */

void FUN_101168150(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10116817c; end: 1011681d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116817c(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x18);
  if (lVar1 != 0) {
    func_0x0001000a8868(lVar1 + _DAT_112d60a48,*(undefined8 *)(lVar1 + _DAT_112d60a48 + 0x18));
    func_0x000107c61174(lVar1);
    FUN_101167464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011681d8; end: 1011681df;  */

undefined8 FUN_1011681d8(void)

{
  return 0;
}



/* Entry: 1011681e0; end: 10116837b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1011681e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  long *plVar9;
  code *pcVar10;
  long lStack_88;
  long lStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  lVar2 = param_4;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_101167c20();
  lVar1 = _DAT_112d60a58;
  ppuStack_58 = &PTR_DAT_110388e80;
  uVar4 = 0;
  auStack_78[0] = param_2;
  uStack_60 = uVar3;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_4 + lVar1) = uVar4;
  *(undefined8 *)(param_4 + _DAT_112d60a40) = param_1;
  FUN_10116839c(auStack_78,param_4 + _DAT_112d60a48);
  *(undefined8 *)(param_4 + _DAT_112d60a50) = param_3;
  puVar6 = PTR_s_init_1125d9248;
  lStack_88 = param_4;
  lStack_80 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_3);
  plVar5 = &lStack_88;
  func_0x000107c61154(plVar5,puVar6);
  plVar9 = *(long **)((long)plVar5 + _DAT_112d60a50);
  puVar6 = &UNK_110388ef0;
  func_0x000107c613fc(&UNK_110388ef0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,plVar5);
  pcVar10 = *(code **)(*plVar9 + 0x60);
  func_0x000107c61174();
  pcVar7 = FUN_1011683e0;
  puVar8 = puVar6;
  (*pcVar10)(FUN_1011683e0);
  func_0x000107c61574(puVar6);
  func_0x000107c614f0(pcVar7);
  uVar3 = *(undefined8 *)((long)plVar5 + _DAT_112d60a58);
  pcVar10 = *(code **)(puVar8 + 0x10);
  func_0x000107c6157c(uVar3);
  (*pcVar10)();
  func_0x000107c61170(plVar5);
  func_0x000107c615e8(pcVar7);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(auStack_78);
  return plVar5;
}



/* Entry: 10116837c; end: 10116839b;  */

void FUN_10116837c(void)

{
  func_0x000107c61168(&PTR_PTR_112d609d8);
  return;
}



/* Entry: 10116839c; end: 1011683df;  */

long FUN_10116839c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1011683e0; end: 1011683ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011683e0(void)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + _DAT_112d60a48);
    func_0x0001000a8868(puVar2,puVar2[3]);
    uVar6 = *puVar2;
    pcVar3 = "closeTray()";
    func_0x0001000c10c0("closeTray()");
    func_0x000107c61180();
    puVar4 = &UNK_110388fb0;
    func_0x000107c613fc(&UNK_110388fb0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,uVar6);
    pcStack_58 = FUN_1011687b0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110388fc8;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1011683f0; end: 10116848f;  */

void FUN_1011683f0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101168490; end: 1011685a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101168490(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + _DAT_112d60a48);
    func_0x0001000a8868(puVar1,puVar1[3]);
    uVar5 = *puVar1;
    pcVar2 = "closeTray()";
    func_0x0001000c10c0("closeTray()");
    func_0x000107c61180();
    puVar3 = &UNK_110388fb0;
    func_0x000107c613fc(&UNK_110388fb0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,uVar5);
    pcStack_58 = FUN_1011687b0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110388fc8;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1011685a8; end: 101168607; -[_TtC42MapPlaceSuggestAttributeTrayImplementation34MapPlaceSuggestAttributeTrayRouter init] */

void FUN_1011685a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapPlaceSuggestAttributeTrayImplementation.MapPlaceSuggestAttributeTrayRouter"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011685d4);
  (*pcVar1)();
}



/* Entry: 101168608; end: 10116865f; -[_TtC42MapPlaceSuggestAttributeTrayImplementation34MapPlaceSuggestAttributeTrayRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101168644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101168648) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101168608(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d60a40));
  func_0x0001000834e4(param_1 + _DAT_112d60a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d60a50));
  return;
}



/* Entry: 101168660; end: 10116867f;  */

void FUN_101168660(void)

{
  func_0x000107c61168(&PTR_PTR_1127b1aa8);
  return;
}



/* Entry: 101168680; end: 10116876f;  */

uint FUN_101168680(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 101168770; end: 1011687af;  */

void FUN_101168770(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d60a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d926dc4;
  func_0x000107c61520(&UNK_10d926dc4,&UNK_110388f90);
  puRam0000000112d60a88 = puVar1;
  return;
}



/* Entry: 1011687b0; end: 1011687d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011687b0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + _DAT_112d60950);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c42018();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1011687d4; end: 10116889f;  */

undefined1  [16] FUN_1011687d4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef28910);
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010d926dd0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011688a0);
  (*pcVar1)();
}



/* Entry: 1011688a0; end: 1011688af;  */

undefined1  [16] FUN_1011688a0(void)

{
  return ZEXT816(0x110389038);
}



/* Entry: 1011688b0; end: 1011688bb; -[SCMapPlaceSuggestAttributeTrayEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011688b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60a90;
  func_0x000107c61428(param_1 + _DAT_112d60a90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011688bc; end: 1011688c7; -[SCMapPlaceSuggestAttributeTrayEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011688bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60a90;
  func_0x000107c61428(param_1 + _DAT_112d60a90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011688c8; end: 1011688d3; -[SCMapPlaceSuggestAttributeTrayEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011688c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60a98;
  func_0x000107c61428(param_1 + _DAT_112d60a98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011688d4; end: 1011688df; -[SCMapPlaceSuggestAttributeTrayEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011688d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60a98;
  func_0x000107c61428(param_1 + _DAT_112d60a98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011688e0; end: 1011688eb; -[SCMapPlaceSuggestAttributeTrayEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011688e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60aa0;
  func_0x000107c61428(param_1 + _DAT_112d60aa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011688ec; end: 1011688f7; -[SCMapPlaceSuggestAttributeTrayEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011688ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60aa0;
  func_0x000107c61428(param_1 + _DAT_112d60aa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011688f8; end: 101168903; -[SCMapPlaceSuggestAttributeTrayEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011688f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60aa8;
  func_0x000107c61428(param_1 + _DAT_112d60aa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101168904; end: 10116890f; -[SCMapPlaceSuggestAttributeTrayEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101168904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60aa8;
  func_0x000107c61428(param_1 + _DAT_112d60aa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101168910; end: 10116891b; -[SCMapPlaceSuggestAttributeTrayEntryPoint composerNetworkingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101168910(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60ab0;
  func_0x000107c61428(param_1 + _DAT_112d60ab0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10116891c; end: 101168927; -[SCMapPlaceSuggestAttributeTrayEntryPoint setComposerNetworkingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116891c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60ab0;
  func_0x000107c61428(param_1 + _DAT_112d60ab0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101168928; end: 101168933; -[SCMapPlaceSuggestAttributeTrayEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101168928(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60ab8;
  func_0x000107c61428(param_1 + _DAT_112d60ab8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101168934; end: 101168977;  */

void FUN_101168934(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


