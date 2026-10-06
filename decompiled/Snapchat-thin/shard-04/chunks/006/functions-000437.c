/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103740f0c; end: 103740f6b; -[_TtC27MemoriesDebugBannerServices27MemoriesDebugBannerServices init] */

void FUN_103740f0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDebugBannerServices.MemoriesDebugBannerServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103740f38);
  (*pcVar1)();
}



/* Entry: 103740f6c; end: 10374103b; -[_TtC27MemoriesDebugBannerServices27MemoriesDebugBannerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103740f6c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f8f4d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8f4e0));
  return;
}



/* Entry: 10374103c; end: 10374109b; -[_TtC53MemoriesOpportunisticRetranscodeOrchestrationServices53MemoriesOpportunisticRetranscodeOrchestrationServices init] */

void FUN_10374103c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesOpportunisticRetranscodeOrchestrationServices.MemoriesOpportunisticRetranscodeOrchestrationServices"
                      ,0x6b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103741068);
  (*pcVar1)();
}



/* Entry: 10374109c; end: 1037410ab; -[_TtC53MemoriesOpportunisticRetranscodeOrchestrationServices53MemoriesOpportunisticRetranscodeOrchestrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374109c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8f510));
  return;
}



/* Entry: 1037410ac; end: 103741143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037410ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8f540) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103741144; end: 1037411a3; -[_TtC41MemoriesOpportunisticRetranscoderServices41MemoriesOpportunisticRetranscoderServices init] */

void FUN_103741144(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesOpportunisticRetranscoderServices.MemoriesOpportunisticRetranscoderServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103741170);
  (*pcVar1)();
}



/* Entry: 1037411a4; end: 10374123f; -[_TtC41MemoriesOpportunisticRetranscoderServices41MemoriesOpportunisticRetranscoderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037411a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8f540));
  return;
}



/* Entry: 103741240; end: 10374141b;  */

/* WARNING: Possible PIC construction at 0x0001037413f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037413fc) */

void FUN_103741240(ulong param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x2b33;
  if (param_2 == 1) {
    uVar8 = 0x31;
  }
  uVar7 = 0xe200000000000000;
  if (param_2 == 1) {
    uVar7 = 0xe100000000000000;
  }
  uVar1 = 0x32;
  if (param_2 != 2) {
    uVar1 = uVar8;
  }
  uVar8 = 0xe100000000000000;
  if (param_2 != 2) {
    uVar8 = uVar7;
  }
  uVar7 = 0x30;
  if (param_2 != 0) {
    uVar7 = uVar1;
  }
  uVar1 = 0xe100000000000000;
  if (param_2 != 0) {
    uVar1 = uVar8;
  }
  func_0x000107c5fadc(uVar7,uVar1);
  func_0x000107c6142c(uVar1);
  bVar6 = (param_1 & 1) == 0;
  uVar8 = 0x65757274;
  if (bVar6) {
    uVar8 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar6) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar8,uVar1);
  func_0x000107c6142c(uVar1);
  uVar8 = 0x800000010f162a90;
  uVar1 = 0xd000000000000010;
  if (param_3 != 4) {
    uVar8 = 0xeb00000000726f72;
    uVar1 = 0x72655f746e756f63;
  }
  uVar3 = 0x800000010f162ab0;
  uVar4 = 0xd000000000000010;
  if (param_3 != 3) {
    uVar3 = uVar8;
    uVar4 = uVar1;
  }
  uVar8 = 0x69737365735f6f6e;
  uVar1 = 0xea00000000006e6f;
  if (param_3 != 1) {
    uVar8 = 0xd000000000000010;
    uVar1 = 0x800000010f162ad0;
  }
  uVar2 = 0xeb0000000066666f;
  uVar5 = 0x5f65727574616566;
  if (param_3 != 0) {
    uVar2 = uVar1;
    uVar5 = uVar8;
  }
  if (param_3 < 3) {
    uVar3 = uVar2;
    uVar4 = uVar5;
  }
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000106c33998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10374141c; end: 10374146f;  */

undefined8 FUN_10374141c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103741470(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 103741470; end: 1037415c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741470(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0x168;
  uVar1 = param_3;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if ((uVar2 == 0) ||
     ((uVar3 = uVar2, func_0x000107c4a338(), (uVar3 & 1) == 0 &&
      (uVar3 = uVar2, func_0x000107c4a330(), (int)uVar3 == 0)))) {
    lVar4 = *(long *)(param_2 + _DAT_11307e6a8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      uVar5 = 0xd00000000000001b;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010dc07730);
      func_0x000107c3f4ac(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar5);
    }
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(param_2);
  }
  else {
    uVar3 = uVar2;
    func_0x000107c504e0(uVar2);
    FUN_1037415e0(param_2,uVar3 != 0);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar2);
    uVar1 = param_3;
    param_3 = param_2;
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1037415c4; end: 1037415df;  */

void FUN_1037415c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037415e0; end: 1037417eb;  */

/* WARNING: Possible PIC construction at 0x0001037416e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103741738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037417b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037417c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037417b4) */
/* WARNING: Removing unreachable block (ram,0x00010374173c) */
/* WARNING: Removing unreachable block (ram,0x00010374178c) */
/* WARNING: Removing unreachable block (ram,0x0001037417ac) */
/* WARNING: Removing unreachable block (ram,0x0001037416e4) */
/* WARNING: Removing unreachable block (ram,0x0001037417c4) */

void FUN_1037415e0(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  func_0x000107c57d34();
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  func_0x000107c57c1c();
  puVar4 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56a40();
  func_0x000107c5277c(puVar4);
  lVar2 = 0x112e28318;
  func_0x0001000285a8(0x112e28318,&UNK_10da17640);
  func_0x000107c61538();
  if (*(long *)(lVar2 + 0x10) == 0) {
    func_0x000107c6142c(lVar2);
    puVar3 = PTR_PTR_1126b7228;
    func_0x000107c610f8(PTR_PTR_1126b7228);
    func_0x000107c453e4();
    puVar4 = (undefined *)0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010dc07730);
    func_0x000107c5597c(puVar3);
  }
  else {
    if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037417e8);
      (*pcVar1)();
    }
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037417ec);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1037417ec; end: 10374180b;  */

