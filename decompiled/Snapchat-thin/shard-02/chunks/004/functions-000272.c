/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ca07a8; end: 101ca07cb;  */

undefined8 FUN_101ca07a8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101ca07cc; end: 101ca0803;  */

void FUN_101ca07cc(long param_1,long param_2)

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



/* Entry: 101ca0804; end: 101ca085f;  */

long FUN_101ca0804(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    FUN_101ca0860();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar1;
    func_0x000107c61174();
    FUN_101ca0fac(uVar3);
  }
  func_0x000101ca0fbc(lVar2);
  return lVar1;
}



/* Entry: 101ca0860; end: 101ca09a3;  */

/* WARNING: Removing unreachable block (ram,0x000101ca0948) */

long FUN_101ca0860(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fadc(uVar7);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar3);
      uVar1 = (uint)(uVar5 >> 0x20);
      uVar6 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar5 & 0xff000000000000) != 0) {
LAB_101ca0914:
            func_0x000107c610f8(PTR_PTR_1126a8e58);
            lVar3 = lVar4;
            FUN_101ca0fcc(lVar4,uVar5);
            func_0x00010006c090(lVar4,uVar5);
            func_0x000107c61170(lVar2);
            return lVar3;
          }
        }
        else if ((long)(int)lVar4 != lVar4 >> 0x20) goto LAB_101ca0914;
      }
      else if ((uVar6 == 2) && (*(long *)(lVar4 + 0x10) != *(long *)(lVar4 + 0x18)))
      goto LAB_101ca0914;
      func_0x00010006c090(lVar4,uVar5);
    }
    func_0x000107c61170(lVar2);
  }
  return 0;
}



/* Entry: 101ca09a4; end: 101ca0a03; -[_TtC31SCAIReplyGeneratingServicesImpl22AIStoryReplyABProvider batchSize] */

long FUN_101ca09a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c6157c();
  FUN_101ca0804();
  if (lVar2 == 0) {
    func_0x000107c61574(param_1);
    lVar2 = 3;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c3e6f0();
    func_0x000107c61170(lVar2);
    func_0x000107c61574(param_1);
    lVar2 = (long)(int)lVar1;
  }
  return lVar2;
}



/* Entry: 101ca0a04; end: 101ca0b37; -[_TtC31SCAIReplyGeneratingServicesImpl22AIStoryReplyABProvider isGuidedGenerationEnabled] */

long FUN_101ca0a04(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c6157c();
  FUN_101ca0804();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49ea4();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61574(param_1);
  return lVar2;
}



/* Entry: 101ca0b38; end: 101ca0b43; -[_TtC31SCAIReplyGeneratingServicesImpl22AIStoryReplyABProvider isAIStoryReplyChatInputItemAvaliableFor:] */

uint FUN_101ca0b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  (*(code *)0x101ca0a5c)(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101ca0b44; end: 101ca0c97;  */

uint FUN_101ca0b44(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = 0;
    goto LAB_101ca0c84;
  }
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_101ca0804();
  if (lVar2 == 0) {
LAB_101ca0be8:
    lVar2 = *(long *)(unaff_x20 + 0x30);
    if ((lVar2 != 0) && (func_0x000107c49be0(), (int)lVar2 != 0)) {
      lVar2 = *(long *)(unaff_x20 + 0x28);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c3da94();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        lVar2 = lVar1;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
        func_0x000107c5bcc0();
        func_0x000107c61170(lVar2);
        if (lVar1 == 1) goto LAB_101ca0c60;
      }
    }
    uVar3 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c49be4();
    func_0x000107c61170(lVar2);
    if ((int)lVar1 == 0) goto LAB_101ca0be8;
    lVar2 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) goto LAB_101ca0be8;
    lVar1 = lVar2;
    func_0x000107c3da94();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar2);
    if (lVar1 != 3) goto LAB_101ca0be8;
LAB_101ca0c60:
    lVar2 = param_1;
    FUN_101ca0d08(param_1);
    uVar3 = (uint)lVar2;
  }
  func_0x000107c61170(param_1);
LAB_101ca0c84:
  return uVar3 & 1;
}



/* Entry: 101ca0c98; end: 101ca0ca3; -[_TtC31SCAIReplyGeneratingServicesImpl22AIStoryReplyABProvider isAIStoryReplyContextItemAvaliableFor:] */

