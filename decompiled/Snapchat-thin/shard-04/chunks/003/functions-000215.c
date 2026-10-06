/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10332a5f0; end: 10332a60f;  */

void FUN_10332a5f0(void)

{
  func_0x000107c61168(&PTR_PTR_112f5a280);
  return;
}



/* Entry: 10332a610; end: 10332a62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10332a610(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_113096918);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113096918))[1];
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10332a630; end: 10332a663;  */

void FUN_10332a630(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10332a664; end: 10332a667;  */

void FUN_10332a664(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x20 + 0x20),uVar3,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000d224c(&uStack_48);
  pcStack_58 = FUN_10332a610;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100ff4e10;
  puStack_60 = &UNK_11063f708;
  ppuVar4 = &puStack_78;
  uStack_50 = param_1;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c4ff5c(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uStack_48);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10332a668; end: 10332a6e3;  */

long FUN_10332a668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10332a72c(param_4,unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  *(undefined8 *)(unaff_x20 + 0x58) = param_6;
  return unaff_x20;
}



/* Entry: 10332a6e4; end: 10332a72b;  */

void FUN_10332a6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10332a72c(param_4,unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  *(undefined8 *)(unaff_x20 + 0x58) = param_6;
  return;
}



/* Entry: 10332a72c; end: 10332a743;  */

undefined8 * FUN_10332a72c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10332a744; end: 10332a90f;  */

undefined1  [16]
FUN_10332a744(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  lVar1 = param_4;
  uVar5 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if ((param_2 & 1) == 0) {
    if (lVar1 == 0) {
      lVar1 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c5d214(param_3);
  }
  else {
    if (lVar1 == 0) {
      lVar1 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c42e0c(param_3);
  }
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar2 = &UNK_11063f7e0;
  func_0x000107c613fc(&UNK_11063f7e0,0x30,7);
  puVar2[0x10] = (byte)param_2 & 1;
  *(long *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  pcStack_60 = FUN_10332ae50;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1019eb2e0;
  puStack_68 = &UNK_11063f7f8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&puStack_80);
  puVar2 = puStack_80;
  func_0x000107c5dc68(param_3);
  func_0x000107c615e8(puVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  uVar4 = 0;
  func_0x0001000b6d50(0,0);
  func_0x000107c61170(param_3);
  auVar6._8_8_ = &PTR_DAT_1107aaa40;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 10332a910; end: 10332a91f;  */

undefined1  [16] FUN_10332a910(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auVar9 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  bVar2 = *(byte *)(unaff_x20 + 0x10);
  uVar7 = (ulong)bVar2;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar6 = &puStack_80;
  lVar3 = lVar1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if ((bVar2 & 1) == 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar7);
    }
    func_0x000107c5d214(uVar4);
  }
  else {
    if (lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar7);
    }
    func_0x000107c42e0c(uVar4);
  }
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  puVar5 = &UNK_11063f7e0;
  func_0x000107c613fc(&UNK_11063f7e0,0x30,7);
  puVar5[0x10] = bVar2 & 1;
  *(long *)(puVar5 + 0x18) = lVar1;
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  pcStack_60 = FUN_10332ae50;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1019eb2e0;
  puStack_68 = &UNK_11063f7f8;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c61174(lVar1);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(&puStack_80);
  puVar5 = puStack_80;
  func_0x000107c5dc68(uVar4);
  func_0x000107c615e8(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  uVar8 = 0;
  func_0x0001000b6d50(0,0);
  func_0x000107c61170(uVar4);
  auVar9._8_8_ = &PTR_DAT_1107aaa40;
  auVar9._0_8_ = uVar8;
  return auVar9;
}



/* Entry: 10332a920; end: 10332a9f3;  */

void FUN_10332a920(ulong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong auStack_68 [4];
  undefined1 uStack_48;
  
  if (param_1 == 0) {
    auStack_68[0] = (ulong)~param_3 & 1;
    auStack_68[1] = 0;
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    uStack_48 = 6;
    func_0x000100087f6c(auStack_68);
    func_0x000100c7f554();
  }
  else {
    func_0x000107c61174();
    uVar1 = param_1;
    func_0x000107c5bd00();
    if ((uVar1 & 0xfffffffffffffffe) == 2) {
      uVar1 = param_1;
      func_0x000107c5bd00();
      auStack_68[0] = (ulong)(uVar1 == 2);
    }
    else {
      auStack_68[0] = (ulong)(param_3 ^ 1);
    }
    auStack_68[0] = auStack_68[0] & 1;
    auStack_68[1] = 0;
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    uStack_48 = 6;
    func_0x000100087f6c(auStack_68);
    FUN_10332a9f4(param_4,param_1,param_5);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10332a9f4; end: 10332abd7;  */

void FUN_10332a9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  func_0x0001000d224c(&puStack_90);
  puVar2 = puStack_90;
  if (puStack_90 == (undefined *)0x0) {
    func_0x000100c7f554();
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    lVar1 = *(long *)(unaff_x20 + 0x48);
    func_0x0001000a8868(unaff_x20 + 0x28,uVar3);
    (**(code **)(lVar1 + 0x18))(0x4045000000000000,0x4045000000000000,param_1,uVar3,lVar1);
    uVar3 = param_1;
    func_0x00010488b12c();
    func_0x000107c61574(param_1);
    puVar4 = &UNK_11063f830;
    func_0x000107c613fc(&UNK_11063f830,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar5 = &UNK_11063f858;
    func_0x000107c613fc(&UNK_11063f858,0x30,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)(puVar5 + 0x20) = uVar9;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x10332ae7c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11063f870;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar5);
    uStack_70 = 0x10332ae88;
    puStack_90 = puVar4;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11063f898;
    puStack_68 = (undefined *)param_3;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar4);
    func_0x000107c4ef84(puVar2);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 10332abd8; end: 10332ac87;  */

void FUN_10332abd8(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    (*param_3)();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x50);
    func_0x000107c6157c(*(undefined8 *)(param_1 + 0x58));
    func_0x00010058d43c(uVar1,uVar2);
    uStack_70 = 2;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0xd;
    func_0x000100087f6c(&uStack_70);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10332ac88; end: 10332acd3;  */

void FUN_10332ac88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10332acd4; end: 10332ad9b;  */

void FUN_10332acd4(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lStack_48;
  
  uVar2 = *unaff_x20;
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    puVar1 = &UNK_11063f7b8;
    func_0x000107c613fc(&UNK_11063f7b8,0x30,7);
    puVar1[0x10] = param_2 & 1;
    *(long *)(puVar1 + 0x18) = lStack_48;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    *(undefined8 *)(puVar1 + 0x28) = uVar2;
    func_0x0001000285a8(0x112f5a230,&UNK_10dbb2510);
    func_0x000107c613fc();
    func_0x000107c61174(param_1);
    func_0x000107c6157c(uVar2);
    func_0x0001000b64ac(0x10332ae9c,puVar1);
  }
  return;
}



/* Entry: 10332ad9c; end: 10332adfb;  */

/* WARNING: Possible PIC construction at 0x00010332add4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010332add8) */

void FUN_10332ad9c(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  pcVar1 = *(code **)(lVar3 + 0x60);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = (code *)0x0;
    uVar2 = *(undefined8 *)(lVar3 + 0x68);
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x68);
    func_0x000107c6157c(uVar2);
    (*pcVar1)();
  }
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10332adfc; end: 10332ae4f;  */

void FUN_10332adfc(void)

{
  func_0x000107c61168(&PTR_PTR_112f5a338);
  return;
}



/* Entry: 10332ae50; end: 10332aeab;  */

void FUN_10332ae50(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  long unaff_x20;
  ulong auStack_68 [4];
  undefined1 uStack_48;
  
  bVar3 = *(byte *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    auStack_68[0] = (ulong)~(uint)bVar3 & 1;
    auStack_68[1] = 0;
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    uStack_48 = 6;
    func_0x000100087f6c(auStack_68);
    func_0x000100c7f554();
  }
  else {
    func_0x000107c61174();
    uVar4 = param_1;
    func_0x000107c5bd00();
    if ((uVar4 & 0xfffffffffffffffe) == 2) {
      uVar4 = param_1;
      func_0x000107c5bd00();
      auStack_68[0] = (ulong)(uVar4 == 2);
    }
    else {
      auStack_68[0] = (ulong)(bVar3 ^ 1);
    }
    auStack_68[0] = auStack_68[0] & 1;
    auStack_68[1] = 0;
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    uStack_48 = 6;
    func_0x000100087f6c(auStack_68);
    FUN_10332a9f4(uVar1,param_1,uVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10332aeac; end: 10332af03;  */

long FUN_10332aeac(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_10332af3c(param_2,unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x40) = param_3;
  return unaff_x20;
}



/* Entry: 10332af04; end: 10332af3b;  */

void FUN_10332af04(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_10332af3c(param_2,unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x40) = param_3;
  return;
}



/* Entry: 10332af3c; end: 10332af53;  */

undefined8 * FUN_10332af3c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10332af54; end: 10332b0f7;  */

long FUN_10332af54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 uStack_49;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c4a4d8();
  lVar3 = param_1;
  if (((int)lVar1 == 0) || (lVar1 = param_1, func_0x000107c5d0f0(), lVar1 == 4)) {
    FUN_10332b0f8(param_1,param_2);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    FUN_10332b0f8(param_1,param_2);
    if ((uVar4 & 0x801) != 0) {
      lVar1 = 0x112f5a3f0;
      func_0x0001000285a8(0x112f5a3f0,&UNK_10dbb2698);
      func_0x000107c61538();
      func_0x00010332c340();
      goto LAB_10332b068;
    }
  }
  lVar1 = 0x112f5a3f0;
  func_0x0001000285a8(0x112f5a3f0,&UNK_10dbb2698);
  func_0x000107c61538();
  func_0x00010332c340();
  lStack_48 = lVar1;
  func_0x000107c3e528();
  if ((((((uint)param_2 >> 1 & 1) != 0) && (*(char *)(unaff_x20 + 0x40) == '\x01')) &&
      (lVar2 = param_1, func_0x000107c5d0f0(), lVar2 != 0x11)) &&
     (lVar2 = param_1, func_0x000107c5d0f0(), lVar2 != 0x14)) {
    func_0x000107c5d0f0();
    if (param_1 == 0xe) {
      if (*(ulong *)(unaff_x20 + 0x10) != 1) goto LAB_10332b068;
    }
    else if ((*(ulong *)(unaff_x20 + 0x10) & 0x75f4) != 0) goto LAB_10332b068;
    FUN_10332bb48(&uStack_49,0,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
    FUN_10332bb48(&uStack_49,9,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
    lVar1 = lStack_48;
  }
LAB_10332b068:
  lStack_48 = lVar3;
  FUN_10332ba10(lVar1);
  return lStack_48;
}



/* Entry: 10332b0f8; end: 10332b723;  */

undefined * FUN_10332b0f8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_78 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar8 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d7e680;
  lStack_90 = lVar8;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_00;
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  uVar6 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_88 = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12_00;
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar6 = param_2;
  func_0x000107c3e528();
  if (((uint)uVar6 >> 3 & 1) != 0) {
    FUN_10332bb48(&uStack_69,4,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
  }
  uVar6 = param_2;
  func_0x000107c4b00c();
  func_0x000107c61180();
  if (uVar6 != 0) {
    uVar3 = uVar6;
    FUN_10332b724();
    if ((uVar3 & 1) != 0) {
      FUN_10332bb48(&uStack_69,0xe,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
    }
    func_0x000107c61170(uVar6);
  }
  uVar6 = param_2;
  func_0x000107c4b260();
  func_0x000107c61180();
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10332b724);
    (*pcVar7)();
  }
  uVar3 = uVar6;
  lStack_80 = lVar9;
  func_0x000107c3e2e0();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x00010332b810(param_1,uVar3);
  func_0x000107c61170(uVar3);
  if (((uint)param_1 & 0xff) != 0xf) {
    FUN_10332bb48(&uStack_69,param_1,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
  }
  uVar12 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
  if (((uVar12 >> 0xd & 1) == 0) &&
     (uVar6 = param_2, func_0x000107c3e528(), ((uint)uVar6 >> 2 & 1) != 0)) {
    FUN_10332bb48(&uStack_69,7,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
  }
  uVar6 = param_2;
  func_0x000107c3e528();
  if ((uVar6 & 1) != 0) {
    FUN_10332bb48(&uStack_69,8,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
  }
  if (((uVar12 >> 8 & 1) == 0) && (uVar6 = param_2, func_0x000107c3e528(), (uVar6 & 1) != 0)) {
    uVar6 = *(ulong *)(unaff_x20 + 0x30);
    lVar9 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,uVar6);
    (**(code **)(lVar9 + 8))(uVar6,lVar9);
    if ((uVar6 & 1) != 0) {
      FUN_10332bb48(&uStack_69,0xb,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
    }
    uVar6 = *(ulong *)(unaff_x20 + 0x30);
    lVar9 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,uVar6);
    (**(code **)(lVar9 + 0x10))(uVar6,lVar9);
    if ((uVar6 & 1) != 0) {
      FUN_10332bb48(&uStack_69,0xc,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
    }
  }
  uVar6 = param_2;
  func_0x000107c3e528();
  if (((uint)uVar6 >> 5 & 1) != 0) {
    FUN_10332bb48(&uStack_69,0xd,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
  }
  if ((uVar12 >> 8 & 1) != 0) {
    return puStack_68;
  }
  func_0x000107c4b260();
  func_0x000107c61180();
  if (param_2 == 0) {
    uVar5 = 1;
    lVar9 = lStack_80;
    lVar13 = lStack_78;
  }
  else {
    uVar6 = param_2;
    func_0x000107c414c4();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar13 = lStack_78;
    lVar9 = lStack_80;
    if (uVar6 == 0) {
      uVar5 = 1;
    }
    else {
      func_0x000107c5edb4(lVar10,uVar6);
      func_0x000107c61170(uVar6);
      uVar5 = 0;
    }
  }
  pcVar7 = *(code **)(lVar13 + 0x38);
  (*pcVar7)(lVar10,uVar5,1,lVar2);
  (*pcVar7)(lVar11,1,1,lVar2);
  lVar9 = (long)*(int *)(lVar9 + 0x30);
  func_0x000100029394(lVar10,lVar8);
  func_0x000100029394(lVar11,lVar8 + lVar9);
  pcVar7 = *(code **)(lVar13 + 0x30);
  lVar4 = lVar8;
  (*pcVar7)(lVar8,1,lVar2);
  uVar6 = uStack_88;
  if ((int)lVar4 == 1) {
    FUN_10332c600(lVar11,0x112d36580,&UNK_10d9016d0);
    FUN_10332c600(lVar10,0x112d36580,&UNK_10d9016d0);
    lVar9 = lVar8 + lVar9;
    (*pcVar7)(lVar9,1,lVar2);
    if ((int)lVar9 == 1) {
      FUN_10332c600(lVar8,0x112d36580,&UNK_10d9016d0);
      return puStack_68;
    }
  }
  else {
    func_0x000100029394(lVar8,uStack_88);
    lVar4 = lVar8 + lVar9;
    (*pcVar7)(lVar4,1,lVar2);
    lVar1 = lStack_90;
    if ((int)lVar4 != 1) {
      lVar4 = lStack_90;
      (**(code **)(lVar13 + 0x20))(lStack_90,lVar8 + lVar9,lVar2);
      func_0x000101553b98();
      uVar3 = uVar6;
      func_0x000107c5fab8(uVar6,lVar1,lVar2,lVar4);
      pcVar7 = *(code **)(lVar13 + 8);
      (*pcVar7)(lVar1,lVar2);
      FUN_10332c600(lVar11,0x112d36580,&UNK_10d9016d0);
      FUN_10332c600(lVar10,0x112d36580,&UNK_10d9016d0);
      (*pcVar7)(uVar6,lVar2);
      FUN_10332c600(lVar8,0x112d36580,&UNK_10d9016d0);
      if ((uVar3 & 1) != 0) {
        return puStack_68;
      }
      goto LAB_10332b638;
    }
    FUN_10332c600(lVar11,0x112d36580,&UNK_10d9016d0);
    FUN_10332c600(lVar10,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar13 + 8))(uVar6,lVar2);
  }
  FUN_10332c600(lVar8,0x112d7e680,&UNK_10d95e350);
LAB_10332b638:
  FUN_10332bb48(&uStack_69,10,0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
  return puStack_68;
}



/* Entry: 10332b724; end: 10332b9cb;  */

uint FUN_10332b724(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(ushort *)(unaff_x20 + 0x10) & 0x110) == 0) {
    uVar3 = param_1;
    func_0x000107c5b37c();
    func_0x000107c61180();
    if (uVar3 == 0) {
      uVar4 = 0;
      param_2 = 0;
    }
    else {
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
    }
    uVar2 = param_2;
    func_0x0001048daacc(uVar4,param_2);
    func_0x000107c6142c(param_2);
    if ((uVar4 & 1) == 0) {
      uVar1 = 1;
    }
    else {
      func_0x000107c5d984();
      func_0x000107c61180();
      if (param_1 == 0) {
        uVar3 = 0;
        uVar2 = 0;
      }
      else {
        uVar3 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
      }
      func_0x0001048daacc(uVar3,uVar2);
      func_0x000107c6142c(uVar2);
      uVar1 = (uint)uVar3 ^ 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10332b9cc; end: 10332b9ef;  */

void FUN_10332b9cc(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10332b9f0; end: 10332ba0f;  */

void FUN_10332b9f0(void)

{
  FUN_10332af54();
  return;
}



/* Entry: 10332ba10; end: 10332bb2b;  */

void FUN_10332ba10(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uStack_61;
  
  lVar6 = 0;
  puVar5 = (ulong *)(param_1 + 0x38);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar5;
  lVar1 = lVar6;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_10332bb48(&uStack_61,
                    *(undefined1 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) +
                     lVar1 * 0x40),0x112f5a4e0,&UNK_10dbb2738,&UNK_11063fec0);
      lVar6 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff,puVar5,~uVar7,lVar6,0);
      return;
    }
    uVar8 = puVar5[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10332bb2c);
  (*pcVar3)();
}



/* Entry: 10332bb2c; end: 10332bb47;  */

undefined8 FUN_10332bb2c(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long alStack_a8 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_a8,*(undefined8 *)(lVar4 + 0x28));
  uVar1 = param_2 & 0xff;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar4 + 0x30) + uVar1) == ((uint)param_2 & 0xff)) {
        uVar2 = 0;
        goto LAB_10332bc38;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_a8[0] = *unaff_x20;
  FUN_10332bc5c(param_2,uVar1,lVar4,0x112f5a4d8,&UNK_10dbb2730,&UNK_11063ff88);
  *unaff_x20 = alStack_a8[0];
  uVar2 = 1;
LAB_10332bc38:
  *param_1 = (char)param_2;
  return uVar2;
}



/* Entry: 10332bb48; end: 10332bc5b;  */

undefined8
FUN_10332bb48(undefined1 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long alStack_a8 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_a8,*(undefined8 *)(lVar4 + 0x28));
  uVar1 = param_2 & 0xff;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar4 + 0x30) + uVar1) == ((uint)param_2 & 0xff)) {
        uVar2 = 0;
        goto LAB_10332bc38;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_a8[0] = *unaff_x20;
  FUN_10332bc5c(param_2,uVar1,lVar4,param_3,param_4,param_5);
  *unaff_x20 = alStack_a8[0];
  uVar2 = 1;
LAB_10332bc38:
  *param_1 = (char)param_2;
  return uVar2;
}



/* Entry: 10332bc5c; end: 10332bda7;  */

void FUN_10332bc5c(byte param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_88 [72];
  
  uVar4 = (ulong)(uint)param_1;
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_10332bfc4(param_4,param_5);
    }
  }
  else {
    lVar5 = uVar3 + 1;
    if ((param_3 & 1) == 0) {
      FUN_10332bda8(lVar5,param_4,param_5);
    }
    else {
      FUN_10332c0f4(lVar5,param_4,param_5);
    }
    lVar5 = *unaff_x20;
    func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = uVar4 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((uint)*(byte *)(*(long *)(lVar5 + 0x30) + param_2) == (uint)param_1) {
          func_0x000107c60620(param_6);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10332bda8);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar5 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(byte *)(*(long *)(lVar2 + 0x30) + param_2) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10332bd9c);
  (*pcVar1)();
}



/* Entry: 10332bda8; end: 10332bfaf;  */

void FUN_10332bda8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_a8 [72];
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_2,param_3);
  lVar5 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,0,param_2);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_10332bf78:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar5;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(lVar12 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10332bfac);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) goto LAB_10332bf78;
        uVar11 = ((ulong *)(lVar12 + 0x38))[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar7;
    }
    bVar2 = *(byte *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6));
    uVar13 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar13 = uVar13 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar13 >> 6;
    uVar6 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar3 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar13 = uVar8 + 1;
        if ((uVar13 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10332bfb0);
          (*pcVar4)();
        }
        uVar8 = 0;
        if (uVar13 != uVar6) {
          uVar8 = uVar13;
        }
        bVar3 = (bool)(uVar13 == uVar6 | bVar3);
        uVar13 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(byte *)(*(long *)(lVar5 + 0x30) + uVar6) = bVar2;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 10332bfb0; end: 10332bfc3;  */

