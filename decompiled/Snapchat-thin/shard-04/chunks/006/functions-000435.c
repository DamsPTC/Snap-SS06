/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103738fec; end: 10373902b;  */

void FUN_103738fec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8eef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc06c6c;
  func_0x000107c61520(&UNK_10dc06c6c,&UNK_11068bbd0);
  puRam0000000112f8eef0 = puVar1;
  return;
}



/* Entry: 10373902c; end: 1037390b7;  */

void FUN_10373902c(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1037390c4(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  (*param_4)(param_1,param_2);
  return;
}



/* Entry: 1037390b8; end: 1037390c3;  */

void FUN_1037390b8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1037390c4(param_1,param_2);
    func_0x000107c61170(lVar2);
  }
  (*pcVar1)(param_1,param_2);
  return;
}



/* Entry: 1037390c4; end: 1037392af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037390c4(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 0x73736563637573;
  }
  uVar3 = 0xe000000000000000;
  if (param_1 == 0) {
    uVar3 = 0xe700000000000000;
  }
  uVar7 = 0x800000010f162800;
  uVar4 = 0xd000000000000010;
  if (param_1 != 1) {
    uVar7 = uVar3;
    uVar4 = uVar1;
  }
  uVar1 = 0xec0000006572756c;
  uVar3 = 0x6961466c61746166;
  if (param_1 != 2) {
    uVar1 = uVar7;
    uVar3 = uVar4;
  }
  func_0x000107c5fadc(uVar3,uVar1);
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    func_0x000107c614cc(param_2,auStack_48,auStack_60);
    uVar4 = uStack_50;
    func_0x000107c60640(uStack_58,uStack_50);
    uVar7 = uStack_58;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
  }
  uVar4 = uVar3;
  func_0x00010b5f1858(uVar3,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f8eee8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c6142c(uVar1);
  }
  else {
    lVar6 = lVar5;
    func_0x000107c4cba0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10373924c);
      (*pcVar2)();
    }
    func_0x000107c45314(lVar6);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1037392b0; end: 1037392cb;  */

void FUN_1037392b0(long param_1,long param_2)

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



/* Entry: 1037392cc; end: 1037393c3; -[_TtC46SCMemoriesCRFeaturedStoryBackgroundJobProvider45MemoriesCRFeaturedStoryBackgroundJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_1037392cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
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
  FUN_1037395ac(param_1,param_6);
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



/* Entry: 1037393c4; end: 103739423; -[_TtC46SCMemoriesCRFeaturedStoryBackgroundJobProvider45MemoriesCRFeaturedStoryBackgroundJobProcessor init] */

void FUN_1037393c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesCRFeaturedStoryBackgroundJobProvider.MemoriesCRFeaturedStoryBackgroundJobProcessor"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037393f0);
  (*pcVar1)();
}



/* Entry: 103739424; end: 10373945b; -[_TtC46SCMemoriesCRFeaturedStoryBackgroundJobProvider45MemoriesCRFeaturedStoryBackgroundJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103739440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103739444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103739424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8eee0));
  return;
}



/* Entry: 10373945c; end: 10373947b;  */

void FUN_10373945c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8438);
  return;
}



/* Entry: 10373947c; end: 10373956b;  */

uint FUN_10373947c(uint *param_1,int param_2)

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



/* Entry: 10373956c; end: 1037395ab;  */

void FUN_10373956c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8ef20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc06c44;
  func_0x000107c61520(&UNK_10dc06c44,&UNK_11068bbd0);
  puRam0000000112f8ef20 = puVar1;
  return;
}



/* Entry: 1037395ac; end: 10373978b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037395ac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_11068bbf0;
  func_0x000107c613fc(&UNK_11068bbf0,0x18,7);
  *(long *)(puVar1 + 0x10) = param_2;
  lVar6 = *(long *)(param_1 + _DAT_112f8eee0);
  func_0x000107c60bc4(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    FUN_103738fec();
    puVar4 = &UNK_11068bbd0;
    func_0x000107c613f8(&UNK_11068bbd0,lVar6,0,0);
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    (**(code **)(param_2 + 0x10))(param_2,2,puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c614ac(puVar4);
    func_0x000107c61574(puVar1);
  }
  else {
    puVar4 = &UNK_11068bb38;
    func_0x000107c613fc(&UNK_11068bb38,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_1);
    puVar5 = &UNK_11068bc18;
    func_0x000107c613fc(&UNK_11068bc18,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(code **)(puVar5 + 0x18) = FUN_10373978c;
    *(undefined **)(puVar5 + 0x20) = puVar1;
    pcStack_50 = FUN_1037397c0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x10373924c;
    puStack_58 = &UNK_11068bc30;
    ppuVar2 = &puStack_70;
    puStack_48 = puVar5;
    func_0x000107c60bc4(ppuVar2);
    puVar4 = puStack_48;
    func_0x000107c6157c(puVar1);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c4db54(lVar6);
    func_0x000107c61574(puVar5);
    func_0x000107c60bd0(ppuVar2);
    puStack_78 = PTR_DAT_11269ce50;
    lVar3 = lVar6;
    func_0x000107c61494(lVar6,1,&puStack_78);
    func_0x000107c61574(puVar1);
    if (lVar3 != 0) {
      return lVar3;
    }
    func_0x000107c615e8(lVar6);
  }
  return 0;
}



/* Entry: 10373978c; end: 103739793;  */

void FUN_10373978c(undefined8 param_1,long param_2)

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



/* Entry: 103739794; end: 1037397bf;  */

void FUN_103739794(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037397c0; end: 1037397cb;  */

void FUN_1037397c0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1037390c4(param_1,param_2);
    func_0x000107c61170(lVar2);
  }
  (*pcVar1)(param_1,param_2);
  return;
}