uint FUN_101ca0c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101ca0b44(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101ca0ca4; end: 101ca0d07;  */

uint FUN_101ca0ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  (*param_4)(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101ca0d08; end: 101ca0f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca0d08(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffff90 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5c018();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  lVar2 = param_1;
  func_0x000107c5c058();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar7 = *(long *)(lVar2 + _DAT_11307f558);
    lVar3 = lVar7;
    func_0x000107c61174(lVar7);
    func_0x000107c61170(lVar2);
    if (lVar7 != 0) {
      func_0x0001009f0578(lVar3 + _DAT_113813b20,puVar6);
      func_0x000107c61170(lVar3);
      puVar4 = puVar6;
      (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
      if ((int)puVar4 != 1) {
        (**(code **)(lVar8 + 0x20))(lVar5,puVar6,lVar1);
        lVar2 = param_1;
        func_0x000107c4a1f4();
        if ((int)lVar2 != 0) {
          FUN_101ca0804();
          if (lVar2 == 0) {
            func_0x000107c61170(param_1);
            (**(code **)(lVar8 + 8))(lVar5,lVar1);
            return;
          }
          lVar3 = lVar2;
          func_0x000107c5b350();
          func_0x000107c61170(lVar2);
          if (0 < (int)lVar3) {
            func_0x000107c5ee84();
            func_0x000107c61170(param_1);
            (**(code **)(lVar8 + 8))(lVar5,lVar1);
            return;
          }
        }
        (**(code **)(lVar8 + 8))(lVar5,lVar1);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c61170(param_1);
      goto LAB_101ca0e5c;
    }
  }
  func_0x000107c61170(param_1);
  (**(code **)(lVar8 + 0x38))(puVar6,1,1,lVar1);
LAB_101ca0e5c:
  func_0x0001000d1dcc(puVar6);
  return;
}



/* Entry: 101ca0f50; end: 101ca0fab;  */

void FUN_101ca0f50(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_101ca0fac(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ca0fac; end: 101ca0fcb;  */

void FUN_101ca0fac(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101ca0fcc; end: 101ca108b;  */

long FUN_101ca0fcc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = 0;
  func_0x000101c9fd18();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  puVar2 = PTR_PTR_1126a7e90;
  func_0x000107c610f8();
  func_0x000107c470f0();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  lVar3 = *(long *)(unaff_x20 + 0x70);
  *(long *)(unaff_x20 + 0x70) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return lVar3;
}



/* Entry: 101ca108c; end: 101ca10ff;  */

void FUN_101ca108c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = 0;
  func_0x000101c9fd18();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  puVar1 = PTR_PTR_1126a7e90;
  func_0x000107c610f8();
  func_0x000107c470f0();
  *(undefined **)(param_1 + 0x20) = puVar1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  *(long *)(unaff_x20 + 0x70) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101ca1100; end: 101ca11f7;  */

void FUN_101ca1100(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c5ccf8();
  *(long *)(unaff_x20 + 0x58) = lVar2;
  func_0x000107c4aadc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    FUN_101945ea0(0);
    lVar2 = param_1;
    func_0x000107c5fc54(param_1,uVar1);
    func_0x000107c61170(param_1);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(long *)(unaff_x20 + 0x70) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101ca11f8; end: 101ca134b;  */

undefined * FUN_101ca11f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d4();
    if (*(char *)(unaff_x20 + 0x50) == '\x01') {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
    }
    if (*(char *)(unaff_x20 + 0x68) == '\x01') {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d4();
    }
    lVar6 = *(long *)(unaff_x20 + 0x70);
    if (lVar6 == 0) {
      func_0x000107c61174(puVar2);
      lVar5 = 0;
    }
    else {
      FUN_101945ea0(0);
      func_0x000107c61174(puVar2);
      lVar5 = lVar6;
      func_0x000107c61434(lVar6);
      func_0x000107c5fc48();
      func_0x000107c6142c(lVar6);
    }
    puVar1 = PTR_PTR_1126a7e98;
    func_0x000107c610f8(PTR_PTR_1126a7e98);
    func_0x000107c46b10();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar5);
  }
  return puVar1;
}



/* Entry: 101ca134c; end: 101ca1383;  */

void FUN_101ca134c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = 1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101ca1384; end: 101ca14af;  */

/* WARNING: Possible PIC construction at 0x000101ca13fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca1414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca1460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca144c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca1464) */
/* WARNING: Removing unreachable block (ram,0x000101ca1418) */
/* WARNING: Removing unreachable block (ram,0x000101ca146c) */
/* WARNING: Removing unreachable block (ram,0x000101ca1400) */
/* WARNING: Removing unreachable block (ram,0x000101ca1450) */

void FUN_101ca1384(void)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((lVar2 == 0) || (lVar1 = *(long *)(unaff_x20 + 0x30), lVar1 == 0)) {
    *(undefined1 *)(unaff_x20 + 0x68) = 1;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined1 *)(unaff_x20 + 0x40) = 1;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined1 *)(unaff_x20 + 0x50) = 1;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    lVar2 = *(long *)(unaff_x20 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61434(lVar2);
    func_0x000107c61434();
    FUN_101ca11f8();
    if (lVar1 != 0) {
      lVar1 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c5fadc(uVar3,lVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 101ca14b0; end: 101ca150b;  */

void FUN_101ca14b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ca150c; end: 101ca156b; -[_TtC31SCAIReplyGeneratingServicesImpl13AIReplyLogger init] */

void FUN_101ca150c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAIReplyGeneratingServicesImpl.AIReplyLogger",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca1538);
  (*pcVar1)();
}



/* Entry: 101ca156c; end: 101ca15a3; -[_TtC31SCAIReplyGeneratingServicesImpl13AIReplyLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ca1588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca158c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca156c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e12a08));
  return;
}



/* Entry: 101ca15a4; end: 101ca15c3;  */

void FUN_101ca15a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ffbb8);
  return;
}



/* Entry: 101ca15c4; end: 101ca1683;  */

/* WARNING: Possible PIC construction at 0x000101ca1624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca1648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca1628) */
/* WARNING: Removing unreachable block (ram,0x000101ca164c) */

void FUN_101ca15c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e22f0;
  func_0x000107c610f8(PTR_PTR_1126e22f0);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c53910(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ca1684; end: 101ca168f; -[_TtC31SCAIReplyGeneratingServicesImpl13AIReplyLogger logAIStoryReplyItemImpressionWithContextSessionId:storySnapId:] */

/* WARNING: Possible PIC construction at 0x000101ca1bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca1bf8) */

void FUN_101ca1684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101ca15c4(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca1690; end: 101ca1767;  */

/* WARNING: Possible PIC construction at 0x000101ca16f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca171c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca16fc) */
/* WARNING: Removing unreachable block (ram,0x000101ca1720) */

void FUN_101ca1690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e22f8;
  func_0x000107c610f8(PTR_PTR_1126e22f8);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c53910(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ca1768; end: 101ca17f7; -[_TtC31SCAIReplyGeneratingServicesImpl13AIReplyLogger logAIStoryReplyContextActionItemInteractionWithContextSessionId:storySnapId:result:] */

/* WARNING: Possible PIC construction at 0x000101ca17dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca17e0) */

void FUN_101ca1768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101ca1690(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca17f8; end: 101ca1a17;  */

/* WARNING: Possible PIC construction at 0x000101ca1860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca1884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca18c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca1900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca1930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca198c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca19e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca1888) */
/* WARNING: Removing unreachable block (ram,0x000101ca18cc) */
/* WARNING: Removing unreachable block (ram,0x000101ca1904) */
/* WARNING: Removing unreachable block (ram,0x000101ca1934) */
/* WARNING: Removing unreachable block (ram,0x000101ca19e8) */
/* WARNING: Removing unreachable block (ram,0x000101ca195c) */
/* WARNING: Removing unreachable block (ram,0x000101ca1918) */
/* WARNING: Removing unreachable block (ram,0x000101ca18e0) */
/* WARNING: Removing unreachable block (ram,0x000101ca18f0) */
/* WARNING: Removing unreachable block (ram,0x000101ca18fc) */
/* WARNING: Removing unreachable block (ram,0x000101ca18a8) */
/* WARNING: Removing unreachable block (ram,0x000101ca18b8) */
/* WARNING: Removing unreachable block (ram,0x000101ca18c4) */
/* WARNING: Removing unreachable block (ram,0x000101ca1864) */
/* WARNING: Removing unreachable block (ram,0x000101ca1990) */

void FUN_101ca17f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e22f8;
  func_0x000107c610f8(PTR_PTR_1126e22f8);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c53910(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ca1a18; end: 101ca1b77; -[_TtC31SCAIReplyGeneratingServicesImpl13AIReplyLogger logAIStoryReplyChatInputItemInteractionWithContextSessionId:storySnapId:interactionLoggingParams:] */

/* WARNING: Possible PIC construction at 0x000101ca1aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca1aa4) */

void FUN_101ca1a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101ca17f8(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca1b78; end: 101ca1b83; -[_TtC31SCAIReplyGeneratingServicesImpl13AIReplyLogger logAIStoryReplySendWithInitiallyGeneratedText:finalText:] */

/* WARNING: Possible PIC construction at 0x000101ca1bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca1bf8) */

void FUN_101ca1b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x101ca1abc)(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca1b84; end: 101ca1c0f;  */

/* WARNING: Possible PIC construction at 0x000101ca1bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca1bf8) */

void FUN_101ca1b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca1c10; end: 101ca1c4f;  */

void FUN_101ca1c10(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101ca1c50; end: 101ca1d1b;  */

undefined1  [16] FUN_101ca1c50(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f008bf0);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f008c10);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca1d1c);
  (*pcVar1)();
}



/* Entry: 101ca1d1c; end: 101ca1f5f;  */

/* WARNING: Possible PIC construction at 0x000101ca1db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca1e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca1dbc) */
/* WARNING: Removing unreachable block (ram,0x000101ca1e10) */
/* WARNING: Removing unreachable block (ram,0x000101ca1dd8) */
/* WARNING: Removing unreachable block (ram,0x000101ca1de0) */
/* WARNING: Removing unreachable block (ram,0x000101ca1e14) */
/* WARNING: Removing unreachable block (ram,0x000101ca1e1c) */
/* WARNING: Removing unreachable block (ram,0x000101ca1e30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca1d1c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e12a48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  uVar4 = ((ulong *)(param_1 + _DAT_112ff6110))[1];
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_112ff6110);
    uVar1 = uVar5 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar3 = PTR_PTR_1126e22e8;
      func_0x000107c610f8(PTR_PTR_1126e22e8);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar5,uVar4);
      func_0x000107c549e0(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 101ca1f60; end: 101ca1fb7; -[_TtC38SCGenAIAnalyticsServicesImplementation20AIModeOpenLoggerImpl logAiModeOpenWithConfig:] */

/* WARNING: Possible PIC construction at 0x000101ca1fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca1fa4) */

void FUN_101ca1f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101ca1d1c(param_3);
  func_0x000101ca1e48(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101ca1fb8; end: 101ca2017; -[_TtC38SCGenAIAnalyticsServicesImplementation20AIModeOpenLoggerImpl init] */

void FUN_101ca1fb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIAnalyticsServicesImplementation.AIModeOpenLoggerImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca1fe4);
  (*pcVar1)();
}



/* Entry: 101ca2018; end: 101ca2027; -[_TtC38SCGenAIAnalyticsServicesImplementation20AIModeOpenLoggerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e12a48));
  return;
}



/* Entry: 101ca2028; end: 101ca2047;  */

void FUN_101ca2028(void)

{
  func_0x000107c61168(&PTR_PTR_1127ffc80);
  return;
}



/* Entry: 101ca2048; end: 101ca2083;  */

void FUN_101ca2048(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101ca2084; end: 101ca211f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2084(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar2 = 0;
  FUN_101ca2920();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e12b68;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e12b60) = param_2;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_50,puVar4);
  *param_1 = plVar5;
  return;
}



/* Entry: 101ca2120; end: 101ca2127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2120(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar5 = &lStack_50;
  lVar2 = 0;
  FUN_101ca2920();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e12b68;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e12b60) = uVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(uVar6);
  func_0x000107c61154(&lStack_50,puVar4);
  *param_1 = plVar5;
  return;
}



/* Entry: 101ca2128; end: 101ca21a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2128(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_2 + _DAT_113083868);
  lVar2 = 0;
  FUN_101ca2028();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e12a48) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101ca21a4; end: 101ca21ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca21a4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  lVar2 = 0;
  FUN_101ca2028();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e12a48) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101ca21ac; end: 101ca21c7;  */

/* WARNING: Possible PIC construction at 0x000101ca21b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca21bc) */

void FUN_101ca21ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ca21c8; end: 101ca2213;  */

void FUN_101ca21c8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ca2214; end: 101ca232b;  */

void FUN_101ca2214(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = &UNK_110465a30;
  func_0x000107c613fc(&UNK_110465a30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112e12a78,&UNK_10d9ee0f0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar2 = FUN_101ca232c;
  func_0x0001000bdd8c(FUN_101ca232c,puVar1);
  puVar1 = &UNK_110465a58;
  func_0x000107c613fc(&UNK_110465a58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112e12a80,&UNK_10d9ee0f8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  uVar4 = 0x101ca2330;
  func_0x0001000bdd8c(0x101ca2330,puVar1);
  uVar3 = 0;
  func_0x00010029bc4c(0);
  func_0x000107c610f8();
  func_0x00010078d47c(pcVar2,uVar4,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101ca232c; end: 101ca2333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca232c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar5 = &lStack_50;
  lVar2 = 0;
  FUN_101ca2920();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e12b68;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e12b60) = uVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(uVar6);
  func_0x000107c61154(&lStack_50,puVar4);
  *param_1 = plVar5;
  return;
}



/* Entry: 101ca2334; end: 101ca2343; -[_TtC38SCGenAIAnalyticsServicesImplementation32GenAIUnifiedAnalyticsServiceImpl eventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e12b68));
  return;
}



/* Entry: 101ca2344; end: 101ca2353; -[_TtC38SCGenAIAnalyticsServicesImplementation32GenAIUnifiedAnalyticsServiceImpl emitWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e12b68),PTR_s_next__112614028);
  return;
}



/* Entry: 101ca2354; end: 101ca2837;  */

/* WARNING: Possible PIC construction at 0x000101ca23e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca2420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca2648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca2698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca26e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca2748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca27c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca27e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca2818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca27e8) */
/* WARNING: Removing unreachable block (ram,0x000101ca27c8) */
/* WARNING: Removing unreachable block (ram,0x000101ca27e0) */
/* WARNING: Removing unreachable block (ram,0x000101ca274c) */
/* WARNING: Removing unreachable block (ram,0x000101ca2764) */
/* WARNING: Removing unreachable block (ram,0x000101ca281c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2354(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  ulong *puVar8;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112e12b60) + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  puVar3 = (ulong *)PTR_PTR_1126e1c38;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (((undefined8 *)(param_1 + _DAT_112ff5fa0))[1] == 0) {
    lVar7 = ((undefined8 *)(param_1 + _DAT_112ff5fa8))[1];
    if (lVar7 == 0) {
      func_0x000107c52194(puVar3,0,*(undefined8 *)(param_1 + _DAT_112ff5f98));
      uVar6 = (uint)lVar7;
      puVar8 = *(ulong **)(param_1 + _DAT_112ff5fc0);
      if (puVar8 != (ulong *)0x0) {
        if (*(char *)((long)puVar8 + _DAT_112ff5ff0 + 8) == '\x01') {
          puVar5 = puVar8;
          func_0x000107c61174();
        }
        else {
          func_0x000107c61174(puVar8);
          puVar5 = puVar3;
          func_0x000107c59558();
        }
        if ((*(char *)((long)puVar8 + _DAT_112ff5ff8 + 8) != '\x01') ||
           (((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x90))(),
            (uVar6 & 0xff) != 1 && (FUN_101ca2940(), (uVar6 & 0xff) != 1)))) {
          puVar5 = puVar3;
          func_0x000107c59560();
        }
        if ((*(char *)((long)puVar8 + _DAT_112ff6010 + 8) != '\x01') ||
           ((((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x90))(),
             (uVar6 & 0xff) != 1 && ((undefined *)((long)puVar5 + -0x3f) < (undefined *)0xe)) &&
            ((0x37c9U >> (ulong)((uint)(undefined *)((long)puVar5 + -0x3f) & 0x1f) & 1) != 0)))) {
          puVar5 = puVar3;
          func_0x000107c525c0();
        }
        if ((*(char *)((long)puVar8 + _DAT_112ff6008 + 8) != '\x01') ||
           ((((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x90))(),
             (uVar6 & 0xff) != 1 && ((undefined *)((long)puVar5 + -0x39) < (undefined *)0x16)) &&
            ((0x35f381U >> (ulong)((uint)(undefined *)((long)puVar5 + -0x39) & 0x1f) & 1) != 0)))) {
          func_0x000107c525a0(puVar3);
        }
        lVar7 = ((undefined8 *)((long)puVar8 + _DAT_112ff6018))[1];
        if (lVar7 != 0) {
          uVar4 = *(undefined8 *)((long)puVar8 + _DAT_112ff6018);
          func_0x000107c61434(lVar7);
          func_0x000107c5fadc(uVar4,lVar7);
          func_0x000107c6142c(lVar7);
          func_0x000107c54314(puVar3);
          goto code_r0x000107c61170;
        }
        lVar7 = ((undefined8 *)((long)puVar8 + _DAT_112ff6020))[1];
        if (lVar7 != 0) {
          uVar4 = *(undefined8 *)((long)puVar8 + _DAT_112ff6020);
          func_0x000107c61434(lVar7);
          func_0x000107c5fadc(uVar4,lVar7);
          func_0x000107c6142c(lVar7);
          func_0x000107c549e0(puVar3);
          goto code_r0x000107c61170;
        }
        lVar7 = ((undefined8 *)((long)puVar8 + _DAT_112ff6028))[1];
        if (lVar7 != 0) {
          uVar4 = *(undefined8 *)((long)puVar8 + _DAT_112ff6028);
          func_0x000107c61434(lVar7);
          func_0x000107c5fadc(uVar4,lVar7);
          func_0x000107c6142c(lVar7);
          func_0x000107c54d40(puVar3);
          goto code_r0x000107c61170;
        }
        func_0x000107c61170(puVar8);
      }
      lVar7 = *(long *)(param_1 + _DAT_112ff5fb0);
      if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) {
        lVar7 = *(long *)(param_1 + _DAT_112ff5fb8);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) {
          func_0x000107c4bfb0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
          return;
        }
        uVar4 = *(undefined8 *)(lVar7 + 0x20);
        uVar1 = *(undefined8 *)(lVar7 + 0x28);
        func_0x000107c61434(uVar1);
        func_0x000107c5fadc(uVar4,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c56718(puVar3);
      }
      else {
        uVar4 = *(undefined8 *)(lVar7 + 0x20);
        uVar1 = *(undefined8 *)(lVar7 + 0x28);
        func_0x000107c61434(uVar1);
        func_0x000107c5fadc(uVar4,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c539e0(puVar3);
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112ff5fa8);
      func_0x000107c5fadc(uVar4);
      func_0x000107c59950(puVar3);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112ff5fa0);
    func_0x000107c5fadc(uVar4);
    func_0x000107c593e4(puVar3);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 101ca2838; end: 101ca2887; -[_TtC38SCGenAIAnalyticsServicesImplementation32GenAIUnifiedAnalyticsServiceImpl logWithEvent:] */

/* WARNING: Possible PIC construction at 0x000101ca2870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca2874) */

void FUN_101ca2838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101ca2354(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101ca2888; end: 101ca28e7; -[_TtC38SCGenAIAnalyticsServicesImplementation32GenAIUnifiedAnalyticsServiceImpl init] */

void FUN_101ca2888(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIAnalyticsServicesImplementation.GenAIUnifiedAnalyticsServiceImpl",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca28b4);
  (*pcVar1)();
}



/* Entry: 101ca28e8; end: 101ca291f; -[_TtC38SCGenAIAnalyticsServicesImplementation32GenAIUnifiedAnalyticsServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ca2904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca2908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca28e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e12b60));
  return;
}



/* Entry: 101ca2920; end: 101ca293f;  */

void FUN_101ca2920(void)

{
  func_0x000107c61168(&PTR_PTR_1127ffd40);
  return;
}



/* Entry: 101ca2940; end: 101ca2983;  */

undefined1  [16] FUN_101ca2940(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar2 = param_1 - 0x39;
  if ((uVar2 < 0x16) && ((0x39d3c1U >> (ulong)((uint)uVar2 & 0x1f) & 1) != 0)) {
    auVar3._0_8_ = *(ulong *)(&UNK_10d9ee278 + uVar2 * 8);
    auVar3._8_8_ = 0;
    return auVar3;
  }
  uVar1 = 0;
  if (param_1 == 0x4b) {
    uVar1 = 0xd;
  }
  auVar4[8] = param_1 != 0x4b;
  auVar4._0_8_ = uVar1;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 101ca2984; end: 101ca29a7;  */

void FUN_101ca2984(undefined8 param_1)

{
  FUN_101ca2eec();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uRam0000000112e12bd8 = param_1;
  return;
}



/* Entry: 101ca29a8; end: 101ca2a7b; -[_TtC36SCDreamsSessionServiceImplementation30GenAIDreamsAsyncSessionManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca29a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e12b98;
  if (lRam0000000112e12c78 != -1) {
    func_0x000107c61568(0x112e12c78,FUN_101ca3038);
  }
  uVar3 = uRam0000000112e12c70;
  *(undefined8 *)(param_1 + lVar1) = uRam0000000112e12c70;
  lVar1 = _DAT_112e12ba0;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined **)(param_1 + _DAT_112e12ba8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ca2a7c; end: 101ca2b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2a7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112e12b98) + _DAT_112e12c20);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + _DAT_112e12be8);
    uVar3 = param_2;
    func_0x000107c5faec(uVar1);
    func_0x00010006c804();
    lVar4 = _DAT_112e12ba8;
    func_0x000107c61428(unaff_x20 + _DAT_112e12ba8,auStack_68,0x21,0);
    func_0x000107c61434(param_2);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar4);
    func_0x000107c61558(uVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
    func_0x00010018433c(uVar1,uVar3,param_1,param_2,uVar2);
    func_0x000107c6142c(param_2);
    *(undefined8 *)(unaff_x20 + lVar4) = uVar5;
    func_0x000107c614a8(auStack_68);
    func_0x000100070bfc();
  }
  return;
}



/* Entry: 101ca2b84; end: 101ca2bdf; -[_TtC36SCDreamsSessionServiceImplementation30GenAIDreamsAsyncSessionManager registerSesssionForSnapId:] */

void FUN_101ca2b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101ca2a7c(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca2be0; end: 101ca2c63; -[_TtC36SCDreamsSessionServiceImplementation30GenAIDreamsAsyncSessionManager reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2be0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61174();
  func_0x00010006c804();
  lVar1 = _DAT_112e12ba8;
  func_0x000107c61428(param_1 + _DAT_112e12ba8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar2);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ca2c64; end: 101ca2ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101ca2c64(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_68 [24];
  
  func_0x00010006c804();
  lVar4 = _DAT_112e12ba8;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar10 = 0;
    lVar11 = 0;
  }
  else {
    puVar9 = (ulong *)(param_1 + 0x28);
    lVar11 = 1 - *(long *)(param_1 + 0x10);
    while( true ) {
      uVar2 = puVar9[-1];
      uVar3 = *puVar9;
      func_0x000107c61428(unaff_x20 + lVar4,auStack_68,0x20,0);
      lVar8 = *(long *)(unaff_x20 + lVar4);
      if (*(long *)(lVar8 + 0x10) != 0) break;
      func_0x000107c614a8(auStack_68);
      if (lVar11 == 0) goto LAB_101ca2d38;
LAB_101ca2cc8:
      puVar9 = puVar9 + 2;
      lVar11 = lVar11 + 1;
      if (lVar11 == 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101ca2de0);
        (*pcVar5)();
      }
    }
    func_0x000107c61434(uVar3);
    func_0x000107c61434(lVar8);
    uVar6 = uVar2;
    uVar7 = uVar3;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(lVar8);
      if (lVar11 != 0) goto LAB_101ca2cc8;
LAB_101ca2d38:
      uVar10 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar6 * 0x10);
      uVar10 = *puVar1;
      lVar11 = puVar1[1];
      func_0x000107c61434(lVar11);
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(lVar8);
      func_0x000107c61428(unaff_x20 + lVar4,auStack_68,0x21,0);
      uVar6 = uVar3;
      func_0x0001014c4e50(uVar2,uVar3);
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar6);
    }
  }
  func_0x000100070bfc();
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = uVar10;
  return auVar12;
}



/* Entry: 101ca2de0; end: 101ca2e6f; -[_TtC36SCDreamsSessionServiceImplementation30GenAIDreamsAsyncSessionManager dreamsSessionForIds:] */

void FUN_101ca2de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_101ca2c64(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5fadc(uVar2,puVar1);
    func_0x000107c6142c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101ca2e70; end: 101ca2ea3;  */

void FUN_101ca2e70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ca2ea4; end: 101ca2eeb; -[_TtC36SCDreamsSessionServiceImplementation30GenAIDreamsAsyncSessionManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2ea4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e12b98));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e12ba0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e12ba8));
  return;
}



/* Entry: 101ca2eec; end: 101ca2f0b;  */

void FUN_101ca2eec(void)

{
  func_0x000107c61168(&PTR_PTR_1127ffe08);
  return;
}



/* Entry: 101ca2f0c; end: 101ca2f93; -[_TtC36SCDreamsSessionServiceImplementation18GenAIDreamsSession init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2f0c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = puVar3;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar4 != (undefined *)0x0) {
    *(undefined **)(param_1 + _DAT_112e12be8) = puVar4;
    lStack_40 = param_1;
    lStack_38 = lVar2;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca2f94);
  (*pcVar1)();
}



/* Entry: 101ca2f94; end: 101ca2fc7;  */

void FUN_101ca2f94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ca2fc8; end: 101ca2fd7; -[_TtC36SCDreamsSessionServiceImplementation18GenAIDreamsSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca2fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e12be8));
  return;
}



