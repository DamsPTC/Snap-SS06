/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d3abd0; end: 102d3ac13;  */

void FUN_102d3abd0(void)

{
  long unaff_x20;
  
  func_0x000101c92590(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d3ac14; end: 102d3ac37;  */

void FUN_102d3ac14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  if (*(char *)(unaff_x20 + 0x28) == '\0') {
    func_0x000107c614f0(uVar6);
    pcVar8 = *(code **)(lVar4 + 8);
  }
  else {
    if (*(char *)(unaff_x20 + 0x28) != '\x01') {
      func_0x000107c614f0(uVar6);
      (**(code **)(lVar4 + 0x18))(uVar1,uVar2,uVar5,uVar6,lVar4);
      return;
    }
    func_0x000107c614f0();
    pcVar8 = *(code **)(lVar4 + 0x10);
  }
  (*pcVar8)(uVar1,uVar3,uVar7,uVar2,uVar5,uVar6,lVar4);
  return;
}



/* Entry: 102d3ac38; end: 102d3adb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d3ac38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar3 = &lStack_60;
  func_0x000107c613fc();
  uVar5 = param_3;
  func_0x000107c4e26c();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x0001008f63a0();
  lVar4 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f0f3b8) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112f0f3c0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar2;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_60,puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  lVar4 = 0;
  func_0x0001008f63c0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(long **)(lVar4 + 0x18) = plVar3;
  *(undefined ***)(lVar4 + 0x20) = &PTR_DAT_1105c6400;
  *(code **)(lVar4 + 0x28) = FUN_102d3a0e0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(long *)(unaff_x20 + 0x18) = lVar4;
  *(undefined ***)(unaff_x20 + 0x20) = &PTR_DAT_1105c6410;
  lVar2 = *(long *)(param_2 + _DAT_112f0f668);
  func_0x000107c615f0(lVar2);
  func_0x000107c61170(param_2);
  uVar5 = 0;
  func_0x00010045a318(0);
  lVar4 = lVar2;
  func_0x000107c61480(lVar2,uVar5);
  if (lVar4 == 0) {
    func_0x000107c615e8(lVar2);
    lVar4 = 0;
  }
  *(long *)(unaff_x20 + 0x10) = lVar4;
  return unaff_x20;
}



/* Entry: 102d3adb4; end: 102d3ae3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d3adb4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  
  lVar7 = _DAT_112f0f4a0;
  lVar10 = *(long *)(unaff_x20 + 0x10);
  if (lVar10 != 0) {
    func_0x000107c4b940(*(undefined8 *)(lVar10 + _DAT_112f0f4a0));
    puVar1 = (undefined8 *)(lVar10 + _DAT_112f0f4a8);
    uVar8 = *puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c615e8(uVar8);
    puVar1 = (undefined8 *)(lVar10 + _DAT_112f0f4b0);
    uVar8 = *puVar1;
    uVar4 = puVar1[1];
    uVar2 = puVar1[2];
    uVar5 = puVar1[3];
    uVar3 = puVar1[4];
    uVar6 = puVar1[5];
    uVar9 = puVar1[6];
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[5] = 1;
    FUN_102d3ab58(uVar8,uVar4,uVar2,uVar5,uVar3,uVar6,uVar9);
    func_0x000107c5d278(*(undefined8 *)(lVar10 + lVar7));
  }
  return 0;
}



/* Entry: 102d3ae40; end: 102d3ae6b;  */

void FUN_102d3ae40(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3ae6c; end: 102d3aebb;  */

void FUN_102d3ae6c(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x0001008f63e0(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20));
  }
  return;
}



/* Entry: 102d3aebc; end: 102d3aedb;  */

