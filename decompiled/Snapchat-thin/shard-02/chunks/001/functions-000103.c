/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101974334; end: 1019744cb;  */

void FUN_101974334(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_c0;
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c44174();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar5 = &UNK_11041b810;
      func_0x000107c613fc(&UNK_11041b810,0x20,7);
      *(code **)(puVar5 + 0x10) = pcVar1;
      *(undefined8 *)(puVar5 + 0x18) = uVar3;
      puVar6 = &UNK_11041b838;
      func_0x000107c613fc(&UNK_11041b838,0x28,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar2;
      *(code **)(puVar6 + 0x18) = pcVar1;
      *(undefined8 *)(puVar6 + 0x20) = uVar3;
      puVar7 = PTR_PTR_1126ba510;
      func_0x000107c610f8(PTR_PTR_1126ba510);
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_1019744cc;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1011e1384;
      puStack_78 = &UNK_11041b850;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar5;
      func_0x000107c60bc4(ppuVar8);
      uStack_a0 = 0x1019744ec;
      puStack_c0 = puVar4;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1011adf84;
      puStack_a8 = &UNK_11041b878;
      puStack_98 = puVar6;
      func_0x000107c60bc4(&puStack_c0);
      func_0x000107c61580(uVar3,2);
      func_0x000107c48b60(puVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puStack_98);
      func_0x000107c61574(puStack_68);
      func_0x000107c431d4(param_1);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(param_1);
      return;
    }
  }
  (*pcVar1)(0);
  return;
}



/* Entry: 1019744cc; end: 10197450f;  */

void FUN_1019744cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101974510; end: 10197453b;  */

void FUN_101974510(long param_1,long param_2)

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



/* Entry: 10197453c; end: 10197457f;  */

void FUN_10197453c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101974580; end: 1019745fb; -[_TtC44VoiceNoteTranscriptionServicesImplementation43VoiceNoteTranscriptionServiceImplementation languageCodeFor:] */

void FUN_101974580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_2;
  FUN_10197486c(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1019745fc; end: 101974793;  */

void FUN_1019745fc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  func_0x000107c5e020();
  func_0x000107c61180();
  uVar3 = uVar2;
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c5fe10();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  FUN_101974794();
  func_0x000107c6142c(uVar3);
  if (puVar4 != (undefined *)0x0) {
    if (uVar2 == 0x6c6c61 && puVar4 == (undefined *)0xe300000000000000) {
      func_0x000107c615e8(uVar1);
      func_0x000107c6142c(puVar4);
      return;
    }
    func_0x000107c605b8(uVar2,puVar4,0x6c6c61,0xe300000000000000,0);
    func_0x000107c6142c(puVar4);
    if ((uVar2 & 1) != 0) {
      func_0x000107c615e8(uVar1);
      return;
    }
  }
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    func_0x000107c615e8(uVar1);
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5e020(uVar1);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5fe10();
    func_0x000107c61170(uVar2);
    FUN_10197486c(param_1,param_2);
    func_0x0001000f66f0();
    func_0x000107c6142c(param_2);
    func_0x000107c615e8(uVar1);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 101974794; end: 10197480b;  */

undefined1  [16] FUN_101974794(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_1 + 0x38;
  func_0x000107c60268(lVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
  if (lVar1 == 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) {
    lVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)*(uint *)(param_1 + 0x24);
    FUN_1019749b0();
    func_0x000107c61434(uVar2);
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 10197480c; end: 10197486b; -[_TtC44VoiceNoteTranscriptionServicesImplementation43VoiceNoteTranscriptionServiceImplementation isTranscriptionSupportedFor:] */

uint FUN_10197480c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_1019745fc(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 10197486c; end: 1019749af;  */

undefined1  [16] FUN_10197486c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  puVar4 = &uStack_60;
  uVar5 = 0;
  puVar6 = &uStack_60;
  uStack_60 = 0x2d;
  uStack_58 = 0xe100000000000000;
  uVar2 = param_1;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000100e8b654();
  func_0x000107c6022c(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar2,uVar2);
  if ((uVar3 & 1) == 0) {
    uStack_60 = 0x5f;
    uStack_58 = 0xe100000000000000;
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x000107c6022c(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar2,uVar2);
    if ((uVar5 & 1) == 0) {
      func_0x000107c61434(param_2);
      goto LAB_10197498c;
    }
    uStack_60 = 0x5f;
    uStack_58 = 0xe100000000000000;
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x000107c601dc(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar2,uVar2);
    if (*(long *)((long)puVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019749b0);
      (*pcVar1)();
    }
  }
  else {
    uStack_60 = 0x2d;
    uStack_58 = 0xe100000000000000;
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x000107c601dc(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar2,uVar2);
    puVar6 = puVar4;
    if (*(long *)((long)puVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101974900);
      (*pcVar1)();
    }
  }
  param_1 = *(undefined8 *)((long)puVar6 + 0x20);
  param_2 = *(undefined8 *)((long)puVar6 + 0x28);
  func_0x000107c61434(param_2);
  func_0x000107c6142c(puVar6);
LAB_10197498c:
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 1019749b0; end: 1019749fb;  */

undefined1  [16] FUN_1019749b0(ulong param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019749f4);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x38) >> (param_1 & 0x3f) & 1) != 0
     ) {
    if (*(int *)(param_4 + 0x24) == param_2) {
      return *(undefined1 (*) [16])(*(long *)(param_4 + 0x30) + param_1 * 0x10);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019749fc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019749f8);
  (*pcVar1)();
}



/* Entry: 1019749fc; end: 101974a57;  */

void FUN_1019749fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101974a58; end: 101974b1f;  */

void FUN_101974a58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_40 = FUN_101974b64;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101974b6c;
  puStack_48 = &UNK_11041b940;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x00010022cd78(0);
  func_0x000107c610f8();
  func_0x000103e43814(puVar1);
  return;
}



