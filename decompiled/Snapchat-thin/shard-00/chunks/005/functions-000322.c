/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006baa0c; end: 1006baa43;  */

void FUN_1006baa0c(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x24;
  
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x24;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(unaff_x19 + 0x38,unaff_x19 + 0xa0,0x48);
  return;
}



/* Entry: 1006baa44; end: 1006baabf;  */

void FUN_1006baa44(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_2 + 1);
  do {
    uVar4 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 - 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar4 & 0x1fffffffc) == 4) {
    (**(code **)(*param_2 + 0x10))(param_2,0,param_1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006baab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 8))(param_2);
      return;
    }
  }
  return;
}



/* Entry: 1006baac0; end: 1006baad3;  */

void FUN_1006baac0(void)

{
  return;
}



/* Entry: 1006baad4; end: 1006babaf;  */

long FUN_1006baad4(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    func_0x000107c29eec();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar5 != uVar3) break;
        lVar4 = (long)(plVar6 + 2);
        FUN_1006760a8(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}



/* Entry: 1006babb0; end: 1006bac17;  */

void FUN_1006babb0(void)

{
  long unaff_x19;
  undefined8 unaff_x27;
  
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = unaff_x27;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined4 *)(unaff_x19 + 0xa8) = 0x2a7;
  return;
}



/* Entry: 1006bac18; end: 1006bac37;  */

void FUN_1006bac18(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006bac38; end: 1006bac3f;  */

void FUN_1006bac38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006bac40; end: 1006bac93;  */

void FUN_1006bac40(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006bac94; end: 1006baca3;  */

long FUN_1006bac94(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x19;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x29;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puVar4 = (ulong *)(lVar5 + 0x28);
  func_0x0001004a6390(unaff_x29 + -0x28);
  uVar6 = *puVar4;
  uVar1 = puVar4[1];
  while ((uVar7 = uVar1, uVar6 != uVar1 &&
         (uVar3 = uVar6, FUN_100152bb8(uVar6,"api"), uVar7 = uVar6, (uVar3 & 1) == 0))) {
    uVar6 = uVar6 + 0x30;
  }
  if (uVar7 == *(ulong *)(lVar5 + 8)) {
    puVar2 = &UNK_10f4bc931;
    func_0x00010002b82c();
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50(lVar5,unaff_x19,puVar2);
    return lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return unaff_x19;
}



/* Entry: 1006baca4; end: 1006bad33;  */

void FUN_1006baca4(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  
  FUN_1006bac94();
  FUN_100634368();
  func_0x000100634378();
  func_0x000100634384();
  FUN_1004b5564();
  FUN_1006bad34();
  FUN_100634748();
  func_0x0001006bad3c();
  func_0x0001006bad4c();
  if ((extraout_x8 & 1) == 0) {
    func_0x0001006bad58(*unaff_x20);
    (**(code **)(extraout_x8_00 + 0x2c0))();
    FUN_1006bad34();
    func_0x0001006a5d5c();
    func_0x0001006bbde4();
    func_0x0001006bbdf4();
  }
  func_0x0001006a5d80();
  func_0x0001006a5d88();
  return;
}



/* Entry: 1006bad34; end: 1006bad6f;  */

long FUN_1006bad34(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + 0x10);
  lVar2 = *plVar1;
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x000100552990();
    lVar2 = (long)plVar1 + lVar2;
  }
  return lVar2;
}



/* Entry: 1006bad70; end: 1006bbb6b;  */

void FUN_1006bad70(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100694ff8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x60) = uStack_78;
  *(undefined8 *)(param_2 + 0x68) = uStack_80;
  *(undefined8 *)(param_2 + 0x70) = uStack_88;
  *(undefined8 *)(param_2 + 0x78) = uStack_90;
  *(undefined8 *)(param_2 + 0x80) = uStack_98;
  *(undefined8 *)(param_2 + 0x88) = uStack_a0;
  *(undefined8 *)(param_2 + 0x90) = uStack_a8;
  *(undefined8 *)(param_2 + 0x98) = uStack_b0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_b8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_c0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_c8;
  FUN_1000285a8(0x112de5bb0,&UNK_10db261b0);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174(uStack_c8);
  uVar15 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x18) = puVar13;
  FUN_1000285a8(0x112ef7288,&UNK_10db261b8);
  func_0x000107c610f8();
  uVar15 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  FUN_10025a71c();
  puVar13 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x20) = puVar13;
  FUN_1000285a8(0x112de5ba0,&UNK_10db261c0);
  func_0x000107c610f8();
  uVar15 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x28) = puVar13;
  FUN_1000285a8(0x112ef7290,&UNK_10db261c8);
  func_0x000107c610f8();
  uVar15 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x30) = puVar13;
  FUN_1000285a8(0x112ef7298,&UNK_10db261d0);
  func_0x000107c610f8();
  uVar15 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  FUN_10025a71c();
  puVar13 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x38) = puVar13;
  FUN_1000285a8(0x112de5ba8,&UNK_10d9b0520);
  func_0x000107c610f8();
  uVar15 = uStack_f8;
  func_0x000107c6157c(uStack_f8);
  FUN_10025a71c();
  puVar13 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x40) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x48) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x50) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x58) = puVar13;
  puVar13 = PTR_PTR_1126ac010;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar13;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar16 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar19 = 0xd000000000000022;
  uVar15 = uVar19;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc71f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000016;
  uVar15 = uVar18;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0f3f70);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000015;
  uVar15 = uVar16;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19ca0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar15 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0f3f90);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  lVar22 = *(long *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0f3fb0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(uVar15);
  lVar23 = *(long *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0f3fd0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(uVar19);
  lVar20 = *(long *)(param_2 + 0x58);
  func_0x000107c61174(uVar21);
  func_0x000107c61174();
  uVar15 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0f4000);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar21);
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  uVar15 = uVar17;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0f4030);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0f4050);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar16 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc7240);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  uVar15 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0f4080);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar15);
  uVar16 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0f40a0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar16 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar16);
  uVar17 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc7270);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c3e740(uVar15);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006bbb64);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0xb8) = lVar22;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar23 != 0) {
    *(long *)(param_2 + 0xc0) = lVar23;
    func_0x000107c52018();
    func_0x000107c61180();
    if (lVar20 != 0) {
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar12);
      func_0x000107c61574(uStack_d0);
      func_0x000107c61574(uStack_d8);
      func_0x000107c61574(uStack_e0);
      func_0x000107c61574(uStack_e8);
      func_0x000107c61574(uStack_f0);
      func_0x000107c61574(uStack_f8);
      *(long *)(param_2 + 200) = lVar20;
      *param_1 = param_2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006bbb6c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006bbb68);
  (*pcVar1)();
}



/* Entry: 1006bbb6c; end: 1006bbbaf;  */

void FUN_1006bbb6c(void)

{
  long unaff_x20;
  
  FUN_1006bad70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 1006bbbb0; end: 1006bbc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006bbbb0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100694e58();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11302a518) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1006bbc18; end: 1006bbc23;  */

/* WARNING: Possible PIC construction at 0x0001006bbcc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006bbcc4) */