void FUN_102d3aebc(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 102d3aedc; end: 102d3aeeb;  */

void FUN_102d3aedc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3aeec; end: 102d3af5f;  */

void FUN_102d3aeec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0;
  func_0x00010045a318(0);
  func_0x000107c610f8();
  func_0x00010045a338(puVar1,uVar2);
  uVar2 = 0;
  func_0x0001001d734c(0);
  func_0x000107c610f8();
  func_0x00010045a414(puVar1,&PTR_DAT_1105c6548,uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102d3af60; end: 102d3af9b;  */

bool FUN_102d3af60(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar1 = *param_2;
  uVar5 = param_2[2];
  cVar2 = (char)param_2[3];
  if ((char)param_1[3] == '\0') {
    if (cVar2 != '\0') {
      return false;
    }
  }
  else {
    if ((char)param_1[3] != '\x01') {
      return cVar2 == '\x02' && (int)uVar3 == (int)uVar1;
    }
    if (cVar2 != '\x01') {
      return false;
    }
  }
  if (((uVar3 != uVar1) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(uVar3,param_1[1],uVar1,param_2[1],0), (uVar3 & 1) == 0)) {
    return false;
  }
  return (int)uVar4 == (int)uVar5;
}



/* Entry: 102d3af9c; end: 102d3b073;  */

bool FUN_102d3af9c(ulong param_1,long param_2,int param_3,char param_4,ulong param_5,long param_6,
                  int param_7,char param_8)

{
  if (param_4 == '\0') {
    if (param_8 != '\0') {
      return false;
    }
  }
  else {
    if (param_4 != '\x01') {
      return param_8 == '\x02' && (int)param_1 == (int)param_5;
    }
    if (param_8 != '\x01') {
      return false;
    }
  }
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return false;
  }
  return param_3 == param_7;
}



/* Entry: 102d3b074; end: 102d3b087;  */

undefined8 FUN_102d3b074(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (*(byte *)(param_1 + 3) < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,uVar1,param_1[2]);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 102d3b088; end: 102d3b14f;  */

undefined8 * FUN_102d3b088(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_102d3ab3c(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 102d3b150; end: 102d3b19b;  */

undefined8 * FUN_102d3b150(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x000101c92590(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 102d3b19c; end: 102d3b24f;  */

int FUN_102d3b19c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102d3b250; end: 102d3b2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3b250(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0f668);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d3b2ac; end: 102d3b30b; -[ContactsNavigationServices init] */

void FUN_102d3b2ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactsNavigationServices.ContactsNavigationServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d3b2d8);
  (*pcVar1)();
}



/* Entry: 102d3b30c; end: 102d3b31b; -[ContactsNavigationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3b30c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f0f668));
  return;
}



/* Entry: 102d3b31c; end: 102d3b403; -[SCCallLauncher startCallForChatIdentifier:media:chatSourceType:] */

/* WARNING: Possible PIC construction at 0x000102d3b3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b3e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3b3dc) */
/* WARNING: Removing unreachable block (ram,0x000102d3b3ec) */

void FUN_102d3b31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000104461378(0);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x00010687a9e4(param_5);
  func_0x000104460bcc(param_4,param_5,0);
  puVar1 = &UNK_1105c69c8;
  func_0x000107c613fc(&UNK_1105c69c8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  FUN_102d3b69c(param_3,FUN_102d3cc48,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102d3b404; end: 102d3b69b;  */

/* WARNING: Possible PIC construction at 0x000102d3b4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b64c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3b638) */
/* WARNING: Removing unreachable block (ram,0x000102d3b618) */
/* WARNING: Removing unreachable block (ram,0x000102d3b57c) */
/* WARNING: Removing unreachable block (ram,0x000102d3b56c) */
/* WARNING: Removing unreachable block (ram,0x000102d3b524) */
/* WARNING: Removing unreachable block (ram,0x000102d3b670) */
/* WARNING: Removing unreachable block (ram,0x000102d3b528) */
/* WARNING: Removing unreachable block (ram,0x000102d3b4e0) */
/* WARNING: Removing unreachable block (ram,0x000102d3b5a0) */
/* WARNING: Removing unreachable block (ram,0x000102d3b4fc) */
/* WARNING: Removing unreachable block (ram,0x000102d3b650) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3b404(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_1105c6950;
  func_0x000107c613fc(&UNK_1105c6950,0x38,7);
  *(long *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  lVar2 = *(long *)(param_3 + _DAT_112f0f6a0);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c615f0();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c447e4(lVar2);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102d3b69c; end: 102d3b80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3b69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0f698);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x0001011d1d1c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    uVar3 = 0;
    func_0x000104522c9c(0);
    func_0x000107c61174(param_1);
    lVar4 = lVar2;
    func_0x000107c5fc48(lVar2,uVar3);
    func_0x000107c61574(lVar2);
    uVar3 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar5 = &UNK_1105c6770;
    func_0x000107c613fc(&UNK_1105c6770,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_2;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    uStack_50 = 0x102d3c90c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1011d1310;
    puStack_58 = &UNK_1105c6788;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar5);
    func_0x000107c40698(lVar1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 102d3b810; end: 102d3b923; -[SCCallLauncher startCallForChatIdentifier:media:chatSourceType:onViewController:] */

/* WARNING: Possible PIC construction at 0x000102d3b8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3b8f0) */
/* WARNING: Removing unreachable block (ram,0x000102d3b900) */

void FUN_102d3b810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000104461378(0);
  func_0x000107c61174(param_3);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x00010687a9e4(param_5);
  func_0x000104460bcc(param_4,param_5,0);
  puVar2 = &UNK_1105c6928;
  func_0x000107c613fc(&UNK_1105c6928,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  FUN_102d3b69c(param_3,0x102d3cb48,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102d3b924; end: 102d3ba13; -[SCCallLauncher startCallForConvoId:convoMetadata:media:chatSourceType:onViewController:] */

/* WARNING: Possible PIC construction at 0x000102d3b9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b9ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3b9e0) */
/* WARNING: Removing unreachable block (ram,0x000102d3b9f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3b924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000104461378(0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x00010687a9e4(param_6);
  func_0x000104460bcc(param_5,param_6,0);
  func_0x000107c4ab3c(*(undefined8 *)(param_1 + _DAT_112f0f6a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 102d3ba14; end: 102d3bb07; -[SCCallLauncher startCallWithGroupId:media:chatSourceType:onViewController:] */

/* WARNING: Possible PIC construction at 0x000102d3bad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3bad4) */
/* WARNING: Removing unreachable block (ram,0x000102d3bae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3ba14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x00010446de8c(0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x00010446db10();
  func_0x000104461378(0);
  func_0x00010687a9e4(param_5);
  func_0x000104460bcc(param_4,param_5,0);
  func_0x000107c4ab3c(*(undefined8 *)(param_1 + _DAT_112f0f6a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102d3bb08; end: 102d3bdbb;  */

/* WARNING: Possible PIC construction at 0x000102d3bbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bd6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3bd58) */
/* WARNING: Removing unreachable block (ram,0x000102d3bd38) */
/* WARNING: Removing unreachable block (ram,0x000102d3bc94) */
/* WARNING: Removing unreachable block (ram,0x000102d3bc84) */
/* WARNING: Removing unreachable block (ram,0x000102d3bc1c) */
/* WARNING: Removing unreachable block (ram,0x000102d3bd90) */
/* WARNING: Removing unreachable block (ram,0x000102d3bc20) */
/* WARNING: Removing unreachable block (ram,0x000102d3bbd8) */
/* WARNING: Removing unreachable block (ram,0x000102d3bcc0) */
/* WARNING: Removing unreachable block (ram,0x000102d3bbf4) */
/* WARNING: Removing unreachable block (ram,0x000102d3bd70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3bb08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_1105c68b0;
  func_0x000107c613fc(&UNK_1105c68b0,0x38,7);
  *(long *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  lVar2 = *(long *)(param_3 + _DAT_112f0f6a0);
  func_0x000107c61174(param_5);
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c615f0();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c447e4(lVar2);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102d3bdbc; end: 102d3be57;  */

/* WARNING: Possible PIC construction at 0x000102d3be3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3be40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3bdbc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112f0f6a8);
  func_0x000107c5fadc(param_3,param_4);
  uVar1 = 0;
  func_0x000104461378(0);
  func_0x000104460bf0(param_5,0,uVar1);
  func_0x000107c4ab3c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d3be58; end: 102d3bfd7; -[SCCallLauncher joinCallForChatIdentifier:media:chatSourceType:onViewController:] */

/* WARNING: Possible PIC construction at 0x000102d3beb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3beb8) */

void FUN_102d3be58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_102d3c944(param_3,param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d3bfd8; end: 102d3c373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3bfd8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  puVar2 = &UNK_1105c6720;
  func_0x000107c613fc(&UNK_1105c6720,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar3 = &UNK_1105c67c0;
  func_0x000107c613fc(&UNK_1105c67c0,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(long *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  lVar10 = *(long *)(lVar1 + _DAT_112f0f6a0);
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(puVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 == 0) {
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c615f0();
    lVar4 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar5 = lVar10;
    func_0x000107c447e4();
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(lVar4);
    func_0x000107c615f0(lVar10);
    lVar4 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    if ((int)lVar5 == 0) {
      puVar7 = &UNK_1105c67e8;
      func_0x000107c613fc(&UNK_1105c67e8,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x102d3c930;
      *(undefined **)(puVar7 + 0x18) = puVar3;
      uStack_a0 = 0x102d3c93c;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      uStack_b0 = 0x102d3c594;
      puStack_a8 = &UNK_1105c6800;
      ppuVar8 = &puStack_c0;
      puStack_98 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_98;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar7);
      func_0x000107c43054(lVar10);
      func_0x000107c615e8(lVar10);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puVar2);
      func_0x000107c615e8(lVar10);
      goto LAB_102d3c328;
    }
    lVar5 = lVar10;
    func_0x000107c406ac();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000107c61428(puVar2 + 0x10,&puStack_c0,0,0);
      puVar7 = puVar2 + 0x10;
      func_0x000107c61618();
      lVar4 = lVar5;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        func_0x000107c615e8(lVar10);
        func_0x000107c61574(puVar3);
        func_0x000107c61170(lVar1);
      }
      else {
        uVar9 = *(undefined8 *)(puVar7 + _DAT_112f0f6b8);
        func_0x000107c61174(uVar9);
        puVar6 = puVar7;
        func_0x000107c61174();
        func_0x00010446bb14(param_4,param_1,param_2,lVar5,param_5,puVar7);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar6);
        uVar9 = *(undefined8 *)(puVar6 + _DAT_112f0f6b0);
        func_0x000107c61174(uVar9);
        func_0x000107c42c1c();
        func_0x000107c61574(puVar2);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(param_4);
        func_0x000107c61170(uVar9);
        func_0x000107c615e8(lVar10);
        func_0x000107c61574(puVar3);
        func_0x000107c61170(lVar1);
      }
      goto LAB_102d3c328;
    }
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(lVar10);
  }
  func_0x000107c61574(puVar3);
  lVar4 = lVar1;
LAB_102d3c328:
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102d3c374; end: 102d3c463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3c374(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f0f6b8);
    func_0x000107c61174(uVar2);
    lVar1 = param_2;
    func_0x000107c61174();
    func_0x00010446bb14(param_3,param_4,param_5,param_1,param_6,param_2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112f0f6b0));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102d3c464; end: 102d3c4e3; -[SCCallLauncher launchCallTrayForChatIdentifier:chatSourceType:onViewController:] */

/* WARNING: Possible PIC construction at 0x000102d3c4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3c4c4) */

void FUN_102d3c464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000102d3bed8(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d3c4e4; end: 102d3c5e3;  */

void FUN_102d3c4e4(long param_1,code *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    uVar3 = *(ulong *)(param_1 + 0x28);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61434(uVar3);
      (*param_2)(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 102d3c5e4; end: 102d3c667; -[SCCallLauncher startCallTrayScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102d3c620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3c63c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3c624) */
/* WARNING: Removing unreachable block (ram,0x000102d3c640) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3c5e4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d3c668; end: 102d3c7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3c668(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11307bf90);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307bf90))[1];
  uVar6 = *(undefined8 *)(param_1 + _DAT_11307bfa0);
  uVar2 = 1;
  if ((param_2 & 1) != 0) {
    uVar2 = 2;
  }
  func_0x000104461378(0);
  func_0x00010687a9e4(uVar6);
  func_0x000104460bcc(uVar2,uVar6,0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0f6a8);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c4ab3c(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f0f6b0);
  lVar4 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 102d3c7b0; end: 102d3c807; -[SCCallLauncher startCallTrayScopeStartCall:withVideo:] */

/* WARNING: Possible PIC construction at 0x000102d3c7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3c7f4) */

void FUN_102d3c7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d3c668(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d3c808; end: 102d3c867; -[SCCallLauncher init] */

void FUN_102d3c808(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCallLauncher.CallLauncherImpl",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d3c834);
  (*pcVar1)();
}



/* Entry: 102d3c868; end: 102d3c8cf; -[SCCallLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d3c884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3c8b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3c888) */
/* WARNING: Removing unreachable block (ram,0x000102d3c8b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3c868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0f698));
  return;
}



/* Entry: 102d3c8d0; end: 102d3c8ef;  */

void FUN_102d3c8d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1f78);
  return;
}



/* Entry: 102d3c8f0; end: 102d3c943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3c8f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar12 + 0x10,auStack_78,0,0);
  lVar1 = lVar12 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  puVar2 = &UNK_1105c6720;
  func_0x000107c613fc(&UNK_1105c6720,0x18,7);
  func_0x000107c61428(lVar12 + 0x10,auStack_90,0,0);
  lVar12 = lVar12 + 0x10;
  func_0x000107c61618(lVar12);
  func_0x000107c61614(puVar2 + 0x10,lVar12);
  func_0x000107c61170(lVar12);
  puVar3 = &UNK_1105c67c0;
  func_0x000107c613fc(&UNK_1105c67c0,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(long *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = uVar10;
  lVar12 = *(long *)(lVar1 + _DAT_112f0f6a0);
  func_0x000107c61434(param_2);
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar12 == 0) {
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c615f0();
    lVar5 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar6 = lVar12;
    func_0x000107c447e4();
    func_0x000107c615e8(lVar12);
    func_0x000107c61170(lVar5);
    func_0x000107c615f0(lVar12);
    lVar5 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    if ((int)lVar6 == 0) {
      puVar8 = &UNK_1105c67e8;
      func_0x000107c613fc(&UNK_1105c67e8,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = 0x102d3c930;
      *(undefined **)(puVar8 + 0x18) = puVar3;
      uStack_a0 = 0x102d3c93c;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      uStack_b0 = 0x102d3c594;
      puStack_a8 = &UNK_1105c6800;
      ppuVar9 = &puStack_c0;
      puStack_98 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar8 = puStack_98;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar8);
      func_0x000107c43054(lVar12);
      func_0x000107c615e8(lVar12);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puVar2);
      func_0x000107c615e8(lVar12);
      goto LAB_102d3c328;
    }
    lVar6 = lVar12;
    func_0x000107c406ac();
    func_0x000107c61180();
    func_0x000107c615e8(lVar12);
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      func_0x000107c61428(puVar2 + 0x10,&puStack_c0,0,0);
      puVar8 = puVar2 + 0x10;
      func_0x000107c61618();
      lVar5 = lVar6;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        func_0x000107c615e8(lVar12);
        func_0x000107c61574(puVar3);
        func_0x000107c61170(lVar1);
      }
      else {
        uVar11 = *(undefined8 *)(puVar8 + _DAT_112f0f6b8);
        func_0x000107c61174(uVar11);
        puVar7 = puVar8;
        func_0x000107c61174();
        func_0x00010446bb14(uVar4,param_1,param_2,lVar6,uVar10,puVar8);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(puVar7);
        uVar10 = *(undefined8 *)(puVar7 + _DAT_112f0f6b0);
        func_0x000107c61174(uVar10);
        func_0x000107c42c1c();
        func_0x000107c61574(puVar2);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar10);
        func_0x000107c615e8(lVar12);
        func_0x000107c61574(puVar3);
        func_0x000107c61170(lVar1);
      }
      goto LAB_102d3c328;
    }
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(lVar12);
  }
  func_0x000107c61574(puVar3);
  lVar5 = lVar1;
LAB_102d3c328:
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 102d3c944; end: 102d3cb1b;  */

/* WARNING: Possible PIC construction at 0x000102d3ca1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3caa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3cac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3caac) */
/* WARNING: Removing unreachable block (ram,0x000102d3ca20) */
/* WARNING: Removing unreachable block (ram,0x000102d3cac8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3c944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined *puVar3;
  
  puVar1 = &UNK_1105c6838;
  func_0x000107c613fc(&UNK_1105c6838,0x28,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112f0f698);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x0001011d1d1c();
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x18) = 3;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    uVar2 = 0;
    func_0x000104522c9c(0);
    func_0x000107c61174(param_1);
    func_0x000107c5fc48(puVar3,uVar2);
    puVar1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102d3cb1c; end: 102d3cb53;  */

/* WARNING: Possible PIC construction at 0x000102d3bbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3bd6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3bd58) */
/* WARNING: Removing unreachable block (ram,0x000102d3bd38) */
/* WARNING: Removing unreachable block (ram,0x000102d3bc94) */
/* WARNING: Removing unreachable block (ram,0x000102d3bc84) */
/* WARNING: Removing unreachable block (ram,0x000102d3bc1c) */
/* WARNING: Removing unreachable block (ram,0x000102d3bd90) */
/* WARNING: Removing unreachable block (ram,0x000102d3bc20) */
/* WARNING: Removing unreachable block (ram,0x000102d3bbd8) */
/* WARNING: Removing unreachable block (ram,0x000102d3bcc0) */
/* WARNING: Removing unreachable block (ram,0x000102d3bbf4) */
/* WARNING: Removing unreachable block (ram,0x000102d3bd70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3cb1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_1105c68b0;
  func_0x000107c613fc(&UNK_1105c68b0,0x38,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(undefined8 *)(puVar3 + 0x30) = uVar4;
  lVar5 = *(long *)(lVar1 + _DAT_112f0f6a0);
  func_0x000107c61174(uVar4);
  func_0x000107c61434(param_2);
  func_0x000107c61174(lVar1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c615f0();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c447e4(lVar5);
    func_0x000107c615e8(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 102d3cb54; end: 102d3cbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3cb54(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f0f6a8);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c4ab3c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d3cbc4; end: 102d3cc47;  */

void FUN_102d3cbc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d3cc48; end: 102d3cc77;  */

/* WARNING: Possible PIC construction at 0x000102d3b4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3b64c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3b638) */
/* WARNING: Removing unreachable block (ram,0x000102d3b618) */
/* WARNING: Removing unreachable block (ram,0x000102d3b57c) */
/* WARNING: Removing unreachable block (ram,0x000102d3b56c) */
/* WARNING: Removing unreachable block (ram,0x000102d3b524) */
/* WARNING: Removing unreachable block (ram,0x000102d3b670) */
/* WARNING: Removing unreachable block (ram,0x000102d3b528) */
/* WARNING: Removing unreachable block (ram,0x000102d3b4e0) */
/* WARNING: Removing unreachable block (ram,0x000102d3b5a0) */
/* WARNING: Removing unreachable block (ram,0x000102d3b4fc) */
/* WARNING: Removing unreachable block (ram,0x000102d3b650) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3cc48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_1105c6950;
  func_0x000107c613fc(&UNK_1105c6950,0x38,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(undefined8 *)(puVar3 + 0x30) = uVar4;
  lVar5 = *(long *)(lVar1 + _DAT_112f0f6a0);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  func_0x000107c61434(param_2);
  func_0x000107c61174(lVar1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c615f0();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c447e4(lVar5);
    func_0x000107c615e8(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 102d3cc78; end: 102d3cf7f;  */

undefined8
FUN_102d3cc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1105c6a40;
  func_0x000107c613fc(&UNK_1105c6a40,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x0001000285a8(0x112e5a278,&UNK_10da5f580);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_5);
  pcVar2 = FUN_102d3d088;
  func_0x0001000bdd8c(FUN_102d3d088,puVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar2);
  func_0x00010036e4a4(0);
  func_0x000107c610f8();
  func_0x000107c61174(pcVar3);
  pcVar2 = pcVar3;
  func_0x000103b45080();
  func_0x000107c42c20(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(pcVar3);
  func_0x000107c61170(pcVar2);
  return unaff_x20;
}



/* Entry: 102d3cf80; end: 102d3d087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3cf80(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  func_0x000107c40688();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c5c6dc();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_4 + _DAT_11307b960);
    lVar3 = 0;
    FUN_102d3c8d0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long *)(lVar4 + _DAT_112f0f698) = param_2;
    *(undefined8 *)(lVar4 + _DAT_112f0f6a0) = param_3;
    *(undefined8 *)(lVar4 + _DAT_112f0f6a8) = uVar6;
    *(undefined8 *)(lVar4 + _DAT_112f0f6b0) = param_5;
    *(undefined8 *)(lVar4 + _DAT_112f0f6b8) = param_6;
    puVar1 = PTR_s_init_1125d9248;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c615f0(uVar6);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61154(&lStack_60,puVar1);
    *param_1 = plVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d3d088);
  (*pcVar2)();
}



/* Entry: 102d3d088; end: 102d3d08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3d088(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_60;
  long lStack_58;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5c6dc();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar7 + _DAT_11307b960);
    lVar6 = 0;
    FUN_102d3c8d0();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(long *)(lVar7 + _DAT_112f0f698) = lVar4;
    *(undefined8 *)(lVar7 + _DAT_112f0f6a0) = uVar5;
    *(undefined8 *)(lVar7 + _DAT_112f0f6a8) = uVar10;
    *(undefined8 *)(lVar7 + _DAT_112f0f6b0) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_112f0f6b8) = uVar9;
    puVar2 = PTR_s_init_1125d9248;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c615f0(uVar10);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar9);
    func_0x000107c61154(&lStack_60,puVar2);
    *param_1 = plVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102d3d088);
  (*pcVar3)();
}



/* Entry: 102d3d08c; end: 102d3d0cf;  */

void FUN_102d3d08c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d3d0d0; end: 102d3d0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3d0d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_60;
  long lStack_58;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5c6dc();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar7 + _DAT_11307b960);
    lVar6 = 0;
    FUN_102d3c8d0();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(long *)(lVar7 + _DAT_112f0f698) = lVar4;
    *(undefined8 *)(lVar7 + _DAT_112f0f6a0) = uVar5;
    *(undefined8 *)(lVar7 + _DAT_112f0f6a8) = uVar10;
    *(undefined8 *)(lVar7 + _DAT_112f0f6b0) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_112f0f6b8) = uVar9;
    puVar2 = PTR_s_init_1125d9248;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c615f0(uVar10);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar9);
    func_0x000107c61154(&lStack_60,puVar2);
    *param_1 = plVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102d3d088);
  (*pcVar3)();
}



/* Entry: 102d3d0fc; end: 102d3d11b;  */

void FUN_102d3d0fc(void)

{
  func_0x000107c61168(&PTR_PTR_112f0f730);
  return;
}



/* Entry: 102d3d11c; end: 102d3d11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3d11c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_60;
  long lStack_58;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5c6dc();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar7 + _DAT_11307b960);
    lVar6 = 0;
    FUN_102d3c8d0();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(long *)(lVar7 + _DAT_112f0f698) = lVar4;
    *(undefined8 *)(lVar7 + _DAT_112f0f6a0) = uVar5;
    *(undefined8 *)(lVar7 + _DAT_112f0f6a8) = uVar10;
    *(undefined8 *)(lVar7 + _DAT_112f0f6b0) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_112f0f6b8) = uVar9;
    puVar2 = PTR_s_init_1125d9248;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c615f0(uVar10);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar9);
    func_0x000107c61154(&lStack_60,puVar2);
    *param_1 = plVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102d3d088);
  (*pcVar3)();
}



/* Entry: 102d3d120; end: 102d3d753;  */

/* WARNING: Possible PIC construction at 0x000102d3d224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d6e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3d6f8) */
/* WARNING: Removing unreachable block (ram,0x000102d3d6e8) */
/* WARNING: Removing unreachable block (ram,0x000102d3d6b8) */
/* WARNING: Removing unreachable block (ram,0x000102d3d6a0) */
/* WARNING: Removing unreachable block (ram,0x000102d3d680) */
/* WARNING: Removing unreachable block (ram,0x000102d3d670) */
/* WARNING: Removing unreachable block (ram,0x000102d3d544) */
/* WARNING: Removing unreachable block (ram,0x000102d3d6d8) */
/* WARNING: Removing unreachable block (ram,0x000102d3d5ac) */
/* WARNING: Removing unreachable block (ram,0x000102d3d4ac) */
/* WARNING: Removing unreachable block (ram,0x000102d3d3e4) */
/* WARNING: Removing unreachable block (ram,0x000102d3d3d4) */
/* WARNING: Removing unreachable block (ram,0x000102d3d260) */
/* WARNING: Removing unreachable block (ram,0x000102d3d268) */
/* WARNING: Removing unreachable block (ram,0x000102d3d2ac) */
/* WARNING: Removing unreachable block (ram,0x000102d3d2b0) */
/* WARNING: Removing unreachable block (ram,0x000102d3d274) */
/* WARNING: Removing unreachable block (ram,0x000102d3d2bc) */
/* WARNING: Removing unreachable block (ram,0x000102d3d27c) */
/* WARNING: Removing unreachable block (ram,0x000102d3d72c) */
/* WARNING: Removing unreachable block (ram,0x000102d3d284) */
/* WARNING: Removing unreachable block (ram,0x000102d3d73c) */
/* WARNING: Removing unreachable block (ram,0x000102d3d28c) */
/* WARNING: Removing unreachable block (ram,0x000102d3d294) */
/* WARNING: Removing unreachable block (ram,0x000102d3d2c0) */
/* WARNING: Removing unreachable block (ram,0x000102d3d228) */
/* WARNING: Removing unreachable block (ram,0x000102d3d29c) */
/* WARNING: Removing unreachable block (ram,0x000102d3d2e4) */
/* WARNING: Removing unreachable block (ram,0x000102d3d3f0) */
/* WARNING: Removing unreachable block (ram,0x000102d3d3f8) */
/* WARNING: Removing unreachable block (ram,0x000102d3d304) */
/* WARNING: Removing unreachable block (ram,0x000102d3d32c) */
/* WARNING: Removing unreachable block (ram,0x000102d3d344) */
/* WARNING: Removing unreachable block (ram,0x000102d3d22c) */
/* WARNING: Removing unreachable block (ram,0x000102d3d748) */

void FUN_102d3d120(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_102d3e0b0(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  FUN_102d3db2c(param_1,param_2);
  lVar1 = param_1;
  func_0x000106e0c1a0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    param_1 = lVar1;
    func_0x00010011df08();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      uVar2 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar2);
    }
    func_0x000107c61174();
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4e928();
      func_0x000107c61180();
      param_1 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d3d754; end: 102d3d7f3; -[_TtC25TalkScreenshotSendingImpl20TalkScreenshotSender sendWithBase64Screenshot:to:metadata:] */

/* WARNING: Possible PIC construction at 0x000102d3d7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3d7dc) */

void FUN_102d3d754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_1);
  FUN_102d3d120(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d3d7f4; end: 102d3dacf;  */

/* WARNING: Possible PIC construction at 0x000102d3d8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3daa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3da98) */
/* WARNING: Removing unreachable block (ram,0x000102d3da88) */
/* WARNING: Removing unreachable block (ram,0x000102d3da68) */
/* WARNING: Removing unreachable block (ram,0x000102d3da4c) */
/* WARNING: Removing unreachable block (ram,0x000102d3da14) */
/* WARNING: Removing unreachable block (ram,0x000102d3d9f8) */
/* WARNING: Removing unreachable block (ram,0x000102d3d9d0) */
/* WARNING: Removing unreachable block (ram,0x000102d3d984) */
/* WARNING: Removing unreachable block (ram,0x000102d3d998) */
/* WARNING: Removing unreachable block (ram,0x000102d3d9b0) */
/* WARNING: Removing unreachable block (ram,0x000102d3d964) */
/* WARNING: Removing unreachable block (ram,0x000102d3d944) */
/* WARNING: Removing unreachable block (ram,0x000102d3d924) */
/* WARNING: Removing unreachable block (ram,0x000102d3d8b8) */
/* WARNING: Removing unreachable block (ram,0x000102d3daa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3d7f4(undefined *param_1,code *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != (undefined *)0x0) {
    FUN_102d3e40c(0,0x112d4e810,&PTR_PTR_1126b0cd8);
    lVar2 = *(long *)(param_4 + 0x10);
    uVar1 = *(undefined8 *)(param_4 + 0x18);
    func_0x000107c61434(uVar1);
    func_0x000107c61174(param_1);
    func_0x000103c1912c(lVar2,uVar1);
    if (lVar2 == 0) {
      (*param_2)();
    }
    else {
      func_0x000108605f20(param_1,lVar2);
      func_0x000107c61180();
      param_1 = *(undefined **)(param_5 + _DAT_112f956a8);
      if (param_1 == (undefined *)0x0) {
        param_1 = PTR_PTR_1126b1a40;
        func_0x000107c610f8(PTR_PTR_1126b1a40);
        func_0x000107c453e4();
        func_0x000107c5e7ec();
        func_0x000107c61180();
      }
      else {
        func_0x000107c61174();
        FUN_102d3e7a4();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  (*param_2)();
  return;
}



/* Entry: 102d3dad0; end: 102d3db2b;  */

void FUN_102d3dad0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3db2c; end: 102d3df2b;  */

/* WARNING: Possible PIC construction at 0x000102d3dbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3dc34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3ded8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3dee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3dfcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3df10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3dcf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3deec) */
/* WARNING: Removing unreachable block (ram,0x000102d3dedc) */
/* WARNING: Removing unreachable block (ram,0x000102d3dc38) */
/* WARNING: Removing unreachable block (ram,0x000102d3dc40) */
/* WARNING: Removing unreachable block (ram,0x000102d3dd70) */
/* WARNING: Removing unreachable block (ram,0x000102d3dc98) */
/* WARNING: Removing unreachable block (ram,0x000102d3dd7c) */
/* WARNING: Removing unreachable block (ram,0x000102d3dcb4) */
/* WARNING: Removing unreachable block (ram,0x000102d3dd8c) */
/* WARNING: Removing unreachable block (ram,0x000102d3dd90) */
/* WARNING: Removing unreachable block (ram,0x000102d3de3c) */
/* WARNING: Removing unreachable block (ram,0x000102d3df14) */
/* WARNING: Removing unreachable block (ram,0x000102d3dda0) */
/* WARNING: Removing unreachable block (ram,0x000102d3de54) */
/* WARNING: Removing unreachable block (ram,0x000102d3de04) */
/* WARNING: Removing unreachable block (ram,0x000102d3de60) */
/* WARNING: Removing unreachable block (ram,0x000102d3de20) */
/* WARNING: Removing unreachable block (ram,0x000102d3de70) */
/* WARNING: Removing unreachable block (ram,0x000102d3de74) */
/* WARNING: Removing unreachable block (ram,0x000102d3df00) */
/* WARNING: Removing unreachable block (ram,0x000102d3de8c) */
/* WARNING: Removing unreachable block (ram,0x000102d3dbd0) */
/* WARNING: Removing unreachable block (ram,0x000102d3dcd0) */
/* WARNING: Removing unreachable block (ram,0x000102d3dbd4) */
/* WARNING: Removing unreachable block (ram,0x000102d3dbe8) */
/* WARNING: Removing unreachable block (ram,0x000102d3dce0) */
/* WARNING: Removing unreachable block (ram,0x000102d3dce8) */
/* WARNING: Removing unreachable block (ram,0x000102d3dc08) */
/* WARNING: Removing unreachable block (ram,0x000102d3dfd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3db2c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_2;
  func_0x000107c5ee08(param_1,param_2,0);
  func_0x000107c6142c(param_2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0f840);
  *puVar1 = param_1;
  puVar1[1] = uVar4;
  if (uVar4 >> 0x3c < 0xf) {
    func_0x00010006c00c(param_1,uVar4);
    func_0x000107c5ee20(param_1,uVar4);
    func_0x000107c60990();
  }
  else {
    *(undefined8 *)(unaff_x20 + _DAT_112f0f848) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112f0f850) = 0;
    FUN_102d3e0b0();
    puVar2 = &stack0xfffffffffffffef8;
    func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
      return;
    }
    func_0x000107c60e78();
    func_0x000107c60bc4();
    if (param_4 == 0) {
      return;
    }
    uVar4 = *(ulong *)((long)(puVar2 + _DAT_112f0f840) + 8);
    if (uVar4 >> 0x3c < 0xf) {
      param_1 = *(undefined8 *)(puVar2 + _DAT_112f0f840);
      func_0x000107c61174(puVar2);
      func_0x000107c60bc4(param_4);
      func_0x000107c5ee20(param_1,uVar4);
    }
    else {
      func_0x000107c61174(puVar2);
      func_0x000107c60bc4(param_4);
      param_1 = 0;
    }
    (**(code **)(param_4 + 0x10))(param_4,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d3df2c; end: 102d3dff3; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider prepareDataToUploadForMediaId:completionHandler:] */

/* WARNING: Possible PIC construction at 0x000102d3dfcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3dfd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3df2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 != 0) {
    uVar1 = ((undefined8 *)(param_1 + _DAT_112f0f840))[1];
    if (uVar1 >> 0x3c < 0xf) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112f0f840);
      func_0x000107c61174(param_1);
      func_0x000107c60bc4(param_4);
      func_0x000107c5ee20(uVar2,uVar1);
    }
    else {
      func_0x000107c61174(param_1);
      func_0x000107c60bc4(param_4);
      uVar2 = 0;
    }
    (**(code **)(param_4 + 0x10))(param_4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102d3dff4; end: 102d3dffb; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider mediaContentType] */

undefined8 FUN_102d3dff4(void)

{
  return 0;
}



/* Entry: 102d3dffc; end: 102d3e00b; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d3dffc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0f848);
}



/* Entry: 102d3e00c; end: 102d3e01b; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d3e00c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0f850);
}



/* Entry: 102d3e01c; end: 102d3e023; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider isZipped] */

undefined8 FUN_102d3e01c(void)

{
  return 0;
}



/* Entry: 102d3e024; end: 102d3e02b; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider duration] */

undefined8 FUN_102d3e024(void)

{
  return 0;
}



/* Entry: 102d3e02c; end: 102d3e033; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider isInfiniteDuration] */

undefined8 FUN_102d3e02c(void)

{
  return 0;
}



/* Entry: 102d3e034; end: 102d3e03b; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider isRotationLocked] */

undefined8 FUN_102d3e034(void)

{
  return 0;
}



/* Entry: 102d3e03c; end: 102d3e09b; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider init] */

void FUN_102d3e03c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TalkScreenshotSendingImpl.ScreenshotMediaContentProvider",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d3e068);
  (*pcVar1)();
}



/* Entry: 102d3e09c; end: 102d3e0af; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3e09c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112f0f840);
  uVar1 = ((ulong *)(param_1 + _DAT_112f0f840))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102d3e0b0; end: 102d3e0cf;  */

void FUN_102d3e0b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a2058);
  return;
}



/* Entry: 102d3e0d0; end: 102d3e0df;  */

/* WARNING: Possible PIC construction at 0x000102d3e1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3e370) */
/* WARNING: Removing unreachable block (ram,0x000102d3e2a0) */
/* WARNING: Removing unreachable block (ram,0x000102d3e278) */
/* WARNING: Removing unreachable block (ram,0x000102d3e268) */
/* WARNING: Removing unreachable block (ram,0x000102d3e1e0) */
/* WARNING: Removing unreachable block (ram,0x000102d3e38c) */

void FUN_102d3e0d0(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x20);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c41214();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        func_0x000107c5ee30();
        param_1 = lVar1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102d3e0e0; end: 102d3e157;  */

void FUN_102d3e0e0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102d3e40c(0,param_1,param_2);
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



/* Entry: 102d3e158; end: 102d3e15b;  */

void FUN_102d3e158(void)

{
  return;
}



/* Entry: 102d3e15c; end: 102d3e3df;  */

/* WARNING: Possible PIC construction at 0x000102d3e1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3e370) */
/* WARNING: Removing unreachable block (ram,0x000102d3e2a0) */
/* WARNING: Removing unreachable block (ram,0x000102d3e278) */
/* WARNING: Removing unreachable block (ram,0x000102d3e268) */
/* WARNING: Removing unreachable block (ram,0x000102d3e1e0) */
/* WARNING: Removing unreachable block (ram,0x000102d3e38c) */

void FUN_102d3e15c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c41214();
      func_0x000107c61180();
      if (param_3 == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        func_0x000107c5ee30();
        param_1 = param_3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102d3e3e0; end: 102d3e40b;  */

/* WARNING: Possible PIC construction at 0x000102d3d8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3d9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3da94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3daa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3da98) */
/* WARNING: Removing unreachable block (ram,0x000102d3da88) */
/* WARNING: Removing unreachable block (ram,0x000102d3da68) */
/* WARNING: Removing unreachable block (ram,0x000102d3da4c) */
/* WARNING: Removing unreachable block (ram,0x000102d3da14) */
/* WARNING: Removing unreachable block (ram,0x000102d3d9f8) */
/* WARNING: Removing unreachable block (ram,0x000102d3d9d0) */
/* WARNING: Removing unreachable block (ram,0x000102d3d984) */
/* WARNING: Removing unreachable block (ram,0x000102d3d998) */
/* WARNING: Removing unreachable block (ram,0x000102d3d9b0) */
/* WARNING: Removing unreachable block (ram,0x000102d3d964) */
/* WARNING: Removing unreachable block (ram,0x000102d3d944) */
/* WARNING: Removing unreachable block (ram,0x000102d3d924) */
/* WARNING: Removing unreachable block (ram,0x000102d3d8b8) */
/* WARNING: Removing unreachable block (ram,0x000102d3daa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3e3e0(undefined *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if (param_1 != (undefined *)0x0) {
    FUN_102d3e40c(0,0x112d4e810,&PTR_PTR_1126b0cd8);
    lVar5 = *(long *)(lVar2 + 0x10);
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    func_0x000107c61434(uVar3);
    func_0x000107c61174(param_1);
    func_0x000103c1912c(lVar5,uVar3);
    if (lVar5 == 0) {
      (*pcVar1)();
    }
    else {
      func_0x000108605f20(param_1,lVar5);
      func_0x000107c61180();
      param_1 = *(undefined **)(lVar4 + _DAT_112f956a8);
      if (param_1 == (undefined *)0x0) {
        param_1 = PTR_PTR_1126b1a40;
        func_0x000107c610f8(PTR_PTR_1126b1a40);
        func_0x000107c453e4();
        func_0x000107c5e7ec();
        func_0x000107c61180();
      }
      else {
        func_0x000107c61174();
        FUN_102d3e7a4();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  (*pcVar1)(0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18),lVar2,lVar4,*(undefined8 *)(unaff_x20 + 0x30)
           );
  return;
}



/* Entry: 102d3e40c; end: 102d3e44b;  */

void FUN_102d3e40c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d3e44c; end: 102d3e45f;  */

void FUN_102d3e44c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105c6c10;
  if (lRam0000000112f0f880 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f0f880 = param_1;
  }
  return;
}



/* Entry: 102d3e460; end: 102d3e4e3;  */

void FUN_102d3e460(long param_1,long *param_2,long param_3)

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



/* Entry: 102d3e4e4; end: 102d3e4eb;  */

void FUN_102d3e4e4(long param_1,long param_2)

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



/* Entry: 102d3e4ec; end: 102d3e4ef; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider chatKey] */

void FUN_102d3e4ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102d3e4f0; end: 102d3e4f3; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider chatIV] */