/* Entry: 101ca2fd8; end: 101ca2ff7;  */

void FUN_101ca2fd8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ffed0);
  return;
}



/* Entry: 101ca2ff8; end: 101ca3037;  */

void FUN_101ca2ff8(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "";
  func_0x000107c60124("",0,2);
  pcRam0000000112e12c68 = pcVar1;
  return;
}



/* Entry: 101ca3038; end: 101ca305b;  */

void FUN_101ca3038(undefined8 param_1)

{
  FUN_101ca33bc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uRam0000000112e12c70 = param_1;
  return;
}



/* Entry: 101ca305c; end: 101ca30f3; -[_TtC36SCDreamsSessionServiceImplementation25GenAIDreamsSessionManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca305c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e12c18) = 0;
  *(undefined8 *)(param_1 + _DAT_112e12c20) = 0;
  lVar1 = _DAT_112e12c30;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_112e12c28) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ca30f4; end: 101ca314f; -[_TtC36SCDreamsSessionServiceImplementation25GenAIDreamsSessionManager currentSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca30f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_112e12c20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + _DAT_112e12c20) + _DAT_112e12be8);
    func_0x000107c5faec(uVar1);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ca3150; end: 101ca315f; -[_TtC36SCDreamsSessionServiceImplementation25GenAIDreamsSessionManager sessionIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca3150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e12c28));
  return;
}



/* Entry: 101ca3160; end: 101ca321b;  */

