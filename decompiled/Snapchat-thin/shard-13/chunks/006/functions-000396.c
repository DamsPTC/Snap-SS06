/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8e0b80; end: 10a8e0b83;  */

void FUN_10a8e0b80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8e0b84; end: 10a8e0b97;  */

void FUN_10a8e0b84(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e0b98; end: 10a8e0bb3;  */

void FUN_10a8e0b98(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a8e0bb4; end: 10a8e0bef;  */

long FUN_10a8e0bb4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a8e0bf0; end: 10a8e0bf3;  */

void FUN_10a8e0bf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e0bf4; end: 10a8e0c7f;  */

long FUN_10a8e0bf4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a8e0c80; end: 10a8e0c9b;  */

void FUN_10a8e0c80(void)

{
  return;
}



/* Entry: 10a8e0c9c; end: 10a8e16cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a8e0d28) */

long FUN_10a8e0c9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0x10a080f80;
  appuStack_90[0] = &PTR_DAT_110b9f408;
  func_0x000107c2b088(param_1,&UNK_10f681ae0,0x2f,&uStack_b0,&uStack_98);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_98 = 0x10a080f80;
  appuStack_90[0] = &PTR_DAT_110b9f408;
  func_0x000107c2b088(param_1 + 0x98,&UNK_10f681b10,0x30,&uStack_d0,&uStack_98);
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  uStack_e8 = 0x434e455245464e49;
  uStack_f0 = 0x5f544c5541464544;
  lStack_e0 = 0x160045444f4d5f45;
  uStack_98 = 0x10a080f80;
  appuStack_90[0] = &PTR_DAT_110b9f408;
  func_0x000107c2b088(param_1 + 0x130,&UNK_10f681b41,0x2d,&uStack_f0,&uStack_98);
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  lStack_100 = 0x700000000000000;
  uStack_108 = 0;
  uStack_110 = 0x746c7561666544;
  uStack_98 = 0x10a080f80;
  appuStack_90[0] = &PTR_DAT_110b9f408;
  func_0x000107c2b088(param_1 + 0x1c8,&UNK_10f681b6f,0x2f,&uStack_110,&uStack_98);
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *(undefined8 **)(param_1 + 0x260) = puVar1;
  *(undefined8 *)(param_1 + 0x270) = 0x8000000000000028;
  *(undefined8 *)(param_1 + 0x268) = 0x20;
  puVar1[1] = 0x424150504f54535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x45434e455245464e;
  puVar1[2] = 0x495f5550435f454c;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(code **)(param_1 + 0x280) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x288) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *(undefined8 **)(param_1 + 0x2c0) = puVar1;
  *(undefined8 *)(param_1 + 0x2d0) = 0x8000000000000020;
  *(undefined8 *)(param_1 + 0x2c8) = 0x1e;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar1 + 0x16) = 0x474e49535345434f;
  *(undefined8 *)((long)puVar1 + 0xe) = 0x52505f4552505f4c;
  *(undefined1 *)((long)puVar1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e4) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0x10a0a027c;
  *(undefined ***)(param_1 + 0x2f0) = &PTR_DAT_110ba0c08;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *(undefined8 **)(param_1 + 0x328) = puVar1;
  *(undefined8 *)(param_1 + 0x338) = 0x8000000000000028;
  *(undefined8 *)(param_1 + 0x330) = 0x25;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x52505f4554494c46;
  puVar1[2] = 0x545f454c42414e45;
  *(undefined8 *)((long)puVar1 + 0x1d) = 0x4d5241574552505f;
  *(undefined1 *)((long)puVar1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(code **)(param_1 + 0x348) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x350) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *(undefined8 **)(param_1 + 0x388) = puVar1;
  *(undefined8 *)(param_1 + 0x398) = 0x8000000000000030;
  *(undefined8 *)(param_1 + 0x390) = 0x2f;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x50475f4554494c46;
  puVar1[2] = 0x545f454c42414e45;
  *(undefined8 *)((long)puVar1 + 0x27) = 0x4e4f4954415a494c;
  *(undefined8 *)((long)puVar1 + 0x1f) = 0x41495245535f5550;
  *(undefined1 *)((long)puVar1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 1;
  *(code **)(param_1 + 0x3a8) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x3b0) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *(undefined8 **)(param_1 + 1000) = puVar1;
  *(undefined8 *)(param_1 + 0x3f8) = 0x8000000000000040;
  *(undefined8 *)(param_1 + 0x3f0) = 0x39;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4c4d5f4554494c46;
  puVar1[2] = 0x545f454c42414e45;
  puVar1[5] = 0x4f534e45545f544e;
  puVar1[4] = 0x4154534e4f435f44;
  *(undefined8 *)((long)puVar1 + 0x31) = 0x474e49524148535f;
  *(undefined8 *)((long)puVar1 + 0x29) = 0x524f534e45545f54;
  *(undefined1 *)((long)puVar1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(code **)(param_1 + 0x408) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x410) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *(undefined8 **)(param_1 + 0x448) = puVar1;
  *(undefined8 *)(param_1 + 0x458) = 0x8000000000000040;
  *(undefined8 *)(param_1 + 0x450) = 0x38;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4c4d5f4554494c46;
  puVar1[2] = 0x545f454c42414e45;
  puVar1[5] = 0x4f435f5354484749;
  puVar1[4] = 0x45575f5550475f44;
  puVar1[6] = 0x4e4f49535245564e;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x460) = 1;
  *(code **)(param_1 + 0x468) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x470) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *(undefined8 **)(param_1 + 0x4a8) = puVar1;
  *(undefined8 *)(param_1 + 0x4b8) = 0x8000000000000040;
  *(undefined8 *)(param_1 + 0x4b0) = 0x39;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x50475f5452455449;
  puVar1[2] = 0x4c5f454c42414e45;
  puVar1[5] = 0x4f534e45545f544e;
  puVar1[4] = 0x4154534e4f435f55;
  *(undefined8 *)((long)puVar1 + 0x31) = 0x474e49524148535f;
  *(undefined8 *)((long)puVar1 + 0x29) = 0x524f534e45545f54;
  *(undefined1 *)((long)puVar1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  *(code **)(param_1 + 0x4c8) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x4d0) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *(undefined8 **)(param_1 + 0x508) = puVar1;
  *(undefined4 *)(puVar1 + 6) = 0x4e4f4953;
  *(undefined8 *)(param_1 + 0x518) = 0x8000000000000038;
  *(undefined8 *)(param_1 + 0x510) = 0x34;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x50475f5452455449;
  puVar1[2] = 0x4c5f454c42414e45;
  puVar1[5] = 0x5245564e4f435f53;
  puVar1[4] = 0x5448474945575f55;
  *(undefined1 *)((long)puVar1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x520) = 1;
  *(code **)(param_1 + 0x528) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x530) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *(undefined8 **)(param_1 + 0x568) = puVar1;
  *(undefined8 *)(param_1 + 0x578) = 0x8000000000000030;
  *(undefined8 *)(param_1 + 0x570) = 0x2f;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x50475f5452455449;
  puVar1[2] = 0x4c5f454c42414e45;
  *(undefined8 *)((long)puVar1 + 0x27) = 0x4e4f4954415a494c;
  *(undefined8 *)((long)puVar1 + 0x1f) = 0x41495245535f5550;
  *(undefined1 *)((long)puVar1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(code **)(param_1 + 0x588) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x590) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *(undefined8 **)(param_1 + 0x5c8) = puVar1;
  *(undefined8 *)(param_1 + 0x5d8) = 0x8000000000000048;
  *(undefined8 *)(param_1 + 0x5d0) = 0x45;
  puVar1[5] = 0x5f4349544154535f;
  puVar1[4] = 0x4c434e45504f5f55;
  puVar1[7] = 0x4f5249564e455f45;
  puVar1[6] = 0x434e455245464e49;
  *(undefined8 *)((long)puVar1 + 0x3d) = 0x544e454d4e4f5249;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x50475f4554494c46;
  puVar1[2] = 0x545f454c42414e45;
  *(undefined1 *)((long)puVar1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x5e0) = 1;
  *(code **)(param_1 + 0x5e8) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x5f0) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *(undefined8 **)(param_1 + 0x628) = puVar1;
  *(undefined8 *)(param_1 + 0x638) = 0x8000000000000040;
  *(undefined8 *)(param_1 + 0x630) = 0x38;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x50475f4554494c46;
  puVar1[2] = 0x545f454c42414e45;
  puVar1[5] = 0x4d4152474f52505f;
  puVar1[4] = 0x4c434e45504f5f55;
  puVar1[6] = 0x57525f4548434143;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x640) = 1;
  *(code **)(param_1 + 0x648) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x650) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *(undefined8 **)(param_1 + 0x688) = puVar1;
  *(undefined8 *)(param_1 + 0x698) = 0x8000000000000028;
  *(undefined8 *)(param_1 + 0x690) = 0x27;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4552505f4950414e;
  puVar1[2] = 0x4e5f454c42414e45;
  *(undefined8 *)((long)puVar1 + 0x1f) = 0x474e494d52415745;
  *(undefined1 *)((long)puVar1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  *(code **)(param_1 + 0x6a8) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x6b0) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *(undefined8 **)(param_1 + 0x6e8) = puVar1;
  *(undefined8 *)(param_1 + 0x6f8) = 0x8000000000000028;
  *(undefined8 *)(param_1 + 0x6f0) = 0x25;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4d4f4345445f434f;
  puVar1[2] = 0x4c4c415f4f52455a;
  *(undefined8 *)((long)puVar1 + 0x1d) = 0x53534552504d4f43;
  *(undefined1 *)((long)puVar1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(code **)(param_1 + 0x708) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x710) = &PTR_DAT_110ba0fe0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *(undefined8 **)(param_1 + 0x748) = puVar1;
  *(undefined4 *)(puVar1 + 4) = 0x53545550;
  *(undefined8 *)(param_1 + 0x758) = 0x8000000000000028;
  *(undefined8 *)(param_1 + 0x750) = 0x24;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x54554f5f4c4d4552;
  puVar1[2] = 0x4f435f434f4c4c41;
  *(undefined1 *)((long)puVar1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x760) = 0;
  *(code **)(param_1 + 0x768) = FUN_10a09e854;
  *(undefined ***)(param_1 + 0x770) = &PTR_DAT_110ba0fe0;
  lStack_120 = 0x700000000000000;
  uStack_128 = 0;
  uStack_130 = 0x746c7561666564;
  uStack_98 = 0x10a080f80;
  appuStack_90[0] = &PTR_DAT_110b9f408;
  func_0x000107c2b088(param_1 + 0x7a8,&UNK_10f681e13,0x21,&uStack_130,&uStack_98);
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  lStack_140 = 0x700000000000000;
  uStack_148 = 0;
  uStack_150 = 0x746c7561666564;
  uStack_98 = 0x10a080f80;
  appuStack_90[0] = &PTR_DAT_110b9f408;
  func_0x000107c2b088(param_1 + 0x840,&UNK_10f681e35,0x2a,&uStack_150,&uStack_98);
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *(undefined8 **)(param_1 + 0x8d8) = puVar1;
  *(undefined8 *)(param_1 + 0x8e8) = 0x8000000000000030;
  *(undefined8 *)(param_1 + 0x8e0) = 0x28;
  puVar1[1] = 0x5f4c4d50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x435f4c4d5f434e59;
  puVar1[2] = 0x53415f4543524f46;
  puVar1[4] = 0x544e454e4f504d4f;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined4 *)(param_1 + 0x8f0) = 0;
  *(undefined1 *)(param_1 + 0x8f4) = 0;
  *(undefined1 *)(param_1 + 0x8f8) = 0;
  *(undefined1 *)(param_1 + 0x8fc) = 0;
  *(undefined8 *)(param_1 + 0x900) = 0x10a0a027c;
  *(undefined ***)(param_1 + 0x908) = &PTR_DAT_110ba0c08;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a03d294(param_1 + 0x840);
    FUN_10a03d294(param_1 + 0x7a8);
    (*(code *)**(undefined8 **)(param_1 + 0x770))(param_1 + 0x770);
    if (*(char *)(param_1 + 0x75f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x748));
    }
    (*(code *)**(undefined8 **)(param_1 + 0x710))(param_1 + 0x710);
    if (*(char *)(param_1 + 0x6ff) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x6e8));
    }
    (*(code *)**(undefined8 **)(param_1 + 0x6b0))(param_1 + 0x6b0);
    if (*(char *)(param_1 + 0x69f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x688));
    }
    (*(code *)**(undefined8 **)(param_1 + 0x650))(param_1 + 0x650);
    if (*(char *)(param_1 + 0x63f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x628));
    }
    (*(code *)**(undefined8 **)(param_1 + 0x5f0))(param_1 + 0x5f0);
    if (*(char *)(param_1 + 0x5df) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x5c8));
    }
    (*(code *)**(undefined8 **)(param_1 + 0x590))(param_1 + 0x590);
    if (*(char *)(param_1 + 0x57f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x568));
    }
    (*(code *)**(undefined8 **)(param_1 + 0x530))(param_1 + 0x530);
    if (*(char *)(param_1 + 0x51f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x508));
    }
    do {
      (*(code *)**(undefined8 **)(param_1 + 0x4d0))(param_1 + 0x4d0);
      if (*(char *)(param_1 + 0x4bf) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x4a8));
      }
      (*(code *)**(undefined8 **)(param_1 + 0x470))(param_1 + 0x470);
      if (*(char *)(param_1 + 0x45f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x448));
      }
      (*(code *)**(undefined8 **)(param_1 + 0x410))(param_1 + 0x410);
      if (*(char *)(param_1 + 0x3ff) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 1000));
      }
      (*(code *)**(undefined8 **)(param_1 + 0x3b0))(param_1 + 0x3b0);
      if (*(char *)(param_1 + 0x39f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x388));
      }
      (*(code *)**(undefined8 **)(param_1 + 0x350))(param_1 + 0x350);
      if (*(char *)(param_1 + 0x33f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x328));
      }
      (*(code *)**(undefined8 **)(param_1 + 0x2f0))(param_1 + 0x2f0);
      if (*(char *)(param_1 + 0x2d7) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x2c0));
      }
      (*(code *)**(undefined8 **)(param_1 + 0x288))(param_1 + 0x288);
      if (*(char *)(param_1 + 0x277) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x260));
      }
      FUN_10a03d294(param_1 + 0x1c8);
      FUN_10a03d294(param_1 + 0x130);
      FUN_10a03d294(param_1 + 0x98);
      FUN_10a03d294(param_1);
      __Unwind_Resume(puVar1);
    } while( true );
  }
  return param_1;
}



