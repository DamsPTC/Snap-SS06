/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b122450; end: 10b122473;  */

undefined8 FUN_10b122450(undefined8 param_1)

{
  FUN_10b122474();
  return param_1;
}



/* Entry: 10b122474; end: 10b12249b;  */

void FUN_10b122474(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        func_0x0001052b4f8c();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return;
    }
    func_0x0001052b4ebc();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b134438();
    func_0x00010869e720();
    func_0x00010b134cec();
    func_0x0001052b2b60();
    return;
  }
  return;
}



/* Entry: 10b12249c; end: 10b1224c7;  */

void FUN_10b12249c(void)

{
  func_0x00010b134438();
  func_0x00010869e720();
  func_0x00010b134cec();
  func_0x0001052b2b60();
  return;
}



/* Entry: 10b1224c8; end: 10b1224eb;  */

void FUN_10b1224c8(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x0001052b4f8c();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10b1224ec; end: 10b12250f;  */

undefined8 FUN_10b1224ec(undefined8 param_1)

{
  FUN_10b122510();
  return param_1;
}



/* Entry: 10b122510; end: 10b122537;  */

void FUN_10b122510(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000107c27a18();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869edb0();
    func_0x000107426f80();
    func_0x00010869ed88();
    return;
  }
  return;
}



/* Entry: 10b122538; end: 10b12255b;  */

void FUN_10b122538(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27a18();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b12255c; end: 10b12258f;  */

void FUN_10b12255c(long param_1,long param_2)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  if (*(char *)(param_2 + 0x2e8) == '\x01') {
    FUN_10b12207c();
  }
  return;
}



/* Entry: 10b122590; end: 10b1225af;  */

void FUN_10b122590(long param_1)

{
  if (*(char *)(param_1 + 0x2e8) == '\x01') {
    func_0x00010b0faf64();
  }
  return;
}



/* Entry: 10b1225b0; end: 10b1225db;  */

void FUN_10b1225b0(void)

{
  func_0x00010b13448c();
  func_0x00010b1352e4();
  func_0x00010b1357b4();
  func_0x00010b134038();
  func_0x00010b134f14();
  return;
}



/* Entry: 10b1225dc; end: 10b1226cb;  */

void FUN_10b1225dc(void)

{
  func_0x00010b133dc4();
  func_0x00010b122d08();
  return;
}



/* Entry: 10b1226cc; end: 10b122cdf;  */