/* WARNING: Possible PIC construction at 0x000101ca31b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca31b8) */
/* WARNING: Removing unreachable block (ram,0x000101ca31e8) */
/* WARNING: Removing unreachable block (ram,0x000101ca31f8) */
/* WARNING: Removing unreachable block (ram,0x000101ca3208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca3160(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = _DAT_112e12c20;
  if (*(long *)(unaff_x20 + _DAT_112e12c20) != 0) {
    return;
  }
  uVar2 = 0;
  FUN_101ca2fd8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101ca321c; end: 101ca3243; -[_TtC36SCDreamsSessionServiceImplementation25GenAIDreamsSessionManager startSession] */

void FUN_101ca321c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ca3160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ca3244; end: 101ca32db; -[_TtC36SCDreamsSessionServiceImplementation25GenAIDreamsSessionManager endSession] */

/* WARNING: Possible PIC construction at 0x000101ca3270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca3274) */
/* WARNING: Removing unreachable block (ram,0x000101ca32b8) */
/* WARNING: Removing unreachable block (ram,0x000101ca3290) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca3244(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e12c20);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + _DAT_112e12c20) = 0;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101ca32dc; end: 101ca332f; -[_TtC36SCDreamsSessionServiceImplementation25GenAIDreamsSessionManager shouldShowDreamsTabBadge:] */

