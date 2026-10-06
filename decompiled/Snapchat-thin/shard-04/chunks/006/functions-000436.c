/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10373d700; end: 10373d713;  */

undefined8 FUN_10373d700(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112f8f170,&UNK_10dc06fa0);
  puVar1 = &UNK_11068c3e0;
  func_0x000107c613fc(&UNK_11068c3e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x000107c61434(uVar3);
  uVar2 = 0x20;
  func_0x000104887c7c(0x20,0,0x48,0,0xd000000000000028,0x800000010f162840,&UNK_10dc06fb0,puVar1);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_10373bfe0,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_48);
  return uVar3;
}



/* Entry: 10373d714; end: 10373d727;  */

void FUN_10373d714(void)

{
  func_0x00010373cdc8();
  return;
}



/* Entry: 10373d728; end: 10373d787; -[_TtC57MemoriesOpportunisticRetranscodeOrchestrationServicesImpl24OrchestratorJobProcessor init] */

void FUN_10373d728(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesOpportunisticRetranscodeOrchestrationServicesImpl.OrchestratorJobProcessor"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10373d754);
  (*pcVar1)();
}



/* Entry: 10373d788; end: 10373d7cf; -[_TtC57MemoriesOpportunisticRetranscodeOrchestrationServicesImpl24OrchestratorJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010373d7a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010373d7a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10373d788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8f180));
  return;
}



/* Entry: 10373d7d0; end: 10373d7ef;  */

void FUN_10373d7d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8500);
  return;
}



/* Entry: 10373d7f0; end: 10373d883;  */

void FUN_10373d7f0(char *param_1,code *param_2)

