/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6fb154; end: 10b6fb15b; -[SCMemoriesMediaRetrievalUrlResult url] */

undefined8 FUN_10b6fb154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fb15c; end: 10b6fb163; -[SCMemoriesMediaRetrievalUrlResult key] */

undefined8 FUN_10b6fb15c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fb164; end: 10b6fb16b; -[SCMemoriesMediaRetrievalUrlResult iv] */

undefined8 FUN_10b6fb164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6fb16c; end: 10b6fb1a7; -[SCMemoriesMediaRetrievalUrlResult .cxx_destruct] */

void FUN_10b6fb16c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6fb1a8; end: 10b6fb31b;  */

undefined ** FUN_10b6fb1a8(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10b6fb31c; end: 10b6fb397; +[MemoriesSnap descriptor] */

undefined * FUN_10b6fb31c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca57a0,
                        &PTR____CFConstantStringClassReference_110ecf338,
                        &PTR_s_snapchat_memories_1133bc350,&PTR_s_snapId_1133bc4c8,0x1b,0xb8,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f7e08 = puVar1;
  }
  return puRam00000001137f7e08;
}



/* Entry: 10b6fb398; end: 10b6fb3ff; +[ExternalMetadata descriptor] */

void FUN_10b6fb398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca57f0,
                        &PTR____CFConstantStringClassReference_110f728b8,
                        &PTR_s_snapchat_memories_1133bc350,&PTR_DAT_1133bc368,2,0x18,0x1c);
    puRam00000001137f7e10 = puVar1;
  }
  return;
}



/* Entry: 10b6fb400; end: 10b6fb467; +[DreamSnapMetadata descriptor] */

void FUN_10b6fb400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5840,
                        &PTR____CFConstantStringClassReference_110f728d8,
                        &PTR_s_snapchat_memories_1133bc350,&PTR_s_dreamPackId_1133bc408,6,0x38,0x1c)
    ;
    puRam00000001137f7e18 = puVar1;
  }
  return;
}



/* Entry: 10b6fb468; end: 10b6fb54b; +[Place descriptor] */

void FUN_10b6fb468(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5890,
                        &PTR____CFConstantStringClassReference_110dcb618,
                        &PTR_s_snapchat_memories_1133bc350,&PTR_s_id_p_1133bc3a8,3,0x18,0x1c);
    puRam00000001137f7e20 = puVar1;
  }
  return;
}



/* Entry: 10b6fb54c; end: 10b6fb567;  */

bool FUN_10b6fb54c(uint param_1)

{
  return param_1 < 4 || param_1 == 0xffffd8f1;
}



/* Entry: 10b6fb568; end: 10b6fb5f7;  */