void FUN_1037417ec(void)

{
  func_0x000107c61168(&PTR_PTR_112f8f5b0);
  return;
}



/* Entry: 10374180c; end: 10374188b;  */

void FUN_10374180c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068cdb8;
  func_0x000107c613fc(&UNK_11068cdb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1037419ac,puVar1);
  return;
}



/* Entry: 10374188c; end: 1037419ab;  */

void FUN_10374188c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11068ce00;
  func_0x000107c613fc(&UNK_11068ce00,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_50 = FUN_103741ad8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068ce18;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd00000000000001b,0x800000010dc077a0);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1037419ac; end: 1037419c3;  */

void FUN_1037419ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11068ce00;
  func_0x000107c613fc(&UNK_11068ce00,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_50 = FUN_103741ad8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068ce18;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,0xd00000000000001b,0x800000010dc077a0);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 1037419c4; end: 103741aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037419c4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c4d48c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  lVar4 = 0;
  FUN_103741f84();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = _DAT_112f8f678;
  puVar6 = PTR_PTR_1126ad638;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar1) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112f8f680) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f8f688) = uVar3;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103741aac; end: 103741ad7;  */

void FUN_103741aac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103741ad8; end: 103741afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741ad8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_48;
  func_0x000107c4d48c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  lVar4 = 0;
  FUN_103741f84();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = _DAT_112f8f678;
  puVar6 = PTR_PTR_1126ad638;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar1) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112f8f680) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f8f688) = uVar3;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103741afc; end: 103741b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741afc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f8f678;
  puVar2 = PTR_PTR_1126ad638;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f8f680) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8f688) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103741b88; end: 103741bb3; +[SCResendMessagesBackgroundJobProcessor jobTypeIdentifier] */

void FUN_103741b88(void)

{
  func_0x000107c5fadc(0xd00000000000001b,0x800000010dc077f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103741bb4; end: 103741d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741bb4(long param_1,long param_2,code *param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,ulong param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    (*param_3)(2,0);
    return;
  }
  if (param_1 < 1) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112f8f678);
    func_0x000107c61174(uVar3);
    uVar2 = 2;
  }
  else {
    if (((param_7 & 1) == 0) ||
       ((param_8 != 0 && (lVar1 = param_8, func_0x000107c4a334(), (int)lVar1 != 0)))) {
      uVar3 = *(undefined8 *)(param_2 + _DAT_112f8f678);
      func_0x000107c61174(uVar3);
      FUN_103741240(param_5 & 1,param_6,3);
      func_0x000107c61170(uVar3);
      FUN_103742450(param_8,param_3,param_4);
      goto LAB_103741d14;
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_112f8f678);
    func_0x000107c61174(uVar3);
    uVar2 = 4;
  }
  FUN_103741240(param_5 & 1,param_6,uVar2);
  func_0x000107c61170(uVar3);
  (*param_3)(0,0);
LAB_103741d14:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103741d34; end: 103741d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741d34(long param_1)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  bVar3 = *(byte *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    (*pcVar1)(2,0);
    return;
  }
  if (param_1 < 1) {
    uVar6 = *(undefined8 *)(lVar4 + _DAT_112f8f678);
    func_0x000107c61174(uVar6);
    uVar9 = 2;
  }
  else {
    if (((bVar3 & 1) == 0) ||
       ((lVar8 != 0 && (lVar5 = lVar8, func_0x000107c4a334(), (int)lVar5 != 0)))) {
      uVar9 = *(undefined8 *)(lVar4 + _DAT_112f8f678);
      func_0x000107c61174(uVar9);
      FUN_103741240(bVar2 & 1,uVar7,3);
      func_0x000107c61170(uVar9);
      FUN_103742450(lVar8,pcVar1,uVar6);
      goto LAB_103741d14;
    }
    uVar6 = *(undefined8 *)(lVar4 + _DAT_112f8f678);
    func_0x000107c61174(uVar6);
    uVar9 = 4;
  }
  FUN_103741240(bVar2 & 1,uVar7,uVar9);
  func_0x000107c61170(uVar6);
  (*pcVar1)(0,0);
LAB_103741d14:
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 103741d38; end: 103741deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741d38(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f8f678);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    FUN_103741240(param_3 & 1,param_4,5);
    func_0x000107c61170(uVar1);
  }
  (*param_5)(2,0);
  return;
}