void FUN_10332bfb0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112f5a4d8,&UNK_10dbb2730);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10332c0f4);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_10332c0d4;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
    } while( true );
  }
LAB_10332c0d4:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 10332bfc4; end: 10332c0f3;  */

void FUN_10332bfc4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8();
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10332c0f4);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_10332c0d4;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
    } while( true );
  }
LAB_10332c0d4:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 10332c0f4; end: 10332c477;  */

void FUN_10332c0f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_2,param_3);
  lVar5 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,param_2);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_10332c30c:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar5;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *puVar13;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10332c33c);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar11 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_10332c30c;
        }
        uVar11 = puVar13[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar15 = lVar7;
    }
    bVar2 = *(byte *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6));
    uVar14 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar14 >> 6;
    uVar6 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar3 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar14 = uVar8 + 1;
        if ((uVar14 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10332c340);
          (*pcVar4)();
        }
        uVar8 = 0;
        if (uVar14 != uVar6) {
          uVar8 = uVar14;
        }
        bVar3 = (bool)(uVar14 == uVar6 | bVar3);
        uVar14 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(byte *)(*(long *)(lVar5 + 0x30) + uVar6) = bVar2;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 10332c478; end: 10332c5d7;  */

int FUN_10332c478(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10332c4f4;
        goto LAB_10332c4d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10332c4d8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10332c4f4:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10332c5d8; end: 10332c5f7;  */

void FUN_10332c5d8(void)

{
  func_0x000107c61168(&PTR_PTR_112f5a468);
  return;
}



/* Entry: 10332c5f8; end: 10332c5ff;  */

void FUN_10332c5f8(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10332c600; end: 10332c63f;  */

undefined8 FUN_10332c600(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10332c640; end: 10332c6ab;  */

void FUN_10332c640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined1 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 10332c6ac; end: 10332c6c3;  */

void FUN_10332c6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined1 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 10332c6c4; end: 10332c7d3;  */

void FUN_10332c6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar3;
  func_0x000107c4a4d8();
  if ((int)uVar1 != 0) {
    func_0x0001000d224c(auStack_b0);
    if (lStack_98 == 0) {
      FUN_10332ca38(auStack_b0,0x112f599d8,&UNK_10dbb1850);
    }
    else {
      FUN_10332c7d4(auStack_b0,auStack_88);
      uVar2 = uStack_70;
      func_0x0001000a8868(auStack_88,uStack_70);
      func_0x000107c4b1dc(uVar3);
      func_0x000107c61180();
      uVar1 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      (**(code **)(lStack_68 + 8))(uVar1,uVar2,param_1,param_2,param_3,param_4,uStack_70,lStack_68);
      func_0x000107c6142c(uVar2);
      func_0x0001000834e4(auStack_88);
    }
  }
  return;
}



/* Entry: 10332c7d4; end: 10332c7eb;  */

undefined8 * FUN_10332c7d4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10332c7ec; end: 10332c953;  */

void FUN_10332c7ec(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong auStack_68 [4];
  undefined1 uStack_48;
  
  func_0x0001000d224c(auStack_68);
  uVar1 = auStack_68[0];
  if (auStack_68[0] != 0) {
    uVar2 = auStack_68[0];
    func_0x000107c3d0ec();
    if ((uVar2 & 1) == 0) {
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      uVar2 = uVar1;
      func_0x000107c3d168(uVar1);
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x0001000b637c();
      func_0x000107c61170(uVar2);
      pcVar4 = FUN_10332c954;
      func_0x0001000c0ebc(FUN_10332c954,0);
      func_0x000107c61574(uVar3);
      uVar5 = 1;
      func_0x00010061b458(1);
      func_0x000107c61574(pcVar4);
      func_0x0001000d224c(auStack_68);
      uVar2 = auStack_68[0];
      func_0x000100471e0c(auStack_68[0],0);
      func_0x000107c61574(uVar5);
      func_0x000107c615e8(auStack_68[0]);
      func_0x0001000bfde0(FUN_10332c96c,0,&UNK_11063fb00);
      func_0x000107c615e8(uVar1);
      func_0x000107c61574(uVar2);
      return;
    }
    func_0x000107c615e8(uVar1);
  }
  func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
  auStack_68[0] = 5;
  auStack_68[1] = 0;
  auStack_68[2] = 0;
  auStack_68[3] = 0;
  uStack_48 = 0xd;
  func_0x000100854cb0(auStack_68);
  return;
}



/* Entry: 10332c954; end: 10332c96b;  */

void FUN_10332c954(undefined8 *param_1)

{
  func_0x000107c3ebcc(*param_1);
  return;
}



/* Entry: 10332c96c; end: 10332c983;  */

void FUN_10332c96c(undefined8 *param_1)

{
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0xd;
  return;
}



/* Entry: 10332c984; end: 10332ca37;  */

undefined8 FUN_10332c984(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  if (lStack_40 == 0) {
    FUN_10332ca38(auStack_58,0x112f599d0,&UNK_10dbb1848);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 8))(*(undefined8 *)(unaff_x20 + 0x10),lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  if ((*(ulong *)(unaff_x20 + 0x18) & 0x803) != 0 && (*(ulong *)(unaff_x20 + 0x18) & 0x40) == 0) {
    FUN_10332ca78();
  }
  return 0;
}



/* Entry: 10332ca38; end: 10332ca77;  */

undefined8 FUN_10332ca38(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10332ca78; end: 10332caeb;  */

void FUN_10332ca78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c51c38(lStack_38,param_2,&PTR____CFConstantStringClassReference_110e3d018,0);
    if (*(char *)(unaff_x20 + 0x40) == '\x01') {
      func_0x000107c4139c(lStack_38);
    }
    func_0x000107c615e8(lStack_38);
  }
  return;
}



/* Entry: 10332caec; end: 10332cb2f;  */

void FUN_10332caec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10332cb30; end: 10332cb93;  */

void FUN_10332cb30(void)

{
  FUN_10332c6c4();
  return;
}



/* Entry: 10332cb94; end: 10332cbb3;  */

void FUN_10332cb94(void)

{
  func_0x000107c61168(&PTR_PTR_112f5a528);
  return;
}



/* Entry: 10332cbb4; end: 10332cbf7;  */

void FUN_10332cbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 10332cbf8; end: 10332cc07;  */

void FUN_10332cbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 10332cc08; end: 10332cc8b;  */

void FUN_10332cc08(long param_1,undefined8 param_2)

{
  long lStack_38;
  
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c4a570(lStack_38,param_2,param_1);
      func_0x000107c615e8(lStack_38);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 10332cc8c; end: 10332cec3;  */

void FUN_10332cc8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c44fc0();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c615e8(lStack_48);
    }
    else {
      lVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
      puVar2 = &UNK_11063f980;
      func_0x000107c613fc(&UNK_11063f980,0x30,7);
      *(long *)(puVar2 + 0x10) = lStack_48;
      *(long *)(puVar2 + 0x18) = lVar1;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      *(undefined8 *)(puVar2 + 0x28) = uVar3;
      func_0x0001000285a8(0x112f5a230,&UNK_10dbb2510);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar3);
      func_0x0001000b64ac(FUN_10332cec4,puVar2);
    }
  }
  return;
}



/* Entry: 10332cec4; end: 10332cecf;  */

void FUN_10332cec4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar6 = &puStack_70;
  uVar3 = uVar4;
  func_0x000107c5fadc(uVar4,uVar1,uVar4,uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c45094(uVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uStack_50 = 0x10332d3e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10134a1dc;
  puStack_58 = &UNK_11063fa58;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x0001000d224c(&puStack_70);
  puVar2 = puStack_70;
  func_0x000107c5dc64(uVar5);
  func_0x000107c615e8(puVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar5);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10332ced0; end: 10332cf27;  */

void FUN_10332ced0(long param_1,long param_2)

{
  long alStack_48 [4];
  undefined1 uStack_28;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    alStack_48[1] = 0;
    alStack_48[2] = 0;
    alStack_48[3] = 0;
    uStack_28 = 4;
    alStack_48[0] = param_1;
    func_0x000107c61174();
    func_0x000100087f6c(alStack_48);
    func_0x000107c61170(param_1);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 10332cf28; end: 10332d02f;  */

void FUN_10332cf28(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lStack_38;
  
  if ((param_1 & 1) == 0) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 == 0) {
      return;
    }
    puVar1 = &UNK_11063f9a8;
    func_0x000107c613fc(&UNK_11063f9a8,0x20,7);
    *(long *)(puVar1 + 0x10) = lStack_38;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    func_0x0001000285a8(0x112f5a230,&UNK_10dbb2510);
    func_0x000107c613fc();
    func_0x000107c61174(param_2);
    pcVar2 = FUN_10332d278;
  }
  else {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 == 0) {
      return;
    }
    puVar1 = &UNK_11063f9d0;
    func_0x000107c613fc(&UNK_11063f9d0,0x20,7);
    *(long *)(puVar1 + 0x10) = lStack_38;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    func_0x0001000285a8(0x112f5a230,&UNK_10dbb2510);
    func_0x000107c613fc();
    func_0x000107c61174(param_2);
    pcVar2 = FUN_10332d2ac;
  }
  func_0x0001000b64ac(pcVar2,puVar1);
  return;
}



/* Entry: 10332d030; end: 10332d277;  */