/* Entry: 101974b20; end: 101974b63;  */

void FUN_101974b20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x000101974560();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  return;
}



/* Entry: 101974b64; end: 101974b6b;  */

void FUN_101974b64(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x000101974560();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  return;
}



/* Entry: 101974b6c; end: 101974ba3;  */

void FUN_101974b6c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101974ba4; end: 101974bc7;  */

void FUN_101974ba4(long param_1,long param_2)

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



/* Entry: 101974bc8; end: 101974c67;  */

void FUN_101974bc8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101974c68; end: 101974d43;  */

void FUN_101974c68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_50 = 0x101974d4c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101974b6c;
  puStack_58 = &UNK_11041b968;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x00010022cd78(0);
  func_0x000107c610f8();
  func_0x000103e43814(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 101974d44; end: 101974d4f;  */

void FUN_101974d44(long param_1,long param_2)

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



/* Entry: 101974d50; end: 101974db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101974d50(long param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  if (param_1 == 0) {
    func_0x000107c61464();
  }
  else {
    *(long *)(unaff_x20 + _DAT_112ddbaa0) = param_1;
    func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  }
  return;
}



/* Entry: 101974db8; end: 101974e5f;  */

/* WARNING: Possible PIC construction at 0x000101974e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101974e44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101974db8(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c56664();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ddbaa0);
  func_0x000107c5fadc(0xd00000000000004c,0x800000010efc3b80);
  func_0x0001044db3fc(0);
  func_0x0001044dac34();
  func_0x000107c5027c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101974e60; end: 101974e87; -[_TtC22SCMessagingCrashLogger22SCMessagingCrashLogger reportChatGroupContructorMissingUserName] */

void FUN_101974e60(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101974db8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101974e88; end: 101974f87;  */

/* WARNING: Possible PIC construction at 0x000101974f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101974f64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101974e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c56664();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ddbaa0);
  func_0x000107c602fc(0x30);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fadc(0xd00000000000002e,0x800000010efc3bd0);
  func_0x000107c6142c(0x800000010efc3bd0);
  func_0x0001044db3fc(0);
  func_0x0001044dac34();
  func_0x000107c5027c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101974f88; end: 10197508b; -[_TtC22SCMessagingCrashLogger22SCMessagingCrashLogger reportLastInteractionTimestampMissingRecipientWithMessage:] */

void FUN_101974f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101974e88(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10197508c; end: 1019750b3; -[_TtC22SCMessagingCrashLogger22SCMessagingCrashLogger reportConversationResolverMissingUserId] */

void FUN_10197508c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101974fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019750b4; end: 10197515b;  */

/* WARNING: Possible PIC construction at 0x00010197513c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101975140) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019750b4(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c56664();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ddbaa0);
  func_0x000107c5fadc(0xd000000000000025,0x800000010efc3c30);
  func_0x0001044db3fc(0);
  func_0x0001044dac34();
  func_0x000107c5027c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10197515c; end: 101975183; -[_TtC22SCMessagingCrashLogger22SCMessagingCrashLogger reportConversationResolverMissingGroupId] */

void FUN_10197515c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1019750b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101975184; end: 1019751b7;  */

void FUN_101975184(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019751b8; end: 1019751c7; -[_TtC22SCMessagingCrashLogger22SCMessagingCrashLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019751b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ddbaa0));
  return;
}



/* Entry: 1019751c8; end: 101975207;  */

void FUN_1019751c8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee420);
  return;
}



