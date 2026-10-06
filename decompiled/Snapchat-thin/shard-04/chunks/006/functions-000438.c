/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103744b90; end: 103744def;  */

void FUN_103744b90(byte param_1,code *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [80];
  
  uVar13 = 0xd000000000000020;
  pcVar1 = "onsAreSuccessfullyEmitted";
  uVar7 = 0xd00000000000001f;
  if (param_1 != 4) {
    pcVar1 = "NotificationRecoveryJob_v2";
    uVar7 = 0xd000000000000029;
  }
  pcVar3 = "recoveryClientIsNilAfterPnsCall";
  uVar10 = uVar13;
  if (param_1 != 3) {
    pcVar3 = pcVar1;
    uVar10 = uVar7;
  }
  pcVar12 = "NilBeforePnsCall";
  pcVar1 = "issionNotGranted";
  uVar7 = 0xd00000000000001a;
  if (param_1 != 1) {
    uVar7 = 0xd000000000000020;
    pcVar1 = pcVar12;
  }
  pcVar2 = "failedToRetrievePermission";
  uVar4 = 0xd000000000000011;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
    uVar4 = uVar7;
  }
  if (param_1 < 3) {
    pcVar3 = pcVar2;
    uVar10 = uVar4;
  }
  lVar6 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar11 = auStack_b0;
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar6 + 0x20) = uVar7;
  *(undefined1 **)(lVar6 + 0x28) = puVar11;
  puVar5 = PTR___sSSN_11034da80;
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar13 = 0xd000000000000011;
      pcVar12 = "failedToRetrievePermission";
    }
    else if (param_1 == 1) {
      uVar13 = 0xd00000000000001a;
      pcVar12 = "issionNotGranted";
    }
  }
  else if (param_1 == 3) {
    pcVar12 = "recoveryClientIsNilAfterPnsCall";
  }
  else if (param_1 == 4) {
    uVar13 = 0xd00000000000001f;
    pcVar12 = "onsAreSuccessfullyEmitted";
  }
  else {
    uVar13 = 0xd000000000000029;
    pcVar12 = "NotificationRecoveryJob_v2";
  }
  *(undefined **)(lVar6 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar6 + 0x30) = uVar13;
  *(ulong *)(lVar6 + 0x38) = (ulong)pcVar12 | 0x8000000000000000;
  lVar8 = lVar6;
  func_0x000100214a84(lVar6);
  func_0x000107c61588(lVar6);
  func_0x000100f15a0c((undefined8 *)(lVar6 + 0x20));
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c5fadc(uVar10,(ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar3 | 0x8000000000000000);
  lVar6 = lVar8;
  func_0x000107c5f9dc(lVar8,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar8);
  func_0x000107c466bc(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar6);
  (*param_2)(2,puVar9);
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 103744df0; end: 103744df3;  */

void FUN_103744df0(ulong *param_1)

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



/* Entry: 103744df4; end: 10374522b;  */

void FUN_103744df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068d4c8;
  func_0x000107c613fc(&UNK_11068d4c8,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_10374522c,puVar1);
  return;
}



/* Entry: 10374522c; end: 10374525f;  */

void FUN_10374522c(void)