/* Entry: 1037397cc; end: 103739867;  */

undefined8 FUN_1037397cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103739884(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 103739868; end: 103739883;  */

void FUN_103739868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103739884; end: 103739aff;  */

/* WARNING: Possible PIC construction at 0x00010373999c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037399cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103739a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103739a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103739a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103739a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103739abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103739acc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103739ac0) */
/* WARNING: Removing unreachable block (ram,0x000103739a94) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000103739a84) */
/* WARNING: Removing unreachable block (ram,0x000103739a74) */
/* WARNING: Removing unreachable block (ram,0x000103739a28) */
/* WARNING: Removing unreachable block (ram,0x000103739ab0) */
/* WARNING: Removing unreachable block (ram,0x000103739a54) */
/* WARNING: Removing unreachable block (ram,0x0001037399a0) */
/* WARNING: Removing unreachable block (ram,0x0001037399d0) */
/* WARNING: Removing unreachable block (ram,0x0001037399e8) */
/* WARNING: Removing unreachable block (ram,0x0001037399a8) */
/* WARNING: Removing unreachable block (ram,0x000103739afc) */
/* WARNING: Removing unreachable block (ram,0x0001037399bc) */
/* WARNING: Removing unreachable block (ram,0x000103739ad0) */

void FUN_103739884(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126b7248;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000108ec08ac();
  if ((ulong)puVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103739af0);
    (*pcVar1)();
  }
  func_0x000107c57d34(puVar4,param_2,puVar5);
  func_0x000107c57c1c(puVar3,param_2,puVar4);
  func_0x000107c55974(puVar2,param_2,puVar3);
  puVar3 = PTR_PTR_1126b7230;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = puVar3;
  func_0x000108ec08b4();
  if ((ulong)puVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103739af4);
    (*pcVar1)();
  }
  func_0x000107c56358(puVar3,param_2,puVar4);
  puVar4 = puVar3;
  func_0x000107c57ed0(puVar3,param_2,2);
  func_0x000108ec08bc();
  if ((ulong)puVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103739af8);
    (*pcVar1)();
  }
  func_0x000107c57ecc(puVar3,param_2,puVar4);
  func_0x000107c57ec0(puVar2,param_2,puVar3);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103739afc);
  (*pcVar1)();
}



/* Entry: 103739b00; end: 103739b1f;  */

void FUN_103739b00(void)

{
  func_0x000107c61168(&PTR_PTR_112f8ef68);
  return;
}



/* Entry: 103739b20; end: 103739c87;  */

int FUN_103739b20(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103739b9c;
        goto LAB_103739b80;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103739b80:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103739b9c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103739c88; end: 103739cc7;  */

void FUN_103739c88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8efc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc06da0;
  func_0x000107c61520(&UNK_10dc06da0,&UNK_11068bde8);
  puRam0000000112f8efc0 = puVar1;
  return;
}



/* Entry: 103739cc8; end: 103739cdb;  */

bool FUN_103739cc8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103739cdc; end: 103739d87;  */

void FUN_103739cdc(void)

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



/* Entry: 103739d88; end: 103739e77;  */

uint FUN_103739d88(uint *param_1,int param_2)

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



/* Entry: 103739e78; end: 103739eb7;  */

void FUN_103739e78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8efc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc06e30;
  func_0x000107c61520(&UNK_10dc06e30,&UNK_11068beb0);
  puRam0000000112f8efc8 = puVar1;
  return;
}



/* Entry: 103739eb8; end: 103739ebf;  */

undefined8 FUN_103739eb8(void)

{
  return 1;
}



/* Entry: 103739ec0; end: 103739f5f;  */

void FUN_103739ec0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103739f60; end: 103739fb3;  */

void FUN_103739f60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103739fb4; end: 10373a093;  */

void FUN_103739fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_48 + 0x18) + 0x60))();
  func_0x000107c615e8(uStack_50);
  if ((uVar3 & 1) != 0) {
    uStack_50 = 0x205d54524f5b;
    lStack_48 = 0xe600000000000000;
    func_0x000107c5fb78(param_1,param_2);
    lVar2 = lStack_48;
    uVar3 = uStack_50;
    func_0x0001000d224c(&uStack_50);
    uVar1 = uStack_50;
    uVar4 = uStack_50;
    func_0x000107c614f0(uStack_50);
    FUN_103740d5c(uVar3,lVar2,param_3,uVar4);
    func_0x000107c6142c(lVar2);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 10373a094; end: 10373a193;  */

void FUN_10373a094(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010373a280(1,param_1,1);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x14);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f162820);
  uVar2 = 0x112d393f0;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_38;
  uVar2 = uStack_40;
  FUN_103739fb4(uStack_40,uStack_38,0);
  uStack_40 = 0x205d54524f5b;
  uStack_38 = 0xe600000000000000;
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 10373a194; end: 10373a387;  */

