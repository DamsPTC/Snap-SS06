/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10375ef4c; end: 10375f017; +[_TtC29StorefrontCountryCodeProvider29StorefrontCountryCodeProvider fetchCountryCodeWithCompletion:] */

/* WARNING: Possible PIC construction at 0x00010375eff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375eff8) */

void FUN_10375ef4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11068ee30;
  func_0x000107c613fc(&UNK_11068ee30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_11068ee58;
  func_0x000107c613fc(&UNK_11068ee58,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_10375f0a8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10dc085a0,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10375f018; end: 10375f053; -[_TtC29StorefrontCountryCodeProvider29StorefrontCountryCodeProvider init] */

void FUN_10375f018(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10375f054; end: 10375f0a7;  */

void FUN_10375f054(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10375f0a8; end: 10375f0af;  */

void FUN_10375f0a8(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10375f0b0; end: 10375f0ff;  */

void FUN_10375f0b0(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10375f100;
  plVar5[2] = lVar3;
  plVar5[3] = lVar1;
  lVar3 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[4] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar5[5] = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar3;
  plVar4 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  plVar5[7] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10375ed5c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar4,uVar2);
  return;
}



/* Entry: 10375f100; end: 10375f13b;  */

void FUN_10375f100(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010375f138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10375f13c; end: 10375f183;  */

undefined8 FUN_10375f13c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10375f184; end: 10375f187;  */

void FUN_10375f184(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010375f138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10375f188; end: 10375f1e3; -[_TtC20SendToRankingRecents41ClosureSendToRankingRecentsServiceFactory createRankingServiceWithContextualSignals:] */

void FUN_10375f188(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar2 = param_3;
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10375f1e4; end: 10375f227;  */

void FUN_10375f1e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10375f228; end: 10375f24b;  */

void FUN_10375f228(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11068ef28;
  if (lRam0000000112f90438 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f90438 = param_1;
  }
  return;
}



/* Entry: 10375f24c; end: 10375f28f;  */

void FUN_10375f24c(long param_1,long *param_2,long param_3)

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



/* Entry: 10375f290; end: 10375f2ab;  */

bool FUN_10375f290(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10375f2ac; end: 10375f477;  */

void FUN_10375f2ac(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xd00000000000001a;
  pcVar2 = "failedToFetchModel";
  if (cVar4 != '\x01') {
    uVar1 = 0xd000000000000012;
    pcVar2 = "eContextWrapper.swift";
  }
  pcVar3 = "failedToBuildContentConfig";
  uVar5 = 0xd000000000000015;
  if (cVar4 != '\0') {
    pcVar3 = pcVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,(ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 10375f478; end: 10375f4ff;  */

void FUN_10375f478(undefined8 *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0xd00000000000001a;
  pcVar2 = "failedToFetchModel";
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xd000000000000012;
    pcVar2 = "eContextWrapper.swift";
  }
  pcVar3 = "failedToBuildContentConfig";
  uVar4 = 0xd000000000000015;
  if (*unaff_x20 != '\0') {
    pcVar3 = pcVar2;
    uVar4 = uVar1;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar3 | 0x8000000000000000;
  return;
}



/* Entry: 10375f500; end: 10375f6cb;  */

void FUN_10375f500(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long unaff_x22;
  
  puVar2 = *(undefined1 **)(unaff_x22 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x40) = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    FUN_10375f82c();
    func_0x000107c613f8(&UNK_11068f060,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    puVar3 = PTR_PTR_1126b08b0;
    func_0x000107c61168();
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c3f71c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar5 = PTR_PTR_1126b17d8;
    func_0x000107c610f8();
    func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
    func_0x000107c460ec();
    *(undefined **)(unaff_x22 + 0x48) = puVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c61170();
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar2;
      func_0x000107c614f0();
      plVar7 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_10375f6cc;
      plVar7[0xd] = (long)puVar6;
      plVar7[0xe] = (long)puVar2;
      plVar7[0xc] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10375f888,0,0);
      return;
    }
    FUN_10375f82c();
    func_0x000107c613f8(&UNK_11068f060,puVar3,0,0);
    *puVar3 = 1;
    func_0x000107c61654();
    func_0x000107c615e8(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010375f6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10375f6cc; end: 10375f71f;  */

void FUN_10375f6cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10375f720,0,0);
  return;
}



/* Entry: 10375f720; end: 10375f82b;  */

void FUN_10375f720(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x58);
  if (0xe < uVar4 >> 0x3c) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    FUN_10375f82c();
    func_0x000107c613f8(&UNK_11068f060,param_1,0,0);
    *param_1 = 2;
    func_0x000107c61654();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010375f804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c610f8(PTR_PTR_1126c0c58);
  uVar3 = uVar5;
  FUN_10375fac4(uVar5,uVar4);
  func_0x0001000b44c0(uVar5,uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010375f828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 10375f82c; end: 10375f86b;  */

void FUN_10375f82c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc087b8;
  func_0x000107c61520(&UNK_10dc087b8,&UNK_11068f060);
  puRam0000000112f90440 = puVar1;
  return;
}



/* Entry: 10375f86c; end: 10375f887;  */

void FUN_10375f86c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10375f888,0,0);
  return;
}



/* Entry: 10375f888; end: 10375f8ef;  */

void FUN_10375f888(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10375f8f0;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_10375f93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10375f8f0; end: 10375f92f;  */

void FUN_10375f8f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10375f930,0,0);
  return;
}



/* Entry: 10375f930; end: 10375f93b;  */

void FUN_10375f930(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010375f938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10375f93c; end: 10375fa5f;  */

void FUN_10375f93c(undefined8 param_1,undefined8 param_2)

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
  puVar1 = &UNK_11068ef78;
  func_0x000107c613fc(&UNK_11068ef78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  pcStack_40 = FUN_10375fb84;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f17d9c;
  puStack_48 = &UNK_11068ef90;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5078c(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10375fa60; end: 10375fac3;  */

ulong FUN_10375fa60(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10375fac4; end: 10375fb83;  */

long FUN_10375fac4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = lVar2;
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar1);
  }
  plVar3 = *(long **)(*(long *)(lVar2 + 0x40) + 0x28);
  *plVar3 = lVar5;
  plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return lVar2;
}



/* Entry: 10375fb84; end: 10375fd1b;  */

void FUN_10375fb84(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = lVar1;
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar3 = 0;
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar3 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
  }
  plVar2 = *(long **)(*(long *)(lVar1 + 0x40) + 0x28);
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10375fd1c; end: 10375fd3f;  */

void FUN_10375fd1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10375f82c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10375fd40; end: 10375fd43;  */

void FUN_10375fd40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08780;
  func_0x000107c61520(&UNK_10dc08780,&UNK_11068f060);
  puRam0000000112f90480 = puVar1;
  return;
}



/* Entry: 10375fd44; end: 10375fd83;  */

void FUN_10375fd44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08780;
  func_0x000107c61520(&UNK_10dc08780,&UNK_11068f060);
  puRam0000000112f90480 = puVar1;
  return;
}



/* Entry: 10375fd84; end: 10375fec3;  */

void FUN_10375fd84(void)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  pcVar2 = "failedToFetchFeatures";
  uVar3 = 0xd000000000000014;
  if (cVar1 == '\x01') {
    uVar3 = 0xd000000000000015;
    pcVar2 = "missingGRPCClient";
  }
  func_0x000107c5fb58(auStack_68,uVar3,(ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 10375fec4; end: 10375ff0b;  */

void FUN_10375fec4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10375ff0c; end: 103760057;  */

void FUN_10375ff0c(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xd00000000000001a;
  pcVar2 = "failedToFetchModel";
  if (cVar3 != '\x01') {
    uVar1 = 0xd000000000000011;
    pcVar2 = "SendToFeaturesService";
  }
  func_0x000107c5fb58(auStack_68,uVar1,(ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 103760058; end: 103760063;  */

void FUN_103760058(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103760064; end: 1037600db;  */

void FUN_103760064(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1037600dc; end: 10376011b;  */

void FUN_1037600dc(undefined8 *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *unaff_x20;
  
  uVar1 = 0xd00000000000001a;
  pcVar2 = "failedToFetchModel";
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xd000000000000011;
    pcVar2 = "SendToFeaturesService";
  }
  *param_1 = uVar1;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}



/* Entry: 10376011c; end: 103760183;  */

void FUN_10376011c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x130) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  lVar1 = 0;
  func_0x000107c5f804();
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103760184,0,0);
  return;
}



/* Entry: 103760184; end: 10376065f;  */

void FUN_103760184(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x22;
  
  puVar3 = (undefined1 *)**(undefined8 **)(unaff_x22 + 200);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0xe8) = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    FUN_103760bb0();
    func_0x000107c613f8(&UNK_11068f2e0,puVar3,0,0);
    *puVar3 = 0;
    func_0x000107c61654();
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x0001037604cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x0001000d224c(unaff_x22 + 0x78);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar13 = *(long *)(unaff_x22 + 0x80);
  uVar4 = uVar16;
  func_0x000107c614f0(uVar16);
  (**(code **)(lVar13 + 0x78))();
  func_0x000107c615e8(uVar16);
  puVar5 = PTR_PTR_1126ae728;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0xf0) = puVar5;
  func_0x000107c5fadc(uVar4,lVar13);
  func_0x000107c545b8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(unaff_x22 + 0x88);
  lVar12 = *(long *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  lVar14 = lVar12;
  func_0x000107c614f0();
  (**(code **)(lVar1 + 0x80))();
  func_0x000107c615e8(lVar12);
  if (SUB168(SEXT816(lVar14) * SEXT816(1000),8) == lVar14 * 1000 >> 0x3f) {
    lVar12 = *(long *)(unaff_x22 + 0xd8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar1 = *(long *)(unaff_x22 + 200);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar14 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c57f3c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c59d5c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5343c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    uVar6 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010f1638c0);
    FUN_103761728(0,0x112d56378,&PTR_PTR_1126ae790);
    (**(code **)(lVar12 + 0x68))
              (uVar16,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               uVar4);
    func_0x000107c61174(puVar5);
    uVar7 = uVar16;
    func_0x000104188018(uVar16,0,0);
    (**(code **)(lVar12 + 8))(uVar16,uVar4);
    func_0x000107c40a28();
    func_0x000107c61180();
    *(undefined1 **)(unaff_x22 + 0xf8) = puVar3;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar6);
    puVar5 = PTR_PTR_1126ad6b8;
    func_0x000107c610f8();
    func_0x000107c49088();
    *(undefined **)(unaff_x22 + 0x100) = puVar5;
    puVar8 = PTR_PTR_1126d2e98;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(unaff_x22 + 0x108) = puVar8;
    puVar9 = (undefined8 *)(lVar1 + 0x10);
    func_0x0001000a8868(puVar9,*(undefined8 *)(lVar1 + 0x28));
    func_0x0001000d224c(unaff_x22 + 0x98);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar12 = *(long *)(unaff_x22 + 0xa0);
    uVar4 = uVar16;
    func_0x000107c614f0(uVar16);
    (**(code **)(lVar12 + 0x98))();
    func_0x000107c615e8(uVar16);
    FUN_103761e4c(uVar4,*puVar9,puVar9[1]);
    func_0x000107c57b7c(puVar8);
    func_0x000107c61170(uVar4);
    if (lVar14 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c5fadc(uVar16,*(undefined8 *)(unaff_x22 + 0xc0));
    }
    func_0x000107c54684(puVar8);
    func_0x000107c61170(uVar16);
    func_0x000107c570b0(puVar8);
    puVar10 = PTR_PTR_1126ae748;
    func_0x000107c61168();
    func_0x000107c3edf4();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x110) = puVar10;
    puVar11 = puVar10;
    func_0x000107c3d7fc();
    func_0x000107c61180();
    func_0x000107c6142c(lVar13);
    func_0x000107c61170(puVar11);
    if (param_4 != 0) {
      lVar12 = 0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61534();
      *(undefined8 *)(lVar12 + 0x18) = 2;
      *(undefined8 *)(lVar12 + 0x10) = 1;
      *(undefined8 *)(lVar12 + 0x20) = 0xd000000000000010;
      *(undefined8 *)(lVar12 + 0x28) = 0x800000010ef1c330;
      *(undefined8 *)(lVar12 + 0x30) = param_3;
      *(long *)(lVar12 + 0x38) = param_4;
      lVar13 = lVar12;
      func_0x0001001830b8();
      func_0x000107c61588(lVar12);
      func_0x000100ab5dc4((undefined8 *)(lVar12 + 0x20));
      lVar12 = lVar13;
      func_0x000107c5f9dc(lVar13,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(lVar13);
      func_0x000107c3d704(puVar10);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar12);
    }
    plVar15 = (long *)0xa0;
    func_0x000107c61174();
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x118) = plVar15;
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_103760660;
    plVar15[0x12] = (long)puVar10;
    plVar15[0x13] = (long)puVar5;
    plVar15[0x11] = (long)puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103760c0c,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103760660);
  (*pcVar2)();
}



/* Entry: 103760660; end: 1037606c7;  */

void FUN_103760660(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x110);
  *(undefined8 *)(lVar3 + 0x120) = param_1;
  *(long *)(lVar3 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x118));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1037606c8;
  }
  else {
    pcVar2 = FUN_1037609d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1037606c8; end: 1037609d3;  */

void FUN_1037606c8(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  
  lVar11 = *(long *)(unaff_x22 + 0x120);
  if (lVar11 == 0) {
    FUN_103761768();
    puVar6 = &UNK_11068f370;
    puVar9 = param_1;
    func_0x000107c613f8(&UNK_11068f370,param_1,0,0);
    *puVar9 = 1;
    func_0x000107c61654();
    *(undefined **)(unaff_x22 + 0xa8) = puVar6;
    func_0x000107c614b0(puVar6);
    uVar7 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar8 = 0;
    FUN_103761728(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
    lVar11 = unaff_x22 + 0xb0;
    func_0x000107c6147c(lVar11,unaff_x22 + 0xa8,uVar7,uVar8,0);
    if ((int)lVar11 == 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xa8));
      func_0x000107c613f8(&UNK_11068f370,param_1,0,0);
      *param_1 = 1;
      func_0x000107c61654();
      func_0x000107c614ac(puVar6);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar1);
    }
    else {
      func_0x000107c614ac(puVar6);
      lVar10 = *(long *)(unaff_x22 + 0xb0);
      lVar11 = lVar10;
      func_0x000107c3fcb0();
      func_0x000107c613f8(&UNK_11068f370,param_1,0,0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
      if (lVar11 == 6) {
        *param_1 = 0;
      }
      else {
        *param_1 = 1;
      }
      func_0x000107c61654();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(uVar1);
      func_0x000107c61170(lVar10);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xa8));
    }
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x0001037609cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar10 = lVar11;
  func_0x000107c44ab8();
  if ((int)lVar10 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar1);
  }
  else {
    FUN_1037617a8(*(long *)(unaff_x22 + 200) + 0x10,unaff_x22 + 0x50);
    func_0x0001000a8868(unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0x68));
    lVar10 = lVar11;
    func_0x000107c5095c();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1037609d4);
      (*pcVar5)();
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
    FUN_103763200();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar1);
    func_0x000107c61170(lVar10);
    func_0x0001000834e4(unaff_x22 + 0x50);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x0001037608d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar11);
  return;
}



