/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10369cab8; end: 10369caf3;  */

undefined8 FUN_10369cab8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104367234)(param_2,param_1);
  return param_2;
}



/* Entry: 10369caf4; end: 10369cb23;  */

void FUN_10369caf4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    puVar9 = &UNK_11067bc48;
    func_0x000107c613fc(&UNK_11067bc48,0x28,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar1;
    *(undefined8 *)(puVar9 + 0x18) = uVar4;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    uStack_88 = 0x10369cd0c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11067bc60;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar6);
    puVar9 = puStack_80;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar6);
  }
  else if ((param_1 == 0) || (param_2 != 0)) {
    puVar9 = &UNK_11067bc98;
    func_0x000107c613fc(&UNK_11067bc98,0x28,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar1;
    *(undefined8 *)(puVar9 + 0x18) = uVar4;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    uStack_88 = 0x10369cb20;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11067bcb0;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar6);
    puVar9 = puStack_80;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(lVar5);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x0001000d224c(&puStack_a8);
    if (puStack_a8 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puStack_a8;
      func_0x000107c5d7b0();
      func_0x000107c61180();
      func_0x000107c615e8(puStack_a8);
    }
    puVar7 = puVar9;
    FUN_10369cb58();
    FUN_10369c0b0();
    puVar8 = &UNK_11067bce8;
    func_0x000107c613fc(&UNK_11067bce8,0x29,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar1;
    *(undefined8 *)(puVar8 + 0x18) = uVar4;
    *(undefined8 *)(puVar8 + 0x20) = uVar2;
    puVar8[0x28] = (char)puVar7;
    uStack_88 = 0x10369ccc0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11067bd00;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4(ppuVar6);
    puVar8 = puStack_80;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(puVar8);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(lVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 10369cb24; end: 10369cb57;  */

void FUN_10369cb24(void)

{
  long unaff_x20;
  
  if ((*(byte *)(*(long *)(unaff_x20 + 0x10) + 0x10) & 1) == 0) {
    (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x20),0);
  }
  return;
}



/* Entry: 10369cb58; end: 10369cc87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10369cb58(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long alStack_58 [3];
  ulong uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(alStack_58);
  if (alStack_58[0] != 0) {
    lVar2 = alStack_58[0];
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(alStack_58[0]);
    alStack_58[0] = lVar2;
    func_0x000107c4f598();
    func_0x000107c61170(lVar2);
    if (alStack_58[0] < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10369cc84);
      (*pcVar1)();
    }
    if (0x7fffffff < alStack_58[0]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10369cc88);
      (*pcVar1)();
    }
  }
  if ((param_1 == 0) || ((*(byte *)(param_1 + _DAT_113036ae0) & 1) == 0)) {
    uVar4 = 5;
  }
  else {
    uVar4 = 0;
  }
  if (alStack_58[0] == 1) {
    uVar4 = 3;
  }
  else if (alStack_58[0] == 3) {
    uVar4 = 1;
  }
  else if (alStack_58[0] == 7) {
    func_0x0001000d224c(alStack_58,uVar4);
    func_0x0001000a8868(alStack_58,uStack_40);
    uVar3 = uStack_40;
    (**(code **)(lStack_38 + 0xb8))(uStack_40,lStack_38);
    func_0x0001000834e4(alStack_58);
    if ((uVar3 & 1) == 0) {
      uVar4 = 2;
    }
  }
  return uVar4;
}



/* Entry: 10369cc88; end: 10369ccf3;  */

void FUN_10369cc88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10369ccf4; end: 10369cd0f;  */

void FUN_10369ccf4(long param_1,long param_2)

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



/* Entry: 10369cd10; end: 10369cd63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369cd10(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112f85818) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10369cd64; end: 10369cdd7; -[_TtC31LensPlusPaywallPresentationImpl24LensPlusPaywallPresenter dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369cd64(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112f85818);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c4218c(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10369cdd8; end: 10369cf0b; -[_TtC31LensPlusPaywallPresentationImpl24LensPlusPaywallPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010369ce14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010369ce34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010369ce54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010369ce74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010369ceb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010369cedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010369cebc) */
/* WARNING: Removing unreachable block (ram,0x00010369ce78) */
/* WARNING: Removing unreachable block (ram,0x00010369ce58) */
/* WARNING: Removing unreachable block (ram,0x00010369ce38) */
/* WARNING: Removing unreachable block (ram,0x00010369ce18) */
/* WARNING: Removing unreachable block (ram,0x00010369cee0) */
/* WARNING: Removing unreachable block (ram,0x000101237350) */
/* WARNING: Removing unreachable block (ram,0x00010123735c) */
/* WARNING: Removing unreachable block (ram,0x000101237354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369cdd8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f857c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f857d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f857d8));
  return;
}



/* Entry: 10369cf0c; end: 10369d11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369cf0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_158 [24];
  ulong uStack_140;
  long lStack_138;
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [112];
  
  func_0x0001000d224c(auStack_158);
  lVar1 = lStack_138;
  uVar2 = uStack_140;
  func_0x0001000a8868(auStack_158,uStack_140);
  (**(code **)(lVar1 + 8))(auStack_c0,param_1,param_2,uVar2,lVar1);
  func_0x0001000834e4(auStack_158);
  func_0x0001000d224c(auStack_158);
  func_0x0001000a8868(auStack_158,uStack_140);
  uVar2 = uStack_140;
  (**(code **)(lStack_138 + 0x98))(uStack_140,lStack_138);
  func_0x0001000834e4(auStack_158);
  if ((uVar2 & 1) == 0) {
    FUN_10369da68(param_1,0,0,auStack_c0,0,0,0);
    FUN_10369e92c(auStack_c0);
  }
  else {
    FUN_10369d644();
    lVar1 = _DAT_112f85840;
    *(undefined1 *)(unaff_x20 + _DAT_112f85840) = 1;
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f85838);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    *puVar3 = 0;
    puVar3[1] = 0;
    func_0x000101237350(uVar5,uVar6);
    func_0x0001000d224c(auStack_e8);
    puVar3 = auStack_e8;
    func_0x0001000a8868(puVar3,uStack_d0);
    puVar4 = &UNK_11067bd38;
    func_0x000107c613fc(&UNK_11067bd38,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar6 = *puVar3;
    uVar5 = param_1;
    func_0x000107c61174(param_1);
    FUN_10369cab8(auStack_c0,auStack_158);
    FUN_10369c5ac(uVar6,puVar4,0,0,param_1,0,0,auStack_c0,0);
    FUN_10369e92c(auStack_c0);
    func_0x000107c61170(uVar5);
    FUN_10369e92c(auStack_c0);
    func_0x000107c61574(puVar4);
    func_0x0001000834e4(auStack_e8);
    if ((*(byte *)(unaff_x20 + lVar1) & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f85830);
      *(undefined8 *)(unaff_x20 + _DAT_112f85830) = uVar6;
      uVar6 = uVar5;
    }
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 10369d120; end: 10369d18b; -[_TtC31LensPlusPaywallPresentationImpl24LensPlusPaywallPresenter presentPaywallForLens:at:] */

/* WARNING: Possible PIC construction at 0x00010369d16c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010369d170) */

void FUN_10369d120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10369cf0c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10369d18c; end: 10369d1a3; -[_TtC31LensPlusPaywallPresentationImpl24LensPlusPaywallPresenter presentPaywallForLens:at:onDismiss:] */

void FUN_10369d18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11067be00;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_11067be00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10369d1a4(param_3,param_4,0x10369e968,puVar1,0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10369d1a4; end: 10369d3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369d1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_168 [24];
  ulong uStack_150;
  long lStack_148;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  undefined1 auStack_d0 [112];
  
  func_0x0001000d224c(auStack_168);
  lVar1 = lStack_148;
  uVar2 = uStack_150;
  func_0x0001000a8868(auStack_168,uStack_150);
  (**(code **)(lVar1 + 8))(auStack_d0,param_1,param_2,uVar2,lVar1);
  func_0x0001000834e4(auStack_168);
  func_0x0001000d224c(auStack_168);
  func_0x0001000a8868(auStack_168,uStack_150);
  uVar2 = uStack_150;
  (**(code **)(lStack_148 + 0x98))(uStack_150,lStack_148);
  func_0x0001000834e4(auStack_168);
  if ((uVar2 & 1) == 0) {
    FUN_10369da68(param_1,0,0,auStack_d0,param_5 & 1,param_3,param_4);
    FUN_10369e92c(auStack_d0);
  }
  else {
    FUN_10369d644();
    lVar1 = _DAT_112f85840;
    *(undefined1 *)(unaff_x20 + _DAT_112f85840) = 1;
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f85838);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    *puVar3 = param_3;
    puVar3[1] = param_4;
    func_0x000107c6157c(param_4);
    func_0x000101237350(uVar5,uVar6);
    func_0x0001000d224c(auStack_f8);
    puVar3 = auStack_f8;
    func_0x0001000a8868(puVar3,uStack_e0);
    puVar4 = &UNK_11067bd38;
    func_0x000107c613fc(&UNK_11067bd38,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar6 = *puVar3;
    func_0x000107c6157c(param_4);
    uVar5 = param_1;
    func_0x000107c61174(param_1);
    FUN_10369cab8(auStack_d0,auStack_168);
    FUN_10369c5ac(uVar6,puVar4,param_3,param_4,param_1,0,0,auStack_d0,param_5 & 1);
    FUN_10369e92c(auStack_d0);
    func_0x000107c61574(param_4);
    func_0x000107c61170(uVar5);
    FUN_10369e92c(auStack_d0);
    func_0x000107c61574(puVar4);
    func_0x0001000834e4(auStack_f8);
    if ((*(byte *)(unaff_x20 + lVar1) & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f85830);
      *(undefined8 *)(unaff_x20 + _DAT_112f85830) = uVar6;
      uVar6 = uVar5;
    }
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 10369d3f0; end: 10369d407; -[_TtC31LensPlusPaywallPresentationImpl24LensPlusPaywallPresenter presentFullscreenPaywallForLens:at:onDismiss:] */

void FUN_10369d3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11067bdd8;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_11067bdd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10369d1a4(param_3,param_4,0x10369e918,puVar1,1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10369d408; end: 10369d4cf;  */

void FUN_10369d408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4();
  func_0x000107c613fc(param_6,0x18,7);
  *(undefined8 *)(param_6 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10369d1a4(param_3,param_4,param_7,param_6,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_6);
  return;
}



/* Entry: 10369d4d0; end: 10369d643;  */

/* WARNING: Possible PIC construction at 0x00010369d548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010369d57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010369d5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010369d620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010369d5c8) */
/* WARNING: Removing unreachable block (ram,0x00010369d630) */
/* WARNING: Removing unreachable block (ram,0x00010369d608) */
/* WARNING: Removing unreachable block (ram,0x00010369d624) */
/* WARNING: Removing unreachable block (ram,0x00010369d580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369d4d0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *unaff_x20;
  ulong *puVar6;
  
  FUN_10369d644();
  FUN_10369d6dc();
  puVar6 = *(ulong **)((long)unaff_x20 + _DAT_112f857d0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (puVar6 != (ulong *)0x0) {
    puVar5 = puVar6;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x80))();
    if ((puVar5 != (ulong *)0x0) &&
       (func_0x000107c615e8(), lVar4 = _DAT_112f85818, unaff_x20 == puVar5)) {
      puVar6 = (ulong *)0x0;
      if (*(long *)((long)unaff_x20 + _DAT_112f85818) != 0) {
        func_0x000107c4218c();
        puVar6 = *(ulong **)((long)unaff_x20 + lVar4);
      }
      *(undefined8 *)((long)unaff_x20 + lVar4) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_112f85828);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  func_0x000107c6157c(uVar3);
  (*pcVar2)(0);
  if (pcVar2 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 10369d644; end: 10369d6db;  */

/* WARNING: Possible PIC construction at 0x00010369d684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010369d6b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010369d688) */
/* WARNING: Removing unreachable block (ram,0x00010369d6a0) */
/* WARNING: Removing unreachable block (ram,0x00010369d6bc) */
/* WARNING: Removing unreachable block (ram,0x000101237350) */
/* WARNING: Removing unreachable block (ram,0x00010123735c) */
/* WARNING: Removing unreachable block (ram,0x000101237354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369d644(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112f85840) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112f85840) = 0;
    lVar1 = _DAT_112f85830;
    if (*(long *)(unaff_x20 + _DAT_112f85830) != 0) {
      *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112f85830) + 0x10) = 1;
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)();
    return;
  }
  return;
}



/* Entry: 10369d6dc; end: 10369d797;  */

/* WARNING: Possible PIC construction at 0x00010369d750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010369d754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369d6dc(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar4 = _DAT_112f85848;
  lVar5 = unaff_x20 + _DAT_112f85848;
  func_0x000107c61618();
  if (lVar5 == 0) {
    return;
  }
  func_0x000107c61604(unaff_x20 + lVar4,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f85850);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c420a8(lVar5);
  if (pcVar2 != (code *)0x0) {
    func_0x000107c6157c(uVar3);
    (*pcVar2)(0);
    if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar3);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10369d798; end: 10369d7bf; -[_TtC31LensPlusPaywallPresentationImpl24LensPlusPaywallPresenter dismissPaywall] */

void FUN_10369d798(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10369d4d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10369d7c0; end: 10369da0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369d7c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_1c8 [24];
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(auStack_1c8);
  lVar1 = lStack_1a8;
  uVar2 = uStack_1b0;
  func_0x0001000a8868(auStack_1c8,uStack_1b0);
  (**(code **)(lVar1 + 0x10))(&uStack_130,uVar2,lVar1);
  if (lStack_118 == 1) {
    func_0x0001000834e4(auStack_1c8);
  }
  else {
    uStack_b8 = uStack_128;
    uStack_c0 = uStack_130;
    uStack_b0 = uStack_120;
    lStack_a8 = lStack_118;
    uStack_78 = uStack_e8;
    uStack_80 = uStack_f0;
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    uStack_98 = uStack_108;
    uStack_a0 = uStack_110;
    uStack_88 = uStack_f8;
    uStack_90 = uStack_100;
    func_0x0001000834e4(auStack_1c8);
    func_0x0001000d224c(auStack_1c8);
    func_0x0001000a8868(auStack_1c8,uStack_1b0);
    uVar2 = uStack_1b0;
    (**(code **)(lStack_1a8 + 0x98))(uStack_1b0,lStack_1a8);
    func_0x0001000834e4(auStack_1c8);
    if ((uVar2 & 1) == 0) {
      FUN_10369da68(param_1,param_2,1,&uStack_c0,0,0,0);
      func_0x00010369e850(&uStack_130);
    }
    else {
      FUN_10369d644();
      lVar1 = _DAT_112f85840;
      *(undefined1 *)(unaff_x20 + _DAT_112f85840) = 1;
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f85838);
      uVar6 = *puVar3;
      uVar5 = puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      func_0x000101237350(uVar6,uVar5);
      func_0x0001000d224c(auStack_158);
      puVar3 = auStack_158;
      func_0x0001000a8868(puVar3,uStack_140);
      puVar4 = &UNK_11067bd38;
      func_0x000107c613fc(&UNK_11067bd38,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      uVar6 = *puVar3;
      func_0x000107c61434(param_2);
      func_0x00010369e898(&uStack_130,auStack_1c8);
      FUN_10369c5ac(uVar6,puVar4,0,0,param_1,param_2,1,&uStack_c0,0);
      func_0x00010369e850(&uStack_130);
      func_0x000107c6142c(param_2);
      func_0x00010369e850(&uStack_130);
      func_0x000107c61574(puVar4);
      func_0x0001000834e4(auStack_158);
      if ((*(byte *)(unaff_x20 + lVar1) & 1) != 0) {
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f85830);
        *(undefined8 *)(unaff_x20 + _DAT_112f85830) = uVar6;
        uVar6 = uVar5;
      }
      func_0x000107c61574(uVar6);
    }
  }
  return;
}



/* Entry: 10369da0c; end: 10369da67; -[_TtC31LensPlusPaywallPresentationImpl24LensPlusPaywallPresenter presentPreviewPaywallForPersistedLensId:] */

void FUN_10369da0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10369d7c0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10369da68; end: 10369df37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369da68(undefined8 param_1,long param_2,char param_3,long *param_4,uint param_5,
                  code *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_68;
  
  lVar17 = *(long *)(unaff_x20 + _DAT_112f857d0);
  lVar9 = lVar17;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x00010439a550();
    uVar10 = 0;
    func_0x0001043998c4();
    lVar9 = param_4[2];
    lVar14 = param_4[3];
    lVar16 = param_4[4];
    lVar3 = param_4[5];
    lVar18 = param_4[6];
    lVar8 = param_4[7];
    lVar12 = param_4[8];
    lVar4 = param_4[9];
    lVar15 = param_4[10];
    lVar5 = param_4[0xb];
    lVar2 = param_4[0xc];
    lVar6 = param_4[0xd];
    func_0x00010439c8f8(0);
    func_0x000107c610f8();
    func_0x000107c61434(lVar6);
    func_0x000107c61434(lVar14);
    func_0x000107c61434(lVar3);
    func_0x000107c61174(lVar18);
    func_0x000107c61434(lVar4);
    func_0x000107c61434(lVar5);
    func_0x00010439c2b8(lVar9,lVar14,lVar16,lVar3,lVar18,(char)lVar8,lVar12,lVar4,lVar15,lVar5,lVar2
                        ,lVar6);
    lVar16 = *param_4;
    if (*(long *)(unaff_x20 + _DAT_112f85800) != 0) {
      func_0x0001000d224c(&lStack_68);
      lVar12 = lStack_68;
      lVar15 = lStack_68;
      func_0x000107c3d1a4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar12);
      if (lVar15 != 0) {
        lVar16 = lVar15;
        func_0x000107c49820(lVar15);
        func_0x000107c61170(lVar15);
      }
    }
    if (param_3 == '\x01') {
      func_0x000107c61434(param_2);
      uVar11 = param_1;
      lVar14 = param_2;
    }
    else {
      uVar13 = param_1;
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      uVar11 = uVar13;
      func_0x000107c5faec();
      func_0x000107c61170(uVar13);
    }
    lVar15 = param_4[1];
    func_0x00010439c014(0);
    func_0x000107c610f8();
    lVar12 = lVar9;
    func_0x000107c61174();
    func_0x00010439b9d8(lVar15,0,0,lVar16,uVar11,lVar14,0x25,lVar9);
    if (((param_5 & 1) == 0) && (FUN_10369df38(), ((ulong)param_4 & 1) != 0)) {
      func_0x0001000d224c(&lStack_68);
      bVar7 = true;
      lVar9 = lStack_68;
    }
    else {
      func_0x0001000d224c(&lStack_68);
      bVar7 = false;
      lVar9 = lStack_68;
    }
    if (lVar9 == 0) {
      if (param_6 != (code *)0x0) {
        (*param_6)(0);
      }
    }
    else {
      lVar16 = *(long *)(unaff_x20 + _DAT_112f857c8);
      func_0x000107c3eda8(lVar16);
      func_0x000107c61180();
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f85828);
      uVar13 = *puVar1;
      uVar11 = puVar1[1];
      *puVar1 = param_6;
      puVar1[1] = param_7;
      func_0x000101237340();
      func_0x000101237350(uVar13,uVar11);
      func_0x000107c42c1c(lVar17);
      if (bVar7) {
        if (param_3 == '\x01') {
          param_1 = 0;
        }
        else {
          func_0x000107c61174(param_1);
        }
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f85820);
        *(undefined8 *)(unaff_x20 + _DAT_112f85820) = param_1;
        func_0x000107c61170(uVar13);
        FUN_10369e438();
      }
      func_0x000107c61170(lVar15);
      func_0x000107c615e8(lVar9);
      lVar15 = lVar16;
    }
    func_0x000107c61170(lVar15);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar12);
    return;
  }
  func_0x000107c61170();
  if (param_6 != (code *)0x0) {
    (*param_6)(0);
    return;
  }
  return;
}