{
  long unaff_x20;
  
  func_0x000103744ef8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 103745260; end: 10374526f;  */

undefined1  [16] FUN_103745260(void)

{
  return ZEXT816(0x11068d4f0);
}



/* Entry: 103745270; end: 10374530f;  */

void FUN_103745270(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c44580();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000103747fa8();
    func_0x000107c61174(param_3);
    uVar2 = 0xd000000000000018;
    FUN_103747544(0xd000000000000018,0x800000010ef11a10,lVar1,param_3,0);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 103745310; end: 103745317;  */

void FUN_103745310(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c44580();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  uVar3 = 0;
  if (lVar2 != 0) {
    func_0x000103747fa8();
    func_0x000107c61174(uVar4);
    uVar3 = 0xd000000000000018;
    FUN_103747544(0xd000000000000018,0x800000010ef11a10,lVar2,uVar4,0);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 103745318; end: 103745617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103745318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c4d81c();
  func_0x000107c61180();
  func_0x000107c4f2e4();
  func_0x000107c61180();
  func_0x000107c4d794();
  func_0x000107c61180();
  lVar7 = *(long *)(param_8 + _DAT_113091b90);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar2 = lVar7;
  func_0x000107c6148c(lVar7,puVar1);
  if (lVar2 != 0) {
    func_0x000107c61174(lVar7);
  }
  lVar6 = *(long *)(param_8 + _DAT_113091bb8);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar7 = lVar6;
  func_0x000107c6148c(lVar6,puVar1);
  if (lVar7 != 0) {
    func_0x000107c61174(lVar6);
  }
  lVar3 = 0;
  FUN_103746e54();
  lVar6 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f8fa30) = 10;
  *(undefined8 *)(lVar6 + _DAT_112f8f9e8) = param_1;
  *(undefined8 *)(lVar6 + _DAT_112f8f9f0) = param_2;
  *(undefined8 *)(lVar6 + _DAT_112f8f9f8) = param_3;
  puVar1 = PTR_PTR_1126ad650;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + _DAT_112f8fa00) = puVar1;
  *(undefined8 *)(lVar6 + _DAT_112f8fa08) = param_4;
  *(undefined8 *)(lVar6 + _DAT_112f8fa10) = param_5;
  puVar1 = &UNK_11068d588;
  func_0x000107c613fc(&UNK_11068d588,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar4 = 0x103745648;
  func_0x0001000bdd8c(0x103745648,puVar1);
  *(undefined8 *)(lVar6 + _DAT_112f8fa18) = uVar4;
  *(long *)(lVar6 + _DAT_112f8fa20) = lVar2;
  *(long *)(lVar6 + _DAT_112f8fa28) = lVar7;
  puVar1 = &UNK_11068d5b0;
  func_0x000107c613fc(&UNK_11068d5b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  func_0x0001000285a8(0x112deed20,&UNK_10d9bbf88);
  func_0x000107c613fc();
  func_0x000107c61174(lVar7);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(lVar2);
  uVar4 = 0x103745650;
  func_0x0001000bdd8c(0x103745650,puVar1);
  *(undefined8 *)(lVar6 + _DAT_112f8fa38) = uVar4;
  plVar5 = &lStack_70;
  lStack_70 = lVar6;
  lStack_68 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar7);
  return plVar5;
}



/* Entry: 103745618; end: 103745657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103745618(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x20;
  long lVar13;
  long lStack_70;
  long lStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c4d81c();
  func_0x000107c61180();
  func_0x000107c4f2e4();
  func_0x000107c61180();
  func_0x000107c4d794();
  func_0x000107c61180();
  lVar13 = *(long *)(lVar8 + _DAT_113091b90);
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar7 = lVar13;
  func_0x000107c6148c(lVar13,puVar6);
  if (lVar7 != 0) {
    func_0x000107c61174(lVar13);
  }
  lVar13 = *(long *)(lVar8 + _DAT_113091bb8);
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar8 = lVar13;
  func_0x000107c6148c(lVar13,puVar6);
  if (lVar8 != 0) {
    func_0x000107c61174(lVar13);
  }
  lVar9 = 0;
  FUN_103746e54();
  lVar13 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar13 + _DAT_112f8fa30) = 10;
  *(undefined8 *)(lVar13 + _DAT_112f8f9e8) = uVar3;
  *(undefined8 *)(lVar13 + _DAT_112f8f9f0) = uVar10;
  *(undefined8 *)(lVar13 + _DAT_112f8f9f8) = uVar4;
  puVar6 = PTR_PTR_1126ad650;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c(uVar10);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar13 + _DAT_112f8fa00) = puVar6;
  *(undefined8 *)(lVar13 + _DAT_112f8fa08) = uVar1;
  *(undefined8 *)(lVar13 + _DAT_112f8fa10) = uVar5;
  puVar6 = &UNK_11068d588;
  func_0x000107c613fc(&UNK_11068d588,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar2);
  uVar10 = 0x103745648;
  func_0x0001000bdd8c(0x103745648,puVar6);
  *(undefined8 *)(lVar13 + _DAT_112f8fa18) = uVar10;
  *(long *)(lVar13 + _DAT_112f8fa20) = lVar7;
  *(long *)(lVar13 + _DAT_112f8fa28) = lVar8;
  puVar6 = &UNK_11068d5b0;
  func_0x000107c613fc(&UNK_11068d5b0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar11;
  func_0x0001000285a8(0x112deed20,&UNK_10d9bbf88);
  func_0x000107c613fc();
  func_0x000107c61174(lVar8);
  func_0x000107c615f0(uVar11);
  func_0x000107c61174(lVar7);
  uVar11 = 0x103745650;
  func_0x0001000bdd8c(0x103745650,puVar6);
  *(undefined8 *)(lVar13 + _DAT_112f8fa38) = uVar11;
  plVar12 = &lStack_70;
  lStack_70 = lVar13;
  lStack_68 = lVar9;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar8);
  return plVar12;
}



/* Entry: 103745658; end: 10374568b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103745658(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_2 + _DAT_113092298);
  func_0x0001008fe838();
  *param_1 = uVar1;
  return;
}



/* Entry: 10374568c; end: 1037456fb;  */

void FUN_10374568c(long *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f162ee0);
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
  *param_1 = (long)param_2;
  return;
}



/* Entry: 1037456fc; end: 103745867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037456fc(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    func_0x000107c4a83c();
    func_0x000107c61180();
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103745864);
      (*pcVar1)();
    }
    func_0x000107c61170();
    FUN_103744b90(0,param_5,param_6);
  }
  else {
    if ((param_1 == 0) || (param_2 != 0)) {
      func_0x000107c4a83c();
      func_0x000107c61180();
      if (param_4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103745860);
        (*pcVar1)();
      }
      func_0x000107c61170();
      FUN_103744b90(1,param_5,param_6);
      func_0x000107c4bc44(*(undefined8 *)(param_3 + _DAT_112f8fa00));
      param_1 = param_3;
    }
    else {
      func_0x000107c61174();
      lVar2 = param_1;
      func_0x000107c3e488();
      if (lVar2 == 1) {
        func_0x000103745974(param_4,param_5,param_6);
      }
      else {
        func_0x000107c4a83c();
        func_0x000107c61180();
        if (param_4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103745868);
          (*pcVar1)();
        }
        func_0x000107c61170();
        FUN_103744b90(2,param_5,param_6);
        func_0x000107c4bc44(*(undefined8 *)(param_3 + _DAT_112f8fa00));
      }
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103745868; end: 103745c43; -[_TtC23NotificationRecoveryJob32NotificationRecoveryJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_103745868(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
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
  puVar2 = &UNK_11068d6f0;
  func_0x000107c613fc(&UNK_11068d6f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  uVar3 = param_3;
  FUN_1037473d0(param_3,0x1037473c8,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103745c44; end: 103745e7f;  */

/* WARNING: Removing unreachable block (ram,0x000103744cb4) */
/* WARNING: Removing unreachable block (ram,0x000103744cb8) */
/* WARNING: Removing unreachable block (ram,0x000103744cf4) */
/* WARNING: Removing unreachable block (ram,0x000103744cc0) */
/* WARNING: Removing unreachable block (ram,0x000103744cec) */
/* WARNING: Removing unreachable block (ram,0x000103744c54) */
/* WARNING: Removing unreachable block (ram,0x000103744c5c) */
/* WARNING: Removing unreachable block (ram,0x000103744cdc) */
/* WARNING: Removing unreachable block (ram,0x000103744ce4) */

void FUN_103745c44(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  char cVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_b0 [80];
  
  cVar1 = *(char *)(param_1 + 8);
  func_0x000107c4a83c();
  func_0x000107c61180();
  if (cVar1 != '\x01') {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103745cc8);
      (*pcVar3)();
    }
    func_0x000107c61170();
    (*param_4)(0,0);
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103745cc4);
    (*pcVar3)();
  }
  func_0x000107c61170();
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar8 = auStack_b0;
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined1 **)(lVar4 + 0x28) = puVar8;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar4 + 0x30) = 0xd000000000000029;
  *(undefined8 *)(lVar4 + 0x38) = 0x800000010f162d80;
  lVar6 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000100f15a0c((undefined8 *)(lVar4 + 0x20));
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar5 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f162d80);
  func_0x000107c6142c(0x800000010f162d80);
  lVar4 = lVar6;
  func_0x000107c5f9dc(lVar6,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c466bc(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  (*param_4)(2,puVar7);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 103745e80; end: 103746597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103745e80(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *puVar12;
  ulong uVar13;
  long extraout_x8;
  ulong uVar14;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  double dVar19;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar17 = *(long *)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar17 != 0) {
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f8fa38);
    uStack_e8 = *(undefined8 *)(unaff_x20 + _DAT_112f8fa28);
    puVar10 = PTR___sypN_11034f1a8;
    plVar18 = (long *)(param_1 + 0x20);
    lStack_e0 = (long)&puStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_d8 = extraout_x12;
    lStack_d0 = lVar2;
    do {
      lVar2 = *plVar18;
      lStack_c8 = unaff_x20;
      if (*(long *)(lVar2 + 0x10) != 0) {
        func_0x000107c61438(lVar2,2);
        lVar3 = 0x64695f6e;
        uVar13 = 0;
        func_0x000100029284(0x64695f6e);
        if ((uVar13 & 1) == 0) {
LAB_103745f3c:
          func_0x000107c61430(lVar2,2);
        }
        else {
          func_0x0001000bb420(*(long *)(lVar2 + 0x38) + lVar3 * 0x20,&puStack_b0);
          func_0x000107c6142c(lVar2);
          puVar4 = auStack_80;
          func_0x000107c6147c(puVar4,&puStack_b0,puVar10 + 8,PTR___sSSN_11034da80,6);
          if ((((ulong)puVar4 & 1) != 0) &&
             (func_0x000107c6142c(uStack_78), *(long *)(lVar2 + 0x10) != 0)) {
            func_0x000107c61434(lVar2);
            lVar3 = 0x65707974;
            uVar13 = 0;
            func_0x000100029284(0x65707974);
            if ((uVar13 & 1) == 0) goto LAB_103745f3c;
            func_0x0001000bb420(*(long *)(lVar2 + 0x38) + lVar3 * 0x20,&puStack_b0);
            func_0x000107c6142c(lVar2);
            puVar4 = auStack_80;
            func_0x000107c6147c(puVar4,&puStack_b0,puVar10 + 8,PTR___sSSN_11034da80,6);
            if (((ulong)puVar4 & 1) != 0) {
              func_0x000107c6142c(uStack_78);
              func_0x0001000285a8(0x112dc1148,&UNK_10d9bbf70);
              func_0x000107c613fc();
              puVar5 = (undefined *)0x0;
              func_0x00010095c380();
              uVar15 = *(undefined8 *)(puVar5 + 0x10);
              puStack_b8 = puVar5;
              func_0x000107c6157c(uVar15);
              puVar5 = puVar12;
              func_0x000107c61550();
              if ((((int)puVar5 == 0) || ((long)puVar12 < 0)) ||
                 (puVar5 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
                if ((ulong)puVar12 >> 0x3e == 0) {
                  puVar6 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar6 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar12) {
                    puVar6 = puVar12;
                  }
                  func_0x000107c60480(puVar6);
                }
                puVar5 = (undefined *)0x0;
                FUN_103746f7c(0,puVar6 + 1,1,puVar12,0x103746ed0,FUN_103747230);
              }
              uVar14 = (ulong)puVar5 & 0xffffffffffffff8;
              uVar13 = *(ulong *)(uVar14 + 0x10);
              puVar12 = puVar5;
              if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar13) {
                puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
                FUN_103746f7c(puVar12,uVar13 + 1,1,puVar5,0x103746ed0,FUN_103747230);
                uVar14 = (ulong)puVar12 & 0xffffffffffffff8;
              }
              puVar5 = puStack_b8;
              *(ulong *)(uVar14 + 0x10) = uVar13 + 1;
              *(undefined8 *)(uVar14 + uVar13 * 8 + 0x20) = uVar15;
              func_0x000107c6157c(puStack_b8);
              uStack_c0 = uVar16;
              func_0x0001000d224c(&puStack_b0);
              dVar19 = (double)(long)puStack_b0 / 1000.0;
              puVar6 = PTR_PTR_1126c0878;
              func_0x000107c610f8();
              pcStack_90 = FUN_103747354;
              puStack_88 = puVar5;
              puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a8 = 0x42000000;
              puStack_a0 = &UNK_100288f10;
              puStack_98 = &UNK_11068d5c8;
              ppuVar7 = &puStack_b0;
              func_0x000107c60bc4(ppuVar7);
              func_0x000107c45ef0();
              func_0x000107c60bd0(ppuVar7);
              func_0x000107c61574(puStack_88);
              func_0x000107c5ba38(puVar6);
              lVar3 = lVar2;
              func_0x00010018cc3c(lVar2);
              puVar8 = PTR_PTR_1126b1370;
              func_0x000107c610f8();
              lVar9 = lVar3;
              func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,puVar10 + 8,
                                  PTR___ss11AnyHashableVSHsWP_11034e450);
              func_0x000107c6142c(lVar3);
              func_0x000107c47b2c();
              func_0x000107c61170(lVar9);
              func_0x000107c6142c(lVar2);
              if (puVar8 == (undefined *)0x0) {
                func_0x000107c61574(puVar5);
                func_0x000107c61170(puVar6);
                uVar16 = uStack_c0;
                puVar10 = PTR___sypN_11034f1a8;
              }
              else {
                puVar10 = &UNK_11068d600;
                func_0x000107c613fc(&UNK_11068d600,0x18,7);
                *(undefined **)(puVar10 + 0x10) = puVar6;
                func_0x000107c61174();
                lVar2 = lStack_e0;
                func_0x000107c5eea0(lStack_e0);
                func_0x000107c5ee8c();
                (**(code **)(lStack_d8 + 8))(lVar2,lStack_d0);
                dVar19 = dVar19 * 1000.0;
                if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103746590);
                  (*pcVar1)();
                }
                if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103746594);
                  (*pcVar1)();
                }
                if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103746598);
                  (*pcVar1)();
                }
                puVar5 = puVar8;
                puStack_f0 = puVar6;
                func_0x000106c34424();
                puVar6 = puVar8;
                func_0x000107c5d9a4();
                func_0x000107c61180();
                if ((int)puVar5 == 0) {
                  if (puVar6 == (undefined *)0x0) {
                    puVar5 = (undefined *)0x0;
                  }
                  else {
                    puVar5 = puVar6;
                    func_0x000107c5f9e8(puVar6,PTR___ss11AnyHashableVN_11034e448,
                                        PTR___sypN_11034f1a8 + 8,
                                        PTR___ss11AnyHashableVSHsWP_11034e450);
                    func_0x000107c61170(puVar6);
                  }
                  puVar6 = puVar8;
                  func_0x000107c5b634(puVar8);
                  func_0x00010484b0f8(0);
                  func_0x000107c610f8();
                  func_0x000107c6157c(puVar10);
                  func_0x00010484b094(puVar5,puVar6,(long)dVar19,0x103747394,puVar10);
                  func_0x000107c4d664(uStack_e8);
                  func_0x000107c61574(puStack_b8);
                  func_0x000107c61170(puVar5);
                  func_0x000107c61574(puVar10);
                  func_0x000107c61170(puVar8);
                  func_0x000107c61170(puStack_f0);
                  uVar16 = uStack_c0;
                  puVar10 = PTR___sypN_11034f1a8;
                }
                else {
                  if (puVar6 == (undefined *)0x0) {
                    puVar5 = (undefined *)0x0;
                  }
                  else {
                    puVar5 = puVar6;
                    func_0x000107c5f9e8(puVar6,PTR___ss11AnyHashableVN_11034e448,
                                        PTR___sypN_11034f1a8 + 8,
                                        PTR___ss11AnyHashableVSHsWP_11034e450);
                    func_0x000107c61170(puVar6);
                  }
                  puVar6 = puVar8;
                  func_0x000107c5b634(puVar8);
                  func_0x00010484b4e4(0);
                  func_0x000107c610f8();
                  func_0x000107c6157c(puVar10);
                  func_0x00010484b480(puVar5,puVar6,(long)dVar19,0x103747394,puVar10);
                  pcVar11 = "emitLocalNotifications(accordingTo:)";
                  func_0x0001000c10c0("emitLocalNotifications(accordingTo:)");
                  func_0x000107c61180();
                  puVar6 = &UNK_11068d628;
                  func_0x000107c613fc(&UNK_11068d628,0x20,7);
                  *(long *)(puVar6 + 0x10) = lStack_c8;
                  *(undefined **)(puVar6 + 0x18) = puVar5;
                  pcStack_90 = (code *)0x10374739c;
                  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a8 = 0x42000000;
                  puStack_a0 = &UNK_1000f6b44;
                  puStack_98 = &UNK_11068d640;
                  ppuVar7 = &puStack_b0;
                  puStack_88 = puVar6;
                  func_0x000107c60bc4(ppuVar7);
                  puVar6 = puStack_88;
                  func_0x000107c61174(lStack_c8);
                  func_0x000107c61174(puVar5);
                  func_0x000107c61574(puVar6);
                  func_0x000107c4e524(pcVar11);
                  func_0x000107c61574(puStack_b8);
                  func_0x000107c61574(puVar10);
                  func_0x000107c61170(puVar8);
                  func_0x000107c61170(puStack_f0);
                  func_0x000107c60bd0(ppuVar7);
                  func_0x000107c61170(puVar5);
                  func_0x000107c615e8(pcVar11);
                  uVar16 = uStack_c0;
                  puVar10 = PTR___sypN_11034f1a8;
                }
              }
              goto LAB_103745f48;
            }
          }
          func_0x000107c6142c(lVar2);
        }
      }