/* Entry: 1037609d4; end: 103760baf;  */

void FUN_1037609d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined1 *puVar12;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
  puVar10 = (undefined8 *)(unaff_x22 + 0xa8);
  *puVar10 = uVar11;
  func_0x000107c614b0(uVar11);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar6 = 0;
  FUN_103761728(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
  lVar7 = unaff_x22 + 0xb0;
  func_0x000107c6147c(lVar7,puVar10,uVar5,uVar6,0);
  if ((int)lVar7 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
    puVar9 = *(undefined1 **)(unaff_x22 + 0xa8);
    func_0x000107c614ac();
    FUN_103761768();
    func_0x000107c613f8(&UNK_11068f370,puVar9,0,0);
    *puVar9 = 1;
    func_0x000107c61654();
    func_0x000107c614ac(uVar11);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar1);
  }
  else {
    func_0x000107c614ac(uVar11);
    puVar12 = *(undefined1 **)(unaff_x22 + 0xb0);
    puVar9 = puVar12;
    func_0x000107c3fcb0();
    puVar8 = puVar9;
    FUN_103761768();
    func_0x000107c613f8(&UNK_11068f370,puVar8,0,0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
    if (puVar9 == (undefined1 *)0x6) {
      *puVar8 = 0;
    }
    else {
      *puVar8 = 1;
    }
    func_0x000107c61654();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(puVar12);
    func_0x000107c614ac(*puVar10);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x000103760bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103760bb0; end: 103760bef;  */

void FUN_103760bb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f904f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc089e0;
  func_0x000107c61520(&UNK_10dc089e0,&UNK_11068f2e0);
  puRam0000000112f904f8 = puVar1;
  return;
}



/* Entry: 103760bf0; end: 103760c0b;  */

void FUN_103760bf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103760c0c,0,0);
  return;
}



/* Entry: 103760c0c; end: 103760cf3;  */

void FUN_103760c0c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103760cf4;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  puVar3 = &UNK_11068f148;
  func_0x000107c613fc(&UNK_11068f148,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar2;
  *(code **)(unaff_x22 + 0x70) = FUN_1037617ec;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x103761cb8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11068f160;
  func_0x000107c60bc4(puVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c43f6c(uVar1);
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103760cf4; end: 103760d5b;  */

void FUN_103760cf4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000103760d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103760d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x80));
  return;
}



/* Entry: 103760d5c; end: 103760dbb;  */

void FUN_103760d5c(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5f804();
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103760dbc,0,0);
  return;
}



/* Entry: 103760dbc; end: 10376125b;  */

