/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029323fc; end: 10293240b;  */

void FUN_1029323fc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000102931d14(0);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10293240c; end: 1029324a3;  */

void FUN_10293240c(uint param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000102931d14(param_1 & 1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029324a4; end: 1029324af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029324a4(void)

{
  byte bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  puVar2 = (ulong *)(lVar5 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (ulong *)0x0) {
    puVar3 = puVar2;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (puVar3 != (ulong *)0x0) {
      puVar4 = (ulong *)PTR_PTR_1126aead0;
      func_0x000107c610f8();
      func_0x000107c47994();
      uVar6 = *(undefined8 *)(*(long *)((long)puVar2 + _DAT_112ecddb8) + _DAT_112ecddf0);
      func_0x00010036604c(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar6);
      func_0x000103928328(puVar4,uVar6,0);
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x98))(bVar1 & 1);
      puStack_68 = puVar4;
      func_0x00010008a7c8(&uStack_60,&puStack_68);
      func_0x000100083b20(&puStack_68);
      func_0x000107c61574(uStack_60);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      puVar2 = puStack_68;
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1029324b0; end: 10293256f;  */

void FUN_1029324b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102932570; end: 1029325ab;  */

void FUN_102932570(long param_1,long param_2)

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



/* Entry: 1029325ac; end: 1029325ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029325ac(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecddf8;
  func_0x000107c61428(unaff_x20 + _DAT_112ecddf8,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 1029325f0; end: 10293273b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029325f0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecddf8;
  func_0x000107c61428(unaff_x20 + _DAT_112ecddf8,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10293273c; end: 1029328f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10293273c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ecddf8;
  func_0x000107c61614(unaff_x20 + _DAT_112ecddf8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ecdde8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecddf0) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 1029328f4; end: 1029329ab; -[_TtC29FanPassAccountManagementScope29FanPassAccountManagementScope initWithUiContainer:loggingContext:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029328f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ecddf8;
  func_0x000107c61614(param_1 + _DAT_112ecddf8,0);
  *(undefined8 *)(param_1 + _DAT_112ecdde8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ecddf0) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_5);
  func_0x00010036803c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1029329ac; end: 1029329db;  */

void FUN_1029329ac(void)

{
  func_0x00010036803c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029329dc; end: 102932a47; -[_TtC29FanPassAccountManagementScope29FanPassAccountManagementScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029329dc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecdde8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecddf0));
  param_1 = param_1 + _DAT_112ecddf8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102932a48; end: 102932aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102932a48(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100369454();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecde08) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102932ab0; end: 102932afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102932ab0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecde08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102932afc; end: 102932b83; -[_TtC29FanPassAccountManagementScope44FanPassAccountManagementScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102932afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102932b84; end: 102932bb7;  */

void FUN_102932b84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102932bb8; end: 102932bc7;  */

undefined1  [16] FUN_102932bb8(void)

{
  return ZEXT816(0x11056e938);
}



/* Entry: 102932bc8; end: 102932bd7; -[_TtC29FanPassAccountManagementScope44FanPassAccountManagementScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102932bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecde08));
  return;
}



/* Entry: 102932bd8; end: 102932d23;  */

/* WARNING: Possible PIC construction at 0x000102932cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102932cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102932ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102932cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102932cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102932cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102932cf0) */
/* WARNING: Removing unreachable block (ram,0x000102932ce0) */
/* WARNING: Removing unreachable block (ram,0x000102932cd0) */
/* WARNING: Removing unreachable block (ram,0x000102932cc0) */
/* WARNING: Removing unreachable block (ram,0x000102932cb0) */
/* WARNING: Removing unreachable block (ram,0x000102932d00) */

void FUN_102932bd8(undefined8 *param_1)

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
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
  puVar12 = &UNK_11056ea50;
  func_0x000107c613fc(&UNK_11056ea50,0x70,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar1;
  *(undefined8 *)(puVar12 + 0x18) = uVar6;
  *(undefined8 *)(puVar12 + 0x20) = uVar13;
  *(undefined8 *)(puVar12 + 0x28) = uVar7;
  *(undefined8 *)(puVar12 + 0x30) = uVar2;
  *(undefined8 *)(puVar12 + 0x38) = uVar8;
  *(undefined8 *)(puVar12 + 0x40) = uVar3;
  *(undefined8 *)(puVar12 + 0x48) = uVar9;
  *(undefined8 *)(puVar12 + 0x50) = uVar4;
  *(undefined8 *)(puVar12 + 0x58) = uVar10;
  *(undefined8 *)(puVar12 + 0x60) = uVar5;
  *(undefined8 *)(puVar12 + 0x68) = uVar11;
  uVar13 = 0x112ecde68;
  func_0x0001000285a8(0x112ecde68,&UNK_10daf3780);
  func_0x000107c613fc();
  pcVar14 = FUN_102932db0;
  func_0x0001000841fc(FUN_102932db0,puVar12,uVar13);
  func_0x000100084214(&UNK_10daf3740,0x39,2);
  *param_1 = pcVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102932d24; end: 102932d33;  */

undefined1  [16] FUN_102932d24(void)

{
  return ZEXT816(0x11056ea30);
}



/* Entry: 102932d34; end: 102932daf;  */

void FUN_102932d34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102932db0; end: 102932ec7;  */

void FUN_102932db0(long *param_1,undefined8 *param_2)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112ecde70,&UNK_10daf3788);
  puVar10 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  FUN_102932fe8(uVar11,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,puVar10,uVar14,uVar15,uVar4,uVar9);
  func_0x000100082720("FanPassSubscriptionManagementViewControllerServiceProvider",0x3a,2);
  puVar12 = puVar10;
  FUN_102932ec8(puVar10,uVar11);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar10);
  func_0x000100082720("FanPassSubscriptionManagementViewControllerEntryPointProvider",0x3d,2);
  *param_1 = (long)puVar12;
  return;
}



/* Entry: 102932ec8; end: 102932fe7;  */

void FUN_102932ec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056eb20;
  func_0x000107c613fc(&UNK_11056eb20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102932f48,puVar1);
  return;
}



/* Entry: 102932fe8; end: 102933573;  */

void FUN_102932fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecde78,&UNK_10daf3798);
  puVar1 = &UNK_11056eb48;
  func_0x000107c613fc(&UNK_11056eb48,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000823a8(0x10293312c,puVar1);
  return;
}