void FUN_102d3e4f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102d3e4f4; end: 102d3e4f7; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider snapAttachmentUrl] */

void FUN_102d3e4f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102d3e4f8; end: 102d3e4fb; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider venueId] */

void FUN_102d3e4f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102d3e4fc; end: 102d3e4ff; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider snapMetadata] */

void FUN_102d3e4fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102d3e500; end: 102d3e503; -[_TtC25TalkScreenshotSendingImplP33_376B9A576537C9D3767670D3D1A1041830ScreenshotMediaContentProvider mediaOrigins] */

void FUN_102d3e500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102d3e504; end: 102d3e677;  */

void FUN_102d3e504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 102d3e678; end: 102d3e6a3;  */

/* WARNING: Possible PIC construction at 0x000102d3e684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3e694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3e688) */
/* WARNING: Removing unreachable block (ram,0x000102d3e698) */

void FUN_102d3e678(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102d3e6a4; end: 102d3e6ff;  */

void FUN_102d3e6a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3e700; end: 102d3e77f;  */

void FUN_102d3e700(undefined8 param_1)

{
  if (lRam0000000112f0f8b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72abf0);
  return;
}



/* Entry: 102d3e780; end: 102d3e7a3;  */

void FUN_102d3e780(undefined8 *param_1,undefined8 param_2)

{
  func_0x000102d3e5a0();
  *param_1 = param_2;
  return;
}



/* Entry: 102d3e7a4; end: 102d3ecb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d3e7a4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126c4328;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f956e0);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112f956e0))[1]);
  puVar3 = puVar2;
  func_0x000107c5e650(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c5e67c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e674(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  if (((undefined8 *)(unaff_x20 + _DAT_112f956f8))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f956f8);
    func_0x000107c5fadc(uVar4);
  }
  puVar3 = puVar2;
  func_0x000107c5e668(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c5e66c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  if (((undefined8 *)(unaff_x20 + _DAT_112f95708))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f95708);
    func_0x000107c5fadc(uVar4);
  }
  puVar3 = puVar2;
  func_0x000107c5e81c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c5e550(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e554(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  if (((undefined8 *)(unaff_x20 + _DAT_112f95720))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f95720);
    func_0x000107c5fadc(uVar4);
  }
  puVar3 = puVar2;
  func_0x000107c5e63c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c5e654(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e658(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  if (((undefined8 *)(unaff_x20 + _DAT_112f95738))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f95738);
    func_0x000107c5fadc(uVar4);
  }
  puVar3 = puVar2;
  func_0x000107c5e664(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_112f95740))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f95740);
    func_0x000107c5fadc(uVar4);
  }
  puVar3 = puVar2;
  func_0x000107c5e744(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_112f95748))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f95748);
    func_0x000107c5fadc(uVar4);
  }
  puVar3 = puVar2;
  func_0x000107c5e740(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_112f95750))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f95750);
    func_0x000107c5fadc(uVar4);
  }
  puVar3 = puVar2;
  func_0x000107c5e420(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_112f95758))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f95758);
    func_0x000107c5fadc(uVar4);
  }
  puVar3 = puVar2;
  func_0x000107c5e678(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5e604();
  func_0x000107c61180();
  func_0x000107c61170();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f956d8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f956d8))[1];
  func_0x00010273c938();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar5 = puVar2;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  *(undefined **)(puVar3 + 0x20) = puVar5;
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c5fadc(uVar4,lVar1);
  }
  puVar5 = PTR_PTR_1126ac318;
  func_0x000107c610f8(PTR_PTR_1126ac318);
  uVar6 = 0;
  FUN_102d3ecb8(0);
  puVar7 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c473f8(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar7);
  return puVar5;
}



/* Entry: 102d3ecb8; end: 102d3ecfb;  */

void FUN_102d3ecb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d9648;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ebb2d8 = puVar1;
  return;
}