void FUN_103760dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long unaff_x22;
  undefined8 uVar15;
  
  puVar3 = (undefined1 *)**(undefined8 **)(unaff_x22 + 0x70);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x90) = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    FUN_103760bb0();
    func_0x000107c613f8(&UNK_11068f2e0,puVar3,0,0);
    *puVar3 = 0;
    func_0x000107c61654();
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000103761254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar13 = *(long *)(unaff_x22 + 0x58);
  uVar4 = uVar11;
  func_0x000107c614f0(uVar11);
  (**(code **)(lVar13 + 0x68))();
  func_0x000107c615e8(uVar11);
  puVar5 = PTR_PTR_1126ae728;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x98) = puVar5;
  func_0x000107c5fadc(uVar4,lVar13);
  func_0x000107c545b8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(unaff_x22 + 0x60);
  lVar12 = *(long *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  lVar6 = lVar12;
  func_0x000107c614f0();
  (**(code **)(lVar1 + 0x70))();
  func_0x000107c615e8(lVar12);
  if (SUB168(SEXT816(lVar6) * SEXT816(1000),8) == lVar6 * 1000 >> 0x3f) {
    lVar12 = *(long *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c57f3c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c59d5c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5343c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    uVar7 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010f1638c0);
    FUN_103761728(0,0x112d56378,&PTR_PTR_1126ae790);
    (**(code **)(lVar12 + 0x68))
              (uVar11,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               uVar15);
    func_0x000107c61174(puVar5);
    uVar4 = uVar11;
    func_0x000104188018(uVar11,0,0);
    (**(code **)(lVar12 + 8))(uVar11,uVar15);
    func_0x000107c40a28();
    func_0x000107c61180();
    *(undefined1 **)(unaff_x22 + 0xa0) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar7);
    puVar5 = PTR_PTR_1126ad6b8;
    func_0x000107c610f8();
    func_0x000107c49088();
    *(undefined **)(unaff_x22 + 0xa8) = puVar5;
    puVar8 = PTR_PTR_1126d2ea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(unaff_x22 + 0xb0) = puVar8;
    func_0x000107c570b0();
    func_0x000107c53928(puVar8);
    puVar9 = PTR_PTR_1126d2ea0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(unaff_x22 + 0xb8) = puVar9;
    puVar10 = PTR_PTR_1126ad6c0;
    func_0x000107c610f8(PTR_PTR_1126ad6c0);
    func_0x000107c453e4();
    func_0x000107c53804(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c53918(puVar8);
    uVar11 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c53cd4(puVar8);
    func_0x000107c61170(uVar11);
    puVar9 = PTR_PTR_1126ae748;
    func_0x000107c61168();
    func_0x000107c3edf4();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0xc0) = puVar9;
    puVar10 = puVar9;
    func_0x000107c3d7fc();
    func_0x000107c61180();
    func_0x000107c6142c(lVar13);
    func_0x000107c61170(puVar10);
    if (param_4 != 0) {
      lVar12 = 0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61534();
      *(undefined8 *)(lVar12 + 0x18) = 2;
      *(undefined8 *)(lVar12 + 0x10) = 1;
      *(undefined8 *)(lVar12 + 0x20) = 0xd000000000000010;
      *(undefined8 *)(lVar12 + 0x28) = 0x800000010ef1c330;
      *(undefined8 *)(lVar12 + 0x30) = param_3;
      *(long *)(lVar12 + 0x38) = param_4;
      lVar13 = lVar12;
      func_0x0001001830b8();
      func_0x000107c61588(lVar12);
      func_0x000100ab5dc4((undefined8 *)(lVar12 + 0x20));
      lVar12 = lVar13;
      func_0x000107c5f9dc(lVar13,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(lVar13);
      func_0x000107c3d704(puVar9);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar12);
    }
    plVar14 = (long *)0xa0;
    func_0x000107c61174();
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 200) = plVar14;
    *plVar14 = unaff_x22;
    plVar14[1] = (long)FUN_10376125c;
    plVar14[0x12] = (long)puVar9;
    plVar14[0x13] = (long)puVar5;
    plVar14[0x11] = (long)puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103761538,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10376125c);
  (*pcVar2)();
}



/* Entry: 10376125c; end: 1037612c3;  */

void FUN_10376125c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  *(undefined8 *)(lVar3 + 0xd0) = param_1;
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1037612c4;
  }
  else {
    pcVar2 = FUN_103761444;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1037612c4; end: 103761443;  */

void FUN_1037612c4(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  
  lVar10 = *(long *)(unaff_x22 + 0xd0);
  if (lVar10 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar9);
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103761364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar10);
    return;
  }
  FUN_103761768();
  puVar7 = &UNK_11068f370;
  puVar8 = param_1;
  func_0x000107c613f8(&UNK_11068f370,param_1,0,0);
  *puVar8 = 1;
  func_0x000107c61654();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c613f8(&UNK_11068f370,param_1,0,0);
  *param_1 = 1;
  func_0x000107c61654();
  func_0x000107c614ac(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar9);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000103761440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103761444; end: 10376151b;  */

void FUN_103761444(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  FUN_103761768();
  func_0x000107c613f8(&UNK_11068f370,param_1,0,0);
  *param_1 = 1;
  func_0x000107c61654();
  func_0x000107c614ac(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar7);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000103761518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376151c; end: 103761537;  */

void FUN_10376151c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103761538,0,0);
  return;
}



/* Entry: 103761538; end: 10376161f;  */

void FUN_103761538(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x103761c78;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  puVar3 = &UNK_11068f198;
  func_0x000107c613fc(&UNK_11068f198,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x103761c70;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x103761cb4;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11068f1b0;
  func_0x000107c60bc4(puVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c43f68(uVar1);
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103761620; end: 1037616af;  */

void FUN_103761620(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_2;
    func_0x000107c614b0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar1);
    return;
  }
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
  return;
}



/* Entry: 1037616b0; end: 103761727;  */

/* WARNING: Possible PIC construction at 0x00010376170c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103761710) */

void FUN_1037616b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103761728; end: 103761767;  */

void FUN_103761728(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103761768; end: 1037617a7;  */

void FUN_103761768(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08a20;
  func_0x000107c61520(&UNK_10dc08a20,&UNK_11068f370);
  puRam0000000112f90500 = puVar1;
  return;
}



/* Entry: 1037617a8; end: 1037617eb;  */

long FUN_1037617a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1037617ec; end: 103761803;  */

void FUN_1037617ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_103761620(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103761804; end: 10376181f;  */

void FUN_103761804(long param_1,long param_2)

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



/* Entry: 103761820; end: 10376187b;  */

long FUN_103761820(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10376187c; end: 1037618e7;  */

undefined8 * FUN_10376187c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar3;
  pcVar2 = (code *)**(undefined8 **)(lVar3 + -8);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  (*pcVar2)(param_1 + 2,param_2 + 2,lVar3);
  return param_1;
}



/* Entry: 1037618e8; end: 10376194f;  */

undefined8 * FUN_1037618e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000100083374(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 103761950; end: 1037619ab;  */

undefined8 * FUN_103761950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(param_1 + 2);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1037619ac; end: 103761bbb;  */

int FUN_1037619ac(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103761bbc; end: 103761bfb;  */

void FUN_103761bbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc088ec;
  func_0x000107c61520(&UNK_10dc088ec,&UNK_11068f370);
  puRam0000000112f90508 = puVar1;
  return;
}



/* Entry: 103761bfc; end: 103761c1f;  */

void FUN_103761bfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103760bb0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103761c20; end: 103761c23;  */

void FUN_103761c20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc089a8;
  func_0x000107c61520(&UNK_10dc089a8,&UNK_11068f2e0);
  puRam0000000112f90510 = puVar1;
  return;
}



/* Entry: 103761c24; end: 103761c63;  */

void FUN_103761c24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc089a8;
  func_0x000107c61520(&UNK_10dc089a8,&UNK_11068f2e0);
  puRam0000000112f90510 = puVar1;
  return;
}



/* Entry: 103761c64; end: 103761cc3;  */

undefined1 FUN_103761c64(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103761cc4; end: 103761d1f;  */

/* WARNING: Possible PIC construction at 0x000103761cd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103761cdc) */

void FUN_103761cc4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103761d20; end: 103761d7b;  */

undefined8 * FUN_103761d20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103761d7c; end: 103761db7;  */

undefined8 * FUN_103761d7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103761db8; end: 103761e4b;  */

int FUN_103761db8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103761e4c; end: 10376229b;  */

undefined * FUN_103761e4c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  undefined *puVar17;
  undefined *puStack_78;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  puVar17 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    puVar6 = puStack_68;
    func_0x000107c4a27c();
    func_0x000107c615e8(puVar17);
    if (((int)puVar6 != 0) && (func_0x0001000d224c(&puStack_68), puStack_68 != (undefined *)0x0)) {
      puVar17 = puStack_68;
      func_0x000107c44054();
      func_0x000107c61180();
      func_0x000107c615e8(puStack_68);
      if (puVar17 != (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
        FUN_10376329c(0,0x112de7818,&PTR_PTR_1126dec08);
        puVar7 = puVar17;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar17);
        puVar17 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar14 = *(undefined **)(puVar17 + 0x10);
        }
        else {
          puVar14 = puVar17;
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar14 = puVar7;
          }
          func_0x000107c60480();
        }
        puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar14 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            while( true ) {
              if (((ulong)puVar7 & 0xc000000000000001) == 0) {
                if (*(undefined **)(puVar17 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1037621d8);
                  (*pcVar5)();
                }
                puVar8 = *(undefined **)(puVar7 + (long)puVar10 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar8 = puVar10;
                puVar6 = puVar7;
                func_0x00010378e1e8();
              }
              puVar1 = puVar10 + 1;
              if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1037621d4);
                (*pcVar5)();
              }
              puVar15 = puVar8;
              func_0x000107c4e490();
              func_0x000107c61180();
              if (puVar15 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10376229c);
                (*pcVar5)();
              }
              puVar9 = puVar15;
              func_0x000107c5ee30();
              func_0x000107c61170(puVar15);
              uVar4 = (uint)((ulong)puVar6 >> 0x20);
              uVar11 = uVar4 >> 0x1e;
              if (uVar4 >> 0x1e < 2) break;
              if (uVar11 == 2) {
                lVar2 = *(long *)(puVar9 + 0x10);
                lVar3 = *(long *)(puVar9 + 0x18);
                func_0x00010006c090(puVar9);
                uVar12 = lVar3 - lVar2;
                if (SBORROW8(lVar3,lVar2)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1037621e0);
                  (*pcVar5)();
                }
                goto LAB_103761f50;
              }
              func_0x00010006c090(puVar9);
              if (param_1 < 0) goto LAB_103761f58;
LAB_103762034:
              puVar10 = PTR_PTR_1126a83f0;
              func_0x000107c610f8();
              func_0x000107c453e4();
              func_0x000107c4e494(puVar8);
              func_0x000107c5728c(puVar10);
              puVar15 = puVar8;
              func_0x000107c4e490();
              func_0x000107c61180();
              if (puVar15 == (undefined *)0x0) {
                puVar15 = (undefined *)0x0;
              }
              else {
                puVar9 = puVar15;
                func_0x000107c5ee30();
                func_0x000107c61170(puVar15);
                puVar15 = puVar9;
                func_0x000107c5ee20(puVar9,puVar6);
                func_0x00010006c090(puVar9);
              }
              func_0x000107c57288(puVar10);
              func_0x000107c61170(puVar15);
              func_0x000107c3fbdc(puVar8);
              func_0x000107c53494(puVar10);
              puVar15 = puVar8;
              func_0x000107c42abc(puVar8);
              func_0x000107c61180();
              func_0x000107c546ac(puVar10);
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar15);
              puVar8 = puStack_78;
              func_0x000107c61550();
              if (((((ulong)puVar8 & 1) == 0) || ((long)puStack_78 < 0)) ||
                 (puVar8 = puStack_78, ((ulong)puStack_78 >> 0x3e & 1) != 0)) {
                if ((ulong)puStack_78 >> 0x3e == 0) {
                  puVar6 = *(undefined **)(((ulong)puStack_78 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar6 = (undefined *)((ulong)puStack_78 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puStack_78) {
                    puVar6 = puStack_78;
                  }
                  func_0x000107c60480();
                }
                puVar6 = puVar6 + 1;
                puVar8 = (undefined *)0x0;
                FUN_1037623c0(0,puVar6,1,puStack_78);
              }
              uVar13 = (ulong)puVar8 & 0xffffffffffffff8;
              uVar12 = *(ulong *)(uVar13 + 0x10);
              puVar15 = (undefined *)(uVar12 + 1);
              puStack_78 = puVar8;
              if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar12) {
                puStack_78 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
                puVar6 = puVar15;
                FUN_1037623c0(puStack_78,puVar15,1,puVar8);
                uVar13 = (ulong)puStack_78 & 0xffffffffffffff8;
              }
              *(undefined **)(uVar13 + 0x10) = puVar15;
              *(undefined **)(uVar13 + uVar12 * 8 + 0x20) = puVar10;
              puVar10 = puVar1;
              if (puVar1 == puVar14) goto LAB_103762200;
            }
            if (uVar11 == 0) {
              puVar15 = puVar6;
              func_0x00010006c090(puVar9);
              uVar12 = (ulong)puVar6 >> 0x30 & 0xff;
              puVar6 = puVar15;
            }
            else {
              func_0x00010006c090(puVar9);
              iVar16 = (int)((ulong)puVar9 >> 0x20);
              if (SBORROW4(iVar16,(int)puVar9)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1037621dc);
                (*pcVar5)();
              }
              uVar12 = (ulong)(iVar16 - (int)puVar9);
            }