/* Entry: 10369df38; end: 10369dfd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10369df38(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 8) == 5) {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    pcVar2 = *(code **)(lStack_38 + 0xa8);
    uVar1 = uStack_40;
  }
  else {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    pcVar2 = *(code **)(lStack_38 + 0xa0);
    uVar1 = uStack_40;
  }
  (*pcVar2)(uVar1,lStack_38);
  func_0x0001000834e4(auStack_58);
  return (uint)uVar1 & 1;
}



/* Entry: 10369dfd4; end: 10369e363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369dfd4(byte param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_90);
  if (puStack_90 == (undefined *)0x0) {
    if (param_2 == (code *)0x0) {
      return;
    }
    (*param_2)(0);
    return;
  }
  func_0x000107c615e8();
  puVar4 = &UNK_11067bd38;
  func_0x000107c613fc(&UNK_11067bd38,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11067bd60;
  func_0x000107c613fc(&UNK_11067bd60,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(code **)(puVar5 + 0x18) = param_2;
  *(undefined8 *)(puVar5 + 0x20) = param_3;
  pcVar6 = param_2;
  uVar14 = param_3;
  func_0x000101237340(param_2,param_3);
  FUN_1036a18e8();
  func_0x000107c6157c(puVar5);
  pcVar7 = pcVar6;
  func_0x000107c5fadc(pcVar6,uVar14);
  pcVar8 = pcVar6;
  func_0x000107c5fadc(pcVar6,uVar14);
  func_0x000107c5fadc(pcVar6,uVar14);
  func_0x000107c6142c(uVar14);
  pcStack_70 = FUN_10369e8e8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de205c;
  puStack_78 = &UNK_11067bd78;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar9);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dac4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(pcVar7);
  func_0x000107c61170(pcVar8);
  func_0x000107c61170(pcVar6);
  puVar10 = puStack_68;
  func_0x000107c61574();
  func_0x000100de9c28();
  lVar16 = ((ulong)*(uint *)(puVar10 + 0x30) + 7 & 0x1fffffff8) + 8;
  func_0x000107c613fc();
  *(undefined8 *)(puVar10 + 0x18) = 3;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  *(undefined **)(puVar10 + 0x20) = puVar4;
  func_0x000107c61174();
  puVar11 = puVar4;
  func_0x0001036a19b4();
  puVar12 = puVar11;
  lVar17 = lVar16;
  func_0x0001000d224c(&puStack_90);
  uVar2 = (uint)param_1;
  if (uVar2 < 3) {
    if (param_1 != 0) {
      if (uVar2 == 1) {
        func_0x0001036a1ce4();
      }
      else {
        func_0x0001036a1b4c();
      }
      goto LAB_10369e224;
    }
  }
  else if ((1 < uVar2 - 5) && (uVar2 == 3)) {
    func_0x0001036a1c18();
    goto LAB_10369e224;
  }
  func_0x0001036a1a80();
LAB_10369e224:
  func_0x0001000834e4(&puStack_90);
  puVar13 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c5fadc(puVar11,lVar16);
  func_0x000107c6142c(lVar16);
  func_0x000107c5fadc(puVar12,lVar17);
  func_0x000107c6142c(lVar17);
  uVar14 = 0;
  func_0x000100dfe1a0(0);
  puVar15 = puVar10;
  func_0x000107c5fc48(puVar10,uVar14);
  func_0x000107c61574(puVar10);
  func_0x000107c48d50(puVar13);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar15);
  func_0x000107c61604(unaff_x20 + _DAT_112f85848,puVar13);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f85850);
  uVar14 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000101237340(param_2);
  func_0x000101237350(uVar14,uVar3);
  func_0x0001000d224c(&puStack_90);
  puVar10 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    func_0x000107c3e2c0(puStack_90);
    func_0x000107c615e8(puVar10);
  }
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 10369e364; end: 10369e437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369e364(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c420a8(param_1,param_2,1,0);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar4 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c61604(lVar4 + _DAT_112f85848,0);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + _DAT_112f85850);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000101237350(uVar2,uVar3);
    func_0x000107c61170(param_2);
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(0);
  }
  return;
}



/* Entry: 10369e438; end: 10369e563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369e438(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112f85818;
  ppuVar3 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f85810);
  if (lVar6 != 0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_112f85818);
    if (lVar7 == 0) {
      func_0x000107c615f0(lVar6);
    }
    else {
      func_0x000107c615f0(lVar6);
      func_0x000107c4218c(lVar7);
    }
    lVar7 = lVar6;
    func_0x000107c41b80();
    func_0x000107c61180();
    puVar2 = &UNK_11067bd38;
    func_0x000107c613fc(&UNK_11067bd38,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_50 = 0x10369e910;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100c1de60;
    puStack_58 = &UNK_11067bda0;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar4 = lVar7;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar7);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar4;
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10369e564; end: 10369e6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369e564(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  puVar5 = (ulong *)(param_2 + 0x10);
  func_0x000107c61618();
  lVar3 = _DAT_112f85818;
  if (puVar5 != (ulong *)0x0) {
    uVar6 = 0;
    if (*(long *)((long)puVar5 + _DAT_112f85818) != 0) {
      func_0x000107c4218c();
      uVar6 = *(undefined8 *)((long)puVar5 + lVar3);
    }
    *(undefined8 *)((long)puVar5 + lVar3) = 0;
    func_0x000107c61170(uVar6);
    lVar3 = _DAT_112f857d0;
    puVar7 = *(ulong **)((long)puVar5 + _DAT_112f857d0);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (puVar7 != (ulong *)0x0) {
      puVar8 = puVar7;
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar7) + 0x80))();
      func_0x000107c61170(puVar7);
      if ((puVar8 != (ulong *)0x0) &&
         (func_0x000107c615e8(puVar8), lVar4 = _DAT_112f85820, puVar5 == puVar8)) {
        uVar6 = 0;
        if (*(long *)((long)puVar5 + _DAT_112f85820) != 0) {
          func_0x000107c5915c();
          uVar6 = *(undefined8 *)((long)puVar5 + lVar4);
        }
        *(undefined8 *)((long)puVar5 + lVar4) = 0;
        func_0x000107c61170(uVar6);
        uVar9 = *(undefined8 *)((long)puVar5 + lVar3);
        func_0x000107c61174(uVar9);
        uVar6 = uVar9;
        func_0x000107c4ffe8();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c615e8(uVar6);
        puVar1 = (undefined8 *)((long)puVar5 + _DAT_112f85828);
        pcVar2 = (code *)*puVar1;
        uVar6 = puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        if (pcVar2 != (code *)0x0) {
          func_0x000107c6157c(uVar6);
          (*pcVar2)(0);
          func_0x000101237350(pcVar2,uVar6);
          func_0x000107c61170(puVar5);
          func_0x000101237350(pcVar2,uVar6);
          return;
        }
      }
    }
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 10369e6d4; end: 10369e71f; -[_TtC31LensPlusPaywallPresentationImpl24LensPlusPaywallPresenter init] */