LAB_103745f48:
      lVar17 = lVar17 + -1;
      unaff_x20 = lStack_c8;
      plVar18 = plVar18 + 1;
    } while (lVar17 != 0);
  }
  puVar10 = puVar12;
  FUN_10374489c(puVar12);
  func_0x000107c6142c(puVar12);
  return puVar10;
}



/* Entry: 103746598; end: 1037467af;  */

/* WARNING: Possible PIC construction at 0x000103746734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103746828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037468b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010374699c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103746c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103746c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103746c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103746cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103746ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037468d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037469ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037468c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103746cb4) */
/* WARNING: Removing unreachable block (ram,0x000103746c9c) */
/* WARNING: Removing unreachable block (ram,0x000103746c70) */
/* WARNING: Removing unreachable block (ram,0x000103746c54) */
/* WARNING: Removing unreachable block (ram,0x000103746c74) */
/* WARNING: Removing unreachable block (ram,0x0001037469a0) */
/* WARNING: Removing unreachable block (ram,0x0001037468b8) */
/* WARNING: Removing unreachable block (ram,0x00010374682c) */
/* WARNING: Removing unreachable block (ram,0x0001037468d8) */
/* WARNING: Removing unreachable block (ram,0x00010374683c) */
/* WARNING: Removing unreachable block (ram,0x0001037468e0) */
/* WARNING: Removing unreachable block (ram,0x0001037468e4) */
/* WARNING: Removing unreachable block (ram,0x000103746864) */
/* WARNING: Removing unreachable block (ram,0x000103746884) */
/* WARNING: Removing unreachable block (ram,0x00010374690c) */
/* WARNING: Removing unreachable block (ram,0x000103746914) */
/* WARNING: Removing unreachable block (ram,0x00010374691c) */
/* WARNING: Removing unreachable block (ram,0x00010374692c) */
/* WARNING: Removing unreachable block (ram,0x00010374694c) */
/* WARNING: Removing unreachable block (ram,0x0001037469b0) */
/* WARNING: Removing unreachable block (ram,0x0001037469b8) */
/* WARNING: Removing unreachable block (ram,0x000103746a80) */
/* WARNING: Removing unreachable block (ram,0x0001037469c8) */
/* WARNING: Removing unreachable block (ram,0x0001037469e8) */
/* WARNING: Removing unreachable block (ram,0x0001037469f8) */
/* WARNING: Removing unreachable block (ram,0x000103746ce8) */
/* WARNING: Removing unreachable block (ram,0x000103746a00) */
/* WARNING: Removing unreachable block (ram,0x000103746cf0) */
/* WARNING: Removing unreachable block (ram,0x000103746a04) */
/* WARNING: Removing unreachable block (ram,0x000103746a8c) */
/* WARNING: Removing unreachable block (ram,0x000103746b58) */
/* WARNING: Removing unreachable block (ram,0x000103746d3c) */
/* WARNING: Removing unreachable block (ram,0x000103746b5c) */
/* WARNING: Removing unreachable block (ram,0x000103746b64) */
/* WARNING: Removing unreachable block (ram,0x000103746b74) */
/* WARNING: Removing unreachable block (ram,0x000103746b84) */
/* WARNING: Removing unreachable block (ram,0x000103746b98) */
/* WARNING: Removing unreachable block (ram,0x000103746ba0) */
/* WARNING: Removing unreachable block (ram,0x000103746bac) */
/* WARNING: Removing unreachable block (ram,0x000103746aa0) */
/* WARNING: Removing unreachable block (ram,0x000103746bfc) */
/* WARNING: Removing unreachable block (ram,0x000103746c00) */
/* WARNING: Removing unreachable block (ram,0x000103746c0c) */
/* WARNING: Removing unreachable block (ram,0x000103746c1c) */
/* WARNING: Removing unreachable block (ram,0x000103746c30) */
/* WARNING: Removing unreachable block (ram,0x000103746c38) */
/* WARNING: Removing unreachable block (ram,0x000103746c44) */
/* WARNING: Removing unreachable block (ram,0x000103746aa8) */
/* WARNING: Removing unreachable block (ram,0x000103746d34) */
/* WARNING: Removing unreachable block (ram,0x000103746aac) */
/* WARNING: Removing unreachable block (ram,0x000103746ab4) */
/* WARNING: Removing unreachable block (ram,0x000103746ac4) */
/* WARNING: Removing unreachable block (ram,0x000103746ad4) */
/* WARNING: Removing unreachable block (ram,0x000103746ae8) */
/* WARNING: Removing unreachable block (ram,0x000103746af0) */
/* WARNING: Removing unreachable block (ram,0x000103746afc) */
/* WARNING: Removing unreachable block (ram,0x000103746a08) */
/* WARNING: Removing unreachable block (ram,0x000103746d14) */
/* WARNING: Removing unreachable block (ram,0x000103746a0c) */
/* WARNING: Removing unreachable block (ram,0x000103746a14) */
/* WARNING: Removing unreachable block (ram,0x000103746b00) */
/* WARNING: Removing unreachable block (ram,0x000103746d38) */
/* WARNING: Removing unreachable block (ram,0x000103746b08) */
/* WARNING: Removing unreachable block (ram,0x000103746b10) */
/* WARNING: Removing unreachable block (ram,0x000103746b1c) */
/* WARNING: Removing unreachable block (ram,0x000103746b2c) */
/* WARNING: Removing unreachable block (ram,0x000103746b40) */
/* WARNING: Removing unreachable block (ram,0x000103746b48) */
/* WARNING: Removing unreachable block (ram,0x000103746b54) */
/* WARNING: Removing unreachable block (ram,0x000103746a20) */
/* WARNING: Removing unreachable block (ram,0x000103746bb0) */
/* WARNING: Removing unreachable block (ram,0x000103746bb4) */
/* WARNING: Removing unreachable block (ram,0x000103746ce0) */
/* WARNING: Removing unreachable block (ram,0x000103746bbc) */
/* WARNING: Removing unreachable block (ram,0x000103746bc0) */
/* WARNING: Removing unreachable block (ram,0x000103746bd0) */
/* WARNING: Removing unreachable block (ram,0x000103746be4) */
/* WARNING: Removing unreachable block (ram,0x000103746bec) */
/* WARNING: Removing unreachable block (ram,0x000103746bf8) */
/* WARNING: Removing unreachable block (ram,0x000103746a28) */
/* WARNING: Removing unreachable block (ram,0x000103746d30) */
/* WARNING: Removing unreachable block (ram,0x000103746a30) */
/* WARNING: Removing unreachable block (ram,0x000103746a38) */
/* WARNING: Removing unreachable block (ram,0x000103746a44) */
/* WARNING: Removing unreachable block (ram,0x000103746a54) */
/* WARNING: Removing unreachable block (ram,0x000103746a68) */
/* WARNING: Removing unreachable block (ram,0x000103746c48) */
/* WARNING: Removing unreachable block (ram,0x000103746a70) */
/* WARNING: Removing unreachable block (ram,0x000103746a7c) */
/* WARNING: Removing unreachable block (ram,0x000103746c50) */
/* WARNING: Removing unreachable block (ram,0x00010374696c) */
/* WARNING: Removing unreachable block (ram,0x0001037469a8) */
/* WARNING: Removing unreachable block (ram,0x000103746988) */
/* WARNING: Removing unreachable block (ram,0x0001037468a0) */
/* WARNING: Removing unreachable block (ram,0x000103746738) */
/* WARNING: Removing unreachable block (ram,0x000103746750) */
/* WARNING: Removing unreachable block (ram,0x000103746cec) */
/* WARNING: Removing unreachable block (ram,0x000103746c60) */
/* WARNING: Removing unreachable block (ram,0x000103746c68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103746598(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined8 unaff_x22;
  code *unaff_x23;
  undefined *unaff_x24;
  long lVar8;
  long *unaff_x26;
  long *plVar9;
  ulong unaff_x28;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar8 != 0) {
    unaff_x22 = 0x103746e74;
    unaff_x23 = FUN_103747138;
    plVar9 = (long *)(param_1 + 0x20);
    do {
      unaff_x26 = plVar9 + 1;
      lStack_78 = *plVar9;
      FUN_1037467b0(&lStack_70,&lStack_78);
      lVar1 = lStack_70;
      if (lStack_70 != 0) {
        puVar2 = puVar7;
        func_0x000107c61550();
        if ((((int)puVar2 == 0) || ((long)puVar7 < 0)) ||
           (puVar2 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            param_2 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            param_2 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar7) {
              param_2 = puVar7;
            }
            func_0x000107c60480();
          }
          param_2 = param_2 + 1;
          puVar2 = (undefined *)0x0;
          FUN_103746f7c(0,param_2,1,puVar7,0x103746e74,FUN_103747138);
        }
        uVar6 = (ulong)puVar2 & 0xffffffffffffff8;
        unaff_x28 = *(ulong *)(uVar6 + 0x10);
        unaff_x24 = (undefined *)(unaff_x28 + 1);
        puVar7 = puVar2;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= unaff_x28) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          param_2 = unaff_x24;
          FUN_103746f7c(puVar7,unaff_x24,1,puVar2,0x103746e74,FUN_103747138);
          uVar6 = (ulong)puVar7 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar6 + 0x10) = unaff_x24;
        *(long *)(uVar6 + unaff_x28 * 8 + 0x20) = lVar1;
      }
      lVar8 = lVar8 + -1;
      plVar9 = unaff_x26;
    } while (lVar8 != 0);
  }
  puVar3 = *(undefined8 **)(unaff_x20 + _DAT_112f8f9f8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      func_0x000107c60e78();
      puVar7 = (undefined *)*puVar3;
      ppuVar5 = &PTR____CFConstantStringClassReference_110e12538;
      uStack_e0 = unaff_x28;
      plStack_c8 = unaff_x26;
      uStack_c0 = 0;
      puStack_b8 = unaff_x24;
      pcStack_b0 = unaff_x23;
      uStack_a8 = unaff_x22;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e12538);
      if (*(long *)(puVar7 + 0x10) == 0) {
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        puVar7 = param_2;
      }
      else {
        func_0x000107c61434(puVar7);
        puVar2 = param_2;
        func_0x000100029284(ppuVar5);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x0001000bb420(*(long *)(puVar7 + 0x38) + (long)ppuVar5 * 0x20,&uStack_100);
          puVar7 = param_2;
        }
      }
    }
  }
  else {
    uVar4 = 0;
    func_0x000103746f38(0);
    puVar2 = puVar7;
    func_0x000107c5fc48(puVar7,uVar4);
    lStack_78 = 0;
    func_0x000107c5bef0(puVar3);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(puVar2);
    if (lStack_78 != 0) {
      func_0x000107c61654();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar7);
  return;
}



/* Entry: 1037467b0; end: 103746d3f;  */