void FUN_10b1226cc(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 in_register_00005008;
  ulong uStack_170;
  long lStack_168;
  undefined1 auStack_160 [16];
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  char cStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  char cStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  if (param_4 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  lVar8 = *(long *)(param_2 + 0x348);
  uVar2 = *(undefined8 *)(param_2 + 800);
  uStack_170 = param_3;
  lStack_168 = param_4;
  FUN_10b122db4();
  *(char *)(param_2 + 0x2e0) = (char)uVar2;
  func_0x000107c316c4();
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 800);
  FUN_10b19cdec();
  if ((param_3 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x10) = uVar2;
  }
  puVar6 = *(undefined8 **)(param_2 + 800);
  uVar1 = *(undefined4 *)(puVar6 + 0x6e);
  lStack_130 = *(long *)(param_2 + 0x328);
  puStack_138 = puVar6;
  if (lStack_130 == 0) {
    lVar7 = 0;
  }
  else {
    do {
      func_0x00010b134088();
      lVar7 = lStack_130;
    } while (extraout_w10_01 != 0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x330);
  uStack_128 = uVar2;
  puStack_c0 = puVar6;
  lStack_b8 = lVar7;
  if (lVar7 == 0) {
    lStack_f8 = 0;
    uStack_b0 = uVar2;
  }
  else {
    do {
      func_0x00010b134088();
      uVar2 = uStack_128;
    } while (extraout_w10_02 != 0);
    uStack_b0 = uStack_128;
    lStack_f8 = lVar7;
    do {
      func_0x00010b134088();
    } while (extraout_w10_03 != 0);
  }
  puVar3 = (undefined8 *)0xf0;
  puStack_100 = puVar6;
  uStack_f0 = uVar2;
  __Znwm();
  func_0x00010b1341d8();
  *(undefined8 *)((long)puVar3 + 0x84) = in_register_00005008;
  *(undefined8 *)((long)puVar3 + 0x7c) = param_1;
  *puVar3 = &PTR_SUB_110cbc5d8;
  puVar3[1] = 0;
  puVar3[0x1b] = puVar6;
  puVar3[0x1c] = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_04 != 0);
  }
  puVar3[0x1d] = uVar2;
  *(undefined4 *)(puVar3 + 0x11) = 8;
  puStack_118 = puVar3;
  puStack_70 = puVar3;
  func_0x000107c2805c();
  FUN_10b123070(&puStack_118);
  func_0x00010b129c40(&puStack_100);
  func_0x00010b135524();
  puStack_98 = puStack_70;
  puStack_70 = (undefined8 *)0x0;
  func_0x00010b12ba18(&puStack_70);
  func_0x00010b129c40(&puStack_138);
  uVar2 = *(undefined8 *)(param_2 + 0x338);
  FUN_10b19a368(uVar2);
  FUN_10b123178(&puStack_c0,uVar2);
  if (cStack_a0 != '\x01') {
    FUN_10b1231c8();
    *(undefined4 *)(param_2 + 0x18) = 0xce;
    FUN_10b1196ac(param_2 + 0x2f0,param_2,0,&puStack_98);
    puStack_c0 = *(undefined8 **)(param_2 + 800);
    lStack_b8 = *(long *)(param_2 + 0x328);
    if (lStack_b8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_05 != 0);
    }
    uStack_b0 = *(undefined8 *)(param_2 + 0x358);
    if (*(long *)(param_2 + 0x350) < *(long *)(param_2 + 0x330)) {
      FUN_10b199bb4(auStack_160,*(undefined8 *)(param_2 + 0x338),*(long *)(param_2 + 0x330));
      puStack_138 = (undefined8 *)0x0;
      lStack_130 = 0;
      puStack_118 = (undefined8 *)0x0;
      lStack_110 = 0;
      FUN_10b1225b0(&puStack_100,auStack_160,&puStack_118);
      FUN_10b1225dc(&puStack_138,&puStack_100);
      func_0x00010b122d08(&puStack_100);
      func_0x00010b122d08(&puStack_118);
      func_0x000107c27b48(&lStack_58);
      func_0x000107c27b4c(&puStack_70,lStack_58);
      lStack_f8 = lStack_b8;
      puStack_100 = puStack_c0;
      if (lStack_b8 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_06 != 0);
      }
      lStack_e8 = lStack_58;
      lStack_58 = 0;
      uStack_f0 = uStack_b0;
      puStack_80 = (undefined8 *)0x0;
      lStack_78 = 0;
      puStack_90 = puStack_138 + 8;
      lStack_88 = CONCAT71(lStack_88._1_7_,1);
      __ZNSt3__15mutex4lockEv();
      puVar6 = puStack_138;
      func_0x00010b12268c();
      if ((int)puVar6 == 0) {
        func_0x00010b135678();
        *puVar6 = &PTR_SUB_110cbc620;
        puVar6[2] = lStack_f8;
        puVar6[1] = puStack_100;
        if (lStack_f8 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_07 != 0);
        }
        lVar8 = lStack_e8;
        lStack_e8 = 0;
        puVar6[3] = uStack_f0;
        puVar6[4] = lVar8;
        lVar8 = puStack_138[0x11];
        puStack_138[0x11] = puVar6;
        if (lVar8 != 0) {
          func_0x00010b134798();
        }
      }
      else {
        FUN_10b1225dc(&puStack_80,&puStack_138);
      }
      func_0x00010b1351f8();
      if (puStack_80 != (undefined8 *)0x0) {
        puStack_90 = puStack_80;
        lStack_88 = lStack_78;
        if (lStack_78 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_08 != 0);
        }
        FUN_10b123238(&puStack_100);
        func_0x00010b122d08(&puStack_90);
      }
      uStack_148 = uStack_68;
      puStack_150 = puStack_70;
      puStack_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      func_0x00010b122d08(&puStack_80);
      FUN_10b1232e0(&puStack_100);
      func_0x000107c27b58(&puStack_70);
      lVar8 = lStack_58;
      lStack_58 = 0;
      if (lVar8 != 0) {
        func_0x00010b133ecc();
      }
      func_0x00010b122d08(&puStack_138);
      func_0x000107c27b58(&puStack_150);
      func_0x00010b135d04();
    }
    else {
      FUN_10b1a1ae8();
    }
    func_0x00010b135524();
    goto LAB_10b122b64;
  }
  lVar7 = (long)(int)puStack_c0;
  func_0x000107c278b8(&puStack_118,&UNK_10f72fea3);
  func_0x000107c281f8(&puStack_138,&lStack_b8);
  uStack_f0 = uStack_108;
  lStack_f8 = lStack_110;
  puStack_100 = puStack_118;
  lStack_110 = 0;
  uStack_108 = 0;
  puStack_118 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)((ulong)puStack_e0 & 0xffffffffffffff00);
  uStack_c8 = cStack_120 == '\x01';
  if ((bool)uStack_c8) {
    lStack_d8 = lStack_130;
    puStack_e0 = puStack_138;
    uStack_d0 = uStack_128;
    lStack_130 = 0;
    uStack_128 = 0;
    puStack_138 = (undefined8 *)0x0;
  }
  lStack_e8 = lVar7;
  func_0x0001056419c0(param_2 + 0x278,&puStack_100);
  func_0x0001052a03ac(&puStack_100);
  func_0x000107c279a4(&puStack_138);
  func_0x00010b1352b8();
  uVar4 = *(ulong *)(param_2 + 800);
  func_0x00010b122ddc();
  if ((uVar4 >> 0x20 & 1) != 0) {
    *(int *)(param_2 + 0x18) = (int)uVar4;
  }
  func_0x00010b122e04(lVar7,uVar1,*(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10),
                      uVar4 & 0xffffffffff);
  if ((int)lVar7 == 1) {
    puVar5 = &uStack_170;
    FUN_10b122ec4();
    if (puVar5 <= *(ulong **)(param_2 + 0x350)) goto LAB_10b122a3c;
    lVar7 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0xce;
  }
  else {
LAB_10b122a3c:
    puStack_100 = (undefined8 *)0x0;
    FUN_10b11a178(&puStack_98,&puStack_100);
    func_0x00010b135f34();
  }
  puStack_100 = puStack_98;
  puStack_98 = (undefined8 *)0x0;
  (**(code **)(param_2 + 0x2f0))(param_2,lVar7,&puStack_100,param_2 + 0x2f0);
  func_0x00010b135f34();
  FUN_10b1a1ae8(*(undefined8 *)(param_2 + 800),*(undefined8 *)(param_2 + 0x358));
  FUN_10b1231c8(&puStack_c0);
LAB_10b122b64:
  func_0x00010b12b970(&puStack_98);
  func_0x00010b134e64();
  func_0x00010b1350bc();
  func_0x000107c27b68(*(undefined8 *)(param_2 + 0x360));
  return;
}



/* Entry: 10b122ce0; end: 10b122d57;  */

void FUN_10b122ce0(long param_1)

{
  func_0x000107c27b70(param_1 + 0x360);
  func_0x00010b12b9f4(param_1 + 0x338);
  func_0x00010b129c40(param_1 + 800);
  (*(code *)**(undefined8 **)(param_1 + 0x2f8))(param_1 + 0x2f8);
  if (*(char *)(param_1 + 0x2e8) == '\x01') {
    func_0x00010b0faf64();
  }
  return;
}



/* Entry: 10b122d58; end: 10b122d6b;  */

void FUN_10b122d58(void)

{
  func_0x00010b122d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b122d6c; end: 10b122db3;  */

void FUN_10b122d6c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b134fc4();
  if (param_3 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b1226cc(param_1 + 8);
  func_0x00010b122d08(auStack_30);
  return;
}



/* Entry: 10b122db4; end: 10b122ec3;  */

undefined1 FUN_10b122db4(void)

{
  undefined1 uVar1;
  long unaff_x19;
  
  func_0x00010b135060();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x6f0);
  func_0x00010b136088();
  return uVar1;
}



