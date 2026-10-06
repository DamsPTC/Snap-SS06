/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072ab134; end: 1072ab147;  */

void FUN_1072ab134(void)

{
  func_0x0001072ab150();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ab148; end: 1072ab16f;  */

void FUN_1072ab148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072af7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072ab170; end: 1072ab1a3;  */

void FUN_1072ab170(long param_1)

{
  func_0x0001002a9bc8();
  func_0x0001072ab3b0(param_1 + 0x18);
  return;
}



/* Entry: 1072ab1a4; end: 1072ab1ab;  */

void FUN_1072ab1a4(void)

{
  return;
}



/* Entry: 1072ab1ac; end: 1072ab1cb;  */

void FUN_1072ab1ac(undefined8 *param_1)

{
  func_0x0001072afc1c();
  *param_1 = &PTR_FUN_110999180;
  return;
}



/* Entry: 1072ab1cc; end: 1072ab1e7;  */

void FUN_1072ab1cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110999180;
  return;
}



/* Entry: 1072ab1e8; end: 1072ab29b;  */

void FUN_1072ab1e8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  puVar1 = (undefined8 *)0x1e8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109991f0;
  func_0x00010002b838(&uStack_48,&DAT_10f34b957);
  func_0x00010738ac18(puVar1 + 3,&uStack_48,param_2 + 8);
  func_0x0001072b0208();
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  uStack_48 = 0;
  uStack_40 = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1072915e0(&uStack_48);
  return;
}



/* Entry: 1072ab29c; end: 1072ab2c3;  */

void FUN_1072ab29c(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_110999230);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072ab2c4; end: 1072ab2d3;  */

undefined ** FUN_1072ab2c4(void)

{
  return &PTR_DAT_110999230;
}



/* Entry: 1072ab2d4; end: 1072ab2e7;  */

void FUN_1072ab2d4(void)