{
  char cVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  cVar1 = *param_1;
  (*param_2)(0,0);
  if (cVar1 == '\x01') {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0x10))(0x4014000000000000,0,uStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 10373d884; end: 10373d98b; -[_TtC57MemoriesOpportunisticRetranscodeOrchestrationServicesImpl24OrchestratorJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_10373d884(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
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
  puVar2 = &UNK_11068c558;
  func_0x000107c613fc(&UNK_11068c558,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  pcVar3 = FUN_10373d98c;
  FUN_10373d994(FUN_10373d98c,puVar2);
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



/* Entry: 10373d98c; end: 10373d993;  */

void FUN_10373d98c(undefined8 param_1,long param_2)

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



/* Entry: 10373d994; end: 10373db23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10373d994(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar2 = uStack_70;
  lVar4 = lStack_68;
  (**(code **)(lStack_68 + 0x10))(uStack_70,lStack_68);
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  uVar1 = auStack_88[0];
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f8f190);
  puVar3 = &UNK_11068c580;
  func_0x000107c613fc(&UNK_11068c580,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(param_2);
  uVar5 = uVar1;
  func_0x00010488a220(uVar1,1,FUN_10373db24,puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(auStack_88);
  puVar3 = &UNK_11068c5a8;
  func_0x000107c613fc(&UNK_11068c5a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000104888fc0(auStack_88[0],1,FUN_10373db40,puVar3);
  func_0x000107c61574(lVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(auStack_88[0]);
  func_0x000107c61574(puVar3);
  return uVar2;
}



/* Entry: 10373db24; end: 10373db3f;  */

void FUN_10373db24(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10373d7f0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10373db40; end: 10373db67;  */

void FUN_10373db40(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(2,param_1);
  return;
}



/* Entry: 10373db68; end: 10373dec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10373db68(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  func_0x0001000d224c(&uStack_88);
  puVar1 = &uStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar2 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_70,uStack_68,puVar1);
  func_0x0001000834e4(&uStack_88);
  uVar5 = *(undefined8 *)(param_2 + _DAT_112fd9e48);
  uVar6 = *(undefined8 *)(param_4 + _DAT_1130806b8);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x0001000d224c(&uStack_88);
  uVar3 = uStack_88;
  func_0x000107c614f0(uStack_88);
  pcVar4 = FUN_10373dec8;
  (**(code **)(lStack_80 + 0x28))(FUN_10373dec8,0,uVar3,lStack_80);
  func_0x000107c615e8(uStack_88);
  func_0x0001000d224c(&uStack_90);
  func_0x000107c6157c(uVar5);
  uVar3 = uStack_90;
  func_0x00010488a220(uStack_90,1,FUN_10373df88,uVar5);
  func_0x000107c61574(pcVar4);
  func_0x000107c61170(uStack_90);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar6);
  func_0x000107c61578(uVar5,2);
  return unaff_x20;
}



/* Entry: 10373dec8; end: 10373df0b;  */

uint FUN_10373dec8(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0x18))();
  return param_1 & 1;
}



/* Entry: 10373df0c; end: 10373df87;  */

void FUN_10373df0c(char *param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  if (*param_1 == '\x01') {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0x10))(0,1,uStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 10373df88; end: 10373df9f;  */

void FUN_10373df88(void)

{
  FUN_10373df0c();
  return;
}



/* Entry: 10373dfa0; end: 10373dfbb;  */

void FUN_10373dfa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10373dfbc; end: 10373dfef;  */

void FUN_10373dfbc(void)

{
  func_0x000107c61168(&PTR_PTR_112f8f200);
  return;
}



/* Entry: 10373dff0; end: 10373e087;  */

void FUN_10373dff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068c5f0;
  func_0x000107c613fc(&UNK_11068c5f0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10373e1c8,puVar1);
  return;
}



/* Entry: 10373e088; end: 10373e1c7;  */

void FUN_10373e088(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x0001000a0a8c(0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11068c638;
  func_0x000107c613fc(&UNK_11068c638,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  pcStack_60 = FUN_10373e370;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_11068c650;
  puStack_58 = puVar4;
  func_0x000107c60bc4();
  puVar4 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x000103a70bb4();
  uVar1 = *ppuVar5;
  uVar2 = ppuVar5[1];
  func_0x000107c61434(uVar2);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,uVar1,uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c6142c(uVar2);
  *param_1 = puVar4;
  return;
}



/* Entry: 10373e1c8; end: 10373e1e3;  */

void FUN_10373e1c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_80;
  func_0x0001000a0a8c(0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11068c638;
  func_0x000107c613fc(&UNK_11068c638,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  pcStack_60 = FUN_10373e370;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_11068c650;
  puStack_58 = puVar4;
  func_0x000107c60bc4();
  puVar4 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x000103a70bb4();
  uVar1 = *ppuVar5;
  uVar2 = ppuVar5[1];
  func_0x000107c61434(uVar2);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,uVar1,uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c6142c(uVar2);
  *param_1 = puVar4;
  return;
}



/* Entry: 10373e1e4; end: 10373e33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10373e1e4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  long alStack_60 [3];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(alStack_60);
  lVar3 = alStack_60[0];
  uVar4 = *(undefined8 *)(alStack_60[0] + _DAT_112f8f510);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_38);
  uVar6 = *(undefined8 *)(lStack_38 + _DAT_11305e778);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(alStack_60);
  func_0x000107c61574(uVar6);
  plVar1 = alStack_60;
  func_0x0001000a8868(plVar1,uStack_48);
  uVar6 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_48,uStack_40,plVar1);
  func_0x0001000834e4(alStack_60);
  func_0x000100083b20(alStack_60);
  uVar5 = *(undefined8 *)(alStack_60[0] + _DAT_112fd9e48);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(alStack_60[0]);
  lVar2 = 0;
  FUN_10373d7d0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8f180) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112f8f188) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112f8f190) = uVar5;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10373e33c; end: 10373e36f;  */

void FUN_10373e33c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10373e370; end: 10373e397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10373e370(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  long alStack_60 [3];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(alStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = alStack_60[0];
  uVar4 = *(undefined8 *)(alStack_60[0] + _DAT_112f8f510);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_38);
  uVar6 = *(undefined8 *)(lStack_38 + _DAT_11305e778);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(alStack_60);
  func_0x000107c61574(uVar6);
  plVar1 = alStack_60;
  func_0x0001000a8868(plVar1,uStack_48);
  uVar6 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_48,uStack_40,plVar1);
  func_0x0001000834e4(alStack_60);
  func_0x000100083b20(alStack_60);
  uVar5 = *(undefined8 *)(alStack_60[0] + _DAT_112fd9e48);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(alStack_60[0]);
  lVar2 = 0;
  FUN_10373d7d0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8f180) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112f8f188) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112f8f190) = uVar5;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10373e398; end: 10373ebef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10373e398(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  func_0x0001000d224c(auStack_90);
  puVar1 = auStack_90;
  func_0x0001000a8868(puVar1,uStack_78);
  uVar2 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_78,uStack_70,puVar1);
  func_0x0001000834e4(auStack_90);
  uVar9 = *(undefined8 *)(param_3 + _DAT_112fd9d28);
  uVar10 = *(undefined8 *)(param_4 + _DAT_112f8f540);
  uVar13 = *(undefined8 *)(param_5 + _DAT_112fd9e48);
  uVar11 = *(undefined8 *)(param_6 + _DAT_1130806b8);
  uVar12 = *(undefined8 *)(param_7 + _DAT_112f8f4d8);
  puVar3 = &UNK_11068c688;
  func_0x000107c613fc(&UNK_11068c688,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  *(undefined8 *)(puVar3 + 0x18) = uVar11;
  func_0x0001000285a8(0x112f8f258,&UNK_10dc07160);
  func_0x000107c613fc();
  func_0x000107c61580(uVar11,2);
  func_0x000107c61580(uVar12,2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar13);
  pcVar4 = FUN_10373ec74;
  func_0x0001000bdd8c(FUN_10373ec74,puVar3);
  lVar5 = param_8 + _DAT_113080760;
  FUN_10373f0e8(lVar5,auStack_90);
  FUN_10373eee8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 5;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  FUN_10373f0e8(auStack_90,auStack_b8);
  puVar3 = &UNK_11068c6b0;
  func_0x000107c613fc(&UNK_11068c6b0,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar11;
  func_0x000102162a70(auStack_b8,puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x40) = uVar2;
  uVar6 = 0x112f8f260;
  func_0x0001000285a8(0x112f8f260,&UNK_10dc07540);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  pcVar7 = FUN_10373ef50;
  func_0x0001000bdd8c(FUN_10373ef50,puVar3);
  *(code **)(lVar5 + 0x20) = pcVar7;
  puVar3 = &UNK_11068c6d8;
  func_0x000107c613fc(&UNK_11068c6d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar11;
  *(long *)(puVar3 + 0x18) = param_8;
  func_0x000107c613fc(uVar6,0x18,7);
  func_0x000107c6157c(uVar11);
  func_0x000107c61174(param_8);
  uVar6 = 0x10373ef60;
  func_0x0001000bdd8c(0x10373ef60,puVar3);
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  FUN_10373f0e8(auStack_90,auStack_b8);
  puVar3 = &UNK_11068c700;
  func_0x000107c613fc(&UNK_11068c700,0x70,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x20) = uVar10;
  *(undefined8 *)(puVar3 + 0x28) = uVar13;
  *(undefined8 *)(puVar3 + 0x30) = uVar11;
  *(code **)(puVar3 + 0x38) = pcVar4;
  func_0x000102162a70(auStack_b8,puVar3 + 0x40);
  *(long *)(puVar3 + 0x68) = lVar5;
  func_0x0001000285a8(0x112f8f268,&UNK_10dc07170);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(pcVar4);
  uVar6 = 0x10373ef68;
  func_0x0001000bdd8c(0x10373ef68,puVar3);
  uVar8 = 0;
  func_0x00010033e29c();
  func_0x000107c610f8();
  func_0x000103740ff0(uVar6,uVar8);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(pcVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_90);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
  return;
}



/* Entry: 10373ebf0; end: 10373ec73;  */

/* WARNING: Possible PIC construction at 0x00010373ec58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010373ec5c) */

void FUN_10373ebf0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x000103739f94();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a95b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined **)(lVar2 + 0x20) = puVar3;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11068bef8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10373ec74; end: 10373ec7b;  */

/* WARNING: Possible PIC construction at 0x00010373ec58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010373ec5c) */

void FUN_10373ec74(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000103739f94();
  lVar4 = lVar3;
  func_0x000107c613fc();
  puVar5 = PTR_PTR_1126a95b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined **)(lVar4 + 0x20) = puVar5;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11068bef8;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10373ec7c; end: 10373ed23;  */

void FUN_10373ec7c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x00010373f178();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  FUN_10373f0e8(param_3,lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x40) = param_4;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar2 + 0x48) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11068c7d0;
  *param_1 = lVar2;
  return;
}



/* Entry: 10373ed24; end: 10373edc7;  */

/* WARNING: Possible PIC construction at 0x00010373eda8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010373edac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10373ed24(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_113080768;
  uVar4 = *(undefined8 *)(param_3 + _DAT_113080770);
  lVar2 = 0;
  func_0x00010373fcc4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  FUN_10373f0e8(param_3 + lVar1,lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11068c940;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar4);
  return;
}



/* Entry: 10373edc8; end: 10373eea7;  */

void FUN_10373edc8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x00010373a4ec();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  *(undefined8 *)(lVar2 + 0x38) = param_7;
  FUN_10373f0e8(param_8,lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x68) = param_9;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11068bf20;
  *param_1 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_9);
  return;
}