void FUN_10369e6d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusPaywallPresentationImpl.LensPlusPaywallPresenter",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10369e700);
  (*pcVar1)();
}



/* Entry: 10369e720; end: 10369e827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369e720(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_38;
  
  lVar5 = _DAT_112f85818;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f85818) != 0) {
    func_0x000107c4218c();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
  }
  *(undefined8 *)(unaff_x20 + lVar5) = 0;
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f85820);
  *(undefined8 *)(unaff_x20 + _DAT_112f85820) = 0;
  func_0x000107c61170(uVar3);
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112f857d0));
  func_0x000107c61180();
  func_0x000107c615e8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f85828);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x0001000d224c(&lStack_38);
  lVar5 = lStack_38;
  if (lStack_38 != 0) {
    lVar4 = lStack_38;
    func_0x000107c41050(lStack_38);
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    lVar5 = lVar4;
    func_0x000107c49fac(lVar4);
    func_0x000107c61170(lVar4);
  }
  if (pcVar2 != (code *)0x0) {
    func_0x000107c6157c(uVar3);
    (*pcVar2)(lVar5);
    func_0x000101237350(pcVar2,uVar3);
    func_0x000101237350(pcVar2,uVar3);
  }
  return;
}



/* Entry: 10369e828; end: 10369e8e7; -[_TtC31LensPlusPaywallPresentationImpl24LensPlusPaywallPresenter plusSubscribeDidDismiss] */