/* Entry: 101975208; end: 101975217;  */

void FUN_101975208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101975218; end: 101975273;  */

void FUN_101975218(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  func_0x000100914f28(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a8000;
  func_0x000107c610f8();
  func_0x000107c46cec();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 101975274; end: 10197527f; -[_TtC38HomeScreenWidgetServicesImplementation23HomeScreenWidgetUpdater reloadSnapcodeWidget] */

void FUN_101975274(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)0x0;
  func_0x000107c5f9c4();
  func_0x000107c5f9c0();
  puVar4 = puVar3;
  (*(code *)&UNK_102ab88a4)();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5f9b8(uVar1,uVar2);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101975280; end: 10197528b; -[_TtC38HomeScreenWidgetServicesImplementation23HomeScreenWidgetUpdater reloadCameraWidget] */

void FUN_101975280(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  iVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)0x0;
    func_0x000107c5f9c4();
    func_0x000107c5f9c0();
    puVar5 = puVar4;
    (*(code *)&UNK_102ab88b0)();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5f9b8(uVar1,uVar2);
    func_0x000107c61574(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  return;
}



/* Entry: 10197528c; end: 101975297; -[_TtC38HomeScreenWidgetServicesImplementation23HomeScreenWidgetUpdater reloadPinMyFriendWidget] */

void FUN_10197528c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  iVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)0x0;
    func_0x000107c5f9c4();
    func_0x000107c5f9c0();
    puVar5 = puVar4;
    (*(code *)&UNK_102ab88bc)();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5f9b8(uVar1,uVar2);
    func_0x000107c61574(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  return;
}



/* Entry: 101975298; end: 1019752a3; -[_TtC38HomeScreenWidgetServicesImplementation23HomeScreenWidgetUpdater reloadBirthdayWidget] */

void FUN_101975298(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  iVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)0x0;
    func_0x000107c5f9c4();
    func_0x000107c5f9c0();
    puVar5 = puVar4;
    (*(code *)&UNK_102ab88c8)();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5f9b8(uVar1,uVar2);
    func_0x000107c61574(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  return;
}



/* Entry: 1019752a4; end: 10197532b;  */

void FUN_1019752a4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  iVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)0x0;
    func_0x000107c5f9c4();
    func_0x000107c5f9c0();
    puVar5 = puVar4;
    (*param_3)();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5f9b8(uVar1,uVar2);
    func_0x000107c61574(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  return;
}



/* Entry: 10197532c; end: 101975337; -[_TtC38HomeScreenWidgetServicesImplementation23HomeScreenWidgetUpdater reloadMemoriesWidget] */

void FUN_10197532c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)0x0;
  func_0x000107c5f9c4();
  func_0x000107c5f9c0();
  puVar4 = puVar3;
  (*(code *)&UNK_102ab88d4)();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5f9b8(uVar1,uVar2);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101975338; end: 101975343; -[_TtC38HomeScreenWidgetServicesImplementation23HomeScreenWidgetUpdater reloadFriendLocationWidget] */

void FUN_101975338(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)0x0;
  func_0x000107c5f9c4();
  func_0x000107c5f9c0();
  puVar4 = puVar3;
  (*(code *)&SUB_102ab88e0)();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5f9b8(uVar1,uVar2);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101975344; end: 1019753a3;  */

void FUN_101975344(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)0x0;
  func_0x000107c5f9c4();
  func_0x000107c5f9c0();
  puVar4 = puVar3;
  (*param_3)();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5f9b8(uVar1,uVar2);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1019753a4; end: 1019755b7;  */