void FUN_1006bbc18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1105a32a8;
  func_0x000107c613fc(&UNK_1105a32a8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112ef7ac0;
  FUN_1000285a8(0x112ef7ac0,&UNK_10db27158);
  func_0x000107c613fc();
  puVar4 = &UNK_102b61730;
  FUN_1000841f8(&UNK_102b61730,puVar2,uVar3);
  FUN_100084214(&UNK_10db27120,0x33,2);
  *param_1 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1006bbc24; end: 1006bbce3;  */

/* WARNING: Possible PIC construction at 0x0001006bbcc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006bbcc4) */

void FUN_1006bbc24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1105a32a8;
  func_0x000107c613fc(&UNK_1105a32a8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112ef7ac0;
  FUN_1000285a8(0x112ef7ac0,&UNK_10db27158);
  func_0x000107c613fc();
  puVar3 = &UNK_102b61730;
  FUN_1000841f8(&UNK_102b61730,puVar1,uVar2);
  FUN_100084214(&UNK_10db27120,0x33,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1006bbce4; end: 1006bbceb;  */

void FUN_1006bbce4(void)

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



/* Entry: 1006bbcec; end: 1006bbd1f;  */

void FUN_1006bbcec(void)

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



/* Entry: 1006bbd20; end: 1006bbd53;  */

void FUN_1006bbd20(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1006bbd54; end: 1006bbd6b;  */

void FUN_1006bbd54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1006bbd6c; end: 1006bbda7;  */

void FUN_1006bbd6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1006bbda8; end: 1006bbdfb;  */

void FUN_1006bbda8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1006bbdfc; end: 1006bc107;  */

void FUN_1006bbdfc(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  uint uVar4;
  long *plVar5;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long *extraout_x8_00;
  long *plVar6;
  long *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  long lVar7;
  long extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  plVar5 = param_1;
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_1006bbe84;
  do {
    func_0x000108689774();
    lVar10 = *plVar5;
    func_0x0001086895c4();
    func_0x0001086897c4();
    if ((bool)in_ZR) {
      plVar5 = param_1 + 10;
      func_0x000108688344();
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
LAB_1006bbf70:
    func_0x0001086897e4();
    (*extraout_x8_03)();
    lVar7 = *(long *)(param_1[0x13] + 0x60) * 1000000;
    uVar3 = (long)plVar5 - lVar10 == lVar7;
    if (lVar7 <= (long)plVar5 - lVar10) {
      FUN_10054ed98(param_1 + 0xd);
      lVar7 = 0;
      param_1[0x11] = param_1[0xd];
      if (param_1[0xd] != 0) {
        do {
          func_0x000100633f70();
        } while (extraout_w10_03 != 0);
        lVar7 = param_1[0x11];
      }
      param_1[0x11] = 0;
      param_1[0x12] = param_1[0x13];
      param_1[7] = lVar7;
      param_1[8] = param_1[0x13];
      func_0x0001086897ac();
      func_0x0001086896f4();
      func_0x000108688478();
      func_0x00010868971c();
      func_0x000108688450(param_1 + 7);
      lVar7 = param_1[0xe];
      param_1[0x10] = lVar7;
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 0x200000000;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001086897c4();
      if ((bool)uVar3) {
        FUN_10054eee0(param_1 + 10,param_1 + 0xf);
        FUN_10054ef20(param_1 + 0xb,param_1 + 0x10);
      }
      else {
        param_1[0xb] = param_1[0x10];
        param_1[10] = param_1[0xf];
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 0xc) = 1;
      }
      func_0x000108688344(param_1 + 0xf);
      func_0x00010868972c();
      func_0x000108689724();
    }
    plVar9 = (long *)0x0;
LAB_1006bbe28:
    while( true ) {
      *(char *)((long)param_1 + 0xab) = (char)plVar9;
      param_1[0x14] = lVar10;
      *(undefined1 *)((long)param_1 + 0xaa) = *(undefined1 *)((long)param_1 + 0xad);
      *(undefined1 *)((long)param_1 + 0xa9) = *(undefined1 *)((long)param_1 + 0xac);
      func_0x000100633f5c();
      if (extraout_x8 != 0) {
        do {
          func_0x000100633f70();
        } while (extraout_w10 != 0);
      }
      plVar5 = param_1 + 4;
      func_0x00010061e2f8();
      if (((ulong)plVar5 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x15) = 0;
        func_0x0001006bc1f0();
        if (*plVar5 == 0) {
          FUN_10054ef74();
        }
        func_0x000100633f80();
        if (((ulong)plVar9 & 1) != 0) {
          return;
        }
      }
LAB_1006bbe84:
      plVar9 = param_1 + 4;
      FUN_1006bc108();
      uVar4 = (uint)plVar9;
      *(char *)((long)param_1 + 0xad) = (char)plVar9;
      plVar5 = plVar9;
      func_0x0001006bc1e4(uVar4 >> 8 & 1);
      if ((uVar4 >> 8 & 1) == 0) {
        func_0x000108689670();
        func_0x00010868976c();
        func_0x0001086895f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_1);
        return;
      }
      in_ZR = (uint)*(byte *)((long)param_1 + 0xab) == (uVar4 & 0xff);
      if (!(bool)in_ZR) break;
LAB_1006bbeac:
      lVar10 = param_1[0x14];
    }
    if (((ulong)plVar9 & 1) != 0) {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        func_0x0001005ed540(param_1 + 0xb);
      }
      lVar10 = param_1[0x14];
      plVar9 = (long *)0x1;
      goto LAB_1006bbe28;
    }
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) break;
    func_0x00010063401c(param_1[10]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      plVar9 = (long *)0x0;
      goto LAB_1006bbeac;
    }
    param_1[4] = param_1[10];
    do {
      func_0x000100633f70();
    } while (extraout_w10_00 != 0);
    func_0x000100633fb0();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x15) = 1;
      func_0x0001006bc1f0();
      lVar10 = *plVar5;
      if (lVar10 == 0) {
        FUN_10054ef74();
        lVar10 = *plVar5;
      }
      func_0x000108689754();
      plVar6 = extraout_x8_00;
      do {
        if (*plVar6 == 0) {
          func_0x000100633fcc();
          plVar6 = extraout_x8_02;
          uVar4 = extraout_w10_02;
          uVar8 = extraout_x11_00;
        }
        else {
          func_0x00010868962c();
          plVar6 = extraout_x8_01;
          uVar4 = extraout_w10_01;
          uVar8 = extraout_x11;
        }
        if ((uVar8 & 1) != 0) {
          func_0x0001086895ac();
          if ((bool)in_ZR) {
            func_0x00010868957c();
            func_0x000108689510();
            func_0x00010868953c();
            func_0x000108689744();
          }
          func_0x00010868959c();
          *(long *)(extraout_x8_04 + 0x20) = lVar10;
          func_0x00010868958c(plVar9[0x12]);
          plVar9[2] = 0;
          return;
        }
      } while ((uVar4 >> 1 & 1) == 0);
    }
  } while( true );
  lVar10 = param_1[0x14];
  goto LAB_1006bbf70;
}



/* Entry: 1006bc108; end: 1006bc18b;  */

uint FUN_1006bc108(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  plVar8 = (long *)(param_1 + 8);
  pbVar1 = (byte *)(*plVar8 + 0xa8);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
  lVar7 = *plVar8;
  if (*(long *)(lVar7 + 0xe8) == 0) {
    pcVar2 = (char *)(lVar7 + 0xb8);
    lVar7 = *plVar8;
    if (*pcVar2 == '\x01') {
      FUN_1006716e8(lVar7 + 0x58);
      uVar6 = 0;
      iVar9 = 0;
      goto LAB_1006bc170;
    }
  }
  uVar6 = (uint)lVar7;
  FUN_1006bc18c();
  iVar9 = 1;
LAB_1006bc170:
  *pbVar1 = 0;
  return uVar6 | iVar9 << 8;
}