void FUN_10369e828(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10369e720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10369e8e8; end: 10369e92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369e8e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  pcVar4 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c420a8(param_1,lVar6,1,0);
  func_0x000107c61428(lVar6 + 0x10,auStack_48,0,0);
  lVar5 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c61604(lVar5 + _DAT_112f85848,0);
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_60,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    puVar1 = (undefined8 *)(lVar6 + _DAT_112f85850);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000101237350(uVar2,uVar3);
    func_0x000107c61170(lVar6);
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(0);
  }
  return;
}



/* Entry: 10369e92c; end: 10369e95f;  */

undefined8 FUN_10369e92c(undefined8 param_1)

{
  (*(code *)&DAT_1043671ec)();
  return param_1;
}



/* Entry: 10369e960; end: 10369e96b;  */

void FUN_10369e960(long param_1,long param_2)

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



/* Entry: 10369e96c; end: 10369ec13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369e96c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_80;
  ulong *puStack_78;
  ulong *puStack_68;
  
  lStack_80 = param_3;
  func_0x0001000d224c(&puStack_68);
  puVar10 = puStack_68;
  lVar11 = lStack_80;
  if (puStack_68 == (ulong *)0x0) {
LAB_10369e9ec:
    lStack_80 = 0;
    puStack_78 = (ulong *)0x0;
  }
  else {
    puVar4 = puStack_68;
    func_0x000107c3e0b8();
    func_0x000107c61180();
    func_0x000107c615e8(puVar10);
    lVar11 = lStack_80;
    if (puVar4 == (ulong *)0x0) goto LAB_10369e9ec;
    puStack_78 = puVar4;
    func_0x000107c5faec();
    lVar11 = lStack_80;
    func_0x000107c61170(puVar4);
  }
  lVar5 = param_2;
  FUN_10369ec14();
  func_0x0001000d224c(&puStack_68);
  puVar10 = puStack_68;
  puVar4 = puStack_68;
  func_0x000107c44098();
  func_0x000107c61180();
  func_0x000107c615e8();
  bVar3 = (byte)puVar10;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x80))();
  lVar1 = *(long *)((long)puVar4 + _DAT_113036378);
  lVar2 = ((long *)((long)puVar4 + _DAT_113036378))[1];
  func_0x000107c61434(lVar2);
  func_0x0001000d224c(&puStack_68);
  puVar10 = puStack_68;
  lVar12 = lVar11;
  if (puStack_68 == (ulong *)0x0) {
LAB_10369eacc:
    puVar10 = (ulong *)0x0;
    lVar11 = 0;
  }
  else {
    puVar6 = puStack_68;
    func_0x000107c5b3f0();
    func_0x000107c615e8(puVar10);
    func_0x0001008cc2b4();
    func_0x000107c61180();
    lVar12 = lVar11;
    if (puVar6 == (ulong *)0x0) goto LAB_10369eacc;
    puVar10 = puVar6;
    func_0x000107c5faec();
    lVar12 = lVar11;
    func_0x000107c61170(puVar6);
  }
  func_0x0001000d224c(&puStack_68);
  lVar14 = lVar12;
  if (puStack_68 == (ulong *)0x0) {
LAB_10369eb48:
    puVar9 = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    puVar7 = PTR_PTR_1126bd498;
    func_0x000107c61168();
    func_0x000107c4b41c(puStack_68);
    func_0x000107c3eab4();
    func_0x000107c311a8();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c615e8(puStack_68);
      lVar14 = lVar12;
      goto LAB_10369eb48;
    }
    puVar9 = puVar7;
    func_0x000107c5faec();
    lVar14 = lVar12;
    func_0x000107c615e8(puStack_68);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar8 = param_2;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar8 != 0) {
      lVar13 = lVar8;
      func_0x000107c5faec();
      func_0x000107c61170(lVar8);
      func_0x000107c61170(puVar4);
      goto LAB_10369ebb8;
    }
  }
  func_0x000107c61170(puVar4);
  lVar13 = 0;
  lVar14 = 0;
LAB_10369ebb8:
  *param_1 = lVar5;
  param_1[1] = 0x51;
  param_1[2] = (long)puStack_78;
  param_1[3] = lStack_80;
  param_1[4] = lVar13;
  param_1[5] = lVar14;
  param_1[6] = param_3;
  *(byte *)(param_1 + 7) = bVar3 & 1;
  param_1[8] = lVar1;
  param_1[9] = lVar2;
  param_1[10] = (long)puVar10;
  param_1[0xb] = lVar11;
  param_1[0xc] = (long)puVar9;
  param_1[0xd] = lVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10369ec14; end: 10369ecd3;  */