void FUN_10373a194(undefined1 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  uStack_61 = param_1;
  func_0x000107c603d0(&uStack_61,&uStack_60,&UNK_11068bde8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_58;
  uVar2 = uStack_60;
  func_0x000107c5fadc(uStack_60,uStack_58);
  func_0x000107c6142c(uVar1);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c603d0();
  uVar1 = uStack_58;
  uVar3 = uStack_60;
  func_0x000107c5fadc(uStack_60,uStack_58);
  func_0x000107c6142c(uVar1);
  func_0x000106c336b0(uVar4,uVar2,uVar3,param_2 & 1,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10373a388; end: 10373a39b;  */

bool FUN_10373a388(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10373a39c; end: 10373a447;  */

void FUN_10373a39c(void)

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



/* Entry: 10373a448; end: 10373a477;  */

void FUN_10373a448(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10373a478; end: 10373a50b;  */

void FUN_10373a478(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 10373a50c; end: 10373a687;  */

undefined8 FUN_10373a50c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c6157c(uVar3);
  uVar1 = uVar2;
  func_0x000104889654(uVar2,1,0x10373d40c,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar3);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_10373bb60,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  return uVar2;
}



/* Entry: 10373a688; end: 10373aa4f;  */

undefined1  [16] FUN_10373a688(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000d224c(&uStack_88);
  func_0x0001000a8868(&uStack_88,uStack_70);
  FUN_10373a194(0,0);
  FUN_103739fb4(0x206e6f6973736553,0xee00737472617473,2);
  func_0x0001000834e4(&uStack_88);
  puVar2 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&uStack_88);
  uVar1 = uStack_88;
  uVar3 = uStack_88;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_80 + 0x18) + 0xd0))();
  func_0x000107c615e8(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    puVar8 = &UNK_11068bf58;
    func_0x000107c613fc(&UNK_11068bf58,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    puVar4 = &UNK_11068bf80;
    func_0x000107c613fc(&UNK_11068bf80,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar8;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    func_0x000107c61174(puVar2);
    uVar9 = 0x20;
    func_0x000104887c7c(0x20,0,0x48,0,0x2865747563657865,0xe900000000000029,&UNK_10dc06f78,puVar4);
  }
  else {
    func_0x0001000285a8(0x112dc1148,&UNK_10d9bbf70);
    func_0x000107c613fc();
    puVar4 = (undefined *)0x0;
    func_0x00010095c380();
    puVar5 = puVar4;
    FUN_10373a50c();
    func_0x0001000d224c(&uStack_88);
    uVar1 = uStack_88;
    puVar8 = &UNK_11068bf58;
    func_0x000107c613fc(&UNK_11068bf58,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    puVar6 = &UNK_11068bfa8;
    func_0x000107c613fc(&UNK_11068bfa8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar8;
    *(undefined **)(puVar6 + 0x18) = puVar2;
    puVar8 = &UNK_11068bfd0;
    func_0x000107c613fc(&UNK_11068bfd0,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_10373ba9c;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    func_0x000107c61174(puVar2);
    uVar3 = uVar1;
    func_0x0001048898b8(uVar1,1,FUN_10373baa4,puVar8,PTR___sSbN_11034dd40);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(puVar8);
    func_0x0001000d224c(&uStack_88);
    uVar1 = uStack_88;
    uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
    puVar8 = &UNK_11068bff8;
    func_0x000107c613fc(&UNK_11068bff8,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar10;
    *(undefined8 *)(puVar8 + 0x18) = uVar9;
    func_0x000107c6157c(uVar9);
    func_0x000107c61434(uVar10);
    uVar7 = uVar1;
    func_0x00010488a340(uVar1,1,FUN_10373bacc,puVar8);
    func_0x000107c61574(uVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(puVar8);
    func_0x0001000d224c(&uStack_88);
    uVar1 = uStack_88;
    puVar8 = &UNK_11068c020;
    func_0x000107c613fc(&UNK_11068c020,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar10;
    *(undefined8 *)(puVar8 + 0x18) = uVar9;
    func_0x000107c6157c(uVar9);
    func_0x000107c61434(uVar10);
    uVar3 = uVar1;
    func_0x00010488a3ec(uVar1,1,FUN_10373bae4,puVar8);
    func_0x000107c61574(uVar7);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(puVar8);
    func_0x0001000d224c(&uStack_88);
    func_0x000104889c84(uStack_88,0,puVar4);
    func_0x000107c61574(uVar3);
    func_0x000107c61170(uStack_88);
    uVar9 = *(undefined8 *)(puVar4 + 0x10);
    func_0x000107c6157c(uVar9);
  }
  func_0x000107c61574(puVar4);
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = puVar2;
  return auVar11;
}



/* Entry: 10373aa50; end: 10373ab9f;  */

undefined8 FUN_10373aa50(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_10373c958(param_2,param_1);
    func_0x000107c61574(param_1);
  }
  return param_2;
}



/* Entry: 10373aba0; end: 10373abbb;  */

void FUN_10373aba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373abbc,0,0);
  return;
}



/* Entry: 10373abbc; end: 10373ac8b;  */

void FUN_10373abbc(void)

{
  undefined1 *puVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x60,0,0);
  puVar1 = (undefined1 *)(lVar3 + 0x10);
  func_0x000107c61648();
  *(undefined1 **)(unaff_x22 + 0xb0) = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    func_0x00010373d2ec();
    func_0x000107c613f8(&UNK_11068c4c8,puVar1,0,0);
    *puVar1 = 4;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    FUN_10373a50c();
    *(undefined1 **)(unaff_x22 + 0xb8) = puVar1;
    plVar2 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_100fab8ec;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10373ac8c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010373ac88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10373ac8c; end: 10373acdf;  */

void FUN_10373ac8c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x88) = param_2;
  *(long **)(lVar1 + 0x78) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x80) = param_1;
  *(undefined1 *)(lVar1 + 0xd8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373ace0,0,0);
  return;
}



/* Entry: 10373ace0; end: 10373adab;  */

void FUN_10373ace0(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xd8) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x80);
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x90,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010373ad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  plVar4 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10373adac;
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  plVar4[0x19] = *(long *)(unaff_x22 + 0xa8);
  plVar4[0x1a] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373af5c,0,0);
  return;
}



/* Entry: 10373adac; end: 10373ae1b;  */