void FUN_1037467b0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte **ppbVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  byte *pbStack_90;
  ulong uStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = 0;
  uVar4 = 0;
  uVar9 = 0;
  ppbVar13 = (byte **)*param_2;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e12538;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e12538);
  if (ppbVar13[2] == (byte *)0x0) {
LAB_1037468c8:
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_1037468d0:
    func_0x000107c6142c(param_3);
LAB_1037468d8:
    func_0x00010006e7f4(&pbStack_80);
  }
  else {
    func_0x000107c61434(ppbVar13);
    uVar10 = param_3;
    func_0x000100029284(ppuVar2);
    if ((uVar10 & 1) == 0) {
      func_0x000107c6142c(ppbVar13);
      goto LAB_1037468c8;
    }
    func_0x0001000bb420(ppbVar13[7] + (long)ppuVar2 * 0x20,&pbStack_80);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(ppbVar13);
    puVar14 = PTR___sypN_11034f1a8;
    if (lStack_68 == 0) goto LAB_1037468d8;
    ppbVar7 = &pbStack_80;
    func_0x000107c6147c(&pbStack_90,ppbVar7,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    param_3 = uStack_88;
    pbVar5 = pbStack_90;
    if ((uVar3 & 1) != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dad058);
      if (ppbVar13[2] == (byte *)0x0) {
LAB_103746914:
        uStack_78 = 0;
        pbStack_80 = (byte *)0x0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x000107c61434(ppbVar13);
        ppbVar8 = ppbVar7;
        func_0x000100029284(ppuVar2);
        if (((ulong)ppbVar8 & 1) == 0) {
          func_0x000107c6142c(ppbVar13);
          goto LAB_103746914;
        }
        func_0x0001000bb420(ppbVar13[7] + (long)ppuVar2 * 0x20,&pbStack_80);
        func_0x000107c6142c(ppbVar7);
        ppbVar7 = ppbVar13;
      }
      func_0x000107c6142c(ppbVar7);
      if (lStack_68 != 0) {
        ppbVar7 = &pbStack_80;
        func_0x000107c6147c(&pbStack_90,ppbVar7,puVar14 + 8,PTR___sSSN_11034da80,6);
        uVar3 = uStack_88;
        pbVar6 = pbStack_90;
        if ((uVar4 & 1) != 0) {
          ppuVar2 = &PTR____CFConstantStringClassReference_110f9ea78;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9ea78);
          if (ppbVar13[2] == (byte *)0x0) {
LAB_1037469b0:
            uStack_78 = 0;
            pbStack_80 = (byte *)0x0;
            lStack_68 = 0;
            uStack_70 = 0;
          }
          else {
            func_0x000107c61434(ppbVar13);
            ppbVar8 = ppbVar7;
            func_0x000100029284(ppuVar2);
            if (((ulong)ppbVar8 & 1) == 0) {
              func_0x000107c6142c(ppbVar13);
              goto LAB_1037469b0;
            }
            func_0x0001000bb420(ppbVar13[7] + (long)ppuVar2 * 0x20,&pbStack_80);
            func_0x000107c6142c(ppbVar7);
            ppbVar7 = ppbVar13;
          }
          func_0x000107c6142c(ppbVar7);
          if (lStack_68 == 0) {
            func_0x000107c6142c(uVar3);
            goto LAB_1037468d0;
          }
          func_0x000107c6147c(&pbStack_90,&pbStack_80,puVar14 + 8,PTR___sSSN_11034da80,6);
          if ((uVar9 & 1) != 0) {
            uVar9 = (ulong)pbStack_90 & 0xffffffffffff;
            uVar10 = uStack_88 >> 0x38 & 0xf;
            uVar4 = uVar9;
            if ((uStack_88 & 0x2000000000000000) != 0) {
              uVar4 = uVar10;
            }
            if (uVar4 == 0) {
              func_0x000107c6142c();
            }
            else {
              if ((uStack_88 >> 0x3c & 1) == 0) {
                if ((uStack_88 >> 0x3d & 1) == 0) {
                  if (((ulong)pbStack_90 >> 0x3c & 1) == 0) {
                    uVar9 = uStack_88;
                    func_0x000107c60358();
                  }
                  else {
                    pbStack_90 = (byte *)((uStack_88 & 0xfffffffffffffff) + 0x20);
                  }
                  if (*pbStack_90 == 0x2b) {
                    if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x103746d3c);
                      (*pcVar1)();
                    }
                    lVar16 = uVar9 - 1;
                    if (lVar16 == 0) goto LAB_103746c48;
                    lVar15 = 0;
                    do {
                      pbStack_90 = pbStack_90 + 1;
                      if (((9 < *pbStack_90 - 0x30) ||
                          (lVar12 = lVar15 * 10,
                          SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                         (uVar4 = (ulong)(byte)(*pbStack_90 - 0x30), lVar15 = lVar12 + uVar4,
                         SCARRY8(lVar12,uVar4))) goto LAB_103746c48;
                      uVar17 = 0;
                      lVar16 = lVar16 + -1;
                    } while (lVar16 != 0);
                  }
                  else if (*pbStack_90 == 0x2d) {
                    if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x103746d34);
                      (*pcVar1)();
                    }
                    lVar16 = uVar9 - 1;
                    if (lVar16 == 0) {
LAB_103746c48:
                      uVar17 = 1;
                    }
                    else {
                      lVar15 = 0;
                      do {
                        pbStack_90 = pbStack_90 + 1;
                        if (((9 < *pbStack_90 - 0x30) ||
                            (lVar12 = lVar15 * 10,
                            SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                           (uVar4 = (ulong)(byte)(*pbStack_90 - 0x30), lVar15 = lVar12 - uVar4,
                           SBORROW8(lVar12,uVar4))) goto LAB_103746c48;
                        uVar17 = 0;
                        lVar16 = lVar16 + -1;
                      } while (lVar16 != 0);
                    }
                  }
                  else {
                    if (uVar9 == 0) goto LAB_103746c48;
                    lVar16 = 0;
                    if (pbStack_90 == (byte *)0x0) {
                      uVar17 = 0;
                    }
                    else {
                      do {
                        if (((9 < *pbStack_90 - 0x30) ||
                            (lVar15 = lVar16 * 10,
                            SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
                           (uVar4 = (ulong)(byte)(*pbStack_90 - 0x30), lVar16 = lVar15 + uVar4,
                           SCARRY8(lVar15,uVar4))) goto LAB_103746c48;
                        uVar17 = 0;
                        uVar9 = uVar9 - 1;
                        pbStack_90 = pbStack_90 + 1;
                      } while (uVar9 != 0);
                    }
                  }
                }
                else {
                  pbStack_80 = pbStack_90;
                  uStack_78 = uStack_88 & 0xffffffffffffff;
                  uVar17 = (uint)pbStack_90 & 0xff;
                  if (uVar17 == 0x2b) {
                    if (uVar10 == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x103746d40);
                      (*pcVar1)();
                    }
                    lVar16 = uVar10 - 1;
                    if (lVar16 == 0) goto LAB_103746c48;
                    lVar15 = 0;
                    pbVar11 = (byte *)((ulong)&pbStack_80 | 1);
                    do {
                      if (((9 < *pbVar11 - 0x30) ||
                          (lVar12 = lVar15 * 10,
                          SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                         (uVar4 = (ulong)(byte)(*pbVar11 - 0x30), lVar15 = lVar12 + uVar4,
                         SCARRY8(lVar12,uVar4))) goto LAB_103746c48;
                      uVar17 = 0;
                      lVar16 = lVar16 + -1;
                      pbVar11 = pbVar11 + 1;
                    } while (lVar16 != 0);
                  }
                  else if (uVar17 == 0x2d) {
                    if (uVar10 == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x103746d38);
                      (*pcVar1)();
                    }
                    lVar16 = uVar10 - 1;
                    if (lVar16 == 0) goto LAB_103746c48;
                    lVar15 = 0;
                    pbVar11 = (byte *)((ulong)&pbStack_80 | 1);
                    do {
                      if (((9 < *pbVar11 - 0x30) ||
                          (lVar12 = lVar15 * 10,
                          SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                         (uVar4 = (ulong)(byte)(*pbVar11 - 0x30), lVar15 = lVar12 - uVar4,
                         SBORROW8(lVar12,uVar4))) goto LAB_103746c48;
                      uVar17 = 0;
                      lVar16 = lVar16 + -1;
                      pbVar11 = pbVar11 + 1;
                    } while (lVar16 != 0);
                  }
                  else {
                    if (uVar10 == 0) goto LAB_103746c48;
                    lVar16 = 0;
                    ppbVar13 = &pbStack_80;
                    do {
                      if (((9 < *(byte *)ppbVar13 - 0x30) ||
                          (lVar15 = lVar16 * 10,
                          SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
                         (uVar4 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30), lVar16 = lVar15 + uVar4,
                         SCARRY8(lVar15,uVar4))) goto LAB_103746c48;
                      uVar17 = 0;
                      uVar10 = uVar10 - 1;
                      ppbVar13 = (byte **)((long)ppbVar13 + 1);
                    } while (uVar10 != 0);
                  }
                }
              }
              else {
                uVar4 = uStack_88;
                func_0x000100edba6c(pbStack_90,uStack_88,10);
                uVar17 = (uint)uVar4;
              }
              func_0x000107c6142c(uStack_88);
              if ((uVar17 & 0xff) != 1) {
                puVar14 = PTR_PTR_1126a97d0;
                func_0x000107c610f8();
                func_0x000107c5fadc(pbVar5,param_3);
                func_0x000107c6142c(param_3);
                func_0x000107c5fadc(pbVar6,uVar3);
                func_0x000107c6142c(uVar3);
                func_0x000107c47af0();
                func_0x000107c61170(pbVar5);
                func_0x000107c61170(pbVar6);
                goto LAB_1037468e4;
              }
            }
          }
          func_0x000107c6142c(uVar3);
        }
        func_0x000107c6142c(param_3);
        goto LAB_1037468e0;
      }
      goto LAB_1037468d0;
    }
  }
LAB_1037468e0:
  puVar14 = (undefined *)0x0;
LAB_1037468e4:
  *param_1 = puVar14;
  return;
}



/* Entry: 103746d40; end: 103746d9b; -[_TtC23NotificationRecoveryJob32NotificationRecoveryJobProcessor init] */

void FUN_103746d40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationRecoveryJob.NotificationRecoveryJobProcessor",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103746d6c);
  (*pcVar1)();
}



/* Entry: 103746d9c; end: 103746e53; -[_TtC23NotificationRecoveryJob32NotificationRecoveryJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103746dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103746e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103746dcc) */
/* WARNING: Removing unreachable block (ram,0x000103746e1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103746d9c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8f9e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8f9f0));
  return;
}



/* Entry: 103746e54; end: 103746f7b;  */

void FUN_103746e54(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8c18);
  return;
}



/* Entry: 103746f7c; end: 1037470b7;  */

ulong FUN_103746f7c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037470b8);
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
  FUN_1037470b8(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037470b4);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1037470b8; end: 103747137;  */