/* Entry: 10b122ec4; end: 10b122f97;  */

undefined8 FUN_10b122ec4(void)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  int extraout_w11;
  undefined8 uVar3;
  undefined8 *apuStack_30 [2];
  
  func_0x00010b13629c();
  func_0x00010b136284();
  FUN_10b1225b0();
  func_0x00010b136278();
  FUN_10b1225dc();
  func_0x00010b135d04();
  func_0x00010b134e64();
  func_0x00010b134e2c(apuStack_30[0] + 8);
  __ZNSt3__15mutex4lockEv();
  func_0x00010b136260();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b133f58();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x00010b13626c(lVar2 + 0x10);
  FUN_10b123200();
  func_0x00010b1350bc();
  if (apuStack_30[0][0x10] != 0) {
    func_0x00010b1355b4();
    func_0x00010b134c7c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b122f64);
    (*pcVar1)();
  }
  uVar3 = *apuStack_30[0];
  func_0x00010b134ab4();
  func_0x00010b122d08(apuStack_30);
  return uVar3;
}



/* Entry: 10b122f98; end: 10b122ffb;  */

void FUN_10b122f98(void)

{
  int extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x00010b135850();
  if (extraout_w8 == 1) {
    __ZNSt3__121recursive_timed_mutex6unlockEv(*unaff_x19);
  }
  return;
}



/* Entry: 10b122ffc; end: 10b12306f;  */

void FUN_10b122ffc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  
  func_0x00010b134530();
  func_0x00010b134918(param_1 + 0x18);
  __ZNSt3__15mutex4lockEv();
  lVar2 = unaff_x19;
  func_0x000107c28058();
  if ((int)lVar2 == 0) {
    func_0x0001052a47b4(unaff_x19 + 0x90);
    *(uint *)(unaff_x19 + 0x88) = *(uint *)(unaff_x19 + 0x88) | 5;
    __ZNSt3__118condition_variable10notify_allEv(unaff_x19 + 0x58);
    func_0x00010b135308();
    return;
  }
  func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b123064);
  (*pcVar1)();
}



/* Entry: 10b123070; end: 10b1230cf;  */

void FUN_10b123070(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b134828();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    do {
      func_0x00010b1340a4();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b1343b8();
    }
  }
  return;
}



/* Entry: 10b1230d0; end: 10b1230e3;  */

void FUN_10b1230d0(void)

{
  func_0x00010b1230a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1230e4; end: 10b123177;  */

void FUN_10b1230e4(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b1a3200(&uStack_30,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe8),1);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c27d78(&uStack_30);
  func_0x00010b134d6c();
  func_0x00010b1350ac();
  return;
}



/* Entry: 10b123178; end: 10b1231c7;  */

void FUN_10b123178(long param_1,undefined4 *param_2)

{
  undefined4 *unaff_x19;
  
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    *unaff_x19 = *param_2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (unaff_x19 + 2,param_2 + 2);
    *(undefined1 *)(unaff_x19 + 8) = 1;
  }
  return;
}



/* Entry: 10b1231c8; end: 10b1231f7;  */

long FUN_10b1231c8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  }
  return param_1;
}



/* Entry: 10b1231f8; end: 10b1231ff;  */

/* WARNING: Removing unreachable block (ram,0x00010b20349c) */
/* WARNING: Removing unreachable block (ram,0x00010b2034b4) */

undefined4 * FUN_10b1231f8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  puVar1 = param_1 + 0x18;
  puVar2 = &uStack_38;
  uStack_38 = param_2;
  FUN_10b1cd0e4(puVar1,puVar2);
  if (puVar1 != (undefined4 *)0x0) {
    param_1 = puVar2 + 2;
  }
  return param_1;
}



/* Entry: 10b123200; end: 10b12322f;  */

void FUN_10b123200(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x00010b13421c();
  while (uVar1 = unaff_x19, FUN_10b123230(), (uVar1 & 1) == 0) {
    func_0x00010b1344fc();
  }
  return;
}



/* Entry: 10b123230; end: 10b123237;  */

bool FUN_10b123230(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 8) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x80) != 0;
    func_0x00010b134484();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b123238; end: 10b1232df;  */

void FUN_10b123238(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b1a1ae8(*param_1,param_1[2]);
  func_0x00010b134e64();
  func_0x00010b1350bc();
  func_0x000107c27b68(param_1[3]);
  return;
}



/* Entry: 10b1232e0; end: 10b12332f;  */

long FUN_10b1232e0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1348cc();
  func_0x000107c27b70();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b123330; end: 10b123343;  */

void FUN_10b123330(void)

{
  func_0x00010b123304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b123344; end: 10b12338b;  */

void FUN_10b123344(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b134fc4();
  if (param_3 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b123238(param_1 + 8);
  func_0x00010b122d08(auStack_30);
  return;
}



/* Entry: 10b12338c; end: 10b1233ab;  */

void FUN_10b12338c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b524828();
  }
  return;
}



/* Entry: 10b1233ac; end: 10b1233e3;  */

long FUN_10b1233ac(long param_1)

{
  func_0x00010b12100c(param_1 + 0x338);
  func_0x00010b129c40(param_1 + 800);
  FUN_10b122590(param_1 + 0x30);
  func_0x00010b134078();
  return param_1;
}



/* Entry: 10b1233e4; end: 10b123473;  */

void FUN_10b1233e4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b134530();
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1,param_2 + 1);
  FUN_10b12255c(unaff_x19 + 0x30,param_2 + 6);
  lVar1 = param_2[0x65];
  uVar2 = param_2[100];
  *(undefined8 *)(unaff_x19 + 0x328) = param_2[0x65];
  *(undefined8 *)(unaff_x19 + 800) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x330) = *(undefined8 *)(unaff_x20 + 0x330);
  *(undefined8 *)(unaff_x19 + 0x338) = *(undefined8 *)(unaff_x20 + 0x338);
  lVar1 = *(long *)(unaff_x20 + 0x340);
  *(long *)(unaff_x19 + 0x340) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10b123474; end: 10b123667;  */