void FUN_10332d030(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  lVar3 = param_3;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10332d150);
    (*pcVar2)();
  }
  func_0x000107c5b37c();
  func_0x000107c61180();
  if (param_3 != 0) {
    uStack_50 = 0x10332d3b4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ff4e10;
    puStack_58 = &UNK_11063fa08;
    uStack_48 = param_1;
    func_0x000107c60bc4(&puStack_70);
    uVar1 = uStack_48;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c5c33c(param_2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_3);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10332d154);
  (*pcVar2)();
}



/* Entry: 10332d278; end: 10332d27f;  */

void FUN_10332d278(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_70;
  lVar4 = lVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10332d274);
    (*pcVar3)();
  }
  func_0x000107c5b37c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uStack_50 = 0x10332d400;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ff4e10;
    puStack_58 = &UNK_11063fa30;
    uStack_48 = param_1;
    func_0x000107c60bc4(&puStack_70);
    uVar2 = uStack_48;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar2);
    func_0x000107c5d398(uVar1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10332d278);
  (*pcVar3)();
}



/* Entry: 10332d280; end: 10332d2ab;  */

void FUN_10332d280(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10332d2ac; end: 10332d2b3;  */

void FUN_10332d2ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_70;
  lVar4 = lVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10332d150);
    (*pcVar3)();
  }
  func_0x000107c5b37c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uStack_50 = 0x10332d3b4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ff4e10;
    puStack_58 = &UNK_11063fa08;
    uStack_48 = param_1;
    func_0x000107c60bc4(&puStack_70);
    uVar2 = uStack_48;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar2);
    func_0x000107c5c33c(uVar1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10332d154);
  (*pcVar3)();
}



/* Entry: 10332d2b4; end: 10332d2fb;  */

void FUN_10332d2b4(long param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if (param_1 != 0) {
    uStack_48 = 4;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0xd;
    func_0x000100087f6c(&uStack_48);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 10332d2fc; end: 10332d32f;  */

void FUN_10332d2fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10332d330; end: 10332d393;  */

uint FUN_10332d330(uint param_1)

{
  FUN_10332cc08();
  return param_1 & 1;
}



/* Entry: 10332d394; end: 10332d3cb;  */

void FUN_10332d394(void)

{
  func_0x000107c61168(&PTR_PTR_112f5a5f8);
  return;
}



/* Entry: 10332d3cc; end: 10332d403;  */

void FUN_10332d3cc(long param_1,long param_2)

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



/* Entry: 10332d404; end: 10332d44b;  */

uint FUN_10332d404(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_10332d44c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10332d44c; end: 10332dbdf;  */

/* WARNING: Possible PIC construction at 0x00010332d4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010332d680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010332d4fc) */
/* WARNING: Removing unreachable block (ram,0x00010332d684) */
/* WARNING: Removing unreachable block (ram,0x00010332d688) */

byte * FUN_10332d44c(byte *param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined1 in_ZR;
  uint uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *pbVar12;
  byte *unaff_x25;
  long unaff_x26;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  byte abStack_88 [40];
  
  pbVar7 = *(byte **)param_1;
  pbVar8 = *(byte **)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  pbVar11 = *(byte **)(param_1 + 0x18);
  uVar9 = (ulong)param_1[0x20];
  pbVar6 = param_1;
  pbVar12 = unaff_x24;
  switch(param_1[0x20]) {
  default:
    uVar9 = (ulong)param_2[0x20];
  case 0x20:
  case 0x2e:
    if ((int)uVar9 == 0) {
code_r0x00010332d498:
code_r0x00010332d72c:
      uVar9 = (ulong)*param_2;
code_r0x00010332d730:
      uVar4 = (uint)pbVar7 ^ (uint)uVar9 ^ 1;
      goto code_r0x00010332dbc0;
    }
    break;
  case 1:
  case 0xdf:
  case 0xf7:
    if (param_2[0x20] != 1) break;
    goto code_r0x00010332d72c;
  case 2:
    if (param_2[0x20] == 2) {
code_r0x00010332d54c:
      lVar10 = *(long *)param_2;
      uVar5 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c60118(pbVar7,lVar10,uVar5);
      uVar4 = (uint)pbVar7;
      goto code_r0x00010332dbc0;
    }
    break;
  case 3:
    if (param_2[0x20] == 3) {
      unaff_x24 = *(byte **)param_2;
      unaff_x26 = *(long *)(param_2 + 8);
      uVar9 = (ulong)param_2[0x12];
      goto code_r0x00010332d588;
    }
    break;
  case 4:
  case 100:
  case 0xd8:
  case 0xf0:
    if (param_2[0x20] == 4) goto code_r0x00010332d54c;
    break;
  case 5:
    if (param_2[0x20] == 5) goto code_r0x00010332d72c;
    break;
  case 6:
    if (param_2[0x20] == 6) goto code_r0x00010332d72c;
    break;
  case 7:
  case 0x52:
  case 0x97:
  case 0xb7:
    uVar9 = (ulong)param_2[0x20];
  case 0x99:
  case 0x9b:
  case 0x9f:
  case 0xbd:
    in_ZR = (int)uVar9 == 7;
code_r0x00010332d628:
    if (!(bool)in_ZR) break;
code_r0x00010332d62c:
    unaff_x24 = *(byte **)(param_2 + 8);
    unaff_x23 = *(byte **)(param_2 + 0x10);
    pbVar11 = *(byte **)param_2;
code_r0x00010332d634:
    param_3 = (byte *)0x0;
    func_0x0001007bbbf8(0);
code_r0x00010332d640:
    param_2 = pbVar11;
    param_1 = pbVar7;
code_r0x00010332d648:
code_r0x00010332d64c:
    func_0x000107c60118(param_1,param_2,param_3);
    if (((ulong)param_1 & 1) == 0) break;
    if (pbVar1 != (byte *)0x0) {
code_r0x00010332d658:
      if (unaff_x23 != (byte *)0x0) {
code_r0x00010332d65c:
        in_ZR = pbVar8 == unaff_x24;
code_r0x00010332d660:
        if ((bool)in_ZR) {
code_r0x00010332d664:
          if (pbVar1 == unaff_x23) goto code_r0x00010332d850;
        }
code_r0x00010332d66c:
        param_3 = unaff_x24;
        param_4 = unaff_x23;
        param_5 = 0;
        param_1 = pbVar8;
        param_2 = pbVar1;
code_r0x00010332d680:
        pbVar8 = param_2;
        pbVar7 = param_1;
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar7,pbVar8,param_3,param_4,param_5);
        return pbVar7;
      }
      break;
    }
joined_r0x00010332d75c:
    if (unaff_x23 != (byte *)0x0) break;
    goto code_r0x00010332d850;
  case 8:
    if (param_2[0x20] == 8) goto code_r0x00010332d72c;
    break;
  case 9:
    uVar9 = (ulong)param_2[0x20];
  case 200:
  case 0xd0:
    if ((int)uVar9 != 9) break;
    param_3 = *(byte **)param_2;
    param_4 = *(byte **)(param_2 + 8);
code_r0x00010332d4dc:
    if (pbVar7 != param_3 || pbVar8 != param_4) {
      param_5 = 0;
      goto code_r0x000107c605b8;
    }
    param_1 = pbVar1;
    unaff_x23 = *(byte **)(param_2 + 0x10);
    unaff_x24 = *(byte **)(param_2 + 0x18);
    if (pbVar1 != *(byte **)(param_2 + 0x10) || pbVar11 != *(byte **)(param_2 + 0x18)) {
code_r0x00010332d510:
      param_4 = unaff_x24;
      param_3 = unaff_x23;
      param_5 = 0;
      param_2 = pbVar11;
code_r0x00010332d530:
      pbVar8 = param_2;
      pbVar7 = param_1;
      goto code_r0x000107c605b8;
    }
    goto code_r0x00010332d850;
  case 10:
    uVar9 = (ulong)param_2[0x20];
  case 0x10:
    if ((int)uVar9 != 10) break;
    goto code_r0x00010332d72c;
  case 0xb:
  case 0x1e:
  case 0xf2:
    in_ZR = param_2[0x20] == 0xb;
  case 0x37:
    if (!(bool)in_ZR) break;
    goto code_r0x00010332d72c;
  case 0xc:
    if (param_2[0x20] == 0xc) goto code_r0x00010332d72c;
  case 0x84:
    break;
  case 0xd:
    if (((ulong)pbVar1 | (ulong)pbVar8) == 0 && (pbVar7 == (byte *)0x0 && pbVar11 == (byte *)0x0))
    goto code_r0x00010332d73c;
    uVar9 = (ulong)pbVar1 | (ulong)pbVar8 | (ulong)pbVar11;
  case 0x15:
  case 0x34:
    in_ZR = false;
    if (pbVar7 == (byte *)0x1) {
      in_ZR = uVar9 == 0;
    }
code_r0x00010332d6c8:
    if ((bool)in_ZR) {
      if (param_2[0x20] == 0xd) {
        in_ZR = *(long *)param_2 == 1;
code_r0x00010332d778:
        if ((bool)in_ZR) goto code_r0x00010332d7d8;
      }
      break;
    }
    in_ZR = pbVar7 == (byte *)0x2;
code_r0x00010332d6d0:
    if ((bool)in_ZR && uVar9 == 0) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 2)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x3) && (uVar9 == 0)) {
code_r0x00010332d6e4:
      uVar9 = (ulong)param_2[0x20];
code_r0x00010332d6e8:
      if (((int)uVar9 == 0xd) && (*(long *)param_2 == 3)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x4) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 4)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x5) && (uVar9 == 0)) {
code_r0x00010332d864:
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 5)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x6) && (uVar9 == 0)) {
code_r0x00010332d88c:
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 6)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x7) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 7)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x8) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 8)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x9) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 9)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0xa) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 10)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0xb) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0xb)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0xc) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0xc)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0xd) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0xd)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0xe) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0xe)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0xf) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0xf)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x10) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x10)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x11) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x11)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x12) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x12)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x13) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x13)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x14) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x14)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x15) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x15)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x16) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x16)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x17) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x17)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x18) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x18)) goto code_r0x00010332d7d8;
      break;
    }
    if ((pbVar7 == (byte *)0x19) && (uVar9 == 0)) {
      if ((param_2[0x20] == 0xd) && (*(long *)param_2 == 0x19)) goto code_r0x00010332d7d8;
      break;
    }
    if ((param_2[0x20] != 0xd) || (*(long *)param_2 != 0x1a)) break;
code_r0x00010332d7d8:
    if ((*(long *)(param_2 + 0x10) != 0 || *(long *)(param_2 + 0x18) != 0) ||
        *(long *)(param_2 + 8) != 0) break;
    goto code_r0x00010332d850;
  case 0x11:
  case 0x25:
    goto code_r0x00010332d7d8;
  case 0x12:
  case 0x26:
    goto code_r0x00010332d730;
  case 0x13:
  case 0x27:
    goto code_r0x00010332d498;
  case 0x14:
    goto code_r0x00010332d510;
  case 0x16:
    goto code_r0x00010332d778;
  case 0x24:
    goto code_r0x00010332d6e4;
  case 0x28:
    goto code_r0x00010332d680;
  case 0x29:
code_r0x00010332d73c:
    if (param_2[0x20] != 0xd) break;
    lVar3 = *(long *)(param_2 + 0x18);
    lVar10 = *(long *)(param_2 + 0x10);
    bVar13 = *param_2 | (byte)lVar10;
    bVar14 = param_2[1] | (byte)((ulong)lVar10 >> 8);
    bVar15 = param_2[2] | (byte)((ulong)lVar10 >> 0x10);
    bVar16 = param_2[3] | (byte)((ulong)lVar10 >> 0x18);
    bVar17 = param_2[4] | (byte)((ulong)lVar10 >> 0x20);
    bVar18 = param_2[5] | (byte)((ulong)lVar10 >> 0x28);
    bVar19 = param_2[6] | (byte)((ulong)lVar10 >> 0x30);
    bVar20 = param_2[7] | (byte)((ulong)lVar10 >> 0x38);
    bVar21 = param_2[8] | (byte)lVar3;
    bVar22 = param_2[9] | (byte)((ulong)lVar3 >> 8);
    bVar23 = param_2[10] | (byte)((ulong)lVar3 >> 0x10);
    bVar24 = param_2[0xb] | (byte)((ulong)lVar3 >> 0x18);
    bVar25 = param_2[0xc] | (byte)((ulong)lVar3 >> 0x20);
    bVar26 = param_2[0xd] | (byte)((ulong)lVar3 >> 0x28);
    bVar27 = param_2[0xe] | (byte)((ulong)lVar3 >> 0x30);
    bVar28 = param_2[0xf] | (byte)((ulong)lVar3 >> 0x38);
    auVar29[1] = bVar14;
    auVar29[0] = bVar13;
    auVar29[2] = bVar15;
    auVar29[3] = bVar16;
    auVar29[4] = bVar17;
    auVar29[5] = bVar18;
    auVar29[6] = bVar19;
    auVar29[7] = bVar20;
    auVar29[8] = bVar21;
    auVar29[9] = bVar22;
    auVar29[10] = bVar23;
    auVar29[0xb] = bVar24;
    auVar29[0xc] = bVar25;
    auVar29[0xd] = bVar26;
    auVar29[0xe] = bVar27;
    auVar29[0xf] = bVar28;
    auVar2[1] = bVar14;
    auVar2[0] = bVar13;
    auVar2[2] = bVar15;
    auVar2[3] = bVar16;
    auVar2[4] = bVar17;
    auVar2[5] = bVar18;
    auVar2[6] = bVar19;
    auVar2[7] = bVar20;
    auVar2[8] = bVar21;
    auVar2[9] = bVar22;
    auVar2[10] = bVar23;
    auVar2[0xb] = bVar24;
    auVar2[0xc] = bVar25;
    auVar2[0xd] = bVar26;
    auVar2[0xe] = bVar27;
    auVar2[0xf] = bVar28;
    auVar29 = NEON_ext(auVar29,auVar2,8,1);
    unaff_x23 = (byte *)CONCAT17(bVar20 | auVar29[7],
                                 CONCAT16(bVar19 | auVar29[6],
                                          CONCAT15(bVar18 | auVar29[5],
                                                   CONCAT14(bVar17 | auVar29[4],
                                                            CONCAT13(bVar16 | auVar29[3],
                                                                     CONCAT12(bVar15 | auVar29[2],
                                                                              CONCAT11(bVar14 | 
                                                  auVar29[1],bVar13 | auVar29[0])))))));
    goto joined_r0x00010332d75c;
  case 0x2a:
    goto code_r0x00010332d66c;
  case 0x2b:
    goto code_r0x00010332d864;
  case 0x35:
  case 0x51:
  case 0x96:
  case 0xb6:
    goto code_r0x00010332d658;
  case 0x36:
    goto code_r0x00010332d6e8;
  case 0x4b:
  case 0x90:
  case 0xb0:
    goto code_r0x00010332d5b4;
  case 0x4c:
  case 0x58:
  case 0x91:
  case 0xb1:
  case 0xbc:
    goto code_r0x00010332d648;
  case 0x4d:
  case 0x92:
  case 0xb2:
    goto code_r0x00010332d628;
  case 0x4e:
  case 0x57:
  case 0x93:
  case 0xb3:
  case 0xc1:
    goto code_r0x00010332d64c;
  case 0x4f:
  case 0x74:
  case 0x94:
  case 0xb4:
    goto code_r0x00010332d59c;
  case 0x50:
  case 0x95:
  case 0x9d:
  case 0xb5:
    goto code_r0x00010332d614;
  case 0x53:
    goto code_r0x00010332d594;
  case 0x54:
  case 0xc4:
    goto code_r0x00010332d61c;
  case 0x55:
  case 0x9e:
    goto code_r0x00010332d660;
  case 0x56:
  case 0xbb:
  case 0xc3:
    goto code_r0x00010332d634;
  case 0x60:
    goto code_r0x00010332d6d0;
  case 0x61:
code_r0x00010332d588:
    unaff_x23 = (byte *)(ulong)((uint)*(ushort *)(param_2 + 0x10) | (int)uVar9 << 0x10);
    unaff_x25 = param_1;
code_r0x00010332d594:
    pbVar11 = param_2;
code_r0x00010332d598:
    if (pbVar7 == (byte *)0x0) {
      pbVar12 = unaff_x24;
      param_1 = unaff_x25;
      if (unaff_x24 == (byte *)0x0) {
        FUN_10332df84(pbVar11,abStack_88);
        FUN_10332dfe4(unaff_x25);
code_r0x00010332d850:
        uVar4 = 1;
        goto code_r0x00010332dbc0;
      }
    }
    else {
code_r0x00010332d59c:
      pbVar12 = (byte *)0x0;
      param_1 = unaff_x25;
      if (unaff_x24 != (byte *)0x0) {
code_r0x00010332d5a0:
        param_1 = pbVar11;
        func_0x0001007bbbf8(0);
        param_2 = abStack_88;
code_r0x00010332d5b4:
        FUN_10332df84(param_1,param_2);
        param_2 = abStack_88;
code_r0x00010332d5bc:
        pbVar6 = unaff_x25;
        unaff_x25 = pbVar6;
code_r0x00010332d5c0:
        param_1 = unaff_x25;
        FUN_10332df84(pbVar6,param_2);
        func_0x000107c60118(pbVar7,unaff_x24);
        if (((ulong)pbVar7 & 1) == 0) {
          func_0x000107c6142c(unaff_x26);
          func_0x000107c61170(unaff_x24);
code_r0x00010332d804:
          FUN_10332dfe4(param_1);
        }
        else {
          func_0x00010333508c(pbVar8,unaff_x26);
          func_0x000107c6142c(unaff_x26);
          func_0x000107c61170(unaff_x24);
          FUN_10332dfe4(param_1);
          if (((ulong)pbVar8 & 1) != 0) {
            if ((((uint)pbVar1 ^ (uint)unaff_x23) & 1) == 0) {
              uVar9 = (ulong)(((uint)unaff_x23 ^ (uint)pbVar1) & 0x1ff00);
code_r0x00010332d614:
              if ((uVar9 & 0xffff01ff) == 0) goto code_r0x00010332d850;
code_r0x00010332d61c:
            }
          }
        }
        break;
      }
    }
    FUN_10332df84(pbVar11,abStack_88);
    param_2 = abStack_88;
code_r0x00010332d798:
    FUN_10332df84(param_1,param_2);
    func_0x00010332dd68(pbVar7,pbVar8,pbVar1);
    func_0x00010332dd68(pbVar12,unaff_x26,unaff_x23);
    break;
  case 0x62:
  case 0x72:
  case 0x82:
    goto code_r0x00010332d804;
  case 0x70:
    goto code_r0x00010332d6c8;
  case 0x71:
  case 0x81:
    goto code_r0x00010332d5bc;
  case 0x80:
    goto code_r0x00010332d798;
  case 0x98:
    goto code_r0x00010332d5a0;
  case 0x9a:
    goto code_r0x00010332d640;
  case 0x9c:
  case 0xc2:
    goto code_r0x00010332d62c;
  case 0xb8:
    goto code_r0x00010332d598;
  case 0xb9:
    goto code_r0x00010332d664;
  case 0xba:
  case 0xbe:
  case 0xbf:
    goto code_r0x00010332d65c;
  case 0xc0:
    goto code_r0x00010332d5c0;
  case 0xda:
    goto code_r0x00010332d4dc;
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xf4:
  case 0xf5:
  case 0xf6:
    goto code_r0x00010332d88c;
  case 0xe0:
  case 0xe8:
  case 0xf8:
    goto code_r0x00010332d530;
  }
  uVar4 = 0;
code_r0x00010332dbc0:
  return (byte *)(ulong)(uVar4 & 1);
}



/* Entry: 10332dbe0; end: 10332dcc7;  */

long FUN_10332dbe0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10332dcc8; end: 10332dcdb;  */

/* WARNING: Possible PIC construction at 0x00010332dd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010332dd7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010332dd18) */
/* WARNING: Removing unreachable block (ram,0x00010332dd80) */

void FUN_10332dcc8(long *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  lVar1 = param_1[2];
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 < 4) {
    if (bVar2 != 2) {
      if (bVar2 != 3) {
        return;
      }
      if (*param_1 == 0) {
        return;
      }
    }
  }
  else if (bVar2 != 4) {
    if (bVar2 == 7) {
      func_0x000107c61170();
      lVar3 = lVar1;
    }
    else if (bVar2 != 9) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10332dcdc; end: 10332dd93;  */

/* WARNING: Possible PIC construction at 0x00010332dd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010332dd7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010332dd18) */
/* WARNING: Removing unreachable block (ram,0x00010332dd80) */

void FUN_10332dcdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 < 4) {
    if (param_5 != 2) {
      if (param_5 != 3) {
        return;
      }
      if (param_1 == 0) {
        return;
      }
    }
  }
  else if (param_5 != 4) {
    if (param_5 == 7) {
      func_0x000107c61170();
      param_2 = param_3;
    }
    else if (param_5 != 9) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10332dd94; end: 10332de63;  */

undefined8 * FUN_10332dd94(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010332dc0c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 10332de64; end: 10332deab;  */

undefined8 * FUN_10332de64(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10332dcdc(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 10332deac; end: 10332df83;  */

int FUN_10332deac(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf2 < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xf3;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 0xe) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10332df84; end: 10332dfe3;  */

undefined8 * FUN_10332df84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *(undefined1 *)(param_1 + 4);
  func_0x00010332dc0c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_2 = uVar1;
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  param_2[3] = uVar4;
  *(undefined1 *)(param_2 + 4) = uVar5;
  return param_2;
}



/* Entry: 10332dfe4; end: 10332e017;  */

undefined8 * FUN_10332dfe4(undefined8 *param_1)

{
  FUN_10332dcdc(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return param_1;
}



/* Entry: 10332e018; end: 10332e0d3;  */

undefined1 FUN_10332e018(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar2 = (ulong)(param_1 & 0xff);
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar1 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(param_2 + 0x30) + uVar2) == (param_1 & 0xff)) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar1;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 10332e0d4; end: 10332e7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10332e0d4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long unaff_x20;
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_d0 = param_18;
  uStack_d8 = param_17;
  uStack_e0 = param_16;
  auStack_f0[0] = param_15;
  uStack_88 = param_14;
  uStack_80 = param_12;
  uStack_78 = param_13;
  uStack_70 = param_11;
  uStack_a8 = param_10;
  uStack_a0 = param_9;
  lVar8 = 0;
  auStack_f0[1] = param_8;
  uStack_c8 = param_1;
  uStack_c0 = param_4;
  uStack_b8 = param_2;
  uStack_ac = param_3;
  uStack_98 = param_7;
  uStack_90 = param_6;
  FUN_103332bd4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)auStack_f0 + lVar2);
  func_0x000107c613fc();
  lVar9 = unaff_x20 + _DAT_112f5a668;
  *(undefined8 *)(lVar9 + 8) = 0;
  func_0x000107c61614(lVar9,0);
  *(undefined8 *)(lVar9 + 8) = param_5;
  func_0x000107c61604();
  FUN_10332e7d0(param_6,unaff_x20 + _DAT_112f5a670);
  FUN_10332e7d0(param_7,unaff_x20 + _DAT_112f5a678);
  *(undefined8 *)(unaff_x20 + _DAT_112f5a680) = param_8;
  FUN_10332e7d0(param_9,unaff_x20 + _DAT_112f5a688);
  FUN_10332e7d0(param_10,unaff_x20 + _DAT_112f5a690);
  FUN_10332e7d0(uStack_70,unaff_x20 + _DAT_112f5a698);
  FUN_10332e7d0(uStack_80,unaff_x20 + _DAT_112f5a6a0);
  FUN_10332e7d0(uStack_78,unaff_x20 + _DAT_112f5a6a8);
  func_0x00010332fa38(uStack_88,unaff_x20 + _DAT_112f5a6b0,0x112f58f30,&UNK_10dbb11f0);
  uVar3 = auStack_f0[0];
  FUN_10332e7d0(auStack_f0[0],unaff_x20 + _DAT_112f5a6b8);
  uVar5 = uStack_e0;
  FUN_10332e7d0(uStack_e0,unaff_x20 + _DAT_112f5a6c0);
  uVar6 = uStack_d8;
  FUN_10332e7d0(uStack_d8,unaff_x20 + _DAT_112f5a6c8);
  uVar7 = uStack_d0;
  func_0x00010332f928(uStack_d0,unaff_x20 + _DAT_112f5a6d0,FUN_103331784);
  iVar1 = *(int *)(lVar8 + 0x20);
  lVar9 = 0;
  func_0x00010437500c();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))((long)puVar11 + (long)iVar1,1,1,lVar9);
  uVar4 = uStack_b8;
  uVar10 = uStack_c8;
  *puVar11 = uStack_c8;
  *(undefined8 *)((long)auStack_f0 + lVar2 + 8) = uVar4;
  *(char *)((long)&uStack_e0 + lVar2) = (char)uStack_ac;
  *(undefined1 *)((long)&uStack_e0 + lVar2 + 1) = 0;
  *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x24)) = 0;
  *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x28)) = 1;
  *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x2c)) = 0;
  *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x30)) = 0;
  *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x34)) = 0;
  *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x38)) = 0;
  *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x3c)) = 0;
  *(undefined **)((long)puVar11 + (long)*(int *)(lVar8 + 0x40)) =
       PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x44)) = 0;
  *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x48)) = 0;
  *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x4c)) = 0;
  *(undefined **)((long)puVar11 + (long)*(int *)(lVar8 + 0x50)) =
       PTR___swiftEmptySetSingleton_11034f1d8;
  uVar4 = auStack_f0[1];
  func_0x000107c6157c(auStack_f0[1]);
  func_0x000107c61174();
  func_0x000103dbf4dc(puVar11);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uStack_c0);
  func_0x00010332f9fc(uVar7,FUN_103331784);
  func_0x0001000834e4(uVar6);
  func_0x0001000834e4(uVar5);
  func_0x0001000834e4(uVar3);
  func_0x00010332f9bc(uStack_88,0x112f58f30,&UNK_10dbb11f0);
  func_0x0001000834e4(uStack_78);
  func_0x0001000834e4(uStack_80);
  func_0x0001000834e4(uStack_70);
  func_0x0001000834e4(uStack_a8);
  func_0x0001000834e4(uStack_a0);
  func_0x0001000834e4(uStack_98);
  func_0x0001000834e4(uStack_90);
  return puVar11;
}



/* Entry: 10332e7d0; end: 10332e813;  */