undefined * FUN_10b6fb568(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f7e30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f728f8,
                        &UNK_10e5d3df4,&UNK_10e5d3e1c,4,FUN_10b6fb5f8,0,&UNK_10e5d3e2c);
    do {
      if (puRam00000001137f7e30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f7e30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f7e30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f7e30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f7e30;
}



/* Entry: 10b6fb5f8; end: 10b6fb613;  */

bool FUN_10b6fb5f8(uint param_1)

{
  return param_1 < 3 || param_1 == 0xffffd8f1;
}



/* Entry: 10b6fb614; end: 10b6fb68f;  */

undefined * FUN_10b6fb614(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f7e38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f72918,
                        &UNK_10e5d3e3c,&UNK_10e5d4208,0x56,FUN_10b6fb690,0);
    do {
      if (puRam00000001137f7e38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f7e38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f7e38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f7e38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f7e38;
}



/* Entry: 10b6fb690; end: 10b6fb86f;  */

undefined8 FUN_10b6fb690(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (param_1 < 17000) {
    if (param_1 < 9000) {
      if (param_1 < 5000) {
        if (2999 < param_1) {
          if (param_1 - 4000U < 3) {
            return uVar1;
          }
          if (param_1 == 3000) {
            return uVar1;
          }
          return 0;
        }
        if (param_1 - 2000U < 3) {
          return uVar1;
        }
        if (param_1 != 0) {
          if (param_1 != 1000) {
            return 0;
          }
          return uVar1;
        }
        return uVar1;
      }
      if (param_1 < 6000) {
        if (param_1 - 5000U < 5) {
          return uVar1;
        }
        return 0;
      }
      if (param_1 - 6000U < 2) {
        return uVar1;
      }
      if (param_1 == 7000) {
        return uVar1;
      }
      iVar2 = 8000;
    }
    else if (param_1 < 13000) {
      if (param_1 < 10000) {
        iVar2 = -9000;
LAB_10b6fb794:
        if ((uint)(param_1 + iVar2) < 7) {
          return uVar1;
        }
        return 0;
      }
      if (param_1 - 11000U < 2) {
        return uVar1;
      }
      if (param_1 == 10000) {
        return uVar1;
      }
      iVar2 = 12000;
    }
    else {
      if (param_1 < 14000) {
        iVar2 = -13000;
        goto LAB_10b6fb794;
      }
      if (param_1 == 14000) {
        return uVar1;
      }
      if (param_1 == 15000) {
        return uVar1;
      }
      iVar2 = 16000;
    }
  }
  else if (param_1 < 21000) {
    if (param_1 - 17000U < 0x12) {
      return uVar1;
    }
    if (param_1 == 18000) {
      return uVar1;
    }
    iVar2 = 20000;
  }
  else {
    if (param_1 < 22000) {
      if (param_1 - 21000U < 0x10) {
        return uVar1;
      }
      return 0;
    }
    if (param_1 < 23000) {
      if (10 < param_1 - 22000U) {
        return 0;
      }
      if ((1 << (ulong)(param_1 - 22000U & 0x1f) & 0x6bbU) != 0) {
        return uVar1;
      }
      return 0;
    }
    if (param_1 == 23000) {
      return uVar1;
    }
    if (param_1 == 24000) {
      return uVar1;
    }
    iVar2 = 25000;
  }
  if (param_1 == iVar2) {
    return uVar1;
  }
  return 0;
}



/* Entry: 10b6fb870; end: 10b6fb8eb;  */

undefined * FUN_10b6fb870(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f7e40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f72938,
                        &UNK_10e5d4360,&UNK_10e5d43c4,5,FUN_10b6fb8ec,0);
    do {
      if (puRam00000001137f7e40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f7e40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f7e40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f7e40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f7e40;
}



/* Entry: 10b6fb8ec; end: 10b6fb8f7;  */

bool FUN_10b6fb8ec(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b6fb8f8; end: 10b6fb95f; +[SCMemIDID descriptor] */

void FUN_10b6fb8f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5a20,
                        &PTR____CFConstantStringClassReference_110e77bb8,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_s_keysArray_1133bc858,1,0x10,0x1c);
    puRam00000001137f7e48 = puVar1;
  }
  return;
}



/* Entry: 10b6fb960; end: 10b6fb9c7; +[SCMemIDIDs descriptor] */

void FUN_10b6fb960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5a70,
                        &PTR____CFConstantStringClassReference_110f72958,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_DAT_1133bc878,1,0x10,0x1c);
    puRam00000001137f7e50 = puVar1;
  }
  return;
}



/* Entry: 10b6fb9c8; end: 10b6fba53; +[SCMemIDKey descriptor] */

undefined * FUN_10b6fb9c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5c28,
                        &PTR____CFConstantStringClassReference_110f72978,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_DAT_1133bca78,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137f7e58 = puVar1;
  }
  return puRam00000001137f7e58;
}



/* Entry: 10b6fba54; end: 10b6fbad7; +[SCMemIDKey_CreationTimestamp descriptor] */

undefined * FUN_10b6fba54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5c50,
                        &PTR____CFConstantStringClassReference_110f72998,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_DAT_1133bc8d8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f7e60 = puVar1;
  }
  return puRam00000001137f7e60;
}



/* Entry: 10b6fbad8; end: 10b6fbb5b; +[SCMemIDKey_Enum descriptor] */

undefined * FUN_10b6fbad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5c78,
                        &PTR____CFConstantStringClassReference_110f729b8,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_DAT_1133bc898,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001137f7e68 = puVar1;
  }
  return puRam00000001137f7e68;
}



/* Entry: 10b6fbb5c; end: 10b6fbbdf; +[SCMemIDKey_Sentinel descriptor] */