void FUN_10373adac(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0xd9) = param_1 & 1;
    pcVar1 = FUN_10373ae1c;
  }
  else {
    pcVar1 = FUN_10373aec8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10373ae1c; end: 10373aec7;  */

void FUN_10373ae1c(void)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x22;
  undefined1 *puVar3;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0xd9);
  lVar2 = *(long *)(unaff_x22 + 0xb0);
  puVar3 = *(undefined1 **)(unaff_x22 + 0x98);
  func_0x0001000d224c(unaff_x22 + 0x38);
  func_0x0001000a8868(unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x50));
  FUN_10373a194(1,0);
  FUN_103739fb4(0x206e6f6973736553,0xef73646565637573,1);
  func_0x0001000834e4(unaff_x22 + 0x38);
  *puVar3 = uVar1;
  FUN_103740674(*(undefined8 *)(lVar2 + 0x68));
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010373aec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10373aec8; end: 10373af43;  */

void FUN_10373aec8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  func_0x0001000d224c(unaff_x22 + 0x10);
  func_0x0001000a8868(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x28));
  FUN_10373a094(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c61654();
  FUN_103740674(*(undefined8 *)(lVar1 + 0x68));
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010373af40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10373af44; end: 10373af5b;  */

void FUN_10373af44(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373af5c,0,0);
  return;
}



/* Entry: 10373af5c; end: 10373b0fb;  */

void FUN_10373af5c(void)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  puVar2 = *(undefined1 **)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(*(long *)(unaff_x22 + 0xd0) + 0x68);
  func_0x000107c49b28();
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010373d2ec();
    puVar3 = &UNK_11068c4c8;
    func_0x000107c613f8(&UNK_11068c4c8,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
    *(undefined **)(unaff_x22 + 0xa8) = puVar3;
    func_0x000107c614b0(puVar3);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar5 = 0x112f8f158;
    func_0x0001000285a8(0x112f8f158,&UNK_10dc06f88);
    lVar6 = unaff_x22 + 0x38;
    func_0x000107c6147c(lVar6,unaff_x22 + 0xa8,uVar4,uVar5,6);
    if ((int)lVar6 == 0) {
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      FUN_10373ce28(unaff_x22 + 0x38);
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      uVar1 = 0;
    }
    else {
      func_0x000107c614ac(puVar3);
      func_0x000100d5bf58(unaff_x22 + 0x38,unaff_x22 + 0x10);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar6 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
      (**(code **)(lVar6 + 8))(uVar4,lVar6);
      func_0x0001000834e4(unaff_x22 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      uVar1 = (uint)uVar4 & 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010373b0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1);
    return;
  }
  func_0x000107c5fd64();
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10373b0fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 10373b0fc; end: 10373b1af;  */

void FUN_10373b0fc(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0xf0) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = 0x10373b15c;
  plVar1[10] = *(long *)(lVar2 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037407a0,0,0);
  return;
}



/* Entry: 10373b1b0; end: 10373b36b;  */

void FUN_10373b1b0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x128) != '\x01') {
    FUN_10373bbb8();
    *(undefined8 *)(unaff_x22 + 0xf8) = param_1;
    plVar6 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x100) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10373b36c;
                    /* WARNING: Could not recover jumptable at 0x00010373b328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_100fab8ec)();
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(unaff_x22 + 0xb0,uVar3,PTR___ss5ErrorWS_11034ee10);
  }
  lVar8 = *(long *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar7;
  func_0x000107c614b0(uVar7);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar4 = 0x112f8f158;
  func_0x0001000285a8(0x112f8f158,&UNK_10dc06f88);
  lVar5 = unaff_x22 + 0x38;
  func_0x000107c6147c(lVar5,unaff_x22 + 0xa8,uVar3,uVar4,6);
  if ((int)lVar5 == 0) {
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    FUN_10373ce28(unaff_x22 + 0x38);
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(uVar7);
    func_0x000100d5bf58(unaff_x22 + 0x38,unaff_x22 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar5 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar7);
    (**(code **)(lVar5 + 8))(uVar7,lVar5);
    func_0x0001000834e4(unaff_x22 + 0x10);
    if (lVar8 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      uVar2 = (uint)uVar7 & 1;
      goto LAB_10373b354;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  uVar2 = 0;
LAB_10373b354:
                    /* WARNING: Could not recover jumptable at 0x00010373b368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



/* Entry: 10373b36c; end: 10373b3bf;  */

void FUN_10373b36c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x88) = param_2;
  *(long **)(lVar1 + 0x78) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x80) = param_1;
  *(undefined1 *)(lVar1 + 0x129) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373b3c0,0,0);
  return;
}



/* Entry: 10373b3c0; end: 10373b5cb;  */

void FUN_10373b3c0(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x129) == '\x01') {
    puVar7 = *(undefined **)(unaff_x22 + 0x80);
    *(undefined **)(unaff_x22 + 0xb8) = puVar7;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xb8,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar6);
    lVar9 = *(long *)(unaff_x22 + 0xe0);
  }
  else {
    puVar8 = *(undefined1 **)(unaff_x22 + 200);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
    func_0x000107c49b28();
    if (((ulong)puVar8 & 1) == 0) {
      puVar7 = *(undefined **)(unaff_x22 + 0xe0);
      func_0x000107c5fd64();
      *(undefined **)(unaff_x22 + 0x108) = puVar7;
      if (puVar7 == (undefined *)0x0) {
        plVar5 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4
                                         );
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x110) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_10373b5cc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
        return;
      }
    }
    else {
      func_0x00010373d2ec();
      puVar7 = &UNK_11068c4c8;
      func_0x000107c613f8(&UNK_11068c4c8,puVar8,0,0);
      *puVar8 = 0;
      func_0x000107c61654();
    }
    lVar9 = 0;
  }
  *(undefined **)(unaff_x22 + 0xa8) = puVar7;
  func_0x000107c614b0(puVar7);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0x112f8f158;
  func_0x0001000285a8(0x112f8f158,&UNK_10dc06f88);
  lVar4 = unaff_x22 + 0x38;
  func_0x000107c6147c(lVar4,unaff_x22 + 0xa8,uVar6,uVar3,6);
  if ((int)lVar4 == 0) {
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    FUN_10373ce28(unaff_x22 + 0x38);
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(puVar7);
    func_0x000100d5bf58(unaff_x22 + 0x38,unaff_x22 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar6);
    (**(code **)(lVar4 + 8))(uVar6,lVar4);
    func_0x0001000834e4(unaff_x22 + 0x10);
    if (lVar9 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      uVar2 = (uint)uVar6 & 1;
      goto LAB_10373b578;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  uVar2 = 0;
LAB_10373b578:
                    /* WARNING: Could not recover jumptable at 0x00010373b58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



/* Entry: 10373b5cc; end: 10373b6cf;  */

void FUN_10373b5cc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10373b614,0,0);
  return;
}