undefined8 FUN_10369ec14(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  if (uStack_38 != 0) {
    uVar1 = uStack_38;
    func_0x000107c45388();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_38);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      if (uVar2 != 0) {
        uVar1 = uVar2;
        func_0x000107c49f18();
        func_0x000107c615e8(uVar2);
        if ((uVar1 & 1) != 0) {
          return 0xd9;
        }
      }
    }
  }
  func_0x000107c5d0f0();
  if (param_1 == 0x11) {
    uVar3 = 0xb8;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  return uVar3;
}



/* Entry: 10369ecd4; end: 10369ed27;  */

void FUN_10369ecd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10369ed28; end: 10369ed77;  */

void FUN_10369ed28(undefined8 *param_1)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10369e96c(&uStack_90);
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = uStack_38;
  param_1[10] = uStack_40;
  param_1[0xd] = uStack_28;
  param_1[0xc] = uStack_30;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Entry: 10369ed78; end: 10369ed97;  */

void FUN_10369ed78(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 10369ed98; end: 10369eed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369ed98(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puStack_58;
  
  uVar7 = param_3;
  func_0x0001000d224c(&puStack_58);
  puVar4 = puStack_58;
  func_0x000107c44098();
  func_0x000107c61180();
  func_0x000107c615e8(puStack_58);
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar5 = param_2;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170();
      bVar3 = (byte)lVar5;
      goto LAB_10369ee48;
    }
  }
  bVar3 = (byte)param_2;
  lVar6 = 0;
  uVar7 = 0;
LAB_10369ee48:
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x80))();
  uVar1 = *(undefined8 *)((long)puVar4 + _DAT_113036378);
  uVar2 = ((undefined8 *)((long)puVar4 + _DAT_113036378))[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(puVar4);
  param_1[1] = 0x51;
  *param_1 = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = lVar6;
  param_1[5] = uVar7;
  param_1[6] = param_3;
  *(byte *)(param_1 + 7) = bVar3 & 1;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10369eed8; end: 10369ef1b;  */

void FUN_10369eed8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10369ef1c; end: 10369ef6b;  */

void FUN_10369ef1c(undefined8 *param_1)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10369ed98(&uStack_90);
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = uStack_38;
  param_1[10] = uStack_40;
  param_1[0xd] = uStack_28;
  param_1[0xc] = uStack_30;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Entry: 10369ef6c; end: 10369ef8b;  */

void FUN_10369ef6c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 10369ef8c; end: 10369f0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10369ef8c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puStack_68;
  
  lVar8 = param_3;
  func_0x0001000d224c(&puStack_68);
  puVar4 = puStack_68;
  func_0x000107c44098();
  func_0x000107c61180();
  func_0x000107c615e8();
  bVar3 = (byte)puStack_68;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x80))();
  lVar1 = *(long *)((long)puVar4 + _DAT_113036378);
  lVar2 = ((long *)((long)puVar4 + _DAT_113036378))[1];
  func_0x000107c61434(lVar2);
  lVar5 = param_2;
  FUN_10369f0f8();
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar6 = param_2;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar4);
      goto LAB_10369f0a4;
    }
  }
  func_0x000107c61170(puVar4);
  lVar7 = 0;
  lVar8 = 0;
LAB_10369f0a4:
  *param_1 = lVar5;
  param_1[2] = 0x4f4355;
  param_1[1] = 5;
  param_1[3] = -0x1d00000000000000;
  param_1[4] = lVar7;
  param_1[5] = lVar8;
  param_1[6] = param_3;
  *(byte *)(param_1 + 7) = bVar3 & 1;
  param_1[8] = lVar1;
  param_1[9] = lVar2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10369f0f8; end: 10369f1b7;  */

undefined8 FUN_10369f0f8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = param_1;
  (**(code **)(unaff_x20 + 0x10))();
  uVar2 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000100077018(uVar3,param_2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(param_2);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0xe8;
  }
  else {
    uVar1 = param_1;
    func_0x000107c5d0f0();
    if (uVar1 == 0x11) {
      uVar4 = 0xb8;
    }
    else {
      func_0x000107c5d0f0();
      uVar4 = 0xb8;
      if (param_1 != 0x15) {
        uVar4 = 0xd7;
      }
    }
  }
  return uVar4;
}



/* Entry: 10369f1b8; end: 10369f203;  */

void FUN_10369f1b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10369f204; end: 10369f253;  */

void FUN_10369f204(undefined8 *param_1)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10369ef8c(&uStack_90);
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = uStack_38;
  param_1[10] = uStack_40;
  param_1[0xd] = uStack_28;
  param_1[0xc] = uStack_30;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Entry: 10369f254; end: 10369f283;  */

void FUN_10369f254(undefined8 *param_1)

{
  param_1[1] = 5;
  *param_1 = 0xd7;
  param_1[3] = 0xe300000000000000;
  param_1[2] = 0x4f4355;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 10369f284; end: 10369f3ab;  */

ulong FUN_10369f284(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10369f3ac);
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
  FUN_10369f3ac(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10369f3a8);
      (*pcVar1)();
    }
    FUN_10345e77c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10369f3ac; end: 10369f42b;  */

undefined * FUN_10369f3ac(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000101e055e0();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10369f42c; end: 10369f5e7;  */

ulong FUN_10369f42c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10369f510);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10369f514);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
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
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10369fc80(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10369f5e8);
  (*pcVar2)();
}



/* Entry: 10369f5e8; end: 10369f85b;  */

undefined * FUN_10369f5e8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_68;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10369f85c);
    (*pcVar3)();
  }
  lVar4 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    puStack_68 = (undefined *)0x0;
    uVar5 = 0;
    FUN_10369fc80(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(lVar4,&puStack_68,uVar5);
    func_0x000107c61170(lVar4);
    if (puStack_68 != (undefined *)0x0) {
      puVar12 = puStack_68;
    }
  }
  puVar14 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar13 = *(undefined **)(puVar14 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar13 = puVar14;
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      puVar13 = puVar12;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (puVar13 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar12 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar14 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10369f810);
            (*pcVar3)();
          }
          puVar6 = *(undefined **)(puVar12 + (long)puVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar6 = puVar9;
          FUN_10369f42c(puVar9,puVar12,&PTR_PTR_1126b25d0,0x112d55598);
        }
        puVar1 = puVar9 + 1;
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10369f80c);
          (*pcVar3)();
        }
        puVar7 = puVar6;
        func_0x000107c4abb4();
        if ((int)puVar7 == 1) break;
LAB_10369f6b4:
        func_0x000107c61170(puVar6);
        puVar9 = puVar9 + 1;
        if (puVar1 == puVar13) goto LAB_10369f82c;
      }
      puVar7 = puVar6;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) goto LAB_10369f6b4;
      puVar8 = puVar7;
      func_0x000107c3e240();
      if ((int)puVar8 != 5) {
        func_0x000107c61170(puVar7);
        goto LAB_10369f6b4;
      }
      puVar8 = puVar7;
      func_0x000107c4e088();
      func_0x000107c61170(puVar6);
      puVar6 = puVar7;
      if ((int)puVar8 != 0x1a) goto LAB_10369f6b4;
      puVar9 = puVar10;
      func_0x000107c61550();
      if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
         (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar6 = puVar10;
          }
          func_0x000107c60480(puVar6);
        }
        puVar9 = (undefined *)0x0;
        FUN_10369f284(0,puVar6 + 1,1,puVar10);
      }
      uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar11 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_10369f284(puVar10,uVar2 + 1,1,puVar9);
        uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
      *(undefined **)(uVar11 + uVar2 * 8 + 0x20) = puVar7;
      puVar9 = puVar1;
    } while (puVar1 != puVar13);
  }