undefined * FUN_10b6fbb5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5ca0,
                        &PTR____CFConstantStringClassReference_110f729d8,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_DAT_1133bc8b8,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001137f7e70 = puVar1;
  }
  return puRam00000001137f7e70;
}



/* Entry: 10b6fbbe0; end: 10b6fbc7b; +[SCMemIDKey_LookUpKey descriptor] */

undefined * FUN_10b6fbbe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5cc8,
                        &PTR____CFConstantStringClassReference_110f729f8,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_DAT_1133bc958,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ca5c28);
    puRam00000001137f7e78 = puVar1;
  }
  return puRam00000001137f7e78;
}



/* Entry: 10b6fbc7c; end: 10b6fbce3; +[SCMemIDDeleteID descriptor] */

void FUN_10b6fbc7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5cf0,
                        &PTR____CFConstantStringClassReference_110f72a18,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_s_id_p_1133bc9b8,3,0x20,0x1c);
    puRam00000001137f7e80 = puVar1;
  }
  return;
}



/* Entry: 10b6fbce4; end: 10b6fbd7f; +[SCMemIDDeleteID_DeltaSyncDeletionInfo descriptor] */

undefined * FUN_10b6fbce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5d18,
                        &PTR____CFConstantStringClassReference_110f72a38,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_DAT_1133bca18,3,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ca5cf0);
    puRam00000001137f7e88 = puVar1;
  }
  return puRam00000001137f7e88;
}



/* Entry: 10b6fbd80; end: 10b6fbe03; +[SCMemIDDeleteID_Params descriptor] */

undefined * FUN_10b6fbd80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5d40,
                        &PTR____CFConstantStringClassReference_110df66f8,
                        &PTR_s_snapchat_memories_1133bc840,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137f7e90 = puVar1;
  }
  return puRam00000001137f7e90;
}



/* Entry: 10b6fbe04; end: 10b6fbe6b; +[SCMemIDTimestampedID descriptor] */

void FUN_10b6fbe04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7e98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5c00,
                        &PTR____CFConstantStringClassReference_110f72a58,
                        &PTR_s_snapchat_memories_1133bc840,&PTR_s_id_p_1133bc918,2,0x18,0x1c);
    puRam00000001137f7e98 = puVar1;
  }
  return;
}



/* Entry: 10b6fbe6c; end: 10b6fbed3; +[LegacyID descriptor] */

void FUN_10b6fbe6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7ea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5de0,
                        &PTR____CFConstantStringClassReference_110f72a78,
                        &PTR_s_snapchat_memories_1133bcaf8,&PTR_DAT_1133bcb10,3,0x18,0x1c);
    puRam00000001137f7ea0 = puVar1;
  }
  return;
}



/* Entry: 10b6fbed4; end: 10b6fbf3b; +[LegacyIDIndex descriptor] */

void FUN_10b6fbed4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7ea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5e30,
                        &PTR____CFConstantStringClassReference_110f72a98,
                        &PTR_s_snapchat_memories_1133bcaf8,&PTR_DAT_1133bcb70,3,0x18,0x1c);
    puRam00000001137f7ea8 = puVar1;
  }
  return;
}



/* Entry: 10b6fbf3c; end: 10b6fbfa3; +[LegacyIDs descriptor] */

void FUN_10b6fbf3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7eb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca5e80,
                        &PTR____CFConstantStringClassReference_110f72ab8,
                        &PTR_s_snapchat_memories_1133bcaf8,&PTR_DAT_1133bcbd0,3,0x20,0x1c);
    puRam00000001137f7eb0 = puVar1;
  }
  return;
}



/* Entry: 10b6fbfa4; end: 10b6fc017; -[SCSpectaclesCircumstanceEngineConfigs loadConfigsWithCompletionHandler:] */