/* Entry: 10a8e16cc; end: 10a8e17c7;  */

undefined1  [16] FUN_10a8e16cc(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c285d8;
  puVar1 = &UNK_10f67fb58;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c285d8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8e17c8; end: 10a8e182b;  */

ulong FUN_10a8e17c8(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e182c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a8e182c,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a8e182c; end: 10a8e1a6f;  */

void FUN_10a8e182c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_5;
  (**(code **)(*param_5 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_5;
  func_0x000109898688(param_5,param_6);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_5;
    FUN_10a053854(param_5,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a8e1a70(param_8);
      FUN_10a1f7d54(&puStack_98,param_5,param_7);
      plVar6 = param_5;
      func_0x00010a0655d8(param_5,param_7 + 0x10);
      FUN_10a1f7d54(&plStack_a8,param_5,param_7 + 0x20);
      uVar13 = puStack_98[1];
      FUN_10a8bcad0(&uStack_78,plVar6);
      FUN_10a8bc9e4(uVar13,&uStack_78);
      uStack_78 = *puStack_98;
      lStack_70 = puStack_98[1];
      lStack_88 = *plStack_a8;
      lStack_80 = plStack_a8[1];
      FUN_10ad1de9c(plVar7[5],&uStack_78,plVar6,&lStack_88);
      if (plStack_a0 != (long *)0x0) {
        plVar6 = plStack_a0 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
      if (plStack_90 != (long *)0x0) {
        plVar6 = plStack_90 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
        }
      }
      uStack_78 = CONCAT44(param_3,param_2);
      lStack_70 = CONCAT44(lStack_70._4_4_,param_4);
      FUN_10a065390(param_1,param_5,&uStack_78);
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar15 = plVar5[0x4c];
      lVar12 = lVar15 - lVar11;
      uVar17 = lVar12 >> 4;
      if (uVar17 < uVar9) {
        uVar18 = uVar9 - uVar17;
        lVar16 = plVar5[0x4d];
        if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar16 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar15 = lVar4 + lVar12;
              _bzero(lVar15,uVar18 * 0x10);
              lVar14 = lVar15 + uVar17 * -0x10;
              _memcpy(lVar14,lVar11,lVar12);
              *plVar6 = lVar14;
              plVar5[0x4c] = lVar15 + uVar18 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              uStack_78 = lVar11;
              lStack_70 = lVar16;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar15,uVar18 * 0x10);
        plVar5[0x4c] = lVar15 + uVar18 * 0x10;
      }
      else if (uVar9 < uVar17) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar15 != lVar11) {
          lVar15 = lVar15 + -0x10;
          func_0x00010988c204(lVar15);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8e1a38);
  (*pcVar3)();
}



/* Entry: 10a8e1a70; end: 10a8e1a93;  */

ulong FUN_10a8e1a70(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((int)param_1 == 3) {
    return param_1;
  }
  uVar1 = 3;
  puVar3 = (undefined8 *)0x0;
  FUN_10a052ee0(3,0,param_1);
  uVar2 = uVar1;
  FUN_10a0051e8();
  if ((uVar2 & 1) == 0) {
    FUN_10a0605c4(uVar1,*puVar3,FUN_10a8e1ae8,0);
  }
  return uVar1;
}



/* Entry: 10a8e1a94; end: 10a8e1ae7;  */

ulong FUN_10a8e1a94(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a8e1ae8,0);
  }
  return param_1;
}