/* Entry: 102933574; end: 10293367b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102933574(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112ecde88;
  ppuVar3 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecde88);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112ecdec0) + _DAT_113041e48);
    func_0x000107c40cfc();
    func_0x000107c61180();
    pcStack_50 = FUN_10293367c;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101ce99e0;
    puStack_58 = &UNK_11056edd0;
    func_0x000107c60bc4(&puStack_70);
    lVar4 = lVar2;
    func_0x000107c4c280(lVar2,param_2,ppuVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar4;
    func_0x000107c61174(lVar4);
    func_0x000107c61170(uVar5);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar4;
}



/* Entry: 10293367c; end: 10293389b;  */

void FUN_10293367c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  func_0x000107c3dbc0();
  func_0x000107c61180();
  puVar3 = PTR___sypN_11034f1a8;
  lVar4 = param_2;
  func_0x000107c5fc54();
  func_0x000107c61170(param_2);
  lVar11 = *(long *)(lVar4 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = lVar4;
  if (lVar11 == 0) {
    func_0x000107c6142c(lVar4);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    do {
      func_0x0001000bb420(lVar2 + 0x20,auStack_80);
      func_0x0001000bb420(auStack_80,auStack_a0);
      uVar5 = 0;
      func_0x000103fd7dd8(0);
      puVar6 = &uStack_a8;
      func_0x000107c6147c(puVar6,auStack_a0,puVar3 + 8,uVar5,6);
      uVar5 = uStack_a8;
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000100183ab8(auStack_80);
      }
      else {
        FUN_10293389c();
        func_0x000107c61170(uVar5);
        func_0x000100183ab8(auStack_80);
        puVar8 = puVar9;
        func_0x000107c61550();
        if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
           (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar9 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar9) {
              puVar7 = puVar9;
            }
            func_0x000107c60480(puVar7);
          }
          puVar8 = (undefined *)0x0;
          FUN_102936078(0,puVar7 + 1,1,puVar9);
        }
        uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar10 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
          FUN_102936078(puVar9,uVar1 + 1,1,puVar8);
          uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
        *(undefined8 **)(uVar10 + uVar1 * 8 + 0x20) = puVar6;
      }
      lVar11 = lVar11 + -1;
      lVar2 = lVar2 + 0x20;
    } while (lVar11 != 0);
    func_0x000107c6142c(lVar4);
  }
  puVar8 = puVar9;
  FUN_102933aa0(puVar9);
  func_0x000107c6142c(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  puVar7 = puVar8;
  func_0x000107c5fc48(puVar8,puVar3 + 8);
  func_0x000107c6142c(puVar8);
  func_0x000107c45788();
  func_0x000107c61170(puVar7);
  uVar5 = 0;
  FUN_1029370b4(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  param_1[3] = uVar5;
  *param_1 = puVar9;
  return;
}



/* Entry: 10293389c; end: 102933a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10293389c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar3 = PTR_PTR_1126aba10;
  func_0x000107c610f8(PTR_PTR_1126aba10);
  func_0x000107c453e4();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113041e88);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_113041e88))[1]);
  func_0x000107c53af8(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113041e90);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_113041e90))[1]);
  func_0x000107c57894(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c5552c(puVar3);
  func_0x000107c59a70(puVar3);
  func_0x000107c61428(unaff_x20 + _DAT_113041ea8,auStack_48,0,0);
  func_0x000107c547a8(puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113041eb0);
  func_0x000107c61428(puVar1,auStack_60,0,0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c570c8(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61428(unaff_x20 + _DAT_113041eb8,auStack_78,0,0);
  func_0x000107c59850(puVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_113041ec0))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113041ec0);
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c54230(puVar3);
  func_0x000107c61170(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113041ec8))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113041ec8);
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c56124(puVar3);
  func_0x000107c61170(uVar4);
  return puVar3;
}



/* Entry: 102933aa0; end: 102933c93;  */

undefined * FUN_102933aa0(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102933c94);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1029370b4(0,0x112ecdf40,&PTR_PTR_1126aba10);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_1029362b8(uVar7,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1029370b4(0,0x112ecdf40,&PTR_PTR_1126aba10);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 102933c94; end: 102933d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102933c94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ecde98;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecde98);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ecded0);
    func_0x000107c451e8();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c451e4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c615f0(lVar3);
    func_0x000107c615e8(uVar4);
    lVar2 = 0;
  }
  func_0x000107c615f0(lVar2);
  return lVar3;
}