LAB_10369f82c:
  func_0x000107c6142c(puVar12);
  return puVar10;
}



/* Entry: 10369f85c; end: 10369f933;  */

undefined1  [16] FUN_10369f85c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  lVar2 = param_1;
  func_0x000107c4c9e8();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10369f930);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c4492c();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 != 0) {
    func_0x000107c4c9e8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10369f934);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c4b200();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c4b1dc();
      puVar4 = PTR___ss5Int64VN_11034ee50;
      puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                          PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
      func_0x000107c61170(lVar2);
      goto LAB_10369f918;
    }
  }
  puVar4 = (undefined *)0x0;
  puVar5 = (undefined *)0x0;
LAB_10369f918:
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Entry: 10369f934; end: 10369fc7f;  */

undefined * FUN_10369f934(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 == 8) {
    uVar3 = param_1;
    FUN_10369f5e8();
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10369fc80);
      (*pcVar2)();
    }
    uVar4 = param_1;
    func_0x000107c3f5b8();
    func_0x000107c61170(param_1);
    if ((int)uVar4 == 3) {
      if (uVar3 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar3) {
          uVar4 = uVar3;
        }
        func_0x000107c60480();
      }
      if (uVar4 == 0) {
        func_0x000107c6142c(uVar3);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar5 = uVar4 - 1;
        if (SBORROW8(uVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10369fc50);
          (*pcVar2)();
        }
        if ((uVar3 & 0xc000000000000001) == 0) {
          if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10369fc70);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10369fc74);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          param_2 = uVar3;
          FUN_10369f42c(uVar5,uVar3,&PTR_PTR_1126b25c8,0x112e2f0c8);
        }
        func_0x000107c6142c(uVar3);
        uVar3 = uVar5;
        FUN_10369f85c();
        func_0x000107c61170(uVar5);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (param_2 != 0) {
          puVar12 = (undefined *)0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c613fc();
          *(undefined8 *)(puVar12 + 0x18) = 2;
          *(undefined8 *)(puVar12 + 0x10) = 1;
          *(ulong *)(puVar12 + 0x20) = uVar3;
          *(ulong *)(puVar12 + 0x28) = param_2;
        }
      }
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (uVar3 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar4 + 0x10);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar5 = uVar4;
        if (0x7fffffffffffffff < uVar3) {
          uVar5 = uVar3;
        }
        func_0x000107c60480();
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
      if (uVar5 != 0) {
        uVar14 = 0;
        do {
          while( true ) {
            if ((uVar3 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar4 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10369fbdc);
                (*pcVar2)();
              }
              uVar6 = *(ulong *)(uVar3 + uVar14 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar14;
              FUN_10369f42c(uVar14,uVar3,&PTR_PTR_1126b25c8,0x112e2f0c8);
            }
            uVar1 = uVar14 + 1;
            if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10369fbd8);
              (*pcVar2)();
            }
            uVar7 = uVar6;
            func_0x000107c4c9e8();
            func_0x000107c61180();
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10369fc78);
              (*pcVar2)();
            }
            uVar8 = uVar7;
            func_0x000107c4492c();
            func_0x000107c61170(uVar7);
            if ((int)uVar8 != 0) break;
LAB_10369fa64:
            func_0x000107c61170(uVar6);
            uVar14 = uVar14 + 1;
            if (uVar1 == uVar5) goto LAB_10369fc20;
          }
          uVar7 = uVar6;
          func_0x000107c4c9e8();
          func_0x000107c61180();
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10369fc7c);
            (*pcVar2)();
          }
          uVar8 = uVar7;
          func_0x000107c4b200();
          func_0x000107c61180();
          func_0x000107c61170(uVar7);
          if (uVar8 == 0) goto LAB_10369fa64;
          func_0x000107c4b1dc();
          puVar9 = PTR___ss5Int64VN_11034ee50;
          puVar13 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
          func_0x000107c6057c();
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar6);
          puVar10 = puVar12;
          func_0x000107c61558();
          puVar11 = puVar12;
          if (((ulong)puVar10 & 1) == 0) {
            puVar11 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
          }
          uVar14 = *(ulong *)(puVar11 + 0x10);
          puVar12 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar14) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            func_0x0001000d182c(puVar12,uVar14 + 1,1,puVar11);
          }
          *(ulong *)(puVar12 + 0x10) = uVar14 + 1;
          *(undefined **)(puVar12 + uVar14 * 0x10 + 0x20) = puVar9;
          *(undefined **)(puVar12 + uVar14 * 0x10 + 0x28) = puVar13;
          uVar14 = uVar1;
        } while (uVar1 != uVar5);
      }
LAB_10369fc20:
      func_0x000107c6142c(uVar3);
    }
  }
  return puVar12;
}



/* Entry: 10369fc80; end: 10369fcbf;  */

void FUN_10369fc80(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10369fcc0; end: 1036a0327;  */

void FUN_10369fcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f85a88,&UNK_10dbf97c0);
  puVar1 = &UNK_11067be88;
  func_0x000107c613fc(&UNK_11067be88,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_1036a0328,puVar1);
  return;
}



/* Entry: 1036a0328; end: 1036a035b;  */

void FUN_1036a0328(void)

{
  long unaff_x20;
  
  func_0x00010369fdc4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1036a035c; end: 1036a036b;  */

undefined1  [16] FUN_1036a035c(void)

{
  return ZEXT816(0x11067beb0);
}



/* Entry: 1036a036c; end: 1036a04b7;  */

void FUN_1036a036c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = &UNK_11067bf70;
  func_0x000107c613fc(&UNK_11067bf70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112ef5500,&UNK_10db24010);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_1036a0978;
  func_0x0001000bdd8c(FUN_1036a0978,puVar1);
  uVar3 = 0x112f85428;
  func_0x0001000285a8(0x112f85428,&UNK_10dbf93d0);
  uVar4 = 0x1036a04c4;
  func_0x0001000cb480(0x1036a04c4,0,uVar3);
  func_0x0001000285a8(0x112f85430,&UNK_10dbf9480);
  func_0x000107c613fc();
  pcVar5 = FUN_1036a04d0;
  func_0x0001000bdd8c(FUN_1036a04d0,0);
  lVar6 = 0;
  func_0x00010369c58c();
  lVar7 = lVar6;
  func_0x000107c613fc();
  *(code **)(lVar7 + 0x10) = pcVar2;
  *(undefined8 *)(lVar7 + 0x18) = uVar4;
  *(code **)(lVar7 + 0x20) = pcVar5;
  *(undefined8 *)(lVar7 + 0x28) = param_4;
  *(undefined8 *)(lVar7 + 0x30) = param_5;
  param_1[3] = lVar6;
  param_1[4] = (long)&PTR_DAT_11067bb80;
  *param_1 = lVar7;
  func_0x000107c61174(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 1036a04b8; end: 1036a04cf;  */

void FUN_1036a04b8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar3 = &UNK_11067bf70;
  func_0x000107c613fc(&UNK_11067bf70,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  func_0x0001000285a8(0x112ef5500,&UNK_10db24010);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  pcVar4 = FUN_1036a0978;
  func_0x0001000bdd8c(FUN_1036a0978,puVar3);
  uVar5 = 0x112f85428;
  func_0x0001000285a8(0x112f85428,&UNK_10dbf93d0);
  uVar6 = 0x1036a04c4;
  func_0x0001000cb480(0x1036a04c4,0,uVar5);
  func_0x0001000285a8(0x112f85430,&UNK_10dbf9480);
  func_0x000107c613fc();
  pcVar7 = FUN_1036a04d0;
  func_0x0001000bdd8c(FUN_1036a04d0,0);
  lVar8 = 0;
  func_0x00010369c58c();
  lVar9 = lVar8;
  func_0x000107c613fc();
  *(code **)(lVar9 + 0x10) = pcVar4;
  *(undefined8 *)(lVar9 + 0x18) = uVar6;
  *(code **)(lVar9 + 0x20) = pcVar7;
  *(undefined8 *)(lVar9 + 0x28) = uVar1;
  *(undefined8 *)(lVar9 + 0x30) = uVar2;
  param_1[3] = lVar8;
  param_1[4] = (long)&PTR_DAT_11067bb80;
  *param_1 = lVar9;
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1036a04d0; end: 1036a04ff;  */

void FUN_1036a04d0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad370;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1036a0500; end: 1036a0557;  */

void FUN_1036a0500(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x00010369eefc();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11067be38;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1036a0558; end: 1036a055f;  */

void FUN_1036a0558(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x00010369eefc();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11067be38;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1036a0560; end: 1036a0643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a0560(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    lVar2 = 0;
    FUN_1036a1804();
    lVar3 = lVar2;
    func_0x000107c610f8();
    lVar1 = _DAT_112f85c10;
    func_0x000107c61614(lVar3 + _DAT_112f85c10,0);
    func_0x000107c61614(lVar3 + _DAT_112f85c18,0);
    func_0x000107c61614(lVar3 + _DAT_112f85c20,0);
    func_0x000107c61604(lVar3 + lVar1,param_2);
    plVar4 = &lStack_68;
    lStack_68 = lVar3;
    lStack_60 = lVar2;
    func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_2);
  }
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1036a0644; end: 1036a064b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a0644(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long *plVar5;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    lVar3 = 0;
    FUN_1036a1804();
    lVar4 = lVar3;
    func_0x000107c610f8();
    lVar1 = _DAT_112f85c10;
    func_0x000107c61614(lVar4 + _DAT_112f85c10,0);
    func_0x000107c61614(lVar4 + _DAT_112f85c18,0);
    func_0x000107c61614(lVar4 + _DAT_112f85c20,0);
    func_0x000107c61604(lVar4 + lVar1,lVar2);
    plVar5 = &lStack_68;
    lStack_68 = lVar4;
    lStack_60 = lVar3;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar2);
  }
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1036a064c; end: 1036a070f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a064c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_11306fab0;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_11306fab0,auStack_60,0,0);
    lVar1 = param_2 + lVar1;
    func_0x000107c61618();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
      goto LAB_1036a06f8;
    }
    func_0x000107c61170(param_2);
  }
  puVar2 = (undefined *)0x0;