void FUN_101ca32dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_101ca33dc();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ca3330; end: 101ca3363;  */

void FUN_101ca3330(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ca3364; end: 101ca33bb; -[_TtC36SCDreamsSessionServiceImplementation25GenAIDreamsSessionManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ca3380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca33a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca3384) */
/* WARNING: Removing unreachable block (ram,0x000101ca33a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca3364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e12c18));
  return;
}



/* Entry: 101ca33bc; end: 101ca33db;  */

void FUN_101ca33bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127fff88);
  return;
}



/* Entry: 101ca33dc; end: 101ca3543;  */

/* WARNING: Possible PIC construction at 0x000101ca34a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca34b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca34c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca3524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca34cc) */
/* WARNING: Removing unreachable block (ram,0x000101ca34bc) */
/* WARNING: Removing unreachable block (ram,0x000101ca34a8) */
/* WARNING: Removing unreachable block (ram,0x000101ca3528) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca33dc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar2 = &UNK_110465b18;
  func_0x000107c613fc(&UNK_110465b18,0x18,7);
  *(long *)(puVar2 + 0x10) = param_2;
  lVar3 = *(long *)(param_1 + _DAT_112e12c18);
  if (lVar3 == 0) {
    func_0x000107c60bc4(param_2);
    (**(code **)(param_2 + 0x10))(param_2,0);
  }
  else {
    func_0x000107c60bc4(param_2);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      pcStack_50 = FUN_101ca3544;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_100ab47f8;
      puStack_58 = &UNK_110465b30;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      puVar1 = puStack_48;
      func_0x000107c6157c(puVar2);
      puVar2 = puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101ca3544; end: 101ca3573;  */