/* Entry: 102933d30; end: 102933fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102933d30(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  
  lVar1 = _DAT_112ecdea0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ecdea0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c3fdd0(0x3fe0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c52b50(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c5a050(puVar3);
    puVar2 = PTR_PTR_1126aeff0;
    func_0x000107c610f8();
    func_0x000107c45eac();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c5ba54(puVar2);
    func_0x000107c3d89c(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = 0x112d360b8;
    FUN_102935f60(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 5;
    *(undefined8 *)(lVar5 + 0x10) = 2;
    puVar6 = puVar2;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar7 = puVar3;
    func_0x000107c3f75c(puVar3);
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    *(undefined **)(lVar5 + 0x20) = puVar8;
    puVar6 = puVar2;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar7 = puVar3;
    func_0x000107c3f764(puVar3);
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    *(undefined **)(lVar5 + 0x28) = puVar8;
    uVar9 = 0;
    FUN_1029370b4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar10 = lVar5;
    func_0x000107c5fc48(lVar5,uVar9);
    func_0x000107c61574(lVar5);
    func_0x000107c3d048(puVar4);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(puVar2);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar9);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102933fac; end: 102933fb3; -[_TtC43FanPassSubscriptionManagementImplementation43FanPassSubscriptionManagementViewController pageViewName] */

undefined8 FUN_102933fac(void)

{
  return 199;
}



/* Entry: 102933fb4; end: 102934cd7;  */

/* WARNING: Possible PIC construction at 0x00010293402c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102934108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029345fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102934788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029347ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029347cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102934b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102934c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102934c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102934b90) */
/* WARNING: Removing unreachable block (ram,0x0001029347d0) */
/* WARNING: Removing unreachable block (ram,0x000102934bd4) */
/* WARNING: Removing unreachable block (ram,0x000102934874) */
/* WARNING: Removing unreachable block (ram,0x000102934cc4) */
/* WARNING: Removing unreachable block (ram,0x00010293489c) */
/* WARNING: Removing unreachable block (ram,0x000102934cc8) */
/* WARNING: Removing unreachable block (ram,0x000102934928) */
/* WARNING: Removing unreachable block (ram,0x000102934ccc) */
/* WARNING: Removing unreachable block (ram,0x000102934998) */
/* WARNING: Removing unreachable block (ram,0x000102934cd0) */
/* WARNING: Removing unreachable block (ram,0x000102934a0c) */
/* WARNING: Removing unreachable block (ram,0x000102934cd4) */
/* WARNING: Removing unreachable block (ram,0x000102934a88) */
/* WARNING: Removing unreachable block (ram,0x0001029347b0) */
/* WARNING: Removing unreachable block (ram,0x00010293478c) */
/* WARNING: Removing unreachable block (ram,0x000102934600) */
/* WARNING: Removing unreachable block (ram,0x00010293410c) */
/* WARNING: Removing unreachable block (ram,0x000102934434) */
/* WARNING: Removing unreachable block (ram,0x000102934474) */
/* WARNING: Removing unreachable block (ram,0x000102934488) */
/* WARNING: Removing unreachable block (ram,0x000102934cbc) */
/* WARNING: Removing unreachable block (ram,0x0001029344d0) */
/* WARNING: Removing unreachable block (ram,0x000102934cc0) */
/* WARNING: Removing unreachable block (ram,0x000102934508) */
/* WARNING: Removing unreachable block (ram,0x00010293453c) */
/* WARNING: Removing unreachable block (ram,0x000102934630) */
/* WARNING: Removing unreachable block (ram,0x000102934634) */
/* WARNING: Removing unreachable block (ram,0x000102934798) */
/* WARNING: Removing unreachable block (ram,0x00010293479c) */
/* WARNING: Removing unreachable block (ram,0x000102934748) */
/* WARNING: Removing unreachable block (ram,0x0001029345ec) */
/* WARNING: Removing unreachable block (ram,0x000102934030) */
/* WARNING: Removing unreachable block (ram,0x000102934034) */
/* WARNING: Removing unreachable block (ram,0x000102934608) */
/* WARNING: Removing unreachable block (ram,0x000102934070) */
/* WARNING: Removing unreachable block (ram,0x000102934c68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102933fb4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ecdeb8);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c509b4(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 102934cd8; end: 102934d3b; -[_TtC43FanPassSubscriptionManagementImplementation43FanPassSubscriptionManagementViewController viewDidLoad] */