/* Entry: 10373b6d0; end: 10373b8db;  */

void FUN_10373b6d0(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x12a) == '\x01') {
    puVar7 = *(undefined **)(unaff_x22 + 0x98);
    *(undefined **)(unaff_x22 + 0xc0) = puVar7;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xc0,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar6);
    lVar9 = *(long *)(unaff_x22 + 0x108);
  }
  else {
    puVar8 = *(undefined1 **)(unaff_x22 + 200);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
    func_0x000107c49b28();
    if (((ulong)puVar8 & 1) == 0) {
      puVar7 = *(undefined **)(unaff_x22 + 0x108);
      func_0x000107c5fd64();
      *(undefined **)(unaff_x22 + 0xe0) = puVar7;
      if (puVar7 == (undefined *)0x0) {
        plVar5 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4
                                         );
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xe8) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_10373b0fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
        return;
      }
    }
    else {
      func_0x00010373d2ec();
      puVar7 = &UNK_11068c4c8;
      func_0x000107c613f8(&UNK_11068c4c8,puVar8,0,0);
      *puVar8 = 0;
      func_0x000107c61654();
    }
    lVar9 = 0;
  }
  *(undefined **)(unaff_x22 + 0xa8) = puVar7;
  func_0x000107c614b0(puVar7);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0x112f8f158;
  func_0x0001000285a8(0x112f8f158,&UNK_10dc06f88);
  lVar4 = unaff_x22 + 0x38;
  func_0x000107c6147c(lVar4,unaff_x22 + 0xa8,uVar6,uVar3,6);
  if ((int)lVar4 == 0) {
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    FUN_10373ce28(unaff_x22 + 0x38);
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(puVar7);
    func_0x000100d5bf58(unaff_x22 + 0x38,unaff_x22 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar6);
    (**(code **)(lVar4 + 8))(uVar6,lVar4);
    func_0x0001000834e4(unaff_x22 + 0x10);
    if (lVar9 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      uVar2 = (uint)uVar6 & 1;
      goto LAB_10373b888;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  uVar2 = 0;
LAB_10373b888:
                    /* WARNING: Could not recover jumptable at 0x00010373b89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



/* Entry: 10373b8dc; end: 10373b9eb;  */

undefined8 FUN_10373b8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_58;
  
  lVar5 = *unaff_x20;
  uVar1 = param_1;
  FUN_10373a50c();
  func_0x0001000d224c(&uStack_58);
  uVar4 = *(undefined8 *)(lVar5 + 0x18);
  puVar2 = &UNK_11068c408;
  func_0x000107c613fc(&UNK_11068c408,0x29,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar2[0x28] = (char)param_3;
  puVar3 = &UNK_11068c430;
  func_0x000107c613fc(&UNK_11068c430,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10373d454;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c(uVar4);
  func_0x000101dcbee8(param_1,param_2,param_3);
  uVar4 = uStack_58;
  func_0x0001048898b8(uStack_58,1,0x10373d6d8,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar3);
  return uVar4;
}



/* Entry: 10373b9ec; end: 10373ba0b;  */

void FUN_10373b9ec(void)

{
  FUN_10373a688();
  return;
}



/* Entry: 10373ba0c; end: 10373ba6f;  */

void FUN_10373ba0c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10373d708;
  plVar3[0x14] = lVar1;
  plVar3[0x15] = lVar2;
  plVar3[0x13] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373abbc,0,0);
  return;
}



/* Entry: 10373ba70; end: 10373ba9b;  */

void FUN_10373ba70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10373ba9c; end: 10373baa3;  */

undefined8 FUN_10373ba9c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_10373c958(uVar2,lVar1);
    func_0x000107c61574(lVar1);
  }
  return uVar2;
}



/* Entry: 10373baa4; end: 10373bacb;  */

void FUN_10373baa4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10373bacc; end: 10373bae3;  */

void FUN_10373bacc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010373aac0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10373bae4; end: 10373baeb;  */

void FUN_10373bae4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  
  FUN_103740674(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000d224c(auStack_48);
  func_0x0001000a8868(auStack_48,uStack_30);
  FUN_10373a094(param_1);
  func_0x0001000834e4(auStack_48);
  return;
}



/* Entry: 10373baec; end: 10373bb5f;  */

void FUN_10373baec(byte *param_1)

{
  byte bVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uVar2;
  
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c614f0();
  bVar1 = (byte)uVar2;
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0x18))();
  func_0x000107c615e8(uStack_40);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 10373bb60; end: 10373bbb7;  */

void FUN_10373bb60(char *param_1)

{
  if (*param_1 != '\x01') {
    func_0x00010373d2ec();
    func_0x000107c613f8(&UNK_11068c4c8,param_1,0,0);
    *param_1 = '\x02';
    func_0x000107c61654();
  }
  return;
}



/* Entry: 10373bbb8; end: 10373bcab;  */