/* Entry: 10a8e1ae8; end: 10a8e1c23;  */

void FUN_10a8e1ae8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar7 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar7 == (long *)0x0) {
    puVar4 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar7);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      plVar7 = (long *)param_2[5];
      fVar15 = (float)(ulong)plVar7[0x11] / (float)(ulong)plVar7[0x12];
      if (fVar15 <= 1.0) {
        fVar15 = 1.0;
      }
      uVar6 = *(ulong *)(*plVar7 + 0x18);
      uVar13 = 0;
      if (uVar6 != 0) {
        uVar13 = (ulong)(*(long *)(*plVar7 + 0x10) << 0xe) / uVar6;
      }
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)(uVar13 * (long)(int)fVar15);
      plVar7 = plVar3 + 0x4b;
      lVar5 = plVar3[0x59];
      uVar6 = lVar5 - 1;
      plVar3[0x59] = uVar6;
      if (uVar6 < 8) {
        uVar6 = plVar7[lVar5 + 2];
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      else {
        uVar6 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      lVar5 = *plVar7;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar5;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar6) {
        uVar14 = uVar6 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar6 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar5 >> 3;
            if (uVar8 <= uVar6) {
              uVar8 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar7;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar5,lVar9);
              *plVar7 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar5;
              lStack_80 = lVar5;
              lStack_78 = lVar5;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar6 < uVar13) {
        lVar5 = lVar5 + uVar6 * 0x10;
        while (lVar11 != lVar5) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar5;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar6;
      return;
    }
    puVar4 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e1c10);
  (*pcVar1)();
}



/* Entry: 10a8e1c24; end: 10a8e1cdf;  */

void FUN_10a8e1c24(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f680c4d,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8e1ce0);
  (*pcVar4)();
}



/* Entry: 10a8e1ce0; end: 10a8e1ddb;  */