/* Entry: 10373eea8; end: 10373eeb7;  */

void FUN_10373eea8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10373eeb8; end: 10373eedb;  */

void FUN_10373eeb8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10373eedc; end: 10373eee7;  */

void FUN_10373eedc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10373eee8; end: 10373ef4f;  */

/* WARNING: Possible PIC construction at 0x00010373ef18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010373ef1c) */
/* WARNING: Removing unreachable block (ram,0x00010373ef20) */

void FUN_10373eee8(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112f8f340;
    plVar5 = (long *)&UNK_10dc071c0;
  }
  else {
    puVar3 = (ulong *)0x112f8f260;
    plVar5 = (long *)&UNK_10dc07540;
    unaff_x30 = 0x10373ef1c;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10373ef50; end: 10373ef6b;  */

void FUN_10373ef50(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar1 = 0;
  func_0x00010373f178();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  FUN_10373f0e8(unaff_x20 + 0x18,lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar2 + 0x48) = uVar4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11068c7d0;
  *param_1 = lVar2;
  return;
}



/* Entry: 10373ef6c; end: 10373f053;  */

void FUN_10373ef6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10373f054; end: 10373f06b;  */

void FUN_10373f054(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar7 = 0;
  func_0x00010373a4ec();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  FUN_10373f0e8(unaff_x20 + 0x40,lVar8 + 0x40);
  *(undefined8 *)(lVar8 + 0x68) = uVar9;
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_11068bf20;
  *param_1 = lVar8;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar9);
  return;
}