void FUN_10b123474(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  uint uStack_68;
  char cStack_40;
  undefined8 uStack_38;
  
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  uVar4 = param_1[0x66];
  uStack_98 = param_2;
  lStack_90 = param_3;
  FUN_10b1a1ae8(param_1[100]);
  uVar1 = param_1[100];
  FUN_10b122db4();
  *(char *)(param_1 + 0x62) = (char)uVar1;
  func_0x000107c316c4();
  param_1[7] = uVar1;
  uVar1 = param_1[100];
  FUN_10b19cdec();
  if ((uVar4 & 1) != 0) {
    param_1[8] = uVar1;
  }
  func_0x0001052a5804(auStack_80,&uStack_98);
  if (cStack_40 == '\x01') {
    uVar4 = param_1[100];
    func_0x00010b122ddc();
    if ((uVar4 >> 0x20 & 1) != 0) {
      *(int *)(param_1 + 9) = (int)uVar4;
    }
    puVar2 = auStack_80;
    func_0x000107c27cf4(puVar2,&UNK_10f72fea3);
    if ((int)puVar2 == 0) {
      uVar3 = 3;
    }
    else {
      uVar3 = (ulong)uStack_68;
      func_0x00010b122e04(uVar3,*(undefined4 *)(param_1[100] + 0x370),param_1[0x67],
                          uVar4 & 0xffffffffff);
    }
    func_0x00010563bef4(param_1 + 0x55,auStack_80);
    uStack_38 = 0;
    uStack_88 = 0;
    (*(code *)*param_1)(param_1 + 6,uVar3,&uStack_38,param_1);
    func_0x00010b12b970(&uStack_38);
    func_0x00010b12b970(&uStack_88);
    func_0x00010b135cfc();
  }
  else {
    func_0x00010b135cfc();
    *(undefined4 *)(param_1 + 9) = 200;
    auStack_80[0] = 0;
    FUN_10b1196ac(param_1,param_1 + 6,0,auStack_80);
    func_0x00010b12b970(auStack_80);
  }
  func_0x0001052a55c0(&uStack_98);
  func_0x0001052a55c0(&uStack_a8);
  func_0x000107c27b68(param_1[0x69]);
  return;
}



/* Entry: 10b123668; end: 10b1236bb;  */

long FUN_10b123668(long param_1)

{
  func_0x000107c27b70(param_1 + 0x348);
  func_0x00010b12100c(param_1 + 0x338);
  func_0x00010b129c40(param_1 + 800);
  FUN_10b122590(param_1 + 0x30);
  func_0x00010b134078();
  return param_1;
}



/* Entry: 10b1236bc; end: 10b1236cf;  */

void FUN_10b1236bc(void)

