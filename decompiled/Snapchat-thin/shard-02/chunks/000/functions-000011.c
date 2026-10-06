/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016a574c; end: 1016a575b;  */

undefined1  [16] FUN_1016a574c(void)

{
  return ZEXT816(0x1103f53a8);
}



/* Entry: 1016a575c; end: 1016a576b; -[_TtC23ComposerSUPServicesImpl11SUPDiPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a575c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfa80));
  return;
}



/* Entry: 1016a576c; end: 1016a578b;  */

void FUN_1016a576c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4ee0);
  return;
}



/* Entry: 1016a578c; end: 1016a57eb; -[_TtC23ComposerSUPServicesImpl11SUPLongRepo init] */

void FUN_1016a578c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSUPServicesImpl.SUPLongRepo",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016a57b8);
  (*pcVar1)();
}



/* Entry: 1016a57ec; end: 1016a5823; -[_TtC23ComposerSUPServicesImpl11SUPLongRepo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016a5808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016a580c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a57ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfab0));
  return;
}



/* Entry: 1016a5824; end: 1016a5843;  */

void FUN_1016a5824(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4fa0);
  return;
}



/* Entry: 1016a5844; end: 1016a597f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016a5844(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_1103f5440;
  func_0x000107c613fc(&UNK_1103f5440,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103f5620;
  func_0x000107c613fc(&UNK_1103f5620,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar2 = &UNK_1103f5648;
  func_0x000107c613fc(&UNK_1103f5648,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1016a6d54;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uVar4 = 0;
  FUN_1016a6d94(0,0x112dbfb00,&PTR_PTR_1126a7848);
  uVar5 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_1016a6d5c,puVar2,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  func_0x000103edf0bc();
  func_0x000107c61574(uVar5);
  return puVar2;
}



/* Entry: 1016a5980; end: 1016a59f7;  */