/* Entry: 103741dec; end: 103741def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741dec(void)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0,pcVar2,*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112f8f678);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lVar4);
    FUN_103741240(bVar3 & 1,uVar1,5);
    func_0x000107c61170(uVar5);
  }
  (*pcVar2)(2,0);
  return;
}



/* Entry: 103741df0; end: 103741e0f;  */

void FUN_103741df0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e88e8);
  return;
}



/* Entry: 103741e10; end: 103741f0b; -[SCResendMessagesBackgroundJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_103741e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4(param_6);
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_6);
  uVar2 = param_5;
  FUN_1037420d4(param_5,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103741f0c; end: 103741f37; -[SCResendMessagesBackgroundJobProcessor init] */

void FUN_103741f0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ResendMessagesBackgroundJob.ResendMessagesBackgroundJobProcessor",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103741f38);
  (*pcVar1)();
}



/* Entry: 103741f38; end: 103741f3b;  */

void FUN_103741f38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103741f3c; end: 103741f83; -[SCResendMessagesBackgroundJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103741f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103741f5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8f680));
  return;
}



/* Entry: 103741f84; end: 103741fa3;  */

void FUN_103741f84(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8818);
  return;
}



/* Entry: 103741fa4; end: 103741feb; -[_TtC27ResendMessagesBackgroundJobP33_BAD21A1F78F317DA89B480E15B6BF06130ResendPendingSendCountCallback onComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f8f690);
  func_0x000107c61174();
  (*pcVar1)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103741fec; end: 103742033; -[_TtC27ResendMessagesBackgroundJobP33_BAD21A1F78F317DA89B480E15B6BF06130ResendPendingSendCountCallback onError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103741fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f8f698);
  func_0x000107c61174();
  (*pcVar1)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103742034; end: 103742093; -[_TtC27ResendMessagesBackgroundJobP33_BAD21A1F78F317DA89B480E15B6BF06130ResendPendingSendCountCallback init] */

void FUN_103742034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ResendMessagesBackgroundJob.ResendPendingSendCountCallback",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103742060);
  (*pcVar1)();
}



/* Entry: 103742094; end: 1037420d3; -[_TtC27ResendMessagesBackgroundJobP33_BAD21A1F78F317DA89B480E15B6BF06130ResendPendingSendCountCallback .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037420b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037420b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103742094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8f690 + 8));
  return;
}



/* Entry: 1037420d4; end: 1037423b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037420d4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_70;
  long lStack_68;
  
  plVar12 = &lStack_70;
  puVar2 = &UNK_11068ce78;
  func_0x000107c613fc(&UNK_11068ce78,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  uVar13 = *(ulong *)(param_2 + _DAT_112f8f680);
  func_0x000107c60bc4(param_3);
  uVar3 = uVar13;
  func_0x000107c49bc8();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11307e728);
  uVar4 = *(ulong *)(param_2 + _DAT_112f8f688);
  func_0x000107c5c734();
  func_0x000107c61180();
  if ((uVar4 == 0) ||
     ((uVar5 = uVar4, func_0x000107c4a338(), (uVar5 & 1) == 0 &&
      (uVar6 = uVar4, func_0x000107c4a330(), (int)uVar6 == 0)))) {
    FUN_103741240(uVar3,uVar14,0);
    (**(code **)(param_3 + 0x10))(param_3,2,0);
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar13 != 0) {
      uVar6 = uVar13;
      func_0x000107c44178();
      func_0x000107c61180();
      if (uVar6 != 0) {
        puVar7 = &UNK_11068ce50;
        func_0x000107c613fc(&UNK_11068ce50,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,param_2);
        puVar8 = &UNK_11068cea0;
        func_0x000107c613fc(&UNK_11068cea0,0x48,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(code **)(puVar8 + 0x18) = FUN_1037423b8;
        *(undefined **)(puVar8 + 0x20) = puVar2;
        puVar8[0x28] = (char)uVar3;
        *(undefined8 *)(puVar8 + 0x30) = uVar14;
        puVar8[0x38] = (char)uVar5;
        *(ulong *)(puVar8 + 0x40) = uVar4;
        puVar7 = &UNK_11068ce50;
        func_0x000107c613fc(&UNK_11068ce50,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,param_2);
        puVar9 = &UNK_11068cec8;
        func_0x000107c613fc(&UNK_11068cec8,0x38,7);
        *(undefined **)(puVar9 + 0x10) = puVar7;
        puVar9[0x18] = (char)uVar3;
        *(undefined8 *)(puVar9 + 0x20) = uVar14;
        *(code **)(puVar9 + 0x28) = FUN_1037423b8;
        *(undefined **)(puVar9 + 0x30) = puVar2;
        lVar10 = 0;
        FUN_103741df0();
        lVar11 = lVar10;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar11 + _DAT_112f8f690);
        *puVar1 = 0x103742818;
        puVar1[1] = puVar8;
        puVar1 = (undefined8 *)(lVar11 + _DAT_112f8f698);
        *puVar1 = 0x10374281c;
        puVar1[1] = puVar9;
        puVar7 = PTR_s_init_1125d9248;
        lStack_70 = lVar11;
        lStack_68 = lVar10;
        func_0x000107c61580(puVar2,2);
        func_0x000107c615f0(uVar4);
        func_0x000107c61154(&lStack_70,puVar7);
        func_0x000107c441c4(uVar6);
        func_0x000107c61574(puVar2);
        func_0x000107c615e8(uVar4);
        func_0x000107c615e8(uVar13);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(plVar12);
        return 0;
      }
    }
    FUN_103741240(uVar3,uVar14,1);
    (**(code **)(param_3 + 0x10))(param_3,2,0);
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(uVar4);
    uVar4 = uVar13;
  }
  func_0x000107c615e8(uVar4);
  return 0;
}



/* Entry: 1037423b8; end: 1037423bf;  */