undefined8 FUN_10373bbb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  uVar2 = 0x10373c7f4;
  (**(code **)(lStack_38 + 0x28))(0x10373c7f4,0,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  func_0x0001000d224c(&uStack_48);
  func_0x000102162a2c(unaff_x20 + 0x40,auStack_70);
  puVar3 = &UNK_11068c3b8;
  func_0x000107c613fc(&UNK_11068c3b8,0x38,7);
  func_0x000100d5bf58(auStack_70,puVar3 + 0x10);
  uVar1 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_10373d360,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar3);
  return uVar1;
}



/* Entry: 10373bcac; end: 10373bdbb;  */

undefined8 FUN_10373bcac(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(auStack_68);
  puVar1 = auStack_68;
  func_0x0001000a8868(puVar1,uStack_50);
  uVar2 = uStack_50;
  func_0x000103a6e964(uStack_50,uStack_48,puVar1);
  func_0x0001000834e4(auStack_68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000d224c(auStack_68);
  puVar3 = &UNK_11068bf58;
  func_0x000107c613fc(&UNK_11068bf58,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_11068c318;
  func_0x000107c613fc(&UNK_11068c318,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  func_0x000107c6157c(uVar5);
  uVar5 = auStack_68[0];
  func_0x0001048898b8(auStack_68[0],1,FUN_10373d2d4,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(auStack_68[0]);
  func_0x000107c61574(puVar4);
  return uVar5;
}



/* Entry: 10373bdbc; end: 10373be0f;  */

void FUN_10373bdbc(undefined1 *param_1)

{
  func_0x000107c49b28();
  if (((ulong)param_1 & 1) != 0) {
    func_0x00010373d2ec();
    func_0x000107c613f8(&UNK_11068c4c8,param_1,0,0);
    *param_1 = 0;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 10373be10; end: 10373bf1b;  */

undefined8 FUN_10373be10(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112f8f170,&UNK_10dc06fa0);
  puVar1 = &UNK_11068c3e0;
  func_0x000107c613fc(&UNK_11068c3e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61434(param_1);
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



/* Entry: 10373bf1c; end: 10373bfbf;  */

void FUN_10373bf1c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10373bf6c;
  plVar1[10] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037407a0,0,0);
  return;
}



/* Entry: 10373bfc0; end: 10373bfdf;  */

void FUN_10373bfc0(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x28);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010373bfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10373bfe0; end: 10373c01b;  */

void FUN_10373bfe0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar1 = *param_1;
    func_0x000107c61654();
    func_0x000107c614b0(uVar1);
  }
  return;
}



/* Entry: 10373c01c; end: 10373c06f;  */

void FUN_10373c01c(undefined1 *param_1)

{
  func_0x000107c49b28();
  if (((ulong)param_1 & 1) != 0) {
    func_0x00010373d2ec();
    func_0x000107c613f8(&UNK_11068c4c8,param_1,0,0);
    *param_1 = 0;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 10373c070; end: 10373c153;  */

long FUN_10373c070(long param_1,code *param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    (*param_2)();
    func_0x000107c61574(param_1);
  }
  return lVar1;
}



/* Entry: 10373c154; end: 10373c29b;  */

void FUN_10373c154(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x21;
  ulong auStack_90 [6];
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar3 = 0;
  uStack_60 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0x112f8f158;
  func_0x0001000285a8(0x112f8f158,&UNK_10dc06f88);
  func_0x000107c6147c(auStack_90,&uStack_60,uVar1,uVar2,6);
  if ((uVar3 & 1) == 0) {
    auStack_90[4] = 0;
    auStack_90[1] = 0;
    auStack_90[0] = 0;
    auStack_90[3] = 0;
    auStack_90[2] = 0;
    FUN_10373ce28(auStack_90);
    uVar1 = 0x112e1cb88;
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    func_0x00010488904c(param_1,uVar1);
  }
  else {
    func_0x000100d5bf58(auStack_90,auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
    if (unaff_x21 == 0) {
      uVar1 = 0x112e1cb88;
      func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
      auStack_90[0] = CONCAT71(auStack_90[0]._1_7_,(char)uStack_40) & 0xffffffffffffff01;
      func_0x000104888f7c(auStack_90,uVar1);
      func_0x0001000834e4(auStack_58);
    }
    else {
      func_0x0001000834e4(auStack_58);
    }
  }
  return;
}



/* Entry: 10373c29c; end: 10373c4af;  */

undefined8 FUN_10373c29c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_58;
  
  cVar3 = *(char *)(param_1 + 2);
  if (cVar3 == -1) {
    func_0x00010373d2ec();
    func_0x000107c613f8(&UNK_11068c4c8,param_1,0,0);
    *(undefined1 *)param_1 = 1;
    func_0x000107c61654();
  }
  else {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
    lVar5 = param_2 + 0x10;
    func_0x000107c61648();
    unaff_x20 = 0;
    if (lVar5 != 0) {
      func_0x000101dcbee8(uVar1,uVar2,cVar3);
      uVar6 = uVar1;
      FUN_10373c4b0(uVar1,uVar2,cVar3);
      func_0x000107c61574(lVar5);
      func_0x0001000d224c(&uStack_58);
      uVar4 = uStack_58;
      puVar7 = &UNK_11068c340;
      func_0x000107c613fc(&UNK_11068c340,0x29,7);
      *(long *)(puVar7 + 0x10) = param_2;
      *(undefined8 *)(puVar7 + 0x18) = uVar1;
      *(undefined8 *)(puVar7 + 0x20) = uVar2;
      puVar7[0x28] = cVar3;
      puVar8 = &UNK_11068c368;
      func_0x000107c613fc(&UNK_11068c368,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = 0x10373d32c;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      func_0x00010373d33c(uVar1,uVar2,cVar3);
      func_0x000107c6157c(param_2);
      uVar9 = uVar4;
      func_0x0001048898b8(uVar4,1,0x10373d6c4,puVar8,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar6);
      func_0x000107c61170(uVar4);
      func_0x000107c61574(puVar8);
      func_0x0001000d224c(&uStack_58);
      puVar7 = &UNK_11068c390;
      func_0x000107c613fc(&UNK_11068c390,0x29,7);
      *(long *)(puVar7 + 0x10) = param_2;
      *(undefined8 *)(puVar7 + 0x18) = uVar1;
      *(undefined8 *)(puVar7 + 0x20) = uVar2;
      puVar7[0x28] = cVar3;
      func_0x000107c6157c(param_2);
      unaff_x20 = uStack_58;
      func_0x00010488a3ec(uStack_58,1,0x10373d350,puVar7);
      func_0x000107c61574(uVar9);
      func_0x000107c61170(uStack_58);
      func_0x000107c61574(puVar7);
    }
  }
  return unaff_x20;
}



/* Entry: 10373c4b0; end: 10373c593;  */

undefined8 FUN_10373c4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 8))(param_1,param_2,param_3,uStack_60,lStack_58);
  uVar1 = param_1;
  func_0x00010488a2d4();
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_78);
  func_0x0001000d224c(auStack_78);
  uVar2 = auStack_78[0];
  func_0x000104889f74(auStack_78[0],1,FUN_10373c7b8,0);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(auStack_78[0]);
  return uVar2;
}



/* Entry: 10373c594; end: 10373c7b7;  */

long FUN_10373c594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001000d224c(auStack_a0);
    func_0x0001000a8868(auStack_a0,uStack_88);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    pcVar3 = *(code **)(lStack_80 + 0x28);
    func_0x000101dcbee8(param_2,param_3,param_4);
    lVar2 = lVar1;
    (*pcVar3)(lVar1,uStack_88,lStack_80);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(param_1);
    func_0x0001000834e4(auStack_a0);
  }
  return lVar2;
}