/* Entry: 10373f06c; end: 10373f0e7;  */

void FUN_10373f06c(undefined8 param_1)

{
  if (lRam0000000112f8f298 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77a30c);
  return;
}



/* Entry: 10373f0e8; end: 10373f12b;  */

long FUN_10373f0e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10373f12c; end: 10373f13b;  */

void FUN_10373f12c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar1 = 0;
  func_0x00010373f178();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  FUN_10373f0e8(unaff_x20 + 0x18,lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar2 + 0x48) = uVar4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11068c7d0;
  *param_1 = lVar2;
  return;
}



/* Entry: 10373f13c; end: 10373f197;  */

void FUN_10373f13c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10373f198; end: 10373f1af;  */

void FUN_10373f198(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373f1b0,0,0);
  return;
}



/* Entry: 10373f1b0; end: 10373f263;  */

void FUN_10373f1b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x10);
  func_0x000107c6157c(uVar4);
  puVar1 = PTR___sSbN_11034dd40;
  uVar2 = 0x20;
  func_0x0001001ca524(0x20,0,0x48,4,0,0,&UNK_10dc07248,uVar4,PTR___sSbN_11034dd40);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000107c61574(uVar4);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10373f264;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar3,unaff_x22 + 0x30,uVar2,puVar1);
  return;
}



/* Entry: 10373f264; end: 10373f36f;  */

void FUN_10373f264(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x18);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10373f2b4,0,0);
  return;
}



/* Entry: 10373f370; end: 10373f387;  */

void FUN_10373f370(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373f388,0,0);
  return;
}



/* Entry: 10373f388; end: 10373f3f7;  */

void FUN_10373f388(void)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  pbVar1 = *(byte **)(unaff_x22 + 0x28);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  uVar5 = uVar2;
  func_0x000107c614f0();
  bVar4 = (byte)uVar5;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  (**(code **)(*(long *)(lVar3 + 0x18) + 0x98))();
  func_0x000107c615e8(uVar2);
  *pbVar1 = bVar4 & 1;
                    /* WARNING: Could not recover jumptable at 0x00010373f3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10373f3f8; end: 10373f413;  */

void FUN_10373f3f8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373f414,0,0);
  return;
}



/* Entry: 10373f414; end: 10373f53b;  */