void FUN_1037423b8(undefined8 param_1,long param_2)

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



/* Entry: 1037423c0; end: 1037423f3;  */

void FUN_1037423c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037423f4; end: 10374240f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037423f4(long param_1)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  bVar3 = *(byte *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    (*pcVar1)(2,0);
    return;
  }
  if (param_1 < 1) {
    uVar6 = *(undefined8 *)(lVar4 + _DAT_112f8f678);
    func_0x000107c61174(uVar6);
    uVar9 = 2;
  }
  else {
    if (((bVar3 & 1) == 0) ||
       ((lVar8 != 0 && (lVar5 = lVar8, func_0x000107c4a334(), (int)lVar5 != 0)))) {
      uVar9 = *(undefined8 *)(lVar4 + _DAT_112f8f678);
      func_0x000107c61174(uVar9);
      FUN_103741240(bVar2 & 1,uVar7,3);
      func_0x000107c61170(uVar9);
      FUN_103742450(lVar8,pcVar1,uVar6);
      goto LAB_103741d14;
    }
    uVar6 = *(undefined8 *)(lVar4 + _DAT_112f8f678);
    func_0x000107c61174(uVar6);
    uVar9 = 4;
  }
  FUN_103741240(bVar2 & 1,uVar7,uVar9);
  func_0x000107c61170(uVar6);
  (*pcVar1)(0,0);
LAB_103741d14:
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 103742410; end: 10374243b;  */

void FUN_103742410(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10374243c; end: 10374244f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374243c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0,pcVar2,*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112f8f678);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lVar4);
    FUN_103741240(bVar3 & 1,uVar1,5);
    func_0x000107c61170(uVar5);
  }
  (*pcVar2)(2,0);
  return;
}



/* Entry: 103742450; end: 1037427d3;  */