undefined1  [16] FUN_10a8e1ce0(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c286c0;
  puVar1 = &UNK_10f67fb58;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c286c0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8e1ddc; end: 10a8e1e3f;  */

ulong FUN_10a8e1ddc(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e1e40);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a8e1e40,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a8e1e40; end: 10a8e2083;  */

void FUN_10a8e1e40(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_5;
  (**(code **)(*param_5 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_5;
  func_0x000109898688(param_5,param_6);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_5;
    FUN_10a053854(param_5,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a8e1a70(param_8);
      FUN_10a1f7d54(&puStack_98,param_5,param_7);
      plVar6 = param_5;
      func_0x00010a0655d8(param_5,param_7 + 0x10);
      FUN_10a1f7d54(&plStack_a8,param_5,param_7 + 0x20);
      uVar13 = puStack_98[1];
      FUN_10a8bcad0(&uStack_78,plVar6);
      FUN_10a8bc9e4(uVar13,&uStack_78);
      uStack_78 = *puStack_98;
      lStack_70 = puStack_98[1];
      lStack_88 = *plStack_a8;
      lStack_80 = plStack_a8[1];
      FUN_10ad1daf8(plVar7[5],&uStack_78,plVar6,&lStack_88);
      if (plStack_a0 != (long *)0x0) {
        plVar6 = plStack_a0 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
      if (plStack_90 != (long *)0x0) {
        plVar6 = plStack_90 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
        }
      }
      uStack_78 = CONCAT44(param_3,param_2);
      lStack_70 = CONCAT44(lStack_70._4_4_,param_4);
      FUN_10a065390(param_1,param_5,&uStack_78);
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar15 = plVar5[0x4c];
      lVar12 = lVar15 - lVar11;
      uVar17 = lVar12 >> 4;
      if (uVar17 < uVar9) {
        uVar18 = uVar9 - uVar17;
        lVar16 = plVar5[0x4d];
        if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar16 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar15 = lVar4 + lVar12;
              _bzero(lVar15,uVar18 * 0x10);
              lVar14 = lVar15 + uVar17 * -0x10;
              _memcpy(lVar14,lVar11,lVar12);
              *plVar6 = lVar14;
              plVar5[0x4c] = lVar15 + uVar18 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              uStack_78 = lVar11;
              lStack_70 = lVar16;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar15,uVar18 * 0x10);
        plVar5[0x4c] = lVar15 + uVar18 * 0x10;
      }
      else if (uVar9 < uVar17) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar15 != lVar11) {
          lVar15 = lVar15 + -0x10;
          func_0x00010988c204(lVar15);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8e204c);
  (*pcVar3)();
}



/* Entry: 10a8e2084; end: 10a8e20d7;  */

ulong FUN_10a8e2084(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a8e20d8,0);
  }
  return param_1;
}



/* Entry: 10a8e20d8; end: 10a8e21eb;  */

void FUN_10a8e20d8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar7 = *(long *)(param_2[5] + 0x20);
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)(ulong)(lVar7 * 0x14);
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar6 = lVar7 - 1;
      plVar3[0x59] = uVar6;
      if (uVar6 < 8) {
        uVar6 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      else {
        uVar6 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar7;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar6) {
        uVar14 = uVar6 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar6 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar7 >> 3;
            if (uVar8 <= uVar6) {
              uVar8 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar7,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar6 < uVar13) {
        lVar7 = lVar7 + uVar6 * 0x10;
        while (lVar11 != lVar7) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar6;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e21d8);
  (*pcVar1)();
}



/* Entry: 10a8e21ec; end: 10a8e22a7;  */

void FUN_10a8e21ec(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f680c59,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8e22a8);
  (*pcVar4)();
}



/* Entry: 10a8e22a8; end: 10a8e23a3;  */

undefined1  [16] FUN_10a8e22a8(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c287a8;
  puVar1 = &UNK_10f67fb58;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c287a8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8e23a4; end: 10a8e2407;  */

ulong FUN_10a8e23a4(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e2408);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a8e2408,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a8e2408; end: 10a8e264b;  */

void FUN_10a8e2408(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_5;
  (**(code **)(*param_5 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_5;
  func_0x000109898688(param_5,param_6);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_5;
    FUN_10a053854(param_5,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a8e1a70(param_8);
      FUN_10a1f7d54(&puStack_98,param_5,param_7);
      plVar6 = param_5;
      func_0x00010a0655d8(param_5,param_7 + 0x10);
      FUN_10a1f7d54(&plStack_a8,param_5,param_7 + 0x20);
      uVar13 = puStack_98[1];
      FUN_10a8bcad0(&uStack_78,plVar6);
      FUN_10a8bc9e4(uVar13,&uStack_78);
      uStack_78 = *puStack_98;
      lStack_70 = puStack_98[1];
      lStack_88 = *plStack_a8;
      lStack_80 = plStack_a8[1];
      FUN_10ad1d190(plVar7[5],&uStack_78,plVar6,&lStack_88);
      if (plStack_a0 != (long *)0x0) {
        plVar6 = plStack_a0 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
      if (plStack_90 != (long *)0x0) {
        plVar6 = plStack_90 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
        }
      }
      uStack_78 = CONCAT44(param_3,param_2);
      lStack_70 = CONCAT44(lStack_70._4_4_,param_4);
      FUN_10a065390(param_1,param_5,&uStack_78);
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar15 = plVar5[0x4c];
      lVar12 = lVar15 - lVar11;
      uVar17 = lVar12 >> 4;
      if (uVar17 < uVar9) {
        uVar18 = uVar9 - uVar17;
        lVar16 = plVar5[0x4d];
        if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar16 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar15 = lVar4 + lVar12;
              _bzero(lVar15,uVar18 * 0x10);
              lVar14 = lVar15 + uVar17 * -0x10;
              _memcpy(lVar14,lVar11,lVar12);
              *plVar6 = lVar14;
              plVar5[0x4c] = lVar15 + uVar18 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              uStack_78 = lVar11;
              lStack_70 = lVar16;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar15,uVar18 * 0x10);
        plVar5[0x4c] = lVar15 + uVar18 * 0x10;
      }
      else if (uVar9 < uVar17) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar15 != lVar11) {
          lVar15 = lVar15 + -0x10;
          func_0x00010988c204(lVar15);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8e2614);
  (*pcVar3)();
}



/* Entry: 10a8e264c; end: 10a8e269f;  */

ulong FUN_10a8e264c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a8e26a0,0);
  }
  return param_1;
}



/* Entry: 10a8e26a0; end: 10a8e27b3;  */

void FUN_10a8e26a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar7 = *(long *)(param_2[5] + 0x38);
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)(ulong)(lVar7 * 0x14);
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar6 = lVar7 - 1;
      plVar3[0x59] = uVar6;
      if (uVar6 < 8) {
        uVar6 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      else {
        uVar6 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar7;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar6) {
        uVar14 = uVar6 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar6 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar7 >> 3;
            if (uVar8 <= uVar6) {
              uVar8 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar7,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar6 < uVar13) {
        lVar7 = lVar7 + uVar6 * 0x10;
        while (lVar11 != lVar7) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar6;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e27a0);
  (*pcVar1)();
}



/* Entry: 10a8e27b4; end: 10a8e286f;  */

void FUN_10a8e27b4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f680c68,4);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8e2870);
  (*pcVar4)();
}



/* Entry: 10a8e2870; end: 10a8e296b;  */