void FUN_10b6fbfa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d98(uVar3,uVar2,param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6fc018; end: 10b6fc01f; -[SCSpectaclesCircumstanceEngineConfigs spectaclesSnapStoreEnabled] */

undefined1 FUN_10b6fc018(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b6fc020; end: 10b6fc027; -[SCSpectaclesCircumstanceEngineConfigs spectaclesSnapStoreDeeplinkURL] */

undefined8 FUN_10b6fc020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6fc028; end: 10b6fc02f; -[SCSpectaclesCircumstanceEngineConfigs cheeriosSnapStoreDeeplinkURL] */

undefined8 FUN_10b6fc028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6fc030; end: 10b6fc037; -[SCSpectaclesCircumstanceEngineConfigs spectaclesBoomboxScreenDensity] */

undefined4 FUN_10b6fc030(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10b6fc038; end: 10b6fc03f; -[SCSpectaclesCircumstanceEngineConfigs cheeriosOnboardingUrl] */

undefined8 FUN_10b6fc038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6fc040; end: 10b6fc047; -[SCSpectaclesCircumstanceEngineConfigs matadorEnabled] */

undefined1 FUN_10b6fc040(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10b6fc048; end: 10b6fc04f; -[SCSpectaclesCircumstanceEngineConfigs matadorEncryptionDisabled] */

undefined1 FUN_10b6fc048(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 10b6fc050; end: 10b6fc057; -[SCSpectaclesCircumstanceEngineConfigs kioskModeEnabled] */

undefined1 FUN_10b6fc050(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 10b6fc058; end: 10b6fc05f; -[SCSpectaclesCircumstanceEngineConfigs blePacketSizeIncreaseEnabled] */

undefined1 FUN_10b6fc058(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 10b6fc060; end: 10b6fc067; -[SCSpectaclesCircumstanceEngineConfigs phoneMirroringEnabled] */

undefined1 FUN_10b6fc060(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 10b6fc068; end: 10b6fc0af; -[SCSpectaclesCircumstanceEngineConfigs .cxx_destruct] */

void FUN_10b6fc068(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fc0b0; end: 10b6fc0bb;  */

undefined ** FUN_10b6fc0b0(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3b28;
}



/* Entry: 10b6fc0bc; end: 10b6fc0fb;  */

void FUN_10b6fc0bc(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3b40;
  func_0x00010c067fc0();
  if ((ppuVar1 != (undefined **)0x1) && (ppuVar1 == (undefined **)0x2)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0bc510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uRam00000001138466e8,PTR_s_matadorEncryptionDisabled_11260cb58);
    return;
  }
  return;
}



/* Entry: 10b6fc0fc; end: 10b6fc113;  */

undefined ** FUN_10b6fc0fc(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10b6fc114; end: 10b6fc1a3;  */

undefined ** FUN_10b6fc114(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110daafd8,param_2,
                      &PTR____CFConstantStringClassReference_110dc7b18);
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10b6fc1a4; end: 10b6fc1af;  */

void FUN_10b6fc1a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3b70,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 10b6fc1b0; end: 10b6fc1d3;  */

bool FUN_10b6fc1b0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3b70;
  func_0x00010c067fc0(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3b70);
  return ppuVar1 != (undefined **)0x0;
}



/* Entry: 10b6fc1d4; end: 10b6fc1df;  */

undefined ** FUN_10b6fc1d4(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10b6fc1e0; end: 10b6fc21f;  */

void FUN_10b6fc1e0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3b40;
  func_0x00010c067fc0();
  if ((ppuVar1 != (undefined **)0x1) && (ppuVar1 == (undefined **)0x2)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0bc4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uRam00000001138466e8,PTR_s_matadorEnabled_11260cb50);
    return;
  }
  return;
}



/* Entry: 10b6fc220; end: 10b6fc237;  */

undefined8 FUN_10b6fc220(void)

{
  return 0;
}



/* Entry: 10b6fc238; end: 10b6fc277;  */

void FUN_10b6fc238(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3b40;
  func_0x00010c067fc0();
  if ((ppuVar1 != (undefined **)0x1) && (ppuVar1 == (undefined **)0x2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uRam00000001138466e8,PTR_s_blePacketSizeIncreaseEnabled_1125a4c68);
    return;
  }
  return;
}



/* Entry: 10b6fc278; end: 10b6fc283;  */

void FUN_10b6fc278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3b88,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 10b6fc284; end: 10b6fc307; -[SCSpectaclesContentGroup initWithContent:numberOfThumbnails:] */

undefined1 *
FUN_10b6fc284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112709eb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fc308; end: 10b6fc3a7; -[SCSpectaclesContentGroup isEqual:] */

bool FUN_10b6fc308(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 8);
        if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071b60(), (int)lVar4 != 0)) {
          bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
          goto LAB_10b6fc38c;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b6fc38c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6fc3a8; end: 10b6fc3cb; -[SCSpectaclesContentGroup copyWithZone:] */

undefined8 FUN_10b6fc3a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fc3cc; end: 10b6fc3d3; -[SCSpectaclesContentGroup content] */

undefined8 FUN_10b6fc3cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fc3d4; end: 10b6fc3db; -[SCSpectaclesContentGroup numberOfThumbnails] */

undefined8 FUN_10b6fc3d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fc3dc; end: 10b6fc3e7; -[SCSpectaclesContentGroup .cxx_destruct] */

void FUN_10b6fc3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fc3e8; end: 10b6fc56f; -[SCSpectaclesTransferSession initWithDevice:batchId:sessionStartTime:channel:transferType:untransferredContentByComponent:transferredContentByComponent:currentlyTransferringContent:component:progress:] */

undefined1 *
FUN_10b6fc3e8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_112709ec0;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = param_12;
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fc570; end: 10b6fc577; -[SCSpectaclesTransferSession device] */

undefined8 FUN_10b6fc570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fc578; end: 10b6fc57f; -[SCSpectaclesTransferSession batchID] */

undefined8 FUN_10b6fc578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fc580; end: 10b6fc587; -[SCSpectaclesTransferSession sessionStartTime] */

undefined8 FUN_10b6fc580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6fc588; end: 10b6fc58f; -[SCSpectaclesTransferSession channel] */

undefined8 FUN_10b6fc588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6fc590; end: 10b6fc597; -[SCSpectaclesTransferSession transferType] */

undefined8 FUN_10b6fc590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6fc598; end: 10b6fc59f; -[SCSpectaclesTransferSession untransferredContentByComponent] */

undefined8 FUN_10b6fc598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b6fc5a0; end: 10b6fc5a7; -[SCSpectaclesTransferSession transferredContentByComponent] */

undefined8 FUN_10b6fc5a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b6fc5a8; end: 10b6fc5af; -[SCSpectaclesTransferSession currentlyTransferringContent] */

undefined8 FUN_10b6fc5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b6fc5b0; end: 10b6fc5b7; -[SCSpectaclesTransferSession component] */

undefined8 FUN_10b6fc5b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b6fc5b8; end: 10b6fc5bf; -[SCSpectaclesTransferSession progress] */

undefined4 FUN_10b6fc5b8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b6fc5c0; end: 10b6fc61f; -[SCSpectaclesTransferSession .cxx_destruct] */

void FUN_10b6fc5c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6fc620; end: 10b6fc6a7; -[SCSpectaclesHomeWifiAP initWithState:ssid:] */

undefined1 *
FUN_10b6fc620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709ec8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fc6a8; end: 10b6fc6cb; -[SCSpectaclesHomeWifiAP copyWithZone:] */

undefined8 FUN_10b6fc6a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fc6cc; end: 10b6fc733; -[SCSpectaclesHomeWifiAP hash] */

long * FUN_10b6fc6cc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b6fc7b8;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b6fc7b8;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b6fc7b8;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b6fc7b8:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b6fc734; end: 10b6fc7d3; -[SCSpectaclesHomeWifiAP isEqual:] */

long FUN_10b6fc734(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fc7b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b6fc7b8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b6fc7b8;
    }
  }
  lVar3 = 1;
LAB_10b6fc7b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fc7d4; end: 10b6fc7db; -[SCSpectaclesHomeWifiAP state] */

undefined8 FUN_10b6fc7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fc7dc; end: 10b6fc7e3; -[SCSpectaclesHomeWifiAP ssid] */

undefined8 FUN_10b6fc7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fc7e4; end: 10b6fc7ef; -[SCSpectaclesHomeWifiAP .cxx_destruct] */

void FUN_10b6fc7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6fc7f0; end: 10b6fc927; -[SCSpectaclesServerDevice initWithSerialNumber:displayName:color:firstPairedTimestamp:lastPairedStatusUpdatedTimestamp:lastNameUpdatedTimestamp:deviceNumber:firmwareVersion:hardwareVersion:] */

undefined1 *
FUN_10b6fc7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112709ed0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fc928; end: 10b6fc94b; -[SCSpectaclesServerDevice copyWithZone:] */

undefined8 FUN_10b6fc928(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fc94c; end: 10b6fc9f7; -[SCSpectaclesServerDevice hash] */

undefined8 * FUN_10b6fc94c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b6fcaf8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6fcb04;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
        ((*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x40);
          if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
            if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
              func_0x00010c071ae0();
              goto LAB_10b6fcb04;
            }
            goto LAB_10b6fcaf8;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b6fcb04:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b6fc9f8; end: 10b6fcb1f; -[SCSpectaclesServerDevice isEqual:] */

long FUN_10b6fc9f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6fcaf8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fcb04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x40);
          if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x48);
            if (lVar3 != *(long *)(param_3 + 0x48)) {
              func_0x00010c071ae0();
              goto LAB_10b6fcb04;
            }
            goto LAB_10b6fcaf8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6fcb04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fcb20; end: 10b6fcb27; -[SCSpectaclesServerDevice serialNumber] */

undefined8 FUN_10b6fcb20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fcb28; end: 10b6fcb2f; -[SCSpectaclesServerDevice displayName] */

undefined8 FUN_10b6fcb28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fcb30; end: 10b6fcb37; -[SCSpectaclesServerDevice color] */

undefined8 FUN_10b6fcb30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fcb38; end: 10b6fcb3f; -[SCSpectaclesServerDevice firstPairedTimestamp] */

undefined8 FUN_10b6fcb38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6fcb40; end: 10b6fcb47; -[SCSpectaclesServerDevice lastPairedStatusUpdatedTimestamp] */

undefined8 FUN_10b6fcb40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6fcb48; end: 10b6fcb4f; -[SCSpectaclesServerDevice lastNameUpdatedTimestamp] */

undefined8 FUN_10b6fcb48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6fcb50; end: 10b6fcb57; -[SCSpectaclesServerDevice deviceNumber] */

undefined8 FUN_10b6fcb50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b6fcb58; end: 10b6fcb5f; -[SCSpectaclesServerDevice firmwareVersion] */

undefined8 FUN_10b6fcb58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b6fcb60; end: 10b6fcb67; -[SCSpectaclesServerDevice hardwareVersion] */

undefined8 FUN_10b6fcb60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b6fcb68; end: 10b6fcbaf; -[SCSpectaclesServerDevice .cxx_destruct] */

void FUN_10b6fcb68(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fcbb0; end: 10b6fcc87; -[SCSpectaclesCalibration initWithCoder:] */

undefined1 * FUN_10b6fcbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709ed8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fcc88; end: 10b6fcd47; -[SCSpectaclesCalibration initWithData:majorVersion:minorVersion:serialNumber:] */

undefined1 *
FUN_10b6fcc88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112709ed8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fcd48; end: 10b6fcd6b; -[SCSpectaclesCalibration copyWithZone:] */

undefined8 FUN_10b6fcd48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fcd6c; end: 10b6fcdf3; -[SCSpectaclesCalibration encodeWithCoder:] */

void FUN_10b6fcd6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eb6cf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f72c38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f72c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f72c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6fcdf4; end: 10b6fce73; -[SCSpectaclesCalibration hash] */

undefined8 * FUN_10b6fcdf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b6fcf14:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b6fcf20;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b6fcf20;
        }
        goto LAB_10b6fcf14;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b6fcf20:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6fce74; end: 10b6fcf3b; -[SCSpectaclesCalibration isEqual:] */

long FUN_10b6fce74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6fcf14:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fcf20;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b6fcf20;
        }
        goto LAB_10b6fcf14;
      }
    }
    lVar3 = 0;
  }
LAB_10b6fcf20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fcf3c; end: 10b6fcf43; -[SCSpectaclesCalibration data] */

undefined8 FUN_10b6fcf3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fcf44; end: 10b6fcf4b; -[SCSpectaclesCalibration majorVersion] */

undefined8 FUN_10b6fcf44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