/* Entry: 10373c7b8; end: 10373c837;  */

void FUN_10373c7b8(void)

{
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  return;
}



/* Entry: 10373c838; end: 10373c8c7;  */

void FUN_10373c838(byte *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  if ((*param_1 & 1) == 0) {
    puVar2 = *(undefined1 **)(param_2 + 0x18);
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,puVar2);
    (**(code **)(lVar1 + 8))(puVar2,lVar1);
    if (((uint)puVar2 & 0xff) != 1) {
      func_0x00010373d2ec();
      func_0x000107c613f8(&UNK_11068c4c8,puVar2,0,0);
      *puVar2 = 3;
      func_0x000107c61654();
    }
  }
  return;
}



/* Entry: 10373c8c8; end: 10373c907;  */

void FUN_10373c8c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373c908,0,0);
  return;
}



/* Entry: 10373c908; end: 10373c917;  */

void FUN_10373c908(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010373c914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10373c918; end: 10373c957;  */

void FUN_10373c918(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10373d620,0,0);
  return;
}



/* Entry: 10373c958; end: 10373cd87;  */

undefined8 FUN_10373c958(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar2 = &UNK_11068c048;
  func_0x000107c613fc(&UNK_11068c048,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000107c61174();
  uVar3 = uVar6;
  func_0x000104889654(uVar6,1,FUN_10373cd88,puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  puVar2 = &UNK_11068c070;
  func_0x000107c613fc(&UNK_11068c070,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  puVar4 = &UNK_11068c098;
  func_0x000107c613fc(&UNK_11068c098,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10373cda0;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  func_0x000107c61434(uVar8);
  func_0x000107c6157c(uVar7);
  puVar1 = PTR___sytN_11034f1b0;
  uVar7 = uVar6;
  func_0x0001048898b8(uVar6,1,FUN_10373d624,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar2 = &UNK_11068bf58;
  puVar5 = puVar2;
  func_0x000107c613fc(&UNK_11068bf58,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,param_2);
  puVar4 = &UNK_11068c0c0;
  func_0x000107c613fc(&UNK_11068c0c0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10373cda8;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  uVar3 = uVar6;
  func_0x0001048898b8(uVar6,1,0x10373d638,puVar4,puVar1 + 8);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar4 = &UNK_11068c0e8;
  func_0x000107c613fc(&UNK_11068c0e8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  puVar5 = &UNK_11068c110;
  func_0x000107c613fc(&UNK_11068c110,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x10373cdc8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x000100775264(uVar6,1,FUN_10373cde0,puVar5,puVar1 + 8);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar5 = puVar2;
  func_0x000107c613fc(&UNK_11068bf58,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,param_2);
  puVar4 = &UNK_11068c138;
  func_0x000107c613fc(&UNK_11068c138,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10373ce00;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  uVar3 = uVar6;
  func_0x0001048898b8(uVar6,1,0x10373d64c,puVar4,puVar1 + 8);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  func_0x000107c613fc(&UNK_11068bf58,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_2);
  puVar4 = &UNK_11068c160;
  func_0x000107c613fc(&UNK_11068c160,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar2 = &UNK_11068c188;
  func_0x000107c613fc(&UNK_11068c188,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_10373ce20;
  *(undefined **)(puVar2 + 0x18) = puVar4;
  func_0x000107c61174(param_1);
  uVar7 = uVar6;
  func_0x0001048898b8(uVar6,1,0x10373d660,puVar2,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  func_0x000104889f74(uStack_68,0,FUN_10373c154,0);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uStack_68);
  return uVar6;
}



/* Entry: 10373cd88; end: 10373cd9f;  */

void FUN_10373cd88(void)

{
  long unaff_x20;
  
  FUN_10373bdbc(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10373cda0; end: 10373cda7;  */

undefined8 FUN_10373cda0(void)

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



/* Entry: 10373cda8; end: 10373cddf;  */

void FUN_10373cda8(void)

{
  FUN_10373c070();
  return;
}



/* Entry: 10373cde0; end: 10373cdff;  */

void FUN_10373cde0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10373ce00; end: 10373ce1f;  */

void FUN_10373ce00(void)

{
  FUN_10373c070();
  return;
}



/* Entry: 10373ce20; end: 10373ce27;  */

undefined8 FUN_10373ce20(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = uVar3;
    func_0x000107c614f0(uVar3);
    FUN_10373ce70(uVar3,lVar1,uVar2);
    func_0x000107c61574(lVar1);
  }
  return uVar3;
}



/* Entry: 10373ce28; end: 10373ce6f;  */

undefined8 FUN_10373ce28(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f8f160;
  func_0x0001000285a8(0x112f8f160,&UNK_10dc06f90);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10373ce70; end: 10373d297;  */

undefined8 FUN_10373ce70(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar2 = &UNK_11068c1b0;
  func_0x000107c613fc(&UNK_11068c1b0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar3 = uVar6;
  func_0x000104889654(uVar6,1,0x10373d60c,puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  puVar2 = &UNK_11068c1d8;
  func_0x000107c613fc(&UNK_11068c1d8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  puVar4 = &UNK_11068c200;
  func_0x000107c613fc(&UNK_11068c200,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10373d700;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  func_0x000107c61434(uVar8);
  func_0x000107c6157c(uVar7);
  puVar1 = PTR___sytN_11034f1b0;
  uVar7 = uVar6;
  func_0x0001048898b8(uVar6,1,0x10373d674,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar2 = &UNK_11068bf58;
  puVar5 = puVar2;
  func_0x000107c613fc(&UNK_11068bf58,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,param_2);
  puVar4 = &UNK_11068c228;
  func_0x000107c613fc(&UNK_11068c228,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10373d70c;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  uVar3 = uVar6;
  func_0x0001048898b8(uVar6,1,0x10373d688,puVar4,puVar1 + 8);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar4 = &UNK_11068c250;
  func_0x000107c613fc(&UNK_11068c250,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  puVar5 = &UNK_11068c278;
  func_0x000107c613fc(&UNK_11068c278,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10373d714;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  func_0x000107c615f0(param_1);
  uVar7 = uVar6;
  func_0x000100775264(uVar6,1,0x10373d6ec,puVar5,puVar1 + 8);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar5 = puVar2;
  func_0x000107c613fc(&UNK_11068bf58,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,param_2);
  puVar4 = &UNK_11068c2a0;
  func_0x000107c613fc(&UNK_11068c2a0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10373d710;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  uVar3 = uVar6;
  func_0x0001048898b8(uVar6,1,0x10373d69c,puVar4,puVar1 + 8);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  func_0x000107c613fc(&UNK_11068bf58,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_2);
  puVar4 = &UNK_11068c2c8;
  func_0x000107c613fc(&UNK_11068c2c8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar2 = &UNK_11068c2f0;
  func_0x000107c613fc(&UNK_11068c2f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10373d704;
  *(undefined **)(puVar2 + 0x18) = puVar4;
  func_0x000107c615f0(param_1);
  uVar7 = uVar6;
  func_0x0001048898b8(uVar6,1,0x10373d6b0,puVar2,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  func_0x000104889f74(uStack_68,0,FUN_10373c154,0);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uStack_68);
  return uVar6;
}



/* Entry: 10373d298; end: 10373d2d3;  */

void FUN_10373d298(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10373d2d4; end: 10373d32b;  */

void FUN_10373d2d4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10373c29c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10373d32c; end: 10373d35f;  */

long FUN_10373d32c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001000d224c(auStack_a0);
    func_0x0001000a8868(auStack_a0,uStack_88);
    lVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined8 *)(lVar4 + 0x20) = uVar1;
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    pcVar7 = *(code **)(lStack_80 + 0x28);
    func_0x000101dcbee8(uVar1,uVar5,uVar2);
    lVar6 = lVar4;
    (*pcVar7)(lVar4,uStack_88,lStack_80);
    func_0x000107c61574(lVar4);
    func_0x000107c61574(lVar3);
    func_0x0001000834e4(auStack_a0);
  }
  return lVar6;
}



/* Entry: 10373d360; end: 10373d377;  */

void FUN_10373d360(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10373c838(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 10373d378; end: 10373d3cf;  */

void FUN_10373d378(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10373d3d0;
  plVar2[2] = param_1;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x10373bf6c;
  plVar1[10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037407a0,0,0);
  return;
}



/* Entry: 10373d3d0; end: 10373d453;  */

void FUN_10373d3d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010373d408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10373d454; end: 10373d5cb;  */

undefined8 FUN_10373d454(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  cVar2 = *(char *)(unaff_x20 + 0x28);
  func_0x0001000d224c(auStack_68,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = 1;
  if (cVar2 != '\0') {
    uVar1 = 2;
  }
  (**(code **)(lStack_48 + 0x30))(uVar3,uVar4,uVar1,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return uVar3;
}



/* Entry: 10373d5cc; end: 10373d61f;  */

void FUN_10373d5cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8f178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc07024;
  func_0x000107c61520(&UNK_10dc07024,&UNK_11068c4c8);
  puRam0000000112f8f178 = puVar1;
  return;
}



/* Entry: 10373d620; end: 10373d623;  */

void FUN_10373d620(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010373c914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10373d624; end: 10373d6ff;  */

void FUN_10373d624(void)

{
  FUN_10373baa4();
  return;
}