undefined1  [16] FUN_10a8e2870(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c28890;
  puVar1 = &UNK_10f67fb58;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c28890;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8e296c; end: 10a8e29cf;  */

ulong FUN_10a8e296c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e29d0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a8e29d0,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a8e29d0; end: 10a8e2c5f;  */

void FUN_10a8e29d0(undefined8 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_5;
  func_0x000109898688(param_5,param_6);
  if (plVar8 == (long *)0x0) {
    puVar10 = &UNK_10f68f52e;
  }
  else {
    plVar9 = param_5;
    FUN_10a053854(param_5,plVar8);
    if ((plVar9 != (long *)0x0) && (___dynamic_cast(), plVar9 != (long *)0x0)) {
      FUN_10a8e1a70(param_8);
      FUN_10a1f7d54(&puStack_98,param_5,param_7);
      plVar8 = param_5;
      func_0x00010a0655d8(param_5,param_7 + 0x10);
      FUN_10a1f7d54(&plStack_a8,param_5,param_7 + 0x20);
      uVar16 = puStack_98[1];
      FUN_10a8bcad0(&uStack_78,plVar8);
      FUN_10a8bc9e4(uVar16,&uStack_78);
      uStack_80 = plStack_a8[1];
      uVar13 = plVar9[7];
      if (uVar13 != 0) {
        param_2 = *(float *)((long)plVar8 + 4);
        uVar14 = (ulong)param_2;
        if (uVar14 != 0) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar13;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar14;
          if (SUB168(auVar3 * auVar4,8) == 0) {
            if (uVar13 * uVar14 < uStack_80 || uVar13 * uVar14 - uStack_80 == 0) goto LAB_10a8e2b04;
            puVar10 = &UNK_10f680e3f;
          }
          else {
            puVar10 = &UNK_10f6818f4;
          }
          FUN_10a00946c(puVar10);
          goto LAB_10a8e2c24;
        }
      }
LAB_10a8e2b04:
      uStack_78 = *puStack_98;
      lStack_70 = puStack_98[1];
      lStack_88 = *plStack_a8;
      FUN_10ad1cdac(plVar9[5],&uStack_78,plVar8,&lStack_88);
      if (plStack_a0 != (long *)0x0) {
        plVar8 = plStack_a0 + 1;
        do {
          lVar12 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
      if (plStack_90 != (long *)0x0) {
        plVar8 = plStack_90 + 1;
        do {
          lVar12 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
        }
      }
      uStack_78 = CONCAT44(param_3,param_2);
      lStack_70 = CONCAT44(lStack_70._4_4_,param_4);
      FUN_10a065390(param_1,param_5,&uStack_78);
      plVar8 = plVar7 + 0x4b;
      lVar12 = plVar7[0x59];
      uVar13 = lVar12 - 1;
      plVar7[0x59] = uVar13;
      if (uVar13 < 8) {
        uVar13 = plVar8[lVar12 + 2];
        if (plVar7[0x5a] == uVar13) {
          return;
        }
      }
      else {
        uVar13 = *(ulong *)(plVar7[0x57] + -8);
        plVar7[0x57] = plVar7[0x57] + -8;
        if (plVar7[0x5a] == uVar13) {
          return;
        }
      }
      lVar12 = *plVar8;
      lVar18 = plVar7[0x4c];
      lVar15 = lVar18 - lVar12;
      uVar14 = lVar15 >> 4;
      if (uVar14 < uVar13) {
        uVar20 = uVar13 - uVar14;
        lVar19 = plVar7[0x4d];
        if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
          if (uVar13 >> 0x3c == 0) {
            uVar11 = lVar19 - lVar12 >> 3;
            if (uVar11 <= uVar13) {
              uVar11 = uVar13;
            }
            if (0x7fffffffffffffef < (ulong)(lVar19 - lVar12)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar8;
            if (uVar11 >> 0x3c == 0) {
              lVar6 = uVar11 << 4;
              __Znwm();
              lVar18 = lVar6 + lVar15;
              _bzero(lVar18,uVar20 * 0x10);
              lVar17 = lVar18 + uVar14 * -0x10;
              _memcpy(lVar17,lVar12,lVar15);
              *plVar8 = lVar17;
              plVar7[0x4c] = lVar18 + uVar20 * 0x10;
              plVar7[0x4d] = lVar6 + uVar11 * 0x10;
              lStack_88 = lVar12;
              uStack_80 = lVar12;
              uStack_78 = lVar12;
              lStack_70 = lVar19;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar5)();
        }
        _bzero(lVar18,uVar20 * 0x10);
        plVar7[0x4c] = lVar18 + uVar20 * 0x10;
      }
      else if (uVar13 < uVar14) {
        lVar12 = lVar12 + uVar13 * 0x10;
        while (lVar18 != lVar12) {
          lVar18 = lVar18 + -0x10;
          func_0x00010988c204(lVar18);
        }
        plVar7[0x4c] = lVar12;
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar13;
      return;
    }
    puVar10 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar10);
LAB_10a8e2c24:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8e2c28);
  (*pcVar5)();
}



/* Entry: 10a8e2c60; end: 10a8e2cb3;  */

ulong FUN_10a8e2c60(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a8e2cb4,0);
  }
  return param_1;
}



/* Entry: 10a8e2cb4; end: 10a8e2dc7;  */

void FUN_10a8e2cb4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar7 = *(long *)(param_2[5] + 0x20);
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)(ulong)(lVar7 * 0x14);
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar6 = lVar7 - 1;
      plVar3[0x59] = uVar6;
      if (uVar6 < 8) {
        uVar6 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      else {
        uVar6 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar7;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar6) {
        uVar14 = uVar6 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar6 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar7 >> 3;
            if (uVar8 <= uVar6) {
              uVar8 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar7,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar6 < uVar13) {
        lVar7 = lVar7 + uVar6 * 0x10;
        while (lVar11 != lVar7) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar6;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e2db4);
  (*pcVar1)();
}



/* Entry: 10a8e2dc8; end: 10a8e2e83;  */

void FUN_10a8e2dc8(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f680c6d,5);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8e2e84);
  (*pcVar4)();
}



/* Entry: 10a8e2e84; end: 10a8e2f7f;  */