void FUN_102934cd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x000107c54394();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  FUN_102933fb4();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102934d3c; end: 102934e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102934d3c(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidDisappear__112684c48,param_1 & 1);
  uVar1 = unaff_x20;
  func_0x000107c49aa0();
  if ((uVar1 & 1) == 0) {
    uVar1 = unaff_x20;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c49aa0();
      func_0x000107c61170();
      if ((uVar2 & 1) != 0) goto LAB_102934db8;
    }
    uVar1 = unaff_x20;
    func_0x000107c4a094();
    if ((int)uVar1 == 0) {
      return;
    }
  }
LAB_102934db8:
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112ecdee8)) +
              0x78))();
  if (uVar1 != 0) {
    func_0x000107c41b24();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102934e08; end: 102934e37; -[_TtC43FanPassSubscriptionManagementImplementation43FanPassSubscriptionManagementViewController viewDidDisappear:] */

void FUN_102934e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102934d3c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102934e38; end: 102934ef3; -[_TtC43FanPassSubscriptionManagementImplementation43FanPassSubscriptionManagementViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102934e38(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_didMoveToParentViewController__1125bb948;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  if (param_3 == 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(param_1 + _DAT_112ecdee8)) +
                0x78))();
    if (plVar3 != (long *)0x0) {
      func_0x000107c41b24();
      func_0x000107c615e8(plVar3);
    }
  }
  else {
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102934ef4; end: 102934f8f;  */

/* WARNING: Possible PIC construction at 0x000102934f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102934f74) */

void FUN_102934ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar4 = uVar3;
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3,param_3,uVar4,param_4,param_5);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102934f90; end: 102934fff;  */

void FUN_102934f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102935000,uVar1,uVar2);
  return;
}



/* Entry: 102935000; end: 10293513b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102935000(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x90,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + _DAT_112ecdec0) + _DAT_113041e48);
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
    func_0x000107c615f0(uVar4);
    func_0x000107c5fadc(uVar2,uVar1);
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar2;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10293513c;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    uVar2 = 0x112ecdf38;
    func_0x0001000285a8(0x112ecdf38,&UNK_10db9f430);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_10293521c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11056eda8;
    *(long *)(unaff_x22 + 0x70) = lVar3;
    func_0x000107c49ccc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c3fedc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000102935138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293513c; end: 102935177;  */

void FUN_10293513c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102935178,*(undefined8 *)(*unaff_x22 + 0xd8),*(undefined8 *)(*unaff_x22 + 0xe0));
  return;
}



/* Entry: 102935178; end: 10293521b;  */

void FUN_102935178(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4d664(uVar5,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3fedc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000102935218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293521c; end: 102935253;  */

void FUN_10293521c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  **(undefined8 **)(*(long *)(*plVar1 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 102935254; end: 1029352c3;  */

void FUN_102935254(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5faec(param_2);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,lVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1029352c4; end: 1029352db;  */

void FUN_1029352c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029352dc,0,0);
  return;
}



/* Entry: 1029352dc; end: 10293534f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029352dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = _DAT_112ecdec0;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102935350,uVar1,uVar2);
  return;
}



/* Entry: 102935350; end: 102935397;  */

void FUN_102935350(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(lVar2 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102935398,0,0);
  return;
}



/* Entry: 102935398; end: 10293545f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102935398(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + _DAT_113041e48);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102935460;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0x112e609b0;
  func_0x0001000285a8(0x112e609b0,&UNK_10daf3890);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1021c5f28;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11056ed30;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c615f0(uVar3);
  func_0x000107c43fdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102935460; end: 1029354db;  */

void FUN_102935460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1029354a0,0,0);
  return;
}



/* Entry: 1029354dc; end: 10293561f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029354dc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112ecdee8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112fb06a0);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar4);
    puVar2 = &UNK_11056ebb0;
    func_0x000107c613fc(&UNK_11056ebb0,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618(param_1);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c61170(param_1);
    pcStack_70 = FUN_102936f74;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11056ed58;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102935620; end: 10293568b;  */

void FUN_102935620(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293568c,uVar1,uVar2);
  return;
}



/* Entry: 10293568c; end: 10293577f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293568c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102935780);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5e400();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x30) = lVar2;
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      plVar4 = (long *)(ulong)*(uint *)(
                                       PTR___s8StoreKit03AppA0O23showManageSubscriptions2inySo13UIWindowSceneC_tYaKFZTu_110347ad0
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x38) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_102935780;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___s8StoreKit03AppA0O23showManageSubscriptions2inySo13UIWindowSceneC_tYaKFZ_110347ac8)
                (lVar2);
      return;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000103b685f8(0x6f646e69775f6f6e,0xef656e6563735f77);
                    /* WARNING: Could not recover jumptable at 0x000102935778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102935780; end: 1029357d7;  */

void FUN_102935780(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1029357d8;
  }
  else {
    pcVar1 = FUN_102935824;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
  return;
}



/* Entry: 1029357d8; end: 102935823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029357d8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000103b685ec();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102935820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102935824; end: 10293588b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102935824(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000103b685f8(0,0);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102935888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293588c; end: 1029358fb;  */