/* Entry: 102d3ecfc; end: 102d3edab;  */

void FUN_102d3ecfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010032fcbc();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102d3eeac(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d3edac; end: 102d3edb7;  */

void FUN_102d3edac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010032fcbc();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102d3eeac(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d3edb8; end: 102d3ee27;  */

undefined8 FUN_102d3edb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102d3eeac(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102d3ee28; end: 102d3ee5b;  */

void FUN_102d3ee28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3ee5c; end: 102d3eeab;  */

undefined8 FUN_102d3ee5c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d3eeac; end: 102d3f053;  */

void FUN_102d3eeac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126ac320;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef854e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102d3f054; end: 102d3f087;  */

undefined1  [16] FUN_102d3f054(void)

{
  return ZEXT816(0x1105c6d10);
}



/* Entry: 102d3f088; end: 102d3f0af;  */

void FUN_102d3f088(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d3f0b0; end: 102d3f0b7;  */

undefined8 FUN_102d3f0b0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d3f0b8; end: 102d3f13f;  */

void FUN_102d3f0b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x000100331ab8();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102d3f224(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d3f140; end: 102d3f147;  */

void FUN_102d3f140(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  func_0x000100331ab8();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102d3f224(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d3f148; end: 102d3f1a7;  */

undefined8 FUN_102d3f148(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102d3f224(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}