undefined1  [16] FUN_10a8e2e84(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c28978;
  puVar1 = &UNK_10f67fb58;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c28978;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8e2f80; end: 10a8e2fe3;  */

ulong FUN_10a8e2f80(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e2fe4);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a8e2fe4,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a8e2fe4; end: 10a8e3273;  */

void FUN_10a8e2fe4(undefined8 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_5;
  func_0x000109898688(param_5,param_6);
  if (plVar8 == (long *)0x0) {
    puVar10 = &UNK_10f68f52e;
  }
  else {
    plVar9 = param_5;
    FUN_10a053854(param_5,plVar8);
    if ((plVar9 != (long *)0x0) && (___dynamic_cast(), plVar9 != (long *)0x0)) {
      FUN_10a8e1a70(param_8);
      FUN_10a1f7d54(&puStack_98,param_5,param_7);
      plVar8 = param_5;
      func_0x00010a0655d8(param_5,param_7 + 0x10);
      FUN_10a1f7d54(&plStack_a8,param_5,param_7 + 0x20);
      uVar16 = puStack_98[1];
      FUN_10a8bcad0(&uStack_78,plVar8);
      FUN_10a8bc9e4(uVar16,&uStack_78);
      uStack_80 = plStack_a8[1];
      uVar13 = plVar9[7];
      if (uVar13 != 0) {
        param_2 = *(float *)((long)plVar8 + 4);
        uVar14 = (ulong)param_2;
        if (uVar14 != 0) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar13;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar14;
          if (SUB168(auVar3 * auVar4,8) == 0) {
            if (uVar13 * uVar14 < uStack_80 || uVar13 * uVar14 - uStack_80 == 0) goto LAB_10a8e3118;
            puVar10 = &UNK_10f680e3f;
          }
          else {
            puVar10 = &UNK_10f6818f4;
          }
          FUN_10a00946c(puVar10);
          goto LAB_10a8e3238;
        }
      }
LAB_10a8e3118:
      uStack_78 = *puStack_98;
      lStack_70 = puStack_98[1];
      lStack_88 = *plStack_a8;
      FUN_10ad1cbb0(plVar9[5],&uStack_78,plVar8,&lStack_88);
      if (plStack_a0 != (long *)0x0) {
        plVar8 = plStack_a0 + 1;
        do {
          lVar12 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
      if (plStack_90 != (long *)0x0) {
        plVar8 = plStack_90 + 1;
        do {
          lVar12 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
        }
      }
      uStack_78 = CONCAT44(param_3,param_2);
      lStack_70 = CONCAT44(lStack_70._4_4_,param_4);
      FUN_10a065390(param_1,param_5,&uStack_78);
      plVar8 = plVar7 + 0x4b;
      lVar12 = plVar7[0x59];
      uVar13 = lVar12 - 1;
      plVar7[0x59] = uVar13;
      if (uVar13 < 8) {
        uVar13 = plVar8[lVar12 + 2];
        if (plVar7[0x5a] == uVar13) {
          return;
        }
      }
      else {
        uVar13 = *(ulong *)(plVar7[0x57] + -8);
        plVar7[0x57] = plVar7[0x57] + -8;
        if (plVar7[0x5a] == uVar13) {
          return;
        }
      }
      lVar12 = *plVar8;
      lVar18 = plVar7[0x4c];
      lVar15 = lVar18 - lVar12;
      uVar14 = lVar15 >> 4;
      if (uVar14 < uVar13) {
        uVar20 = uVar13 - uVar14;
        lVar19 = plVar7[0x4d];
        if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
          if (uVar13 >> 0x3c == 0) {
            uVar11 = lVar19 - lVar12 >> 3;
            if (uVar11 <= uVar13) {
              uVar11 = uVar13;
            }
            if (0x7fffffffffffffef < (ulong)(lVar19 - lVar12)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar8;
            if (uVar11 >> 0x3c == 0) {
              lVar6 = uVar11 << 4;
              __Znwm();
              lVar18 = lVar6 + lVar15;
              _bzero(lVar18,uVar20 * 0x10);
              lVar17 = lVar18 + uVar14 * -0x10;
              _memcpy(lVar17,lVar12,lVar15);
              *plVar8 = lVar17;
              plVar7[0x4c] = lVar18 + uVar20 * 0x10;
              plVar7[0x4d] = lVar6 + uVar11 * 0x10;
              lStack_88 = lVar12;
              uStack_80 = lVar12;
              uStack_78 = lVar12;
              lStack_70 = lVar19;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar5)();
        }
        _bzero(lVar18,uVar20 * 0x10);
        plVar7[0x4c] = lVar18 + uVar20 * 0x10;
      }
      else if (uVar13 < uVar14) {
        lVar12 = lVar12 + uVar13 * 0x10;
        while (lVar18 != lVar12) {
          lVar18 = lVar18 + -0x10;
          func_0x00010988c204(lVar18);
        }
        plVar7[0x4c] = lVar12;
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar13;
      return;
    }
    puVar10 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar10);
LAB_10a8e3238:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8e323c);
  (*pcVar5)();
}



/* Entry: 10a8e3274; end: 10a8e32c7;  */

ulong FUN_10a8e3274(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a8e32c8,0);
  }
  return param_1;
}



/* Entry: 10a8e32c8; end: 10a8e33db;  */

void FUN_10a8e32c8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar7 = *(long *)(param_2[5] + 0x18);
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)(ulong)(lVar7 * 0x14);
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar6 = lVar7 - 1;
      plVar3[0x59] = uVar6;
      if (uVar6 < 8) {
        uVar6 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      else {
        uVar6 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar6) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar7;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar6) {
        uVar14 = uVar6 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar6 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar7 >> 3;
            if (uVar8 <= uVar6) {
              uVar8 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar7,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar6 < uVar13) {
        lVar7 = lVar7 + uVar6 * 0x10;
        while (lVar11 != lVar7) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar6;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e33c8);
  (*pcVar1)();
}



/* Entry: 10a8e33dc; end: 10a8e3497;  */

void FUN_10a8e33dc(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f680c73,5);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8e3498);
  (*pcVar4)();
}



/* Entry: 10a8e3498; end: 10a8e368f;  */