/* Entry: 1006bc18c; end: 1006bc1e3;  */

undefined1 FUN_1006bc18c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(param_1 + 0xd8);
  uVar1 = lVar2 + 1;
  uVar5 = *(ulong *)(param_1 + 0xa0);
  uVar4 = 0;
  if (uVar5 != 0) {
    uVar4 = uVar1 / uVar5;
  }
  *(ulong *)(param_1 + 0xd8) = uVar1 - uVar4 * uVar5;
  *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + -1;
  uVar3 = *(undefined1 *)(*(long *)(param_1 + 0xc0) + *(long *)(param_1 + 0xd0) * lVar2);
  FUN_1006716e8(param_1 + 0x10);
  return uVar3;
}



/* Entry: 1006bc1e4; end: 1006bc1ff;  */

long * FUN_1006bc1e4(void)

{
  long *plVar1;
  undefined1 in_w8;
  long unaff_x19;
  
  *(undefined1 *)(unaff_x19 + 0xac) = in_w8;
  plVar1 = (long *)(unaff_x19 + 0x28);
  if (*plVar1 != 0) {
    FUN_1006baa44(plVar1);
  }
  return plVar1;
}



/* Entry: 1006bc200; end: 1006bc28f;  */

void FUN_1006bc200(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  
  FUN_1006bac94();
  FUN_100634368();
  func_0x000100634378();
  func_0x000100634384();
  FUN_1004b5564();
  FUN_1006bad34();
  FUN_100634748();
  func_0x0001006bad3c();
  func_0x0001006bad4c();
  if ((extraout_x8 & 1) == 0) {
    func_0x0001006bad58(*unaff_x20);
    (**(code **)(extraout_x8_00 + 0x2d0))();
    FUN_1006bad34();
    func_0x0001006a5d5c();
    func_0x0001006bbde4();
    func_0x0001006bbdf4();
  }
  func_0x0001006a5d80();
  func_0x0001006a5d88();
  return;
}



/* Entry: 1006bc290; end: 1006bc29f;  */

void FUN_1006bc290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001006bc29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x60))();
  return;
}



/* Entry: 1006bc2a0; end: 1006bc47f;  */

void FUN_1006bc2a0(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = in_ZR;
  if (*(long *)(*(long *)(param_1 + 0x38) + 0x30) != 0) {
    func_0x000107c29da8(*(long *)(param_1 + 0x20) + 0x1b8);
    lVar8 = *(long *)(param_1 + 0x38);
    func_0x000107c33564(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    (*extraout_x8)();
    plVar9 = (long *)(lVar8 + 0x28);
    do {
      plVar9 = (long *)*plVar9;
      uVar5 = in_ZR;
      if (plVar9 == (long *)0x0) goto LAB_1006bc410;
      iVar6 = (int)plVar9[7];
      func_0x000107c335a0();
    } while (iVar6 == 0);
    FUN_10056337c(param_1 + 0x130);
    FUN_1006bc480();
    uVar5 = 0;
    if ((bool)in_ZR) {
      lVar8 = *(long *)(param_1 + 0x38);
      lStack_80 = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c33564(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
      (*extraout_x8_00)();
      plVar9 = (long *)(lVar8 + 0x28);
      while (lVar4 = lStack_78, plVar9 = (long *)*plVar9, lVar10 = lStack_80, plVar9 != (long *)0x0)
      {
        iVar6 = (int)plVar9[7];
        func_0x000107c335a0();
        if (iVar6 != 0) {
          FUN_10065d008(&lStack_80,plVar9 + 2);
        }
      }
      for (; uVar5 = lVar10 == lVar4, !(bool)uVar5; lVar10 = lVar10 + 0x18) {
        lVar7 = lVar8 + 0x18;
        func_0x000107c29900(lVar7,lVar10);
        if (lVar7 != 0) {
          lVar1 = *(long *)(lVar7 + 0x38);
          lStack_88 = *(long *)(lVar7 + 0x40);
          lStack_90 = lVar1;
          if (lStack_88 != 0) {
            do {
              FUN_100567d5c();
            } while (extraout_w10 != 0);
          }
          lVar7 = lVar1;
          func_0x000107c335a0();
          if ((int)lVar7 != 0) {
            if (*(char *)(lVar1 + 0x28) == '\x01') {
              *(undefined1 *)(lVar1 + 0x28) = 0;
            }
            else {
              *(undefined4 *)(lVar1 + 0x38) = 1;
              lStack_68 = *(long *)(lVar1 + 0x18);
              if (lStack_68 != 0) {
                plVar9 = (long *)(lStack_68 + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar3) {
                    *plVar9 = *plVar9 + 0x200000000;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              func_0x0001005ed540(&lStack_68);
              func_0x00010054ec98(&lStack_68);
            }
          }
          func_0x000107c298e8(&lStack_90);
        }
      }
      func_0x0001005fb56c(&lStack_80);
    }
  }
LAB_1006bc410:
  FUN_10056337c(param_1 + 0x160);
  FUN_1006bc480();
  if (!(bool)uVar5) {
    return;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x348) + 8) = 0;
  func_0x000107c289cc(&stack0xffffffffffffffc8);
  func_0x000107c289d8(&stack0xffffffffffffffb8,&stack0xffffffffffffffc8);
  func_0x000107c289dc(&stack0xffffffffffffffc8);
  func_0x000107c28850(&stack0xffffffffffffffd8);
  func_0x000107c27f98(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1006bc480; end: 1006bc48b;  */

void FUN_1006bc480(void)

{
  return;
}



/* Entry: 1006bc48c; end: 1006bc4ab;  */

void FUN_1006bc48c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ede58);
  return;
}



/* Entry: 1006bc4ac; end: 1006bc59f;  */

undefined * FUN_1006bc4ac(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112ddb328,&UNK_10d9a0178);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006bc59c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006bc5a0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1006bc5a0; end: 1006bc5a7;  */

void FUN_1006bc5a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1006bc5a8; end: 1006bc5cb;  */

void FUN_1006bc5a8(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006bc5cc; end: 1006bc657; -[SCFriendsFeedUpdateSequenceTracker shouldProcessWithFeedEntry:fetchContext:updateType:] */

uint FUN_1006bc5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1006bc658(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1006bc658; end: 1006bc83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1006bc658(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  byte abStack_78 [24];
  
  uVar10 = param_1;
  uVar5 = param_2;
  func_0x000107c51f30();
  func_0x000107c61180();
  if (uVar10 == 0) {
    bVar7 = 1;
    goto LAB_1006bc81c;
  }
  uVar2 = uVar10;
  func_0x000107c5d38c();
  func_0x000107c61170(uVar10);
  func_0x000107c40674();
  func_0x000107c61180();
  uVar10 = param_1;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  lVar1 = _DAT_112ddb2e8;
  func_0x000107c61428(unaff_x20 + _DAT_112ddb2e8,abStack_78,0x20,0);
  lVar9 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_1006bc764:
    func_0x000107c614a8(abStack_78);
    if (uVar2 == 0) {
      uVar10 = 0;
      goto LAB_1006bc7d8;
    }
LAB_1006bc770:
    func_0x000107c61428(unaff_x20 + lVar1,abStack_78,0x21,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61558(uVar4);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    FUN_1006bca08(uVar2,uVar3,uVar5,uVar4);
    func_0x000107c6142c(uVar5);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar8;
    func_0x000107c614a8(abStack_78);
    bVar7 = 1;
  }
  else {
    func_0x000107c61434(lVar9);
    uVar10 = uVar3;
    uVar6 = uVar5;
    func_0x000100029284();
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(lVar9);
      goto LAB_1006bc764;
    }
    uVar10 = *(ulong *)(*(long *)(lVar9 + 0x38) + uVar10 * 8);
    func_0x000107c614a8(abStack_78);
    func_0x000107c6142c(lVar9);
    if (uVar10 < uVar2) goto LAB_1006bc770;
LAB_1006bc7d8:
    func_0x000107c6142c(uVar5);
    func_0x00010196b038(param_2,param_3,uVar2 == uVar10);
    bVar7 = 0;
  }
  FUN_1000d224c(abStack_78);
  bVar7 = bVar7 | abStack_78[0] ^ 1;
LAB_1006bc81c:
  return bVar7 & 1;
}



/* Entry: 1006bc840; end: 1006bc847; -[SCNMessagingFeedEntry sequenceId] */

undefined8 FUN_1006bc840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1006bc848; end: 1006bc84f; -[SCNMessagingFeedEntry conversationId] */

undefined8 FUN_1006bc848(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006bc850; end: 1006bc8a7; -[SCNMessagingUUID toString] */

void FUN_1006bc850(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1006bc8a8();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006bc8a8; end: 1006bca07;  */

undefined1  [16] FUN_1006bc8a8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long unaff_x20;
  undefined1 auVar12 [16];
  
  lVar4 = unaff_x20;
  func_0x000107c44fc8();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar4);
  uVar2 = (uint)(param_2 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar11 == 0) {
      uVar9 = param_2;
      func_0x00010006c090(lVar5);
      uVar10 = param_2 & 0xff000000000000;
      param_2 = uVar9;
      if (uVar10 != 0) {
LAB_1006bc948:
        func_0x000107c44fc8();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006bca08);
          (*pcVar3)();
        }
        func_0x000107c61178();
        func_0x000107c3eea8();
        puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSUUID_1126b0270);
        func_0x000107c48ff4();
        puVar7 = puVar6;
        func_0x000107c3ac54();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5faec();
        func_0x000107c61170(puVar7);
        uVar10 = param_2;
        func_0x000107c5fb1c(puVar8,param_2);
        func_0x000107c61170(unaff_x20);
        func_0x000107c61170(puVar6);
        func_0x000107c6142c(param_2);
        goto LAB_1006bc9f0;
      }
    }
    else {
      func_0x00010006c090(lVar5);
      if ((long)(int)lVar5 != lVar5 >> 0x20) goto LAB_1006bc948;
    }
  }
  else if (uVar11 == 2) {
    lVar4 = *(long *)(lVar5 + 0x10);
    lVar1 = *(long *)(lVar5 + 0x18);
    func_0x00010006c090(lVar5);
    if (lVar4 != lVar1) goto LAB_1006bc948;
  }
  else {
    func_0x00010006c090(lVar5);
  }
  puVar8 = (undefined *)0x0;
  uVar10 = 0xe000000000000000;
LAB_1006bc9f0:
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = puVar8;
  return auVar12;
}