undefined * FUN_1037470b8(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 103747138; end: 10374722f;  */

long FUN_103747138(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10374722c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103747230);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103746f38(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000103746f38(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103747228);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103747230; end: 103747353;  */

long FUN_103747230(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103747350);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103747354);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e1cb88;
        func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e1cb88;
      func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10374734c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103747354; end: 103747377;  */

void FUN_103747354(undefined1 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  func_0x000100b60084(&uStack_11);
  return;
}



/* Entry: 103747378; end: 1037473cf;  */

void FUN_103747378(long param_1,long param_2)

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



/* Entry: 1037473d0; end: 1037474f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037473d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f8fa08);
  func_0x000107c507d0(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11068d678;
  func_0x000107c613fc(&UNK_11068d678,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11068d718;
  func_0x000107c613fc(&UNK_11068d718,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  pcStack_50 = FUN_103747528;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1014b8460;
  puStack_58 = &UNK_11068d730;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc68(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 1037474f4; end: 103747527;  */

void FUN_1037474f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103747528; end: 103747543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103747528(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x000107c4a83c();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103745864);
      (*pcVar3)();
    }
    func_0x000107c61170();
    FUN_103744b90(0,uVar1,uVar2);
  }
  else {
    if ((param_1 == 0) || (param_2 != 0)) {
      func_0x000107c4a83c();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103745860);
        (*pcVar3)();
      }
      func_0x000107c61170();
      FUN_103744b90(1,uVar1,uVar2);
      func_0x000107c4bc44(*(undefined8 *)(lVar4 + _DAT_112f8fa00));
      param_1 = lVar4;
    }
    else {
      func_0x000107c61174();
      lVar6 = param_1;
      func_0x000107c3e488();
      if (lVar6 == 1) {
        func_0x000103745974(lVar5,uVar1,uVar2);
      }
      else {
        func_0x000107c4a83c();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103745868);
          (*pcVar3)();
        }
        func_0x000107c61170();
        FUN_103744b90(2,uVar1,uVar2);
        func_0x000107c4bc44(*(undefined8 *)(lVar4 + _DAT_112f8fa00));
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103747544; end: 103747757;  */