void FUN_103742450(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_f0 [4];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  pcStack_a8 = param_2;
  uStack_a0 = param_3;
  func_0x000107c5f7fc();
  lStack_b8 = *(long *)(lVar1 + -8);
  lStack_b0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar8 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_c0 = lVar8;
  func_0x000107c5f824();
  lStack_d0 = *(long *)(lVar1 + -8);
  lStack_c8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  alStack_f0[3] = lVar8;
  func_0x000107c5f7f0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  plVar12 = (long *)(lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar8 = 0;
  func_0x000107c5f83c();
  lVar13 = *(long *)(lVar8 + -8);
  alStack_f0[2] = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar15 = (long)plVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = 0;
  alStack_f0[1] = lVar15 - extraout_x12;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar9 = (lVar15 - extraout_x12) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  if ((param_1 == 0) || (func_0x000107c504dc(), param_1 < 1)) {
    (*pcStack_a8)(0,0);
  }
  else {
    func_0x0001000295c4(0);
    (**(code **)(lVar14 + 0x68))
              (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar8);
    lVar2 = lVar9;
    func_0x000107c5fff0();
    alStack_f0[0] = lVar2;
    (**(code **)(lVar14 + 8))(lVar9,lVar8);
    func_0x000107c5f830(lVar15);
    *plVar12 = param_1;
    (**(code **)(lVar10 + 0x68))
              (plVar12,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_11034f778,lVar1)
    ;
    lVar8 = alStack_f0[1];
    func_0x000107c5f858(alStack_f0[1],lVar15,plVar12);
    (**(code **)(lVar10 + 8))(plVar12,lVar1);
    lVar9 = alStack_f0[2];
    pcVar11 = *(code **)(lVar13 + 8);
    (*pcVar11)(lVar15,alStack_f0[2]);
    puVar3 = &UNK_11068cef0;
    func_0x000107c613fc(&UNK_11068cef0,0x20,7);
    uVar5 = uStack_a0;
    *(code **)(puVar3 + 0x10) = pcStack_a8;
    *(undefined8 *)(puVar3 + 0x18) = uStack_a0;
    pcStack_70 = FUN_1037427d4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11068cf08;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c6157c(uVar5);
    lVar10 = alStack_f0[3];
    func_0x000107c5f808(alStack_f0[3]);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar6 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar7 = uVar6;
    func_0x0001001c7f30();
    lVar14 = lStack_b0;
    lVar13 = lStack_c0;
    func_0x000107c60264(lStack_c0,&puStack_98,uVar6,uVar7,lStack_b0,uVar5);
    lVar1 = alStack_f0[0];
    func_0x000107c5ffc8(lVar8,lVar10,lVar13,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    (**(code **)(lStack_b8 + 8))(lVar13,lVar14);
    (**(code **)(lStack_d0 + 8))(lVar10,lStack_c8);
    (*pcVar11)(lVar8,lVar9);
    func_0x000107c61574(puStack_68);
  }
  return;
}



/* Entry: 1037427d4; end: 1037427fb;  */

void FUN_1037427d4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 1037427fc; end: 103742823;  */

void FUN_1037427fc(long param_1,long param_2)

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



/* Entry: 103742824; end: 1037428c7;  */

undefined8 FUN_103742824(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000103742a90(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1037428c8; end: 1037428eb;  */

void FUN_1037428c8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037428ec; end: 1037428f7;  */

void FUN_1037428ec(void)

{
  return;
}



/* Entry: 1037428f8; end: 103742c17;  */

/* WARNING: Possible PIC construction at 0x000103742968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037429d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103742a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103742a6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103742a60) */
/* WARNING: Removing unreachable block (ram,0x0001037429dc) */
/* WARNING: Removing unreachable block (ram,0x000103742a2c) */
/* WARNING: Removing unreachable block (ram,0x000103742a4c) */
/* WARNING: Removing unreachable block (ram,0x00010374296c) */
/* WARNING: Removing unreachable block (ram,0x000103742a70) */

void FUN_1037428f8(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  func_0x000107c57d34();
  puVar2 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c3d93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103742a90);
  (*pcVar1)();
}



/* Entry: 103742c18; end: 103742c37;  */

void FUN_103742c18(void)

{
  func_0x000107c61168(&PTR_PTR_112f8f730);
  return;
}



/* Entry: 103742c38; end: 103742c83;  */

void FUN_103742c38(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103742db4,param_1);
  return;
}



/* Entry: 103742c84; end: 103742db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103742c84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000100083b20(&puStack_70);
  uVar5 = *(undefined8 *)(puStack_70 + _DAT_112f8f828);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(puStack_70);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_103742e54;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068cff0;
  uStack_48 = uVar5;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar4 = puVar2;
  func_0x000100a0dc54(puVar2,0xd000000000000025,0x800000010f162be0);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(uVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 103742db4; end: 103742dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103742db4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000100083b20(&puStack_70);
  uVar5 = *(undefined8 *)(puStack_70 + _DAT_112f8f828);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(puStack_70);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_103742e54;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068cff0;
  uStack_48 = uVar5;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar4 = puVar2;
  func_0x000100a0dc54(puVar2,0xd000000000000025,0x800000010f162be0);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(uVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 103742dcc; end: 103742e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103742dcc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126ad640;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_103743114();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8f7e0) = param_1;
  *(undefined **)(lVar3 + _DAT_112f8f7e8) = puVar1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103742e54; end: 103742e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103742e54(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126ad640;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_103743114();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8f7e0) = unaff_x20;
  *(undefined **)(lVar3 + _DAT_112f8f7e8) = puVar1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103742e78; end: 103742f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103742e78(undefined8 param_1,char param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  if (param_2 == '\x01') {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      uVar1 = *(undefined8 *)(param_3 + _DAT_112f8f7e8);
      func_0x000107c61174(uVar1);
      func_0x000107c61170(param_3);
      func_0x000107c4bc48(uVar1);
      func_0x000107c61170(uVar1);
    }
    uVar1 = 2;
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      uVar1 = *(undefined8 *)(param_3 + _DAT_112f8f7e8);
      func_0x000107c61174(uVar1);
      func_0x000107c61170(param_3);
      func_0x000107c4bc48(uVar1);
      func_0x000107c61170(uVar1);
    }
    uVar1 = 0;
    param_1 = 0;
  }
  (*param_4)(uVar1,param_1);
  return;
}



/* Entry: 103742f88; end: 10374307f; -[_TtC31DeviceTriggeredNotificationsJob40DeviceTriggeredNotificationsJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_103742f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4(param_6);
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_6);
  uVar2 = param_1;
  FUN_103743134(param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103743080; end: 1037430db; -[_TtC31DeviceTriggeredNotificationsJob40DeviceTriggeredNotificationsJobProcessor init] */

void FUN_103743080(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeviceTriggeredNotificationsJob.DeviceTriggeredNotificationsJobProcessor",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037430ac);
  (*pcVar1)();
}



/* Entry: 1037430dc; end: 103743113; -[_TtC31DeviceTriggeredNotificationsJob40DeviceTriggeredNotificationsJobProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037430dc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f8f7e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8f7e8));
  return;
}



/* Entry: 103743114; end: 103743133;  */

void FUN_103743114(void)

{
  func_0x000107c61168(&PTR_PTR_1128e89b0);
  return;
}



/* Entry: 103743134; end: 103743407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103743134(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_f0 [80];
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  puVar6 = auStack_f0;
  puVar1 = &UNK_11068d028;
  func_0x000107c613fc(&UNK_11068d028,0x18,7);
  *(long *)(puVar1 + 0x10) = param_2;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112f8f7e8);
  func_0x000107c60bc4(param_2);
  func_0x000107c4bc50(uVar7);
  func_0x0001000d224c(auStack_a0);
  if (lStack_88 == 0) {
    FUN_103743410(auStack_a0,0x112f8f818,&UNK_10dc07960);
    func_0x000107c4bc48(uVar7);
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar7;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar2 + 0x28) = puVar6;
    *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000028;
    *(undefined8 *)(lVar2 + 0x38) = 0x800000010f162c90;
    lVar3 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    FUN_103743410((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar7 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f162c60);
    lVar2 = lVar3;
    func_0x000107c5f9dc(lVar3,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar3);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar2);
    puVar5 = puVar4;
    func_0x000107c5ed2c(puVar4);
    (**(code **)(param_2 + 0x10))(param_2,2,puVar5);
    func_0x000107c61574(puVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
  }
  else {
    FUN_103743450(auStack_a0,auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    puVar5 = &UNK_11068d050;
    func_0x000107c613fc(&UNK_11068d050,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_1);
    puVar4 = &UNK_11068d078;
    func_0x000107c613fc(&UNK_11068d078,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar5;
    *(code **)(puVar4 + 0x18) = FUN_103743408;
    *(undefined **)(puVar4 + 0x20) = puVar1;
    pcVar8 = *(code **)(lStack_58 + 8);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(puVar1);
    (*pcVar8)(0x103743468,puVar4,uStack_60,lStack_58);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar4);
    func_0x0001000834e4(auStack_78);
    func_0x000107c61574(puVar1);
  }
  return 0;
}



/* Entry: 103743408; end: 10374340f;  */

void FUN_103743408(undefined8 param_1,long param_2)

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



/* Entry: 103743410; end: 10374344f;  */

undefined8 FUN_103743410(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103743450; end: 103743487;  */

undefined8 * FUN_103743450(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103743488; end: 103743533;  */

void FUN_103743488(void)

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



/* Entry: 103743534; end: 103743537;  */

void FUN_103743534(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8f820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc07970;
  func_0x000107c61520(&UNK_10dc07970,&UNK_11068d148);
  puRam0000000112f8f820 = puVar1;
  return;
}



/* Entry: 103743538; end: 103743577;  */

void FUN_103743538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8f820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc07970;
  func_0x000107c61520(&UNK_10dc07970,&UNK_11068d148);
  puRam0000000112f8f820 = puVar1;
  return;
}



/* Entry: 103743578; end: 1037436db;  */

int FUN_103743578(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1037435f4;
        goto LAB_1037435d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1037435d8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1037435f4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1037436dc; end: 103743773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037436dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8f828) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103743774; end: 1037437d3; -[_TtC28SCNotificationSignalServices28SCNotificationSignalServices init] */

void FUN_103743774(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNotificationSignalServices.SCNotificationSignalServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037437a0);
  (*pcVar1)();
}



/* Entry: 1037437d4; end: 1037437e3; -[_TtC28SCNotificationSignalServices28SCNotificationSignalServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037437d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8f828));
  return;
}



/* Entry: 1037437e4; end: 10374387f;  */

undefined8 FUN_1037437e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10374389c(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 103743880; end: 10374389b;  */

void FUN_103743880(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10374389c; end: 103743a1b;  */

/* WARNING: Possible PIC construction at 0x0001037438e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037439a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037439ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037439fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037439f0) */
/* WARNING: Removing unreachable block (ram,0x0001037439a8) */
/* WARNING: Removing unreachable block (ram,0x0001037439c8) */
/* WARNING: Removing unreachable block (ram,0x0001037439e8) */
/* WARNING: Removing unreachable block (ram,0x0001037438ec) */
/* WARNING: Removing unreachable block (ram,0x000103743a00) */

void FUN_10374389c(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c3d93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103743a1c);
  (*pcVar1)();
}



/* Entry: 103743a1c; end: 103743a3b;  */

void FUN_103743a1c(void)

{
  func_0x000107c61168(&PTR_PTR_112f8f898);
  return;
}



/* Entry: 103743a3c; end: 103743abb;  */

void FUN_103743a3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068d240;
  func_0x000107c613fc(&UNK_11068d240,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103743bdc,puVar1);
  return;
}



/* Entry: 103743abc; end: 103743bdb;  */

void FUN_103743abc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11068d288;
  func_0x000107c613fc(&UNK_11068d288,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_50 = FUN_103743d18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068d2a0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd000000000000015,0x800000010dc07a90);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 103743bdc; end: 103743bf3;  */

void FUN_103743bdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11068d288;
  func_0x000107c613fc(&UNK_11068d288,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_50 = FUN_103743d18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068d2a0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,0xd000000000000015,0x800000010dc07a90);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 103743bf4; end: 103743ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103743bf4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c3dda8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c4d7f4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  lVar4 = 0;
  FUN_103744144();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = _DAT_112f8f908;
  puVar6 = PTR_PTR_1126ad648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar1) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112f8f8f0) = 0x5a0;
  *(undefined8 *)(lVar5 + _DAT_112f8f8f8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f8f900) = uVar3;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103743cec; end: 103743d17;  */