/* Entry: 1006bca08; end: 1006bcb4f;  */

void FUN_1006bca08(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006bcad8);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    FUN_1006bcb50(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006bcaa8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010196b2e4();
    lVar6 = *unaff_x20;
    goto joined_r0x0001006bcaec;
  }
  lVar6 = *unaff_x20;
joined_r0x0001006bcaec:
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006bcb50);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1006bcb50; end: 1006bcde3;  */

void FUN_1006bcb50(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112ddb328;
  FUN_1000285a8(0x112ddb328,&UNK_10d9a0178);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_1006bcdb0:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bcde0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_1006bcdb0;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bcde4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1006bcde4; end: 1006bcea7; -[SCLensProcessingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006bcde4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112779814;
    func_0x000107c61148(lVar5);
  }
  lVar1 = lVar5;
  func_0x000107c4af44(lVar5);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + _DAT_1127797b0,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar5);
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127797b4);
  *(undefined **)(param_1 + _DAT_1127797b4) = puVar3;
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdd3930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginOptimizedLensProcessing_1125527e8);
  return;
}



/* Entry: 1006bcea8; end: 1006bcedb;  */

void FUN_1006bcea8(void)

{
  func_0x000107c610f4(PTR_PTR_1126dd998);
  func_0x000107c46028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006bcedc; end: 1006bd0d3; -[SCLensCarouselStudySettingsProvider initWithConfigurationProvider:lensExperienceConfigurationProvider:appStartExperimentReader:] */

undefined8 *
FUN_1006bcedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_68 = PTR_PTR_112700d48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006bd0d4; end: 1006bd0ff;  */

void FUN_1006bd0d4(undefined1 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c425dc();
  }
  *param_1 = (char)lVar1;
  return;
}



/* Entry: 1006bd100; end: 1006bd14f; -[SCMessagingExperimentServiceImpl enableFeedUpdateSequenceFiltering] */

undefined8 FUN_1006bd100(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1006bd150; end: 1006bd1d3; -[SCNMessagingUUID hash] */

ulong FUN_1006bd150(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000107c61158();
  func_0x000107c60b14();
  func_0x000107c61180();
  func_0x000107c44c3c();
  func_0x000107c44fc8(param_1);
  func_0x000107c61180();
  func_0x000107c44c3c();
  FUN_1006bd1d4();
  func_0x000100449c88();
  return param_1 ^ uVar1;
}



/* Entry: 1006bd1d4; end: 1006bd1db;  */

void FUN_1006bd1d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006bd1dc; end: 1006bd1df; -[SCNMessagingUUID copyWithZone:] */

void FUN_1006bd1dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1006bd1e0; end: 1006bd2a3;  */

void FUN_1006bd1e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208;
    func_0x000107c4f50c();
    func_0x000107c61180();
    puVar4 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c61158(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      puVar3 = puVar2;
      func_0x000107c6115c(puVar2,puVar4);
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        func_0x000107c61174(puVar2);
        puVar4 = puVar2;
      }
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1006bd2a4; end: 1006bd2ab; -[SCNMessagingFeedEntry conversationType] */

undefined8 FUN_1006bd2a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1006bd2ac; end: 1006bdffb; -[SCLensProcessingEntryPoint _beginOptimizedLensProcessing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006bd2ac(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined1 *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  double dStack_a8;
  double dStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  
  if (param_5 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_5 + _DAT_11277980c;
    func_0x000107c61148();
  }
  lVar32 = (long)_DAT_1127797c0;
  lVar30 = param_5 + lVar32;
  func_0x000107c61148();
  lVar1 = lVar30;
  func_0x000107c4129c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c515e0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar30);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar3);
  lVar30 = param_5 + lVar32;
  func_0x000107c61148(lVar30);
  lVar1 = lVar30;
  func_0x000107c500f8();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar30);
  lVar30 = param_5 + lVar32;
  func_0x000107c61148(lVar30);
  lVar1 = lVar30;
  func_0x000107c4129c();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c40534();
  func_0x000107c61180();
  lVar5 = param_5;
  func_0x000107c3c1b8();
  *(long *)(param_5 + _DAT_1127797bc) = lVar5;
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar30);
  lVar30 = param_5 + _DAT_112779810;
  func_0x000107c61148();
  lVar1 = lVar30;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar30);
  if (lVar5 != 7) {
    if (lVar5 == 6) {
      uStack_90 = 0;
      goto LAB_1006bd480;
    }
    if (lVar5 != 4) {
      func_0x000107c4ee1c(lVar38);
      uStack_90 = 0;
      goto LAB_1006bd480;
    }
  }
  uStack_90 = 1;
  *(undefined1 *)(param_5 + _DAT_1127797c4) = 1;