long FUN_10332e7d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10332e814; end: 10332f927;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10332e814(long param_1,ulong *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  long extraout_x8_03;
  byte bVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long lVar19;
  long unaff_x20;
  code *pcVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long alStack_130 [4];
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined1 auStack_90 [48];
  
  uVar4 = *param_2;
  uVar7 = param_2[1];
  uVar10 = param_2[2];
  lVar3 = 0;
  func_0x00010437500c();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)alStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112f5a6d8;
  lStack_108 = lVar12;
  func_0x0001000285a8(0x112f5a6d8,&UNK_10dbb2b60);
  alStack_130[2] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  lVar16 = 0x112f59918;
  lStack_100 = lVar12;
  func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  uVar15 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_110 = uVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar15 - extraout_x12;
  alStack_130[3] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12_00;
  alStack_130[1] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined8 *)(lVar16 - extraout_x12_01);
  puStack_f0 = puVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = (long)puVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = 0x112d36580;
  lStack_e8 = lVar22 - extraout_x12_03;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar18 = (lVar22 - extraout_x12_03) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  alStack_130[0] = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar18 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_f8 = lVar18 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = (lVar18 - extraout_x12_05) - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar23 - extraout_x12_07;
  lVar12 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar19 = lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = lVar19 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = lVar26 - extraout_x12_09;
  lVar16 = param_1;
  FUN_10332f928(param_3,param_1,FUN_103332bd4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[4]) {
  case '\0':
    lVar16 = 0;
    FUN_103332bd4();
    lVar16 = (long)*(int *)(lVar16 + 0x24);
    goto code_r0x00010332ed44;
  case '\x01':
    lVar16 = 0;
    FUN_103332bd4();
    lVar16 = (long)*(int *)(lVar16 + 0x28);
    goto code_r0x00010332ed44;
  case '\x02':
    lVar16 = 0;
    FUN_103332bd4();
    iVar1 = *(int *)(lVar16 + 0x2c);
    goto code_r0x00010332ecf8;
  case '\x03':
    if (uVar4 != 0) {
      FUN_10332df84(param_2,auStack_90);
      func_0x00010332dc9c(uVar4,uVar7,uVar10);
      func_0x00010332dd68(uVar4,uVar7,uVar10);
      func_0x00010332dd68(0,0,0);
      lVar16 = 0;
      FUN_103332bd4();
      *(undefined1 *)(param_1 + *(int *)(lVar16 + 0x38)) = 1;
      iVar1 = *(int *)(lVar16 + 0x34);
      uVar8 = *(undefined8 *)(param_1 + iVar1);
      uVar15 = uVar4;
      func_0x000107c61174(uVar4);
      func_0x000107c61170(uVar8);
      *(ulong *)(param_1 + iVar1) = uVar4;
      iVar1 = *(int *)(lVar16 + 0x40);
      uVar8 = *(undefined8 *)(param_1 + iVar1);
      func_0x000107c61170(uVar15);
      func_0x000107c6142c(uVar8);
      *(ulong *)(param_1 + iVar1) = uVar7;
      *(byte *)(param_1 + *(int *)(lVar16 + 0x44)) = (byte)uVar10 & 1;
      *(byte *)(param_1 + *(int *)(lVar16 + 0x48)) = (byte)(uVar10 >> 8) & 1;
      *(byte *)(param_1 + *(int *)(lVar16 + 0x4c)) = (byte)(uVar10 >> 0x10) & 1;
      return;
    }
    FUN_10332dfe4(param_2);
    lVar16 = 0;
    FUN_103332bd4();
    lVar16 = (long)*(int *)(lVar16 + 0x38);
    bVar14 = 2;
code_r0x00010332ed68:
    *(byte *)(param_1 + lVar16) = bVar14;
    break;
  case '\x04':
    lVar16 = 0;
    FUN_103332bd4();
    iVar1 = *(int *)(lVar16 + 0x30);
code_r0x00010332ecf8:
    uVar8 = *(undefined8 *)(param_1 + iVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(uVar8);
    *(ulong *)(param_1 + iVar1) = uVar4;
    break;
  case '\x05':
    uVar9 = 1;
    if ((uVar4 & 1) == 0) {
      uVar9 = 2;
    }
    lVar16 = 0;
    FUN_103332bd4();
    *(undefined1 *)(param_1 + *(int *)(lVar16 + 0x3c)) = uVar9;
    break;
  case '\x06':
    lVar16 = 0;
    FUN_103332bd4();
    lVar16 = (long)*(int *)(lVar16 + 0x48);
code_r0x00010332ed44:
    *(char *)(param_1 + lVar16) = (char)uVar4;
    break;
  case '\b':
    lVar16 = 0;
    FUN_103332bd4();
    FUN_103330ec8((long)*(int *)(lVar16 + 0x50),1);
    break;
  case '\n':
    lVar16 = 0;
    FUN_103332bd4();
    FUN_103330ec8((long)*(int *)(lVar16 + 0x50),2);
    break;
  case '\v':
    lVar16 = 0;
    FUN_103332bd4();
    FUN_103330ec8((long)*(int *)(lVar16 + 0x50),4);
    if ((uVar4 & 1) == 0) {
      return;
    }
code_r0x00010332ed84:
    uVar9 = 2;
    goto code_r0x00010332ed88;
  case '\f':
    lVar16 = 0;
    FUN_103332bd4();
    FUN_103330ec8((long)*(int *)(lVar16 + 0x50),5);
    *(undefined1 *)(param_1 + 0x11) = 2;
    break;
  case '\r':
    uVar15 = param_2[3];
    if ((uVar10 == 0 && uVar7 == 0) && (uVar4 == 0 && uVar15 == 0)) {
      return;
    }
    if ((uVar4 == 1) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
      uVar9 = 1;
    }
    else {
      if (((uVar4 & 0xfffffffffffffffe) == 2) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0))
      goto code_r0x00010332ed84;
      if ((uVar4 == 4) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
code_r0x00010332edbc:
        lVar16 = 0;
        FUN_103332bd4();
        iVar1 = *(int *)(lVar16 + 0x44);
code_r0x00010332edc8:
        lVar16 = (long)iVar1;
        bVar14 = (*(byte *)((long)param_3 + lVar16) ^ 0xff) & 1;
        goto code_r0x00010332ed68;
      }
      if ((uVar4 == 5) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        FUN_10332bb2c((long)*(int *)(lVar16 + 0x50),auStack_90,5);
        return;
      }
      if ((uVar4 == 6) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) goto code_r0x00010332ed84;
      if ((uVar4 == 7) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) goto code_r0x00010332edbc;
      if ((uVar4 == 8) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
code_r0x00010332ee30:
        lVar16 = 0;
        FUN_103332bd4();
        uVar4 = 0;
        FUN_10332e018(0,*(undefined8 *)((long)param_3 + (long)*(int *)(lVar16 + 0x40)));
        if ((uVar4 & 1) != 0) {
          FUN_10332bb2c((long)*(int *)(lVar16 + 0x50),auStack_90,4);
          return;
        }
        return;
      }
      if ((uVar4 == 9) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        iVar1 = *(int *)(lVar16 + 0x48);
        goto code_r0x00010332edc8;
      }
      if ((uVar4 == 10) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        lVar18 = *(long *)((long)param_3 + (long)*(int *)(lVar16 + 0x34));
        if (lVar18 == 0) {
          (**(code **)(lVar13 + 0x38))(lVar24,1,1,lVar12);
        }
        else {
          lVar19 = lVar18;
          func_0x000107c4b260();
          func_0x000107c61180();
          if (lVar19 == 0) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x10332f920);
            (*pcVar20)();
          }
          lVar22 = lVar19;
          func_0x000107c414c4();
          func_0x000107c61180();
          func_0x000107c61170(lVar19);
          if (lVar22 != 0) {
            func_0x000107c5edb4(lVar23,lVar22);
            func_0x000107c61170(lVar22);
          }
          pcVar20 = *(code **)(lVar13 + 0x38);
          (*pcVar20)(lVar23,lVar22 == 0,1,lVar12);
          func_0x0001001021cc(lVar23,lVar24);
          lVar19 = lVar24;
          (**(code **)(lVar13 + 0x30))(lVar24,1,lVar12);
          if ((int)lVar19 != 1) {
            (**(code **)(lVar13 + 0x20))(lVar27,lVar24,lVar12);
            *(undefined1 *)(param_1 + 0x11) = 2;
            lVar19 = 0x112f5a6e0;
            func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
            lVar23 = lStack_e8;
            iVar1 = *(int *)(lVar19 + 0x30);
            iVar2 = *(int *)(lVar19 + 0x40);
            (**(code **)(lVar13 + 0x10))(lStack_e8,lVar27,lVar12);
            (*pcVar20)(lVar23,0,1,lVar12);
            lVar19 = unaff_x20 + _DAT_112f5a678;
            uVar8 = *(undefined8 *)(lVar19 + 0x18);
            lVar22 = *(long *)(lVar19 + 0x20);
            func_0x0001000a8868(lVar19,uVar8);
            uVar25 = *param_3;
            (**(code **)(lVar22 + 8))(uVar25,uVar8,lVar22);
            uVar8 = uVar25;
            func_0x00010488b12c();
            func_0x000107c61574(uVar25);
            *(undefined8 *)(lVar23 + iVar1) = uVar8;
            func_0x000107c4b260();
            func_0x000107c61180();
            lVar19 = lVar18;
            FUN_10331e34c();
            func_0x000107c61170(lVar18);
            (**(code **)(lVar13 + 8))(lVar27,lVar12);
            *(long *)(lVar23 + iVar2) = lVar19;
            func_0x000107c6159c(lVar23,lVar3,0);
            (**(code **)(lVar11 + 0x38))(lVar23,0,1,lVar3);
            func_0x00010332f96c(lVar23,param_1 + *(int *)(lVar16 + 0x20));
            return;
          }
        }
        func_0x00010332f9bc(lVar24,0x112d36580,&UNK_10d9016d0);
        return;
      }
      if ((uVar4 == 0xb) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        lVar3 = *(long *)((long)param_3 + (long)*(int *)(lVar16 + 0x34));
        if (lVar3 == 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0x11) = 2;
        func_0x000107c61174();
        lVar12 = lVar3;
        func_0x000107c4b00c();
        func_0x000107c61180();
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10332f924);
          (*pcVar20)();
        }
        FUN_10331e84c(lVar22);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar3);
        func_0x00010332f96c(lVar22,param_1 + *(int *)(lVar16 + 0x20));
        return;
      }
      if ((uVar4 == 0xc) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        FUN_10332bb2c((long)*(int *)(lVar16 + 0x50),auStack_90,0);
        return;
      }
      if ((uVar4 == 0xd) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        FUN_103330ec8((long)*(int *)(lVar16 + 0x50),0);
        return;
      }
      if ((uVar4 == 0xe) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) goto code_r0x00010332ee30;
      if ((uVar4 == 0xf) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        FUN_10332bb2c((long)*(int *)(lVar16 + 0x50),auStack_90,1);
        return;
      }
      if ((uVar4 == 0x10) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        FUN_10332bb2c((long)*(int *)(lVar16 + 0x50),auStack_90,2);
        return;
      }
      if ((uVar4 == 0x11) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        FUN_10332bb2c((long)*(int *)(lVar16 + 0x50),auStack_90,3);
        return;
      }
      if ((uVar4 == 0x12) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        lVar16 = 0;
        FUN_103332bd4();
        FUN_103330ec8((long)*(int *)(lVar16 + 0x50),3);
        return;
      }
      if ((uVar4 - 0x13 < 2) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        *(undefined1 *)(param_1 + 0x11) = 2;
        puVar21 = (undefined *)*param_3;
        lVar16 = 0;
        FUN_103332bd4();
        lVar12 = *(long *)((long)param_3 + (long)*(int *)(lVar16 + 0x34));
        if (lVar12 == 0) {
          lVar13 = 0;
        }
        else {
          func_0x000107c4b260();
          func_0x000107c61180();
          if (lVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x10332f928);
            (*pcVar20)();
          }
          lVar13 = lVar12;
          func_0x000107c3e2e0();
          func_0x000107c61180();
          func_0x000107c61170(lVar12);
        }
        puVar5 = puVar21;
        func_0x000107c5d2f0();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
          if (lVar13 != 0) {
            puVar21 = PTR_PTR_1126b0820;
            func_0x000107c61168();
            lVar12 = lVar13;
            func_0x000107c61174(lVar13);
            func_0x000107c4b184();
            func_0x000107c61180();
            puVar5 = puVar21;
            FUN_10331da80();
            puVar6 = puVar21;
            func_0x000107c5e854();
            func_0x000107c61180();
            func_0x000107c61170(puVar21);
            func_0x000107c61170(puVar5);
            puVar21 = puVar6;
            func_0x000107c3ecc8();
            func_0x000107c61180();
            func_0x000107c61170(lVar12);
            func_0x000107c61170(puVar6);
            goto code_r0x00010332f4c4;
          }
        }
        else {
          func_0x000107c61170();
        }
        func_0x000107c61174();
code_r0x00010332f4c4:
        puVar5 = puVar21;
        func_0x000107c5d2f0();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
          func_0x000107c61170(puVar21);
        }
        else {
          func_0x000107c61170();
          puVar17 = puStack_f0;
          *puStack_f0 = puVar21;
          func_0x000107c6159c(puVar17,lVar3,3);
        }
        puVar17 = puStack_f0;
        (**(code **)(lVar11 + 0x38))(puStack_f0,puVar5 == (undefined *)0x0,1,lVar3);
        func_0x000107c61170(lVar13);
        func_0x00010332f96c(puVar17,param_1 + *(int *)(lVar16 + 0x20));
        return;
      }
      if ((uVar4 == 0x15) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        uVar25 = *param_3;
        func_0x000107c4b1dc(uVar25);
        func_0x000107c61180();
        uVar8 = uVar25;
        func_0x000107c5faec();
        func_0x000107c61170(uVar25);
        lVar18 = lStack_f8;
        FUN_10333142c(lStack_f8,uVar8,lVar16);
        func_0x000107c6142c(lVar16);
        (**(code **)(lVar13 + 0x30))(lVar18,1,lVar12);
        if ((int)lVar18 == 1) {
          func_0x00010332f9bc(lStack_f8,0x112d36580,&UNK_10d9016d0);
          return;
        }
        pcVar20 = *(code **)(lVar13 + 0x20);
        (*pcVar20)(lVar26,lStack_f8,lVar12);
        *(undefined1 *)(param_1 + 0x11) = 2;
        lVar16 = 0;
        FUN_103332bd4();
        lVar16 = (long)*(int *)(lVar16 + 0x20);
        func_0x00010332f9bc(param_1 + lVar16,0x112f59918,&UNK_10dbb28c0);
        (*pcVar20)(param_1 + lVar16,lVar26,lVar12);
        func_0x000107c6159c(param_1 + lVar16,lVar3,5);
        pcVar20 = *(code **)(lVar11 + 0x38);
code_r0x00010332f6c0:
        (*pcVar20)(param_1 + lVar16,0,1,lVar3);
        return;
      }
      if ((uVar4 == 0x16) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        func_0x00010332fa38(unaff_x20 + _DAT_112f5a6d0,lVar18,0x112d36580,&UNK_10d9016d0);
        lVar16 = lVar18;
        (**(code **)(lVar13 + 0x30))(lVar18,1,lVar12);
        if ((int)lVar16 == 1) {
          func_0x00010332f9bc(lVar18,0x112d36580,&UNK_10d9016d0);
          return;
        }
        pcVar20 = *(code **)(lVar13 + 0x20);
        (*pcVar20)(lVar19,lVar18,lVar12);
        *(undefined1 *)(param_1 + 0x11) = 2;
        lVar16 = 0;
        FUN_103332bd4();
        lVar16 = (long)*(int *)(lVar16 + 0x20);
        func_0x00010332f9bc(param_1 + lVar16,0x112f59918,&UNK_10dbb28c0);
        (*pcVar20)(param_1 + lVar16,lVar19,lVar12);
        func_0x000107c6159c(param_1 + lVar16,lVar3,4);
        pcVar20 = *(code **)(lVar11 + 0x38);
        goto code_r0x00010332f6c0;
      }
      if ((uVar4 - 0x17 < 2) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0))
      goto code_r0x00010332ed84;
      if ((uVar4 == 0x19) && ((uVar10 == 0 && uVar7 == 0) && uVar15 == 0)) {
        return;
      }
      lVar16 = 0;
      FUN_103332bd4();
      lVar18 = *(long *)((long)param_3 + (long)*(int *)(lVar16 + 0x34));
      if (lVar18 == 0) {
code_r0x00010332f6d4:
        uVar8 = 1;
      }
      else {
        func_0x000107c4b260();
        func_0x000107c61180();
        if (lVar18 == 0) goto code_r0x00010332f6d4;
        lVar19 = lVar18;
        func_0x000107c41f58();
        func_0x000107c61180();
        func_0x000107c61170(lVar18);
        if (lVar19 == 0) goto code_r0x00010332f6d4;
        func_0x000107c5edb4(alStack_130[0],lVar19);
        func_0x000107c61170(lVar19);
        uVar8 = 0;
      }
      lVar18 = alStack_130[0];
      (**(code **)(lVar13 + 0x38))(alStack_130[0],uVar8,1,lVar12);
      lVar12 = alStack_130[1];
      FUN_10331ea48(alStack_130[1],lVar18);
      func_0x00010332f9bc(lVar18,0x112d36580,&UNK_10d9016d0);
      iVar1 = *(int *)(lVar16 + 0x20);
      func_0x00010332f96c(lVar12,param_1 + iVar1);
      lVar12 = alStack_130[3];
      (**(code **)(lVar11 + 0x38))(alStack_130[3],1,1,lVar3);
      lVar13 = lStack_100;
      lVar16 = (long)*(int *)(alStack_130[2] + 0x30);
      func_0x00010332fa38(param_1 + iVar1,lStack_100,0x112f59918,&UNK_10dbb28c0);
      func_0x00010332fa38(lVar12,lVar13 + lVar16,0x112f59918,&UNK_10dbb28c0);
      pcVar20 = *(code **)(lVar11 + 0x30);
      (*pcVar20)(lVar13,1,lVar3);
      lVar12 = lStack_100;
      if ((int)lVar13 == 1) {
        func_0x00010332f9bc(alStack_130[3],0x112f59918,&UNK_10dbb28c0);
        lVar16 = lStack_100 + lVar16;
        (*pcVar20)(lVar16,1,lVar3);
        if ((int)lVar16 != 1) {
code_r0x00010332f874:
          func_0x00010332f9bc(lStack_100,0x112f5a6d8,&UNK_10dbb2b60);
          goto code_r0x00010332ed84;
        }
        func_0x00010332f9bc(lStack_100,0x112f59918,&UNK_10dbb28c0);
      }
      else {
        func_0x00010332fa38(lStack_100,uStack_110,0x112f59918,&UNK_10dbb28c0);
        lVar12 = lVar12 + lVar16;
        (*pcVar20)(lVar12,1,lVar3);
        lVar11 = lStack_100;
        lVar3 = lStack_108;
        if ((int)lVar12 == 1) {
          func_0x00010332f9bc(alStack_130[3],0x112f59918,&UNK_10dbb28c0);
          func_0x00010332f9fc(uStack_110,&SUB_10437500c);
          goto code_r0x00010332f874;
        }
        FUN_10331d77c(lStack_100 + lVar16,lStack_108);
        uVar4 = uStack_110;
        uVar7 = uStack_110;
        func_0x000104373cb4(uStack_110,lVar3);
        func_0x00010332f9fc(lVar3,&SUB_10437500c);
        func_0x00010332f9bc(alStack_130[3],0x112f59918,&UNK_10dbb28c0);
        func_0x00010332f9fc(uVar4,&SUB_10437500c);
        func_0x00010332f9bc(lVar11,0x112f59918,&UNK_10dbb28c0);
        if ((uVar7 & 1) == 0) goto code_r0x00010332ed84;
      }
      uVar9 = *(undefined1 *)((long)param_3 + 0x11);
    }