{
  func_0x00010b123690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1236d0; end: 10b123717;  */

void FUN_10b1236d0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b134fc4();
  if (param_3 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b123474(param_1 + 8);
  func_0x0001052a55c0(auStack_30);
  return;
}



/* Entry: 10b123718; end: 10b12375b;  */

void FUN_10b123718(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined1 in_ZR;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  int extraout_w10;
  int extraout_w10_00;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *unaff_x19;
  long *plVar18;
  undefined8 *puVar19;
  undefined **ppuStack_318;
  undefined1 uStack_310;
  undefined **ppuStack_308;
  undefined1 uStack_300;
  undefined1 auStack_2f8 [48];
  int aiStack_2c8 [2];
  int iStack_2c0;
  long lStack_2b8;
  undefined4 uStack_2ac;
  int aiStack_250 [2];
  int iStack_248;
  long lStack_240;
  undefined **ppuStack_1d8;
  char cStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  long *plStack_188;
  long alStack_180 [12];
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  char cStack_50;
  undefined8 uStack_48;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b1aa2b8(*(undefined8 *)(param_1 + 0x10));
  uStack_1c8 = uVar6;
  uStack_48 = extraout_x8;
  FUN_10b19af84(&ppuStack_1d8);
  func_0x00010b1aa5c8(aiStack_250);
  ppuVar3 = (undefined **)(unaff_x19 + 0xc5);
  ppuVar4 = ppuVar3;
  func_0x00010b1a75c4(ppuVar3,&uStack_1c8);
  if (ppuVar4 == (undefined **)0x0) goto LAB_10b1a1ec8;
  puVar10 = (undefined *)unaff_x19[0xc6];
  puVar7 = *ppuVar4;
  puVar8 = ppuVar4[1];
  puVar14 = puVar10 + -1;
  if (((ulong)puVar10 & (ulong)puVar14) == 0) {
    puVar8 = (undefined *)((ulong)puVar14 & (ulong)puVar8);
  }
  else if (puVar10 <= puVar8) {
    uVar2 = 0;
    if (puVar10 != (undefined *)0x0) {
      uVar2 = (ulong)puVar8 / (ulong)puVar10;
    }
    puVar8 = puVar8 + -(uVar2 * (long)puVar10);
  }
  puVar15 = *ppuVar3;
  ppuVar3 = *(undefined ***)(puVar15 + (long)puVar8 * 8);
  do {
    ppuVar13 = ppuVar3;
    ppuVar3 = (undefined **)*ppuVar13;
  } while ((undefined **)*ppuVar13 != ppuVar4);
  ppuStack_f0 = (undefined **)(unaff_x19 + 199);
  if (ppuVar13 == ppuStack_f0) {
LAB_10b1a1bb0:
    if (puVar7 == (undefined *)0x0) {
LAB_10b1a1be4:
      *(undefined8 *)(puVar15 + (long)puVar8 * 8) = 0;
      puVar7 = *ppuVar4;
      goto LAB_10b1a1bec;
    }
    puVar16 = *(undefined **)(puVar7 + 8);
    if (((ulong)puVar10 & (ulong)puVar14) == 0) {
      puVar17 = (undefined *)((ulong)puVar16 & (ulong)puVar14);
    }
    else {
      puVar17 = puVar16;
      if (puVar10 <= puVar16) {
        uVar2 = 0;
        if (puVar10 != (undefined *)0x0) {
          uVar2 = (ulong)puVar16 / (ulong)puVar10;
        }
        puVar17 = puVar16 + -(uVar2 * (long)puVar10);
      }
    }
    if (puVar17 != puVar8) goto LAB_10b1a1be4;
LAB_10b1a1bf4:
    if (((ulong)puVar10 & (ulong)puVar14) == 0) {
      puVar16 = (undefined *)((ulong)puVar16 & (ulong)puVar14);
    }
    else if (puVar10 <= puVar16) {
      uVar2 = 0;
      if (puVar10 != (undefined *)0x0) {
        uVar2 = (ulong)puVar16 / (ulong)puVar10;
      }
      puVar16 = puVar16 + -(uVar2 * (long)puVar10);
    }
    if (puVar16 != puVar8) {
      *(undefined ***)(puVar15 + (long)puVar16 * 8) = ppuVar13;
      puVar7 = *ppuVar4;
    }
  }
  else {
    puVar16 = ppuVar13[1];
    if (((ulong)puVar10 & (ulong)puVar14) == 0) {
      puVar16 = (undefined *)((ulong)puVar16 & (ulong)puVar14);
    }
    else if (puVar10 <= puVar16) {
      uVar2 = 0;
      if (puVar10 != (undefined *)0x0) {
        uVar2 = (ulong)puVar16 / (ulong)puVar10;
      }
      puVar16 = puVar16 + -(uVar2 * (long)puVar10);
    }
    if (puVar16 != puVar8) goto LAB_10b1a1bb0;
LAB_10b1a1bec:
    if (puVar7 != (undefined *)0x0) {
      puVar16 = *(undefined **)(puVar7 + 8);
      goto LAB_10b1a1bf4;
    }
  }
  *ppuVar13 = puVar7;
  *ppuVar4 = (undefined *)0x0;
  unaff_x19[200] = unaff_x19[200] + -1;
  uStack_e8 = 1;
  ppuStack_f8 = ppuVar4;
  FUN_10b1a6098(&ppuStack_f8);
  func_0x00010b1aa5c8(aiStack_2c8);
  in_ZR = aiStack_2c8[0] == aiStack_250[0];
  if (((!(bool)in_ZR) || (in_ZR = iStack_2c0 == iStack_248, !(bool)in_ZR)) ||
     (in_ZR = lStack_2b8 == lStack_240, !(bool)in_ZR)) {
    FUN_10b1a1934();
  }
  if (unaff_x19[200] == 0) {
    puVar7 = &UNK_10f731335;
    func_0x000107c278b8(&ppuStack_f8);
    func_0x00010b1aae6c(auStack_2f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_f8);
    if (*(char *)((long)unaff_x19 + 0x46b) == '\x01') {
      ppuStack_308 = ppuStack_1d8;
      uStack_300 = cStack_1d0;
      ppuStack_1d8 = (undefined **)0x0;
      cStack_1d0 = '\0';
      puVar7 = (undefined *)0x0;
      FUN_10b19fb24(auStack_2f8);
      FUN_10b122f98(&ppuStack_308);
      func_0x00010b1aabf8(&ppuStack_f8);
      if (cStack_1d0 == '\x01') {
        __ZNSt3__121recursive_timed_mutex6unlockEv(ppuStack_1d8);
      }
      ppuStack_1d8 = ppuStack_f8;
      cStack_1d0 = ppuStack_f0._0_1_;
      ppuStack_f8 = (undefined **)0x0;
      ppuStack_f0 = (undefined **)((ulong)ppuStack_f0 & 0xffffffffffffff00);
      FUN_10b122f98(&ppuStack_f8);
    }
    puVar5 = unaff_x19;
    FUN_10b19af40();
    if (unaff_x19[0xb9] != 0) {
      plVar18 = (long *)unaff_x19[0x88];
      uStack_1b8 = unaff_x19[0x1d];
      uStack_1c0 = unaff_x19[0x1c];
      if (unaff_x19[0x1d] != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_1b0,unaff_x19[0x6f]);
      lStack_c8 = lStack_1a0;
      uStack_e0 = uStack_1b8;
      uStack_e8 = uStack_1c0;
      uStack_198 = *(undefined4 *)(unaff_x19 + 0x6e);
      uStack_194 = uStack_2ac;
      uStack_190 = *(undefined4 *)((long)unaff_x19 + 0x374);
      plVar11 = (long *)unaff_x19[0xb7];
      lStack_a8 = unaff_x19[0xb8];
      lStack_a0 = unaff_x19[0xb9];
      plVar12 = alStack_180;
      if (lStack_a0 != 0) {
        *(long **)(lStack_a8 + 0x10) = alStack_180;
        unaff_x19[0xb7] = unaff_x19 + 0xb8;
        unaff_x19[0xb8] = 0;
        unaff_x19[0xb9] = 0;
        plVar12 = plVar11;
      }
      ppuStack_f8 = (undefined **)FUN_10b1a8a30;
      ppuStack_f0 = &PTR_DAT_110cc2f00;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_d0 = uStack_1a8;
      uStack_d8 = uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_c0 = CONCAT44(uStack_2ac,uStack_198);
      lStack_1a0 = 0;
      plStack_b0 = &lStack_a8;
      plStack_188 = plVar12;
      alStack_180[0] = lStack_a8;
      if (lStack_a0 != 0) {
        *(long **)(lStack_a8 + 0x10) = plStack_b0;
        alStack_180[0] = 0;
        plStack_188 = alStack_180;
        plStack_b0 = plVar12;
      }
      alStack_180[1] = 0;
      puVar7 = (undefined *)0x0;
      uStack_b8 = uStack_190;
      func_0x00010b1aab58(*(undefined8 *)(*plVar18 + 0x10));
      func_0x00010b1aa400(ppuStack_f0);
      puVar5 = &uStack_1c0;
      func_0x00010b1a2160();
    }
    cVar1 = *(char *)(unaff_x19 + 0xca);
    *(undefined1 *)(unaff_x19 + 0xca) = 0;
    in_ZR = cVar1 == '\x01';
    if ((bool)in_ZR) {
      ppuStack_318 = ppuStack_1d8;
      uStack_310 = cStack_1d0;
      ppuStack_1d8 = (undefined **)0x0;
      cStack_1d0 = 0;
      if ((unaff_x19[0x8e] != 0) && (unaff_x19[0x77] != 0)) {
        lVar9 = (long)*(char *)(unaff_x19[0x6f] + 0x17);
        if (lVar9 < 0) {
          lVar9 = *(long *)(unaff_x19[0x6f] + 8);
        }
        if (((lVar9 != 0) && (lVar9 = *(long *)(unaff_x19[0x8e] + 0x148), lVar9 != 0)) &&
           (((*(byte *)((long)unaff_x19 + 0x469) & 1) == 0 &&
            ((func_0x00010b1aac00(), ((ulong)puVar7 & 1) != 0 &&
             (in_ZR = puVar5 == (undefined8 *)0x1, 0 < (long)puVar5)))))) {
          in_ZR = *(char *)(unaff_x19 + 0x14) == '\x01';
          if ((bool)in_ZR) {
            if (unaff_x19[0x97] != 0) {
              puVar19 = unaff_x19 + 0x96;
              func_0x000107c27bdc();
              puVar19 = puVar19 + 5;
LAB_10b1a1f3c:
              puVar19 = (undefined8 *)*puVar19;
              in_ZR = puVar19 == (undefined8 *)0x1;
              if (0 < (long)puVar19) {
                ppuStack_f8 = (undefined **)((ulong)ppuStack_f8 & 0xffffffffffffff00);
                cStack_50 = '\0';
                uStack_110 = 0;
                uStack_108 = 0;
                uStack_100 = 0;
                if (puVar19 < puVar5) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (&uStack_1c0,unaff_x19 + 0x1e);
                  uStack_1a8 = unaff_x19[0x77];
                  lStack_1a0 = unaff_x19[0x78];
                  if (lStack_1a0 != 0) {
                    do {
                      func_0x00010b1aa2e0();
                    } while (extraout_w10_00 != 0);
                  }
                  func_0x00010b1aa5c8(&uStack_198);
                  puStack_120 = puVar19;
                  if (cStack_50 == '\x01') {
                    func_0x00010b1a3edc();
                  }
                  else {
                    func_0x00010b1a3f5c(&ppuStack_f8,&uStack_1c0);
                    cStack_50 = '\x01';
                  }
                  FUN_10b12ec28(&uStack_1c0);
                }
                else {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (&uStack_110,unaff_x19 + 0x1e);
                }
                FUN_10b19cef0(&ppuStack_318);
                in_ZR = cStack_50 == '\x01';
                if ((bool)in_ZR) {
                  func_0x00010b1a3f5c(&uStack_1c0,&ppuStack_f8);
                  FUN_10b1afdc8(lVar9,&uStack_1c0);
                  FUN_10b12ec28(&uStack_1c0);
                }
                else {
                  FUN_10b1b0064(lVar9,&uStack_110);
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
                FUN_10b1a3f9c(&ppuStack_f8);
              }
            }
          }
          else {
            in_ZR = 0;
            if (*(char *)(unaff_x19 + 0x2f) == '\x01') {
              puVar19 = unaff_x19 + 0x2c;
              goto LAB_10b1a1f3c;
            }
          }
        }
      }
      func_0x00010b1aa468();
    }
    FUN_10b1a45c4(auStack_2f8);
  }
  func_0x00010529fe04(aiStack_2c8);
LAB_10b1a1ec8:
  func_0x00010529fe04(aiStack_250);
  FUN_10b122f98(&ppuStack_1d8);
  func_0x00010b1aa28c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1aada8();
    FUN_10b12ec28();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
    FUN_10b1a3f9c(&ppuStack_f8);
    FUN_10b122f98(&ppuStack_318);
    FUN_10b1a45c4(auStack_2f8);
    func_0x00010529fe04(aiStack_2c8);
    func_0x00010529fe04(aiStack_250);
    FUN_10b122f98(&ppuStack_1d8);
    do {
      func_0x00010b1aa3d8();
    } while( true );
  }
  return;
}