LAB_1006bd480:
  lVar6 = lVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_108c9a4c0;
  puStack_c8 = &UNK_110ac0488;
  func_0x000107c61174(lVar2);
  lStack_c0 = lVar2;
  dStack_a8 = param_1 * param_3;
  dStack_a0 = param_1 * param_4;
  func_0x000107c61174(lVar38);
  lStack_b8 = lVar38;
  func_0x000107c61174(lVar6);
  lStack_b0 = lVar6;
  lStack_98 = lVar5;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar30 = (long)_DAT_1127797c8;
  func_0x000107c61174();
  uVar7 = *(undefined8 *)(param_5 + lVar30);
  *(undefined **)(param_5 + lVar30) = puVar3;
  func_0x000107c61170(uVar7);
  puVar8 = puVar3;
  func_0x000107c451b4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_5 + _DAT_112779828);
  func_0x000107c61174();
  lVar30 = param_5 + _DAT_112779808;
  func_0x000107c61148();
  uVar37 = *(undefined8 *)(param_5 + _DAT_1127797cc);
  func_0x000107c61174(uVar37);
  uVar35 = *(undefined8 *)(param_5 + _DAT_1127797d0);
  func_0x000107c61174(uVar35);
  uVar29 = *(undefined8 *)(param_5 + _DAT_1127797d4);
  func_0x000107c61174(uVar29);
  uVar36 = *(undefined8 *)(param_5 + _DAT_1127797d8);
  func_0x000107c61174(uVar36);
  lVar4 = param_5 + _DAT_1127797dc;
  func_0x000107c61148();
  lVar28 = param_5 + lVar32;
  func_0x000107c61148();
  lVar9 = lVar28;
  func_0x000107c4129c();
  func_0x000107c61180();
  lVar10 = lVar9;
  func_0x000107c3e3d0();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar28);
  puVar11 = PTR_PTR_1126ae720;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  puStack_130 = &UNK_108c9a5f0;
  puStack_128 = &UNK_110ac04f8;
  func_0x000107c61174(puVar3);
  puStack_120 = puVar3;
  func_0x000107c61174(lVar10);
  lStack_118 = lVar10;
  func_0x000107c61174(lVar6);
  lStack_110 = lVar6;
  func_0x000107c61174(uVar37);
  uStack_108 = uVar37;
  func_0x000107c61174(uVar35);
  uStack_100 = uVar35;
  func_0x000107c61174(uVar29);
  uStack_f8 = uVar29;
  func_0x000107c61174(uVar36);
  uStack_f0 = uVar36;
  func_0x000107c61174(lVar4);
  lStack_e8 = lVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar31 = (long)_DAT_1127797e0;
  func_0x000107c61174();
  uVar12 = *(undefined8 *)(param_5 + lVar31);
  *(undefined **)(param_5 + lVar31) = puVar11;
  func_0x000107c61170(uVar12);
  uVar33 = *(undefined8 *)(param_5 + _DAT_1127797e4);
  func_0x000107c61174(uVar33);
  lVar28 = param_5 + lVar32;
  func_0x000107c61148();
  lVar9 = lVar28;
  func_0x000107c4b388();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar32 = param_5 + lVar32;
  func_0x000107c61148();
  lVar13 = lVar32;
  func_0x000107c3dd60();
  func_0x000107c61180();
  func_0x000107c61170(lVar32);
  lVar28 = (long)_DAT_1127797e8;
  lVar32 = param_5 + lVar28;
  func_0x000107c61148();
  lVar14 = lVar32;
  func_0x000107c41ea4();
  func_0x000107c61180();
  func_0x000107c61170(lVar32);
  puVar15 = PTR_PTR_1126ae720;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  puStack_198 = &UNK_108c9a680;
  puStack_190 = &UNK_110ac0528;
  func_0x000107c61174(puVar8);
  puStack_188 = puVar8;
  func_0x000107c61174(uVar7);
  uStack_180 = uVar7;
  func_0x000107c61174(lVar30);
  lStack_178 = lVar30;
  func_0x000107c61174(uVar33);
  uStack_170 = uVar33;
  func_0x000107c61174(lVar9);
  lStack_168 = lVar9;
  func_0x000107c61174(lVar13);
  lStack_160 = lVar13;
  func_0x000107c61174(lVar14);
  lStack_158 = lVar14;
  func_0x000107c61174(puVar11);
  puStack_150 = puVar11;
  func_0x000107c61174(lVar6);
  lStack_148 = lVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar39 = (long)_DAT_1127797ec;
  func_0x000107c61174();
  uVar12 = *(undefined8 *)(param_5 + lVar39);
  *(undefined **)(param_5 + lVar39) = puVar15;
  func_0x000107c61170(uVar12);
  puVar16 = puVar3;
  func_0x000107c451b4();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126db6c8;
  func_0x000107c610f4();
  func_0x000107c471a4();
  puVar18 = PTR_PTR_1126ae720;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  puStack_1c8 = &UNK_108c9a738;
  puStack_1c0 = &UNK_110876b90;
  func_0x000107c61174(puVar11);
  puStack_1b8 = puVar11;
  func_0x000107c61174(lVar6);
  lStack_1b0 = lVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_5 + _DAT_1127797f0);
  *(undefined **)(param_5 + _DAT_1127797f0) = puVar18;
  func_0x000107c61170(uVar12);
  puVar18 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar32 = (long)_DAT_1127797f4;
  uVar12 = *(undefined8 *)(param_5 + lVar32);
  *(undefined **)(param_5 + lVar32) = puVar18;
  func_0x000107c61170(uVar12);
  func_0x000107c61144(auStack_1e0,*(undefined8 *)(param_5 + lVar32));
  if (lVar5 == 6) {
    lVar32 = param_5 + _DAT_112779804;
    func_0x000107c61148(lVar32);
    lVar5 = lVar32;
    func_0x000107c5d154();
    func_0x000107c61180();
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    puStack_1f8 = &UNK_108c9a7a0;
    puStack_1f0 = &UNK_110ac05b8;
    puVar34 = auStack_1e8;
    func_0x000107c6111c(puVar34,auStack_1e0);
    func_0x000107c4db94(lVar5);
  }
  else {
    lVar32 = param_5 + _DAT_112779800;
    func_0x000107c61148(lVar32);
    lVar5 = lVar32;
    func_0x000107c4b254();
    func_0x000107c61180();
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_10074cc78;
    puStack_218 = &UNK_110ac05e8;
    puVar34 = auStack_210;
    func_0x000107c6111c(puVar34,auStack_1e0);
    func_0x000107c4db94(lVar5);
  }
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar32);
  func_0x000107c61120(puVar34);
  func_0x000107c61144(auStack_238,puVar17);
  lVar28 = param_5 + lVar28;
  func_0x000107c61148();
  lVar32 = lVar28;
  func_0x000107c496e0();
  func_0x000107c61180();
  puVar18 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c61170(lVar28);
  uVar12 = *(undefined8 *)(param_5 + lVar39);
  puStack_260 = puVar18;
  uStack_258 = 0xc2000000;
  puStack_250 = &UNK_108c9a80c;
  puStack_248 = &UNK_110ac0618;
  func_0x000107c61174(lVar32);
  lStack_240 = lVar32;
  func_0x000107c4db94(uVar12);
  uVar12 = *(undefined8 *)(param_5 + lVar31);
  puStack_288 = puVar18;
  uStack_280 = 0xc2000000;
  puStack_278 = &UNK_108c9a818;
  puStack_270 = &UNK_110ac0648;
  func_0x000107c6111c(auStack_268,auStack_238);
  func_0x000107c4db94(uVar12);
  puVar18 = puVar3;
  func_0x000107c451b4(puVar3);
  func_0x000107c61180();
  puVar19 = PTR_PTR_1126db6e0;
  func_0x000107c610f4();
  func_0x000107c473d4();
  uVar12 = *(undefined8 *)(param_5 + _DAT_11277981c);
  func_0x000107c61174(uVar12);
  func_0x000107c42c20(uVar12);
  func_0x000107c61170(uVar12);
  puVar20 = PTR_PTR_1126db6e8;
  func_0x000107c610f4();
  func_0x000107c48114();
  uVar12 = *(undefined8 *)(param_5 + _DAT_112779820);
  func_0x000107c61174(uVar12);
  func_0x000107c42c20(uVar12);
  func_0x000107c61170(uVar12);
  puVar21 = puVar8;
  func_0x000107c451b4(puVar8);
  func_0x000107c61180();
  puVar22 = puVar8;
  func_0x000107c451b4(puVar8);
  func_0x000107c61180();
  puVar23 = puVar8;
  func_0x000107c451b4(puVar8);
  func_0x000107c61180();
  puVar24 = puVar8;
  func_0x000107c451b4(puVar8);
  func_0x000107c61180();
  puVar25 = puVar8;
  func_0x000107c451b4(puVar8);
  func_0x000107c61180();
  puVar26 = puVar8;
  func_0x000107c451b4(puVar8);
  func_0x000107c61180();
  puVar27 = PTR_PTR_1126db6f0;
  func_0x000107c610f4(PTR_PTR_1126db6f0);
  func_0x000107c48fb8();
  uVar12 = *(undefined8 *)(param_5 + _DAT_112779824);
  func_0x000107c61174(uVar12);
  func_0x000107c42c20(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61144(auStack_290,param_5);
  func_0x000107c6111c(auStack_2a0,auStack_290);
  func_0x000107c61174(lVar6);
  func_0x000107c6111c(auStack_298,auStack_238);
  func_0x000107c4db94(puVar3);
  func_0x000107c61120(auStack_298);
  func_0x000107c61170(lVar6);
  func_0x000107c61120(auStack_2a0);
  func_0x000107c61120(auStack_290);
  func_0x000107c61170(puVar27);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(puVar18);
  func_0x000107c61120(auStack_268);
  func_0x000107c61170(lStack_240);
  func_0x000107c61170(lVar32);
  func_0x000107c61120(auStack_238);
  func_0x000107c61120(auStack_1e0);
  func_0x000107c61170(lStack_1b0);
  func_0x000107c61170(puStack_1b8);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(lStack_148);
  func_0x000107c61170(puStack_150);
  func_0x000107c61170(lStack_158);
  func_0x000107c61170(lStack_160);
  func_0x000107c61170(lStack_168);
  func_0x000107c61170(uStack_170);
  func_0x000107c61170(lStack_178);
  func_0x000107c61170(uStack_180);
  func_0x000107c61170(puStack_188);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lStack_e8);
  func_0x000107c61170(uStack_f0);
  func_0x000107c61170(uStack_f8);
  func_0x000107c61170(uStack_100);
  func_0x000107c61170(uStack_108);
  func_0x000107c61170(lStack_110);
  func_0x000107c61170(lStack_118);
  func_0x000107c61170(puStack_120);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lStack_b0);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar38);
  return;
}