void FUN_10293588c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029358fc,uVar1,uVar2);
  return;
}



/* Entry: 1029358fc; end: 102935bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029358fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x90,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar7 != 0) {
    pcVar3 = "showLoadingOverlay()";
    func_0x0001000c10c0("showLoadingOverlay()");
    func_0x000107c61180();
    puVar4 = &UNK_11056ebb0;
    func_0x000107c613fc(&UNK_11056ebb0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar7);
    *(code **)(unaff_x22 + 0x70) = FUN_102937214;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined **)(unaff_x22 + 0x50) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11056ee70;
    lVar6 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(lVar6);
    func_0x000107c615e8(pcVar3);
    func_0x000107c61170(lVar7);
  }
  lVar7 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0xa8,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    lVar6 = *(long *)(lVar7 + _DAT_112ecdec0);
    func_0x000107c61174();
    func_0x000107c61170(lVar7);
    uVar8 = *(undefined8 *)(lVar6 + _DAT_113041e48);
    *(undefined8 *)(unaff_x22 + 0x108) = uVar8;
    func_0x000107c615f0(uVar8);
    func_0x000107c61170(lVar6);
    func_0x000107c5fadc(uVar5,uVar1);
    *(undefined8 *)(unaff_x22 + 0x110) = uVar5;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102935be0;
    lVar7 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar7,0);
    uVar5 = 0x112d4e498;
    func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
    *(undefined **)(unaff_x22 + 0x50) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x1026a3c5c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11056ee98;
    *(long *)(unaff_x22 + 0x70) = lVar7;
    func_0x000107c4d030(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  lVar7 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0xc0,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    pcVar3 = "hideLoadingOverlay()";
    func_0x0001000c10c0("hideLoadingOverlay()");
    func_0x000107c61180();
    puVar4 = &UNK_11056ebb0;
    func_0x000107c613fc(&UNK_11056ebb0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar7);
    *(code **)(unaff_x22 + 0x70) = FUN_102937554;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined **)(unaff_x22 + 0x50) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11056eec0;
    lVar6 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(lVar6);
    func_0x000107c615e8(pcVar3);
    func_0x000107c61170(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x000102935bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102935be0; end: 102935c1b;  */

void FUN_102935be0(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102935c1c,*(undefined8 *)(*unaff_x22 + 0xf8),*(undefined8 *)(*unaff_x22 + 0x100));
  return;
}



/* Entry: 102935c1c; end: 102935d3f;  */

void FUN_102935c1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar2);
  lVar5 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0xc0,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    pcVar3 = "hideLoadingOverlay()";
    func_0x0001000c10c0("hideLoadingOverlay()");
    func_0x000107c61180();
    puVar4 = &UNK_11056ebb0;
    func_0x000107c613fc(&UNK_11056ebb0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar5);
    puVar6 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(code **)(unaff_x22 + 0x70) = FUN_102937554;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11056eec0;
    func_0x000107c60bc4(puVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(puVar6);
    func_0x000107c615e8(pcVar3);
    func_0x000107c61170(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000102935d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102935d40; end: 102935d67; -[_TtC43FanPassSubscriptionManagementImplementation43FanPassSubscriptionManagementViewController initWithCoder:] */

void FUN_102935d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x00010293647c();
  return;
}



/* Entry: 102935d68; end: 102935d9b;  */

void FUN_102935d68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102935d9c; end: 102935ed3; -[_TtC43FanPassSubscriptionManagementImplementation43FanPassSubscriptionManagementViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102935db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102935dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102935df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102935e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102935e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102935e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102935e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102935e98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102935e7c) */
/* WARNING: Removing unreachable block (ram,0x000102935e5c) */
/* WARNING: Removing unreachable block (ram,0x000102935e3c) */
/* WARNING: Removing unreachable block (ram,0x000102935e1c) */
/* WARNING: Removing unreachable block (ram,0x000102935dfc) */
/* WARNING: Removing unreachable block (ram,0x000102935ddc) */
/* WARNING: Removing unreachable block (ram,0x000102935dbc) */
/* WARNING: Removing unreachable block (ram,0x000102935e9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102935d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecdee8));
  return;
}



/* Entry: 102935ed4; end: 102935ef7; -[_TtC43FanPassSubscriptionManagementImplementation43FanPassSubscriptionManagementViewController didDismissFanPassSubscriptionScopeWithError:] */

void FUN_102935ed4(void)

{
  return;
}



/* Entry: 102935ef8; end: 102935f17;  */

void FUN_102935ef8(void)

{
  func_0x000107c61168(&PTR_PTR_1128716b0);
  return;
}



/* Entry: 102935f18; end: 102935f1b; -[_TtC43FanPassSubscriptionManagementImplementation43FanPassSubscriptionManagementViewController defaultProjectNameV2] */

void FUN_102935f18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fef8();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102935f1c; end: 102935f5f;  */

void FUN_102935f1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fef8();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102935f60; end: 102935fd7;  */

void FUN_102935f60(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1029370b4(0,param_1,param_2);
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



/* Entry: 102935fd8; end: 102936077;  */

undefined * FUN_102935fd8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112ecdf40;
    FUN_102935f60(0x112ecdf40,&PTR_PTR_1126aba10,0x112ecdf48,&UNK_10daf38b0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102936078; end: 1029362b7;  */

ulong FUN_102936078(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029361a0);
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
  FUN_102935fd8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10293619c);
      (*pcVar1)();
    }
    func_0x0001029361a0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1029362b8; end: 102936537;  */

ulong FUN_1029362b8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10293639c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029363a0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126aba10;
    func_0x000107c61168(PTR_PTR_1126aba10);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126aba10;
    func_0x000107c61168(PTR_PTR_1126aba10);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1029370b4(0,0x112ecdf40,&PTR_PTR_1126aba10);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10293647c);
  (*pcVar2)();
}