void FUN_10373f414(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar3 = *(undefined8 *)(lVar6 + 0x40);
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(lVar6 + 0x48);
  func_0x000102162a2c(lVar6 + 0x18,unaff_x22 + 0x10);
  puVar1 = &UNK_11068c808;
  func_0x000107c613fc(&UNK_11068c808,0x50,7);
  func_0x000102162a70(unaff_x22 + 0x10,puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  *(undefined8 *)(puVar1 + 0x40) = uVar7;
  *(undefined8 *)(puVar1 + 0x48) = uVar5;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  uVar3 = uVar4;
  func_0x0001048897a0(uVar4,1,1,FUN_10373f8ec,puVar1);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar4);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10373f53c;
                    /* WARNING: Could not recover jumptable at 0x00010373f538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab8ec)();
  return;
}



/* Entry: 10373f53c; end: 10373f66f;  */

void FUN_10373f53c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  *(long **)(lVar1 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x80) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10373f590,0,0);
  return;
}



/* Entry: 10373f670; end: 10373f6bb;  */

void FUN_10373f670(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010373f6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 10373f6bc; end: 10373f6df;  */

void FUN_10373f6bc(void)

{
  func_0x000100c82230();
  return;
}



/* Entry: 10373f6e0; end: 10373f733;  */

void FUN_10373f6e0(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10373f734;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373f388,0,0);
  return;
}



/* Entry: 10373f734; end: 10373f76f;  */

void FUN_10373f734(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010373f76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10373f770; end: 10373f8eb;  */

void FUN_10373f770(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar1);
  (**(code **)(lVar6 + 0x20))(uVar1,lVar6);
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  uVar2 = uStack_58;
  func_0x000100471e0c(uStack_58,0);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar3);
  uVar1 = 0x10373f900;
  func_0x0001000c0ebc(0x10373f900,0);
  func_0x000107c61574(uVar2);
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  func_0x000104883b8c(param_1,uStack_58);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_58);
  plVar4 = (long *)0x1;
  func_0x00010061b458();
  func_0x000107c61574(uVar3);
  pcVar7 = *(code **)(*plVar4 + 0x70);
  func_0x000107c61580(param_2,2);
  pcVar5 = FUN_10373f9c0;
  lVar6 = param_2;
  (*pcVar7)(FUN_10373f9c0,param_2,0x10373f9c8,param_2);
  func_0x000107c61574(plVar4);
  func_0x000107c61578(param_2,2);
  pcVar7 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(lVar6 + 0x18))(param_5,pcVar7,lVar6);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 10373f8ec; end: 10373f90f;  */

void FUN_10373f8ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_58;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1,*(undefined8 *)(unaff_x20 + 0x38));
  (**(code **)(lVar6 + 0x20))(uVar1,lVar6);
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  uVar2 = uStack_58;
  func_0x000100471e0c(uStack_58,0);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar3);
  uVar1 = 0x10373f900;
  func_0x0001000c0ebc(0x10373f900,0);
  func_0x000107c61574(uVar2);
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  func_0x000104883b8c(uVar9,uStack_58);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_58);
  plVar4 = (long *)0x1;
  func_0x00010061b458();
  func_0x000107c61574(uVar3);
  pcVar8 = *(code **)(*plVar4 + 0x70);
  func_0x000107c61580(param_1,2);
  pcVar5 = FUN_10373f9c0;
  lVar6 = param_1;
  (*pcVar8)(FUN_10373f9c0,param_1,0x10373f9c8,param_1);
  func_0x000107c61574(plVar4);
  func_0x000107c61578(param_1,2);
  pcVar8 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(lVar6 + 0x18))(uVar7,pcVar8,lVar6);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 10373f910; end: 10373f9bf;  */

void FUN_10373f910(undefined1 *param_1)