LAB_1036a06f8:
  *param_1 = puVar2;
  return;
}



/* Entry: 1036a0710; end: 1036a0717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a0710(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_11306fab0;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_11306fab0,auStack_60,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      goto LAB_1036a06f8;
    }
    func_0x000107c61170(lVar1);
  }
  puVar3 = (undefined *)0x0;
LAB_1036a06f8:
  *param_1 = puVar3;
  return;
}



/* Entry: 1036a0718; end: 1036a0943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a0718(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  puVar2 = &UNK_11067bf48;
  func_0x000107c613fc(&UNK_11067bf48,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_9;
  func_0x0001000285a8(0x112ef5500,&UNK_10db24010);
  func_0x000107c613fc();
  func_0x000107c61174(param_9);
  pcVar3 = FUN_1036a09a8;
  func_0x0001000bdd8c(FUN_1036a09a8,puVar2);
  lVar4 = 0;
  func_0x00010369e700();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f85818) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f85820) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f85828);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112f85830) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f85838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_112f85840) = 0;
  func_0x000107c61614(lVar5 + _DAT_112f85848,0);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f85850);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112f857c8) = uStack_68;
  *(undefined8 *)(lVar5 + _DAT_112f857d0) = param_3;
  *(undefined8 *)(lVar5 + _DAT_112f857d8) = param_4;
  *(undefined8 *)(lVar5 + _DAT_112f857e0) = param_5;
  *(undefined8 *)(lVar5 + _DAT_112f857e8) = param_6;
  *(undefined8 *)(lVar5 + _DAT_112f857f0) = param_7;
  *(undefined8 *)(lVar5 + _DAT_112f857f8) = param_8;
  *(undefined8 *)(lVar5 + _DAT_112f85800) = 0;
  *(code **)(lVar5 + _DAT_112f85808) = pcVar3;
  *(undefined8 *)(lVar5 + _DAT_112f85810) = param_10;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c615f0(param_10);
  plVar6 = &lStack_78;
  func_0x000107c61154(plVar6,puVar2);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 1036a0944; end: 1036a0977;  */

void FUN_1036a0944(void)