/* Entry: 10b12375c; end: 10b12378f;  */

void FUN_10b12375c(void)

{
  func_0x00010b134308();
  func_0x00010b1362ec();
  func_0x00010b1342a8();
  func_0x00010b134e3c();
  return;
}



/* Entry: 10b123790; end: 10b1237ab;  */

void FUN_10b123790(long param_1)

{
  FUN_10b121fd0();
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 10b1237ac; end: 10b1237ef;  */

void FUN_10b1237ac(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1237f0; end: 10b123847;  */

long FUN_10b1237f0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b134958();
  FUN_10b12b860();
  lVar1 = unaff_x19;
  func_0x000107c3503c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b123848; end: 10b1238b7;  */

void FUN_10b123848(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [16];
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x2e8);
  func_0x00010b121ddc(auStack_50,lVar1 + 0x318);
  FUN_10b11c794(auStack_30,uVar2,auStack_50,lVar1,*(undefined4 *)(lVar1 + 0x338));
  FUN_10b11d020(lVar1 + 0x2f8,auStack_30);
  func_0x00010b135584();
  func_0x00010b13458c();
  return;
}



/* Entry: 10b1238b8; end: 10b1238d7;  */

void FUN_10b1238b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b123814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1238d8; end: 10b1238db;  */

void FUN_10b1238d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1238dc; end: 10b12394b;  */

void FUN_10b1238dc(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b134530();
  func_0x00010b1343f8();
  func_0x00010539dcfc();
  func_0x00010b1362cc();
  func_0x0001052a07e8();
  *(undefined1 *)(unaff_x19 + 0x2c0) = 0;
  *(undefined1 *)(unaff_x19 + 0x2d8) = 0;
  if (*(char *)(unaff_x20 + 0x2d8) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x2c8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x2c0);
    *(undefined8 *)(unaff_x19 + 0x2d0) = *(undefined8 *)(unaff_x20 + 0x2d0);
    *(undefined8 *)(unaff_x19 + 0x2c8) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x2c0) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
    *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
    *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
    *(undefined1 *)(unaff_x19 + 0x2d8) = 1;
  }
  *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x20 + 0x2e0);
  return;
}



/* Entry: 10b12394c; end: 10b1239f7;  */