void FUN_103743cec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103743d18; end: 103743d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103743d18(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_48;
  func_0x000107c3dda8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c4d7f4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  lVar4 = 0;
  FUN_103744144();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = _DAT_112f8f908;
  puVar6 = PTR_PTR_1126ad648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar1) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112f8f8f0) = 0x5a0;
  *(undefined8 *)(lVar5 + _DAT_112f8f8f8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f8f900) = uVar3;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103743d3c; end: 103743db3;  */

void FUN_103743d3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_103743db4(param_1,param_4,param_5);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 103743db4; end: 103743f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103743db4(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  if ((param_1 != 0) && (func_0x000107c3e488(), param_1 == 1)) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f8f8f8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c4981c();
      func_0x000107c615e8(lVar2);
      if (lVar3 != 0) {
        dVar8 = (double)lVar3;
        func_0x000107c5ee88(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c5ee84();
        if (dVar8 / 60.0 < 0.0) {
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f8f908);
          puVar4 = PTR___sSiN_11034deb0;
          if (dVar8 / 60.0 <= -1440.0) {
            uStack_58 = 0x5a0;
            puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            func_0x000107c6057c(PTR___sSiN_11034deb0,
                                PTR___sSis23CustomStringConvertiblesWP_11034df00);
            func_0x000107c5fadc();
            func_0x000107c6142c(puVar5);
            func_0x000107b1ef78(uVar6,puVar4,1);
          }
          else {
            uStack_58 = 0x5a0;
            puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            func_0x000107c6057c(PTR___sSiN_11034deb0,
                                PTR___sSis23CustomStringConvertiblesWP_11034df00);
            func_0x000107c5fadc();
            func_0x000107c6142c(puVar5);
            func_0x000107b1ed8c(uVar6,puVar4,1);
          }
          func_0x000107c61170(puVar4);
        }
        (**(code **)(lVar7 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
        goto LAB_103743f68;
      }
    }
    func_0x000107b1ef00(*(undefined8 *)(unaff_x20 + _DAT_112f8f908),1);
  }
LAB_103743f68:
  (*param_2)(0,0);
  return;
}