/* Entry: 1006bdffc; end: 1006be023; -[SCCameraLegacyDataSource sampleBufferMetadataProvider] */

void FUN_1006bdffc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006be024; end: 1006be033; -[_TtC17SCViewfinderScope17SCViewfinderScope renderTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006be024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074e90));
  return;
}



/* Entry: 1006be034; end: 1006be14f; -[SCLensProcessingEntryPoint _processingUsecaseFromViewFinderContext:] */

undefined8 FUN_1006be034(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b3770;
  func_0x000107c3e9f0(PTR_PTR_1126b3770);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c49d0c(param_3,param_2,puVar1);
  func_0x000107c61170(puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126b3770;
    func_0x000107c4ad00(PTR_PTR_1126b3770);
    func_0x000107c61180();
    uVar2 = param_3;
    func_0x000107c49d0c(param_3,param_2,puVar1);
    func_0x000107c61170(puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126b3770;
      func_0x000107c4eb74(PTR_PTR_1126b3770);
      func_0x000107c61180();
      uVar2 = param_3;
      func_0x000107c49d0c(param_3,param_2,puVar1);
      func_0x000107c61170(puVar1);
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR_PTR_1126b3770;
        func_0x000107c4e8a4(PTR_PTR_1126b3770);
        func_0x000107c61180();
        uVar2 = param_3;
        func_0x000107c49d0c(param_3,param_2,puVar1);
        func_0x000107c61170(puVar1);
        uVar3 = 7;
        if ((int)uVar2 == 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 6;
      }
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    uVar3 = 4;
  }
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 1006be150; end: 1006be17b; +[SCViewfinderDataSourceContext bitmojiLensAvatarBuilder] */

void FUN_1006be150(void)

{
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1faf50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006be17c; end: 1006be25b; -[SCLensProcessingFactoryImpl prepareSharedProcessorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006be17c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar3 = (long)_DAT_112779924;
  func_0x000107c611ec(param_1 + lVar3);
  lVar2 = *(long *)(param_1 + _DAT_112779934);
  func_0x000107c61174(lVar2);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4e600(lVar2);
    func_0x000107c61180();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    puStack_48 = &UNK_108c9c728;
    puStack_40 = &UNK_110842e18;
    func_0x000107c61174(lVar2);
    lStack_38 = lVar2;
    func_0x000107c4e524(lVar1,param_2,&puStack_58);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c611f0(param_1 + lVar3);
  return;
}



/* Entry: 1006be25c; end: 1006be4af; -[SCLazy immediateMap:] */

void FUN_1006be25c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c611ec(param_1 + 0x18);
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x000107c61174(uVar2);
      puVar1 = PTR_PTR_1126ae720;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      puStack_80 = &UNK_10bd4d630;
      puStack_78 = &UNK_110cb7910;
      func_0x000107c61174(param_3);
      lStack_68 = param_3;
      func_0x000107c61174(uVar2);
      uStack_70 = uVar2;
      func_0x000107c3e4fc(puVar1);
      func_0x000107c61180();
      func_0x000107c40aa4();
      func_0x000107c611b0();
      func_0x000107c61170(uStack_70);
      func_0x000107c61170(lStack_68);
      func_0x000107c61170(uVar2);
      func_0x000107c611f0(param_1 + 0x18);
    }
    else {
      func_0x000107c611f0(param_1 + 0x18);
      uStack_b0 = 0;
      uStack_a0 = 0x2020000000;
      uStack_98 = 0;
      puVar1 = PTR_PTR_1126ae720;
      puStack_a8 = &uStack_b0;
      func_0x000107c610f4(PTR_PTR_1126ae720);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      puStack_d8 = &UNK_10bd4d640;
      puStack_d0 = &UNK_110d9ec50;
      puStack_b8 = &uStack_b0;
      func_0x000107c61174(param_3);
      lStack_c8 = param_1;
      lStack_c0 = param_3;
      func_0x000107c46ea8(puVar1);
      func_0x000107c61144(auStack_f0,puVar1);
      func_0x000107c6111c(auStack_f8,auStack_f0);
      func_0x000107c4db94(param_1);
      func_0x000107c61120(auStack_f8);
      func_0x000107c61120(auStack_f0);
      func_0x000107c61170(lStack_c0);
      func_0x000107c60bcc(&uStack_b0,8);
    }
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006be4b0; end: 1006be4f3;  */

/* WARNING: Possible PIC construction at 0x0001006be4d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006be4dc) */

void FUN_1006be4b0(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}



/* Entry: 1006be4f4; end: 1006be5f7; -[SCLazy onCreated:] */

/* WARNING: Possible PIC construction at 0x0001006be558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006be58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006be5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006be590) */
/* WARNING: Removing unreachable block (ram,0x0001006be55c) */
/* WARNING: Removing unreachable block (ram,0x0001006be5bc) */

void FUN_1006be4f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c611ec(param_1 + 0x18);
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x000107c61174(uVar1);
      func_0x000107c611f0(param_1 + 0x18);
      (**(code **)(param_3 + 0x10))(param_3,uVar1);
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x10);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c61160();
      }
      else {
        func_0x000107c61174(puVar2);
      }
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006be5f8; end: 1006be61f; -[SCCameraLegacyDataSource audioHandler] */