long FUN_103747544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = &UNK_11068d7e8;
  func_0x000107c613fc(&UNK_11068d7e8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x0001000285a8(0x112f8fa78,&UNK_10dc07c00);
  func_0x000107c613fc();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  uVar2 = 0x103747634;
  func_0x0001000bdd8c(0x103747634,puVar1);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  puVar1 = PTR_PTR_1126ad650;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Entry: 103747758; end: 103747ee7;  */

void FUN_103747758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126ad658;
  func_0x000107c610f8(PTR_PTR_1126ad658);
  func_0x000107c453e4();
  func_0x00010102c3b8(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar8 = PTR___sypN_11034f1a8 + 8;
  uVar3 = param_1;
  func_0x000107c5fc48(param_1);
  func_0x000107c6142c(param_1);
  func_0x000107c45788(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c56b04(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae748;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000106c40130();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5faec();
  func_0x000107c61170(puVar4);
  puVar4 = puVar5;
  func_0x000107c5fb5c(puVar5,puVar8);
  if ((long)puVar4 < 1) {
    func_0x000107c6142c(puVar8);
  }
  else {
    lVar6 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000010;
    *(undefined8 *)(lVar6 + 0x28) = 0x800000010ef1c330;
    *(undefined **)(lVar6 + 0x30) = puVar5;
    *(undefined **)(lVar6 + 0x38) = puVar8;
    lVar7 = lVar6;
    func_0x0001001830b8();
    func_0x000107c61588(lVar6);
    FUN_103747fc8((undefined8 *)(lVar6 + 0x20),0x112d38308,&UNK_10d902040);
    lVar6 = lVar7;
    func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar7);
    puVar8 = puVar2;
    func_0x000107c3d704(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar8);
  }
  func_0x0001000d224c(&uStack_68);
  puVar8 = &UNK_11068d810;
  func_0x000107c613fc(&UNK_11068d810,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  puVar4 = &UNK_11068d838;
  func_0x000107c613fc(&UNK_11068d838,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar8;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  uStack_78 = 0x103747a54;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_103747ee8;
  puStack_80 = &UNK_11068d850;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_70;
  func_0x000107c61174(puVar1);
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar8);
  func_0x000107c44360(uStack_68);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 103747ee8; end: 103747f5f;  */

/* WARNING: Possible PIC construction at 0x000103747f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103747f48) */

void FUN_103747ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103747f60; end: 103747f7b;  */

void FUN_103747f60(long param_1,long param_2)

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



/* Entry: 103747f7c; end: 103747fc7;  */

void FUN_103747f7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103747fc8; end: 103748007;  */

undefined8 FUN_103747fc8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103748008; end: 10374805b;  */

undefined8 FUN_103748008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10374805c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10374805c; end: 103748267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374805c(undefined *param_1,undefined *param_2,undefined *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = param_3;
  func_0x000107c4d484();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c615e8();
    lVar8 = *(long *)(param_2 + _DAT_11307e6a8);
    puVar2 = PTR_PTR_1126b7248;
    func_0x000107c610f8(PTR_PTR_1126b7248);
    func_0x000107c61174();
    func_0x000107c453e4(puVar2);
    func_0x000107c57d34();
    puVar3 = PTR_PTR_1126b7238;
    func_0x000107c610f8(PTR_PTR_1126b7238);
    func_0x000107c453e4();
    func_0x000107c57c1c();
    puVar4 = PTR_PTR_1126b7240;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = puVar4;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103748268);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
    func_0x000107c61170(puVar5);
    func_0x000107c56a40(puVar4);
    func_0x000107c5277c(puVar4);
    puVar5 = PTR_PTR_1126b7228;
    func_0x000107c610f8(PTR_PTR_1126b7228);
    func_0x000107c453e4();
    uVar6 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010dc07c50);
    func_0x000107c5597c(puVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c55958(puVar5);
    func_0x000107c55974(puVar5);
    func_0x000107c55968(puVar5);
    func_0x000107c54734(puVar5);
    lVar7 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c5c2c0();
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar5);
    param_3 = puVar2;
    param_2 = puVar3;
    param_1 = puVar4;
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 103748268; end: 103748283;  */

void FUN_103748268(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103748284; end: 1037482a3;  */

void FUN_103748284(void)

{
  func_0x000107c61168(&PTR_PTR_112f8fb68);
  return;
}



/* Entry: 1037482a4; end: 103748323;  */

void FUN_1037482a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068d928;
  func_0x000107c613fc(&UNK_11068d928,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1037484b4,puVar1);
  return;
}



/* Entry: 103748324; end: 1037484b3;  */

void FUN_103748324(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000100083b20(&puStack_70);
  puVar5 = puStack_70;
  puVar1 = puStack_70;
  func_0x000107c4d484();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar1 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_70);
    puVar2 = puStack_70;
    func_0x000107c4d7f4();
    func_0x000107c61180();
    func_0x000107c61170(puStack_70);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar5 = &UNK_11068d970;
    func_0x000107c613fc(&UNK_11068d970,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    *(undefined **)(puVar5 + 0x18) = puVar1;
    pcStack_50 = FUN_103748584;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101443eec;
    puStack_58 = &UNK_11068d988;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c615f0(puVar2);
    func_0x000107c615f0(puVar1);
    func_0x000107c61574(puVar5);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x0001000a0a8c(0);
    puVar5 = puVar3;
    func_0x000100a0dc54(puVar3,0xd000000000000016,0x800000010dc07cb0);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puVar1);
    func_0x000107c615e8(puVar2);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 1037484b4; end: 1037484cb;  */

void FUN_1037484b4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000100083b20(&puStack_70,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  puVar5 = puStack_70;
  puVar1 = puStack_70;
  func_0x000107c4d484();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar1 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_70);
    puVar2 = puStack_70;
    func_0x000107c4d7f4();
    func_0x000107c61180();
    func_0x000107c61170(puStack_70);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar5 = &UNK_11068d970;
    func_0x000107c613fc(&UNK_11068d970,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    *(undefined **)(puVar5 + 0x18) = puVar1;
    pcStack_50 = FUN_103748584;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101443eec;
    puStack_58 = &UNK_11068d988;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c615f0(puVar2);
    func_0x000107c615f0(puVar1);
    func_0x000107c61574(puVar5);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x0001000a0a8c(0);
    puVar5 = puVar3;
    func_0x000100a0dc54(puVar3,0xd000000000000016,0x800000010dc07cb0);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puVar1);
    func_0x000107c615e8(puVar2);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 1037484cc; end: 10374854b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037484cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  FUN_103748944();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8fbc0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112f8fbc8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10374854c; end: 103748583;  */

void FUN_10374854c(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103748584; end: 1037485a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748584(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_103748944();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f8fbc0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f8fbc8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 1037485a8; end: 10374872b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037485a8(long param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((param_1 != 0) && (param_2 == 0)) {
      func_0x000107c61174();
      lVar1 = param_1;
      func_0x000107c3e488();
      if (lVar1 == 1) {
        uVar5 = *(undefined8 *)(param_3 + _DAT_112f8fbc8);
        puVar2 = &UNK_11068d9e8;
        func_0x000107c613fc(&UNK_11068d9e8,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,param_3);
        puVar3 = &UNK_11068da60;
        func_0x000107c613fc(&UNK_11068da60,0x30,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(code **)(puVar3 + 0x18) = param_4;
        *(undefined8 *)(puVar3 + 0x20) = param_5;
        *(undefined8 *)(puVar3 + 0x28) = param_6;
        pcStack_78 = FUN_103748aec;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100ab47f8;
        puStack_80 = &UNK_11068da78;
        ppuVar4 = &puStack_98;
        puStack_70 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar2 = puStack_70;
        func_0x000107c6157c(param_5);
        func_0x000107c61174(param_6);
        func_0x000107c61574(puVar2);
        func_0x000107c4fb30(uVar5);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170();
  }
  (*param_4)(2,0);
  return;
}



/* Entry: 10374872c; end: 103748837; -[_TtC22NotificationRedriveJob31NotificationRedriveJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_10374872c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
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
  puVar2 = &UNK_11068d9c0;
  func_0x000107c613fc(&UNK_11068d9c0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  uVar3 = param_3;
  FUN_10374896c(param_3,FUN_103748964,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103748838; end: 1037488af;  */

void FUN_103748838(ulong param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar1 = 2;
  }
  else {
    func_0x000107c61170();
    uVar1 = 0;
    if ((param_1 & 1) == 0) {
      uVar1 = 2;
    }
  }
  (*param_3)(uVar1,0);
  return;
}



/* Entry: 1037488b0; end: 10374890b; -[_TtC22NotificationRedriveJob31NotificationRedriveJobProcessor init] */

void FUN_1037488b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationRedriveJob.NotificationRedriveJobProcessor",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037488dc);
  (*pcVar1)();
}



/* Entry: 10374890c; end: 103748943; -[_TtC22NotificationRedriveJob31NotificationRedriveJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103748928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010374892c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374890c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f8fbc0));
  return;
}



/* Entry: 103748944; end: 103748963;  */

void FUN_103748944(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8d58);
  return;
}



/* Entry: 103748964; end: 10374896b;  */

void FUN_103748964(undefined8 param_1,long param_2)

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



/* Entry: 10374896c; end: 103748a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10374896c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f8fbc0);
  func_0x000107c507d0(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11068d9e8;
  func_0x000107c613fc(&UNK_11068d9e8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11068da10;
  func_0x000107c613fc(&UNK_11068da10,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  pcStack_50 = FUN_103748a90;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1014b8460;
  puStack_58 = &UNK_11068da28;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc68(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 103748a90; end: 103748ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748a90(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((param_1 != 0) && (param_2 == 0)) {
      func_0x000107c61174();
      lVar5 = param_1;
      func_0x000107c3e488();
      if (lVar5 == 1) {
        uVar9 = *(undefined8 *)(lVar4 + _DAT_112f8fbc8);
        puVar6 = &UNK_11068d9e8;
        func_0x000107c613fc(&UNK_11068d9e8,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,lVar4);
        puVar7 = &UNK_11068da60;
        func_0x000107c613fc(&UNK_11068da60,0x30,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(code **)(puVar7 + 0x18) = pcVar2;
        *(undefined8 *)(puVar7 + 0x20) = uVar1;
        *(undefined8 *)(puVar7 + 0x28) = uVar3;
        pcStack_78 = FUN_103748aec;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100ab47f8;
        puStack_80 = &UNK_11068da78;
        ppuVar8 = &puStack_98;
        puStack_70 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        puVar6 = puStack_70;
        func_0x000107c6157c(uVar1);
        func_0x000107c61174(uVar3);
        func_0x000107c61574(puVar6);
        func_0x000107c4fb30(uVar9);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170();
  }
  (*pcVar2)(2,0);
  return;
}



/* Entry: 103748ab8; end: 103748aeb;  */

void FUN_103748ab8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103748aec; end: 103748aff;  */

void FUN_103748aec(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar3 = 2;
  }
  else {
    func_0x000107c61170();
    uVar3 = 0;
    if ((param_1 & 1) == 0) {
      uVar3 = 2;
    }
  }
  (*pcVar1)(uVar3,0);
  return;
}



/* Entry: 103748b00; end: 103748b4b; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct localizedPrice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748b00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f8fc08);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f8fc08))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103748b4c; end: 103748b87; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct setLocalizedPrice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f8fc08);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103748b88; end: 103748b97; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct price] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f8fc10));
  return;
}



/* Entry: 103748b98; end: 103748bcb; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct setPrice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8fc10);
  *(undefined8 *)(param_1 + _DAT_112f8fc10) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103748bcc; end: 103748c27; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748bcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f8fc18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f8fc18);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103748c28; end: 103748c73; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct setProductId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748c28(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f8fc18);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 103748c74; end: 103748c83; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct queueStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f8fc20));
  return;
}



/* Entry: 103748c84; end: 103748cb7; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct setQueueStateObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8fc20);
  *(undefined8 *)(param_1 + _DAT_112f8fc20) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103748cb8; end: 103748e63;  */

/* WARNING: Possible PIC construction at 0x000103748ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103748de0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748cb8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_68;
  
  uStack_68 = 0;
  uVar7 = 0;
  func_0x000103fdc51c(0);
  func_0x000107c5fc50(param_1,&uStack_68,uVar7);
  uVar5 = uStack_68;
  if (uStack_68 != 0) {
    uVar12 = uStack_68 & 0xffffffffffffff8;
    if (uStack_68 >> 0x3e == 0) {
      uVar10 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar10 = uStack_68;
      if (-1 < (long)uStack_68) {
        uVar10 = uVar12;
      }
      func_0x000107c60480();
    }
    if (uVar10 != 0) {
      uVar11 = 0;
      uVar2 = *(ulong *)(param_2 + _DAT_1130427e0);
      uVar3 = ((ulong *)(param_2 + _DAT_1130427e0))[1];
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103748e18);
            (*pcVar6)();
          }
          uVar8 = *(ulong *)(uVar5 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar11;
          FUN_10374abf4(uVar11,uVar5);
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103748e14);
          (*pcVar6)();
        }
        uVar9 = *(ulong *)(uVar8 + _DAT_1130426f0);
        uVar4 = ((ulong *)(uVar8 + _DAT_1130426f0))[1];
        if ((uVar9 == uVar2 && uVar4 == uVar3) ||
           (func_0x000107c605b8(uVar9,uVar4,uVar2,uVar3,0), (uVar9 & 1) != 0)) {
          func_0x000107c6142c(uVar5);
          func_0x000106c6b06c(uVar8);
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          goto code_r0x000107c46ecc;
        }
        func_0x000107c61170(uVar8);
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar10);
    }
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
code_r0x000107c46ecc:
                    /* WARNING: Could not recover jumptable at 0x00010c01e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103748e64; end: 103748f9b;  */

/* WARNING: Possible PIC construction at 0x000103748ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103748f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103748f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103748f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103748f68) */
/* WARNING: Removing unreachable block (ram,0x000103748f10) */
/* WARNING: Removing unreachable block (ram,0x000103748ea8) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000103748f7c) */
/* WARNING: Removing unreachable block (ram,0x000103748f8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748e64(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      param_1 = -0x2ffffffffffffff0;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f162fb0);
      func_0x000107c466bc(puVar1);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_113042688);
      func_0x000107c61174();
      func_0x000106c6c5d8(uVar2);
      func_0x000107c610f8(PTR_PTR_1126c71c8);
      func_0x000107c483d8();
      func_0x000107c43b74(param_3);
    }
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c43b70(param_3);
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103748f9c; end: 10374902f; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct purchaseWithPurchaseId:domainInfo:] */

void FUN_103748f9c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
    uVar2 = param_2;
  }
  func_0x000107c61174(param_1);
  FUN_103749430(param_3,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103749030; end: 10374908f; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct init] */

void FUN_103749030(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusIAPProductFetcherDiPluginEntryPoint.ALCProduct",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10374905c);
  (*pcVar1)();
}



/* Entry: 103749090; end: 10374910f; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint10ALCProduct .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037490ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037490e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037490b0) */
/* WARNING: Removing unreachable block (ram,0x0001037490e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8fbf8));
  return;
}



/* Entry: 103749110; end: 10374912f;  */

void FUN_103749110(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8e30);
  return;
}



/* Entry: 103749130; end: 1037493d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749130(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8fc18);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _DAT_112f8fc20;
  *(undefined8 *)(unaff_x20 + _DAT_112f8fc20) = 0;
  *(long *)(unaff_x20 + _DAT_112f8fbf8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8fc00) = param_2;
  lVar8 = *(long *)(param_1 + _DAT_1130427f8);
  uVar10 = *(undefined8 *)(lVar8 + _DAT_1130428a0);
  uVar4 = *(undefined8 *)(lVar8 + _DAT_1130428a8);
  uVar9 = ((undefined8 *)(lVar8 + _DAT_1130428a8))[1];
  func_0x000107c61174();
  func_0x000107c615f0(param_2);
  func_0x000107c61434(uVar9);
  func_0x000107c5fadc(uVar4,uVar9);
  func_0x000107c6142c(uVar9);
  uVar9 = uVar4;
  func_0x000106c6a9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f8fc08);
  *puVar2 = uVar4;
  puVar2[1] = uVar9;
  func_0x000106c6ab60();
  func_0x000107c61180();
  *(long *)(unaff_x20 + _DAT_112f8fc10) = lVar8;
  uVar4 = ((undefined8 *)(param_1 + _DAT_1130427e0))[1];
  uVar9 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_1 + _DAT_1130427e0);
  puVar1[1] = uVar4;
  func_0x000107c61434();
  func_0x000107c6142c(uVar9);
  func_0x000107c5cec0();
  func_0x000107c61180();
  puVar5 = &UNK_11068db30;
  func_0x000107c613fc(&UNK_11068db30,0x18,7);
  *(long *)(puVar5 + 0x10) = param_1;
  puVar6 = &UNK_11068db58;
  func_0x000107c613fc(&UNK_11068db58,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1037493d4;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_70 = FUN_1037493dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10117fbac;
  puStack_78 = &UNK_11068db70;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar5 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar5);
  uVar4 = param_2;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(param_2);
  uVar9 = uVar4;
  func_0x000107c421ac();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar9;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  func_0x000107c61170(uVar9);
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037493d4; end: 1037493db;  */

/* WARNING: Possible PIC construction at 0x000103748ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103748de0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037493d4(undefined8 param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_68;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  uStack_68 = 0;
  uVar8 = 0;
  func_0x000103fdc51c(0);
  func_0x000107c5fc50(param_1,&uStack_68,uVar8);
  uVar6 = uStack_68;
  if (uStack_68 != 0) {
    uVar14 = uStack_68 & 0xffffffffffffff8;
    if (uStack_68 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar12 = uStack_68;
      if (-1 < (long)uStack_68) {
        uVar12 = uVar14;
      }
      func_0x000107c60480();
    }
    if (uVar12 != 0) {
      uVar13 = 0;
      puVar2 = (ulong *)(lVar11 + _DAT_1130427e0);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x103748e18);
            (*pcVar7)();
          }
          uVar9 = *(ulong *)(uVar6 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar9 = uVar13;
          FUN_10374abf4(uVar13,uVar6);
        }
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x103748e14);
          (*pcVar7)();
        }
        uVar10 = *(ulong *)(uVar9 + _DAT_1130426f0);
        uVar5 = ((ulong *)(uVar9 + _DAT_1130426f0))[1];
        if ((uVar10 == uVar3 && uVar5 == uVar4) ||
           (func_0x000107c605b8(uVar10,uVar5,uVar3,uVar4,0), (uVar10 & 1) != 0)) {
          func_0x000107c6142c(uVar6);
          func_0x000106c6b06c(uVar9);
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          goto code_r0x000107c46ecc;
        }
        func_0x000107c61170(uVar9);
        uVar13 = uVar13 + 1;
      } while (uVar1 != uVar12);
    }
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
code_r0x000107c46ecc:
                    /* WARNING: Could not recover jumptable at 0x00010c01e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1037493dc; end: 103749413;  */

void FUN_1037493dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = 0;
  func_0x0001002ed07c();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 103749414; end: 10374942f;  */

void FUN_103749414(long param_1,long param_2)

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



/* Entry: 103749430; end: 103749617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103749430(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_70;
  if (param_2 == 0) {
    puVar2 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0x6c61766e49504149;
    func_0x000107c5fadc(0x6c61766e49504149,0xec00000044496469);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar3);
    puVar4 = puVar5;
    func_0x000107c5ed2c(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c4fd38(puVar2);
    func_0x000107c61180();
  }
  else {
    puVar2 = PTR_PTR_1126b1588;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = *(undefined **)(unaff_x20 + _DAT_112f8fc00);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4f68c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar4 = puVar5;
    func_0x000107c506c8(puVar5);
    func_0x000107c61180();
    func_0x000107c615e8(puVar5);
    puVar5 = &UNK_11068dba8;
    func_0x000107c613fc(&UNK_11068dba8,0x18,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    pcStack_50 = FUN_103749618;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1022dc258;
    puStack_58 = &UNK_11068dbc0;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c61174(puVar2);
    func_0x000107c61574(puVar5);
    func_0x000107c5dc64(puVar4);
    func_0x000107c60bd0(ppuVar1);
  }
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 103749618; end: 103749627;  */

/* WARNING: Possible PIC construction at 0x000103748ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103748f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103748f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103748f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103748f68) */
/* WARNING: Removing unreachable block (ram,0x000103748f10) */
/* WARNING: Removing unreachable block (ram,0x000103748ea8) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000103748f7c) */
/* WARNING: Removing unreachable block (ram,0x000103748f8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749618(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      param_1 = -0x2ffffffffffffff0;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f162fb0);
      func_0x000107c466bc(puVar1);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_113042688);
      func_0x000107c61174();
      func_0x000106c6c5d8(uVar3);
      func_0x000107c610f8(PTR_PTR_1126c71c8);
      func_0x000107c483d8();
      func_0x000107c43b74(uVar2);
    }
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c43b70(uVar2);
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103749628; end: 103749673; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint14BitmojiProduct localizedPrice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749628(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f8fc60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f8fc60))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103749674; end: 1037496af; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint14BitmojiProduct setLocalizedPrice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f8fc60);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1037496b0; end: 1037496bf; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint14BitmojiProduct price] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037496b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f8fc68));
  return;
}



/* Entry: 1037496c0; end: 1037496f3; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint14BitmojiProduct setPrice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037496c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8fc68);
  *(undefined8 *)(param_1 + _DAT_112f8fc68) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1037496f4; end: 1037499ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1037496f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&puStack_90 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    func_0x000107c5eea8(lVar8,param_1);
    lVar2 = lVar8;
    (**(code **)(lVar11 + 0x30))(lVar8,1,lVar1);
    if ((int)lVar2 != 1) {
      (**(code **)(lVar11 + 0x20))(lVar9,lVar8,lVar1);
      puVar5 = PTR_PTR_1126b1588;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f8fc58);
      puVar6 = puVar5;
      func_0x000107c5eeb0();
      uVar3 = 0;
      if (param_4 != 0) {
        uVar3 = param_3;
      }
      lVar8 = -0x2000000000000000;
      if (param_4 != 0) {
        lVar8 = param_4;
      }
      func_0x000107c61434(param_4);
      func_0x000107c5fadc(uVar3,lVar8);
      func_0x000107c6142c(lVar8);
      func_0x000107c4f690(uVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar3);
      uVar3 = uVar10;
      func_0x000107c506c8(uVar10);
      func_0x000107c61180();
      func_0x000107c615e8(uVar10);
      puVar6 = &UNK_11068dbf8;
      func_0x000107c613fc(&UNK_11068dbf8,0x18,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      pcStack_70 = FUN_103749e48;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1022dc258;
      puStack_78 = &UNK_11068dc10;
      ppuVar7 = &puStack_90;
      puStack_68 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_68;
      func_0x000107c61174(puVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c5dc64(uVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(uVar3);
      (**(code **)(lVar11 + 8))(lVar9,lVar1);
      return puVar5;
    }
    func_0x0001018d3afc(lVar8);
  }
  puVar5 = PTR_PTR_1126b3540;
  func_0x000107c61168(PTR_PTR_1126b3540);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0x6c61766e49504149;
  func_0x000107c5fadc(0x6c61766e49504149,0xec00000044496469);
  func_0x000107c466bc(puVar6);
  func_0x000107c61170(uVar3);
  puVar4 = puVar6;
  func_0x000107c5ed2c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c4fd38(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 103749a00; end: 103749b7f;  */

/* WARNING: Possible PIC construction at 0x000103749a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103749ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103749b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103749b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103749b48) */
/* WARNING: Removing unreachable block (ram,0x000103749adc) */
/* WARNING: Removing unreachable block (ram,0x000103749a48) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000103749b5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749a00(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      param_1 = -0x2ffffffffffffff0;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f162fb0);
      func_0x000107c466bc(puVar1);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_113042688);
      func_0x000107c61174();
      func_0x000106c6c5d8(uVar2);
      puVar1 = PTR_PTR_1126c71c8;
      func_0x000107c610f8();
      func_0x000107c483d8();
      if (*(long *)(param_1 + _DAT_113042690) != 0) {
        puStack_40 = puVar1;
        func_0x000103fdbbbc(FUN_103749e6c,auStack_50);
      }
      func_0x000107c43b74(param_3);
    }
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c43b70(param_3);
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103749b80; end: 103749c2b; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint14BitmojiProduct purchaseWithPurchaseId:domainInfo:] */

void FUN_103749b80(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_1037496f4(param_3,uVar1,param_4,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103749c2c; end: 103749c8b; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint14BitmojiProduct init] */

void FUN_103749c2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusIAPProductFetcherDiPluginEntryPoint.BitmojiProduct",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103749c58);
  (*pcVar1)();
}



/* Entry: 103749c8c; end: 103749ce7; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint14BitmojiProduct .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103749ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103749cac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8fc50));
  return;
}



/* Entry: 103749ce8; end: 103749d07;  */

void FUN_103749ce8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8f18);
  return;
}