/* Entry: 102936538; end: 10293656b;  */

void FUN_102936538(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 10293656c; end: 102936587;  */

void FUN_10293656c(long param_1,long param_2)

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



/* Entry: 102936588; end: 1029365f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102936588(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ecdf00);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 1029365f8; end: 1029366ef;  */

void FUN_1029365f8(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = "dismiss()";
    func_0x0001000c10c0("dismiss()");
    func_0x000107c61180();
    puVar3 = &UNK_11056ebb0;
    func_0x000107c613fc(&UNK_11056ebb0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    uStack_58 = 0x102937708;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11056ef60;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029366f0; end: 1029367a7;  */

void FUN_1029366f0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_11056ef48;
    func_0x000107c613fc(&UNK_11056ef48,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x0001001ca524(0xcb,0,0x60,4,0,0,&UNK_10daf38e0,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029367a8; end: 102936d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029367a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    uVar3 = 0xf5;
    func_0x00010439b428(0xf5,0xf1);
    func_0x0001003604c8(0);
    func_0x000107c610f8();
    puVar4 = puVar2;
    func_0x000107c61174();
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61174(uVar3);
    lVar5 = lVar1;
    func_0x000107c61174();
    func_0x000103b67ad8(puVar2,param_1,param_2,param_3,param_4,1,0,uVar3,lVar1);
    uVar9 = *(undefined8 *)(lVar5 + _DAT_112ecdec8);
    pcVar6 = "presentPaywall(creatorId:creatorName:)";
    func_0x0001000c10c0("presentPaywall(creatorId:creatorName:)");
    func_0x000107c61180();
    puVar7 = &UNK_11056eef8;
    func_0x000107c613fc(&UNK_11056eef8,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar4;
    *(undefined8 *)(puVar7 + 0x18) = uVar9;
    *(undefined **)(puVar7 + 0x20) = puVar2;
    uStack_70 = 0x1029375b8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11056ef10;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_68;
    func_0x000107c61174(puVar4);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(puVar2);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(pcVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(pcVar6);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102936d3c; end: 102936f07;  */

undefined * FUN_102936d3c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61434(param_2);
      func_0x000107c45a48(puVar4);
      puVar3 = PTR_PTR_1126ae820;
      func_0x000107c610f8();
      func_0x000107c49470();
      func_0x000107c61170(puVar4);
      puVar4 = &UNK_11056ebb0;
      func_0x000107c613fc(&UNK_11056ebb0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar1);
      puVar2 = &UNK_11056ed90;
      func_0x000107c613fc(&UNK_11056ed90,0x30,7);
      *(undefined **)(puVar2 + 0x10) = puVar3;
      *(undefined **)(puVar2 + 0x18) = puVar4;
      *(undefined8 *)(puVar2 + 0x20) = param_1;
      *(long *)(puVar2 + 0x28) = param_2;
      func_0x000107c61174(puVar3);
      func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf38a0,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(puVar2);
      puVar4 = puVar3;
      func_0x000107c5cb24(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      goto LAB_102936ee4;
    }
    func_0x000107c61170();
  }
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4a8a4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c5cb24(puVar3);
  func_0x000107c61180();
LAB_102936ee4:
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 102936f08; end: 102936f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102936f08(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112ecdee8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112fb06a0);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar4);
    puVar2 = &UNK_11056ebb0;
    func_0x000107c613fc(&UNK_11056ebb0,0x18,7);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618(lVar1);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    func_0x000107c61170(lVar1);
    pcStack_70 = FUN_102936f74;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11056ed58;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102936f10; end: 102936f5b;  */

void FUN_102936f10(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1029376fc;
  plVar1[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029352dc,0,0);
  return;
}



/* Entry: 102936f5c; end: 102936f73;  */

long FUN_102936f5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102936f74; end: 102937013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102936f74(void)

{
  long lVar1;
  ulong *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = *(ulong **)(lVar1 + _DAT_112ecdee8);
    func_0x000107c61174();
    func_0x000107c61170();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x78))();
    func_0x000107c61170(puVar2);
    if (lVar1 != 0) {
      func_0x000107c41b24(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102937014; end: 102937077;  */

void FUN_102937014(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102937078;
  plVar5[0x18] = lVar3;
  plVar5[0x19] = lVar2;
  plVar5[0x16] = lVar4;
  plVar5[0x17] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x1a] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x1b] = lVar3;
  plVar5[0x1c] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102935000,lVar3,lVar4);
  return;
}



/* Entry: 102937078; end: 1029370b3;  */

void FUN_102937078(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001029370b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1029370b4; end: 1029370f3;  */

void FUN_1029370b4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029370f4; end: 1029371b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029370f4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ecded8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c4d80c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5c2e0(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1029371b4; end: 102937213;  */

void FUN_1029371b4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102937700;
  plVar3[0x1c] = lVar1;
  plVar3[0x1d] = lVar4;
  plVar3[0x1b] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x1e] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x1f] = lVar1;
  plVar3[0x20] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029358fc,lVar1,lVar2);
  return;
}



/* Entry: 102937214; end: 102937553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102937214(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_102933d30();
    lVar4 = lVar3;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    if (lVar4 == 0) {
      func_0x000107c61174();
      lVar4 = lVar2;
      func_0x000107c5de64();
      func_0x000107c61180();
      lVar3 = _DAT_112ecdea0;
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102937544);
        (*pcVar1)();
      }
      func_0x000107c3d89c();
      func_0x000107c61170(lVar4);
      lVar4 = 0x112d360b8;
      FUN_102935f60(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                    &UNK_10d9011a0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 9;
      *(undefined8 *)(lVar4 + 0x10) = 4;
      uVar5 = *(undefined8 *)(lVar2 + lVar3);
      func_0x000107c4acb0();
      func_0x000107c61180();
      lVar6 = lVar2;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102937548);
        (*pcVar1)();
      }
      lVar7 = lVar6;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      uVar8 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar5);
      *(undefined8 *)(lVar4 + 0x20) = uVar8;
      uVar5 = *(undefined8 *)(lVar2 + lVar3);
      func_0x000107c5ce8c();
      func_0x000107c61180();
      lVar6 = lVar2;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10293754c);
        (*pcVar1)();
      }
      lVar7 = lVar6;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      uVar8 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar5);
      *(undefined8 *)(lVar4 + 0x28) = uVar8;
      uVar5 = *(undefined8 *)(lVar2 + lVar3);
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar6 = lVar2;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102937550);
        (*pcVar1)();
      }
      lVar7 = lVar6;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      uVar8 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar5);
      *(undefined8 *)(lVar4 + 0x30) = uVar8;
      uVar5 = *(undefined8 *)(lVar2 + lVar3);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102937554);
        (*pcVar1)();
      }
      puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar6 = lVar3;
      func_0x000107c3ec1c(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      uVar8 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar5);
      *(undefined8 *)(lVar4 + 0x38) = uVar8;
      uVar5 = 0;
      FUN_1029370b4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = lVar4;
      func_0x000107c5fc48(lVar4,uVar5);
      func_0x000107c61574(lVar4);
      func_0x000107c3d048(puVar9);
      lVar4 = lVar2;
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102937554; end: 10293762b;  */

void FUN_102937554(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_102933d30();
    func_0x000107c61170(lVar1);
    func_0x000107c4ff34(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10293762c; end: 102937677;  */

void FUN_10293762c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102937704;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[4] = lVar1;
  plVar2[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293568c,lVar1,lVar3);
  return;
}



/* Entry: 102937678; end: 1029376ef;  */

void FUN_102937678(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1029376f0; end: 10293770b; -[_TtC43FanPassSubscriptionManagementImplementation43FanPassSubscriptionManagementViewController defaultProjectNameV3] */

void FUN_1029376f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fef8();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10293770c; end: 102937723; -[_TtC41FanPassSubscriptionManagementPageLauncher48FanPassSubscriptionManagementPageLauncherHandler payloadClass] */

void FUN_10293770c(void)

{
  func_0x000103927ed4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 102937724; end: 102937727; -[_TtC41FanPassSubscriptionManagementPageLauncher48FanPassSubscriptionManagementPageLauncherHandler setPayloadClass:] */

void FUN_102937724(void)

{
  return;
}



/* Entry: 102937728; end: 1029377cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102937728(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  lVar1 = _DAT_112ecdf50;
  func_0x000107c61614(unaff_x20 + _DAT_112ecdf50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ecdf58,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ecdf60) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1029377d0; end: 102937b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029377d0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar2 = (int)puVar3;
  func_0x000107c4a02c();
  if (iVar2 == 0) {
    pcVar6 = "launch(withPayload:completion:)";
    func_0x0001000c10c0("launch(withPayload:completion:)");
    func_0x000107c61180();
    puVar3 = &UNK_11056f020;
    func_0x000107c613fc(&UNK_11056f020,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    func_0x000100672b50(param_1,&puStack_80);
    puVar7 = &UNK_11056f048;
    func_0x000107c613fc(&UNK_11056f048,0x48,7);
    *(undefined8 *)(puVar7 + 0x20) = uStack_78;
    *(undefined **)(puVar7 + 0x18) = puStack_80;
    *(undefined **)(puVar7 + 0x10) = puVar3;
    *(undefined8 *)(puVar7 + 0x30) = uStack_68;
    *(undefined8 *)(puVar7 + 0x28) = uStack_70;
    *(code **)(puVar7 + 0x38) = param_2;
    *(undefined8 *)(puVar7 + 0x40) = param_3;
    pcStack_90 = FUN_102937bfc;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_11056f060;
    ppuVar8 = &puStack_b0;
    puStack_88 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar3 = puStack_88;
    func_0x000100f1d248(param_2,param_3);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(pcVar6);
    return;
  }
  func_0x000100672b50(param_1,&puStack_b0);
  if (puStack_98 == (undefined *)0x0) {
    func_0x00010006e7f4(&puStack_b0);
  }
  else {
    uVar4 = 0;
    func_0x000103927ed4(0);
    ppuVar8 = &puStack_80;
    func_0x000107c6147c(ppuVar8,&puStack_b0,PTR___sypN_11034f1a8 + 8,uVar4,6);
    puVar3 = puStack_80;
    lVar1 = _DAT_112ecdf58;
    if (((ulong)ppuVar8 & 1) != 0) {
      lVar5 = unaff_x20 + _DAT_112ecdf58;
      func_0x000107c61618();
      if (lVar5 == 0) {
        uVar9 = unaff_x20 + _DAT_112ecdf50;
        func_0x000107c61618();
        if (uVar9 == 0) goto joined_r0x000102937b50;
        uVar10 = uVar9;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        if (uVar10 == 0) goto joined_r0x000102937b50;
        uVar9 = uVar10;
        func_0x000107c61150(uVar10,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_topmostViewController_11267b0f0);
        if ((uVar9 & 1) == 0) {
          func_0x000107c615e8(uVar10);
          goto joined_r0x000102937b50;
        }
        uVar9 = uVar10;
        func_0x000107c5cc6c();
        func_0x000107c61180();
        func_0x000107c615e8(uVar10);
        puVar11 = PTR_PTR_1126aead8;
        func_0x000107c610f8();
        func_0x000107c4807c();
        uVar4 = *(undefined8 *)(puVar3 + _DAT_112fb0670);
        func_0x00010036604c(0);
        func_0x000107c610f8();
        func_0x000107c61174(uVar4);
        func_0x000107c61174();
        func_0x000107c61174();
        puVar12 = puVar11;
        func_0x000103928328(puVar11,uVar4);
        puStack_80 = puVar12;
        func_0x00010008a7c8(&puStack_b0,&puStack_80);
        func_0x000100083b20(&puStack_80);
        func_0x000107c61574(puStack_b0);
        puVar7 = puStack_80;
        func_0x000107c61604(unaff_x20 + lVar1,puStack_80);
        func_0x000107c61170(puVar7);
        if (param_2 == (code *)0x0) {
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar12);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(uVar9);
          return;
        }
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        puStack_98 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
        (*param_2)(0,&puStack_b0);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar3);
      }
      else {
        func_0x000107c61170();
joined_r0x000102937b50:
        if (param_2 == (code *)0x0) {
          func_0x000107c61170(puVar3);
          return;
        }
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        puStack_98 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
        (*param_2)(0,&puStack_b0);
        puVar12 = puVar3;
      }
      func_0x000107c61170(puVar12);
      goto LAB_1029379a4;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  uStack_a8 = 0;
  puStack_b0 = (undefined *)0x0;
  puStack_98 = (undefined *)0x0;
  puStack_a0 = (undefined *)0x0;
  (*param_2)(0,&puStack_b0);
LAB_1029379a4:
  func_0x00010006e7f4(&puStack_b0);
  return;
}



/* Entry: 102937b84; end: 102937bfb;  */

void FUN_102937b84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1029377d0(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102937bfc; end: 102937c27;  */

void FUN_102937bfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_1029377d0(unaff_x20 + 0x18,uVar1,uVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102937c28; end: 102937cf7; -[_TtC41FanPassSubscriptionManagementPageLauncher48FanPassSubscriptionManagementPageLauncherHandler launchWithPayload:completion:] */

void FUN_102937c28(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_11056f098;
    func_0x000107c613fc(&UNK_11056f098,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x102937dd4;
  }
  FUN_1029377d0(&uStack_50,uVar1,puVar2);
  func_0x000100f1d208(uVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 102937cf8; end: 102937d57; -[_TtC41FanPassSubscriptionManagementPageLauncher48FanPassSubscriptionManagementPageLauncherHandler init] */

void FUN_102937cf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionManagementPageLauncher.FanPassSubscriptionManagementPageLauncherHandler"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102937d24);
  (*pcVar1)();
}



/* Entry: 102937d58; end: 102937d9f; -[_TtC41FanPassSubscriptionManagementPageLauncher48FanPassSubscriptionManagementPageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102937d74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102937d78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102937d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ecdf50);
  return;
}



/* Entry: 102937da0; end: 102937dbf;  */

void FUN_102937da0(void)

{
  func_0x000107c61168(&PTR_PTR_1128717f8);
  return;
}



/* Entry: 102937dc0; end: 102937ddb; -[_TtC41FanPassSubscriptionManagementPageLauncher48FanPassSubscriptionManagementPageLauncherHandler didDismissFanPassSubscriptionManagementScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102937dc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ecdf58,0);
  return;
}