void FUN_1016a5980(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126a7848);
    func_0x000107c453e4();
  }
  else {
    FUN_1016a59f8(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016a59f8; end: 1016a5b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016a59f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined1 auStack_70 [32];
  long alStack_50 [4];
  
  puVar2 = PTR_PTR_1126a7848;
  func_0x000107c610f8(PTR_PTR_1126a7848);
  func_0x000107c453e4();
  if (-1 < param_1) {
    func_0x0001000d224c(alStack_50);
    lVar1 = alStack_50[0];
    lVar3 = alStack_50[0];
    func_0x000107c5dc1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar3 == 0) {
      alStack_50[1] = 0;
      alStack_50[0] = 0;
      alStack_50[3] = 0;
      alStack_50[2] = 0;
    }
    else {
      func_0x000107c60234(alStack_50,lVar3);
      func_0x000107c615e8(lVar3);
    }
    func_0x000100672b50(alStack_50,auStack_90);
    if (lStack_78 == 0) {
      func_0x00010006e7f4(alStack_50);
      func_0x00010006e7f4(auStack_90);
    }
    else {
      func_0x000100102924(auStack_90,auStack_70);
      func_0x0001000bb420(auStack_70,auStack_90);
      uVar4 = 0;
      FUN_1016a6d94(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar5 = &uStack_98;
      func_0x000107c6147c(puVar5,auStack_90,PTR___sypN_11034f1a8 + 8,uVar4,6);
      if ((int)puVar5 != 0) {
        func_0x000107c5a494(puVar2);
        func_0x000107c61170(uStack_98);
      }
      func_0x00010006e7f4(alStack_50);
      func_0x000100183ab8(auStack_70);
    }
  }
  return puVar2;
}



/* Entry: 1016a5b40; end: 1016a5b7b; -[_TtC23ComposerSUPServicesImpl11SUPLongRepo getPromiseWithKey:] */

void FUN_1016a5b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016a5844(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016a5b7c; end: 1016a5bb7; -[_TtC23ComposerSUPServicesImpl11SUPLongRepo getWithKey:] */

void FUN_1016a5b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016a59f8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016a5bb8; end: 1016a5bd3; -[_TtC23ComposerSUPServicesImpl11SUPLongRepo putSpeculativeWithKey:value:] */

void FUN_1016a5bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 auStack_60 [3];
  undefined *puStack_48;
  
  puVar1 = auStack_60;
  puStack_48 = PTR___ss5Int64VN_11034ee50;
  auStack_60[0] = param_4;
  func_0x000107c61174();
  FUN_1016a5bd4(param_3,auStack_60,&UNK_1103f55d0,FUN_1016a6d2c,&SUB_10090569c);
  func_0x000100183ab8(auStack_60);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016a5bd4; end: 1016a5d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1016a5bd4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  if (param_1 < 0) {
    puVar3 = (undefined1 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_1016a6c8c();
    puVar4 = &UNK_11072d358;
    func_0x000107c613f8(&UNK_11072d358,puVar3,0,0);
    *puVar3 = 0;
    puVar5 = puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    lVar1 = 0;
    func_0x00010095c380();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dbfab8);
    func_0x0001000d224c(&uStack_68);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dbfab0);
    func_0x0001000bb420(param_2,auStack_88);
    func_0x000107c613fc(param_3,0x50,7);
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    *(long *)(param_3 + 0x18) = param_1;
    func_0x000100102924(auStack_88,param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x40) = uVar7;
    *(long *)(param_3 + 0x48) = lVar1;
    uVar2 = 0;
    FUN_1016a6d94(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(lVar1);
    (*param_5)(param_4,param_3,uVar2);
    func_0x000107c61170(uStack_68);
    func_0x000107c61574(param_3);
    puVar5 = *(undefined **)(lVar1 + 0x10);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(lVar1);
  }
  return puVar5;
}



/* Entry: 1016a5d7c; end: 1016a5d97; -[_TtC23ComposerSUPServicesImpl11SUPLongRepo putConfirmedWithKey:value:] */

void FUN_1016a5d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 auStack_60 [3];
  undefined *puStack_48;
  
  puVar1 = auStack_60;
  puStack_48 = PTR___ss5Int64VN_11034ee50;
  auStack_60[0] = param_4;
  func_0x000107c61174();
  FUN_1016a5bd4(param_3,auStack_60,&UNK_1103f5508,FUN_1016a6ccc,&SUB_10488b6b4);
  func_0x000100183ab8(auStack_60);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016a5d98; end: 1016a5fdb;  */

void FUN_1016a5d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 auStack_60 [3];
  undefined *puStack_48;
  
  puVar1 = auStack_60;
  puStack_48 = PTR___ss5Int64VN_11034ee50;
  auStack_60[0] = param_4;
  func_0x000107c61174();
  FUN_1016a5bd4(param_3,auStack_60,param_5,param_6,param_7);
  func_0x000100183ab8(auStack_60);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016a5fdc; end: 1016a6183;  */

void FUN_1016a5fdc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  
  if (param_2 < 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    uVar2 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x0001000d224c(&uStack_58);
    puVar3 = &UNK_1103f5440;
    func_0x000107c613fc(&UNK_1103f5440,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_4);
    puVar1 = &UNK_1103f5468;
    func_0x000107c613fc(&UNK_1103f5468,0x40,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(long *)(puVar1 + 0x18) = param_2;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    *(undefined8 *)(puVar1 + 0x28) = param_5;
    *(undefined8 *)(puVar1 + 0x30) = param_3;
    *(undefined8 *)(puVar1 + 0x38) = param_6;
    uVar2 = 0;
    FUN_1016a6d94(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    func_0x00010090569c(FUN_1016a66dc,puVar1,uVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar1);
    puVar3 = &UNK_1103f5490;
    func_0x000107c613fc(&UNK_1103f5490,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar2 = 0x1016a6718;
  }
  func_0x0001000b6d50(uVar2,puVar3);
  return;
}



/* Entry: 1016a6184; end: 1016a6403;  */

void FUN_1016a6184(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [6];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar1 = (undefined *)0x0;
  if (param_1 != 0) {
    puVar1 = param_2;
    FUN_1016a59f8();
    func_0x000107c61170(param_1);
    puStack_e0 = puVar1;
    func_0x000100087f6c(&puStack_e0);
    func_0x000107c61170();
  }
  func_0x0001000d224c(&uStack_80);
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c47580();
  puVar7 = (undefined8 *)(puVar1 + 0x20);
  *puVar7 = puVar2;
  puVar2 = puVar1;
  func_0x000100673700(puVar1);
  func_0x000107c61588(puVar1);
  uVar6 = *(undefined8 *)(puVar1 + 0x10);
  uVar3 = 0;
  FUN_1016a6d94(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar7,uVar6,uVar3);
  func_0x000100120cb0();
  puVar4 = puVar2;
  func_0x000107c5fe08(puVar2,uVar3,puVar7);
  func_0x000107c6142c(puVar2);
  func_0x0001000d224c(auStack_b0);
  uVar6 = 0;
  FUN_1016a6d94(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(auStack_b0[0]);
  puVar1 = &UNK_1103f54b8;
  func_0x000107c613fc(&UNK_1103f54b8,0x20,7);
  *(undefined **)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcStack_c0 = FUN_1016a6c24;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  uStack_d0 = 0x10168981c;
  puStack_c8 = &UNK_1103f54d0;
  ppuVar5 = &puStack_e0;
  puStack_b8 = puVar1;
  func_0x000107c60bc4(ppuVar5);
  puVar1 = puStack_b8;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  uVar3 = uStack_80;
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000100075034(FUN_1016a6c48,&puStack_e0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(uVar3);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1016a6404; end: 1016a664f;  */

void FUN_1016a6404(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    puVar2 = puVar1;
    func_0x000100121450(puVar1);
    if ((param_2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&puStack_50);
      func_0x000107c61170(puVar1);
      func_0x000107c6142c(param_1);
      if (lStack_38 != 0) {
        uVar3 = 0;
        FUN_1016a6d94(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar4 = &uStack_58;
        func_0x000107c6147c(puVar4,&puStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
        if (((ulong)puVar4 & 1) == 0) {
          return;
        }
        puVar1 = PTR_PTR_1126a7848;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c5a494();
        puStack_50 = puVar1;
        func_0x000100087f6c(&puStack_50);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(uStack_58);
        return;
      }
      goto LAB_1016a651c;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  lStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c61170(puVar1);
LAB_1016a651c:
  func_0x00010006e7f4(&puStack_50);
  return;
}



/* Entry: 1016a6650; end: 1016a668b; -[_TtC23ComposerSUPServicesImpl11SUPLongRepo observeWithKey:] */

void FUN_1016a6650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001016a5e34(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016a668c; end: 1016a669b;  */

void FUN_1016a668c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  if (lVar1 < 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    uVar5 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x0001000d224c(&uStack_58);
    puVar6 = &UNK_1103f5440;
    func_0x000107c613fc(&UNK_1103f5440,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,uVar5);
    puVar4 = &UNK_1103f5468;
    func_0x000107c613fc(&UNK_1103f5468,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(long *)(puVar4 + 0x18) = lVar1;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = uVar3;
    *(undefined8 *)(puVar4 + 0x30) = uVar2;
    *(undefined8 *)(puVar4 + 0x38) = uVar7;
    uVar5 = 0;
    FUN_1016a6d94(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar7);
    func_0x00010090569c(FUN_1016a66dc,puVar4,uVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar4);
    puVar6 = &UNK_1103f5490;
    func_0x000107c613fc(&UNK_1103f5490,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar2;
    *(undefined8 *)(puVar6 + 0x18) = uVar7;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar7);
    uVar5 = 0x1016a6718;
  }
  func_0x0001000b6d50(uVar5,puVar6);
  return;
}



/* Entry: 1016a669c; end: 1016a66db;  */

void FUN_1016a669c(void)

{
  long unaff_x20;
  
  func_0x0001016a6538(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      0x1016a66bc);
  return;
}



/* Entry: 1016a66dc; end: 1016a66eb;  */

void FUN_1016a66dc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 *puVar11;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [6];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  puVar4 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar4 = puVar1;
    FUN_1016a59f8();
    func_0x000107c61170(lVar3);
    puStack_e0 = puVar4;
    func_0x000100087f6c(&puStack_e0);
    func_0x000107c61170();
  }
  func_0x0001000d224c(&uStack_80);
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c47580();
  puVar11 = (undefined8 *)(puVar4 + 0x20);
  *puVar11 = puVar5;
  puVar5 = puVar4;
  func_0x000100673700(puVar4);
  func_0x000107c61588(puVar4);
  uVar10 = *(undefined8 *)(puVar4 + 0x10);
  uVar6 = 0;
  FUN_1016a6d94(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar11,uVar10,uVar6);
  func_0x000100120cb0();
  puVar7 = puVar5;
  func_0x000107c5fe08(puVar5,uVar6,puVar11);
  func_0x000107c6142c(puVar5);
  func_0x0001000d224c(auStack_b0);
  uVar6 = 0;
  FUN_1016a6d94(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(auStack_b0[0]);
  puVar4 = &UNK_1103f54b8;
  func_0x000107c613fc(&UNK_1103f54b8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  pcStack_c0 = FUN_1016a6c24;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  uStack_d0 = 0x10168981c;
  puStack_c8 = &UNK_1103f54d0;
  ppuVar8 = &puStack_e0;
  puStack_b8 = puVar4;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_b8;
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(puVar1);
  uVar9 = uStack_80;
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000100075034(FUN_1016a6c48,&puStack_e0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(uVar9);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1016a66ec; end: 1016a6757;  */

void FUN_1016a66ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016a6758; end: 1016a689b;  */

void FUN_1016a6758(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_90;
  func_0x0001000d224c(&uStack_58);
  if (-1 < param_2) {
    func_0x0001006732c8(param_3,*(undefined8 *)(param_3 + 0x18));
    func_0x000107c605b0();
    func_0x0001000d224c(&uStack_60);
    uVar3 = 0;
    FUN_1016a6d94(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000100bcb214();
    func_0x000107c61170(uStack_60);
    uStack_70 = 0x1016a6d4c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1013b7310;
    puStack_78 = &UNK_1103f55e8;
    uStack_68 = param_5;
    func_0x000107c60bc4(&puStack_90);
    uVar1 = uStack_68;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar1);
    func_0x000107c54910(uStack_58);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uStack_58);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016a689c);
  (*pcVar2)();
}



/* Entry: 1016a689c; end: 1016a6913;  */

void FUN_1016a689c(undefined1 *param_1,undefined *param_2)

{
  if (param_2 == (undefined *)0x0) {
    if (((ulong)param_1 & 1) != 0) {
      func_0x000100b60084();
      return;
    }
    FUN_1016a6c8c();
    param_2 = &UNK_11072d358;
    func_0x000107c613f8(&UNK_11072d358,param_1,0,0);
    *param_1 = 1;
  }
  else {
    func_0x000107c614b0(param_2);
  }
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
  return;
}



/* Entry: 1016a6914; end: 1016a6b3f;  */

void FUN_1016a6914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  
  func_0x0001000d224c(&uStack_78);
  func_0x0001000bb420(param_3,auStack_98);
  puVar2 = &UNK_1103f5530;
  func_0x000107c613fc(&UNK_1103f5530,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000100102924(auStack_98,puVar2 + 0x20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x1016a6cd8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5548;
  ppuVar3 = &puStack_c8;
  puStack_a0 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_a0;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(auStack_98);
  uVar4 = 0;
  FUN_1016a6d94(0,0x112d69830,&PTR_PTR_1126a6700);
  uVar5 = uVar4;
  func_0x000100bcb214();
  func_0x000107c61170(auStack_98[0]);
  func_0x0001000d224c(&uStack_d0);
  func_0x000100bcb214(uVar4);
  func_0x000107c61170(uStack_d0);
  uStack_a8 = 0x1016a6ce4;
  puStack_c8 = puVar1;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5570;
  ppuVar6 = &puStack_c8;
  puStack_a0 = (undefined *)param_5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_a0;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  uStack_a8 = 0x1016a6ce8;
  puStack_c8 = puVar1;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_100ff4e14;
  puStack_b0 = &UNK_1103f5598;
  ppuVar7 = &puStack_c8;
  puStack_a0 = (undefined *)param_5;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_a0;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e568(uStack_78);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uStack_78);
  return;
}



/* Entry: 1016a6b40; end: 1016a6bc3;  */

void FUN_1016a6b40(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  if (-1 < param_2) {
    func_0x0001006732c8(param_3,*(undefined8 *)(param_3 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5490c(uStack_38);
    func_0x000107c61170(uStack_38);
    func_0x000107c615e8(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016a6bc4);
  (*pcVar1)();
}



/* Entry: 1016a6bc4; end: 1016a6c23;  */

void FUN_1016a6bc4(undefined *param_1)

{
  undefined *puVar1;
  
  if (param_1 == (undefined *)0x0) {
    FUN_1016a6c8c();
    puVar1 = &UNK_11072d358;
    func_0x000107c613f8(&UNK_11072d358,param_1,0,0);
    *param_1 = 1;
  }
  else {
    func_0x000107c614b0();
    puVar1 = param_1;
  }
  func_0x00010488ade0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 1016a6c24; end: 1016a6c47;  */

void FUN_1016a6c24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,uVar5,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c47580();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    puVar2 = puVar1;
    func_0x000100121450(puVar1);
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&puStack_50);
      func_0x000107c61170(puVar1);
      func_0x000107c6142c(param_1);
      if (lStack_38 != 0) {
        uVar3 = 0;
        FUN_1016a6d94(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar4 = &uStack_58;
        func_0x000107c6147c(puVar4,&puStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
        if (((ulong)puVar4 & 1) == 0) {
          return;
        }
        puVar1 = PTR_PTR_1126a7848;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c5a494();
        puStack_50 = puVar1;
        func_0x000100087f6c(&puStack_50);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(uStack_58);
        return;
      }
      goto LAB_1016a651c;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  lStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c61170(puVar1);
LAB_1016a651c:
  func_0x00010006e7f4(&puStack_50);
  return;
}



/* Entry: 1016a6c48; end: 1016a6c8b;  */

void FUN_1016a6c48(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615e8(*param_1);
  *param_1 = uVar1;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 1016a6c8c; end: 1016a6ccb;  */

void FUN_1016a6c8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbfaf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb87f8;
  func_0x000107c61520(&UNK_10dcb87f8,&UNK_11072d358);
  puRam0000000112dbfaf8 = puVar1;
  return;
}



/* Entry: 1016a6ccc; end: 1016a6cef;  */

void FUN_1016a6ccc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000d224c(&uStack_78);
  func_0x0001000bb420(unaff_x20 + 0x20,auStack_98);
  puVar3 = &UNK_1103f5530;
  func_0x000107c613fc(&UNK_1103f5530,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  func_0x000100102924(auStack_98,puVar3 + 0x20);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x1016a6cd8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5548;
  ppuVar4 = &puStack_c8;
  puStack_a0 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_a0;
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(auStack_98);
  uVar5 = 0;
  FUN_1016a6d94(0,0x112d69830,&PTR_PTR_1126a6700);
  uVar6 = uVar5;
  func_0x000100bcb214();
  func_0x000107c61170(auStack_98[0]);
  func_0x0001000d224c(&uStack_d0);
  func_0x000100bcb214(uVar5);
  func_0x000107c61170(uStack_d0);
  uStack_a8 = 0x1016a6ce4;
  puStack_c8 = puVar2;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5570;
  ppuVar7 = &puStack_c8;
  puStack_a0 = (undefined *)uVar1;
  func_0x000107c60bc4(ppuVar7);
  puVar3 = puStack_a0;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  uStack_a8 = 0x1016a6ce8;
  puStack_c8 = puVar2;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_100ff4e14;
  puStack_b0 = &UNK_1103f5598;
  ppuVar8 = &puStack_c8;
  puStack_a0 = (undefined *)uVar1;
  func_0x000107c60bc4(ppuVar8);
  puVar3 = puStack_a0;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e568(uStack_78);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uStack_78);
  return;
}



/* Entry: 1016a6cf0; end: 1016a6d2b;  */

void FUN_1016a6cf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100183ab8(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016a6d2c; end: 1016a6d5b;  */

void FUN_1016a6d2c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar5 = unaff_x20 + 0x20;
  ppuVar7 = &puStack_90;
  func_0x0001000d224c(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),lVar1,lVar5,
                      *(undefined8 *)(unaff_x20 + 0x40));
  if (lVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016a689c);
    (*pcVar4)();
  }
  func_0x0001006732c8(lVar5,*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c605b0();
  func_0x0001000d224c(&uStack_60);
  uVar6 = 0;
  FUN_1016a6d94(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_60);
  uStack_70 = 0x1016a6d4c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1013b7310;
  puStack_78 = &UNK_1103f55e8;
  uStack_68 = uVar2;
  func_0x000107c60bc4(&puStack_90);
  uVar3 = uStack_68;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c54910(uStack_58);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uStack_58);
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1016a6d5c; end: 1016a6d93;  */

void FUN_1016a6d5c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 1016a6d94; end: 1016a6dd3;  */

void FUN_1016a6d94(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016a6dd4; end: 1016a6df3;  */

void FUN_1016a6dd4(long param_1,long param_2)

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



/* Entry: 1016a6df4; end: 1016a6e1b;  */

void FUN_1016a6df4(void)

{
  func_0x000100cb8d68();
  return;
}



/* Entry: 1016a6e1c; end: 1016a6e7b; -[_TtC23ComposerSUPServicesImpl7SUPRepo init] */

void FUN_1016a6e1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSUPServicesImpl.SUPRepo",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016a6e48);
  (*pcVar1)();
}



/* Entry: 1016a6e7c; end: 1016a6ec3; -[_TtC23ComposerSUPServicesImpl7SUPRepo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016a6e98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016a6e9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a6e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfb08));
  return;
}



/* Entry: 1016a6ec4; end: 1016a6ee3;  */

void FUN_1016a6ec4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5068);
  return;
}



/* Entry: 1016a6ee4; end: 1016a6eef; -[_TtC23ComposerSUPServicesImpl7SUPRepo stringRepo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a6ee4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1016a6ef0; end: 1016a6ef3; -[_TtC23ComposerSUPServicesImpl7SUPRepo setStringRepo:] */

void FUN_1016a6ef0(void)

{
  return;
}



/* Entry: 1016a6ef4; end: 1016a6eff; -[_TtC23ComposerSUPServicesImpl7SUPRepo booleanRepo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a6ef4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1016a6f00; end: 1016a6f03; -[_TtC23ComposerSUPServicesImpl7SUPRepo setBooleanRepo:] */

void FUN_1016a6f00(void)

{
  return;
}



/* Entry: 1016a6f04; end: 1016a6f0f; -[_TtC23ComposerSUPServicesImpl7SUPRepo longRepo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a6f04(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1016a6f10; end: 1016a6f53;  */

void FUN_1016a6f10(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1016a6f54; end: 1016a6f57; -[_TtC23ComposerSUPServicesImpl7SUPRepo setLongRepo:] */

void FUN_1016a6f54(void)

{
  return;
}



/* Entry: 1016a6f58; end: 1016a6fb7; -[_TtC23ComposerSUPServicesImpl13SUPStringRepo init] */

void FUN_1016a6f58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSUPServicesImpl.SUPStringRepo",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016a6f84);
  (*pcVar1)();
}



/* Entry: 1016a6fb8; end: 1016a6fef; -[_TtC23ComposerSUPServicesImpl13SUPStringRepo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016a6fd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016a6fd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a6fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfb48));
  return;
}



/* Entry: 1016a6ff0; end: 1016a700f;  */

void FUN_1016a6ff0(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5138);
  return;
}



/* Entry: 1016a7010; end: 1016a714b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016a7010(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_1103f56e8;
  func_0x000107c613fc(&UNK_1103f56e8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103f58c8;
  func_0x000107c613fc(&UNK_1103f58c8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar2 = &UNK_1103f58f0;
  func_0x000107c613fc(&UNK_1103f58f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1016a850c;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uVar4 = 0;
  FUN_1016a854c(0,0x112dbfb88,&PTR_PTR_1126a7850);
  uVar5 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_1016a8514,puVar2,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  func_0x000103edf0bc();
  func_0x000107c61574(uVar5);
  return puVar2;
}



/* Entry: 1016a714c; end: 1016a71c3;  */

void FUN_1016a714c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126a7850);
    func_0x000107c453e4();
  }
  else {
    FUN_1016a71c4(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016a71c4; end: 1016a730b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016a71c4(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined1 auStack_70 [32];
  long alStack_50 [4];
  
  iVar2 = (int)&uStack_a0;
  puVar3 = PTR_PTR_1126a7850;
  func_0x000107c610f8(PTR_PTR_1126a7850);
  func_0x000107c453e4();
  if (-1 < param_1) {
    func_0x0001000d224c(alStack_50);
    lVar1 = alStack_50[0];
    lVar4 = alStack_50[0];
    func_0x000107c5dc1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar4 == 0) {
      alStack_50[1] = 0;
      alStack_50[0] = 0;
      alStack_50[3] = 0;
      alStack_50[2] = 0;
    }
    else {
      func_0x000107c60234(alStack_50,lVar4);
      func_0x000107c615e8(lVar4);
    }
    func_0x000100672b50(alStack_50,auStack_90);
    if (lStack_78 == 0) {
      func_0x00010006e7f4(alStack_50);
      func_0x00010006e7f4(auStack_90);
    }
    else {
      func_0x000100102924(auStack_90,auStack_70);
      func_0x0001000bb420(auStack_70,auStack_90);
      func_0x000107c6147c(&uStack_a0,auStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (iVar2 != 0) {
        uVar5 = uStack_a0;
        func_0x000107c5fadc(uStack_a0,uStack_98);
        func_0x000107c6142c(uStack_98);
        func_0x000107c5a494(puVar3);
        func_0x000107c61170(uVar5);
      }
      func_0x00010006e7f4(alStack_50);
      func_0x000100183ab8(auStack_70);
    }
  }
  return puVar3;
}



/* Entry: 1016a730c; end: 1016a7347; -[_TtC23ComposerSUPServicesImpl13SUPStringRepo getPromiseWithKey:] */

void FUN_1016a730c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016a7010(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016a7348; end: 1016a7383; -[_TtC23ComposerSUPServicesImpl13SUPStringRepo getWithKey:] */

void FUN_1016a7348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016a71c4(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016a7384; end: 1016a739f; -[_TtC23ComposerSUPServicesImpl13SUPStringRepo putSpeculativeWithKey:value:] */

void FUN_1016a7384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  puVar1 = &uStack_60;
  func_0x000107c5faec();
  puStack_48 = PTR___sSSN_11034da80;
  uStack_60 = param_4;
  uStack_58 = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  FUN_1016a73a0(param_3,&uStack_60,&UNK_1103f5878,FUN_1016a84e4,&SUB_10090569c);
  func_0x000100183ab8(&uStack_60);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016a73a0; end: 1016a7547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1016a73a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  if (param_1 < 0) {
    puVar3 = (undefined1 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_1016a6c8c();
    puVar4 = &UNK_11072d358;
    func_0x000107c613f8(&UNK_11072d358,puVar3,0,0);
    *puVar3 = 0;
    puVar5 = puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    lVar1 = 0;
    func_0x00010095c380();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dbfb50);
    func_0x0001000d224c(&uStack_68);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dbfb48);
    func_0x0001000bb420(param_2,auStack_88);
    func_0x000107c613fc(param_3,0x50,7);
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    *(long *)(param_3 + 0x18) = param_1;
    func_0x000100102924(auStack_88,param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x40) = uVar7;
    *(long *)(param_3 + 0x48) = lVar1;
    uVar2 = 0;
    FUN_1016a854c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(lVar1);
    (*param_5)(param_4,param_3,uVar2);
    func_0x000107c61170(uStack_68);
    func_0x000107c61574(param_3);
    puVar5 = *(undefined **)(lVar1 + 0x10);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(lVar1);
  }
  return puVar5;
}



/* Entry: 1016a7548; end: 1016a7563; -[_TtC23ComposerSUPServicesImpl13SUPStringRepo putConfirmedWithKey:value:] */

void FUN_1016a7548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  puVar1 = &uStack_60;
  func_0x000107c5faec();
  puStack_48 = PTR___sSSN_11034da80;
  uStack_60 = param_4;
  uStack_58 = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  FUN_1016a73a0(param_3,&uStack_60,&UNK_1103f57b0,FUN_1016a8484,&SUB_10488b6b4);
  func_0x000100183ab8(&uStack_60);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016a7564; end: 1016a77cb;  */

void FUN_1016a7564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  puVar1 = &uStack_60;
  func_0x000107c5faec();
  puStack_48 = PTR___sSSN_11034da80;
  uStack_60 = param_4;
  uStack_58 = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  FUN_1016a73a0(param_3,&uStack_60,param_5,param_6,param_7);
  func_0x000100183ab8(&uStack_60);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016a77cc; end: 1016a7973;  */

void FUN_1016a77cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  
  if (param_2 < 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    uVar2 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x0001000d224c(&uStack_58);
    puVar3 = &UNK_1103f56e8;
    func_0x000107c613fc(&UNK_1103f56e8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_4);
    puVar1 = &UNK_1103f5710;
    func_0x000107c613fc(&UNK_1103f5710,0x40,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(long *)(puVar1 + 0x18) = param_2;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    *(undefined8 *)(puVar1 + 0x28) = param_5;
    *(undefined8 *)(puVar1 + 0x30) = param_3;
    *(undefined8 *)(puVar1 + 0x38) = param_6;
    uVar2 = 0;
    FUN_1016a854c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    func_0x00010090569c(FUN_1016a7ed4,puVar1,uVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar1);
    puVar3 = &UNK_1103f5738;
    func_0x000107c613fc(&UNK_1103f5738,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar2 = 0x1016a7f10;
  }
  func_0x0001000b6d50(uVar2,puVar3);
  return;
}



/* Entry: 1016a7974; end: 1016a7bf3;  */

void FUN_1016a7974(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [6];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar1 = (undefined *)0x0;
  if (param_1 != 0) {
    puVar1 = param_2;
    FUN_1016a71c4();
    func_0x000107c61170(param_1);
    puStack_e0 = puVar1;
    func_0x000100087f6c(&puStack_e0);
    func_0x000107c61170();
  }
  func_0x0001000d224c(&uStack_80);
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c47580();
  puVar7 = (undefined8 *)(puVar1 + 0x20);
  *puVar7 = puVar2;
  puVar2 = puVar1;
  func_0x000100673700(puVar1);
  func_0x000107c61588(puVar1);
  uVar6 = *(undefined8 *)(puVar1 + 0x10);
  uVar3 = 0;
  FUN_1016a854c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar7,uVar6,uVar3);
  func_0x000100120cb0();
  puVar4 = puVar2;
  func_0x000107c5fe08(puVar2,uVar3,puVar7);
  func_0x000107c6142c(puVar2);
  func_0x0001000d224c(auStack_b0);
  uVar6 = 0;
  FUN_1016a854c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(auStack_b0[0]);
  puVar1 = &UNK_1103f5760;
  func_0x000107c613fc(&UNK_1103f5760,0x20,7);
  *(undefined **)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcStack_c0 = FUN_1016a841c;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  uStack_d0 = 0x10168981c;
  puStack_c8 = &UNK_1103f5778;
  ppuVar5 = &puStack_e0;
  puStack_b8 = puVar1;
  func_0x000107c60bc4(ppuVar5);
  puVar1 = puStack_b8;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  uVar3 = uStack_80;
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000100075034(FUN_1016a8440,&puStack_e0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(uVar3);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1016a7bf4; end: 1016a7e47;  */

void FUN_1016a7bf4(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    puVar2 = puVar1;
    func_0x000100121450(puVar1);
    if ((param_2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&puStack_50);
      func_0x000107c61170(puVar1);
      func_0x000107c6142c(param_1);
      if (lStack_38 != 0) {
        func_0x000107c6147c(&uStack_60,&puStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if ((uVar3 & 1) == 0) {
          return;
        }
        puVar1 = PTR_PTR_1126a7850;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar4 = uStack_60;
        func_0x000107c5fadc(uStack_60,uStack_58);
        func_0x000107c6142c(uStack_58);
        func_0x000107c5a494(puVar1);
        func_0x000107c61170(uVar4);
        puStack_50 = puVar1;
        func_0x000100087f6c(&puStack_50);
        func_0x000107c61170(puVar1);
        return;
      }
      goto LAB_1016a7d14;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  lStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c61170(puVar1);
LAB_1016a7d14:
  func_0x00010006e7f4(&puStack_50);
  return;
}



/* Entry: 1016a7e48; end: 1016a7e83; -[_TtC23ComposerSUPServicesImpl13SUPStringRepo observeWithKey:] */

void FUN_1016a7e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001016a7624(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016a7e84; end: 1016a7e93;  */

void FUN_1016a7e84(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  if (lVar1 < 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    uVar5 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x0001000d224c(&uStack_58);
    puVar6 = &UNK_1103f56e8;
    func_0x000107c613fc(&UNK_1103f56e8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,uVar5);
    puVar4 = &UNK_1103f5710;
    func_0x000107c613fc(&UNK_1103f5710,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(long *)(puVar4 + 0x18) = lVar1;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = uVar3;
    *(undefined8 *)(puVar4 + 0x30) = uVar2;
    *(undefined8 *)(puVar4 + 0x38) = uVar7;
    uVar5 = 0;
    FUN_1016a854c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar7);
    func_0x00010090569c(FUN_1016a7ed4,puVar4,uVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar4);
    puVar6 = &UNK_1103f5738;
    func_0x000107c613fc(&UNK_1103f5738,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar2;
    *(undefined8 *)(puVar6 + 0x18) = uVar7;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar7);
    uVar5 = 0x1016a7f10;
  }
  func_0x0001000b6d50(uVar5,puVar6);
  return;
}



/* Entry: 1016a7e94; end: 1016a7ed3;  */

void FUN_1016a7e94(void)

{
  long unaff_x20;
  
  func_0x0001016a7d30(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      0x1016a7eb4);
  return;
}



/* Entry: 1016a7ed4; end: 1016a7ee3;  */

void FUN_1016a7ed4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 *puVar11;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [6];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  puVar4 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar4 = puVar1;
    FUN_1016a71c4();
    func_0x000107c61170(lVar3);
    puStack_e0 = puVar4;
    func_0x000100087f6c(&puStack_e0);
    func_0x000107c61170();
  }
  func_0x0001000d224c(&uStack_80);
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c47580();
  puVar11 = (undefined8 *)(puVar4 + 0x20);
  *puVar11 = puVar5;
  puVar5 = puVar4;
  func_0x000100673700(puVar4);
  func_0x000107c61588(puVar4);
  uVar10 = *(undefined8 *)(puVar4 + 0x10);
  uVar6 = 0;
  FUN_1016a854c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar11,uVar10,uVar6);
  func_0x000100120cb0();
  puVar7 = puVar5;
  func_0x000107c5fe08(puVar5,uVar6,puVar11);
  func_0x000107c6142c(puVar5);
  func_0x0001000d224c(auStack_b0);
  uVar6 = 0;
  FUN_1016a854c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(auStack_b0[0]);
  puVar4 = &UNK_1103f5760;
  func_0x000107c613fc(&UNK_1103f5760,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  pcStack_c0 = FUN_1016a841c;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  uStack_d0 = 0x10168981c;
  puStack_c8 = &UNK_1103f5778;
  ppuVar8 = &puStack_e0;
  puStack_b8 = puVar4;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_b8;
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(puVar1);
  uVar9 = uStack_80;
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000100075034(FUN_1016a8440,&puStack_e0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(uVar9);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1016a7ee4; end: 1016a7f4f;  */

void FUN_1016a7ee4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016a7f50; end: 1016a8093;  */

void FUN_1016a7f50(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_90;
  func_0x0001000d224c(&uStack_58);
  if (-1 < param_2) {
    func_0x0001006732c8(param_3,*(undefined8 *)(param_3 + 0x18));
    func_0x000107c605b0();
    func_0x0001000d224c(&uStack_60);
    uVar3 = 0;
    FUN_1016a854c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000100bcb214();
    func_0x000107c61170(uStack_60);
    uStack_70 = 0x1016a8504;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1013b7310;
    puStack_78 = &UNK_1103f5890;
    uStack_68 = param_5;
    func_0x000107c60bc4(&puStack_90);
    uVar1 = uStack_68;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar1);
    func_0x000107c54910(uStack_58);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uStack_58);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016a8094);
  (*pcVar2)();
}



/* Entry: 1016a8094; end: 1016a810b;  */

void FUN_1016a8094(undefined1 *param_1,undefined *param_2)

{
  if (param_2 == (undefined *)0x0) {
    if (((ulong)param_1 & 1) != 0) {
      func_0x000100b60084();
      return;
    }
    FUN_1016a6c8c();
    param_2 = &UNK_11072d358;
    func_0x000107c613f8(&UNK_11072d358,param_1,0,0);
    *param_1 = 1;
  }
  else {
    func_0x000107c614b0(param_2);
  }
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
  return;
}



/* Entry: 1016a810c; end: 1016a8337;  */

void FUN_1016a810c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  
  func_0x0001000d224c(&uStack_78);
  func_0x0001000bb420(param_3,auStack_98);
  puVar2 = &UNK_1103f57d8;
  func_0x000107c613fc(&UNK_1103f57d8,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000100102924(auStack_98,puVar2 + 0x20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x1016a8490;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f57f0;
  ppuVar3 = &puStack_c8;
  puStack_a0 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_a0;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(auStack_98);
  uVar4 = 0;
  FUN_1016a854c(0,0x112d69830,&PTR_PTR_1126a6700);
  uVar5 = uVar4;
  func_0x000100bcb214();
  func_0x000107c61170(auStack_98[0]);
  func_0x0001000d224c(&uStack_d0);
  func_0x000100bcb214(uVar4);
  func_0x000107c61170(uStack_d0);
  uStack_a8 = 0x1016a849c;
  puStack_c8 = puVar1;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5818;
  ppuVar6 = &puStack_c8;
  puStack_a0 = (undefined *)param_5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_a0;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  uStack_a8 = 0x1016a84a0;
  puStack_c8 = puVar1;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_100ff4e14;
  puStack_b0 = &UNK_1103f5840;
  ppuVar7 = &puStack_c8;
  puStack_a0 = (undefined *)param_5;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_a0;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e568(uStack_78);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uStack_78);
  return;
}



/* Entry: 1016a8338; end: 1016a83bb;  */

void FUN_1016a8338(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  if (-1 < param_2) {
    func_0x0001006732c8(param_3,*(undefined8 *)(param_3 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5490c(uStack_38);
    func_0x000107c61170(uStack_38);
    func_0x000107c615e8(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016a83bc);
  (*pcVar1)();
}



/* Entry: 1016a83bc; end: 1016a841b;  */

void FUN_1016a83bc(undefined *param_1)

{
  undefined *puVar1;
  
  if (param_1 == (undefined *)0x0) {
    FUN_1016a6c8c();
    puVar1 = &UNK_11072d358;
    func_0x000107c613f8(&UNK_11072d358,param_1,0,0);
    *param_1 = 1;
  }
  else {
    func_0x000107c614b0();
    puVar1 = param_1;
  }
  func_0x00010488ade0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 1016a841c; end: 1016a843f;  */

void FUN_1016a841c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,uVar5,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c47580();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    puVar2 = puVar1;
    func_0x000100121450(puVar1);
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&puStack_50);
      func_0x000107c61170(puVar1);
      func_0x000107c6142c(param_1);
      if (lStack_38 != 0) {
        func_0x000107c6147c(&uStack_60,&puStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if ((uVar3 & 1) == 0) {
          return;
        }
        puVar1 = PTR_PTR_1126a7850;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar4 = uStack_60;
        func_0x000107c5fadc(uStack_60,uStack_58);
        func_0x000107c6142c(uStack_58);
        func_0x000107c5a494(puVar1);
        func_0x000107c61170(uVar4);
        puStack_50 = puVar1;
        func_0x000100087f6c(&puStack_50);
        func_0x000107c61170(puVar1);
        return;
      }
      goto LAB_1016a7d14;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  lStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c61170(puVar1);
LAB_1016a7d14:
  func_0x00010006e7f4(&puStack_50);
  return;
}



/* Entry: 1016a8440; end: 1016a8483;  */

void FUN_1016a8440(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615e8(*param_1);
  *param_1 = uVar1;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 1016a8484; end: 1016a84a7;  */

void FUN_1016a8484(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000d224c(&uStack_78);
  func_0x0001000bb420(unaff_x20 + 0x20,auStack_98);
  puVar3 = &UNK_1103f57d8;
  func_0x000107c613fc(&UNK_1103f57d8,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  func_0x000100102924(auStack_98,puVar3 + 0x20);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x1016a8490;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f57f0;
  ppuVar4 = &puStack_c8;
  puStack_a0 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_a0;
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(auStack_98);
  uVar5 = 0;
  FUN_1016a854c(0,0x112d69830,&PTR_PTR_1126a6700);
  uVar6 = uVar5;
  func_0x000100bcb214();
  func_0x000107c61170(auStack_98[0]);
  func_0x0001000d224c(&uStack_d0);
  func_0x000100bcb214(uVar5);
  func_0x000107c61170(uStack_d0);
  uStack_a8 = 0x1016a849c;
  puStack_c8 = puVar2;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5818;
  ppuVar7 = &puStack_c8;
  puStack_a0 = (undefined *)uVar1;
  func_0x000107c60bc4(ppuVar7);
  puVar3 = puStack_a0;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  uStack_a8 = 0x1016a84a0;
  puStack_c8 = puVar2;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_100ff4e14;
  puStack_b0 = &UNK_1103f5840;
  ppuVar8 = &puStack_c8;
  puStack_a0 = (undefined *)uVar1;
  func_0x000107c60bc4(ppuVar8);
  puVar3 = puStack_a0;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e568(uStack_78);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uStack_78);
  return;
}



/* Entry: 1016a84a8; end: 1016a84e3;  */

void FUN_1016a84a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100183ab8(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016a84e4; end: 1016a8513;  */

void FUN_1016a84e4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar5 = unaff_x20 + 0x20;
  ppuVar7 = &puStack_90;
  func_0x0001000d224c(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),lVar1,lVar5,
                      *(undefined8 *)(unaff_x20 + 0x40));
  if (lVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016a8094);
    (*pcVar4)();
  }
  func_0x0001006732c8(lVar5,*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c605b0();
  func_0x0001000d224c(&uStack_60);
  uVar6 = 0;
  FUN_1016a854c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_60);
  uStack_70 = 0x1016a8504;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1013b7310;
  puStack_78 = &UNK_1103f5890;
  uStack_68 = uVar2;
  func_0x000107c60bc4(&puStack_90);
  uVar3 = uStack_68;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c54910(uStack_58);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uStack_58);
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1016a8514; end: 1016a854b;  */

void FUN_1016a8514(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 1016a854c; end: 1016a858b;  */

void FUN_1016a854c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016a858c; end: 1016a85ab;  */

void FUN_1016a858c(long param_1,long param_2)

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



/* Entry: 1016a85ac; end: 1016a85d3;  */

void FUN_1016a85ac(void)

{
  func_0x000100cb8ee8();
  return;
}



/* Entry: 1016a85d4; end: 1016a8633; -[_TtC23ComposerSUPServicesImpl14SUPBooleanRepo init] */

void FUN_1016a85d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSUPServicesImpl.SUPBooleanRepo",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016a8600);
  (*pcVar1)();
}



/* Entry: 1016a8634; end: 1016a866b; -[_TtC23ComposerSUPServicesImpl14SUPBooleanRepo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016a8650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016a8654) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a8634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfb90));
  return;
}



/* Entry: 1016a866c; end: 1016a868b;  */

void FUN_1016a866c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5200);
  return;
}



/* Entry: 1016a868c; end: 1016a87c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016a868c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_1103f5990;
  func_0x000107c613fc(&UNK_1103f5990,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103f5b70;
  func_0x000107c613fc(&UNK_1103f5b70,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar2 = &UNK_1103f5b98;
  func_0x000107c613fc(&UNK_1103f5b98,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1016a9b5c;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uVar4 = 0;
  FUN_1016a9b9c(0,0x112dbfbd0,&PTR_PTR_1126a7858);
  uVar5 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_1016a9b64,puVar2,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  func_0x000103edf0bc();
  func_0x000107c61574(uVar5);
  return puVar2;
}



/* Entry: 1016a87c8; end: 1016a883f;  */

void FUN_1016a87c8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126a7858);
    func_0x000107c453e4();
  }
  else {
    FUN_1016a8840(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016a8840; end: 1016a8987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016a8840(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined1 auStack_70 [32];
  long alStack_50 [4];
  
  puVar2 = PTR_PTR_1126a7858;
  func_0x000107c610f8(PTR_PTR_1126a7858);
  func_0x000107c453e4();
  if (-1 < param_1) {
    func_0x0001000d224c(alStack_50);
    lVar1 = alStack_50[0];
    lVar3 = alStack_50[0];
    func_0x000107c5dc1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar3 == 0) {
      alStack_50[1] = 0;
      alStack_50[0] = 0;
      alStack_50[3] = 0;
      alStack_50[2] = 0;
    }
    else {
      func_0x000107c60234(alStack_50,lVar3);
      func_0x000107c615e8(lVar3);
    }
    func_0x000100672b50(alStack_50,auStack_90);
    if (lStack_78 == 0) {
      func_0x00010006e7f4(alStack_50);
      func_0x00010006e7f4(auStack_90);
    }
    else {
      func_0x000100102924(auStack_90,auStack_70);
      func_0x0001000bb420(auStack_70,auStack_90);
      uVar4 = 0;
      FUN_1016a9b9c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar5 = &uStack_98;
      func_0x000107c6147c(puVar5,auStack_90,PTR___sypN_11034f1a8 + 8,uVar4,6);
      if ((int)puVar5 != 0) {
        func_0x000107c5a494(puVar2);
        func_0x000107c61170(uStack_98);
      }
      func_0x00010006e7f4(alStack_50);
      func_0x000100183ab8(auStack_70);
    }
  }
  return puVar2;
}



/* Entry: 1016a8988; end: 1016a89c3; -[_TtC23ComposerSUPServicesImpl14SUPBooleanRepo getPromiseWithKey:] */

void FUN_1016a8988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016a868c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016a89c4; end: 1016a89ff; -[_TtC23ComposerSUPServicesImpl14SUPBooleanRepo getWithKey:] */

void FUN_1016a89c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016a8840(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016a8a00; end: 1016a8a1b; -[_TtC23ComposerSUPServicesImpl14SUPBooleanRepo putSpeculativeWithKey:value:] */

void FUN_1016a8a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [24];
  undefined *puStack_48;
  
  puVar1 = auStack_60;
  puStack_48 = PTR___sSbN_11034dd40;
  auStack_60[0] = param_4;
  func_0x000107c61174();
  FUN_1016a8a1c(param_3,auStack_60,&UNK_1103f5b20,FUN_1016a9b34,&SUB_10090569c);
  func_0x000100183ab8(auStack_60);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016a8a1c; end: 1016a8bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1016a8a1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  if (param_1 < 0) {
    puVar3 = (undefined1 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_1016a6c8c();
    puVar4 = &UNK_11072d358;
    func_0x000107c613f8(&UNK_11072d358,puVar3,0,0);
    *puVar3 = 0;
    puVar5 = puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    lVar1 = 0;
    func_0x00010095c380();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dbfb98);
    func_0x0001000d224c(&uStack_68);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dbfb90);
    func_0x0001000bb420(param_2,auStack_88);
    func_0x000107c613fc(param_3,0x50,7);
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    *(long *)(param_3 + 0x18) = param_1;
    func_0x000100102924(auStack_88,param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x40) = uVar7;
    *(long *)(param_3 + 0x48) = lVar1;
    uVar2 = 0;
    FUN_1016a9b9c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(lVar1);
    (*param_5)(param_4,param_3,uVar2);
    func_0x000107c61170(uStack_68);
    func_0x000107c61574(param_3);
    puVar5 = *(undefined **)(lVar1 + 0x10);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(lVar1);
  }
  return puVar5;
}



/* Entry: 1016a8bc4; end: 1016a8bdf; -[_TtC23ComposerSUPServicesImpl14SUPBooleanRepo putConfirmedWithKey:value:] */

void FUN_1016a8bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [24];
  undefined *puStack_48;
  
  puVar1 = auStack_60;
  puStack_48 = PTR___sSbN_11034dd40;
  auStack_60[0] = param_4;
  func_0x000107c61174();
  FUN_1016a8a1c(param_3,auStack_60,&UNK_1103f5a58,FUN_1016a9ad4,&SUB_10488b6b4);
  func_0x000100183ab8(auStack_60);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016a8be0; end: 1016a8e23;  */

void FUN_1016a8be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [24];
  undefined *puStack_48;
  
  puVar1 = auStack_60;
  puStack_48 = PTR___sSbN_11034dd40;
  auStack_60[0] = param_4;
  func_0x000107c61174();
  FUN_1016a8a1c(param_3,auStack_60,param_5,param_6,param_7);
  func_0x000100183ab8(auStack_60);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016a8e24; end: 1016a8fcb;  */

void FUN_1016a8e24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  
  if (param_2 < 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    uVar2 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x0001000d224c(&uStack_58);
    puVar3 = &UNK_1103f5990;
    func_0x000107c613fc(&UNK_1103f5990,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_4);
    puVar1 = &UNK_1103f59b8;
    func_0x000107c613fc(&UNK_1103f59b8,0x40,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(long *)(puVar1 + 0x18) = param_2;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    *(undefined8 *)(puVar1 + 0x28) = param_5;
    *(undefined8 *)(puVar1 + 0x30) = param_3;
    *(undefined8 *)(puVar1 + 0x38) = param_6;
    uVar2 = 0;
    FUN_1016a9b9c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    func_0x00010090569c(FUN_1016a9524,puVar1,uVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar1);
    puVar3 = &UNK_1103f59e0;
    func_0x000107c613fc(&UNK_1103f59e0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar2 = 0x1016a9560;
  }
  func_0x0001000b6d50(uVar2,puVar3);
  return;
}



/* Entry: 1016a8fcc; end: 1016a924b;  */

void FUN_1016a8fcc(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [6];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar1 = (undefined *)0x0;
  if (param_1 != 0) {
    puVar1 = param_2;
    FUN_1016a8840();
    func_0x000107c61170(param_1);
    puStack_e0 = puVar1;
    func_0x000100087f6c(&puStack_e0);
    func_0x000107c61170();
  }
  func_0x0001000d224c(&uStack_80);
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c47580();
  puVar7 = (undefined8 *)(puVar1 + 0x20);
  *puVar7 = puVar2;
  puVar2 = puVar1;
  func_0x000100673700(puVar1);
  func_0x000107c61588(puVar1);
  uVar6 = *(undefined8 *)(puVar1 + 0x10);
  uVar3 = 0;
  FUN_1016a9b9c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar7,uVar6,uVar3);
  func_0x000100120cb0();
  puVar4 = puVar2;
  func_0x000107c5fe08(puVar2,uVar3,puVar7);
  func_0x000107c6142c(puVar2);
  func_0x0001000d224c(auStack_b0);
  uVar6 = 0;
  FUN_1016a9b9c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(auStack_b0[0]);
  puVar1 = &UNK_1103f5a08;
  func_0x000107c613fc(&UNK_1103f5a08,0x20,7);
  *(undefined **)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcStack_c0 = FUN_1016a9a6c;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  uStack_d0 = 0x10168981c;
  puStack_c8 = &UNK_1103f5a20;
  ppuVar5 = &puStack_e0;
  puStack_b8 = puVar1;
  func_0x000107c60bc4(ppuVar5);
  puVar1 = puStack_b8;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  uVar3 = uStack_80;
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000100075034(FUN_1016a9a90,&puStack_e0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(uVar3);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1016a924c; end: 1016a9497;  */

void FUN_1016a924c(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    puVar2 = puVar1;
    func_0x000100121450(puVar1);
    if ((param_2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&puStack_50);
      func_0x000107c61170(puVar1);
      func_0x000107c6142c(param_1);
      if (lStack_38 != 0) {
        uVar3 = 0;
        FUN_1016a9b9c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar4 = &uStack_58;
        func_0x000107c6147c(puVar4,&puStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
        if (((ulong)puVar4 & 1) == 0) {
          return;
        }
        puVar1 = PTR_PTR_1126a7858;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c5a494();
        puStack_50 = puVar1;
        func_0x000100087f6c(&puStack_50);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(uStack_58);
        return;
      }
      goto LAB_1016a9364;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  lStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c61170(puVar1);
LAB_1016a9364:
  func_0x00010006e7f4(&puStack_50);
  return;
}



/* Entry: 1016a9498; end: 1016a94d3; -[_TtC23ComposerSUPServicesImpl14SUPBooleanRepo observeWithKey:] */

void FUN_1016a9498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001016a8c7c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016a94d4; end: 1016a94e3;  */

void FUN_1016a94d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  if (lVar1 < 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    uVar5 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x0001000d224c(&uStack_58);
    puVar6 = &UNK_1103f5990;
    func_0x000107c613fc(&UNK_1103f5990,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,uVar5);
    puVar4 = &UNK_1103f59b8;
    func_0x000107c613fc(&UNK_1103f59b8,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(long *)(puVar4 + 0x18) = lVar1;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = uVar3;
    *(undefined8 *)(puVar4 + 0x30) = uVar2;
    *(undefined8 *)(puVar4 + 0x38) = uVar7;
    uVar5 = 0;
    FUN_1016a9b9c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar7);
    func_0x00010090569c(FUN_1016a9524,puVar4,uVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar4);
    puVar6 = &UNK_1103f59e0;
    func_0x000107c613fc(&UNK_1103f59e0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar2;
    *(undefined8 *)(puVar6 + 0x18) = uVar7;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar7);
    uVar5 = 0x1016a9560;
  }
  func_0x0001000b6d50(uVar5,puVar6);
  return;
}



/* Entry: 1016a94e4; end: 1016a9523;  */

void FUN_1016a94e4(void)

{
  long unaff_x20;
  
  func_0x0001016a9380(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      0x1016a9504);
  return;
}