/* Entry: 103749d08; end: 103749e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749d08(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c614f0();
  *(long *)(unaff_x20 + _DAT_112f8fc50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8fc58) = param_2;
  lVar4 = *(long *)(param_1 + _DAT_1130427f8);
  uVar5 = *(undefined8 *)(lVar4 + _DAT_1130428a0);
  uVar2 = *(undefined8 *)(lVar4 + _DAT_1130428a8);
  uVar3 = ((undefined8 *)(lVar4 + _DAT_1130428a8))[1];
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61434(uVar3);
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  uVar3 = uVar2;
  func_0x000106c6a9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8fc60);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000106c6ab60();
  func_0x000107c61180();
  *(long *)(unaff_x20 + _DAT_112f8fc68) = lVar4;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103749e48; end: 103749e6b;  */

/* WARNING: Possible PIC construction at 0x000103749a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103749ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103749b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103749b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103749b48) */
/* WARNING: Removing unreachable block (ram,0x000103749adc) */
/* WARNING: Removing unreachable block (ram,0x000103749a48) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000103749b5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749e48(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      param_1 = -0x2ffffffffffffff0;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f162fb0);
      func_0x000107c466bc(puVar1);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_113042688);
      func_0x000107c61174();
      func_0x000106c6c5d8(uVar3);
      puVar1 = PTR_PTR_1126c71c8;
      func_0x000107c610f8();
      func_0x000107c483d8();
      if (*(long *)(param_1 + _DAT_113042690) != 0) {
        puStack_40 = puVar1;
        func_0x000103fdbbbc(FUN_103749e6c,auStack_50);
      }
      func_0x000107c43b74(uVar2);
    }
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c43b70(uVar2);
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103749e6c; end: 103749e9f;  */