void FUN_101ca3544(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101ca3554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101ca3574; end: 101ca35a7;  */

void FUN_101ca3574(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101ca35a8; end: 101ca368f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ca35a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  if (lRam0000000112e12c78 != -1) {
    func_0x000107c61568(0x112e12c78,FUN_101ca3038);
  }
  lVar1 = lRam0000000112e12c70;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    func_0x000107c61174(lVar1);
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c61174(lVar1);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    uVar3 = uVar2;
    func_0x000107c43d34();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112e12c18);
  *(undefined8 *)(lVar1 + _DAT_112e12c18) = uVar3;
  func_0x000107c61170(uVar2);
  return lVar1;
}



/* Entry: 101ca3690; end: 101ca369f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ca3690(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  if (lRam0000000112e12c78 != -1) {
    func_0x000107c61568(0x112e12c78,FUN_101ca3038);
  }
  lVar1 = lRam0000000112e12c70;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    func_0x000107c61174(lVar1);
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c61174(lVar1);
    func_0x000107c61174();
    func_0x000107c61574(lVar2);
    uVar4 = uVar3;
    func_0x000107c43d34();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
  }
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112e12c18);
  *(undefined8 *)(lVar1 + _DAT_112e12c18) = uVar4;
  func_0x000107c61170(uVar3);
  return lVar1;
}



/* Entry: 101ca36a0; end: 101ca36df;  */