{
  undefined *puVar1;
  
  if (param_1[8] == '\x01') {
    FUN_10373f9d0();
    puVar1 = &UNK_11068c8c8;
    func_0x000107c613f8(&UNK_11068c8c8,param_1,0,0);
    *param_1 = 0;
    func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 10373f9c0; end: 10373f9cf;  */

void FUN_10373f9c0(undefined1 *param_1)

{
  undefined *puVar1;
  
  if (param_1[8] == '\x01') {
    FUN_10373f9d0();
    puVar1 = &UNK_11068c8c8;
    func_0x000107c613f8(&UNK_11068c8c8,param_1,0,0);
    *param_1 = 0;
    func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 10373f9d0; end: 10373fa0f;  */

void FUN_10373f9d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8f400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc07320;
  func_0x000107c61520(&UNK_10dc07320,&UNK_11068c8c8);
  puRam0000000112f8f400 = puVar1;
  return;
}



/* Entry: 10373fa10; end: 10373fa23;  */

bool FUN_10373fa10(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10373fa24; end: 10373facf;  */

void FUN_10373fa24(void)

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



/* Entry: 10373fad0; end: 10373fc4f;  */

void FUN_10373fad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10373fc50; end: 10373fce3;  */

void FUN_10373fc50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8f408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc072f8;
  func_0x000107c61520(&UNK_10dc072f8,&UNK_11068c8c8);
  puRam0000000112f8f408 = puVar1;
  return;
}



/* Entry: 10373fce4; end: 10373fcfb;  */

void FUN_10373fce4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373fcfc,0,0);
  return;
}



/* Entry: 10373fcfc; end: 10373fda3;  */

void FUN_10373fcfc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  pcVar4 = FUN_103740254;
  (**(code **)(lVar2 + 0x28))(FUN_103740254,0,uVar3,lVar2);
  *(code **)(unaff_x22 + 0x30) = pcVar4;
  func_0x000107c615e8(uVar1);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10373fda4;
                    /* WARNING: Could not recover jumptable at 0x00010373fda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101dae210)();
  return;
}



/* Entry: 10373fda4; end: 10373fdf7;  */

void FUN_10373fda4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373fdf8,0,0);
  return;
}



/* Entry: 10373fdf8; end: 10373fef7;  */

void FUN_10373fdf8(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x22;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x40);
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    *(ulong *)(unaff_x22 + 0x20) = uVar6;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
LAB_10373fe6c:
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(unaff_x22 + 0x28);
      puVar4 = *(undefined1 **)(lVar5 + 0x30);
      lVar1 = *(long *)(lVar5 + 0x38);
      func_0x0001000a8868(lVar5 + 0x18,puVar4);
      (**(code **)(lVar1 + 0x10))(puVar4,lVar1);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x0001037403ac();
        func_0x000107c613f8(&UNK_11068ca10,puVar4,0,0);
        *puVar4 = 0;
        func_0x000107c61654();
        goto LAB_10373fe6c;
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010373fef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10373fef8; end: 10373ff0f;  */

void FUN_10373fef8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373ff10,0,0);
  return;
}



/* Entry: 10373ff10; end: 10373ffd3;  */

void FUN_10373ff10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x60) + 0x10);
  func_0x000107c6157c(uVar4);
  uVar1 = 0x112f23748;
  func_0x0001000285a8(0x112f23748,&UNK_10dc073e0);
  uVar2 = 0x20;
  func_0x0001001ca524(0x20,0,0x48,0,0,0,&UNK_10dc073d8,uVar4,uVar1);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000107c61574(uVar4);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10373ffd4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar3,unaff_x22 + 0x78,uVar2,uVar1);
  return;
}



/* Entry: 10373ffd4; end: 103740023;  */

void FUN_10373ffd4(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103740024,0,0);
  return;
}



/* Entry: 103740024; end: 10374013f;  */

void FUN_103740024(void)

{
  long lVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0x78);
  if (bVar2 == 0 || bVar2 == 3) {
LAB_103740050:
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
    (**(code **)(lVar1 + 0x18))(uVar3,lVar1);
    func_0x0001000834e4(unaff_x22 + 0x10);
    func_0x0001000d224c(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar3);
    (**(code **)(lVar1 + 0x10))(uVar3,lVar1);
    puVar4 = (undefined1 *)(unaff_x22 + 0x38);
    func_0x0001000834e4();
    if (((uint)uVar3 & 0xff) == 3) {
      uVar5 = 1;
    }
    else {
      if (((uint)uVar3 & 0xff) < (uint)bVar2) goto LAB_103740050;
      uVar5 = 2;
    }
    func_0x0001037403ac();
    func_0x000107c613f8(&UNK_11068ca10,puVar4,0,0);
    *puVar4 = uVar5;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010374013c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103740140; end: 10374018b;  */

void FUN_103740140(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  *(long *)(unaff_x22 + 0x10) = lVar2;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10374018c;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373fcfc,0,0);
  return;
}