/* Entry: 103743f94; end: 10374409b; -[_TtC21NSEInactivityCheckJob30NSEInactivityCheckJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_103743f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_11068d2d8;
  func_0x000107c613fc(&UNK_11068d2d8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  pcVar3 = FUN_103744164;
  FUN_10374416c(FUN_103744164,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 10374409c; end: 1037440fb; -[_TtC21NSEInactivityCheckJob30NSEInactivityCheckJobProcessor init] */

void FUN_10374409c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NSEInactivityCheckJob.NSEInactivityCheckJobProcessor",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037440c8);
  (*pcVar1)();
}



/* Entry: 1037440fc; end: 103744143; -[_TtC21NSEInactivityCheckJob30NSEInactivityCheckJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103744118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010374411c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037440fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8f8f8));
  return;
}



/* Entry: 103744144; end: 103744163;  */

void FUN_103744144(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8b40);
  return;
}



/* Entry: 103744164; end: 10374416b;  */

void FUN_103744164(undefined8 param_1,long param_2)

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



/* Entry: 10374416c; end: 10374427f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10374416c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f8f900);
  func_0x000107c507d0(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11068d300;
  func_0x000107c613fc(&UNK_11068d300,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11068d328;
  func_0x000107c613fc(&UNK_11068d328,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_103744280;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1014b8460;
  puStack_58 = &UNK_11068d340;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 103744280; end: 1037442a7;  */

void FUN_103744280(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_103743db4(param_1,uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1037442a8; end: 1037442fb;  */

undefined8 FUN_1037442a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1037442fc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1037442fc; end: 10374440f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037442fc(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000017;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010dc07b00;
  lVar2 = *(long *)(param_2 + _DAT_11307e6a8);
  *(long *)(unaff_x20 + 0x20) = lVar2;
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c3f4ac(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
  }
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    FUN_103744448();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 103744410; end: 10374443b;  */

void FUN_103744410(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10374443c; end: 103744447;  */

void FUN_10374443c(void)

{
  return;
}



/* Entry: 103744448; end: 1037445c3;  */

/* WARNING: Possible PIC construction at 0x0001037444c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103744528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103744594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037445a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103744598) */
/* WARNING: Removing unreachable block (ram,0x00010374452c) */
/* WARNING: Removing unreachable block (ram,0x000103744570) */
/* WARNING: Removing unreachable block (ram,0x000103744590) */
/* WARNING: Removing unreachable block (ram,0x0001037444cc) */
/* WARNING: Removing unreachable block (ram,0x0001037445a8) */

void FUN_103744448(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  func_0x000107c57d34();
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  func_0x000107c57c1c();
  puVar2 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c3d93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037445c4);
  (*pcVar1)();
}



/* Entry: 1037445c4; end: 1037445e3;  */

void FUN_1037445c4(void)

{
  func_0x000107c61168(&PTR_PTR_112f8f978);
  return;
}



/* Entry: 1037445e4; end: 1037446df;  */

void FUN_1037445e4(ulong *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [31];
  undefined1 uStack_81;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar4 = *param_1;
  uVar2 = param_1[1];
  func_0x00010006c804();
  if ((char)uVar2 != '\x01') {
    func_0x000107c61428(param_3 + 0x10,auStack_a0,0,0);
    if (((*(byte *)(param_3 + 0x10) & 1) == 0) && ((uVar4 & 1) != 0)) {
      func_0x000107c61428(param_3 + 0x10,auStack_b8,1,0);
      *(undefined1 *)(param_3 + 0x10) = 1;
    }
  }
  func_0x000107c61428(param_4 + 0x10,auStack_68,1,0);
  lVar1 = *(long *)(param_4 + 0x10) + -1;
  if (!SBORROW8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = lVar1;
    if (lVar1 < 1) {
      func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
      uStack_81 = *(undefined1 *)(param_3 + 0x10);
      func_0x000100b60084(&uStack_81);
    }
    func_0x000100070bfc();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1037446e0);
  (*pcVar3)();
}



/* Entry: 1037446e0; end: 10374489b;  */

ulong FUN_1037446e0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037447cc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037447d0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = 0x112e1cb88;
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = 0x112e1cb88;
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x423c657275747546,0xec0000003e6c6f6f);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10374489c);
  (*pcVar2)();
}