void FUN_101ca36a0(void)

{
  if (lRam0000000112e12be0 != -1) {
    func_0x000107c61568(0x112e12be0,FUN_101ca2984);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uRam0000000112e12bd8);
  return;
}



/* Entry: 101ca36e0; end: 101ca3717;  */

void FUN_101ca36e0(long param_1)

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



/* Entry: 101ca3718; end: 101ca371f;  */

void FUN_101ca3718(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ca3720; end: 101ca3743;  */

void FUN_101ca3720(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ca3744; end: 101ca3767;  */

void FUN_101ca3744(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010078299c();
  *param_1 = param_2;
  return;
}



/* Entry: 101ca3768; end: 101ca3773;  */

void FUN_101ca3768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101ca3774; end: 101ca382b;  */

void FUN_101ca3774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 101ca382c; end: 101ca3837;  */

void FUN_101ca382c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_101ca427c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000101ca39ac(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 101ca3838; end: 101ca386f;  */

void FUN_101ca3838(long param_1)

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



/* Entry: 101ca3870; end: 101ca3877;  */

void FUN_101ca3870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101ca3878; end: 101ca389b;  */

/* WARNING: Possible PIC construction at 0x000101ca3884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca3888) */

void FUN_101ca3878(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ca389c; end: 101ca3913;  */

void FUN_101ca389c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ca3914; end: 101ca3b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ca3914(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112e12e60;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e12e60);
  lVar3 = lVar4;
  if (lVar4 == 1) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112e12e38);
    func_0x000107c4cd6c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c615f0(lVar3);
    func_0x000101ca51e8(uVar5);
  }
  func_0x000101ca51f8(lVar4);
  return lVar3;
}



/* Entry: 101ca3b18; end: 101ca3b87; -[_TtC36SCGenAIAISnapsServicesImplementation37SCGenAIAISnapsNotificationServiceImpl delayAISnapsNotificationForCloudSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ca3b18(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e12e40);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3da8c();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return lVar2;
}