void FUN_103749e6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5ee20();
  func_0x000107c53df0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103749ea0; end: 103749eb3; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint29PlusIAPProductFetcherDiPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103749ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126df280;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f8fc98);
  _objc_retain(uVar2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,uVar2,puVar1);
  _objc_release(uVar2);
  return param_3;
}



/* Entry: 103749eb4; end: 103749f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103749eb4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  long lStack_50;
  long lStack_48;
  
  puVar5 = auStack_60;
  func_0x000107c610f8();
  uVar6 = *(undefined8 *)(param_1 + _DAT_113042550);
  lVar2 = 0;
  FUN_10374aa38();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8fd18) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(uVar6);
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1);
  *(long **)(unaff_x20 + _DAT_112f8fc98) = plVar4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar5;
}



/* Entry: 103749f6c; end: 10374a02f; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint29PlusIAPProductFetcherDiPlugin initWithStoreKitServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103749f6c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_60;
  lVar2 = param_1;
  func_0x000107c614f0();
  uVar7 = *(undefined8 *)(param_3 + _DAT_113042550);
  lVar3 = 0;
  FUN_10374aa38();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f8fd18) = uVar7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar7);
  plVar5 = &lStack_50;
  func_0x000107c61154(plVar5,puVar1);
  *(long **)(param_1 + _DAT_112f8fc98) = plVar5;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar6;
}



/* Entry: 10374a030; end: 10374a08f; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint29PlusIAPProductFetcherDiPlugin init] */

void FUN_10374a030(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusIAPProductFetcherDiPluginEntryPoint.PlusIAPProductFetcherDiPlugin",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10374a05c);
  (*pcVar1)();
}



/* Entry: 10374a090; end: 10374a09f; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint29PlusIAPProductFetcherDiPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374a090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8fc98));
  return;
}



/* Entry: 10374a0a0; end: 10374a0bf;  */

void FUN_10374a0a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8ff0);
  return;
}



/* Entry: 10374a0c0; end: 10374a12b;  */

void FUN_10374a0c0(void)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x0001000823a8(0x10374a100,0);
  return;
}



/* Entry: 10374a12c; end: 10374a14b;  */

void FUN_10374a12c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9160);
  return;
}



/* Entry: 10374a14c; end: 10374a197; -[_TtC39PlusIAPProductFetcherDiPluginEntryPoint31PlusIAPProductFetcherStubPlugin pushToValdiMarshaller:] */

undefined8 FUN_10374a14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10374a12c(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x00010afa5c20(param_3,uVar1);
  func_0x000107c61170(uVar1);
  return param_3;
}



/* Entry: 10374a198; end: 10374a1ab;  */

void FUN_10374a198(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10374a1ac; end: 10374a1cb;  */

void FUN_10374a1ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128e90b0);
  return;
}