code_r0x00010332ed88:
    *(undefined1 *)(param_1 + 0x11) = uVar9;
  }
  return;
}



/* Entry: 10332f928; end: 10332fa7f;  */

undefined8 FUN_10332f928(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10332fa80; end: 10332fe27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10332fa80(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  
  if ((char)param_1[4] == '\r') {
    if (((param_1[2] == 0 && param_1[3] == 0) && param_1[1] == 0) && *param_1 == 0) {
      lVar7 = unaff_x20 + _DAT_112f5a6c8;
      uVar1 = *(undefined8 *)(lVar7 + 0x18);
      lVar8 = *(long *)(lVar7 + 0x20);
      func_0x0001000a8868(lVar7,uVar1);
      (**(code **)(lVar8 + 8))(uVar1,lVar8);
      return;
    }
    if (*param_1 != 3 || ((param_1[2] != 0 || param_1[3] != 0) || param_1[1] != 0))
    goto LAB_10332fad4;
    FUN_103331150(param_2);
    lVar7 = unaff_x20 + _DAT_112f5a6c8;
    uVar1 = *(undefined8 *)(lVar7 + 0x18);
    lVar8 = *(long *)(lVar7 + 0x20);
    func_0x0001000a8868(lVar7,uVar1);
    (**(code **)(lVar8 + 0x10))(param_2,uVar1,lVar8);
  }
  else {
LAB_10332fad4:
    puVar5 = param_2;
    FUN_1033227f4();
    if (((uint)puVar5 & 0xff) != 0x10) {
      lVar7 = unaff_x20 + _DAT_112f5a6c8;
      uVar1 = *(undefined8 *)(lVar7 + 0x18);
      lVar8 = *(long *)(lVar7 + 0x20);
      func_0x0001000a8868(lVar7,uVar1);
      (**(code **)(lVar8 + 0x18))(puVar5,uVar1,lVar8);
    }
    uVar12 = *param_1;
    cVar4 = (char)param_1[4];
    if (cVar4 == '\0') {
      lVar7 = unaff_x20 + _DAT_112f5a668;
      lVar8 = lVar7;
      func_0x000107c61618();
      if ((uVar12 & 1) == 0) {
        if (lVar8 == 0) {
          return;
        }
        lVar7 = *(long *)(lVar7 + 8);
        func_0x000107c614f0();
        pcVar11 = *(code **)(lVar7 + 0x18);
      }
      else {
        if (lVar8 == 0) {
          return;
        }
        lVar7 = *(long *)(lVar7 + 8);
        func_0x000107c614f0();
        pcVar11 = *(code **)(lVar7 + 0x10);
      }
      (*pcVar11)();
      goto LAB_10332fd70;
    }
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar13 = param_1[3];
    if (cVar4 == '\t') {
      lVar7 = unaff_x20 + _DAT_112f5a6a0;
      uVar1 = *(undefined8 *)(lVar7 + 0x18);
      lVar8 = *(long *)(lVar7 + 0x20);
      func_0x0001000a8868(lVar7,uVar1);
      (**(code **)(lVar8 + 8))(uVar12,uVar2,uVar3,uVar13,uVar1,lVar8);
      return;
    }
    if (cVar4 != '\r') {
      return;
    }
    if ((uVar12 != 3) || ((uVar3 != 0 || uVar2 != 0) || uVar13 != 0)) {
      if ((uVar12 == 0x17) && ((uVar3 == 0 && uVar2 == 0) && uVar13 == 0)) {
        lVar7 = unaff_x20 + _DAT_112f5a6a8;
        uVar1 = *(undefined8 *)(lVar7 + 0x18);
        lVar8 = *(long *)(lVar7 + 0x20);
        uVar10 = uVar1;
        func_0x0001000a8868(lVar7,uVar1);
        uVar6 = *param_2;
        func_0x000107c4b1dc(uVar6);
        func_0x000107c61180();
        uVar9 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        lVar7 = 0;
        FUN_103332bd4();
        (**(code **)(lVar8 + 0x20))
                  (uVar9,uVar10,(*(byte *)((long)param_2 + (long)*(int *)(lVar7 + 0x4c)) ^ 0xff) & 1
                   ,uVar1,lVar8);
      }
      else {
        if (uVar12 != 0x18) {
          return;
        }
        if ((uVar3 != 0 || uVar2 != 0) || uVar13 != 0) {
          return;
        }
        lVar7 = unaff_x20 + _DAT_112f5a6a8;
        uVar1 = *(undefined8 *)(lVar7 + 0x18);
        lVar8 = *(long *)(lVar7 + 0x20);
        uVar10 = uVar1;
        func_0x0001000a8868(lVar7,uVar1);
        uVar6 = *param_2;
        func_0x000107c4b1dc(uVar6);
        func_0x000107c61180();
        uVar9 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        (**(code **)(lVar8 + 0x28))(uVar9,uVar10,uVar1,lVar8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar10);
      return;
    }
  }
  lVar7 = unaff_x20 + _DAT_112f5a698;
  uVar1 = *(undefined8 *)(lVar7 + 0x18);
  lVar8 = *(long *)(lVar7 + 0x20);
  func_0x0001000a8868(lVar7,uVar1);
  (**(code **)(lVar8 + 0x10))(uVar1,lVar8);
  lVar7 = unaff_x20 + _DAT_112f5a668;
  lVar8 = lVar7;
  func_0x000107c61618();
  if (lVar8 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar7 + 8);
  func_0x000107c614f0();
  FUN_103332bd4();
  (**(code **)(lVar7 + 8))();
LAB_10332fd70:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar8);
  return;
}



/* Entry: 10332fe28; end: 10333068b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10332fe28(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  ulong *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x25;
  undefined8 unaff_x26;
  code *apcStack_e8 [4];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  ulong auStack_90 [2];
  ulong uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  undefined2 uStack_68;
  undefined1 uStack_66;
  
  pcVar10 = (code *)*param_1;
  uVar7 = param_1[1];
  uVar14 = param_1[2];
  bVar1 = (byte)param_1[4];
  if (bVar1 < 0xb) {
    if (bVar1 != 3) {
      if (bVar1 == 7) {
        puVar11 = auStack_90;
        func_0x00010332fa38(unaff_x20 + _DAT_112f5a6b0,auStack_90,0x112f58f30,&UNK_10dbb11f0);
        if (puStack_78 == (undefined8 *)0x0) {
          func_0x00010332f9bc(auStack_90,0x112f58f30,&UNK_10dbb11f0);
          pcVar10 = (code *)0x0;
        }
        else {
          func_0x000100d430b0(auStack_90,&uStack_68);
          if (uVar14 == 0) {
            uVar7 = 0x112ee4800;
            func_0x0001000285a8(0x112ee4800,&UNK_10db0fb40);
            func_0x000104886440();
          }
          else {
            lVar2 = unaff_x20 + _DAT_112f5a6b8;
            uVar15 = *(undefined8 *)(lVar2 + 0x18);
            lVar16 = *(long *)(lVar2 + 0x20);
            func_0x0001000a8868(lVar2,uVar15);
            (**(code **)(lVar16 + 8))(uVar7,uVar14,uVar15,lVar16);
          }
          uVar14 = uVar7;
          func_0x000100fe4188();
          func_0x000107c613fc();
          *(undefined8 *)(uVar14 + 0x18) = 3;
          *(undefined8 *)(uVar14 + 0x10) = 1;
          *(code **)(uVar14 + 0x20) = pcVar10;
          auStack_90[0] = uVar14;
          func_0x000107c61174(pcVar10);
          func_0x0001006c71a4(auStack_90);
          func_0x000107c61574(uVar14);
          func_0x000107c61574(uVar7);
          pcVar9 = FUN_103330b68;
          func_0x0001000c0ebc(FUN_103330b68,0);
          func_0x000107c61574(puVar11);
          func_0x0001000a8868(&uStack_68,unaff_x26);
          pcVar8 = pcVar9;
          (**(code **)(unaff_x25 + 8))(pcVar9,pcVar10,unaff_x26,unaff_x25);
          pcVar10 = FUN_103330ba8;
          func_0x0001000d5158(FUN_103330ba8,0,&UNK_11063fb00);
          func_0x000107c61574(pcVar9);
          func_0x000107c61574(pcVar8);
          func_0x0001000834e4(&uStack_68);
        }
        return pcVar10;
      }
      if (bVar1 != 8) {
        return (code *)0x0;
      }
      lVar2 = 0;
      if (((ulong)pcVar10 & 1) == 0) {
        return (code *)0x0;
      }
      FUN_103332bd4();
      uVar15 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x40));
      uVar7 = 0;
      FUN_10332e018(4,uVar15);
      if ((uVar7 & 1) == 0) {
        func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
        uStack_c8 = 2;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0xd;
        puVar5 = &uStack_c8;
        func_0x000100854cb0();
      }
      else {
        lVar2 = unaff_x20 + _DAT_112f5a6a0;
        puVar5 = *(undefined8 **)(lVar2 + 0x18);
        lVar16 = *(long *)(lVar2 + 0x20);
        func_0x0001000a8868(lVar2,puVar5);
        (**(code **)(lVar16 + 0x10))(puVar5,lVar16);
      }
      uVar7 = 0;
      FUN_10332e018(0,uVar15);
      if ((uVar7 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        lVar2 = unaff_x20 + _DAT_112f5a690;
        uVar15 = *(undefined8 *)(lVar2 + 0x18);
        lVar16 = *(long *)(lVar2 + 0x20);
        uVar13 = uVar15;
        func_0x0001000a8868(lVar2,uVar15);
        uVar14 = *param_2;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar7 = uVar14;
        func_0x000107c5faec();
        func_0x000107c61170(uVar14);
        (**(code **)(lVar16 + 8))(uVar7,uVar13,1,uVar15,lVar16);
        func_0x000107c6142c(uVar13);
      }
      uStack_80 = uVar7;
      puStack_78 = puVar5;
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(uVar7);
      lVar2 = 0;
      pcVar10 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      while (lVar2 != 2) {
        uVar14 = (&uStack_80)[lVar2];
        lVar2 = lVar2 + 1;
        if (uVar14 != 0) {
          func_0x000107c6157c(uVar14);
          pcVar9 = pcVar10;
          func_0x000107c61550();
          if ((((int)pcVar9 == 0) || ((long)pcVar10 < 0)) ||
             (pcVar9 = pcVar10, ((ulong)pcVar10 >> 0x3e & 1) != 0)) {
            if ((ulong)pcVar10 >> 0x3e == 0) {
              pcVar8 = *(code **)(((ulong)pcVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              pcVar8 = (code *)((ulong)pcVar10 & 0xffffffffffffff8);
              if ((code *)0x7fffffffffffffff < pcVar10) {
                pcVar8 = pcVar10;
              }
              func_0x000107c60480(pcVar8);
            }
            pcVar9 = (code *)0x0;
            FUN_103331b14(0,pcVar8 + 1,1,pcVar10);
          }
          uVar12 = (ulong)pcVar9 & 0xffffffffffffff8;
          uVar3 = *(ulong *)(uVar12 + 0x10);
          pcVar10 = pcVar9;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar3) {
            pcVar10 = (code *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_103331b14(pcVar10,uVar3 + 1,1,pcVar9);
            uVar12 = (ulong)pcVar10 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar3 + 1;
          *(ulong *)(uVar12 + uVar3 * 8 + 0x20) = uVar14;
        }
      }
      func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
      uVar15 = 0x112f5a6e8;
      func_0x0001000285a8(0x112f5a6e8,&UNK_10dbb28e0);
      func_0x000107c61408(&uStack_80,2,uVar15);
      pcVar9 = pcVar10;
      func_0x0001000c19f0(pcVar10);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(uVar7);
      func_0x000107c6142c(pcVar10);
      return pcVar9;
    }
    if (pcVar10 != (code *)0x0) {
      uStack_68 = (undefined2)uVar14;
      uStack_66 = (undefined1)(uVar14 >> 0x10);
      uVar3 = 7;
      uStack_70 = uVar7;
      FUN_10332e018(7,uVar7);
      if ((uVar3 & 1) != 0) {
        FUN_10332e7d0(unaff_x20 + _DAT_112f5a688,&uStack_c8);
        func_0x0001000a8868(&uStack_c8,uStack_b0);
        func_0x00010332dc9c(pcVar10,uVar7,uVar14);
        pcVar9 = pcVar10;
        func_0x000107c4b00c();
        func_0x000107c61180();
        if (pcVar9 != (code *)0x0) {
          pcVar8 = pcVar9;
          (**(code **)(CONCAT71(uStack_a7,uStack_a8) + 0x10))();
          func_0x000107c61170(pcVar10);
          func_0x000107c61170(pcVar9);
          FUN_103331258(&uStack_70);
          func_0x0001000834e4(&uStack_c8);
          return pcVar8;
        }
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x103330688);
        (*pcVar10)();
      }
      func_0x00010332dc9c(pcVar10,uVar7,uVar14);
      func_0x000107c61170(pcVar10);
      FUN_103331258(&uStack_70);
    }
  }
  else if (bVar1 == 0xb) {
    if (((ulong)pcVar10 & 1) != 0) {
      lVar2 = unaff_x20 + _DAT_112f5a690;
      pcVar10 = *(code **)(lVar2 + 0x18);
      lVar16 = *(long *)(lVar2 + 0x20);
      pcVar8 = pcVar10;
      func_0x0001000a8868(lVar2,pcVar10);
      pcVar6 = (code *)*param_2;
      func_0x000107c4b1dc(pcVar6);
      func_0x000107c61180();
      pcVar9 = pcVar6;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar6);
      (**(code **)(lVar16 + 8))(pcVar9,pcVar8,0,pcVar10,lVar16);
LAB_1033303cc:
      func_0x000107c6142c(pcVar8);
      return pcVar9;
    }
  }
  else if (bVar1 == 0xc) {
    if (((ulong)pcVar10 & 1) != 0) {
      lVar2 = unaff_x20 + _DAT_112f5a6a0;
      pcVar10 = *(code **)(lVar2 + 0x18);
      lVar16 = *(long *)(lVar2 + 0x20);
      func_0x0001000a8868(lVar2,pcVar10);
      (**(code **)(lVar16 + 0x18))(pcVar10,lVar16);
      return pcVar10;
    }
  }
  else {
    if (bVar1 != 0xd) {
      return (code *)0x0;
    }
    uVar3 = param_1[3];
    if ((uVar14 == 0 && uVar7 == 0) && (pcVar10 == (code *)0x0 && uVar3 == 0)) {
      func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
      uVar7 = *param_2;
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f5a680);
      FUN_10332e7d0(unaff_x20 + _DAT_112f5a678,&uStack_c8);
      puVar4 = &UNK_11063fb30;
      func_0x000107c613fc(&UNK_11063fb30,0x48,7);
      func_0x000100d430b0(&uStack_c8,puVar4 + 0x10);
      *(ulong *)(puVar4 + 0x38) = uVar7;
      *(undefined8 *)(puVar4 + 0x40) = uVar13;
      uVar15 = 0x112f5a230;
      func_0x0001000285a8(0x112f5a230,&UNK_10dbb2510);
      func_0x000107c613fc();
      func_0x000107c61580(uVar13,2);
      func_0x000107c61174();
      pcVar10 = FUN_10333128c;
      func_0x0001000b64ac(FUN_10333128c,puVar4);
      apcStack_e8[0] = pcVar10;
      FUN_10332e7d0(unaff_x20 + _DAT_112f5a670,&uStack_c8);
      puVar4 = &UNK_11063fb58;
      func_0x000107c613fc(&UNK_11063fb58,0x48,7);
      func_0x000100d430b0(&uStack_c8,puVar4 + 0x10);
      *(ulong *)(puVar4 + 0x38) = uVar7;
      *(undefined8 *)(puVar4 + 0x40) = uVar13;
      func_0x000107c613fc(uVar15,0x28,7);
      func_0x000107c61174(uVar7);
      pcVar10 = FUN_1033312cc;
      func_0x0001000b64ac(FUN_1033312cc,puVar4);
      lVar2 = unaff_x20 + _DAT_112f5a6c0;
      uVar15 = *(undefined8 *)(lVar2 + 0x18);
      lVar16 = *(long *)(lVar2 + 0x20);
      apcStack_e8[1] = pcVar10;
      func_0x0001000a8868(lVar2,uVar15);
      (**(code **)(lVar16 + 8))(uVar15,lVar16);
      uStack_c8 = 1;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0xd;
      puVar5 = &uStack_c8;
      apcStack_e8[2] = (code *)uVar15;
      func_0x000100854cb0();
      uVar7 = 0;
      apcStack_e8[3] = (code *)puVar5;
      pcVar8 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        uVar14 = uVar7;
        if (uVar7 < 5) {
          uVar14 = 4;
        }
        do {
          if (uVar7 == 4) {
            uVar15 = 0x112f5a6e8;
            func_0x0001000285a8(0x112f5a6e8,&UNK_10dbb28e0);
            func_0x000107c61408(apcStack_e8,4,uVar15);
            pcVar9 = pcVar8;
            func_0x0001000c19f0(pcVar8);
            goto LAB_1033303cc;
          }
          if (uVar14 == uVar7) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x103330684);
            (*pcVar10)();
          }
          pcVar10 = apcStack_e8[uVar7];
          uVar7 = uVar7 + 1;
        } while (pcVar10 == (code *)0x0);
        func_0x000107c6157c(pcVar10);
        pcVar9 = pcVar8;
        func_0x000107c61550();
        if ((((int)pcVar9 == 0) || ((long)pcVar8 < 0)) ||
           (pcVar9 = pcVar8, ((ulong)pcVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)pcVar8 >> 0x3e == 0) {
            pcVar6 = *(code **)(((ulong)pcVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            pcVar6 = (code *)((ulong)pcVar8 & 0xffffffffffffff8);
            if ((code *)0x7fffffffffffffff < pcVar8) {
              pcVar6 = pcVar8;
            }
            func_0x000107c60480(pcVar6);
          }
          pcVar9 = (code *)0x0;
          FUN_103331b14(0,pcVar6 + 1,1,pcVar8);
        }
        uVar3 = (ulong)pcVar9 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar3 + 0x10);
        pcVar8 = pcVar9;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar14) {
          pcVar8 = (code *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_103331b14(pcVar8,uVar14 + 1,1,pcVar9);
          uVar3 = (ulong)pcVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar3 + 0x10) = uVar14 + 1;
        *(code **)(uVar3 + uVar14 * 8 + 0x20) = pcVar10;
      } while( true );
    }
    if ((pcVar10 != (code *)0x7) || ((uVar14 != 0 || uVar7 != 0) || uVar3 != 0)) {
      if (pcVar10 != (code *)0x9) {
        return (code *)0x0;
      }
      if ((uVar14 != 0 || uVar7 != 0) || uVar3 != 0) {
        return (code *)0x0;
      }
      lVar2 = unaff_x20 + _DAT_112f5a698;
      uVar15 = *(undefined8 *)(lVar2 + 0x18);
      lVar16 = *(long *)(lVar2 + 0x20);
      func_0x0001000a8868(lVar2,uVar15);
      pcVar10 = (code *)*param_2;
      lVar2 = 0;
      FUN_103332bd4();
      (**(code **)(lVar16 + 8))
                (pcVar10,(*(byte *)((long)param_2 + (long)*(int *)(lVar2 + 0x48)) ^ 0xff) & 1,uVar15
                 ,lVar16);
      return pcVar10;
    }
    lVar2 = 0;
    FUN_103332bd4();
    lVar16 = *(long *)((long)param_2 + (long)*(int *)(lVar2 + 0x34));
    if (lVar16 != 0) {
      FUN_10332e7d0(unaff_x20 + _DAT_112f5a688,&uStack_c8);
      func_0x0001000a8868(&uStack_c8,uStack_b0);
      bVar1 = *(byte *)((long)param_2 + (long)*(int *)(lVar2 + 0x44));
      func_0x000107c61174();
      lVar2 = lVar16;
      func_0x000107c4b00c();
      func_0x000107c61180();
      if (lVar2 != 0) {
        pcVar10 = (code *)(ulong)(bVar1 ^ 1);
        (**(code **)(CONCAT71(uStack_a7,uStack_a8) + 0x18))
                  (pcVar10,lVar2,uStack_b0,CONCAT71(uStack_a7,uStack_a8));
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar16);
        func_0x0001000834e4(&uStack_c8);
        return pcVar10;
      }
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10333068c);
      (*pcVar10)();
    }
  }
  return (code *)0x0;
}



/* Entry: 10333068c; end: 103330947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10333068c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  long unaff_x20;
  long alStack_90 [3];
  long lStack_78;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  plVar4 = alStack_90;
  func_0x00010332fa38(unaff_x20 + _DAT_112f5a6b0,alStack_90,0x112f58f30,&UNK_10dbb11f0);
  if (lStack_78 == 0) {
    func_0x00010332f9bc(alStack_90,0x112f58f30,&UNK_10dbb11f0);
    pcVar7 = (code *)0x0;
  }
  else {
    func_0x000100d430b0(alStack_90,auStack_68);
    if (param_3 == 0) {
      param_2 = 0x112ee4800;
      func_0x0001000285a8(0x112ee4800,&UNK_10db0fb40);
      func_0x000104886440();
    }
    else {
      lVar3 = unaff_x20 + _DAT_112f5a6b8;
      uVar1 = *(undefined8 *)(lVar3 + 0x18);
      lVar2 = *(long *)(lVar3 + 0x20);
      func_0x0001000a8868(lVar3,uVar1);
      (**(code **)(lVar2 + 8))(param_2,param_3,uVar1,lVar2);
    }
    lVar3 = param_2;
    func_0x000100fe4188();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = param_1;
    alStack_90[0] = lVar3;
    func_0x000107c61174(param_1);
    func_0x0001006c71a4(alStack_90);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(param_2);
    pcVar5 = FUN_103330b68;
    func_0x0001000c0ebc(FUN_103330b68,0);
    func_0x000107c61574(plVar4);
    func_0x0001000a8868(auStack_68,uStack_50);
    pcVar6 = pcVar5;
    (**(code **)(lStack_48 + 8))(pcVar5,param_1,uStack_50,lStack_48);
    pcVar7 = FUN_103330ba8;
    func_0x0001000d5158(FUN_103330ba8,0,&UNK_11063fb00);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(pcVar6);
    func_0x0001000834e4(auStack_68);
  }
  return pcVar7;
}



/* Entry: 103330948; end: 1033309b3;  */

void FUN_103330948(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '\x01') {
    uVar2 = *param_1;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 2;
    uStack_58 = uVar2;
    func_0x000107c61174(uVar2);
    func_0x000100087f6c(&uStack_58);
    func_0x000101c17ab4(uVar2,cVar1);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 1033309b4; end: 103330b67;  */

void FUN_1033309b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  uVar3 = param_3;
  (**(code **)(lVar2 + 8))(param_3,uVar1,lVar2);
  func_0x0001000d224c(&uStack_48);
  puVar4 = &UNK_11063fb80;
  func_0x000107c613fc(&UNK_11063fb80,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_3);
  func_0x00010075a04c(uStack_48,1,FUN_1033313e0,puVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar4);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 103330b68; end: 103330ba7;  */

bool FUN_103330b68(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar1 = uVar2;
    }
    func_0x000107c60480(uVar1);
  }
  return uVar1 != 0;
}