LAB_103761f50:
            if ((long)uVar12 <= param_1) goto LAB_103762034;
LAB_103761f58:
            func_0x000107c61170(puVar8);
            puVar10 = puVar10 + 1;
          } while (puVar1 != puVar14);
        }
LAB_103762200:
        func_0x000107c6142c(puVar7);
        puVar17 = PTR_PTR_1126a83f8;
        func_0x000107c610f8(PTR_PTR_1126a83f8);
        func_0x000107c453e4();
        puVar6 = puStack_78;
        func_0x0001019dc6e4(puStack_78);
        func_0x000107c6142c(puStack_78);
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar14 = puVar6;
        func_0x000107c5fc48(puVar6,PTR___sypN_11034f1a8 + 8);
        func_0x000107c6142c(puVar6);
        func_0x000107c45788(puVar7);
        func_0x000107c61170(puVar14);
        func_0x000107c52d6c(puVar17);
        func_0x000107c61170(puVar7);
        return puVar17;
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10376229c; end: 103762313;  */

void FUN_10376229c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10376329c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103762314; end: 10376232f;  */

void FUN_103762314(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f905d0;
  plVar5 = (long *)&UNK_10dc08ab0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_103aa7a90)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103762330; end: 10376239b;  */

void FUN_103762330(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10376239c; end: 1037623bf;  */

void FUN_10376239c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112efaf38;
  plVar5 = (long *)&UNK_10db2acc0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10376329c(0,0x112d726d8,&PTR_PTR_1126b5438);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1037623c0; end: 103762777;  */

ulong FUN_1037623c0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103762508);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103762db0(uVar2,uVar4,0x112de7808,&PTR_PTR_1126a83f0,0x112de7810,&UNK_10d9b2568);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103762504);
      (*pcVar1)();
    }
    FUN_103762ed8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103762778; end: 10376287f;  */

undefined * FUN_103762778(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103762880);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f90600;
    func_0x0001000285a8(0x112f90600,&UNK_10dc08ae0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_110690d48);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103762880; end: 103762b0b;  */

ulong FUN_103762880(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037629c8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103762db0(uVar2,uVar4,0x112f905e0,&PTR_PTR_1126ad6d0,0x112f905e8,&UNK_10dc08ac8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037629c4);
      (*pcVar1)();
    }
    func_0x000103762ff0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103762b0c; end: 103762c87;  */

undefined * FUN_103762b0c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103762c88);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112f905d8;
    func_0x0001000285a8(0x112f905d8,&UNK_10dc08ac0);
    lVar5 = 0;
    FUN_10378d110();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103762c80);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103762c84);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_10378d110();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 103762c88; end: 103762daf;  */

ulong FUN_103762c88(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103762db0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000103762e40(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103762dac);
      (*pcVar1)();
    }
    func_0x000103763108(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103762db0; end: 103762ed7;  */

undefined *
FUN_103762db0(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_10376229c(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 103762ed8; end: 1037631ff;  */

long FUN_103762ed8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103762fec);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103762ff0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10376329c(0,0x112de7808,&PTR_PTR_1126a83f0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10376329c(0,0x112de7808,&PTR_PTR_1126a83f0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103762fe8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103763200; end: 10376329b;  */

void FUN_103763200(undefined8 param_1)

{
  undefined *puVar1;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126ad6c8;
  func_0x000107c610f8(PTR_PTR_1126ad6c8);
  func_0x000107c453e4();
  func_0x000107c42ac0(param_1);
  func_0x000107c61180();
  func_0x000107c546b0(puVar1);
  func_0x000107c61170(param_1);
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c4f6a8(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10376329c; end: 1037632db;  */

void FUN_10376329c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1037632dc; end: 1037632e3;  */

undefined8 * FUN_1037632dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 1037632e4; end: 10376338b;  */

long FUN_1037632e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10376338c; end: 103763487;  */

undefined8 * FUN_10376338c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  lVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar1;
  pcVar3 = (code *)**(undefined8 **)(lVar1 + -8);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  (*pcVar3)(param_1 + 3,param_2 + 3,lVar1);
  lVar1 = param_2[9];
  if (lVar1 == 0) {
    uVar4 = param_2[8];
    uVar5 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar5;
    param_1[10] = uVar2;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    uVar4 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar4;
    func_0x000107c61434();
    func_0x000107c61174(uVar4);
  }
  uVar4 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  uVar4 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  lVar1 = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c61174(uVar4);
  if (lVar1 == 0) {
    uVar4 = param_2[0x10];
    uVar5 = param_2[0x13];
    uVar2 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0x13] = uVar5;
    param_1[0x12] = uVar2;
  }
  else {
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = lVar1;
    uVar4 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar4;
    func_0x000107c61434(lVar1);
    func_0x000107c61174(uVar4);
  }
  return param_1;
}



/* Entry: 103763488; end: 103763687;  */

undefined8 * FUN_103763488(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000100083374(param_1 + 3,param_2 + 3);
  lVar2 = param_1[9];
  if (lVar2 == 0) {
    if (param_2[9] == 0) {
      uVar1 = param_2[8];
      uVar4 = param_2[0xb];
      uVar3 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar1;
      param_1[0xb] = uVar4;
      param_1[10] = uVar3;
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      param_1[10] = param_2[10];
      uVar1 = param_2[0xb];
      param_1[0xb] = uVar1;
      func_0x000107c61434();
      func_0x000107c61174(uVar1);
    }
  }
  else if (param_2[9] == 0) {
    FUN_103763688(param_1 + 8);
    uVar4 = param_2[8];
    uVar3 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar3;
    param_1[10] = uVar1;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
    param_1[10] = param_2[10];
    uVar1 = param_1[0xb];
    param_1[0xb] = param_2[0xb];
    func_0x000107c61174();
    func_0x000107c61170(uVar1);
  }
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  lVar2 = param_1[0x11];
  if (lVar2 == 0) {
    if (param_2[0x11] == 0) {
      uVar1 = param_2[0x10];
      uVar4 = param_2[0x13];
      uVar3 = param_2[0x12];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar1;
      param_1[0x13] = uVar4;
      param_1[0x12] = uVar3;
    }
    else {
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      uVar1 = param_2[0x13];
      param_1[0x13] = uVar1;
      func_0x000107c61434();
      func_0x000107c61174(uVar1);
    }
  }
  else if (param_2[0x11] == 0) {
    FUN_103763688(param_1 + 0x10);
    uVar4 = param_2[0x10];
    uVar3 = param_2[0x13];
    uVar1 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0x13] = uVar3;
    param_1[0x12] = uVar1;
  }
  else {
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
    param_1[0x12] = param_2[0x12];
    uVar1 = param_1[0x13];
    param_1[0x13] = param_2[0x13];
    func_0x000107c61174();
    func_0x000107c61170(uVar1);
  }
  return param_1;
}



/* Entry: 103763688; end: 1037637cf;  */

undefined8 FUN_103763688(undefined8 param_1)

{
  (*(code *)(undefined *)0x10377f0fc)();
  return param_1;
}



/* Entry: 1037637d0; end: 103763893;  */

int FUN_1037637d0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103763894; end: 1037638d3;  */

void FUN_103763894(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4aa70;
  func_0x000107c61520(&UNK_10dc4aa70,&UNK_1106c9520);
  puRam0000000112f90628 = puVar1;
  return;
}



/* Entry: 1037638d4; end: 103763a13;  */

undefined1  [16] FUN_1037638d4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  char *pcVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 0) {
    uStack_58 = 0;
    uStack_50 = 0xe000000000000000;
    func_0x000101edf31c(param_1,param_2);
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(uStack_50);
    pcVar4 = "invalidFilterValue.";
    uStack_48 = (char)param_3;
  }
  else {
    param_3 = param_3 & 0x3f;
    uStack_48 = (char)param_3;
    if (uVar1 == 1) {
      uStack_58 = 0;
      uStack_50 = 0xe000000000000000;
      func_0x000101edf31c(param_1,param_2,param_3);
      func_0x000107c602fc(0x14);
      func_0x000107c6142c(uStack_50);
      pcVar4 = "invalidScoreValue.";
      uStack_40 = 0xd000000000000012;
      goto LAB_1037639cc;
    }
    uStack_58 = 0;
    uStack_50 = 0xe000000000000000;
    func_0x000101edf31c(param_1,param_2,param_3);
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(uStack_50);
    pcVar4 = "invalidRerankValue.";
  }
  uStack_40 = 0xd000000000000013;
LAB_1037639cc:
  uStack_38 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  puVar3 = &UNK_1106c9838;
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x000107c5fb20(&uStack_58,&UNK_1106c9838);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = uStack_40;
  return auVar2;
}



/* Entry: 103763a14; end: 103763ab3;  */

undefined1  [16] FUN_103763a14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  char *pcVar6;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte bStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 2);
  if (bVar3 >> 6 == 0) {
    uStack_58 = 0;
    uStack_50 = 0xe000000000000000;
    func_0x000101edf31c(uVar1,uVar2);
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(uStack_50);
    pcVar6 = "invalidFilterValue.";
    bStack_48 = bVar3;
  }
  else {
    bStack_48 = bVar3 & 0x3f;
    if (bVar3 >> 6 == 1) {
      uStack_58 = 0;
      uStack_50 = 0xe000000000000000;
      func_0x000101edf31c(uVar1,uVar2,bStack_48);
      func_0x000107c602fc(0x14);
      func_0x000107c6142c(uStack_50);
      pcVar6 = "invalidScoreValue.";
      uStack_40 = 0xd000000000000012;
      goto LAB_1037639cc;
    }
    uStack_58 = 0;
    uStack_50 = 0xe000000000000000;
    func_0x000101edf31c(uVar1,uVar2,bStack_48);
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(uStack_50);
    pcVar6 = "invalidRerankValue.";
  }
  uStack_40 = 0xd000000000000013;