/* Entry: 10374018c; end: 103740207;  */

void FUN_10374018c(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001037401d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x20) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_103740208;
  plVar1[0xc] = *(long *)(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373ff10,0,0);
  return;
}



/* Entry: 103740208; end: 10374024f;  */

void FUN_103740208(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010374024c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103740250; end: 103740253;  */

void FUN_103740250(void)

{
  return;
}



/* Entry: 103740254; end: 103740297;  */

uint FUN_103740254(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0x80))();
  return param_1 & 1;
}



/* Entry: 103740298; end: 1037402af;  */

void FUN_103740298(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037402b0,0,0);
  return;
}



/* Entry: 1037402b0; end: 10374031b;  */

void FUN_1037402b0(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  puVar1 = *(undefined1 **)(unaff_x22 + 0x28);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  uVar5 = uVar2;
  func_0x000107c614f0();
  uVar4 = (undefined1)uVar5;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  (**(code **)(*(long *)(lVar3 + 0x18) + 0xb0))();
  func_0x000107c615e8(uVar2);
  *puVar1 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103740318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10374031c; end: 10374036f;  */

void FUN_10374031c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103740370;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037402b0,0,0);
  return;
}



/* Entry: 103740370; end: 1037403eb;  */

void FUN_103740370(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001037403a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1037403ec; end: 1037403ff;  */

bool FUN_1037403ec(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103740400; end: 1037404ab;  */

void FUN_103740400(void)

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



/* Entry: 1037404ac; end: 103740633;  */

void FUN_1037404ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103740634; end: 103740673;  */

void FUN_103740634(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8f4c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0747c;
  func_0x000107c61520(&UNK_10dc0747c,&UNK_11068ca10);
  puRam0000000112f8f4c8 = puVar1;
  return;
}



/* Entry: 103740674; end: 103740787;  */

void FUN_103740674(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103740750);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
        func_0x000107c6157c(uVar6);
      }
      else {
        uVar6 = uVar5;
        FUN_103740ac0(uVar5,param_1);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10374074c);
        (*pcVar3)();
      }
      uVar7 = uVar5 + 1;
      func_0x0001000d224c(auStack_88);
      lVar2 = lStack_68;
      uVar1 = uStack_70;
      func_0x0001000a8868(auStack_88,uStack_70);
      (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
      func_0x000107c61574(uVar6);
      func_0x0001000834e4(auStack_88);
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar4);
  }
  return;
}



/* Entry: 103740788; end: 10374079f;  */

void FUN_103740788(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037407a0,0,0);
  return;
}



/* Entry: 1037407a0; end: 1037408a3;  */

void FUN_1037407a0(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long unaff_x22;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x50);
  uVar9 = uVar7 & 0xffffffffffffff8;
  if (uVar7 >> 0x3e == 0) {
    uVar4 = *(ulong *)(uVar9 + 0x10);
    *(ulong *)(unaff_x22 + 0x58) = uVar9;
    *(ulong *)(unaff_x22 + 0x60) = uVar4;
  }
  else {
    uVar4 = uVar9;
    if (0x7fffffffffffffff < uVar7) {
      uVar4 = uVar7;
    }
    func_0x000107c60480();
    uVar7 = *(ulong *)(unaff_x22 + 0x50);
    *(ulong *)(unaff_x22 + 0x58) = uVar9;
    *(ulong *)(unaff_x22 + 0x60) = uVar4;
  }
  if (uVar4 != 0) {
    if ((uVar7 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1037408a4);
        (*pcVar3)();
      }
      uVar5 = *(undefined8 *)(uVar7 + 0x20);
      func_0x000107c6157c();
    }
    else {
      uVar5 = 0;
      FUN_103740ac0();
    }
    *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x70) = 1;
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar5);
    piVar8 = *(int **)(lVar2 + 8);
    iVar1 = *piVar8;
    plVar6 = (long *)(ulong)(uint)piVar8[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1037408a4;
                    /* WARNING: Could not recover jumptable at 0x00010374085c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))(uVar5,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103740890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037408a4; end: 1037408f7;  */

void FUN_1037408a4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  *(long **)(lVar1 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x80) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037408f8,0,0);
  return;
}



/* Entry: 1037408f8; end: 103740a1f;  */

void FUN_1037408f8(void)