/* Entry: 103330ba8; end: 103330c1f;  */

void FUN_103330ba8(undefined8 *param_1,char *param_2)

{
  char cVar1;
  
  if (1 < (byte)param_2[8] - 2) {
    cVar1 = *param_2;
    if ((byte)param_2[8] != 0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(char *)(param_1 + 4) = -(cVar1 != '\x01');
      return;
    }
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined1 *)(param_1 + 4) = 0;
        return;
      }
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  return;
}



/* Entry: 103330c20; end: 103330d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103330c20(void)

{
  long unaff_x20;
  
  FUN_1033312d8(unaff_x20 + _DAT_112f5a668);
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a670);
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a678);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f5a680));
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a688);
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a690);
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a698);
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a6a0);
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a6a8);
  func_0x00010332f9bc(unaff_x20 + _DAT_112f5a6b0,0x112f58f30,&UNK_10dbb11f0);
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a6b8);
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a6c0);
  func_0x0001000834e4(unaff_x20 + _DAT_112f5a6c8);
  func_0x00010332f9fc(unaff_x20 + _DAT_112f5a6d0,FUN_103331784);
  return;
}



/* Entry: 103330d28; end: 103330e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103330d28(long param_1)

{
  func_0x000103dbf870();
  FUN_1033312d8(param_1 + _DAT_112f5a668);
  func_0x0001000834e4(param_1 + _DAT_112f5a670);
  func_0x0001000834e4(param_1 + _DAT_112f5a678);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5a680));
  func_0x0001000834e4(param_1 + _DAT_112f5a688);
  func_0x0001000834e4(param_1 + _DAT_112f5a690);
  func_0x0001000834e4(param_1 + _DAT_112f5a698);
  func_0x0001000834e4(param_1 + _DAT_112f5a6a0);
  func_0x0001000834e4(param_1 + _DAT_112f5a6a8);
  func_0x00010332f9bc(param_1 + _DAT_112f5a6b0,0x112f58f30,&UNK_10dbb11f0);
  func_0x0001000834e4(param_1 + _DAT_112f5a6b8);
  func_0x0001000834e4(param_1 + _DAT_112f5a6c0);
  func_0x0001000834e4(param_1 + _DAT_112f5a6c8);
  func_0x00010332f9fc(param_1 + _DAT_112f5a6d0,FUN_103331784);
  return param_1;
}



/* Entry: 103330e44; end: 103330e93;  */

void FUN_103330e44(void)