void FUN_1019753a4(long param_1,char param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  code *apcStack_90 [3];
  long lStack_78;
  code *pcStack_70;
  long lStack_68;
  
  if (param_2 == '\x01') {
    iVar1 = 2;
    lStack_68 = param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&lStack_68,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    (*param_3)(0);
  }
  else {
    lVar3 = 0;
    apcStack_90[1] = (code *)param_4;
    apcStack_90[2] = param_3;
    func_0x000107c5f9b4();
    lVar11 = *(long *)(lVar3 + -8);
    lVar8 = *(long *)(lVar11 + 0x40);
    apcStack_90[0] = (code *)apcStack_90;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar9 = (long)apcStack_90 - (lVar8 + 0xfU & 0xfffffffffffffff0);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
      lStack_78 = *(long *)(lVar11 + 0x48);
      pcStack_70 = *(code **)(lVar11 + 0x10);
      do {
        (*pcStack_70)(lVar9,param_1,lVar3);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        plVar10 = (long *)(lVar9 - (lVar8 + 0xfU & 0xfffffffffffffff0));
        plVar4 = plVar10;
        lVar6 = lVar9;
        (**(code **)(lVar11 + 0x20))(plVar10,lVar9,lVar3);
        func_0x000107c5f9ac();
        plVar5 = plVar4;
        func_0x000102ab88e0();
        if (plVar4 == (long *)*plVar5 && lVar6 == plVar5[1]) {
          func_0x000107c6142c(lVar6);
LAB_101975570:
          (*apcStack_90[2])(1);
          (**(code **)(lVar11 + 8))(plVar10,lVar3);
          return;
        }
        func_0x000107c605b8(plVar4,lVar6,(long *)*plVar5,plVar5[1],0);
        func_0x000107c6142c(lVar6);
        if (((ulong)plVar4 & 1) != 0) goto LAB_101975570;
        (**(code **)(lVar11 + 8))(plVar10,lVar3);
        param_1 = param_1 + lStack_78;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    (*apcStack_90[2])(0);
  }
  return;
}



/* Entry: 1019755b8; end: 101975663; -[_TtC38HomeScreenWidgetServicesImplementation23HomeScreenWidgetUpdater getIsFriendLocationWidgetInstalledWithCompletion:] */

/* WARNING: Possible PIC construction at 0x000101975644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101975648) */

void FUN_1019755b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11041bb60;
  func_0x000107c613fc(&UNK_11041bb60,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  uVar2 = 0;
  func_0x000107c5f9c4(0);
  func_0x000107c5f9c0();
  puVar3 = &UNK_11041bb88;
  func_0x000107c613fc(&UNK_11041bb88,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101975694;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  func_0x000107c5f9bc(0x1019756a8,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101975664; end: 101975693;  */

void FUN_101975664(void)

{
  func_0x000100914f28();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101975694; end: 1019756af;  */

void FUN_101975694(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001019756a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1019756b0; end: 1019756fb;  */

undefined8 FUN_1019756b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001003e8a40(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1019756fc; end: 10197572f;  */

void FUN_1019756fc(void)

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



/* Entry: 101975730; end: 10197577f;  */

undefined8 FUN_101975730(void)

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



/* Entry: 101975780; end: 1019757c3;  */

undefined1  [16] FUN_101975780(void)

{
  return ZEXT816(0x11041bc90);
}



/* Entry: 1019757c4; end: 1019757eb;  */

void FUN_1019757c4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019757ec; end: 1019757f3;  */

undefined8 FUN_1019757ec(void)

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



/* Entry: 1019757f4; end: 101975e67;  */

void FUN_1019757f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  puVar1 = PTR_PTR_1126a8010;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc3ce0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc3d00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  *(undefined **)(unaff_x20 + 0x70) = puVar3;
  return;
}



/* Entry: 101975e68; end: 101975f03;  */

void FUN_101975e68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101975f04; end: 101975f53;  */

undefined8 FUN_101975f04(void)

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



/* Entry: 101975f54; end: 101975f97;  */

undefined1  [16] FUN_101975f54(void)

{
  return ZEXT816(0x11041bd58);
}



/* Entry: 101975f98; end: 101975fbf;  */

void FUN_101975f98(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101975fc0; end: 101975fc7;  */

undefined8 FUN_101975fc0(void)

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



/* Entry: 101975fc8; end: 101976b37;  */

void FUN_101975fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_22;
  puVar1 = PTR_PTR_1126a8018;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_22);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc31c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1d160);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2b120);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc3d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef20520);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_16);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_17);
  func_0x000107c61174();
  uVar2 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc3d70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_20);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_21);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_22);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3da0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_22);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c615e8(param_22);
  *(undefined **)(unaff_x20 + 0xc0) = puVar3;
  return;
}



/* Entry: 101976b38; end: 101976c23;  */

void FUN_101976b38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 101976c24; end: 101976c73;  */

undefined8 FUN_101976c24(void)

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



/* Entry: 101976c74; end: 101976cb7;  */

undefined1  [16] FUN_101976c74(void)