void FUN_1006be5f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006be620; end: 1006be63f; -[_TtC17SCViewfinderScope17SCViewfinderScope lensProcessingURIPluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006be620(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113074ec0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006be640; end: 1006be65f; -[_TtC17SCViewfinderScope17SCViewfinderScope apiServicePluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006be640(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113074ec8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006be660; end: 1006be907; -[SCLensProcessingComponentsFacade initWithLensApplicator:lensAudioProcessor:lensFeatureProvider:lensEventsProvider:componentManager:lensProcessingFacade:] */

undefined8 *
FUN_1006be660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126fe068;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    uVar2 = param_7;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar4);
    uVar2 = param_7;
    func_0x000107c451b4();
    func_0x000107c61180();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar4);
    uVar2 = param_8;
    func_0x000107c451b4();
    func_0x000107c61180();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar4);
    uVar2 = param_8;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar4 = param_8;
    func_0x000107c4c280();
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174();
    func_0x000107c61174(uVar2);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_8);
    uVar5 = puVar1[10];
    puVar1[10] = param_8;
    func_0x000107c61170(uVar5);
    uVar5 = param_8;
    func_0x000107c451b4();
    func_0x000107c61180();
    uVar6 = puVar1[5];
    puVar1[5] = uVar5;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006be908; end: 1006bea5b; -[SCLensProcessingServices initWithLensProcessor:performer:lensComponents:lensFPSTracker:lensReadyTracker:processingTracker:] */

undefined1 *
FUN_1006be908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1127038a0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006bea5c; end: 1006beab3; -[LensProcessingUsageServices initWithProcessingUsageProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006bea5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11306fc30) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1006beab4; end: 1006bec07; -[SCLensProcessingLegacyServices initWithURIServiceComponent:externalImageComponent:lensComponent:trackingComponent:trackingSerializationComponent:connectedLensComponent:] */

undefined1 *
FUN_1006beab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1127011d8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006bec08; end: 1006becb3;  */

void FUN_1006bec08(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006becb4; end: 1006becbb;  */

void FUN_1006becb4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006becbc; end: 1006bed0f;  */

void FUN_1006becbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006bed10; end: 1006bed1b;  */

void FUN_1006bed10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100214c28();
  func_0x000107c613fc();
  FUN_1006bf48c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006bed1c; end: 1006bedaf;  */

void FUN_1006bed1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100214c28();
  func_0x000107c613fc();
  FUN_1006bf48c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1006bedb0; end: 1006bedb7;  */

void FUN_1006bedb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006bedb8; end: 1006bee0b;  */

void FUN_1006bedb8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006bee0c; end: 1006bee1b;  */

void FUN_1006bee0c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100211ccc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_1006befc4(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1006bf044();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_1006bf0ac();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006bee1c; end: 1006befc3;  */

void FUN_1006bee1c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100211ccc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_1006befc4(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1006bf044();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1006bf0ac();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1006befc4; end: 1006bf043;  */

void FUN_1006befc4(undefined8 param_1)

{
  if (lRam000000011349fc50 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6954bc);
  return;
}



/* Entry: 1006bf044; end: 1006bf08b;  */

void FUN_1006bf044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1006bf08c; end: 1006bf0ab;  */

void FUN_1006bf08c(void)

{
  func_0x000107c61168(&PTR_PTR_112e35220);
  return;
}



/* Entry: 1006bf0ac; end: 1006bf1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1006bf0ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113083868);
  FUN_1006bf08c(0);
  func_0x000107c613fc();
  uVar1 = uVar6;
  FUN_1006bf1c0(uVar6);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0;
  FUN_1006bf1cc();
  func_0x000107c613fc();
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar1);
  FUN_1006bf1ec(uVar3,uVar4,uVar1);
  ppuStack_48 = &PTR_DAT_110491ba0;
  auStack_68[0] = uVar3;
  uStack_50 = uVar2;
  FUN_100211d58(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  puVar5 = auStack_68;
  FUN_1006bf35c(puVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar1);
  return puVar5;
}



/* Entry: 1006bf1c0; end: 1006bf1cb;  */

void FUN_1006bf1c0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1006bf1cc; end: 1006bf1eb;  */

void FUN_1006bf1cc(void)

{
  func_0x000107c61168(&PTR_PTR_112e35048);
  return;
}



/* Entry: 1006bf1ec; end: 1006bf2b3;  */

void FUN_1006bf1ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  uVar2 = param_1;
  lVar6 = param_2;
  func_0x000107c40430();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  lVar3 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x18) = lVar3;
    *(undefined8 *)(unaff_x20 + 0x20) = param_3;
    puVar4 = PTR_PTR_1126c3450;
    func_0x000107c61168();
    func_0x000107c6157c(param_3);
    func_0x000107c4b588();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(param_3);
    *(undefined **)(unaff_x20 + 0x28) = puVar5;
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006bf2b4);
  (*pcVar1)();
}



/* Entry: 1006bf2b4; end: 1006bf35b; +[SCLensDiskUtils lensesCacheDirectoryPath] */