void FUN_10b12394c(long param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b134530();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_10b1239f8(param_1 + 0x18,unaff_x20 + 0x18);
  func_0x00010b136370();
  FUN_10b1212a4(unaff_x19 + 0x90,unaff_x20 + 0x90);
  FUN_10b12132c(unaff_x19 + 0x138,unaff_x20 + 0x138);
  FUN_10b123a58(unaff_x19 + 0x180,unaff_x20 + 0x180);
  func_0x00010b134f4c();
  lVar1 = *(long *)(unaff_x20 + 0x1d0);
  *(undefined8 *)(unaff_x19 + 0x1c8) = *(undefined8 *)(unaff_x20 + 0x1c8);
  *(long *)(unaff_x19 + 0x1d0) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b123ac0(unaff_x19 + 0x1d8,unaff_x20 + 0x1d8);
  return;
}



/* Entry: 10b1239f8; end: 10b123a27;  */

void FUN_10b1239f8(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_10b123a28();
  return;
}



/* Entry: 10b123a28; end: 10b123a3b;  */

void FUN_10b123a28(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x00010b125750();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10b123a3c; end: 10b123a57;  */

void FUN_10b123a3c(long param_1)

{
  func_0x00010b125750();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10b123a58; end: 10b123a87;  */

void FUN_10b123a58(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_10b123a88();
  return;
}



/* Entry: 10b123a88; end: 10b123a9b;  */

void FUN_10b123a88(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_10b123ab4();
    func_0x00010b136304();
    return;
  }
  return;
}



/* Entry: 10b123a9c; end: 10b123ab3;  */

void FUN_10b123a9c(void)

{
  FUN_10b123ab4();
  func_0x00010b136304();
  return;
}



/* Entry: 10b123ab4; end: 10b123abf;  */

undefined8 * FUN_10b123ab4(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110ccab18;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b24de24();
  }
  FUN_10b24daf0(param_1 + 2,0,param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  return param_1;
}



/* Entry: 10b123ac0; end: 10b123b17;  */

void FUN_10b123ac0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 in_register_00005008;
  
  func_0x00010b13422c();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b123b18(unaff_x19 + 0x10,param_3 + 0x10);
  func_0x00010b123b88(unaff_x19 + 0x40,param_3 + 0x40);
  func_0x00010b123bf8(unaff_x19 + 0x70,param_3 + 0x70);
  return;
}



/* Entry: 10b123b18; end: 10b123cb3;  */

void FUN_10b123b18(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_2[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 10b123cb4; end: 10b123cd3;  */

void FUN_10b123cb4(void)

{
  func_0x00010b13502c();
  FUN_10b123cd4();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b123cd4; end: 10b123cfb;  */

void FUN_10b123cd4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbd860;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b123cfc; end: 10b123cff;  */

void FUN_10b123cfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd860;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b123d00; end: 10b123d13;  */

void FUN_10b123d00(void)

{
  func_0x00010b123d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b123d14; end: 10b123d37;  */

void FUN_10b123d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b123d38; end: 10b123d57;  */

void FUN_10b123d38(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b129c40();
  }
  return;
}



/* Entry: 10b123d58; end: 10b123e5b;  */

undefined8 *
FUN_10b123d58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x000107c278b8(param_1 + 2,param_4);
  return param_1;
}



/* Entry: 10b123e5c; end: 10b123eab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b123e5c(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar6;
  
  cVar2 = *(char *)(param_1 + 0xa0);
  if (cVar2 != *(char *)(param_2 + 0xa0)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0xa0) == '\x01') {
        FUN_10b24f5cc();
        *(undefined1 *)(param_1 + 0xa0) = 0;
      }
      return;
    }
    FUN_10b121300();
    func_0x00010b1362f8();
    return;
  }
  if (cVar2 == '\0') {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b250838();
  FUN_10b24f6a4();
  func_0x00010b2509bc();
  func_0x00010b250868();
  uVar6 = *(ulong *)(unaff_x19 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  lVar4 = unaff_x20 + 0x18;
  FUN_10b24fee8(unaff_x21 + 0x18);
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x30));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x38));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x40));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x48));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        uVar3 = uVar6;
        func_0x00010b250534();
        *(ulong *)(unaff_x21 + 0x50) = uVar3;
      }
      else {
        FUN_10b251d4c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar3 = uVar6;
        func_0x00010b250574();
        *(ulong *)(unaff_x21 + 0x58) = uVar3;
      }
      else {
        FUN_10b25195c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x60);
      if (lVar4 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x60) = lVar4;
      }
      else {
        func_0x00010bcebe80();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x68);
      if (lVar4 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x68) = lVar4;
      }
      else {
        func_0x00010bcebe80();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x70) == 0) {
        FUN_10b2505b4();
        *(ulong *)(unaff_x21 + 0x70) = uVar6;
      }
      else {
        FUN_10b24f1b4();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x88) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  func_0x00010b250890();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x00010b250878();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b123eac; end: 10b123f0b;  */

void FUN_10b123eac(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b13422c();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b133fe4();
  func_0x00010b1219e0();
  return;
}



/* Entry: 10b123f0c; end: 10b123f4f;  */

void FUN_10b123f0c(long param_1)

{
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x00010b134e20((&PTR_FUN_110cbc840)[*(uint *)(param_1 + 0x10)]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10b123f50; end: 10b123f5f;  */

void FUN_10b123f50(undefined8 param_1,long param_2)

{
  func_0x000107c350ac();
  if (param_2 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b123f60; end: 10b123fcb;  */

void FUN_10b123f60(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b134530();
  func_0x00010b1343f8();
  FUN_10b123fcc();
  *(undefined4 *)(unaff_x19 + 0x270) = *(undefined4 *)(unaff_x20 + 0x270);
  func_0x0001052a06f8(unaff_x19 + 0x278,unaff_x20 + 0x278);
  func_0x000107c279a0(unaff_x19 + 0x2c0,unaff_x20 + 0x2c0);
  *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x20 + 0x2e0);
  return;
}



/* Entry: 10b123fcc; end: 10b123ffb;  */

void FUN_10b123fcc(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x228) = 0;
  FUN_10b123ffc();
  return;
}



/* Entry: 10b123ffc; end: 10b12400f;  */

void FUN_10b123ffc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_10b12402c();
    *(undefined1 *)(param_1 + 0x228) = 1;
    return;
  }
  return;
}



/* Entry: 10b124010; end: 10b12402b;  */

void FUN_10b124010(long param_1)

{
  FUN_10b12402c();
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



/* Entry: 10b12402c; end: 10b124117;  */

void FUN_10b12402c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b134530();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_10b124118(param_1 + 0x18,unaff_x20 + 0x18);
  FUN_10b124224(unaff_x19 + 0x58,unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined1 *)(unaff_x19 + 0x98) = *(undefined1 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
  FUN_10b124374(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  FUN_10b124490(unaff_x19 + 400,unaff_x20 + 400);
  func_0x000105674f6c(unaff_x19 + 0x1d8,unaff_x20 + 0x1d8);
  func_0x000107c279a0(unaff_x19 + 0x1f8,unaff_x20 + 0x1f8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x218);
  *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x20 + 0x220);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar1;
  return;
}



/* Entry: 10b124118; end: 10b124147;  */

void FUN_10b124118(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_10b124148();
  return;
}



/* Entry: 10b124148; end: 10b12415b;  */

void FUN_10b124148(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_10b124174();
    func_0x00010b136304();
    return;
  }
  return;
}



/* Entry: 10b12415c; end: 10b124173;  */

void FUN_10b12415c(void)

{
  FUN_10b124174();
  func_0x00010b136304();
  return;
}



/* Entry: 10b124174; end: 10b12419f;  */

void FUN_10b124174(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10b1241a0();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10b1241a0; end: 10b1241cf;  */

void FUN_10b1241a0(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_10b1241d0();
  return;
}



/* Entry: 10b1241d0; end: 10b1241e3;  */

void FUN_10b1241d0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10b124200();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10b1241e4; end: 10b1241ff;  */

void FUN_10b1241e4(long param_1)

{
  FUN_10b124200();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b124200; end: 10b124223;  */

void FUN_10b124200(long param_1,long param_2)

{
  func_0x000107c28bb4();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 10b124224; end: 10b124253;  */

void FUN_10b124224(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10b124254();
  return;
}



/* Entry: 10b124254; end: 10b124267;  */

void FUN_10b124254(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b124280();
    func_0x00010b135188();
    return;
  }
  return;
}



/* Entry: 10b124268; end: 10b12427f;  */

void FUN_10b124268(void)

{
  FUN_10b124280();
  func_0x00010b135188();
  return;
}



/* Entry: 10b124280; end: 10b1242af;  */

void FUN_10b124280(void)

{
  func_0x00010b135044();
  FUN_10b1242b0();
  return;
}



/* Entry: 10b1242b0; end: 10b124317;  */

void FUN_10b1242b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010b134530();
    FUN_10b124318();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x00010b13579c();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x00010b134ecc();
  func_0x00010b12434c(&uStack_40);
  return;
}



/* Entry: 10b124318; end: 10b124373;  */

void FUN_10b124318(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x00010b134958();
    func_0x0001052b518c();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
    return;
  }
  func_0x0001052b50b0();
  func_0x00010b135850();
  if ((extraout_x8 & 1) == 0) {
    func_0x0001052b500c();
  }
  return;
}



/* Entry: 10b124374; end: 10b1243a3;  */

void FUN_10b124374(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0xe8) = 0;
  FUN_10b1243a4();
  return;
}



/* Entry: 10b1243a4; end: 10b1243b7;  */

void FUN_10b1243a4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_10b1243d4();
    *(undefined1 *)(param_1 + 0xe8) = 1;
    return;
  }
  return;
}