LAB_1037639cc:
  uStack_38 = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
  puVar5 = &UNK_1106c9838;
  uStack_58 = uVar1;
  uStack_50 = uVar2;
  func_0x000107c5fb20(&uStack_58,&UNK_1106c9838);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  auVar4._8_8_ = uStack_38;
  auVar4._0_8_ = uStack_40;
  return auVar4;
}



/* Entry: 103763ab4; end: 103763be3;  */

void FUN_103763ab4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x22;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x580);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x588) = param_1;
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000100029b28(0xd000000000000012,0x800000010f163940);
  *(undefined8 *)(unaff_x22 + 0x590) = uVar3;
  func_0x000107c61170(uVar2);
  *(undefined8 *)(unaff_x22 + 0x598) = *puVar8;
  func_0x0001000d224c(unaff_x22 + 0x4e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x500);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x508);
  lVar4 = unaff_x22 + 0x4e8;
  func_0x0001000a8868(lVar4,uVar3);
  *(undefined8 *)(unaff_x22 + 600) = 2;
  *(undefined8 *)(unaff_x22 + 0x268) = 0;
  *(undefined8 *)(unaff_x22 + 0x260) = 0;
  *(undefined8 *)(unaff_x22 + 0x278) = 0;
  *(undefined8 *)(unaff_x22 + 0x270) = 0;
  *(undefined1 *)(unaff_x22 + 0x280) = 5;
  FUN_10377d64c(unaff_x22 + 0xd8,unaff_x22 + 600,uVar3,uVar2,lVar4);
  func_0x0001000834e4(unaff_x22 + 0x4e8);
  lVar4 = puVar8[6];
  lVar6 = puVar8[7];
  puVar8 = puVar8 + 3;
  func_0x0001000a8868(puVar8,lVar4);
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x5a0) = plVar5;
  lVar6 = *(long *)(lVar6 + 8);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103763be4;
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar7 = *(long *)(unaff_x22 + 0x578);
  plVar5[0xc] = lVar6;
  plVar5[0xd] = (long)puVar8;
  plVar5[10] = (long)puVar1;
  plVar5[0xb] = lVar4;
  plVar5[9] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377bc30,0,0);
  return;
}



/* Entry: 103763be4; end: 103763c33;  */

void FUN_103763be4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x5a8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x5a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103763c34,0,0);
  return;
}



/* Entry: 103763c34; end: 103764c4b;  */

/* WARNING: Possible PIC construction at 0x000103764184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103764188) */
/* WARNING: Removing unreachable block (ram,0x00010376479c) */
/* WARNING: Removing unreachable block (ram,0x000103764040) */
/* WARNING: Removing unreachable block (ram,0x000103763ed0) */
/* WARNING: Removing unreachable block (ram,0x000103764848) */
/* WARNING: Removing unreachable block (ram,0x000103763dac) */