{
  long unaff_x20;
  
  FUN_1036a0718(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1036a0978; end: 1036a09a7;  */

void FUN_1036a0978(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1036a09a8; end: 1036a09ab;  */

void FUN_1036a09a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1036a09ac; end: 1036a0a03;  */

void FUN_1036a09ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 1036a0a04; end: 1036a0a2b;  */

void FUN_1036a0a04(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c49fac();
  *param_1 = uVar1;
  return;
}



/* Entry: 1036a0a2c; end: 1036a0a87;  */

undefined8 FUN_1036a0a2c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    func_0x000100c82230();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 1036a0a88; end: 1036a0acb;  */

void FUN_1036a0a88(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036a0acc; end: 1036a0b0f;  */

void FUN_1036a0acc(void)

{
  func_0x000100952514();
  return;
}



/* Entry: 1036a0b10; end: 1036a0bff;  */

void FUN_1036a0b10(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar1 = FUN_1036a0f4c;
  func_0x0001000c0ebc(FUN_1036a0f4c,0);
  func_0x000107c6157c(uVar4);
  pcVar2 = FUN_1036a0fcc;
  func_0x00010068b194(FUN_1036a0fcc,uVar4,PTR___sSbN_11034dd40);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(uVar4);
  puVar3 = &UNK_11067c040;
  func_0x000107c613fc(&UNK_11067c040,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar4 = 0x1036a0fd4;
  puVar6 = puVar3;
  (**(code **)(*(long *)pcVar2 + 0x60))(0x1036a0fd4);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(puVar3);
  uVar5 = uVar4;
  func_0x000107c614f0(uVar4);
  (**(code **)(puVar6 + 0x18))(*(undefined8 *)(unaff_x20 + 0x28),uVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
  return;
}



/* Entry: 1036a0c00; end: 1036a0c8b;  */

void FUN_1036a0c00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e2838;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107c441bc();
  func_0x000107c61170(puVar1);
  puRam000000011380bab0 = puVar2;
  return;
}



/* Entry: 1036a0c8c; end: 1036a0c93;  */

undefined1 FUN_1036a0c8c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1036a0c94; end: 1036a0d07;  */

void FUN_1036a0c94(undefined8 param_1,long param_2)

{
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001000d224c(&lStack_40);
    if (lStack_40 != 0) {
      func_0x000107c5d530(lStack_40);
      func_0x000107c615e8(lStack_40);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1036a0d08; end: 1036a0d57;  */

void FUN_1036a0d08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036a0d58; end: 1036a0d77;  */

void FUN_1036a0d58(void)

{
  func_0x000107c61168(&PTR_PTR_112f85ba0);
  return;
}



/* Entry: 1036a0d78; end: 1036a0da7;  */

/* WARNING: Possible PIC construction at 0x0001036a0d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a0d90) */

void FUN_1036a0d78(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1036a0da8; end: 1036a0e67;  */

undefined8 * FUN_1036a0da8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1036a0e68; end: 1036a0eb3;  */

undefined8 * FUN_1036a0e68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1036a0eb4; end: 1036a0f4b;  */

int FUN_1036a0eb4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1036a0f4c; end: 1036a0fcb;  */

bool FUN_1036a0f4c(long *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = lVar3;
  func_0x000107c4e494();
  if (lRam0000000112f85c08 != -1) {
    func_0x000107c61568(0x112f85c08,FUN_1036a0c00);
  }
  if (lVar2 == lRam000000011380bab0) {
    func_0x000107c4f308(lVar3);
    bVar1 = (int)lVar3 == 6;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1036a0fcc; end: 1036a0fe3;  */

undefined8 FUN_1036a0fcc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = FUN_1036a0c8c;
  func_0x0001000c0ebc(FUN_1036a0c8c,0);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(pcVar1);
  return uVar2;
}



/* Entry: 1036a0fe4; end: 1036a15a3;  */

/* WARNING: Possible PIC construction at 0x0001036a10f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a11d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a127c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a12d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a13c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a14bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a14f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a153c) */
/* WARNING: Removing unreachable block (ram,0x0001036a152c) */
/* WARNING: Removing unreachable block (ram,0x0001036a151c) */
/* WARNING: Removing unreachable block (ram,0x0001036a14f8) */
/* WARNING: Removing unreachable block (ram,0x0001036a14c0) */
/* WARNING: Removing unreachable block (ram,0x0001036a146c) */
/* WARNING: Removing unreachable block (ram,0x0001036a1418) */
/* WARNING: Removing unreachable block (ram,0x0001036a13c4) */
/* WARNING: Removing unreachable block (ram,0x0001036a1328) */
/* WARNING: Removing unreachable block (ram,0x0001036a12d4) */
/* WARNING: Removing unreachable block (ram,0x0001036a1280) */
/* WARNING: Removing unreachable block (ram,0x0001036a1228) */
/* WARNING: Removing unreachable block (ram,0x0001036a11d4) */
/* WARNING: Removing unreachable block (ram,0x0001036a10f8) */
/* WARNING: Removing unreachable block (ram,0x0001036a157c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a0fe4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar1 = unaff_x20 + _DAT_112f85c18;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + _DAT_112f85c10;
    func_0x000107c61618();
    lVar2 = _DAT_11306fab0;
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c61428(lVar1 + _DAT_11306fab0,auStack_78,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c61174(*(undefined8 *)(lVar1 + _DAT_11306fb08));
      func_0x000107c5de64();
      func_0x000107c61180();
      if (param_1 == 0) {
        func_0x000107c61170(lVar1);
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x000107c453e4();
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c3fa94();
        func_0x000107c61180();
        func_0x000107c52b50(puVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1036a15a4; end: 1036a15f3; -[_TtC31LensPlusPaywallPresentationImpl27PlayGamesPaywallUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x0001036a15dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a15e0) */

void FUN_1036a15a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036a0fe4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036a15f4; end: 1036a16cf;  */

/* WARNING: Possible PIC construction at 0x0001036a1684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a1694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a16b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a1698) */
/* WARNING: Removing unreachable block (ram,0x0001036a16a4) */
/* WARNING: Removing unreachable block (ram,0x0001036a16ac) */
/* WARNING: Removing unreachable block (ram,0x0001036a1688) */
/* WARNING: Removing unreachable block (ram,0x0001036a16b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a15f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f85c18;
  lVar3 = unaff_x20 + _DAT_112f85c18;
  func_0x000107c61618(lVar3);
  lVar2 = _DAT_112f85c20;
  func_0x000107c61618(unaff_x20 + _DAT_112f85c20);
  func_0x000107c61604(unaff_x20 + lVar1,0);
  func_0x000107c61604(unaff_x20 + lVar2,0);
  func_0x000107c61174(lVar3);
  func_0x000107c5e37c();
  func_0x000107c5dee4(lVar3);
  func_0x000107c61180();
  func_0x000107c4ff34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1036a16d0; end: 1036a175b; -[_TtC31LensPlusPaywallPresentationImpl27PlayGamesPaywallUIContainer detachUI:] */

void FUN_1036a16d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_11067c068;
    func_0x000107c613fc(&UNK_11067c068,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_1036a1824;
  }
  func_0x000107c61174(param_1);
  FUN_1036a15f4(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036a175c; end: 1036a17bb; -[_TtC31LensPlusPaywallPresentationImpl27PlayGamesPaywallUIContainer init] */

void FUN_1036a175c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusPaywallPresentationImpl.PlayGamesPaywallUIContainer",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a1788);
  (*pcVar1)();
}



/* Entry: 1036a17bc; end: 1036a1803; -[_TtC31LensPlusPaywallPresentationImpl27PlayGamesPaywallUIContainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036a17d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a17dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a17bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f85c10);
  return;
}



/* Entry: 1036a1804; end: 1036a1823;  */

void FUN_1036a1804(void)

{
  func_0x000107c61168(&PTR_PTR_1128df910);
  return;
}



/* Entry: 1036a1824; end: 1036a182f;  */

void FUN_1036a1824(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001036a182c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1036a1830; end: 1036a18a7;  */

void FUN_1036a1830(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1036a18a8(0,param_1,param_2);
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



/* Entry: 1036a18a8; end: 1036a18e7;  */

void FUN_1036a18a8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036a18e8; end: 1036a1daf;  */

undefined1  [16] FUN_1036a18e8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffdc;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f158610);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f158530);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a19b4);
  (*pcVar1)();
}



/* Entry: 1036a1db0; end: 1036a1f63;  */

void FUN_1036a1db0(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_ef;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_bf;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  long alStack_80 [6];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar3);
  func_0x0001000c74f0(alStack_80);
  func_0x000107c61574(uVar3);
  if (alStack_80[0] != 0) {
    uVar5 = *(ulong *)(alStack_80[0] + 0x10);
    if (uVar5 != 0) {
      lVar4 = alStack_80[0] + uVar5 * 0x30 + -0x10;
      uVar6 = uVar5;
      do {
        if (*(long *)(alStack_80[0] + 0x10) < (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a1f5c);
          (*pcVar1)();
        }
        func_0x00010101bc9c(lVar4,&uStack_e0);
        uStack_ef = uStack_bf;
        uVar3 = uStack_ef;
        uStack_108 = uStack_d8;
        uStack_110 = uStack_e0;
        uStack_100 = uStack_d0;
        uStack_ef._7_1_ = (char)((ulong)uStack_bf >> 0x38);
        bVar2 = uStack_ef._7_1_ == '\0';
        uStack_ef = uVar3;
        if (bVar2) goto LAB_1036a1ee0;
        uVar6 = uVar6 - 1;
        func_0x00010101bb90(&uStack_110);
        lVar4 = lVar4 + -0x30;
      } while (uVar6 != 0);
      lVar4 = uVar5 * 0x30 + alStack_80[0] + -0x10;
      uVar6 = uVar5;
      while( true ) {
        if (*(long *)(alStack_80[0] + 0x10) < (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a1f60);
          (*pcVar1)();
        }
        func_0x00010101bc9c(lVar4,&uStack_e0);
        uStack_ef = uStack_bf;
        uVar3 = uStack_ef;
        uStack_108 = uStack_d8;
        uStack_110 = uStack_e0;
        uStack_100 = uStack_d0;
        uStack_ef._7_1_ = (char)((ulong)uStack_bf >> 0x38);
        bVar2 = uStack_ef._7_1_ == '\x01';
        uStack_ef = uVar3;
        if (bVar2) break;
        uVar6 = uVar6 - 1;
        func_0x00010101bb90(&uStack_110);
        lVar4 = lVar4 + -0x30;
        if (uVar6 == 0) {
          if (uVar5 <= *(ulong *)(alStack_80[0] + 0x10)) {
            func_0x00010101bc9c(alStack_80[0] + uVar5 * 0x30 + -0x10,param_1);
            func_0x000107c6142c(alStack_80[0]);
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a1f64);
          (*pcVar1)();
        }
      }
LAB_1036a1ee0:
      func_0x0001000834e4(&uStack_110);
      func_0x00010101bc9c(lVar4,&uStack_b0);
      func_0x000107c6142c(alStack_80[0]);
      param_1[1] = uStack_a8;
      *param_1 = uStack_b0;
      param_1[3] = CONCAT71(uStack_97,uStack_98);
      param_1[2] = uStack_a0;
      *(undefined8 *)((long)param_1 + 0x21) = uStack_8f;
      *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_90,uStack_97);
      return;
    }
    func_0x000107c6142c(alStack_80[0]);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Entry: 1036a1f64; end: 1036a1fdf;  */

void FUN_1036a1f64(undefined8 *param_1)

{
  FUN_1036a2680(param_1,0x112d55088,&UNK_10db19ca0);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}