void FUN_10a8e3498(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_5;
  (**(code **)(*param_5 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_5;
  FUN_10a8e3690(param_5,param_6);
  FUN_10a8e1a70(param_8);
  FUN_10a1f7d54(&puStack_98,param_5,param_7);
  plVar7 = param_5;
  func_0x00010a0655d8(param_5,param_7 + 0x10);
  FUN_10a1f7d54(&plStack_a8,param_5,param_7 + 0x20);
  uVar12 = puStack_98[1];
  FUN_10a8bcad0(&uStack_78,plVar7);
  FUN_10a8bc9e4(uVar12,&uStack_78);
  uStack_78 = *puStack_98;
  lStack_70 = puStack_98[1];
  lStack_88 = *plStack_a8;
  lStack_80 = plStack_a8[1];
  FUN_10ad1241c(plVar6[5],&uStack_78,plVar7,&lStack_88);
  if (plStack_a0 != (long *)0x0) {
    plVar6 = plStack_a0 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  if (plStack_90 != (long *)0x0) {
    plVar6 = plStack_90 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  uStack_78 = CONCAT44(param_3,param_2);
  lStack_70 = CONCAT44(lStack_70._4_4_,param_4);
  FUN_10a065390(param_1,param_5,&uStack_78);
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar6;
  lVar14 = plVar5[0x4c];
  lVar11 = lVar14 - lVar10;
  uVar16 = lVar11 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    lVar15 = plVar5[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar15 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar11;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar10,lVar11);
          *plVar6 = lVar13;
          plVar5[0x4c] = lVar14 + uVar17 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          uStack_78 = lVar10;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar5[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar8 < uVar16) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar14 != lVar10) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a8e3690; end: 10a8e36f7;  */

void FUN_10a8e3690(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a8e38bc(plVar4,param_2);
  FUN_10a052e3c(param_4);
  fVar15 = *(float *)(plVar4 + 7);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a8e36f8; end: 10a8e37b3;  */

void FUN_10a8e36f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8e38bc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 7);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8e37b4; end: 10a8e38bb;  */

void FUN_10a8e37b4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a8e3690(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8e38a8);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 7) = fVar2;
  FUN_10ad10d1c(param_2[5] + 0x15260,0xe0006);
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a8e38bc; end: 10a8e3923;  */

void FUN_10a8e38bc(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a8e38bc(plVar4,param_2);
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  *(undefined8 *)(extraout_x8 + 2) = 0x40c0000000000000;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a8e3924; end: 10a8e39d7;  */

void FUN_10a8e3924(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8e38bc(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x40c0000000000000;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8e39d8; end: 10a8e3bcf;  */

void FUN_10a8e39d8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_5;
  (**(code **)(*param_5 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_5;
  FUN_10a8e3bd0(param_5,param_6);
  FUN_10a8e1a70(param_8);
  FUN_10a1f7d54(&puStack_98,param_5,param_7);
  plVar7 = param_5;
  func_0x00010a0655d8(param_5,param_7 + 0x10);
  FUN_10a1f7d54(&plStack_a8,param_5,param_7 + 0x20);
  uVar12 = puStack_98[1];
  FUN_10a8bcad0(&uStack_78,plVar7);
  FUN_10a8bc9e4(uVar12,&uStack_78);
  uStack_78 = *puStack_98;
  lStack_70 = puStack_98[1];
  lStack_88 = *plStack_a8;
  lStack_80 = plStack_a8[1];
  FUN_10ad12214(plVar6[5],&uStack_78,plVar7,&lStack_88);
  if (plStack_a0 != (long *)0x0) {
    plVar6 = plStack_a0 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  if (plStack_90 != (long *)0x0) {
    plVar6 = plStack_90 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  uStack_78 = CONCAT44(param_3,param_2);
  lStack_70 = CONCAT44(lStack_70._4_4_,param_4);
  FUN_10a065390(param_1,param_5,&uStack_78);
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar6;
  lVar14 = plVar5[0x4c];
  lVar11 = lVar14 - lVar10;
  uVar16 = lVar11 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    lVar15 = plVar5[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar15 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar11;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar10,lVar11);
          *plVar6 = lVar13;
          plVar5[0x4c] = lVar14 + uVar17 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          uStack_78 = lVar10;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar5[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar8 < uVar16) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar14 != lVar10) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a8e3bd0; end: 10a8e3c37;  */

void FUN_10a8e3bd0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a8e3e28(plVar4,param_2);
  FUN_10a052e3c(param_4);
  fVar15 = *(float *)(plVar4 + 7);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a8e3c38; end: 10a8e3cf3;  */

void FUN_10a8e3c38(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8e3e28(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 7);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8e3cf4; end: 10a8e3e27;  */

void FUN_10a8e3cf4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a8e3bd0(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 == 3) {
    fVar2 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar2 = 0.0;
    }
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if (0.0 <= fVar2) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar2)) {
        bVar4 = fVar2 < 200.0;
        bVar5 = fVar2 == 200.0;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) {
      *(float *)(param_2 + 7) = fVar2;
      FUN_10ad0f0bc(param_2[5] + 0x1a120,0xf000e,*(undefined4 *)(param_2[5] + 0x1a178));
      *param_1 = 0;
      plVar1 = plVar8 + 0x4b;
      lVar9 = plVar8[0x59];
      uVar10 = lVar9 - 1;
      plVar8[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar1[lVar9 + 2];
        if (plVar8[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar10) {
          return;
        }
      }
      lVar9 = *plVar1;
      lVar14 = plVar8[0x4c];
      lVar12 = lVar14 - lVar9;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar10) {
        uVar17 = uVar10 - uVar16;
        lVar15 = plVar8[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = lVar15 - lVar9 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar1;
            if (uVar11 >> 0x3c == 0) {
              lVar7 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar7 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar9,lVar12);
              *plVar1 = lVar13;
              plVar8[0x4c] = lVar14 + uVar17 * 0x10;
              plVar8[0x4d] = lVar7 + uVar11 * 0x10;
              lStack_88 = lVar9;
              lStack_80 = lVar9;
              lStack_78 = lVar9;
              lStack_70 = lVar15;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar8[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar10 < uVar16) {
        lVar9 = lVar9 + uVar10 * 0x10;
        while (lVar14 != lVar9) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar8[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar10;
      return;
    }
    FUN_10a00946c(&UNK_10f680290);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8e3e14);
  (*pcVar3)();
}



/* Entry: 10a8e3e28; end: 10a8e3e8f;  */

void FUN_10a8e3e28(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a8e3e28(plVar4,param_2);
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  *(undefined8 *)(extraout_x8 + 2) = 0x40c0000000000000;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a8e3e90; end: 10a8e3f43;  */

void FUN_10a8e3e90(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8e3e28(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x40c0000000000000;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8e3f44; end: 10a8e3fc7;  */

void FUN_10a8e3f44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x100;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110c2b620;
  FUN_10ad1dbe0(puVar2,param_2,param_3,param_4,param_5,2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a8e3fc8; end: 10a8e3fd7;  */

void FUN_10a8e3fc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b620;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8e3fd8; end: 10a8e3ff7;  */

void FUN_10a8e3fd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b620;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e3ff8; end: 10a8e4003;  */

long * FUN_10a8e3ff8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  func_0x00010a8e4080(param_1 + 0x20);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010a8e40c8(plVar1);
  }
  return plVar1;
}



/* Entry: 10a8e4004; end: 10a8e4157;  */

long * FUN_10a8e4004(long *param_1)

{
  long lVar1;
  
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  func_0x00010a8e4080(param_1 + 1);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010a8e40c8(param_1);
  }
  return param_1;
}



/* Entry: 10a8e4158; end: 10a8e4207;  */

void FUN_10a8e4158(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110c2b670;
  FUN_10ad1d944(param_1,param_2,puVar2,param_4,param_5,param_6,param_7,param_8);
  *param_3 = puVar2;
  param_3[1] = puVar1;
  return;
}



/* Entry: 10a8e4208; end: 10a8e4217;  */

void FUN_10a8e4208(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b670;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8e4218; end: 10a8e4237;  */

void FUN_10a8e4218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b670;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e4238; end: 10a8e429b;  */

void FUN_10a8e4238(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  FUN_10a8e42a0(param_1 + 0x60,0);
  lVar1 = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = 0;
  if (lVar1 != 0) {
    FUN_10a8e42c8();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8e429c; end: 10a8e429f;  */

void FUN_10a8e429c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e42a0; end: 10a8e42c7;  */

void FUN_10a8e42a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a8e4004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8e42c8; end: 10a8e437f;  */

void FUN_10a8e42c8(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x50) != 0) {
      *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x50);
      __ZdlPv();
    }
    lStack_28 = param_2 + 0x38;
    FUN_10a0ca968(&lStack_28);
    if (*(long *)(param_2 + 0x20) != 0) {
      *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x20);
      __ZdlPv();
    }
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10a8e4380; end: 10a8e4447;  */

void FUN_10a8e4380(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110c2b6c0;
  FUN_10ad1cf08(param_1,param_2,puVar2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  *param_3 = puVar2;
  param_3[1] = puVar1;
  return;
}



/* Entry: 10a8e4448; end: 10a8e4457;  */

void FUN_10a8e4448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b6c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8e4458; end: 10a8e4477;  */

void FUN_10a8e4458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b6c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e4478; end: 10a8e44ef;  */

void FUN_10a8e4478(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  FUN_10a8e42a0(param_1 + 0x78,0);
  lVar1 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = 0;
  if (lVar1 != 0) {
    FUN_10a8e42c8();
  }
  lVar1 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = 0;
  if (lVar1 != 0) {
    FUN_10a8e44f4();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8e44f0; end: 10a8e44f3;  */

void FUN_10a8e44f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e44f4; end: 10a8e4583;  */

void FUN_10a8e44f4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x18) != 0) {
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a8e4584; end: 10a8e45f3;  */

void FUN_10a8e4584(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110c2b710;
  FUN_10ad1cd14(puVar2,param_2,param_3);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a8e45f4; end: 10a8e4603;  */

void FUN_10a8e45f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b710;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8e4604; end: 10a8e4623;  */

void FUN_10a8e4604(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b710;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e4624; end: 10a8e463f;  */

void FUN_10a8e4624(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8e4640; end: 10a8e4697;  */

long FUN_10a8e4640(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a8e4698; end: 10a8e4707;  */

void FUN_10a8e4698(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110c2b760;
  FUN_10ad1cb4c(puVar2,param_2,param_3);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a8e4708; end: 10a8e4717;  */

void FUN_10a8e4708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b760;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8e4718; end: 10a8e4737;  */

void FUN_10a8e4718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b760;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e4738; end: 10a8e4753;  */

void FUN_10a8e4738(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8e4754; end: 10a8e47ab;  */

long FUN_10a8e4754(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a8e47ac; end: 10a8e4817;  */

void FUN_10a8e47ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x1d318;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110c2b7b0;
  FUN_10ad122f8(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a8e4818; end: 10a8e4827;  */

void FUN_10a8e4818(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b7b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8e4828; end: 10a8e4847;  */

void FUN_10a8e4828(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b7b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e4848; end: 10a8e4877;  */

/* WARNING: Possible PIC construction at 0x00010a8e4860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8e4864) */

long FUN_10a8e4848(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x152d8));
  if (*(long *)(param_1 + 0x152e0) != 0) {
    *(long *)(param_1 + 0x152e8) = *(long *)(param_1 + 0x152e0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x152c0) != 0) {
    *(long *)(param_1 + 0x152c8) = *(long *)(param_1 + 0x152c0);
    __ZdlPv();
  }
  return param_1 + 0x152b8;
}



/* Entry: 10a8e4878; end: 10a8e487b;  */

void FUN_10a8e4878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e487c; end: 10a8e48d3;  */

long FUN_10a8e487c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a8e48d4; end: 10a8e493f;  */

void FUN_10a8e48d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x1a198;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110c2b800;
  FUN_10ad12080(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a8e4940; end: 10a8e494f;  */

void FUN_10a8e4940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b800;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8e4950; end: 10a8e496f;  */

void FUN_10a8e4950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b800;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8e4970; end: 10a8e497f;  */

long FUN_10a8e4970(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x1a158));
  if (*(long *)(param_1 + 0x1a160) != 0) {
    *(long *)(param_1 + 0x1a168) = *(long *)(param_1 + 0x1a160);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x1a140) != 0) {
    *(long *)(param_1 + 0x1a148) = *(long *)(param_1 + 0x1a140);
    __ZdlPv();
  }
  return param_1 + 0x1a138;
}



/* Entry: 10a8e4980; end: 10a8e49d7;  */

long FUN_10a8e4980(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a8e49d8; end: 10a8e49ff;  */

void FUN_10a8e49d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a8e4a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8e4a00; end: 10a8e4a97;  */

long * FUN_10a8e4a00(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_10a09a130(param_1 + 0x19);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  func_0x00010a0eb124(param_1 + 0x13);
  func_0x00010a0eb124(param_1 + 0x11);
  func_0x00010a09dbbc(param_1 + 0xf);
  plVar1 = (long *)param_1[0xc];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a1ae89c(plVar1 + 4,0);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[10];
  param_1[10] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  FUN_10a8e4a98(param_1 + 5);
  func_0x00010a0eb280(param_1,param_1[2]);
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a8e4a98; end: 10a8e4b0b;  */

long * FUN_10a8e4a98(long *param_1)

{
  long lVar1;
  
  func_0x00010a8e4ad0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a8e4b0c; end: 10a8e4c07;  */

undefined1  [16] FUN_10a8e4b0c(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2ca08;
  puVar1 = &UNK_10f67fb58;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c2ca08;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c46558;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8e4c08; end: 10a8e4c6b;  */

ulong FUN_10a8e4c08(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e4c6c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a8e4c6c,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a8e4c6c; end: 10a8e4d87;  */

void FUN_10a8e4c6c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      if (*(char *)((long)plVar6 + 0x107) < '\0') {
        if (plVar6[0x1f] < 0) goto LAB_10a8e4d70;
        plVar6 = (long *)plVar6[0x1e];
      }
      else {
        plVar6 = plVar6 + 0x1e;
      }
      FUN_10a49049c(param_1,param_2,plVar6);
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
LAB_10a8e4d70:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8e4d74);
  (*pcVar1)();
}



/* Entry: 10a8e4d88; end: 10a8e4e9b;  */

void FUN_10a8e4d88(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6810b4,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8e4e44);
  (*pcVar4)();
}



/* Entry: 10a8e4e9c; end: 10a8e4efb;  */

void FUN_10a8e4e9c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a8e4efc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a8e4efc; end: 10a8e4f43;  */

undefined8 * FUN_10a8e4efc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9f108;
  FUN_10a8e4f44(param_1 + 3);
  return param_1;
}



/* Entry: 10a8e4f44; end: 10a8e4fe3;  */

undefined8 FUN_10a8e4f44(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar5 = (long *)param_3[1];
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10ad76ab8(param_1,param_2,&uStack_30);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}