{
  int iVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  long unaff_x22;
  
  cVar3 = *(char *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar3 == '\x01') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar8 = 1;
  }
  else {
    uVar10 = *(ulong *)(unaff_x22 + 0x70);
    if (uVar10 != *(ulong *)(unaff_x22 + 0x60)) {
      if ((*(ulong *)(unaff_x22 + 0x50) & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(unaff_x22 + 0x58) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103740a20);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(*(ulong *)(unaff_x22 + 0x50) + uVar10 * 8 + 0x20);
        func_0x000107c6157c();
      }
      else {
        uVar6 = uVar10;
        FUN_103740ac0();
      }
      *(ulong *)(unaff_x22 + 0x68) = uVar6;
      if (!SCARRY8(uVar10,1)) {
        *(ulong *)(unaff_x22 + 0x70) = uVar10 + 1;
        func_0x0001000d224c(unaff_x22 + 0x10);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar2 = *(long *)(unaff_x22 + 0x30);
        func_0x0001000a8868(unaff_x22 + 0x10,uVar5);
        piVar9 = *(int **)(lVar2 + 8);
        iVar1 = *piVar9;
        plVar7 = (long *)(ulong)(uint)piVar9[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x78) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_1037408a4;
                    /* WARNING: Could not recover jumptable at 0x000103740a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar9))(uVar5,lVar2);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103740a1c);
      (*pcVar4)();
    }
    uVar5 = 0;
    uVar8 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000103740964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5,uVar8);
  return;
}



/* Entry: 103740a20; end: 103740a6b;  */

void FUN_103740a20(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103740a6c;
  plVar1[10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037407a0,0,0);
  return;
}



/* Entry: 103740a6c; end: 103740ab7;  */

void FUN_103740a6c(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103740ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 103740ab8; end: 103740abf;  */

void FUN_103740ab8(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar4 = *unaff_x20;
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103740750);
          (*pcVar3)();
        }
        uVar7 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        func_0x000107c6157c(uVar7);
      }
      else {
        uVar7 = uVar6;
        FUN_103740ac0(uVar6,uVar4);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10374074c);
        (*pcVar3)();
      }
      uVar8 = uVar6 + 1;
      func_0x0001000d224c(auStack_88);
      lVar2 = lStack_68;
      uVar1 = uStack_70;
      func_0x0001000a8868(auStack_88,uStack_70);
      (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
      func_0x000107c61574(uVar7);
      func_0x0001000834e4(auStack_88);
      uVar6 = uVar6 + 1;
    } while (uVar8 != uVar5);
  }
  return;
}



/* Entry: 103740ac0; end: 103740c73;  */

ulong FUN_103740ac0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103740ba8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103740bac);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112f8f260;
    func_0x0001000285a8(0x112f8f260,&UNK_10dc07540);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0x112f8f260;
    func_0x0001000285a8(0x112f8f260,&UNK_10dc07540);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000020,0x800000010f162950);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103740c74);
  (*pcVar2)();
}



/* Entry: 103740c74; end: 103740c87;  */

bool FUN_103740c74(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103740c88; end: 103740d33;  */

void FUN_103740c88(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103740d34; end: 103740d5b;  */

void FUN_103740d34(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103740d5c; end: 103740d9f;  */

void FUN_103740d5c(undefined8 param_1)

{
  func_0x000107c5fadc();
  func_0x000107c4f038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103740da0; end: 103740da3;  */

void FUN_103740da0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8f4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc07550;
  func_0x000107c61520(&UNK_10dc07550,&UNK_11068cae8);
  puRam0000000112f8f4d0 = puVar1;
  return;
}



/* Entry: 103740da4; end: 103740de3;  */

void FUN_103740da4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8f4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc07550;
  func_0x000107c61520(&UNK_10dc07550,&UNK_11068cae8);
  puRam0000000112f8f4d0 = puVar1;
  return;
}



/* Entry: 103740de4; end: 103740df3;  */

undefined1  [16] FUN_103740de4(void)

{
  return ZEXT816(0x11068cae8);
}



/* Entry: 103740df4; end: 103740e03; -[_TtC27MemoriesDebugBannerServices27MemoriesDebugBannerServices presenterSCLazy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103740df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f8f4e0));
  return;
}



/* Entry: 103740e04; end: 103740f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103740e04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8f4d8) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112f8f4e0) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}