{
  FUN_103330d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103330e94; end: 103330e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_103330e94(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  ulong *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x25;
  undefined8 unaff_x26;
  code *apcStack_e8 [4];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  ulong auStack_90 [2];
  ulong uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  undefined2 uStack_68;
  undefined1 uStack_66;
  
  pcVar10 = (code *)*param_1;
  uVar7 = param_1[1];
  uVar14 = param_1[2];
  bVar1 = (byte)param_1[4];
  if (bVar1 < 0xb) {
    if (bVar1 != 3) {
      if (bVar1 == 7) {
        puVar11 = auStack_90;
        func_0x00010332fa38(unaff_x20 + _DAT_112f5a6b0,auStack_90,0x112f58f30,&UNK_10dbb11f0);
        if (puStack_78 == (undefined8 *)0x0) {
          func_0x00010332f9bc(auStack_90,0x112f58f30,&UNK_10dbb11f0);
          pcVar10 = (code *)0x0;
        }
        else {
          func_0x000100d430b0(auStack_90,&uStack_68);
          if (uVar14 == 0) {
            uVar7 = 0x112ee4800;
            func_0x0001000285a8(0x112ee4800,&UNK_10db0fb40);
            func_0x000104886440();
          }
          else {
            lVar2 = unaff_x20 + _DAT_112f5a6b8;
            uVar15 = *(undefined8 *)(lVar2 + 0x18);
            lVar16 = *(long *)(lVar2 + 0x20);
            func_0x0001000a8868(lVar2,uVar15);
            (**(code **)(lVar16 + 8))(uVar7,uVar14,uVar15,lVar16);
          }
          uVar14 = uVar7;
          func_0x000100fe4188();
          func_0x000107c613fc();
          *(undefined8 *)(uVar14 + 0x18) = 3;
          *(undefined8 *)(uVar14 + 0x10) = 1;
          *(code **)(uVar14 + 0x20) = pcVar10;
          auStack_90[0] = uVar14;
          func_0x000107c61174(pcVar10);
          func_0x0001006c71a4(auStack_90);
          func_0x000107c61574(uVar14);
          func_0x000107c61574(uVar7);
          pcVar9 = FUN_103330b68;
          func_0x0001000c0ebc(FUN_103330b68,0);
          func_0x000107c61574(puVar11);
          func_0x0001000a8868(&uStack_68,unaff_x26);
          pcVar8 = pcVar9;
          (**(code **)(unaff_x25 + 8))(pcVar9,pcVar10,unaff_x26,unaff_x25);
          pcVar10 = FUN_103330ba8;
          func_0x0001000d5158(FUN_103330ba8,0,&UNK_11063fb00);
          func_0x000107c61574(pcVar9);
          func_0x000107c61574(pcVar8);
          func_0x0001000834e4(&uStack_68);
        }
        return pcVar10;
      }
      if (bVar1 != 8) {
        return (code *)0x0;
      }
      lVar2 = 0;
      if (((ulong)pcVar10 & 1) == 0) {
        return (code *)0x0;
      }
      FUN_103332bd4();
      uVar15 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x40));
      uVar7 = 0;
      FUN_10332e018(4,uVar15);
      if ((uVar7 & 1) == 0) {
        func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
        uStack_c8 = 2;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0xd;
        puVar5 = &uStack_c8;
        func_0x000100854cb0();
      }
      else {
        lVar2 = unaff_x20 + _DAT_112f5a6a0;
        puVar5 = *(undefined8 **)(lVar2 + 0x18);
        lVar16 = *(long *)(lVar2 + 0x20);
        func_0x0001000a8868(lVar2,puVar5);
        (**(code **)(lVar16 + 0x10))(puVar5,lVar16);
      }
      uVar7 = 0;
      FUN_10332e018(0,uVar15);
      if ((uVar7 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        lVar2 = unaff_x20 + _DAT_112f5a690;
        uVar15 = *(undefined8 *)(lVar2 + 0x18);
        lVar16 = *(long *)(lVar2 + 0x20);
        uVar13 = uVar15;
        func_0x0001000a8868(lVar2,uVar15);
        uVar14 = *param_2;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar7 = uVar14;
        func_0x000107c5faec();
        func_0x000107c61170(uVar14);
        (**(code **)(lVar16 + 8))(uVar7,uVar13,1,uVar15,lVar16);
        func_0x000107c6142c(uVar13);
      }
      uStack_80 = uVar7;
      puStack_78 = puVar5;
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(uVar7);
      lVar2 = 0;
      pcVar10 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      while (lVar2 != 2) {
        uVar14 = (&uStack_80)[lVar2];
        lVar2 = lVar2 + 1;
        if (uVar14 != 0) {
          func_0x000107c6157c(uVar14);
          pcVar9 = pcVar10;
          func_0x000107c61550();
          if ((((int)pcVar9 == 0) || ((long)pcVar10 < 0)) ||
             (pcVar9 = pcVar10, ((ulong)pcVar10 >> 0x3e & 1) != 0)) {
            if ((ulong)pcVar10 >> 0x3e == 0) {
              pcVar8 = *(code **)(((ulong)pcVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              pcVar8 = (code *)((ulong)pcVar10 & 0xffffffffffffff8);
              if ((code *)0x7fffffffffffffff < pcVar10) {
                pcVar8 = pcVar10;
              }
              func_0x000107c60480(pcVar8);
            }
            pcVar9 = (code *)0x0;
            FUN_103331b14(0,pcVar8 + 1,1,pcVar10);
          }
          uVar12 = (ulong)pcVar9 & 0xffffffffffffff8;
          uVar3 = *(ulong *)(uVar12 + 0x10);
          pcVar10 = pcVar9;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar3) {
            pcVar10 = (code *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_103331b14(pcVar10,uVar3 + 1,1,pcVar9);
            uVar12 = (ulong)pcVar10 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar3 + 1;
          *(ulong *)(uVar12 + uVar3 * 8 + 0x20) = uVar14;
        }
      }
      func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
      uVar15 = 0x112f5a6e8;
      func_0x0001000285a8(0x112f5a6e8,&UNK_10dbb28e0);
      func_0x000107c61408(&uStack_80,2,uVar15);
      pcVar9 = pcVar10;
      func_0x0001000c19f0(pcVar10);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(uVar7);
      func_0x000107c6142c(pcVar10);
      return pcVar9;
    }
    if (pcVar10 != (code *)0x0) {
      uStack_68 = (undefined2)uVar14;
      uStack_66 = (undefined1)(uVar14 >> 0x10);
      uVar3 = 7;
      uStack_70 = uVar7;
      FUN_10332e018(7,uVar7);
      if ((uVar3 & 1) != 0) {
        FUN_10332e7d0(unaff_x20 + _DAT_112f5a688,&uStack_c8);
        func_0x0001000a8868(&uStack_c8,uStack_b0);
        func_0x00010332dc9c(pcVar10,uVar7,uVar14);
        pcVar9 = pcVar10;
        func_0x000107c4b00c();
        func_0x000107c61180();
        if (pcVar9 != (code *)0x0) {
          pcVar8 = pcVar9;
          (**(code **)(CONCAT71(uStack_a7,uStack_a8) + 0x10))();
          func_0x000107c61170(pcVar10);
          func_0x000107c61170(pcVar9);
          FUN_103331258(&uStack_70);
          func_0x0001000834e4(&uStack_c8);
          return pcVar8;
        }
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x103330688);
        (*pcVar10)();
      }
      func_0x00010332dc9c(pcVar10,uVar7,uVar14);
      func_0x000107c61170(pcVar10);
      FUN_103331258(&uStack_70);
    }
  }
  else if (bVar1 == 0xb) {
    if (((ulong)pcVar10 & 1) != 0) {
      lVar2 = unaff_x20 + _DAT_112f5a690;
      pcVar10 = *(code **)(lVar2 + 0x18);
      lVar16 = *(long *)(lVar2 + 0x20);
      pcVar8 = pcVar10;
      func_0x0001000a8868(lVar2,pcVar10);
      pcVar6 = (code *)*param_2;
      func_0x000107c4b1dc(pcVar6);
      func_0x000107c61180();
      pcVar9 = pcVar6;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar6);
      (**(code **)(lVar16 + 8))(pcVar9,pcVar8,0,pcVar10,lVar16);
LAB_1033303cc:
      func_0x000107c6142c(pcVar8);
      return pcVar9;
    }
  }
  else if (bVar1 == 0xc) {
    if (((ulong)pcVar10 & 1) != 0) {
      lVar2 = unaff_x20 + _DAT_112f5a6a0;
      pcVar10 = *(code **)(lVar2 + 0x18);
      lVar16 = *(long *)(lVar2 + 0x20);
      func_0x0001000a8868(lVar2,pcVar10);
      (**(code **)(lVar16 + 0x18))(pcVar10,lVar16);
      return pcVar10;
    }
  }
  else {
    if (bVar1 != 0xd) {
      return (code *)0x0;
    }
    uVar3 = param_1[3];
    if ((uVar14 == 0 && uVar7 == 0) && (pcVar10 == (code *)0x0 && uVar3 == 0)) {
      func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
      uVar7 = *param_2;
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f5a680);
      FUN_10332e7d0(unaff_x20 + _DAT_112f5a678,&uStack_c8);
      puVar4 = &UNK_11063fb30;
      func_0x000107c613fc(&UNK_11063fb30,0x48,7);
      func_0x000100d430b0(&uStack_c8,puVar4 + 0x10);
      *(ulong *)(puVar4 + 0x38) = uVar7;
      *(undefined8 *)(puVar4 + 0x40) = uVar13;
      uVar15 = 0x112f5a230;
      func_0x0001000285a8(0x112f5a230,&UNK_10dbb2510);
      func_0x000107c613fc();
      func_0x000107c61580(uVar13,2);
      func_0x000107c61174();
      pcVar10 = FUN_10333128c;
      func_0x0001000b64ac(FUN_10333128c,puVar4);
      apcStack_e8[0] = pcVar10;
      FUN_10332e7d0(unaff_x20 + _DAT_112f5a670,&uStack_c8);
      puVar4 = &UNK_11063fb58;
      func_0x000107c613fc(&UNK_11063fb58,0x48,7);
      func_0x000100d430b0(&uStack_c8,puVar4 + 0x10);
      *(ulong *)(puVar4 + 0x38) = uVar7;
      *(undefined8 *)(puVar4 + 0x40) = uVar13;
      func_0x000107c613fc(uVar15,0x28,7);
      func_0x000107c61174(uVar7);
      pcVar10 = FUN_1033312cc;
      func_0x0001000b64ac(FUN_1033312cc,puVar4);
      lVar2 = unaff_x20 + _DAT_112f5a6c0;
      uVar15 = *(undefined8 *)(lVar2 + 0x18);
      lVar16 = *(long *)(lVar2 + 0x20);
      apcStack_e8[1] = pcVar10;
      func_0x0001000a8868(lVar2,uVar15);
      (**(code **)(lVar16 + 8))(uVar15,lVar16);
      uStack_c8 = 1;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0xd;
      puVar5 = &uStack_c8;
      apcStack_e8[2] = (code *)uVar15;
      func_0x000100854cb0();
      uVar7 = 0;
      apcStack_e8[3] = (code *)puVar5;
      pcVar8 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        uVar14 = uVar7;
        if (uVar7 < 5) {
          uVar14 = 4;
        }
        do {
          if (uVar7 == 4) {
            uVar15 = 0x112f5a6e8;
            func_0x0001000285a8(0x112f5a6e8,&UNK_10dbb28e0);
            func_0x000107c61408(apcStack_e8,4,uVar15);
            pcVar9 = pcVar8;
            func_0x0001000c19f0(pcVar8);
            goto LAB_1033303cc;
          }
          if (uVar14 == uVar7) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x103330684);
            (*pcVar10)();
          }
          pcVar10 = apcStack_e8[uVar7];
          uVar7 = uVar7 + 1;
        } while (pcVar10 == (code *)0x0);
        func_0x000107c6157c(pcVar10);
        pcVar9 = pcVar8;
        func_0x000107c61550();
        if ((((int)pcVar9 == 0) || ((long)pcVar8 < 0)) ||
           (pcVar9 = pcVar8, ((ulong)pcVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)pcVar8 >> 0x3e == 0) {
            pcVar6 = *(code **)(((ulong)pcVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            pcVar6 = (code *)((ulong)pcVar8 & 0xffffffffffffff8);
            if ((code *)0x7fffffffffffffff < pcVar8) {
              pcVar6 = pcVar8;
            }
            func_0x000107c60480(pcVar6);
          }
          pcVar9 = (code *)0x0;
          FUN_103331b14(0,pcVar6 + 1,1,pcVar8);
        }
        uVar3 = (ulong)pcVar9 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar3 + 0x10);
        pcVar8 = pcVar9;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar14) {
          pcVar8 = (code *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_103331b14(pcVar8,uVar14 + 1,1,pcVar9);
          uVar3 = (ulong)pcVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar3 + 0x10) = uVar14 + 1;
        *(code **)(uVar3 + uVar14 * 8 + 0x20) = pcVar10;
      } while( true );
    }
    if ((pcVar10 != (code *)0x7) || ((uVar14 != 0 || uVar7 != 0) || uVar3 != 0)) {
      if (pcVar10 != (code *)0x9) {
        return (code *)0x0;
      }
      if ((uVar14 != 0 || uVar7 != 0) || uVar3 != 0) {
        return (code *)0x0;
      }
      lVar2 = unaff_x20 + _DAT_112f5a698;
      uVar15 = *(undefined8 *)(lVar2 + 0x18);
      lVar16 = *(long *)(lVar2 + 0x20);
      func_0x0001000a8868(lVar2,uVar15);
      pcVar10 = (code *)*param_2;
      lVar2 = 0;
      FUN_103332bd4();
      (**(code **)(lVar16 + 8))
                (pcVar10,(*(byte *)((long)param_2 + (long)*(int *)(lVar2 + 0x48)) ^ 0xff) & 1,uVar15
                 ,lVar16);
      return pcVar10;
    }
    lVar2 = 0;
    FUN_103332bd4();
    lVar16 = *(long *)((long)param_2 + (long)*(int *)(lVar2 + 0x34));
    if (lVar16 != 0) {
      FUN_10332e7d0(unaff_x20 + _DAT_112f5a688,&uStack_c8);
      func_0x0001000a8868(&uStack_c8,uStack_b0);
      bVar1 = *(byte *)((long)param_2 + (long)*(int *)(lVar2 + 0x44));
      func_0x000107c61174();
      lVar2 = lVar16;
      func_0x000107c4b00c();
      func_0x000107c61180();
      if (lVar2 != 0) {
        pcVar10 = (code *)(ulong)(bVar1 ^ 1);
        (**(code **)(CONCAT71(uStack_a7,uStack_a8) + 0x18))
                  (pcVar10,lVar2,uStack_b0,CONCAT71(uStack_a7,uStack_a8));
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar16);
        func_0x0001000834e4(&uStack_c8);
        return pcVar10;
      }
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10333068c);
      (*pcVar10)();
    }
  }
  return (code *)0x0;
}



/* Entry: 103330e98; end: 103330ec7;  */

void FUN_103330e98(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = *(undefined1 *)(param_1 + 4);
  FUN_10332fa80(&uStack_40);
  return;
}



/* Entry: 103330ec8; end: 103330fbf;  */

undefined1 FUN_103330ec8(byte param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong auStack_88 [9];
  
  uVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_88,*(undefined8 *)(uVar4 + 0x28));
  uVar2 = (ulong)param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(uVar4 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar4 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if (*(byte *)(*(long *)(uVar4 + 0x30) + uVar2) == param_1) {
        uVar3 = *unaff_x20;
        func_0x000107c61558();
        auStack_88[0] = *unaff_x20;
        if ((uVar3 & 1) == 0) {
          FUN_10332bfb0();
        }
        uVar3 = auStack_88[0];
        uVar1 = *(undefined1 *)(*(long *)(auStack_88[0] + 0x30) + uVar2);
        FUN_103330fc0(uVar2);
        *unaff_x20 = uVar3;
        return uVar1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(uVar4 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 6;
}



/* Entry: 103330fc0; end: 10333114f;  */

void FUN_103330fc0(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_98 [72];
  
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x38;
  uVar5 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar5 ^ 0xffffffffffffffff);
  uVar6 = 1L << (uVar9 & 0x3f);
  if ((uVar6 & *(ulong *)(lVar1 + (uVar9 >> 6) * 8)) == 0) {
    uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar5 = ~uVar5;
    uVar7 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar5);
    if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) & uVar6) != 0) {
      uVar6 = uVar7 + 1 & uVar5;
      do {
        uVar7 = (ulong)*(byte *)(*(long *)(lVar8 + 0x30) + uVar9);
        func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar8 + 0x28));
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar7 = uVar7 & uVar5;
        if ((long)param_1 < (long)uVar6) {
          if (uVar7 < uVar6) {
LAB_1033310a8:
            if ((long)param_1 < (long)uVar7) goto LAB_10333104c;
          }
          puVar2 = (undefined1 *)(*(long *)(lVar8 + 0x30) + param_1);
          puVar3 = (undefined1 *)(*(long *)(lVar8 + 0x30) + uVar9);
          if ((param_1 != uVar9) || (puVar3 + 1 <= puVar2)) {
            *puVar2 = *puVar3;
            param_1 = uVar9;
          }
        }
        else if (uVar6 <= uVar7) goto LAB_1033310a8;
LAB_10333104c:
        uVar9 = uVar9 + 1 & uVar5;
      } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
    }
    uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar5);
  }
  if (SBORROW8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103331150);
    (*pcVar4)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
  *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
  return;
}



/* Entry: 103331150; end: 103331257;  */

undefined8 FUN_103331150(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  FUN_103332bd4();
  lVar2 = *(long *)(param_1 + *(int *)(lVar2 + 0x34));
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = lVar2;
  func_0x000107c4b260();
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_1033311c4:
    lVar4 = 0;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c5b64c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 == 0) goto LAB_1033311c4;
    lVar4 = lVar3;
    func_0x000107c5b638();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c4b260();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5b64c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c4b45c();
      func_0x000107c61170(lVar3);
      bVar1 = lVar2 == 1;
      goto joined_r0x00010333122c;
    }
  }
  bVar1 = false;
joined_r0x00010333122c:
  if ((lVar4 != 2) && ((lVar4 != 3 || (!bVar1)))) {
    return 0;
  }
  return 1;
}



/* Entry: 103331258; end: 10333128b;  */

undefined8 FUN_103331258(undefined8 param_1)

{
  FUN_103334d08();
  return param_1;
}



/* Entry: 10333128c; end: 103331297;  */

void FUN_10333128c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1,uVar3,*(undefined8 *)(unaff_x20 + 0x40));
  (**(code **)(lVar2 + 0x10))(uVar3,uVar1,lVar2);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c6157c(param_1);
  func_0x00010075a04c(uStack_48,1,FUN_10333141c,param_1);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(param_1);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 103331298; end: 1033312cb;  */

void FUN_103331298(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033312cc; end: 1033312d7;  */

void FUN_1033312cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x40));
  uVar4 = uVar2;
  (**(code **)(lVar3 + 8))(uVar2,uVar1,lVar3);
  func_0x0001000d224c(&uStack_48);
  puVar5 = &UNK_11063fb80;
  func_0x000107c613fc(&UNK_11063fb80,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(uVar2);
  func_0x00010075a04c(uStack_48,1,FUN_1033313e0,puVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar5);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}