/* Entry: 10374489c; end: 103744b47;  */

undefined8 FUN_10374489c(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 uStack_61;
  
  func_0x0001000285a8(0x112dc1148,&UNK_10d9bbf70);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  puVar3 = &UNK_11068d428;
  func_0x000107c613fc(&UNK_11068d428,0x11,7);
  puVar3[0x10] = 0;
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if ((long)uVar9 < 1) {
    uStack_61 = 0;
    func_0x000100b60084(&uStack_61);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(lVar2);
  }
  else {
    uVar4 = 0;
    func_0x00010006a340();
    func_0x000107c613fc();
    func_0x00010006a360();
    puVar5 = &UNK_11068d450;
    func_0x000107c613fc(&UNK_11068d450,0x18,7);
    *(ulong *)(puVar5 + 0x10) = uVar9;
    if (param_1 >> 0x3e == 0) {
      uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = param_1 & 0xffffffffffffff8;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar9 = param_1;
      }
      func_0x000107c60480();
    }
    if (uVar9 != 0) {
      if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103744b48);
        (*pcVar1)();
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        puVar11 = (undefined8 *)(param_1 + 0x20);
        do {
          uVar8 = *puVar11;
          puVar7 = &UNK_11068d4a0;
          func_0x000107c613fc(&UNK_11068d4a0,0x30,7);
          *(undefined8 *)(puVar7 + 0x10) = uVar4;
          *(undefined **)(puVar7 + 0x18) = puVar3;
          *(undefined **)(puVar7 + 0x20) = puVar5;
          *(long *)(puVar7 + 0x28) = lVar2;
          func_0x000107c6157c(uVar4);
          func_0x000107c6157c(puVar3);
          func_0x000107c6157c(puVar5);
          func_0x000107c6157c(lVar2);
          func_0x000107c6157c(uVar8);
          func_0x00010075a04c(0,1,FUN_103744df0,puVar7);
          func_0x000107c61574(uVar8);
          func_0x000107c61574(puVar7);
          uVar9 = uVar9 - 1;
          puVar11 = puVar11 + 1;
        } while (uVar9 != 0);
      }
      else {
        uVar10 = 0;
        do {
          uVar6 = uVar10;
          FUN_1037446e0(uVar10,param_1);
          uVar10 = uVar10 + 1;
          puVar7 = &UNK_11068d478;
          func_0x000107c613fc(&UNK_11068d478,0x30,7);
          *(undefined8 *)(puVar7 + 0x10) = uVar4;
          *(undefined **)(puVar7 + 0x18) = puVar3;
          *(undefined **)(puVar7 + 0x20) = puVar5;
          *(long *)(puVar7 + 0x28) = lVar2;
          func_0x000107c6157c(uVar4);
          func_0x000107c6157c(puVar3);
          func_0x000107c6157c(puVar5);
          func_0x000107c6157c(lVar2);
          func_0x00010075a04c(0,1,FUN_103744b48,puVar7);
          func_0x000107c615e8(uVar6);
          func_0x000107c61574(puVar7);
        } while (uVar9 != uVar10);
      }
    }
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar3);
    puVar3 = puVar5;
  }
  func_0x000107c61574(puVar3);
  return uVar4;
}



/* Entry: 103744b48; end: 103744b53;  */

void FUN_103744b48(ulong *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [31];
  undefined1 uStack_81;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *param_1;
  uVar4 = param_1[1];
  func_0x00010006c804(param_1,*(undefined8 *)(unaff_x20 + 0x10),lVar2,lVar1,
                      *(undefined8 *)(unaff_x20 + 0x28));
  if ((char)uVar4 != '\x01') {
    func_0x000107c61428(lVar2 + 0x10,auStack_a0,0,0);
    if (((*(byte *)(lVar2 + 0x10) & 1) == 0) && ((uVar6 & 1) != 0)) {
      func_0x000107c61428(lVar2 + 0x10,auStack_b8,1,0);
      *(undefined1 *)(lVar2 + 0x10) = 1;
    }
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_68,1,0);
  lVar3 = *(long *)(lVar1 + 0x10) + -1;
  if (!SBORROW8(*(long *)(lVar1 + 0x10),1)) {
    *(long *)(lVar1 + 0x10) = lVar3;
    if (lVar3 < 1) {
      func_0x000107c61428(lVar2 + 0x10,auStack_80,0,0);
      uStack_81 = *(undefined1 *)(lVar2 + 0x10);
      func_0x000100b60084(&uStack_81);
    }
    func_0x000100070bfc();
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1037446e0);
  (*pcVar5)();
}



/* Entry: 103744b54; end: 103744b8f;  */

void FUN_103744b54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