void FUN_103763c34(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  long unaff_x22;
  long lVar31;
  undefined8 uVar32;
  long *plVar33;
  char *pcVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined *puStack_108;
  undefined *puStack_a8;
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  lVar35 = *(long *)(unaff_x22 + 0x580);
  puVar20 = (undefined8 *)(unaff_x22 + 0x130);
  func_0x0001000a8868(puVar20,*(undefined8 *)(unaff_x22 + 0x148));
  uVar26 = puVar20[4];
  uVar28 = puVar20[7];
  uVar18 = puVar20[6];
  uVar41 = puVar20[1];
  uVar39 = *puVar20;
  uVar36 = puVar20[3];
  uVar30 = puVar20[2];
  *(undefined8 *)(unaff_x22 + 0x1c0) = puVar20[5];
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar28;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar41;
  *(undefined8 *)(unaff_x22 + 0x198) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar36;
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar30;
  FUN_10377cd3c(1);
  uVar26 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar24 = *(long *)(unaff_x22 + 0xf8);
  func_0x0001000a8868(unaff_x22 + 0xd8,uVar26);
  *(undefined8 *)(unaff_x22 + 0x3b0) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x3a8) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x3c0) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x3b8) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x3c9) = *(undefined8 *)(unaff_x22 + 0x121);
  *(undefined8 *)(unaff_x22 + 0x3c1) = *(undefined8 *)(unaff_x22 + 0x119);
  (**(code **)(lVar24 + 8))((undefined8 *)(unaff_x22 + 0x3a8),uVar26,lVar24);
  lVar24 = *(long *)(lVar35 + 0x48);
  if (lVar24 == 0) {
    puVar25 = *(undefined **)(unaff_x22 + 0x578);
    func_0x000107c61434(puVar25);
  }
  else {
    uVar36 = *(undefined8 *)(unaff_x22 + 0x5a8);
    lVar35 = *(long *)(unaff_x22 + 0x580);
    uVar42 = *(undefined8 *)(unaff_x22 + 0x580);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x578);
    uVar26 = *(undefined8 *)(lVar35 + 0x50);
    uVar18 = *(undefined8 *)(lVar35 + 0x58);
    uVar39 = *(undefined8 *)(lVar35 + 0x40);
    func_0x000107c61434(lVar24);
    func_0x000107c61174();
    func_0x0001000d224c(unaff_x22 + 0x4c0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x4d8);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x4e0);
    func_0x0001000a8868(unaff_x22 + 0x4c0,uVar28);
    *(undefined8 *)(unaff_x22 + 0x378) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x380) = uVar39;
    *(long *)(unaff_x22 + 0x388) = lVar24;
    *(undefined8 *)(unaff_x22 + 0x398) = 0;
    *(undefined8 *)(unaff_x22 + 0x390) = 0;
    *(undefined1 *)(unaff_x22 + 0x3a0) = 4;
    *(undefined8 *)(unaff_x22 + 0x418) = uVar42;
    *(undefined8 *)(unaff_x22 + 0x410) = uVar41;
    *(undefined8 *)(unaff_x22 + 0x420) = uVar39;
    *(long *)(unaff_x22 + 0x428) = lVar24;
    *(undefined8 *)(unaff_x22 + 0x430) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x438) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x440) = uVar36;
    func_0x000107c61434(lVar24);
    uVar26 = 0x112f90668;
    func_0x0001000285a8(0x112f90668,&UNK_10dc08bc8);
    FUN_10377da40((undefined8 *)(unaff_x22 + 0x570),unaff_x22 + 0x378,0x1037657b8,unaff_x22 + 0x400,
                  uVar28,uVar26,uVar30);
    func_0x000107c61430(lVar24,2);
    func_0x000107c61170(uVar18);
    puVar25 = *(undefined **)(unaff_x22 + 0x570);
    func_0x0001000834e4(unaff_x22 + 0x4c0);
  }
  uVar30 = *(undefined8 *)(unaff_x22 + 0x5a8);
  lVar24 = *(long *)(unaff_x22 + 0x580);
  func_0x0001000d224c(unaff_x22 + 0x3d8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x3f8);
  func_0x0001000a8868(unaff_x22 + 0x3d8,uVar28);
  uVar26 = *(undefined8 *)(lVar24 + 0x60);
  uVar18 = *(undefined8 *)(lVar24 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(lVar24 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x350) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x358) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x368) = 0;
  *(undefined8 *)(unaff_x22 + 0x360) = 0;
  *(undefined1 *)(unaff_x22 + 0x370) = 4;
  func_0x000107c61434(uVar18);
  FUN_10377d64c(unaff_x22 + 0x58,unaff_x22 + 0x348,uVar28,uVar36);
  func_0x000107c6142c(uVar18);
  func_0x0001000834e4(unaff_x22 + 0x3d8);
  puVar10 = puVar25;
  FUN_103764fb8(puVar25,uVar30);
  func_0x000107c6142c(puVar25);
  func_0x000107c6142c(uVar30);
  puVar20 = (undefined8 *)(unaff_x22 + 0xb0);
  func_0x0001000a8868(puVar20,*(undefined8 *)(unaff_x22 + 200));
  uVar26 = puVar20[4];
  uVar28 = puVar20[7];
  uVar18 = puVar20[6];
  uVar41 = puVar20[1];
  uVar39 = *puVar20;
  uVar36 = puVar20[3];
  uVar30 = puVar20[2];
  *(undefined8 *)(unaff_x22 + 0x240) = puVar20[5];
  *(undefined8 *)(unaff_x22 + 0x238) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x250) = uVar28;
  *(undefined8 *)(unaff_x22 + 0x248) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x220) = uVar41;
  *(undefined8 *)(unaff_x22 + 0x218) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x230) = uVar36;
  *(undefined8 *)(unaff_x22 + 0x228) = uVar30;
  FUN_10377cd3c(1);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar24 = *(long *)(unaff_x22 + 0x78);
  func_0x0001000a8868(unaff_x22 + 0x58,uVar26);
  *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x2d9) = *(undefined8 *)(unaff_x22 + 0xa1);
  *(undefined8 *)(unaff_x22 + 0x2d1) = *(undefined8 *)(unaff_x22 + 0x99);
  (**(code **)(lVar24 + 8))((undefined8 *)(unaff_x22 + 0x2b8),uVar26,lVar24);
  func_0x0001000d224c(unaff_x22 + 0x470);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x488);
  lVar24 = *(long *)(unaff_x22 + 0x490);
  func_0x0001000a8868(unaff_x22 + 0x470,uVar26);
  *(undefined8 *)(unaff_x22 + 0x288) = 3;
  *(undefined8 *)(unaff_x22 + 0x298) = 0;
  *(undefined8 *)(unaff_x22 + 0x290) = 0;
  *(undefined8 *)(unaff_x22 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x22 + 0x2a0) = 0;
  *(undefined1 *)(unaff_x22 + 0x2b0) = 5;
  (**(code **)(lVar24 + 0x18))(unaff_x22 + 0x448,unaff_x22 + 0x288,uVar26,lVar24);
  func_0x0001000834e4(unaff_x22 + 0x470);
  uStack_78 = puVar10;
  func_0x000107c61434(puVar10);
  FUN_1037655ac(&uStack_78);
  puStack_108 = uStack_78;
  lVar35 = *(long *)(unaff_x22 + 0x580);
  puVar20 = (undefined8 *)(unaff_x22 + 0x448);
  func_0x0001000a8868(puVar20,*(undefined8 *)(unaff_x22 + 0x460));
  uVar26 = puVar20[4];
  uVar28 = puVar20[7];
  uVar18 = puVar20[6];
  uVar41 = puVar20[1];
  uVar39 = *puVar20;
  uVar36 = puVar20[3];
  uVar30 = puVar20[2];
  *(undefined8 *)(unaff_x22 + 0x180) = puVar20[5];
  *(undefined8 *)(unaff_x22 + 0x178) = uVar26;
  *(undefined8 *)(unaff_x22 + 400) = uVar28;
  *(undefined8 *)(unaff_x22 + 0x188) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar41;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x170) = uVar36;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar30;
  FUN_10377cd3c(1);
  puVar25 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar24 = *(long *)(lVar35 + 0x88);
  if (lVar24 == 0) {
    func_0x000107c6142c(puVar10);
    FUN_103765578(unaff_x22 + 0x58);
    FUN_103765578(unaff_x22 + 0xd8);
LAB_103764730:
    func_0x0001000834e4(unaff_x22 + 0x448);
                    /* WARNING: Could not recover jumptable at 0x00010376476c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,0,puStack_108);
    return;
  }
  puVar20 = (undefined8 *)(unaff_x22 + 0x558);
  puVar19 = (undefined8 *)(unaff_x22 + 0x560);
  uVar28 = *(undefined8 *)(lVar35 + 0x80);
  uVar18 = *(undefined8 *)(lVar35 + 0x90);
  lVar31 = *(long *)(unaff_x22 + 0x580);
  uVar26 = *(undefined8 *)(lVar31 + 0x98);
  *(undefined **)(unaff_x22 + 0x558) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x22 + 0x560) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar35 = *(long *)(puStack_108 + 0x10);
  func_0x000107c61434();
  func_0x000107c61174();
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar35 == 0) {
    func_0x000107c61574(puStack_108);
    func_0x0001000d224c(unaff_x22 + 0x498);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x4b0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x4b8);
    func_0x0001000a8868(unaff_x22 + 0x498,uVar36);
    *(undefined8 *)(unaff_x22 + 0x2e8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x2f0) = uVar28;
    *(long *)(unaff_x22 + 0x2f8) = lVar24;
    *(undefined8 *)(unaff_x22 + 0x308) = 0;
    *(undefined8 *)(unaff_x22 + 0x300) = 0;
    *(undefined1 *)(unaff_x22 + 0x310) = 4;
    *(long *)(unaff_x22 + 0x20) = lVar31;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar28;
    *(long *)(unaff_x22 + 0x30) = lVar24;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar26;
    *(undefined8 **)(unaff_x22 + 0x48) = puVar19;
    *(undefined8 **)(unaff_x22 + 0x50) = puVar20;
    func_0x000107c61434(lVar24);
    FUN_10377da40(unaff_x22 + 0x540,unaff_x22 + 0x2e8,0x103765754,unaff_x22 + 0x10,uVar36,
                  &UNK_1106c9838,uVar30);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x590);
    plVar33 = *(long **)(unaff_x22 + 0x588);
    func_0x000107c6142c(lVar24);
    lVar35 = *(long *)(unaff_x22 + 0x540);
    lVar31 = *(long *)(unaff_x22 + 0x548);
    bVar8 = *(byte *)(unaff_x22 + 0x550);
    func_0x0001000834e4(unaff_x22 + 0x498);
    func_0x000107c61428(plVar33,unaff_x22 + 0x528,0,0);
    plVar33 = (long *)*plVar33;
    func_0x000107c61174();
    func_0x000100069b5c(uVar18);
    func_0x000107c61170();
    if (bVar8 != 3) {
      func_0x000103765778();
      func_0x000107c613f8(&UNK_11068f608,plVar33,0,0);
      *plVar33 = lVar35;
      plVar33[1] = lVar31;
      *(byte *)(plVar33 + 2) = bVar8 | 0x80;
      func_0x000107c61654();
      func_0x000107c6142c(lVar24);
      func_0x000107c61170(uVar26);
      func_0x000107c6142c(puVar10);
      FUN_103765578(unaff_x22 + 0x58);
      FUN_103765578(unaff_x22 + 0xd8);
      func_0x000107c6142c(*puVar19);
      func_0x000107c6142c(*puVar20);
      func_0x000107c6142c(puVar25);
      func_0x0001000834e4(unaff_x22 + 0x448);
                    /* WARNING: Could not recover jumptable at 0x000103763f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar21 = *(long *)(lVar35 + 0x10);
    if (lVar21 != 0) {
      lVar37 = 0;
      puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_103764930:
      pcVar34 = (char *)(lVar35 + 0x30 + lVar37 * 0x18);
      lVar37 = lVar37 + 1;
      do {
        if (*(ulong *)(lVar35 + 0x10) <= lVar37 - 1U) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x103764c4c);
          (*pcVar9)();
        }
        if ((*pcVar34 == '\0') && (*(long *)(puVar25 + 0x10) != 0)) {
          lVar3 = *(long *)(pcVar34 + -0x10);
          uVar22 = *(ulong *)(pcVar34 + -8);
          func_0x000101edf31c(lVar3,uVar22,0);
          func_0x000101edf31c(lVar3,uVar22,0);
          func_0x000107c61434(puVar25);
          lVar13 = lVar3;
          uVar11 = uVar22;
          func_0x000100029284();
          if ((uVar11 & 1) != 0) goto code_r0x0001037649dc;
          func_0x000101edeb30(lVar3,uVar22,0);
          func_0x000101edeb30(lVar3,uVar22,0);
          func_0x000107c6142c(puVar25);
        }
        lVar37 = lVar37 + 1;
        pcVar34 = pcVar34 + 0x18;
        if (lVar37 - lVar21 == 1) goto LAB_103764bd0;
      } while( true );
    }
    puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_103764bd0:
    func_0x000101edeb30(lVar35,lVar31,3);
    func_0x000107c6142c(lVar24);
    func_0x000107c61170(uVar26);
    func_0x000107c6142c(puVar10);
    FUN_103765578(unaff_x22 + 0x58);
    FUN_103765578(unaff_x22 + 0xd8);
    func_0x000107c6142c(*puVar19);
    func_0x000107c6142c(*puVar20);
    func_0x000107c6142c(puVar25);
    goto LAB_103764730;
  }
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(puStack_108 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103764c30);
    (*pcVar9)();
  }
  uVar26 = *(undefined8 *)(puStack_108 + 0x20);
  uVar28 = *(undefined8 *)(puStack_108 + 0x28);
  uVar39 = *(undefined8 *)(puStack_108 + 0x30);
  uVar6 = puStack_108[0x38];
  uVar5 = *(undefined4 *)(puStack_108 + 0x3c);
  uStack_80._0_3_ = (undefined3)*(undefined4 *)(puStack_108 + 0x39);
  uStack_80._3_1_ = (undefined1)uVar5;
  uVar18 = *(undefined8 *)(puStack_108 + 0x40);
  uVar30 = *(undefined8 *)(puStack_108 + 0x48);
  puVar38 = *(undefined **)(puStack_108 + 0x50);
  uVar41 = *(undefined8 *)(puStack_108 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x568) = 0;
  func_0x000107c61174();
  FUN_103765724(uVar28,uVar39,uVar6);
  uVar36 = uVar18;
  func_0x000107c61174();
  func_0x000107c61434(puVar38);
  puVar10 = PTR___sSiN_11034deb0;
  puVar16 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  func_0x000107c61434(puVar16);
  puVar29 = puVar14;
  func_0x000107c61558();
  if (((ulong)puVar29 & 1) == 0) {
    puStack_a8 = (undefined *)0x0;
    func_0x0001000d182c(0,*(long *)(puVar14 + 0x10) + 1,1);
  }
  uVar22 = *(ulong *)(puStack_a8 + 0x10);
  if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar22) {
    puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puStack_a8 + 0x18));
    func_0x0001000d182c(puVar14,uVar22 + 1,1,puStack_a8);
    puStack_a8 = puVar14;
  }
  *(ulong *)(puStack_a8 + 0x10) = uVar22 + 1;
  *(undefined **)(puStack_a8 + uVar22 * 0x10 + 0x20) = puVar10;
  *(undefined **)(puStack_a8 + uVar22 * 0x10 + 0x28) = puVar16;
  *puVar19 = puStack_a8;
  func_0x000107c61174();
  FUN_103765724(uVar28,uVar39,uVar6);
  func_0x000107c61174();
  func_0x000107c61434(puVar38);
  puVar14 = puVar25;
  func_0x000107c61558();
  uStack_78 = puVar25;
  puVar29 = puVar10;
  puVar12 = puVar16;
  func_0x000100029284();
  uVar22 = (ulong)~(uint)puVar12 & 1;
  lVar24 = *(long *)(puVar25 + 0x10) + uVar22;
  if (SCARRY8(*(long *)(puVar25 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103764c34);
    (*pcVar9)();
  }
  if (*(long *)(puVar25 + 0x18) < lVar24) {
    FUN_10378f578(lVar24,puVar14);
    puVar25 = uStack_78;
    puVar29 = puVar10;
    puVar14 = puVar16;
    func_0x000100029284();
    if (((uint)puVar12 & 1) != ((uint)puVar14 & 1)) goto LAB_103764770;
LAB_103764338:
    if (((ulong)puVar12 & 1) != 0) goto LAB_103764340;
LAB_103764428:
    *(ulong *)(puVar25 + ((ulong)puVar29 >> 6) * 8 + 0x40) =
         *(ulong *)(puVar25 + ((ulong)puVar29 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar29 & 0x3f);
    puVar1 = (ulong *)(*(long *)(puVar25 + 0x30) + (long)puVar29 * 0x10);
    *puVar1 = (ulong)puVar10;
    puVar1[1] = (ulong)puVar16;
    puVar19 = (undefined8 *)(*(long *)(puVar25 + 0x38) + (long)puVar29 * 0x40);
    *puVar19 = uVar26;
    puVar19[1] = uVar28;
    puVar19[2] = uVar39;
    *(undefined1 *)(puVar19 + 3) = uVar6;
    *(undefined4 *)((long)puVar19 + 0x19) = uStack_80;
    *(undefined4 *)((long)puVar19 + 0x1c) = uVar5;
    puVar19[4] = uVar18;
    puVar19[5] = uVar30;
    puVar19[6] = puVar38;
    puVar19[7] = uVar41;
    if (SCARRY8(*(long *)(puVar25 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103764c40);
      (*pcVar9)();
    }
    *(long *)(puVar25 + 0x10) = *(long *)(puVar25 + 0x10) + 1;
    func_0x000107c61434(puVar16);
  }
  else {
    if (((ulong)puVar14 & 1) != 0) goto LAB_103764338;
    FUN_10378e8d0();
    puVar25 = uStack_78;
    if (((ulong)puVar12 & 1) == 0) goto LAB_103764428;
LAB_103764340:
    puVar19 = (undefined8 *)(*(long *)(puVar25 + 0x38) + (long)puVar29 * 0x40);
    uVar42 = *puVar19;
    uVar4 = puVar19[1];
    uVar27 = puVar19[2];
    uVar32 = puVar19[4];
    uVar40 = puVar19[6];
    *puVar19 = uVar26;
    puVar19[1] = uVar28;
    puVar19[2] = uVar39;
    uVar7 = *(undefined1 *)(puVar19 + 3);
    *(undefined1 *)(puVar19 + 3) = uVar6;
    *(undefined4 *)((long)puVar19 + 0x19) = uStack_80;
    *(undefined4 *)((long)puVar19 + 0x1c) = uVar5;
    puVar19[4] = uVar18;
    puVar19[5] = uVar30;
    puVar19[6] = puVar38;
    puVar19[7] = uVar41;
    func_0x000107c61170(uVar42);
    func_0x00010376573c(uVar4,uVar27,uVar7);
    func_0x000107c6142c(uVar40);
    func_0x000107c61170(uVar32);
  }
  puVar25 = puVar38;
  func_0x000107c61434();
  func_0x000107c61558();
  uVar11 = 0x65726f6373;
  uVar22 = 0;
  uStack_78 = puVar38;
  func_0x000100029284();
  uVar23 = (ulong)~(uint)uVar22 & 1;
  lVar24 = *(long *)(puVar38 + 0x10) + uVar23;
  if (SCARRY8(*(long *)(puVar38 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103764c38);
    (*pcVar9)();
  }
  if (*(long *)(puVar38 + 0x18) < lVar24) {
    func_0x000101ee23bc(lVar24,puVar25);
    puVar14 = uStack_78;
    uVar11 = 0x65726f6373;
    uVar15 = 0;
    func_0x000100029284();
    if (((uint)uVar22 & 1) != (uVar15 & 1)) goto LAB_103764770;
LAB_103764544:
    if ((uVar22 & 1) != 0) goto LAB_103764548;
LAB_10376458c:
    *(ulong *)(puVar14 + (uVar11 >> 6) * 8 + 0x40) =
         *(ulong *)(puVar14 + (uVar11 >> 6) * 8 + 0x40) | 1L << (uVar11 & 0x3f);
    puVar19 = (undefined8 *)(*(long *)(puVar14 + 0x30) + uVar11 * 0x10);
    *puVar19 = 0x65726f6373;
    puVar19[1] = 0xe500000000000000;
    puVar19 = (undefined8 *)(*(long *)(puVar14 + 0x38) + uVar11 * 0x18);
    *puVar19 = uVar41;
    puVar19[1] = 0;
    *(undefined1 *)(puVar19 + 2) = 2;
    if (SCARRY8(*(long *)(puVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103764c44);
      (*pcVar9)();
    }
    *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
  }
  else {
    puVar14 = puVar38;
    if (((ulong)puVar25 & 1) != 0) goto LAB_103764544;
    func_0x000101ee20b4();
    puVar14 = uStack_78;
    if ((uVar22 & 1) == 0) goto LAB_10376458c;
LAB_103764548:
    puVar19 = (undefined8 *)(*(long *)(puVar14 + 0x38) + uVar11 * 0x18);
    uVar18 = *puVar19;
    uVar30 = puVar19[1];
    *puVar19 = uVar41;
    puVar19[1] = 0;
    uVar7 = *(undefined1 *)(puVar19 + 2);
    *(undefined1 *)(puVar19 + 2) = 2;
    func_0x000101edeb30(uVar18,uVar30,uVar7);
  }
  func_0x000107c6157c(puVar14);
  puVar29 = (undefined *)*puVar20;
  puVar12 = puVar29;
  func_0x000107c61558();
  puVar25 = puVar10;
  puVar17 = puVar16;
  uStack_78 = puVar29;
  func_0x000100029284();
  uVar22 = (ulong)~(uint)puVar17 & 1;
  lVar24 = *(long *)(puVar29 + 0x10) + uVar22;
  if (SCARRY8(*(long *)(puVar29 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103764c3c);
    (*pcVar9)();
  }
  if (*(long *)(puVar29 + 0x18) < lVar24) {
    func_0x000101ee23bc(lVar24,puVar12);
    puVar29 = uStack_78;
    puVar25 = puVar10;
    puVar12 = puVar16;
    func_0x000100029284();
    if (((uint)puVar17 & 1) != ((uint)puVar12 & 1)) {
LAB_103764770:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                (PTR___sSSN_11034da80);
      return;
    }
  }
  else if (((ulong)puVar12 & 1) == 0) {
    func_0x000101ee20b4();
    puVar29 = uStack_78;
  }
  if (((ulong)puVar17 & 1) == 0) {
    *(ulong *)(puVar29 + ((ulong)puVar25 >> 6) * 8 + 0x40) =
         *(ulong *)(puVar29 + ((ulong)puVar25 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar25 & 0x3f);
    puVar1 = (ulong *)(*(long *)(puVar29 + 0x30) + (long)puVar25 * 0x10);
    *puVar1 = (ulong)puVar10;
    puVar1[1] = (ulong)puVar16;
    puVar20 = (undefined8 *)(*(long *)(puVar29 + 0x38) + (long)puVar25 * 0x18);
    *puVar20 = puVar14;
    puVar20[1] = 0;
    *(undefined1 *)(puVar20 + 2) = 4;
    func_0x000107c61170(uVar26);
    func_0x00010376573c(uVar28,uVar39,uVar6);
    func_0x000107c61170(uVar36);
    func_0x000107c6142c(puVar38);
    if (SCARRY8(*(long *)(puVar29 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103764c48);
      (*pcVar9)();
    }
    *(long *)(puVar29 + 0x10) = *(long *)(puVar29 + 0x10) + 1;
  }
  else {
    puVar20 = (undefined8 *)(*(long *)(puVar29 + 0x38) + (long)puVar25 * 0x18);
    uVar18 = *puVar20;
    uVar30 = puVar20[1];
    *puVar20 = puVar14;
    puVar20[1] = 0;
    uVar7 = *(undefined1 *)(puVar20 + 2);
    *(undefined1 *)(puVar20 + 2) = 4;
    func_0x000101edeb30(uVar18,uVar30,uVar7);
    func_0x000107c6142c(puVar16);
    func_0x000107c61170(uVar26);
    func_0x00010376573c(uVar28,uVar39,uVar6);
    func_0x000107c61170(uVar36);
    func_0x000107c6142c(puVar38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar14);
  return;
code_r0x0001037649dc:
  puVar2 = (undefined8 *)(*(long *)(puVar25 + 0x38) + lVar13 * 0x40);
  uVar18 = *puVar2;
  uVar30 = puVar2[1];
  uVar39 = puVar2[2];
  uVar6 = *(undefined1 *)(puVar2 + 3);
  uStack_78._0_7_ =
       CONCAT43(*(undefined4 *)((long)puVar2 + 0x1c),(int3)*(undefined4 *)((long)puVar2 + 0x19));
  uVar28 = puVar2[4];
  uVar36 = puVar2[5];
  uVar41 = puVar2[6];
  uVar42 = puVar2[7];
  func_0x000107c61174();
  FUN_103765724(uVar30,uVar39,uVar6);
  func_0x000107c61174(uVar28);
  func_0x000107c61434(uVar41);
  func_0x000101edeb30(lVar3,uVar22,0);
  func_0x000101edeb30(lVar3,uVar22,0);
  func_0x000107c6142c(puVar25);
  puVar14 = puStack_108;
  func_0x000107c61558();
  if (((ulong)puVar14 & 1) == 0) {
    plVar33 = (long *)(puStack_108 + 0x10);
    puStack_108 = (undefined *)0x0;
    FUN_103762778(0,*plVar33 + 1,1);
  }
  uVar22 = *(ulong *)(puStack_108 + 0x10);
  if (*(ulong *)(puStack_108 + 0x18) >> 1 <= uVar22) {
    puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puStack_108 + 0x18));
    FUN_103762778(puVar14,uVar22 + 1,1,puStack_108);
    puStack_108 = puVar14;
  }
  *(ulong *)(puStack_108 + 0x10) = uVar22 + 1;
  *(undefined8 *)(puStack_108 + uVar22 * 0x40 + 0x20) = uVar18;
  *(undefined8 *)(puStack_108 + uVar22 * 0x40 + 0x28) = uVar30;
  *(undefined8 *)(puStack_108 + uVar22 * 0x40 + 0x30) = uVar39;
  puStack_108[uVar22 * 0x40 + 0x38] = uVar6;
  uVar5 = uStack_78._3_4_;
  *(undefined4 *)(puStack_108 + uVar22 * 0x40 + 0x39) = (undefined4)uStack_78;
  *(undefined4 *)(puStack_108 + uVar22 * 0x40 + 0x3c) = uVar5;
  *(undefined8 *)(puStack_108 + uVar22 * 0x40 + 0x40) = uVar28;
  *(undefined8 *)(puStack_108 + uVar22 * 0x40 + 0x48) = uVar36;
  *(undefined8 *)(puStack_108 + uVar22 * 0x40 + 0x50) = uVar41;
  *(undefined8 *)(puStack_108 + uVar22 * 0x40 + 0x58) = uVar42;
  if (lVar37 == lVar21) goto LAB_103764bd0;
  goto LAB_103764930;
}



/* Entry: 103764c4c; end: 103764fb7;  */

void FUN_103764c4c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong in_x5;
  long in_x6;
  ulong uVar15;
  long unaff_x21;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  ulong auStack_90 [3];
  undefined8 uStack_78;
  long lStack_70;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar18 = *(ulong *)(param_2 + 0x10);
  if (uVar18 != 0) {
    uVar15 = 0;
    do {
      uVar1 = uVar15;
      if (uVar15 <= uVar18) {
        uVar1 = uVar18;
      }
      puVar20 = (undefined1 *)(param_2 + 0x48 + uVar15 * 0x30);
      uVar15 = uVar15 + 1;
      while( true ) {
        if (uVar15 - uVar1 == 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x103764fb8);
          (*pcVar7)();
        }
        uVar8 = *(undefined8 *)(puVar20 + -0x28);
        lVar2 = *(long *)(puVar20 + -0x20);
        uVar16 = *(ulong *)(puVar20 + -0x18);
        uVar4 = puVar20[-0x10];
        uVar17 = *(undefined8 *)(puVar20 + -8);
        uVar3 = *puVar20;
        func_0x000107c61174();
        FUN_103765724(lVar2,uVar16,uVar4);
        uVar9 = uVar17;
        func_0x000107c61174();
        func_0x0001000d224c(auStack_90);
        lVar6 = lStack_70;
        uVar14 = uStack_78;
        func_0x0001000a8868(auStack_90,uStack_78);
        puVar19 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        if (*(long *)(in_x6 + 0x10) != 0) {
          func_0x000107c61434();
          lVar10 = lVar2;
          uVar11 = uVar16;
          FUN_10378de8c(lVar2,uVar16,uVar4);
          puVar19 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
          if ((uVar11 & 1) != 0) {
            puVar19 = *(undefined **)(*(long *)(in_x6 + 0x38) + lVar10 * 8);
            func_0x000107c61434(puVar19);
          }
          func_0x000107c6142c(in_x6);
        }
        uVar11 = in_x5;
        puVar13 = puVar19;
        (**(code **)(lVar6 + 8))();
        if (unaff_x21 != 0) {
          func_0x00010376573c(lVar2,uVar16,uVar4);
          func_0x000107c6142c(puVar19);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar8);
          func_0x0001000834e4(auStack_90);
          func_0x000107c61574(puVar5);
          return;
        }
        func_0x000107c6142c(puVar19);
        puVar12 = auStack_90;
        func_0x0001000834e4();
        if (((uint)uVar14 & 0xff) != 1) {
          func_0x000103765778();
          func_0x000107c613f8(&UNK_11068f608,puVar12,0,0);
          *puVar12 = uVar11;
          puVar12[1] = (ulong)puVar13;
          *(char *)(puVar12 + 2) = (char)uVar14;
          func_0x000107c61654();
          func_0x00010376573c(lVar2,uVar16,uVar4);
          func_0x000107c61574(puVar5);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar8);
          return;
        }
        if ((uVar11 & 1) != 0) break;
        func_0x00010376573c(lVar2,uVar16,uVar4);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar8);
        uVar15 = uVar15 + 1;
        puVar20 = puVar20 + 0x30;
        if (uVar15 - uVar18 == 1) goto LAB_103764f8c;
      }
      puVar19 = puVar5;
      func_0x000107c61558();
      if (((ulong)puVar19 & 1) == 0) {
        func_0x00010379071c(0,*(long *)(puVar5 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        func_0x00010379071c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0x30 + 0x20) = uVar8;
      *(long *)(puVar5 + uVar1 * 0x30 + 0x28) = lVar2;
      *(ulong *)(puVar5 + uVar1 * 0x30 + 0x30) = uVar16;
      puVar5[uVar1 * 0x30 + 0x38] = uVar4;
      *(undefined8 *)(puVar5 + uVar1 * 0x30 + 0x40) = uVar17;
      puVar5[uVar1 * 0x30 + 0x48] = uVar3;
    } while (uVar15 != uVar18);
  }
LAB_103764f8c:
  *param_1 = puVar5;
  return;
}