/* Entry: 10b1243b8; end: 10b1243d3;  */

void FUN_10b1243b8(long param_1)

{
  FUN_10b1243d4();
  *(undefined1 *)(param_1 + 0xe8) = 1;
  return;
}



/* Entry: 10b1243d4; end: 10b12448f;  */

void FUN_10b1243d4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b134530();
  func_0x00010b1345e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x48,unaff_x20 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x60) = *(undefined4 *)(unaff_x20 + 0x60);
  func_0x000107c279a0(unaff_x19 + 0x68,unaff_x20 + 0x68);
  func_0x000107c279a0(unaff_x19 + 0x88,unaff_x20 + 0x88);
  func_0x000107c279a0(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  func_0x000107c279a0(unaff_x19 + 200,unaff_x20 + 200);
  return;
}



/* Entry: 10b124490; end: 10b1244bf;  */

void FUN_10b124490(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_10b1244c0();
  return;
}



/* Entry: 10b1244c0; end: 10b1244d3;  */

void FUN_10b1244c0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10b1244f0();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10b1244d4; end: 10b1244ef;  */

void FUN_10b1244d4(long param_1)

{
  FUN_10b1244f0();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10b1244f0; end: 10b12452b;  */

void FUN_10b1244f0(void)

{
  func_0x00010b134438();
  func_0x000107c28bb4();
  func_0x00010b134cec();
  func_0x000104be0ccc();
  return;
}



/* Entry: 10b12452c; end: 10b124547;  */

void FUN_10b12452c(long param_1)

{
  FUN_10b121c1c();
  *(undefined1 *)(param_1 + 0x278) = 1;
  return;
}



/* Entry: 10b124548; end: 10b124587;  */

void FUN_10b124548(long param_1,long param_2)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x278) = 0;
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_10b12452c();
  }
  return;
}



/* Entry: 10b124588; end: 10b1245a7;  */

void FUN_10b124588(long param_1)

{
  if (*(char *)(param_1 + 0x278) == '\x01') {
    func_0x00010b121af0();
  }
  return;
}



/* Entry: 10b1245a8; end: 10b124647;  */

void FUN_10b1245a8(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  FUN_10b1bac30(*(undefined8 *)(param_2 + 0x18));
  lVar1 = *(long *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b124648; end: 10b12468b;  */

void FUN_10b124648(long param_1)

{
  if (*(uint *)(param_1 + 0x278) != 0xffffffff) {
    func_0x00010b134e20((&PTR_FUN_110cbc868)[*(uint *)(param_1 + 0x278)]);
  }
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  return;
}