{
  func_0x0001072ab2f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ab2e8; end: 1072ab317;  */

void FUN_1072ab2e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072af7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072ab318; end: 1072ab483;  */

long * FUN_1072ab318(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072ab35c(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1072ab484; end: 1072ab4a3;  */

void FUN_1072ab484(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1072ab4a4();
  }
  return;
}



/* Entry: 1072ab4a4; end: 1072ab517;  */

void FUN_1072ab4a4(long param_1)

{
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072ab518; end: 1072ab51f;  */

void FUN_1072ab518(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -5;
    func_0x0001079332b0();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072ab520; end: 1072ab573;  */

void FUN_1072ab520(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x0001079332b0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072ab574; end: 1072ab65b;  */

void FUN_1072ab574(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  __ZNSt3__15mutex8try_lockEv();
  if ((uVar1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(param_1);
  }
  return;
}



/* Entry: 1072ab65c; end: 1072ab67f;  */

void FUN_1072ab65c(long param_1)

{
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072ab680; end: 1072ab6cb;  */

long FUN_1072ab680(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001072aff60();
    func_0x0001072afe0c();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1072ab6cc; end: 1072ab6ff;  */

void FUN_1072ab6cc(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072af970();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072af87c(uVar1);
  return;
}



/* Entry: 1072ab700; end: 1072ab737;  */

void FUN_1072ab700(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    func_0x0001072afc30();
    FUN_1072ab738();
  }
  return;
}



/* Entry: 1072ab738; end: 1072ab793;  */

void FUN_1072ab738(long *param_1,float *param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)*param_1;
  if (*param_2 < *pfVar1) {
    *pfVar1 = *param_2;
  }
  if (param_2[1] < pfVar1[1]) {
    pfVar1[1] = param_2[1];
  }
  pfVar1 = (float *)param_1[1];
  if (*pfVar1 < *param_2) {
    *pfVar1 = *param_2;
  }
  if (pfVar1[1] < param_2[1]) {
    pfVar1[1] = param_2[1];
  }
  return;
}



/* Entry: 1072ab794; end: 1072ab7c7;  */

long FUN_1072ab794(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afa9c();
  if ((bool)in_CY) {
    FUN_1072ab7f4();
  }
  else {
    FUN_1072ab7c8();
    param_1 = unaff_x20 + 0x120;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x120;
}



/* Entry: 1072ab7c8; end: 1072ab7f3;  */

void FUN_1072ab7c8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072b02bc();
  FUN_1072ab860();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x120;
  return;
}



/* Entry: 1072ab7f4; end: 1072ab85f;  */

void FUN_1072ab7f4(void)

{
  undefined8 uStack_48;
  
  func_0x0001072af920();
  func_0x0001072b05a0();
  FUN_1072aba38();
  func_0x0001072af904();
  FUN_1072a799c();
  FUN_1072ab860(uStack_48);
  func_0x0001072afc08();
  FUN_1072a7968();
  func_0x0001072afeec();
  func_0x0001072a7b1c();
  return;
}



/* Entry: 1072ab860; end: 1072ab947;  */

void FUN_1072ab860(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001072afc24();
  func_0x0001072b0430();
  func_0x000104c2fe00(unaff_x19 + 0x40,unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x000107299490(unaff_x19 + 0x80,unaff_x20 + 0x80);
  func_0x000107299490(unaff_x19 + 0x90,unaff_x20 + 0x90);
  uVar1 = *(undefined4 *)(unaff_x20 + 0xa0);
  *(undefined2 *)(unaff_x19 + 0xa4) = *(undefined2 *)(unaff_x20 + 0xa4);
  *(undefined4 *)(unaff_x19 + 0xa0) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x20 + 200);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x19 + 200) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar5;
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
  FUN_1072ab948(unaff_x19 + 0xe8,unaff_x20 + 0xe8);
  FUN_1072ab9cc(unaff_x19 + 0x108,unaff_x20 + 0x108);
  return;
}



/* Entry: 1072ab948; end: 1072ab977;  */

void FUN_1072ab948(long param_1)

{
  func_0x0001072b0648();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1072ab978();
  return;
}



/* Entry: 1072ab978; end: 1072ab98b;  */

void FUN_1072ab978(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1072ab9a8();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 1072ab98c; end: 1072ab9a7;  */

void FUN_1072ab98c(long param_1)

{
  FUN_1072ab9a8();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1072ab9a8; end: 1072ab9cb;  */

void FUN_1072ab9a8(long param_1,long param_2)

{
  FUN_107278b70();
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  return;
}



/* Entry: 1072ab9cc; end: 1072ab9fb;  */

void FUN_1072ab9cc(long param_1)

{
  func_0x0001072b0648();
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_1072ab9fc();
  return;
}



/* Entry: 1072ab9fc; end: 1072aba37;  */

void FUN_1072ab9fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 2) == '\x01') {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10 != 0);
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1072aba38; end: 1072aba8f;  */

ulong FUN_1072aba38(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong unaff_x19;
  
  uVar2 = param_2 == 0xe38e38e38e38e3;
  if (param_2 < 0xe38e38e38e38e4) {
    uVar1 = (param_1[2] - *param_1) / 0x120;
    uVar4 = uVar1 * 2;
    if (uVar4 < param_2 || uVar4 - param_2 == 0) {
      uVar4 = param_2;
    }
    if (0x71c71c71c71c70 < uVar1) {
      uVar4 = 0xe38e38e38e38e3;
    }
    return uVar4;
  }
  FUN_1072a795c();
  func_0x0001072af970();
  if ((bool)uVar2) {
    uVar3 = 0x20;
  }
  else {
    if (param_1 == (long *)0x0) {
      return unaff_x19;
    }
    uVar3 = 0x28;
  }
  func_0x0001072af87c(uVar3);
  return unaff_x19;
}



/* Entry: 1072aba90; end: 1072abaf7;  */

void FUN_1072aba90(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072af970();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072af87c(uVar1);
  return;
}



/* Entry: 1072abaf8; end: 1072abaff;  */

void FUN_1072abaf8(void)

{
  return;
}



/* Entry: 1072abb00; end: 1072abb27;  */

void FUN_1072abb00(void)

{
  func_0x0001072b0444();
  func_0x0001072afa58(&UNK_110999260);
  return;
}



/* Entry: 1072abb28; end: 1072abb4b;  */

void FUN_1072abb28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110999270;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072abb4c; end: 1072abb73;  */

void FUN_1072abb4c(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_1109992d0);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072abb74; end: 1072abb87;  */

undefined ** FUN_1072abb74(void)

{
  return &PTR_DAT_1109992d0;
}



/* Entry: 1072abb88; end: 1072abc0f;  */

undefined8 * FUN_1072abb88(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 auStack_168 [36];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001072af7b0();
  uStack_38 = extraout_x8;
  func_0x0001072b04b4();
  FUN_1072ab860(auStack_168,param_1);
  uStack_40 = param_3[1];
  uStack_48 = *param_3;
  func_0x0001072afc08();
  FUN_1072abc10();
  puVar1 = auStack_168;
  func_0x0001072a6b0c();
  func_0x0001072af6ec(uStack_38);
  if ((bool)in_ZR) {
    return (undefined8 *)0x0;
  }
  ___stack_chk_fail();
  func_0x0001072afbb0();
  func_0x0001072a6b0c();
  func_0x0001072afaac();
  func_0x0001072afa9c();
  if ((bool)in_CY) {
    FUN_1072abc68();
  }
  else {
    func_0x0001072abc44();
    puVar1 = param_3 + 0x26;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  return puVar1 + -0x26;
}



/* Entry: 1072abc10; end: 1072abc67;  */

long FUN_1072abc10(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afa9c();
  if ((bool)in_CY) {
    FUN_1072abc68();
  }
  else {
    func_0x0001072abc44();
    param_1 = unaff_x20 + 0x130;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x130;
}



/* Entry: 1072abc68; end: 1072abcd3;  */

void FUN_1072abc68(void)

{
  undefined8 uStack_48;
  
  func_0x0001072af920();
  func_0x0001072b05a0();
  FUN_1072abcd4();
  func_0x0001072af904();
  FUN_1072a7c48();
  func_0x0001072a7d60(uStack_48);
  func_0x0001072afc08();
  FUN_1072a7c14();
  func_0x0001072afeec();
  func_0x0001072a7dec();
  return;
}



/* Entry: 1072abcd4; end: 1072abd2b;  */

long * FUN_1072abcd4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xd79435e50d7943 < param_2) {
    FUN_1072a7c08();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x130;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x6bca1af286bca0 < uVar1) {
    plVar2 = (long *)0xd79435e50d7943;
  }
  return plVar2;
}



/* Entry: 1072abd2c; end: 1072abd33;  */

void FUN_1072abd2c(void)

{
  return;
}



/* Entry: 1072abd34; end: 1072abd53;  */

void FUN_1072abd34(void)

{
  func_0x0001072afc1c();
  func_0x0001072b02d4(&UNK_1109992e0);
  return;
}



/* Entry: 1072abd54; end: 1072abd73;  */

void FUN_1072abd54(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109992f0;
  return;
}



/* Entry: 1072abd74; end: 1072abd9b;  */

void FUN_1072abd74(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_110999350);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072abd9c; end: 1072abdbb;  */

undefined ** FUN_1072abd9c(void)

{
  return &PTR_DAT_110999350;
}



/* Entry: 1072abdbc; end: 1072abddf;  */

void FUN_1072abdbc(void)

{
  func_0x0001072afb48();
  func_0x0001072afa6c(&UNK_110999360);
  return;
}



/* Entry: 1072abde0; end: 1072abde7;  */

void FUN_1072abde0(void)

{
  return;
}



/* Entry: 1072abde8; end: 1072abe17;  */

void FUN_1072abde8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072afd60();
  func_0x0001072afa58(&UNK_110999360);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1072abe18; end: 1072abe3b;  */

void FUN_1072abe18(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110999370;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072abe3c; end: 1072abe63;  */

void FUN_1072abe3c(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_1109993d0);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072abe64; end: 1072abe77;  */

undefined ** FUN_1072abe64(void)

{
  return &PTR_DAT_1109993d0;
}



/* Entry: 1072abe78; end: 1072abea7;  */

void FUN_1072abe78(int param_1)

{
  undefined1 in_ZR;
  
  func_0x0001072aff88();
  if ((bool)in_ZR) {
    func_0x0001072aff30();
    func_0x0001072afef8();
    FUN_1072abea8();
    if (param_1 == 0) {
      return;
    }
  }
  func_0x0001072b0310();
  return;
}



/* Entry: 1072abea8; end: 1072abebf;  */

void FUN_1072abea8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072b04ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 1072abec0; end: 1072abec7;  */

void FUN_1072abec0(void)

{
  return;
}



/* Entry: 1072abec8; end: 1072abee7;  */

void FUN_1072abec8(void)

{
  func_0x0001072afc1c();
  func_0x0001072b02d4(&UNK_1109993e0);
  return;
}



/* Entry: 1072abee8; end: 1072abf07;  */

void FUN_1072abee8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109993f0;
  return;
}



/* Entry: 1072abf08; end: 1072abf2f;  */

void FUN_1072abf08(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_110999450);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072abf30; end: 1072abf3b;  */

undefined ** FUN_1072abf30(void)

{
  return &PTR_DAT_110999450;
}



/* Entry: 1072abf3c; end: 1072abf5f;  */

void FUN_1072abf3c(void)

{
  func_0x0001072afb48();
  func_0x0001072afa6c(&UNK_110999460);
  return;
}



/* Entry: 1072abf60; end: 1072abf67;  */

void FUN_1072abf60(void)

{
  return;
}



/* Entry: 1072abf68; end: 1072abf97;  */

void FUN_1072abf68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072afd60();
  func_0x0001072afa58(&UNK_110999460);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1072abf98; end: 1072abfbb;  */

void FUN_1072abf98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110999470;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072abfbc; end: 1072abfe3;  */

void FUN_1072abfbc(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_1109994d0);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072abfe4; end: 1072abff7;  */

undefined ** FUN_1072abfe4(void)

{
  return &PTR_DAT_1109994d0;
}



/* Entry: 1072abff8; end: 1072ac027;  */

void FUN_1072abff8(int param_1)

{
  undefined1 in_ZR;
  
  func_0x0001072aff88();
  if ((bool)in_ZR) {
    func_0x0001072aff30();
    func_0x0001072afef8();
    FUN_1072abea8();
    if (param_1 == 0) {
      return;
    }
  }
  func_0x0001072b0310();
  return;
}



/* Entry: 1072ac028; end: 1072ac02f;  */

void FUN_1072ac028(void)

{
  return;
}



/* Entry: 1072ac030; end: 1072ac04f;  */

void FUN_1072ac030(void)

{
  func_0x0001072afc1c();
  func_0x0001072b02d4(&UNK_1109994e0);
  return;
}



/* Entry: 1072ac050; end: 1072ac06f;  */

void FUN_1072ac050(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109994f0;
  return;
}



/* Entry: 1072ac070; end: 1072ac097;  */

void FUN_1072ac070(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_110999550);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072ac098; end: 1072ac0a3;  */

undefined ** FUN_1072ac098(void)

{
  return &PTR_DAT_110999550;
}



/* Entry: 1072ac0a4; end: 1072ac11b;  */

undefined8 FUN_1072ac0a4(void)

{
  undefined8 unaff_x19;
  
  func_0x0001072b0400();
  func_0x0001072ac0c8();
  func_0x0001072afd84();
  FUN_1072ac11c();
  return unaff_x19;
}



/* Entry: 1072ac11c; end: 1072ac133;  */

void FUN_1072ac11c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072ac134; end: 1072ac18f;  */

void FUN_1072ac134(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_d0 [64];
  undefined1 auStack_48 [40];
  
  func_0x0001072afe1c();
  if ((ulong)(extraout_x9 >> 6) < param_2) {
    if (param_2 >> 0x3a != 0) {
      FUN_107268f6c();
      func_0x0001072afbb0();
      func_0x000107289820();
      func_0x0001072afaac();
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072afed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
        return;
      }
      func_0x000104bfeb48();
      puVar2 = auStack_d0;
      puVar3 = auStack_d0;
      func_0x0001072af980();
      func_0x0001003ab96c(auStack_d0);
      func_0x0001003abb10();
      lVar1 = *unaff_x20;
      *unaff_x20 = (long)puVar2;
      unaff_x20[1] = unaff_x20[1] + (lVar1 - (long)puVar2);
      func_0x0001072ac20c();
      *unaff_x19 = puVar3;
      return;
    }
    func_0x0001072affb0();
    FUN_107289720(auStack_48);
    func_0x0001072afc08();
    FUN_1072896a0();
    func_0x000107289820(auStack_48);
  }
  return;
}



/* Entry: 1072ac190; end: 1072ac1a7;  */

void FUN_1072ac190(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_80 [64];
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072afed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  puVar2 = auStack_80;
  puVar3 = auStack_80;
  func_0x0001072af980();
  func_0x0001003ab96c(auStack_80);
  func_0x0001003abb10();
  lVar1 = *unaff_x20;
  *unaff_x20 = (long)puVar2;
  unaff_x20[1] = unaff_x20[1] + (lVar1 - (long)puVar2);
  func_0x0001072ac20c();
  *unaff_x19 = puVar3;
  return;
}



/* Entry: 1072ac1a8; end: 1072ac277;  */

void FUN_1072ac1a8(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  puVar3 = auStack_70;
  func_0x0001072af980();
  func_0x0001003ab96c(auStack_70);
  func_0x0001003abb10();
  lVar1 = *unaff_x20;
  *unaff_x20 = (long)puVar2;
  unaff_x20[1] = unaff_x20[1] + (lVar1 - (long)puVar2);
  func_0x0001072ac20c();
  *unaff_x19 = puVar3;
  return;
}



/* Entry: 1072ac278; end: 1072ac293;  */

bool FUN_1072ac278(long param_1)

{
  FUN_1072ac294();
  return param_1 != 0;
}



/* Entry: 1072ac294; end: 1072ac32f;  */

long FUN_1072ac294(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar4 != uVar7) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1072ac330; end: 1072ac3af;  */

long * FUN_1072ac330(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((int)param_1[3] == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  plVar2 = (long *)param_1[3];
  if (plVar2 == (long *)0x0) {
    func_0x000104bfeb48();
    if ((int)plVar2[3] == 1) {
      return plVar2;
    }
    func_0x00010563ab98();
    if ((int)plVar2[3] == 2) {
      return plVar2;
    }
    func_0x00010563ab98();
    plVar2 = (long *)plVar2[3];
    if (plVar2 == (long *)0x0) {
      func_0x000104bfeb48();
      if ((int)plVar2[3] == 0) {
        uVar3 = *param_2;
        func_0x0001072a1bc0(uVar3,*(undefined8 *)param_2[1],plVar2,&stack0xffffffffffffff90);
        return (long *)(ulong)((int)uVar3 == 1);
      }
      if ((int)plVar2[3] == 1) {
        uVar3 = param_2[4];
        func_0x0001072a1b1c(uVar3,plVar2);
        iVar1 = (int)uVar3;
        func_0x0001072afc30();
        func_0x0001072a1bc0();
      }
      else {
        FUN_1072a0e60(plVar2);
        iVar1 = (int)plVar2;
        func_0x0001072afc30();
        func_0x0001072a1bc0();
      }
      return (long *)(ulong)(iVar1 == 1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001072b04d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return plVar2;
}



/* Entry: 1072ac3b0; end: 1072ac3cf;  */

bool FUN_1072ac3b0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x18) == 1) {
      uVar2 = param_2[4];
      func_0x0001072a1b1c(uVar2,param_1);
      iVar1 = (int)uVar2;
      func_0x0001072afc30();
      func_0x0001072a1bc0();
    }
    else {
      FUN_1072a0e60(param_1);
      iVar1 = (int)param_1;
      func_0x0001072afc30();
      func_0x0001072a1bc0();
    }
    return iVar1 == 1;
  }
  uVar2 = *param_2;
  func_0x0001072a1bc0(uVar2,*(undefined8 *)param_2[1],param_1,&stack0xffffffffffffffe0);
  return (int)uVar2 == 1;
}



/* Entry: 1072ac3d0; end: 1072ac40f;  */

bool FUN_1072ac3d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  uVar1 = *param_1;
  uStack_18 = 1;
  func_0x0001072a1bc0(uVar1,*(undefined8 *)param_1[1],param_2,auStack_20);
  return (int)uVar1 == 1;
}



/* Entry: 1072ac410; end: 1072ac437;  */

bool FUN_1072ac410(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x0001072a1b1c(uVar2,param_1);
    iVar1 = (int)uVar2;
    func_0x0001072afc30();
    func_0x0001072a1bc0();
  }
  else {
    FUN_1072a0e60(param_1);
    iVar1 = (int)param_1;
    func_0x0001072afc30();
    func_0x0001072a1bc0();
  }
  return iVar1 == 1;
}



/* Entry: 1072ac438; end: 1072ac4ff;  */

bool FUN_1072ac438(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001072a1b1c(uVar2);
  iVar1 = (int)uVar2;
  func_0x0001072afc30();
  func_0x0001072a1bc0();
  return iVar1 == 1;
}



/* Entry: 1072ac500; end: 1072ac573;  */

void FUN_1072ac500(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar4;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x0001072af784();
  uStack_28 = extraout_x8;
  FUN_1072ac590(auStack_40,1);
  FUN_1072ac5dc(lStack_30);
  lVar2 = lStack_30;
  lStack_30 = 0;
  FUN_1072ac574(lVar2 + 0x18);
  FUN_1072ac6fc();
  func_0x0001072af6ec(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072afc3c();
  FUN_1072ac6fc();
  func_0x0001072afaac();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined8 *)(puVar1 + 8);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((puVar3[1] == 0 || (*(long *)(puVar3[1] + 8) == -1)))) {
    pcStack_48 = FUN_1072ac574;
    lStack_68 = extraout_x8_00[1];
    uVar4 = 0;
    puStack_70 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_68 != 0) {
      do {
        func_0x0001072afaec();
      } while (extraout_w11 != 0);
      do {
        func_0x0001072afaec();
        uVar4 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    uStack_58 = puVar3[1];
    uStack_60 = *puVar3;
    *puVar3 = puVar1;
    puVar3[1] = uVar4;
    FUN_1072ac6d8(&uStack_60);
    func_0x00010725afc4(&puStack_70);
    return;
  }
  return;
}



/* Entry: 1072ac574; end: 1072ac58f;  */

void FUN_1072ac574(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
  }
  if ((plVar1 != (long *)0x0) && ((plVar1[1] == 0 || (*(long *)(plVar1[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    lVar2 = 0;
    lStack_30 = param_2;
    if (lStack_28 != 0) {
      do {
        func_0x0001072afaec();
      } while (extraout_w11 != 0);
      do {
        func_0x0001072afaec();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = plVar1[1];
    lStack_20 = *plVar1;
    *plVar1 = param_2;
    plVar1[1] = lVar2;
    FUN_1072ac6d8(&lStack_20);
    func_0x00010725afc4(&lStack_30);
    return;
  }
  return;
}



/* Entry: 1072ac590; end: 1072ac5af;  */

void FUN_1072ac590(void)

{
  func_0x0001072b063c();
  FUN_1072ac5b0();
  func_0x0001072b05c0();
  return;
}



/* Entry: 1072ac5b0; end: 1072ac5db;  */

undefined8 * FUN_1072ac5b0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xf0f0f0f0f0f10) {
    puVar1 = (undefined8 *)(param_2 * 0x1100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110999570;
  FUN_1072ac638(param_1 + 3);
  return param_1;
}



/* Entry: 1072ac5dc; end: 1072ac617;  */

undefined8 * FUN_1072ac5dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110999570;
  FUN_1072ac638(param_1 + 3);
  return param_1;
}



/* Entry: 1072ac618; end: 1072ac61b;  */

void FUN_1072ac618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110999570;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072ac61c; end: 1072ac62f;  */

void FUN_1072ac61c(void)

{
  FUN_1072ac65c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ac630; end: 1072ac637;  */

void FUN_1072ac630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072af7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072ac638; end: 1072ac65b;  */

long FUN_1072ac638(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  func_0x0001077f3c4c();
  func_0x0001072b03dc();
  func_0x0001072b0014();
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar2 = param_1;
  func_0x0001072b05e0();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  FUN_107248824(lVar2 + 0x30);
  FUN_1072ac748(param_1 + 0x40,param_2);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  func_0x00010785f2c0(param_1 + 0x60);
  func_0x00010785f28c(param_1 + 0x60);
  in_stack_00000018 = *(undefined8 *)(param_1 + 0x48);
  in_stack_00000010 = *(undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  func_0x0001077f3644(param_1 + 0xc48,&stack0x00000010);
  FUN_1072ac768(&stack0x00000010);
  puVar3 = (undefined8 *)(param_1 + 0xc48);
  func_0x0001077f3840();
  func_0x0001072aff20();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar1 = puVar3 + 3;
  *puVar3 = &PTR_FUN_1109995c0;
  FUN_1072903a8(puVar1,param_1 + 0x60);
  *(undefined8 **)(param_1 + 0xe18) = puVar1;
  *(undefined8 **)(param_1 + 0xe20) = puVar3;
  FUN_10729f220(param_1 + 0xe28);
  uVar4 = 0;
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0xe40) = 0;
  *(undefined8 *)(param_1 + 0xe38) = 0;
  *(undefined8 *)(param_1 + 0xe48) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0xe98) = 0;
  *(undefined8 *)(param_1 + 0xe90) = 0;
  *(undefined8 *)(param_1 + 0xea8) = 0;
  *(undefined8 *)(param_1 + 0xea0) = 0;
  *(undefined8 *)(param_1 + 0xe58) = 0;
  *(undefined8 *)(param_1 + 0xe50) = 0;
  *(undefined8 *)(param_1 + 0xe68) = 0;
  *(undefined8 *)(param_1 + 0xe60) = 0;
  *(undefined8 *)(param_1 + 0xe78) = 0;
  *(undefined8 *)(param_1 + 0xe70) = 0;
  *(undefined8 *)(param_1 + 0xe84) = 0;
  *(undefined8 *)(param_1 + 0xe7c) = 0;
  *(undefined4 *)(param_1 + 0xeb0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xec0) = 0;
  *(undefined8 *)(param_1 + 0xeb8) = 0;
  *(undefined8 *)(param_1 + 0xed0) = 0;
  *(undefined8 *)(param_1 + 0xec8) = 0;
  lVar2 = 0x68;
  __Znwm();
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  func_0x0001072affd8(&PTR_FUN_110999610);
  *(undefined8 *)(param_1 + 0xed8) = extraout_x8;
  *(long *)(param_1 + 0xee0) = lVar2;
  *(undefined8 *)(param_1 + 0xef0) = 0;
  *(undefined ***)(param_1 + 0xee8) = &PTR_DAT_1109ec830;
  *(undefined **)(param_1 + 0xef8) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xf00) = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0xf08) = 0;
  *(undefined8 *)(param_1 + 0xf28) = uVar5;
  *(undefined8 *)(param_1 + 0xf20) = uVar4;
  *(undefined8 *)(param_1 + 0xf18) = uVar5;
  *(undefined8 *)(param_1 + 0xf10) = uVar4;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0xf30);
  uVar4 = 0;
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  *(undefined8 *)(param_1 + 0xfd8) = 0;
  *(undefined8 *)(param_1 + 0xff0) = 0;
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  *(undefined4 *)(param_1 + 0xff8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1020) = 0;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  *(undefined8 *)(param_1 + 0x1000) = 0;
  *(undefined1 *)(param_1 + 0x1010) = 0;
  lVar2 = 0x68;
  __Znwm();
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  func_0x0001072affd8(&PTR_FUN_110999660);
  *(undefined8 *)(param_1 + 0x1028) = extraout_x8_00;
  *(long *)(param_1 + 0x1030) = lVar2;
  *(undefined8 *)(param_1 + 0x1040) = uVar5;
  *(undefined8 *)(param_1 + 0x1038) = uVar4;
  *(undefined8 *)(param_1 + 0x1050) = uVar5;
  *(undefined8 *)(param_1 + 0x1048) = uVar4;
  *(undefined8 *)(param_1 + 0x1060) = uVar5;
  *(undefined8 *)(param_1 + 0x1058) = uVar4;
  puVar3 = (undefined8 *)0x120;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar1 = puVar3 + 3;
  *puVar3 = &PTR_FUN_1109996b0;
  FUN_1072d03e8();
  *(undefined8 **)(param_1 + 0x1068) = puVar1;
  *(undefined8 **)(param_1 + 0x1070) = puVar3;
  *(undefined1 *)(param_1 + 0x10b8) = 0;
  *(undefined8 *)(param_1 + 0x10c8) = 0;
  *(undefined8 *)(param_1 + 0x10c0) = 0;
  *(undefined8 *)(param_1 + 0x1080) = 0;
  *(undefined8 *)(param_1 + 0x1078) = 0;
  *(undefined8 *)(param_1 + 0x1090) = 0;
  *(undefined8 *)(param_1 + 0x1088) = 0;
  *(undefined8 *)(param_1 + 0x10a0) = 0;
  *(undefined8 *)(param_1 + 0x1098) = 0;
  *(undefined1 *)(param_1 + 0x10a8) = 0;
  FUN_10726ed14(param_1 + 0x10d0);
  *(long *)(param_1 + 0x10e0) = param_1;
  func_0x00010786565c(param_1 + 0x60);
  return param_1;
}



/* Entry: 1072ac65c; end: 1072ac667;  */

void FUN_1072ac65c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110999570;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072ac668; end: 1072ac6d7;  */

void FUN_1072ac668(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    uVar1 = 0;
    uStack_30 = param_3;
    if (lStack_28 != 0) {
      do {
        func_0x0001072afaec();
      } while (extraout_w11 != 0);
      do {
        func_0x0001072afaec();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_1072ac6d8(&uStack_20);
    func_0x00010725afc4(&uStack_30);
    return;
  }
  return;
}



/* Entry: 1072ac6d8; end: 1072ac6fb;  */

void FUN_1072ac6d8(long param_1)

{
  func_0x0001072afb28();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1072ac6fc; end: 1072ac70b;  */

void FUN_1072ac6fc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072ac70c; end: 1072ac747;  */

long * FUN_1072ac70c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
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
  lVar1 = 0;
  func_0x00010527822c();
  plVar2 = *(long **)(lVar1 + 0x18);
  if (plVar2 == (long *)0x0) {
    func_0x000104bfeb48();
    func_0x0001072afb28();
    if (plVar2 != (long *)0x0) {
      func_0x0001000df548();
    }
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001072ac758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return plVar2;
}



/* Entry: 1072ac748; end: 1072ac767;  */

void FUN_1072ac748(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072ac758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001072afb28();
  if (plVar1 != (long *)0x0) {
    func_0x0001000df548();
  }
  return;
}