{
  return ZEXT816(0x11041be20);
}



/* Entry: 101976cb8; end: 101976cdf;  */

void FUN_101976cb8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101976ce0; end: 101976ce7;  */

undefined8 FUN_101976ce0(void)

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



/* Entry: 101976ce8; end: 101976d3b;  */

undefined8 FUN_101976ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001003e5cf0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101976d3c; end: 101976d77;  */

void FUN_101976d3c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101976d78; end: 101976dc7;  */

undefined8 FUN_101976d78(void)

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



/* Entry: 101976dc8; end: 101976e0b;  */

undefined1  [16] FUN_101976dc8(void)

{
  return ZEXT816(0x11041bee8);
}



/* Entry: 101976e0c; end: 101976e33;  */

void FUN_101976e0c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101976e34; end: 101976e3b;  */

undefined8 FUN_101976e34(void)

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



/* Entry: 101976e3c; end: 1019773a7;  */

void FUN_101976e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  puVar1 = PTR_PTR_1126a8028;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc3ce0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef32c60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3dc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  *(undefined **)(unaff_x20 + 0x60) = puVar3;
  return;
}



/* Entry: 1019773a8; end: 101977433;  */

void FUN_1019773a8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101977434; end: 101977483;  */

undefined8 FUN_101977434(void)

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



/* Entry: 101977484; end: 1019774c7;  */

undefined1  [16] FUN_101977484(void)

{
  return ZEXT816(0x11041bfb0);
}



/* Entry: 1019774c8; end: 1019774ef;  */

void FUN_1019774c8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019774f0; end: 1019774f7;  */

undefined8 FUN_1019774f0(void)

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



/* Entry: 1019774f8; end: 10197755b;  */

undefined8
FUN_1019774f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10197755c(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 10197755c; end: 1019777bb;  */

void FUN_10197755c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a8030;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 1019777bc; end: 1019777ff;  */

void FUN_1019777bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101977800; end: 10197784f;  */

undefined8 FUN_101977800(void)

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



/* Entry: 101977850; end: 101977893;  */

undefined1  [16] FUN_101977850(void)

{
  return ZEXT816(0x11041c078);
}



/* Entry: 101977894; end: 1019778bb;  */

void FUN_101977894(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019778bc; end: 1019778c3;  */

undefined8 FUN_1019778bc(void)

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



/* Entry: 1019778c4; end: 10197790f;  */

undefined8 FUN_1019778c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100647e8c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101977910; end: 101977943;  */

void FUN_101977910(void)

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



/* Entry: 101977944; end: 101977993;  */

undefined8 FUN_101977944(void)

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



/* Entry: 101977994; end: 1019779d7;  */

undefined1  [16] FUN_101977994(void)

{
  return ZEXT816(0x11041c140);
}



/* Entry: 1019779d8; end: 1019779ff;  */

void FUN_1019779d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101977a00; end: 101977a07;  */

undefined8 FUN_101977a00(void)

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



/* Entry: 101977a08; end: 101977a43;  */

undefined8 FUN_101977a08(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100640510(param_1);
  return unaff_x20;
}



/* Entry: 101977a44; end: 101977a6f;  */

void FUN_101977a44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101977a70; end: 101977abf;  */

undefined8 FUN_101977a70(void)

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



/* Entry: 101977ac0; end: 101977b03;  */

undefined1  [16] FUN_101977ac0(void)

{
  return ZEXT816(0x11041c1e0);
}



/* Entry: 101977b04; end: 101977b2b;  */

void FUN_101977b04(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101977b2c; end: 101977b33;  */

undefined8 FUN_101977b2c(void)

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



/* Entry: 101977b34; end: 101977b6f;  */

undefined8 FUN_101977b34(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010064900c(param_1);
  return unaff_x20;
}



/* Entry: 101977b70; end: 101977b9b;  */

void FUN_101977b70(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101977b9c; end: 101977beb;  */

undefined8 FUN_101977b9c(void)

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



/* Entry: 101977bec; end: 101977c2f;  */

undefined1  [16] FUN_101977bec(void)

{
  return ZEXT816(0x11041c280);
}



/* Entry: 101977c30; end: 101977c57;  */

void FUN_101977c30(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101977c58; end: 101977c5f;  */

undefined8 FUN_101977c58(void)

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



/* Entry: 101977c60; end: 101977cc3;  */

undefined8
FUN_101977c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101977cc4(param_1,param_2,param_3,param_4);
  return unaff_x20;
}