void FUN_1006bf2b4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f8f60 != -1) {
    FUN_10002a2fc(0x1137f8f60,&PTR___NSConcreteGlobalBlock_110d5a820);
  }
  uVar1 = uRam00000001137f8f58;
  func_0x000107c61174(uRam00000001137f8f58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006bf35c; end: 1006bf3cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1006bf35c(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  FUN_1006bf3cc(param_1,unaff_x20 + _DAT_112ff7af0);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1006bf3cc; end: 1006bf40f;  */

long FUN_1006bf3cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1006bf410; end: 1006bf48b;  */

void FUN_1006bf410(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006bf48c; end: 1006bf567;  */

void FUN_1006bf48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001006bf454(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1006bf5b0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1006bf5c0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1006bf568; end: 1006bf5af;  */

void FUN_1006bf568(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBOWV_11034d658 + 0x40;
  puStack_20 = puStack_28;
  puStack_18 = puStack_28;
  func_0x000107c61524(param_1,0x100,3,&puStack_28,param_1 + 0x70);
  return;
}



/* Entry: 1006bf5b0; end: 1006bf5bf;  */

void FUN_1006bf5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1006bf5c0; end: 1006bf65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006bf5c0(void)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [40];
  
  FUN_1006bf3cc(*(long *)(unaff_x20 + 0x20) + _DAT_112ff7af0,auStack_48);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    FUN_1006bf65c(0);
    func_0x000107c610f8();
    puVar3 = auStack_48;
    FUN_1006bf67c(puVar3,lVar2);
    func_0x000107c615e8(lVar2);
    uVar4 = 0;
    FUN_100217b90(0);
    func_0x000107c610f8();
    FUN_1006bfabc(puVar3,uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006bf65c);
  (*pcVar1)();
}



/* Entry: 1006bf65c; end: 1006bf67b;  */

void FUN_1006bf65c(void)

{
  func_0x000107c61168(&PTR_PTR_1127edca8);
  return;
}



/* Entry: 1006bf67c; end: 1006bf867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1006bf67c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = _DAT_112dd8c28;
  uVar3 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined **)(unaff_x20 + _DAT_112dd8c30) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112dd8c38;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1006bf868();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112dd8c40;
  func_0x0001006bf964();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8c50) = 3;
  FUN_1006bfa58(param_1,unaff_x20 + _DAT_112dd8c18);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8c20) = param_2;
  (**(code **)(lVar7 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
             lVar2);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010efc2f60);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + _DAT_112dd8c48) = puVar5;
  puVar6 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  FUN_1006bfa9c(param_1);
  return puVar6;
}



/* Entry: 1006bf868; end: 1006bfa57;  */

undefined * FUN_1006bf868(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112dd8c10,&UNK_10d99c010);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006bf960);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006bf964);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1006bfa58; end: 1006bfa9b;  */

long FUN_1006bfa58(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1006bfa9c; end: 1006bfabb;  */

void FUN_1006bfa9c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006bfab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1006bfabc; end: 1006bfb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006bfabc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130764c8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1006bfb08; end: 1006bfb3b;  */

void FUN_1006bfb08(void)

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



/* Entry: 1006bfb3c; end: 1006c006b; -[SCCameraViewfinderLegacyEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001006bff14: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006bfb3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar18 = (long)_DAT_112743874;
  lVar1 = param_1 + lVar18;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4129c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c40534();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126b3770;
  func_0x000107c4d8b8(PTR_PTR_1126b3770);
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c49d0c();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if ((int)lVar5 == 0) {
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar15 = *(undefined8 *)(param_1 + _DAT_112743878);
    *(undefined **)(param_1 + _DAT_112743878) = puVar4;
    func_0x000107c61170(uVar15);
    uVar6 = param_1 + lVar18;
    func_0x000107c61148();
    uVar7 = uVar6;
    func_0x000107c4129c();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c40534();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126b3770;
    func_0x000107c4ad00(PTR_PTR_1126b3770);
    func_0x000107c61180();
    uVar9 = uVar8;
    func_0x000107c49d0c();
    if ((uVar9 & 1) == 0) {
      uVar9 = param_1 + lVar18;
      func_0x000107c61148();
      uVar10 = uVar9;
      func_0x000107c4129c();
      func_0x000107c61180();
      uVar11 = uVar10;
      func_0x000107c40534();
      func_0x000107c61180();
      puVar12 = PTR_PTR_1126b3770;
      func_0x000107c5caac(PTR_PTR_1126b3770);
      func_0x000107c61180();
      uVar13 = uVar11;
      func_0x000107c49d0c();
      if ((uVar13 & 1) == 0) {
        lVar1 = param_1 + lVar18;
        func_0x000107c61148();
        lVar2 = lVar1;
        func_0x000107c4129c();
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c40534();
        func_0x000107c61180();
        puVar14 = PTR_PTR_1126b3770;
        func_0x000107c4d394(PTR_PTR_1126b3770);
        func_0x000107c61180();
        lVar5 = lVar3;
        func_0x000107c49d0c();
        uVar17 = (uint)lVar5;
        func_0x000107c61170(puVar14);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
      }
      else {
        uVar17 = 1;
      }
      func_0x000107c61170(puVar12);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar9);
    }
    else {
      uVar17 = 1;
    }
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    if (uVar17 != 0) {
      lVar1 = param_1 + _DAT_11274387c;
      func_0x000107c61148(lVar1);
      lVar2 = lVar1;
      func_0x000107c4f2f8();
      func_0x000107c61180();
      func_0x000107c61144(auStack_68,lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      lVar1 = param_1 + _DAT_112743880;
      func_0x000107c61148(lVar1);
      lVar2 = lVar1;
      func_0x000107c4afac();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c4ade8();
      func_0x000107c61180();
      func_0x000107c61144(auStack_70,lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      puVar4 = PTR_PTR_1126ae720;
      func_0x000107c6111c(auStack_80,auStack_70);
      func_0x000107c6111c(auStack_78,auStack_68);
      func_0x000107c3e4fc(puVar4);
      func_0x000107c61180();
      func_0x000107c3ae08(param_1);
      func_0x000107c3ae14(param_1);
      puVar12 = PTR_PTR_1126c8f50;
      func_0x000107c610f4(PTR_PTR_1126c8f50);
      func_0x000107c45bf8();
      func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112743884));
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar4);
      func_0x000107c61120(auStack_78);
      func_0x000107c61120(auStack_80);
      func_0x000107c61120(auStack_70);
      func_0x000107c61120(auStack_68);
      lVar1 = param_1 + lVar18;
      func_0x000107c61148();
      lVar2 = lVar1;
      func_0x000107c50128();
      if (lVar2 == 0) {
        uVar16 = 1;
      }
      else {
        lVar18 = param_1 + lVar18;
        func_0x000107c61148();
        lVar2 = lVar18;
        func_0x000107c50128();
        uVar16 = (uint)(lVar2 == 1);
        func_0x000107c61170(lVar18);
      }
      func_0x000107c61170(lVar1);
      if ((uVar17 & uVar16) == 1) {
        lVar1 = param_1 + _DAT_112743888;
        func_0x000107c61148(lVar1);
        lVar18 = lVar1;
        func_0x000107c500a0();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        param_1 = param_1 + _DAT_11274387c;
        func_0x000107c61148(param_1);
        lVar1 = param_1;
        func_0x000107c50130();
        func_0x000107c61180();
        lVar2 = lVar1;
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar3 = lVar18;
        func_0x000107c5c734(lVar18);
        func_0x000107c61180();
        func_0x000107c3d81c(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar18);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0d010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exposeNoOpServices_112560da0);
  return;
}


